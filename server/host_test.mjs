#!/usr/bin/env node
// Local test of host.mjs (host-as-server mode), no tunnel: starts host.mjs on a free loopback port with a temp
// build dir and a small random disc, then checks the localhost bypass and the cookie gate (requests made to look like
// cloudflared's: loopback peer + Cf-Connecting-Ip / X-Forwarded-For + the tunnel's Host), /host-info, the single-use
// invite and its room redirect, static files (gzip, Range), the texture pack routes (--pack, --pack-variants), /ws
// access rules, POST /report (host and guest, forwarded to a stub FEMME board configured through report.env) and the
// binary relay through the proxy.
// usage: cd server && npm install && node host_test.mjs
import assert from 'node:assert/strict';
import { spawn, spawnSync } from 'node:child_process';
import { randomBytes } from 'node:crypto';
import { mkdirSync, mkdtempSync, readdirSync, readFileSync, rmSync, writeFileSync } from 'node:fs';
import { createServer, request } from 'node:http';
import { tmpdir } from 'node:os';
import { dirname, join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { gunzipSync, gzipSync } from 'node:zlib';
import WebSocket from 'ws';

const here = dirname(fileURLToPath(import.meta.url));
const tmp = mkdtempSync(join(tmpdir(), 'mksm-host-test-'));
const sleep = (ms) => new Promise((r) => setTimeout(r, ms));
let host, signalPid;
process.on('exit', () => {
  // host.mjs stops its signal.mjs and removes its temp dir on SIGTERM, even after this process is gone
  try { host?.kill('SIGTERM'); } catch {}
  rmSync(tmp, { recursive: true, force: true });
});

let passed = 0;
async function check(name, fn) {
  try {
    await fn();
    passed++;
    console.log(`ok   ${name}`);
  } catch (e) {
    console.log(`FAIL ${name}\n${e.stack}${e.cause ? '\ncause: ' + e.cause.stack : ''}\n--- host.mjs log tail:\n${host.log.slice(-3000)}`);
    if (host.exitCode === null) { // let it stop signal.mjs and remove its temp dir
      host.kill('SIGTERM');
      await Promise.race([new Promise((r) => host.once('exit', r)), sleep(3000)]);
    }
    process.exit(1);
  }
}

// ---- fixtures ----
const build = join(tmp, 'build');
mkdirSync(build);
const page = '<!doctype html><title>game</title>\n';
const wasm = Buffer.concat([Buffer.from('\0asm\x01\0\0\0'), Buffer.alloc(64 * 1024, 7)]);
const disc = randomBytes(3 * 1024 * 1024 + 123);
writeFileSync(join(build, 'ps2web.html'), page);
writeFileSync(join(build, 'ps2web.js'), 'console.log(1);\n');
writeFileSync(join(build, 'ps2web.wasm'), wasm);
writeFileSync(join(build, 'ps2web.wasm.gz'), gzipSync(wasm, { level: 9 }));
writeFileSync(join(build, 'CMakeCache.txt'), 'CMAKE_HOME_DIRECTORY=/home/someone\n'); // must not be served
writeFileSync(join(build, '.ninja_log'), 'x\n');
writeFileSync(join(tmp, 'disc.iso'), disc);
// texture pack: two variants, an object (gzip bytes) with a .gz beside it and a file that is neither index nor object
const pack = join(tmp, 'pack'), hex = (n) => randomBytes(n).toString('hex');
const ids = { 2: hex(8), 4: hex(8) }, tex = `${hex(8)}.${hex(6)}.tex`, texBody = gzipSync(randomBytes(50_000));
const indexes = { 2: Buffer.from(`#mksm-pack 1 gzip-up\n${tex.slice(0, 16)} 64 64 2 16384 ${tex}\n`), 4: Buffer.from('#mksm-pack 1 gzip-up\n') };
mkdirSync(join(pack, 'obj'), { recursive: true });
writeFileSync(join(pack, 'current.json'), JSON.stringify(ids) + '\n');
for (const v of [2, 4]) writeFileSync(join(pack, `${ids[v]}.txt`), indexes[v]);
writeFileSync(join(pack, 'obj', tex), texBody);
writeFileSync(join(pack, 'obj', tex + '.gz'), gzipSync(texBody));
writeFileSync(join(pack, 'notes.txt'), 'x\n');

// A stub FEMME board for /report (201 {id: 7} with the right bearer token), configured the way host.sh users do it:
// $XDG_CONFIG_HOME/mksm/report.env. FEMME_REPORT_* from this shell are not passed on.
const FEMME_TOKEN = randomBytes(32).toString('hex'), femmeGot = [];
const femme = createServer((req, res) => {
  const chunks = [];
  req.on('data', (c) => chunks.push(c)).on('end', () => {
    const ok = req.headers.authorization === `Bearer ${FEMME_TOKEN}`;
    femmeGot.push({ ok, body: JSON.parse(Buffer.concat(chunks)) });
    res.writeHead(ok ? 201 : 401, { 'content-type': 'application/json' }).end(JSON.stringify(ok ? { id: 7 } : {}));
  });
});
await new Promise((r) => femme.listen(0, '127.0.0.1', r));
mkdirSync(join(tmp, 'xdg', 'mksm'), { recursive: true });
writeFileSync(join(tmp, 'xdg', 'mksm', 'report.env'), `# test\nFEMME_REPORT_URL=http://127.0.0.1:${femme.address().port}/api/reports\nFEMME_REPORT_TOKEN="${FEMME_TOKEN}"\n`, { mode: 0o600 });
const hostEnv = { ...Object.fromEntries(Object.entries(process.env).filter(([k]) => !k.startsWith('FEMME_REPORT_'))), XDG_CONFIG_HOME: join(tmp, 'xdg') };
const reportDir = join(tmp, 'reports');

// ---- start host.mjs ----
function startHost(args) {
  const h = spawn(process.execPath, [join(here, 'host.mjs'), '--port', '0', '--build', build, '--disc', join(tmp, 'disc.iso'), '--report-dir', reportDir, ...args], { env: hostEnv, stdio: ['ignore', 'pipe', 'pipe'] });
  h.log = '';
  h.started = new Promise((resolve, reject) => { // -> [port, signal.mjs pid]
    const timer = setTimeout(() => reject(new Error('host.mjs did not start:\n' + h.log)), 15_000);
    const onData = (d) => {
      h.log += d;
      const m = h.log.match(/host: listening on http:\/\/127\.0\.0\.1:(\d+)[^]*signal\.mjs pid (\d+)/);
      if (m) { clearTimeout(timer); resolve([Number(m[1]), Number(m[2])]); }
    };
    h.stdout.on('data', onData);
    h.stderr.on('data', onData);
    h.on('exit', (code) => reject(new Error(`host.mjs exited with ${code}:\n${h.log}`)));
  });
  return h;
}
host = startHost(['--pack', pack, '--pack-variants', '2']); // as mksm/host.sh runs it
let port;
[port, signalPid] = await host.started;
const base = `http://127.0.0.1:${port}`;
const TUNNEL = 'https://test-host-abc.trycloudflare.com';
// What cloudflared adds to every request it forwards (it connects from loopback too).
const REMOTE = { host: new URL(TUNNEL).host, 'cf-connecting-ip': '203.0.113.7', 'x-forwarded-for': '203.0.113.7', 'x-forwarded-proto': 'https', 'cf-ray': '8f00000000000000-AMS' };
console.log(`testing host.mjs ${base} (signal.mjs pid ${signalPid})`);

// Raw HTTP (fetch can't set Host and would decompress): -> { status, headers, body: Buffer }.
const http = (path, { method = 'GET', headers = {}, at = port, body } = {}) => new Promise((resolve, reject) => {
  const req = request(`http://127.0.0.1:${at}${path}`, { method, headers: { host: `127.0.0.1:${at}`, ...headers } }, (res) => {
    const chunks = [];
    res.on('data', (c) => chunks.push(c));
    res.on('end', () => resolve({ status: res.statusCode, headers: res.headers, body: Buffer.concat(chunks) }));
  });
  req.on('error', reject).end(body);
});
const remote = (path, headers = {}, method) => http(path, { method, headers: { ...REMOTE, ...headers } });
const isolation = (res) => {
  assert.equal(res.headers['cross-origin-opener-policy'], 'same-origin');
  assert.equal(res.headers['cross-origin-embedder-policy'], 'require-corp');
  assert.equal(res.headers['cross-origin-resource-policy'], 'same-origin');
};
const info = async (query = '') => {
  const res = await http('/host-info' + query);
  assert.equal(res.status, 200, String(res.body));
  return JSON.parse(res.body);
};

// WebSocket client with a message queue; binary messages are queued as Buffers.
function client({ cookie, remoteHeaders = false, origin } = {}) {
  return new Promise((resolve, reject) => {
    const headers = remoteHeaders ? { ...REMOTE } : {};
    if (cookie) headers.cookie = cookie;
    const ws = new WebSocket(base.replace(/^http/, 'ws') + '/ws', { headers, origin, maxPayload: 1 << 20 });
    const queue = [], waiters = [];
    ws.on('message', (data, binary) => {
      const msg = binary ? data : JSON.parse(data);
      const waiter = waiters.shift();
      waiter ? waiter(msg) : queue.push(msg);
    });
    ws.next = (ms = 3000) => queue.length ? Promise.resolve(queue.shift()) : new Promise((res, rej) => {
      const waiter = (msg) => { clearTimeout(timer); res(msg); };
      const timer = setTimeout(() => { waiters.splice(waiters.indexOf(waiter), 1); rej(new Error('no message within ' + ms + ' ms')); }, ms);
      waiters.push(waiter);
    });
    ws.ask = (msg) => { ws.send(JSON.stringify(msg)); return ws.next(); };
    ws.on('open', () => resolve(ws));
    ws.on('unexpected-response', (req, res) => reject(Object.assign(new Error('HTTP ' + res.statusCode), { status: res.statusCode })));
    ws.on('error', reject);
  });
}

// ---- localhost bypass and the gate ----
await check('localhost-direct: page, wasm and disc without a cookie, with COOP/COEP/CORP', async () => {
  for (const path of ['/', '/ps2web.html']) {
    const res = await http(path);
    assert.equal(res.status, 200, path);
    isolation(res);
    assert.equal(String(res.body), page);
  }
  const w = await http('/ps2web.wasm');
  assert.equal(w.status, 200);
  assert.equal(w.headers['content-type'], 'application/wasm');
  assert.ok(w.body.equals(wasm));
  const d = await http('/disc.iso', { headers: { range: 'bytes=0-9' } });
  assert.equal(d.status, 206);
  assert.ok(d.body.equals(disc.subarray(0, 10)));
  for (const h of ['localhost', '[::1]']) assert.equal((await http('/', { headers: { host: `${h}:${port}` } })).status, 200, h);
});
await check('remote (cloudflared-like) without a cookie: 401 on /, the page, wasm and disc, GET and HEAD, not cacheable', async () => {
  for (const path of ['/', '/ps2web.html', '/ps2web.wasm', '/ps2web.js', '/disc.iso', '/turn', '/nope', '/pack/current.json', `/pack/${ids[2]}.txt`, `/pack/obj/${tex}`])
    for (const method of ['GET', 'HEAD']) {
      const res = await remote(path, { range: 'bytes=0-9' }, method);
      assert.equal(res.status, 401, `${method} ${path}`);
      assert.equal(res.headers['cache-control'], 'no-store');
      assert.ok(!res.body.includes(disc.subarray(0, 10)));
    }
  assert.match(String((await remote('/')).body), /invite-only/);
});
await check('any one proxy header makes a loopback request remote', async () => {
  for (const h of ['cf-connecting-ip', 'x-forwarded-for', 'cf-ray', 'x-forwarded-proto', 'forwarded', 'cdn-loop', 'x-real-ip'])
    assert.equal((await http('/', { headers: { [h]: '203.0.113.7' } })).status, 401, h);
});
await check('not local: a foreign Host (DNS rebinding), a cross-site Origin or Sec-Fetch-Site', async () => {
  for (const headers of [{ host: 'evil.example:' + port }, { host: 'localhost' }, { origin: 'https://evil.example' }, { origin: 'null' },
    { 'sec-fetch-site': 'cross-site' }, { 'sec-fetch-site': 'same-site' }]) {
    assert.equal((await http('/', { headers })).status, 401, JSON.stringify(headers));
    assert.equal((await http('/host-info', { headers })).status, 403, JSON.stringify(headers));
  }
  for (const headers of [{ origin: `http://localhost:${port}` }, { 'sec-fetch-site': 'same-origin' }, { 'sec-fetch-site': 'none' }])
    assert.equal((await http('/', { headers })).status, 200, JSON.stringify(headers));
});

// ---- /host-info and the invite ----
let token;
await check('/host-info: localhost only; no invite URL before the tunnel is known', async () => {
  assert.equal((await remote('/host-info')).status, 403);
  assert.equal((await remote('/host-info?new=1')).status, 403);
  assert.equal((await remote('/host-info/tunnel?url=' + TUNNEL, {}, 'POST')).status, 403);
  const i = await info();
  assert.deepEqual(Object.keys(i).sort(), ['inviteToken', 'inviteUrl', 'inviteUsed', 'room', 'tunnelUrl']);
  assert.equal(i.tunnelUrl, null);
  assert.equal(i.inviteUrl, null);
  assert.equal(i.inviteUsed, false);
  assert.match(i.inviteToken, /^[\w-]{24}$/);
  token = i.inviteToken;
});
await check('POST /host-info/tunnel sets the tunnel URL; GET and non-https origins are refused', async () => {
  assert.equal((await http('/host-info/tunnel?url=' + TUNNEL)).status, 405);
  for (const bad of ['http://x.trycloudflare.com', 'https://x.example/path', 'javascript:alert(1)', 'https://u:p@x.example', ''])
    assert.equal((await http('/host-info/tunnel?url=' + encodeURIComponent(bad), { method: 'POST' })).status, 400, bad);
  const res = await http('/host-info/tunnel?url=' + encodeURIComponent(TUNNEL + '/'), { method: 'POST' });
  assert.equal(res.status, 200);
  const i = JSON.parse(res.body);
  assert.equal(i.tunnelUrl, TUNNEL);
  assert.equal(i.inviteUrl, `${TUNNEL}/invite?t=${token}`);
});
const ROOM = 'abcdefghijkm';
await check('/host-info?room= puts the room into the invite URL; a bad room id is 400', async () => {
  assert.equal((await http('/host-info?room=ABC')).status, 400);
  assert.equal((await info('?room=' + ROOM)).inviteUrl, `${TUNNEL}/invite?t=${token}&room=${ROOM}`);
  assert.equal((await info()).room, ROOM, 'remembered');
  assert.equal((await info('?room=')).room, null, 'cleared');
});
await check('/host-info?new=1 mints a new invite and revokes the unused previous one', async () => {
  const fresh = await info('?new=1');
  assert.notEqual(fresh.inviteToken, token);
  assert.equal((await remote(`/invite?t=${token}`)).status, 403, 'old unused token is dead');
  token = fresh.inviteToken;
});
let cookie;
await check('invite: a malformed room is 400, sets no cookie and does not use the token up', async () => {
  for (const bad of ['abc', '//evil.example', 'https://evil.example', 'ABCDEFGHIJKM', 'abcdefghijk1', 'abcdefghijkl', `${ROOM}x`]) {
    const res = await remote(`/invite?t=${token}&room=${encodeURIComponent(bad)}`);
    assert.equal(res.status, 400, bad);
    assert.equal(res.headers['set-cookie'], undefined, bad);
    assert.equal(res.headers.location, undefined, bad);
  }
  assert.equal((await info()).inviteUsed, false);
});
await check('invite: sets the cookie and redirects to the room page; the second use is refused', async () => {
  const res = await remote(`/invite?t=${token}&room=${ROOM}`);
  assert.equal(res.status, 302);
  assert.equal(res.headers.location, `/ps2web.html?room=${ROOM}`);
  const [set] = res.headers['set-cookie'];
  assert.match(set, /^__Host-mksm=[\w-]+\.\d+\.[\w-]+; Path=\/; .*HttpOnly; Secure; SameSite=Lax$/);
  cookie = set.split(';')[0];
  const again = await remote(`/invite?t=${token}&room=${ROOM}`);
  assert.equal(again.status, 403);
  assert.equal(again.headers['set-cookie'], undefined);
  assert.equal((await info()).inviteUsed, true);
  const back = await remote(`/invite?t=${token}&room=${ROOM}`, { cookie });
  assert.equal(back.status, 302, 'a signed-in guest reopening the link goes to the room');
  assert.equal(back.headers.location, `/ps2web.html?room=${ROOM}`);
});
await check('a new invite after a used one leaves the guest signed in', async () => {
  await info('?new=1');
  assert.equal((await remote('/auth', { cookie })).status, 200);
  assert.equal((await remote('/auth')).status, 401);
});

// ---- static files with the cookie ----
await check('remote with the cookie: page 200, wasm 200, disc 206; /turn and /admin 404', async () => {
  const p = await remote('/', { cookie });
  assert.equal(p.status, 200);
  isolation(p);
  assert.equal(String(p.body), page);
  const w = await remote('/ps2web.wasm', { cookie });
  assert.equal(w.status, 200);
  assert.ok(w.body.equals(wasm));
  const d = await remote('/disc.iso', { cookie, range: 'bytes=100-199' });
  assert.equal(d.status, 206);
  assert.ok(d.body.equals(disc.subarray(100, 200)));
  assert.equal((await remote('/turn', { cookie })).status, 404);
  assert.equal((await http('/turn')).status, 404);
  assert.equal((await remote('/admin/invites', { cookie, authorization: 'Bearer x' })).status, 404);
  assert.equal((await remote('/', { cookie: cookie.slice(0, -2) + 'xx' })).status, 401, 'tampered cookie');
});
await check('only top-level build outputs are served (no CMake files, dotfiles, traversal)', async () => {
  for (const path of ['/CMakeCache.txt', '/.ninja_log', '/..%2f..%2fetc%2fpasswd', '/%2e%2e/%2e%2e/etc/passwd', '/../../etc/passwd', '/build/ps2web.html', '/ps2web.wasm.gz'])
    assert.equal((await http(path)).status, 404, path);
});
await check('gzip: the .gz goes to clients that accept gzip; HEAD matches GET; Range never gets gzip', async () => {
  const gz = gzipSync(wasm, { level: 9 });
  const g = await http('/ps2web.wasm', { headers: { 'accept-encoding': 'gzip, deflate, br' } });
  assert.equal(g.headers['content-encoding'], 'gzip');
  assert.equal(g.headers['content-type'], 'application/wasm');
  assert.equal(Number(g.headers['content-length']), gz.length);
  assert.ok(gunzipSync(g.body).equals(wasm));
  const h = await http('/ps2web.wasm', { method: 'HEAD', headers: { 'accept-encoding': 'gzip' } });
  assert.equal(h.headers['content-encoding'], 'gzip');
  assert.equal(Number(h.headers['content-length']), gz.length);
  for (const enc of ['identity', 'gzip;q=0', 'br']) assert.equal((await http('/ps2web.wasm', { headers: { 'accept-encoding': enc } })).headers['content-encoding'], undefined, enc);
  const r = await http('/ps2web.wasm', { headers: { 'accept-encoding': 'gzip', range: 'bytes=0-7' } });
  assert.equal(r.status, 206);
  assert.equal(r.headers['content-encoding'], undefined);
  assert.ok(r.body.equals(wasm.subarray(0, 8)));
});
await check('disc: HEAD size, Range reads (206, exact bytes), suffix/open ranges, 416, never gzip', async () => {
  const head = await remote('/disc.iso', { cookie }, 'HEAD');
  assert.equal(head.status, 200);
  assert.equal(Number(head.headers['content-length']), disc.length);
  assert.equal(head.headers['accept-ranges'], 'bytes');
  const n = disc.length;
  for (const [range, start, end] of [['0-2047', 0, 2047], [`${1 << 20}-${(1 << 20) + 65535}`, 1 << 20, (1 << 20) + 65535], [`${n - 100}-${n - 1}`, n - 100, n - 1],
    [`${n - 10}-${n + 1000}`, n - 10, n - 1], [`${n - 5}-`, n - 5, n - 1], ['-300', n - 300, n - 1], [`0-${n - 1}`, 0, n - 1]]) {
    const res = await remote('/disc.iso', { cookie, range: `bytes=${range}`, 'accept-encoding': 'gzip' });
    assert.equal(res.status, 206, range);
    isolation(res);
    assert.equal(res.headers['content-range'], `bytes ${start}-${end}/${n}`, range);
    assert.equal(Number(res.headers['content-length']), end - start + 1, range);
    assert.equal(res.headers['content-encoding'], undefined, range);
    assert.ok(res.body.equals(disc.subarray(start, end + 1)), range);
  }
  const past = await remote('/disc.iso', { cookie, range: `bytes=${n}-` });
  assert.equal(past.status, 416);
  assert.equal(past.headers['content-range'], `bytes */${n}`);
  const multi = await remote('/disc.iso', { cookie, range: 'bytes=0-1,5-6' });
  assert.equal(multi.status, 200, 'several ranges: whole file');
  assert.equal(multi.body.length, n);
});

// ---- texture pack ----
await check('pack: current.json has only --pack-variants and background:false, no-cache', async () => {
  const res = await remote('/pack/current.json', { cookie });
  assert.equal(res.status, 200);
  isolation(res);
  assert.equal(res.headers['cache-control'], 'no-cache');
  assert.equal(res.headers['content-type'], 'application/json');
  assert.deepEqual(JSON.parse(res.body), { 2: ids[2], background: false });
  assert.equal((await remote('/pack/current.json', { cookie }, 'POST')).status, 405);
});
await check('pack: indexes and objects as stored (octet-stream, immutable), never Content-Encoding, even with a .gz beside', async () => {
  for (const [path, body] of [[`/pack/${ids[2]}.txt`, indexes[2]], [`/pack/${ids[4]}.txt`, indexes[4]], [`/pack/obj/${tex}`, texBody]])
    for (const method of ['GET', 'HEAD']) {
      const res = await remote(path, { cookie, 'accept-encoding': 'gzip, deflate, br' }, method);
      assert.equal(res.status, 200, `${method} ${path}`);
      isolation(res);
      assert.equal(res.headers['content-type'], 'application/octet-stream', path);
      assert.equal(res.headers['cache-control'], 'private, max-age=31536000, immutable', path);
      assert.equal(res.headers['content-encoding'], undefined, path);
      assert.equal(Number(res.headers['content-length']), body.length, path);
      if (method === 'GET') assert.ok(res.body.equals(body), path);
    }
  const missing = await http(`/pack/obj/${'0'.repeat(16)}.${'0'.repeat(12)}.tex`);
  assert.equal(missing.status, 404);
  assert.equal(missing.headers['cache-control'], 'no-store', 'a 404 must not be cached as immutable');
});
await check('pack: only index and object names are served (no other files, sidecars, upper case, traversal)', async () => {
  for (const path of ['/pack/', '/pack/obj/', '/pack/notes.txt', `/pack/obj/${tex}.gz`, `/pack/${ids[2].toUpperCase()}.txt`, `/pack/${tex}`,
    `/pack/obj/${ids[2]}.txt`, `/pack/obj/${tex}/`, '/pack/current.json/', '/pack/..%2fdisc.iso', '/pack/obj/..%2f..%2fcurrent.json',
    '/pack/%2e%2e/%2e%2e/etc/passwd', `/pack/obj/%2e%2e%2f${ids[2]}.txt`, `/pack/${ids[2]}.txt%00`])
    assert.equal((await http(path)).status, 404, path);
});
await check('pack: no --pack is 404; no --pack-variants lists all; a dir without current.json or bad variants stop host.mjs', async () => {
  const run = (args) => spawnSync(process.execPath, [join(here, 'host.mjs'), '--port', '0', '--build', build, '--disc', join(tmp, 'disc.iso'), ...args], { encoding: 'utf8', timeout: 10_000 });
  for (const [args, err] of [[['--pack', build], /no current\.json/], [['--pack', pack, '--pack-variants', '2,x'], /--pack-variants/]]) {
    const r = run(args);
    assert.equal(r.status, 1, r.stderr);
    assert.match(r.stderr, err);
  }
  const [bare, all] = [startHost([]), startHost(['--pack', pack])];
  try {
    const [[barePort], [allPort]] = await Promise.all([bare.started, all.started]);
    for (const path of ['/pack/current.json', `/pack/${ids[2]}.txt`, `/pack/obj/${tex}`])
      assert.equal((await http(path, { at: barePort })).status, 404, path);
    assert.deepEqual(JSON.parse((await http('/pack/current.json', { at: allPort })).body), { ...ids, background: false });
  } finally {
    for (const h of [bare, all]) h.kill('SIGTERM');
    await Promise.all([bare, all].map((h) => h.exitCode !== null || new Promise((r) => h.once('exit', r))));
  }
});

// ---- /report ----
const PNG = Buffer.from('iVBORw0KGgoAAAANSUhEUgAAAAEAAAABCAYAAAAfFcSJAAAADUlEQVR42mNkYPhfDwAChwGA60e6kgAAAABJRU5ErkJggg==', 'base64');
const report = JSON.stringify({ title: 'stuck', text: 'Goro froze.', png: PNG.toString('base64'), meta: { build: 'x' } });
const postReport = (headers) => http('/report', { method: 'POST', body: report, headers: { 'content-type': 'application/json', ...headers } });
await check('/report: remote needs the cookie (401); the host and a guest are forwarded to FEMME (report.env) and saved', async () => {
  assert.equal((await postReport(REMOTE)).status, 401);
  for (const [headers, who] of [[{ origin: `http://localhost:${port}` }, 'host'], [{ ...REMOTE, cookie }, cookie.split('=')[1].split('.')[0]]]) {
    const res = await postReport(headers);
    assert.equal(res.status, 200, String(res.body));
    assert.deepEqual(JSON.parse(res.body), { ok: true, id: 7, forwarded: true });
    const got = femmeGot.at(-1);
    assert.ok(got.ok, 'bearer token');
    assert.deepEqual(got.body.meta, { build: 'x', invite: who, server: 'host' });
  }
  assert.equal(femmeGot.length, 2);
  const files = readdirSync(reportDir);
  assert.equal(files.length, 4);
  for (const f of files.filter((f) => f.endsWith('.json'))) assert.equal(JSON.parse(readFileSync(join(reportDir, f))).server, 'host');
  assert.match(host.log, /host: reports: .*forwarded to 127\.0\.0\.1:/);
  assert.ok(!host.log.includes(FEMME_TOKEN), 'token in the log');
});
await check('/report: 6th report of the host within an hour is 429', async () => {
  for (let i = 0; i < 4; i++) assert.equal((await postReport({})).status, 200);
  assert.equal((await postReport({})).status, 429);
});

// ---- /ws and the binary relay through the proxy ----
let a, b;
await check('/ws: local needs no cookie; remote needs the cookie, and a browser Origin must be the tunnel', async () => {
  const local = await client({ origin: `http://localhost:${port}` });
  assert.equal((await local.ask({ type: 'create' })).type, 'created');
  local.close();
  await assert.rejects(client({ remoteHeaders: true }), { status: 401 });
  await assert.rejects(client({ remoteHeaders: true, origin: TUNNEL }), { status: 401 });
  await assert.rejects(client({ remoteHeaders: true, cookie, origin: 'https://evil.example' }), { status: 403 });
  await assert.rejects(client({ origin: 'https://evil.example' }), { status: 403 }, 'cross-site page on the host');
  const ok = await client({ remoteHeaders: true, cookie, origin: TUNNEL });
  assert.equal((await ok.ask({ type: 'create' })).type, 'created');
  ok.close();
});
await check('host (local) and guest (tunnel) join a room; binary relayed verbatim both ways; transport relayed', async () => {
  a = await client({ origin: `http://localhost:${port}` });
  const { room } = await a.ask({ type: 'create' });
  a.id = (await a.ask({ type: 'join', room })).id;
  b = await client({ remoteHeaders: true, cookie, origin: TUNNEL });
  b.id = (await b.ask({ type: 'join', room })).id;
  assert.deepEqual(await a.next(), { type: 'peer-joined', peer: b.id });
  for (const [from, to] of [[a, b], [b, a]]) {
    for (const msg of [Buffer.from([0, 0, 1, 2, 3]), Buffer.concat([Buffer.from([1, 1]), Buffer.from('{"t":"hello"}')]), randomBytes(60_000)]) {
      from.send(msg);
      const got = await to.next();
      assert.ok(Buffer.isBuffer(got) && got.equals(msg));
    }
    from.send(JSON.stringify({ type: 'transport', mode: 'relay' }));
    assert.deepEqual(await to.next(), { type: 'transport', mode: 'relay', from: from.id });
  }
});
await check('relay: a 20 MB burst of 64 KiB messages from the guest arrives complete and in order (lossless)', async () => {
  const COUNT = 320, SIZE = 64 * 1024; // 20 MiB
  const t0 = Date.now();
  for (let i = 0; i < COUNT; i++) {
    const msg = Buffer.alloc(SIZE, i & 255);
    msg[0] = 1; msg[1] = 0; msg.writeUInt32LE(i, 2);
    b.send(msg);
  }
  for (let i = 0; i < COUNT; i++) {
    const got = await a.next(10_000);
    assert.ok(Buffer.isBuffer(got), `message ${i} is binary`);
    assert.equal(got.length, SIZE);
    assert.equal(got.readUInt32LE(2), i, 'in order');
    assert.equal(got[SIZE - 1], i & 255);
  }
  console.log(`     20 MiB in ${Date.now() - t0} ms through host.mjs`);
});
await check('relay: a message over 256 KiB is refused (too-big) and the socket keeps working', async () => {
  b.send(Buffer.alloc(256 * 1024 + 1, 1));
  assert.deepEqual(await b.next(), { type: 'error', error: 'too-big', request: 'relay' });
  const max = Buffer.alloc(256 * 1024, 2);
  b.send(max);
  assert.ok((await a.next()).equals(max));
  a.close();
  b.close();
});

await check('SIGTERM stops host.mjs and its signal.mjs', async () => {
  const exited = new Promise((r) => host.once('exit', (code) => r(code)));
  host.kill('SIGTERM');
  assert.equal(await exited, 128 + 15);
  await sleep(200);
  assert.throws(() => process.kill(signalPid, 0), { code: 'ESRCH' }, 'signal.mjs still running');
});

console.log(`\n${passed} checks passed`);
femme.close();
process.exit(0);
