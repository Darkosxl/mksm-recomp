#!/usr/bin/env node
// Host-as-server mode: the host's PC serves the game (build + disc) and runs signal.mjs; friends reach it through a
// Cloudflare quick tunnel (mksm/host.sh starts both). Listens on 127.0.0.1 only. Node >= 20, plus `ws` in
// server/node_modules for signal.mjs. Usage, routes and the security model: mksm/notes/web-host.md.
//
//   node server/host.mjs [--port 8620] [--build build/web-mksm] [--disc games/mksm/disc.iso] [--tunnel-url https://…]
//                        [--pack <dir> [--pack-variants 2]]
// --pack serves an HD texture pack (remaster/webpack.py output: current.json, <id>.txt, obj/) at /pack/; its
// current.json is answered with only the --pack-variants (comma list, default all) and "background": false, so a
// home uplink only sends the textures a game actually asks for.
import { randomBytes } from 'node:crypto';
import { readFileSync, statSync } from 'node:fs';
import { createServer } from 'node:http';
import { dirname, join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { parseArgs } from 'node:util';
import { ISOLATION, pipeUpgrade, removeDir, serveFile, startSignal, stop, tempDir } from '../scripts/lockstep_env.mjs';

const ROOT = resolve(dirname(fileURLToPath(import.meta.url)), '..');
const { values: opt } = parseArgs({
  options: {
    port: { type: 'string', default: '8620' },
    build: { type: 'string', default: join(ROOT, 'build', 'web-mksm') },
    disc: { type: 'string', default: join(ROOT, 'games', 'mksm', 'disc.iso') },
    'tunnel-url': { type: 'string' },
    pack: { type: 'string' },
    'pack-variants': { type: 'string' },
  },
});
const BUILD = resolve(opt.build), DISC = resolve(opt.disc), PACK = opt.pack === undefined ? null : resolve(opt.pack);
const die = (msg) => { console.error(`host: ${msg}`); process.exit(1); };
const isFile = (f) => { try { return statSync(f).isFile(); } catch { return false; } };
if (!isFile(join(BUILD, 'ps2web.html'))) die(`no ps2web.html in ${BUILD} (build it with mksm/build.sh <iso> --web)`);
if (!isFile(DISC)) die(`no disc image at ${DISC} (pass --disc <iso>)`);
if (PACK && !isFile(join(PACK, 'current.json'))) die(`no current.json in ${PACK} (make the pack with remaster/webpack.py)`);
const VARIANTS = opt['pack-variants']?.split(',');
if (VARIANTS && !VARIANTS.every((v) => /^\d+$/.test(v))) die('--pack-variants must be a comma list like 2 or 2,4');

const ROOM = /^[abcdefghijkmnpqrstuvwxyz23456789]{12}$/; // signal.mjs room ids
const httpsOrigin = (s) => {
  try {
    const u = new URL(s);
    return u.protocol === 'https:' && !u.username && !u.password && u.origin === s.replace(/\/$/, '') ? u.origin : null;
  } catch {
    return null;
  }
};
let tunnelUrl = null;
if (opt['tunnel-url'] !== undefined && !(tunnelUrl = httpsOrigin(opt['tunnel-url']))) die('--tunnel-url must be an https:// origin');

// ---- signal.mjs: per-run secrets in memory, invites in a temp dir ----
const key = () => randomBytes(32).toString('hex');
const ADMIN_SECRET = key();
const tmp = tempDir('mksm-host-');
const signalEnv = {
  ...process.env, COOKIE_SECRET: key(), ADMIN_SECRET, TURN_SECRET: key(),
  HOST: '127.0.0.1', PORT: '0', DATA_DIR: join(tmp, 'data'), ROOM_URL: '/ps2web.html?room={room}',
};
delete signalEnv.PUBLIC_ORIGIN; // host.mjs checks the WebSocket Origin itself: localhost and the tunnel are both valid
const prefix = (text) => text.replace(/^(?=.)/gm, 'signal: ');
let signal;
try {
  signal = await startSignal(signalEnv, { onOutput: (d) => process.stdout.write(prefix(d)) });
} catch (e) {
  removeDir(tmp);
  die(e.message);
}

async function admin(method, path) {
  const r = await fetch(signal.origin + path, { method, headers: { authorization: `Bearer ${ADMIN_SECRET}` } });
  if (!r.ok) throw new Error(`signal.mjs ${method} ${path}: HTTP ${r.status}`);
  return r.json();
}
async function mintInvite(note) {
  const { id, link } = await admin('POST', `/admin/invite?uses=1&note=${note}`);
  return { id, token: new URL(link).searchParams.get('t') };
}
// The host's own browser has no cookie; its /ws and /auth requests carry this one (an invite redeemed here).
const hostCookie = await (async () => {
  const { token } = await mintInvite('host');
  const r = await fetch(`${signal.origin}/invite?t=${token}`, { redirect: 'manual' });
  const cookie = (r.headers.getSetCookie()[0] || '').split(';')[0];
  if (!cookie.startsWith('__Host-mksm=')) die(`could not redeem the host invite (HTTP ${r.status})`);
  return cookie;
})();

const DENIED = Buffer.from(await (await fetch(signal.origin + '/auth')).arrayBuffer()); // signal.mjs's "invite only" page

// The guest invite: single use. A new one (?new=1) revokes the previous one if nobody used it yet.
let invite = await mintInvite('guest'), room = null;
const inviteUsed = async () => ((await admin('GET', '/admin/invites')).find((i) => i.id === invite.id)?.used ?? 0) > 0;
async function hostInfo() {
  const inviteUrl = tunnelUrl && `${tunnelUrl}/invite?t=${invite.token}${room ? `&room=${room}` : ''}`;
  return { tunnelUrl, inviteToken: invite.token, inviteUrl, inviteUsed: await inviteUsed(), room };
}

// ---- who is asking ----
// "Local" = the host's own browser (or a script) on this machine, talking to http://localhost:<port> directly:
// - TCP peer is loopback. Tunnel traffic also comes from loopback (cloudflared), but always with Cf-* /
//   X-Forwarded-* headers, so any proxy header makes a request remote;
// - Host names loopback (a DNS-rebinding page has its own host name there);
// - no other site initiated it (Origin, when sent, is a localhost origin; Sec-Fetch-Site, when sent, is same-origin
//   or none), so web pages the host visits can't use the bypass.
let localHosts, localOrigins;
const PROXY_HEADER = /^(?:cf-|x-forwarded-|forwarded$|x-real-ip$|cdn-loop$|via$)/;
function local(req) {
  if (!['127.0.0.1', '::1', '::ffff:127.0.0.1'].includes(req.socket.remoteAddress)) return false;
  if (Object.keys(req.headers).some((h) => PROXY_HEADER.test(h))) return false;
  if (!localHosts.has((req.headers.host || '').toLowerCase())) return false;
  if (req.headers.origin !== undefined && !localOrigins.has(req.headers.origin)) return false;
  const site = req.headers['sec-fetch-site'];
  return site === undefined || site === 'same-origin' || site === 'none';
}

const send = (res, status, body, type = 'text/plain; charset=utf-8', headers = {}) => {
  if (typeof body === 'object' && !Buffer.isBuffer(body)) [body, type] = [JSON.stringify(body, null, 1) + '\n', 'application/json'];
  res.writeHead(status, { ...ISOLATION, 'Content-Type': type, ...headers }).end(body);
};

// /invite and /auth go to signal.mjs (status, body, Location and Set-Cookie come back).
async function toSignal(url, res, cookie) {
  const r = await fetch(signal.origin + url.pathname + url.search, { headers: cookie ? { cookie } : {}, redirect: 'manual' });
  const headers = { ...ISOLATION };
  for (const h of ['content-type', 'location', 'referrer-policy']) if (r.headers.has(h)) headers[h] = r.headers.get(h);
  if (r.headers.getSetCookie().length) headers['set-cookie'] = r.headers.getSetCookie();
  res.writeHead(r.status, headers).end(Buffer.from(await r.arrayBuffer()));
  return r.status;
}

const BUILD_FILE = /^\/([\w-][\w.-]*\.(?:html|js|mjs|wasm|data))$/; // top-level build outputs only, no CMake files etc.
// Pack indexes and objects are content-named (never change) and already gzip: sent as-is, no Content-Encoding.
const PACK_FILE = /^\/pack\/([0-9a-f]{16}\.txt|obj\/[0-9a-f]{16}\.[0-9a-f]{12}\.tex)$/;
const IMMUTABLE = { 'Content-Type': 'application/octet-stream', 'Cache-Control': 'private, max-age=31536000, immutable' };
function packCurrent() {
  const cur = JSON.parse(readFileSync(join(PACK, 'current.json'), 'utf8'));
  for (const k of Object.keys(cur)) if (VARIANTS && /^\d+$/.test(k) && !VARIANTS.includes(k)) delete cur[k];
  return { ...cur, background: false };
}

async function handle(req, res) {
  const url = new URL(req.url, 'http://local');
  const path = url.pathname, isLocal = local(req);
  if (path === '/invite') return toSignal(url, res, req.headers.cookie);
  if (path === '/host-info' || path === '/host-info/tunnel') {
    if (!isLocal) return send(res, 403, 'localhost only\n');
    if (path === '/host-info/tunnel') {
      if (req.method !== 'POST') return send(res, 405, 'POST only\n', undefined, { Allow: 'POST' });
      const origin = httpsOrigin(url.searchParams.get('url') || '');
      if (!origin) return send(res, 400, 'url must be an https:// origin\n');
      tunnelUrl = origin;
      console.log(`host: tunnel ${tunnelUrl}`);
    } else {
      if (url.searchParams.has('room')) {
        const r = url.searchParams.get('room');
        if (r && !ROOM.test(r)) return send(res, 400, 'bad room id\n');
        room = r || null;
      }
      if (url.searchParams.get('new') === '1') {
        if (!(await inviteUsed())) await admin('POST', `/admin/revoke?id=${invite.id}`);
        invite = await mintInvite('guest');
        console.log('host: new guest invite minted');
      }
    }
    return send(res, 200, await hostInfo());
  }
  if (path === '/auth') return toSignal(url, res, isLocal ? hostCookie : req.headers.cookie);

  // The gate: everything below needs the host's own browser or a valid invite cookie.
  if (!isLocal && !(req.headers.cookie && (await fetch(signal.origin + '/auth', { headers: { cookie: req.headers.cookie } })).status === 200))
    return send(res, 401, DENIED, 'text/html; charset=utf-8');
  if (path === '/turn') return send(res, 404, 'no TURN server in host mode\n');
  if (path === '/disc.iso') return serveFile(req, res, DISC, { gzip: false });
  if (path.startsWith('/pack/')) {
    if (!PACK) return send(res, 404, 'no texture pack\n');
    if (path === '/pack/current.json') {
      if (req.method !== 'GET' && req.method !== 'HEAD') return send(res, 405, 'GET only\n', undefined, { Allow: 'GET, HEAD' });
      return send(res, 200, packCurrent(), undefined, { 'Cache-Control': 'no-cache' });
    }
    const p = PACK_FILE.exec(path);
    return p ? serveFile(req, res, join(PACK, p[1]), { gzip: false, headers: IMMUTABLE }) : send(res, 404, 'not found\n');
  }
  const m = path === '/' ? [, 'ps2web.html'] : BUILD_FILE.exec(path);
  if (!m) return send(res, 404, 'not found\n');
  serveFile(req, res, join(BUILD, m[1]));
}

const sockets = new Set();
const server = createServer((req, res) => {
  handle(req, res).catch((e) => {
    console.error(`host: ${req.method} ${req.url}: ${e.message}`);
    if (!res.headersSent) send(res, 502, 'internal error\n');
    else res.destroy();
  });
});
server.on('upgrade', (req, socket, head) => {
  socket.on('error', () => socket.destroy());
  const reject = (status) => socket.end(`HTTP/1.1 ${status}\r\nConnection: close\r\nContent-Length: 0\r\n\r\n`);
  if (new URL(req.url, 'http://local').pathname !== '/ws') return reject('404 Not Found');
  if (local(req)) return pipeUpgrade(req, socket, head, signal.port, { cookie: hostCookie, sockets });
  // Remote: signal.mjs checks the cookie; a browser's Origin must be the tunnel's.
  if (req.headers.origin !== undefined && req.headers.origin !== tunnelUrl) return reject('403 Forbidden');
  pipeUpgrade(req, socket, head, signal.port, { sockets });
});

await new Promise((res) => server.once('error', (e) => die(`cannot listen on 127.0.0.1:${opt.port}: ${e.message}`)).listen(Number(opt.port), '127.0.0.1', res));
const PORT = server.address().port;
const hostPart = (h) => (PORT === 80 ? [h, `${h}:80`] : [`${h}:${PORT}`]);
localHosts = new Set(['localhost', '127.0.0.1', '[::1]'].flatMap(hostPart));
localOrigins = new Set(['localhost', '127.0.0.1', '[::1]'].map((h) => `http://${h}${PORT === 80 ? '' : `:${PORT}`}`));
console.log(`host: listening on http://127.0.0.1:${PORT}`);
console.log(`host: build ${BUILD}, disc ${DISC} (${(statSync(DISC).size / 1073741824).toFixed(2)} GB), signal.mjs pid ${signal.child.pid}`);
if (PACK) console.log(`host: texture pack ${PACK} (variants ${VARIANTS?.join(',') ?? 'all'}, no background download)`);
console.log(`host: play at http://localhost:${PORT}/ps2web.html?room=new`);

let closing = false;
async function shutdown(code) {
  if (closing) return;
  closing = true;
  for (const s of sockets) s.destroy();
  server.closeAllConnections();
  server.close();
  await stop(signal.child, 1000);
  removeDir(tmp);
  process.exit(code);
}
for (const [sig, n] of [['SIGINT', 2], ['SIGTERM', 15], ['SIGHUP', 1]]) process.on(sig, () => shutdown(128 + n));
signal.child.once('exit', (code, sig) => {
  if (closing) return;
  console.error(`host: signal.mjs exited (${code ?? sig}); stopping`);
  shutdown(1);
});
