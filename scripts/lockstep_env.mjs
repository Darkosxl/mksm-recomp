#!/usr/bin/env node
// Test environment for the browser lockstep netcode tests: signal.mjs with throwaway secrets behind a
// same-origin static server (COOP/COEP, /turn and /ws proxied with the invite cookie injected), plus
// headless Chromium instances driven over CDP. Node >= 24, built-ins only (server/ needs `npm install`).
//
//   import { startEnv, launchBrowser } from './lockstep_env.mjs';
//   node scripts/lockstep_env.mjs --smoke
import { spawn } from 'node:child_process';
import { randomBytes } from 'node:crypto';
import { createReadStream, mkdtempSync, readFileSync, rmSync, statSync, writeFileSync } from 'node:fs';
import { createServer } from 'node:http';
import { connect, createServer as createTcpServer } from 'node:net';
import { tmpdir } from 'node:os';
import { dirname, extname, join, resolve, sep } from 'node:path';
import { fileURLToPath } from 'node:url';

const SERVER_DIR = resolve(dirname(fileURLToPath(import.meta.url)), '..', 'server');
const CHROMIUM = process.env.CHROMIUM || '/home/darkwarro/.local/bin/chromium';
const ISOLATION = {
  'Cross-Origin-Opener-Policy': 'same-origin',
  'Cross-Origin-Embedder-Policy': 'require-corp',
  'Cross-Origin-Resource-Policy': 'same-origin',
  'Cache-Control': 'no-store',
};
const TYPES = {
  '.html': 'text/html; charset=utf-8', '.js': 'text/javascript; charset=utf-8', '.mjs': 'text/javascript; charset=utf-8',
  '.json': 'application/json', '.css': 'text/css; charset=utf-8', '.md': 'text/markdown; charset=utf-8', '.wasm': 'application/wasm',
};
const sleep = (ms) => new Promise((r) => setTimeout(r, ms));

// Everything we spawn or create is killed / removed on exit, even if close() is never called.
const children = new Set(), tempDirs = new Set();
let hooked = false;
function track(child, group = false) {
  if (!hooked) {
    hooked = true;
    process.on('exit', () => {
      for (const c of children) try { process.kill(c.group ? -c.pid : c.pid, 'SIGKILL'); } catch {}
      for (const d of tempDirs) try { rmSync(d, { recursive: true, force: true }); } catch {}
    });
    // Default SIGINT/SIGTERM handling skips 'exit' handlers; turn them into a normal exit.
    for (const [sig, n] of [['SIGINT', 2], ['SIGTERM', 15], ['SIGHUP', 1]])
      if (!process.listenerCount(sig)) process.once(sig, () => process.exit(128 + n));
  }
  child.group = group;
  child.exited = new Promise((r) => child.once('exit', r));
  children.add(child);
  child.once('exit', () => children.delete(child));
  return child;
}
const tempDir = (prefix) => { const d = mkdtempSync(join(tmpdir(), prefix)); tempDirs.add(d); return d; };
const removeDir = (d) => { rmSync(d, { recursive: true, force: true, maxRetries: 3 }); tempDirs.delete(d); };

// SIGTERM, then SIGKILL after graceMs; resolves once the process has exited.
async function stop(child, graceMs) {
  if (child.exitCode === null && child.signalCode === null) {
    child.kill('SIGTERM');
    const timer = setTimeout(() => child.kill('SIGKILL'), graceMs);
    await child.exited;
    clearTimeout(timer);
  }
  if (child.group) try { process.kill(-child.pid, 'SIGKILL'); } catch {} // stragglers in its process group
}

const freePort = () => new Promise((res, rej) => {
  const s = createTcpServer().once('error', rej).listen(0, '127.0.0.1', () => {
    const { port } = s.address();
    s.close(() => res(port));
  });
});

// ---- signal.mjs + same-origin static/proxy server ----

export async function startEnv({ webRoot }) {
  const root = resolve(webRoot);
  const tmp = tempDir('lockstep-env-');
  const key = () => randomBytes(32).toString('hex');
  const adminSecret = key();
  const env = {
    ...process.env, COOKIE_SECRET: key(), ADMIN_SECRET: adminSecret, TURN_SECRET: key(),
    HOST: '127.0.0.1', PORT: '0', DATA_DIR: join(tmp, 'data'), TURN_HOST: '127.0.0.1', TURN_PORT: String(await freePort()),
  };
  delete env.PUBLIC_ORIGIN; // no Origin check, invite links use the Host header
  const signal = track(spawn(process.execPath, ['signal.mjs'], { cwd: SERVER_DIR, env, stdio: ['ignore', 'pipe', 'pipe'] }));
  let output = '';
  const signalPort = await new Promise((res, rej) => {
    const timer = setTimeout(() => rej(new Error(`signal.mjs did not start:\n${output}`)), 10_000);
    const onData = (d) => {
      output = (output + d).slice(-4000);
      const m = output.match(/listening on http:\/\/127\.0\.0\.1:(\d+)/);
      if (m) { clearTimeout(timer); res(Number(m[1])); }
    };
    signal.stdout.on('data', onData);
    signal.stderr.on('data', onData);
    signal.once('exit', (code) => { clearTimeout(timer); rej(new Error(`signal.mjs exited with ${code}:\n${output}`)); });
  }).catch(async (e) => { await stop(signal, 1000); removeDir(tmp); throw e; });
  const signalOrigin = `http://127.0.0.1:${signalPort}`;

  let cookie;
  try {
    const mint = await fetch(`${signalOrigin}/admin/invite?uses=100&note=lockstep-test`, { method: 'POST', headers: { authorization: `Bearer ${adminSecret}` } });
    if (mint.status !== 201) throw new Error(`POST /admin/invite: HTTP ${mint.status}`);
    const { link } = await mint.json();
    const redeem = await fetch(`${signalOrigin}/invite${new URL(link).search}`, { redirect: 'manual' });
    cookie = (redeem.headers.getSetCookie()[0] || '').split(';')[0];
    if (!cookie.startsWith('__Host-mksm=')) throw new Error(`GET /invite: HTTP ${redeem.status}, no cookie`);
  } catch (e) {
    await stop(signal, 1000);
    removeDir(tmp);
    throw e;
  }

  const sockets = new Set();
  const server = createServer(async (req, res) => {
    const url = new URL(req.url, 'http://local');
    if (url.pathname === '/turn') {
      try {
        const r = await fetch(signalOrigin + '/turn', { headers: { cookie } });
        res.writeHead(r.status, { ...ISOLATION, 'Content-Type': r.headers.get('content-type') || 'text/plain' }).end(Buffer.from(await r.arrayBuffer()));
      } catch (e) {
        res.writeHead(502, { ...ISOLATION, 'Content-Type': 'text/plain' }).end(`proxy error: ${e.message}\n`);
      }
      return;
    }
    const notFound = () => res.writeHead(404, { ...ISOLATION, 'Content-Type': 'text/plain' }).end('not found\n');
    if (req.method !== 'GET' && req.method !== 'HEAD') return notFound();
    let file;
    try {
      file = resolve(root, '.' + decodeURIComponent(url.pathname));
      if (file !== root && !file.startsWith(root + sep)) return notFound(); // path traversal
      if (statSync(file).isDirectory()) file = join(file, 'index.html');
      const { size } = statSync(file);
      res.writeHead(200, { ...ISOLATION, 'Content-Type': TYPES[extname(file).toLowerCase()] || 'application/octet-stream', 'Content-Length': size });
    } catch {
      return notFound();
    }
    if (req.method === 'HEAD') return res.end();
    createReadStream(file).on('error', () => res.destroy()).pipe(res);
  });

  // /ws: raw TCP pass-through to signal.mjs with the cookie injected into the upgrade request.
  server.on('upgrade', (req, socket, head) => {
    if (new URL(req.url, 'http://local').pathname !== '/ws') {
      socket.on('error', () => {});
      return socket.end('HTTP/1.1 404 Not Found\r\nConnection: close\r\nContent-Length: 0\r\n\r\n');
    }
    const upstream = connect(signalPort, '127.0.0.1');
    const lines = [`${req.method} ${req.url} HTTP/${req.httpVersion}`];
    for (let i = 0; i < req.rawHeaders.length; i += 2)
      if (req.rawHeaders[i].toLowerCase() !== 'cookie') lines.push(`${req.rawHeaders[i]}: ${req.rawHeaders[i + 1]}`);
    lines.push(`Cookie: ${cookie}`, '', '');
    upstream.write(lines.join('\r\n'));
    if (head && head.length) upstream.write(head);
    const kill = () => { socket.destroy(); upstream.destroy(); sockets.delete(socket); sockets.delete(upstream); };
    for (const s of [socket, upstream]) {
      s.setNoDelay(true);
      sockets.add(s);
      s.on('error', kill).on('close', kill);
    }
    socket.pipe(upstream).pipe(socket);
  });

  await new Promise((res, rej) => server.once('error', rej).listen(0, '127.0.0.1', res));
  const origin = `http://127.0.0.1:${server.address().port}`;

  let closing;
  const close = () => (closing ??= (async () => {
    for (const s of sockets) s.destroy();
    server.closeAllConnections();
    await Promise.all([new Promise((r) => server.close(r)), stop(signal, 1000)]);
    removeDir(tmp);
  })());
  return { origin, signalOrigin, cookie, close };
}

// ---- headless Chromium over CDP ----

const fmtArg = (a) => (a.value !== undefined ? (typeof a.value === 'string' ? a.value : JSON.stringify(a.value)) : a.unserializableValue ?? a.description ?? a.type);
const short = (s) => (s.length > 200 ? s.slice(0, 200) + '...' : s);

export async function launchBrowser(name, { log = console.log } = {}) {
  const availMb = Number(readFileSync('/proc/meminfo', 'utf8').match(/MemAvailable:\s+(\d+)/)[1]) / 1024;
  if (availMb < 3000) throw new Error(`launchBrowser(${name}): only ${Math.round(availMb)} MB MemAvailable (< 3000 MB); not launching Chromium`);

  const profile = tempDir('lockstep-chromium-');
  // XDG_CONFIG_HOME -> the temp profile keeps the distro launcher from adding the desktop's chromium-flags.conf;
  // no DISPLAY / WAYLAND_DISPLAY so nothing can ever reach the user's screen.
  const env = { ...process.env, XDG_CONFIG_HOME: profile };
  delete env.DISPLAY;
  delete env.WAYLAND_DISPLAY;
  const child = track(spawn(CHROMIUM, [
    '--headless=new', '--remote-debugging-port=0', `--user-data-dir=${profile}`, '--no-first-run', '--no-default-browser-check',
    '--mute-audio', '--disable-background-timer-throttling', '--disable-renderer-backgrounding', '--disable-backgrounding-occluded-windows',
    '--disable-features=WebRtcHideLocalIpsWithMdns', '--password-store=basic', '--window-size=800,600', 'about:blank',
  ], { env, stdio: 'ignore', detached: true }), true);

  let ws, closing;
  const close = () => (closing ??= (async () => {
    try { ws?.close(); } catch {}
    await stop(child, 2000);
    removeDir(profile);
  })());

  try {
    // DevToolsActivePort appears once the debugging port is bound; its first line is the port.
    let port = 0;
    for (const end = Date.now() + 15_000; !port; await sleep(50)) {
      if (child.exitCode !== null || child.signalCode !== null) throw new Error(`chromium exited early (${child.exitCode ?? child.signalCode})`);
      if (Date.now() > end) throw new Error('chromium did not write DevToolsActivePort within 15 s');
      try { port = Number(readFileSync(join(profile, 'DevToolsActivePort'), 'utf8').split('\n')[0]) || 0; } catch {}
    }
    let target;
    for (const end = Date.now() + 5000; !target; await sleep(100)) {
      try { target = (await (await fetch(`http://127.0.0.1:${port}/json/list`)).json()).find((t) => t.type === 'page'); } catch {}
      if (!target && Date.now() > end) throw new Error('no page target in /json/list');
    }
    ws = new WebSocket(target.webSocketDebuggerUrl);
    await new Promise((res, rej) => { ws.onopen = res; ws.onerror = () => rej(new Error('CDP WebSocket failed to open')); });
  } catch (e) {
    await close();
    throw new Error(`launchBrowser(${name}): ${e.message}`);
  }

  let nextId = 0;
  const pending = new Map(), listeners = new Map();
  ws.onmessage = (e) => {
    const m = JSON.parse(e.data);
    if (m.id !== undefined) {
      const p = pending.get(m.id);
      if (!p) return;
      pending.delete(m.id);
      if (m.error) p.reject(new Error(`[${name}] ${p.method}: ${m.error.message}${m.error.data ? ` (${m.error.data})` : ''}`));
      else p.resolve(m.result);
    } else for (const fn of listeners.get(m.method) || []) fn(m.params, m.sessionId);
  };
  ws.onclose = () => {
    for (const p of pending.values()) p.reject(new Error(`[${name}] ${p.method}: CDP socket closed`));
    pending.clear();
  };
  const call = (method, params = {}, sessionId) => new Promise((res, rej) => {
    if (ws.readyState !== WebSocket.OPEN) return rej(new Error(`[${name}] ${method}: CDP socket closed`));
    const id = ++nextId;
    pending.set(id, { resolve: res, reject: rej, method });
    ws.send(JSON.stringify(sessionId ? { id, method, params, sessionId } : { id, method, params }));
  });
  const on = (method, fn) => {
    if (!listeners.has(method)) listeners.set(method, new Set());
    listeners.get(method).add(fn);
    return () => listeners.get(method).delete(fn);
  };

  const page = {
    logs: [],
    send: (method, params) => call(method, params),
    on, // on('Page.frameNavigated', (params) => ...) -> unsubscribe function; raw CDP events

    async navigate(url, timeoutMs = 15_000) {
      let off, timer;
      const loaded = new Promise((res, rej) => {
        off = on('Page.loadEventFired', res);
        timer = setTimeout(() => rej(new Error(`[${name}] navigate(${url}): no load event within ${timeoutMs} ms`)), timeoutMs);
      });
      loaded.catch(() => {});
      try {
        const r = await call('Page.navigate', { url });
        if (r.errorText) throw new Error(`[${name}] navigate(${url}): ${r.errorText}`);
        await loaded;
      } finally {
        off();
        clearTimeout(timer);
      }
    },

    async evaluate(expression) {
      const r = await call('Runtime.evaluate', { expression, returnByValue: true, awaitPromise: true });
      if (r.exceptionDetails) {
        const d = r.exceptionDetails;
        throw Object.assign(new Error(`[${name}] evaluate(${short(expression)}): ${d.exception?.description || d.text}`), { pageException: true });
      }
      return r.result.value;
    },

    // Polls until expr is truthy and returns its value. Page exceptions count as "not yet".
    async waitFor(expr, timeoutMs = 10_000, intervalMs = 100) {
      const end = Date.now() + timeoutMs;
      for (let last;;) {
        try {
          const v = await page.evaluate(expr);
          if (v) return v;
          last = `last value: ${JSON.stringify(v)}`;
        } catch (e) {
          if (!e.pageException) throw e;
          last = `last error: ${e.message}`;
        }
        if (Date.now() >= end) throw new Error(`[${name}] waitFor timed out after ${timeoutMs} ms: ${short(expr)} (${last})`);
        await sleep(intervalMs);
      }
    },
  };

  // Console of the page and of its (module) workers, which are auto-attached as flat sessions.
  const emit = (line) => {
    page.logs.push(line);
    if (page.logs.length > 200) page.logs.shift();
    log(line);
  };
  const tag = (sessionId) => (sessionId ? `[${name}] (worker)` : `[${name}]`);
  on('Runtime.consoleAPICalled', (p, s) => emit(`${tag(s)}${p.type === 'log' ? '' : ` ${p.type}:`} ${p.args.map(fmtArg).join(' ')}`));
  on('Runtime.exceptionThrown', (p, s) => emit(`${tag(s)} exception: ${p.exceptionDetails.exception?.description || p.exceptionDetails.text}`));
  on('Target.attachedToTarget', (p) => {
    call('Runtime.enable', {}, p.sessionId).catch(() => {});
    if (p.waitingForDebugger) call('Runtime.runIfWaitingForDebugger', {}, p.sessionId).catch(() => {});
  });

  try {
    await call('Runtime.enable');
    await call('Page.enable');
    await call('Target.setAutoAttach', { autoAttach: true, waitForDebuggerOnStart: false, flatten: true });
  } catch (e) {
    await close();
    throw e;
  }
  return { name, page, close };
}

// ---- smoke test: node scripts/lockstep_env.mjs --smoke ----

async function smoke() {
  const webRoot = tempDir('lockstep-smoke-');
  writeFileSync(join(webRoot, 'm.mjs'), 'export const ok = 1;\n');
  writeFileSync(join(webRoot, 'smoke.html'), `<!doctype html><meta charset="utf-8"><title>smoke</title>
<script type="module">
import { ok } from './m.mjs';
const R = window.R = { coi: crossOriginIsolated, sab: typeof SharedArrayBuffer, mod: ok, turn: await (await fetch('/turn')).json() };
const ws = new WebSocket(location.origin.replace('http', 'ws') + '/ws');
ws.onopen = () => ws.send(JSON.stringify({ type: 'create' }));
ws.onmessage = (e) => { R.ws = JSON.parse(e.data); ws.close(); };
ws.onerror = () => { R.ws = { error: 'websocket error' }; };
console.log('smoke page loaded, coi =', crossOriginIsolated);
</script>
`);
  let env, browser, ok = false;
  try {
    env = await startEnv({ webRoot });
    console.log(`env: origin ${env.origin}, signal ${env.signalOrigin}, cookie ${env.cookie.slice(0, 20)}...`);
    const mjs = await fetch(env.origin + '/m.mjs');
    const escape = await fetch(env.origin + '/..%2f..%2fetc%2fpasswd');
    console.log(`static: m.mjs ${mjs.status} ${mjs.headers.get('content-type')} COEP=${mjs.headers.get('cross-origin-embedder-policy')}; traversal ${escape.status}`);
    browser = await launchBrowser('smoke');
    await browser.page.navigate(env.origin + '/smoke.html');
    await browser.page.waitFor('window.R && window.R.ws');
    const R = await browser.page.evaluate('window.R');
    console.log(JSON.stringify(R, null, 1));
    ok = R.coi === true && R.sab === 'function' && R.mod === 1 && Array.isArray(R.turn?.iceServers) && R.ws.type === 'created' &&
      /^[a-z2-9]{12}$/.test(R.ws.room) && mjs.status === 200 && mjs.headers.get('content-type').startsWith('text/javascript') && escape.status === 404;
  } catch (e) {
    console.error(e);
  } finally {
    await browser?.close();
    await env?.close();
    removeDir(webRoot);
  }
  console.log(ok ? 'SMOKE OK' : 'SMOKE FAILED');
  process.exit(ok ? 0 : 1);
}

if (import.meta.main) {
  if (process.argv.includes('--smoke')) await smoke();
  else console.log('usage: node scripts/lockstep_env.mjs --smoke   (otherwise import { startEnv, launchBrowser })');
}
