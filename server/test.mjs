#!/usr/bin/env node
// Local end-to-end test. Starts signal.mjs (and Caddy with ./Caddyfile in front of it when `caddy` is on
// PATH) on loopback ports with throwaway secrets and a temp web root, then checks invite -> cookie ->
// /auth (and /invite?room= redirects, ROOM_URL), /turn credentials, rooms (create/join/relay/full/leave/
// expiry; personal codes: join by owner / by code, replaced, rate limit, nicknames), POST /report (auth, checks, early
// abort, rate limit, saved copy, forwarding to a stub FEMME board, FEMME down / unset), the binary relay
// (byte-exact both ways, size cap, 20 MiB paced by the rate limit and held by a stalled receiver's backlog,
// lossless and in order; ~8 s of the run) and, through Caddy, the auth gate, headers, precompression, disc
// Range requests and the texture pack (/pack/: no-cache pointer, immutable raw objects).
// usage: [CADDY=/path/to/caddy] node test.mjs [--no-caddy]   (Caddy >= 2.11: 2.10.x answers precompressed files with 206)
import assert from 'node:assert/strict';
import { execFileSync, spawn } from 'node:child_process';
import { createHmac, randomBytes } from 'node:crypto';
import { existsSync, mkdirSync, mkdtempSync, readdirSync, readFileSync, rmSync, statSync, writeFileSync } from 'node:fs';
import { createServer as httpServer } from 'node:http';
import { createServer } from 'node:net';
import { tmpdir } from 'node:os';
import { dirname, join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { gzipSync } from 'node:zlib';
import WebSocket from 'ws';

const here = dirname(fileURLToPath(import.meta.url));
const tmp = mkdtempSync(join(tmpdir(), 'mksm-test-'));
const key = () => randomBytes(32).toString('hex');
const secrets = { COOKIE_SECRET: key(), ADMIN_SECRET: key(), TURN_SECRET: key() };
const GRACE_MS = 1500, PROBE_BURST = 100;
const children = new Set();
const CADDY = process.env.CADDY || 'caddy';
let caddy = !process.argv.includes('--no-caddy');
try {
  if (caddy) caddy = execFileSync(CADDY, ['version'], { encoding: 'utf8' }).split(' ')[0];
} catch {
  caddy = false;
}

const freePort = () => new Promise((resolve) => {
  const s = createServer().listen(0, '127.0.0.1', () => {
    const { port } = s.address();
    s.close(() => resolve(port));
  });
});
const sleep = (ms) => new Promise((r) => setTimeout(r, ms));

function start(name, cmd, args, env, ready) {
  const child = spawn(cmd, args, { cwd: here, env: { ...process.env, ...env }, stdio: ['ignore', 'pipe', 'pipe'] });
  children.add(child);
  child.log = '';
  child.on('exit', () => children.delete(child));
  return new Promise((resolve, reject) => {
    const timer = setTimeout(() => reject(new Error(`${name} did not start:\n${child.log}`)), 10_000);
    const onData = (d) => {
      child.log += d;
      if (ready.test(child.log)) {
        clearTimeout(timer);
        resolve(child);
      }
    };
    child.stdout.on('data', onData);
    child.stderr.on('data', onData);
    child.on('exit', (code) => reject(new Error(`${name} exited with ${code}:\n${child.log}`)));
  });
}
const stop = (child) => new Promise((resolve) => {
  if (child.exitCode !== null) return resolve();
  child.once('exit', resolve);
  child.kill('SIGTERM');
});
process.on('exit', () => {
  for (const child of children) child.kill('SIGKILL');
  rmSync(tmp, { recursive: true, force: true });
});

let passed = 0;
async function check(name, fn) {
  try {
    await fn();
    passed++;
    console.log(`ok   ${name}`);
  } catch (e) {
    console.log(`FAIL ${name}\n${e.stack}${e.cause ? '\ncause: ' + e.cause.stack : ''}`);
    for (const child of children) console.log(`--- ${child.spawnargs.slice(0, 2).join(' ')} log tail:\n${child.log.slice(-2000)}`);
    process.exit(1);
  }
}

// WebSocket client with a message queue: next() resolves with the next message, or rejects on timeout.
function client(base, cookie, options = {}) {
  return new Promise((resolve, reject) => {
    const ws = new WebSocket(base.replace(/^http/, 'ws') + '/ws', { headers: cookie ? { cookie } : {}, ...options });
    const queue = [], waiters = [];
    ws.on('message', (data, isBinary) => {
      const msg = isBinary ? data : JSON.parse(data); // binary (relay) frames are queued as Buffers
      const waiter = waiters.shift();
      waiter ? waiter(msg) : queue.push(msg);
    });
    ws.next = (ms = 2000) => queue.length ? Promise.resolve(queue.shift()) : new Promise((res, rej) => {
      const waiter = (msg) => { clearTimeout(timer); res(msg); };
      const timer = setTimeout(() => { waiters.splice(waiters.indexOf(waiter), 1); rej(new Error('no message within ' + ms + ' ms')); }, ms);
      waiters.push(waiter);
    });
    ws.quiet = async (ms = 300) => { await sleep(ms); assert.deepEqual(queue, [], 'unexpected message'); };
    ws.ask = (msg) => { ws.send(JSON.stringify(msg)); return ws.next(); };
    ws.on('open', () => resolve(ws));
    ws.on('unexpected-response', (req, res) => reject(Object.assign(new Error('HTTP ' + res.statusCode), { status: res.statusCode })));
    ws.on('error', reject);
  });
}
const closed = (ws) => new Promise((resolve) => (ws.readyState === ws.CLOSED ? resolve() : ws.once('close', resolve)));

// ---- start the servers ----
const signalPort = await freePort();
const caddyPort = caddy ? await freePort() : 0;
const direct = `http://127.0.0.1:${signalPort}`;
const base = caddy ? `http://127.0.0.1:${caddyPort}` : direct;
// A stub FEMME board for /report: records each request; 201 {id: 7} when the bearer token is right, else 401.
const FEMME_TOKEN = key(), femmeGot = [];
const femme = httpServer((req, res) => {
  const chunks = [];
  req.on('data', (c) => chunks.push(c)).on('end', () => {
    const got = { auth: req.headers.authorization === `Bearer ${FEMME_TOKEN}`, method: req.method, url: req.url, type: req.headers['content-type'], body: null };
    try {
      got.body = JSON.parse(Buffer.concat(chunks));
    } catch {}
    femmeGot.push(got);
    res.writeHead(got.auth ? 201 : 401, { 'content-type': 'application/json' }).end(JSON.stringify(got.auth ? { id: 7 } : { error: 'bad token' }));
  });
});
await new Promise((r) => femme.listen(0, '127.0.0.1', r));
const femmeEnv = { FEMME_REPORT_URL: `http://127.0.0.1:${femme.address().port}/api/reports`, FEMME_REPORT_TOKEN: FEMME_TOKEN };
const signalEnv = { ...secrets, HOST: '127.0.0.1', PORT: String(signalPort), DATA_DIR: join(tmp, 'data'), PUBLIC_ORIGIN: base, TURN_HOST: 'turn.test', ROOM_GRACE_MS: String(GRACE_MS), PROBE_BURST: String(PROBE_BURST), ...femmeEnv };
const startSignal = () => start('signal.mjs', process.execPath, ['signal.mjs'], signalEnv, /listening on/);
let signal = await startSignal();

const root = join(tmp, 'root'), build = randomBytes(32).toString('hex');
const wasm = Buffer.concat([Buffer.from('\0asm\x01\0\0\0'), Buffer.alloc(64 * 1024, 7)]);
const disc = randomBytes(3 * 1024 * 1024 + 123);
const packId = randomBytes(8).toString('hex'), tex = `${randomBytes(8).toString('hex')}.${randomBytes(6).toString('hex')}.tex`;
const index = Buffer.from(`#mksm-pack 1 gzip-up\n${tex.slice(0, 16)} 64 64 4 65536 ${tex}\n`), texBody = gzipSync(randomBytes(50_000));
if (caddy) {
  mkdirSync(join(root, 'v', build), { recursive: true });
  writeFileSync(join(root, 'index.html'), readFileSync(join(here, 'site', 'index.html')));
  writeFileSync(join(root, 'current.json'), JSON.stringify({ build }) + '\n');
  writeFileSync(join(root, 'v', build, 'ps2web.html'), '<!doctype html><title>game</title>\n');
  writeFileSync(join(root, 'v', build, 'ps2web.wasm'), wasm);
  writeFileSync(join(root, 'v', build, 'ps2web.wasm.gz'), gzipSync(wasm, { level: 9 }));
  writeFileSync(join(root, 'disc.iso'), disc);
  mkdirSync(join(root, 'pack', 'obj'), { recursive: true });
  writeFileSync(join(root, 'pack', 'current.json'), JSON.stringify({ 4: packId }) + '\n');
  writeFileSync(join(root, 'pack', `${packId}.txt`), index);
  writeFileSync(join(root, 'pack', 'obj', tex), texBody);
  writeFileSync(join(root, 'pack', 'obj', tex + '.gz'), gzipSync(texBody)); // a stray sidecar must still not be used
  await start('caddy', CADDY, ['run', '--config', join(here, 'Caddyfile'), '--adapter', 'caddyfile'], {
    DOMAIN: base, MKSM_ROOT: root, SIGNAL_ADDR: `127.0.0.1:${signalPort}`, CADDY_ADMIN: 'off',
    XDG_CONFIG_HOME: join(tmp, 'xdg'), XDG_DATA_HOME: join(tmp, 'xdg'),
  }, /serving initial configuration/);
}
console.log(`testing ${caddy ? `through Caddy ${caddy} ${base} -> ` : ''}signal.mjs ${direct}`);

// ---- invites and the cookie ----
const get = (path, headers = {}, init = {}) => fetch(base + path, { redirect: 'manual', ...init, headers });
const adminHeaders = { authorization: 'Bearer ' + secrets.ADMIN_SECRET };
const mint = async (uses) => {
  const res = await get(`/admin/invite?uses=${uses}&note=test`, adminHeaders, { method: 'POST' });
  assert.equal(res.status, 201);
  return res.json();
};
let invite, cookie;

await check('/auth without a cookie is 401', async () => {
  assert.equal((await fetch(direct + '/auth')).status, 401);
});
await check('/admin needs the admin secret', async () => {
  assert.equal((await get('/admin/invite', {}, { method: 'POST' })).status, 401);
  assert.equal((await get('/admin/invite', { authorization: 'Bearer nope' }, { method: 'POST' })).status, 401);
});
await check('/admin/invite mints a 2-use link', async () => {
  invite = await mint(2);
  assert.equal(invite.uses, 2);
  assert.match(invite.link, new RegExp('^' + base + '/invite\\?t=[\\w-]{24}$'));
});
await check('a bad invite token is 403 and sets no cookie', async () => {
  const res = await get('/invite?t=nope');
  assert.equal(res.status, 403);
  assert.equal(res.headers.get('set-cookie'), null);
});
await check('/invite sets an HMAC cookie (HttpOnly, Secure, SameSite=Lax) and redirects to /', async () => {
  const res = await get(new URL(invite.link).pathname + new URL(invite.link).search);
  assert.equal(res.status, 302);
  assert.equal(res.headers.get('location'), '/');
  const [set] = res.headers.getSetCookie();
  assert.match(set, /^__Host-mksm=[\w-]+\.\d+\.[\w-]+; Path=\/; Max-Age=34560000; HttpOnly; Secure; SameSite=Lax$/);
  cookie = set.split(';')[0];
});
await check('/auth with the cookie is 200; tampered or missing cookie is 401', async () => {
  assert.equal((await fetch(direct + '/auth', { headers: { cookie } })).status, 200);
  const [name, rest] = cookie.split('=');
  const [id, issued, sig] = rest.split('.');
  for (const bad of [`${name}=${id}.${Number(issued) + 1}.${sig}`, `${name}=${id}.${issued}.${sig.slice(1)}x`, `other=${rest}`])
    assert.equal((await fetch(direct + '/auth', { headers: { cookie: bad } })).status, 401, bad);
});
await check('a signed-in visitor reopening an invite does not use it up', async () => {
  const res = await get(new URL(invite.link).pathname + new URL(invite.link).search, { cookie });
  assert.equal(res.status, 302);
  assert.equal(res.headers.get('set-cookie'), null);
});
await check('the second use works, the third is refused', async () => {
  const path = new URL(invite.link).pathname + new URL(invite.link).search;
  assert.equal((await get(path)).status, 302);
  assert.equal((await get(path)).status, 403);
});
await check('/invite?room= redirects into the room; a malformed room is 400, sets no cookie and keeps the token', async () => {
  const one = await mint(1);
  const path = new URL(one.link).pathname + new URL(one.link).search;
  for (const bad of ['abc', '//evil.example', 'aaaaaaaaaaa1', 'AAAAAAAAAAAA', 'aaaaaaaaaaaaa', '', '/\\evil.example', 'https://evil.example/']) {
    const res = await get(`${path}&room=${encodeURIComponent(bad)}`);
    assert.equal(res.status, 400, bad);
    assert.equal(res.headers.get('set-cookie'), null, bad);
    assert.equal(res.headers.get('location'), null, bad);
    assert.match(await res.text(), /room/, bad);
  }
  const res = await get(`${path}&room=abcdefghijkm`);
  assert.equal(res.status, 302);
  assert.equal(res.headers.get('location'), '/play/abcdefghijkm');
  const roomCookie = res.headers.getSetCookie()[0].split(';')[0];
  assert.equal((await get(path)).status, 403, 'the single use is spent');
  const again = await get(`${path}&room=23456789abcd`, { cookie: roomCookie });
  assert.equal(again.status, 302);
  assert.equal(again.headers.get('location'), '/play/23456789abcd');
  assert.equal(again.headers.get('set-cookie'), null);
  assert.equal((await get(`${path}&room=//evil.example`, { cookie: roomCookie })).status, 400);
});
await check('ROOM_URL: a custom template is used; an off-site or room-less one stops signal.mjs at startup', async () => {
  for (const bad of ['//evil.example/{room}', 'https://evil.example/{room}', '/\\evil.example/{room}', '/play/'])
    await assert.rejects(start('signal.mjs', process.execPath, ['signal.mjs'], { ...signalEnv, PORT: '0', ROOM_URL: bad }, /listening on/), /exited with 1/, bad);
  const port = await freePort(), at = `http://127.0.0.1:${port}`;
  const env = { ...signalEnv, PORT: String(port), DATA_DIR: join(tmp, 'data-host'), ROOM_URL: '/ps2web.html?room={room}' };
  const other = await start('signal.mjs', process.execPath, ['signal.mjs'], env, /listening on/);
  try {
    const { link } = await (await fetch(at + '/admin/invite', { method: 'POST', headers: adminHeaders })).json();
    const res = await fetch(at + new URL(link).pathname + new URL(link).search + '&room=abcdefghijkm', { redirect: 'manual' });
    assert.equal(res.status, 302);
    assert.equal(res.headers.get('location'), '/ps2web.html?room=abcdefghijkm');
  } finally {
    await stop(other);
  }
});

await check('invites persist across a restart; only token hashes are on disk', async () => {
  await stop(signal);
  signal = await startSignal();
  await sleep(200); // let pooled keep-alive sockets to the old process notice it is gone
  const file = readFileSync(join(signalEnv.DATA_DIR, 'invites.json'), 'utf8');
  assert.ok(!file.includes(new URL(invite.link).searchParams.get('t')), 'raw token on disk');
  assert.equal(JSON.parse(file)[invite.id].used, 2);
  assert.equal((await get(new URL(invite.link).pathname + new URL(invite.link).search)).status, 403);
  assert.equal((await fetch(direct + '/auth', { headers: { cookie } })).status, 200);
});
await check('revoking an invite signs its users out', async () => {
  const other = await mint(1);
  const res = await get(new URL(other.link).pathname + new URL(other.link).search);
  const otherCookie = res.headers.getSetCookie()[0].split(';')[0];
  assert.equal((await fetch(direct + '/auth', { headers: { cookie: otherCookie } })).status, 200);
  assert.equal((await get('/admin/revoke?id=' + other.id, adminHeaders, { method: 'POST' })).status, 200);
  assert.equal((await fetch(direct + '/auth', { headers: { cookie: otherCookie } })).status, 401);
  const list = await (await get('/admin/invites', adminHeaders)).json();
  assert.equal(list.find((i) => i.id === other.id).revoked, true);
  assert.ok(list.every((i) => !('hash' in i)));
});

// ---- TURN ----
await check('/turn needs the cookie', async () => {
  assert.equal((await get('/turn')).status, 401);
});
await check('/turn returns coturn REST credentials with a 1 h TTL', async () => {
  const res = await get('/turn', { cookie });
  assert.equal(res.status, 200);
  const turn = await res.json();
  const [expiry, id] = turn.username.split(':');
  assert.equal(id, invite.id);
  assert.ok(Math.abs(Number(expiry) - (Date.now() / 1000 + 3600)) < 5, 'expiry is about now + 1 h');
  assert.equal(turn.ttl, 3600);
  assert.equal(turn.credential, createHmac('sha1', secrets.TURN_SECRET).update(turn.username).digest('base64'));
  assert.deepEqual(turn.iceServers, [
    { urls: ['stun:turn.test:3478'] },
    { urls: ['turn:turn.test:3478?transport=udp', 'turn:turn.test:3478?transport=tcp'], username: turn.username, credential: turn.credential },
  ]);
});

// ---- /report ----
const PNG = Buffer.from('iVBORw0KGgoAAAANSUhEUgAAAAEAAAABCAYAAAAfFcSJAAAADUlEQVR42mNkYPhfDwAChwGA60e6kgAAAABJRU5ErkJggg==', 'base64');
const goodReport = { title: 'Goro  clips\nthrough the floor', text: 'Courtyard, second wave.', png: PNG.toString('base64'), meta: { build: 'abc', page: '/play/x', invite: 'spoofed' } };
const postReport = (body, headers = {}, at = base) => fetch(at + '/report', {
  method: 'POST', headers: { 'content-type': 'application/json', ...headers }, body: typeof body === 'string' || Buffer.isBuffer(body) ? body : JSON.stringify(body),
});
const reportDir = join(signalEnv.DATA_DIR, 'reports');
const redeem = async () => {
  const link = new URL((await mint(1)).link);
  return (await get(link.pathname + link.search)).headers.getSetCookie()[0].split(';')[0];
};
await check('/report: 401 without a valid cookie (Caddy gate and signal.mjs); GET 405; other Content-Type 415', async () => {
  for (const at of [base, direct]) {
    assert.equal((await postReport(goodReport, {}, at)).status, 401, at);
    assert.equal((await postReport(goodReport, { cookie: cookie.slice(0, -2) + 'xx' }, at)).status, 401, at);
  }
  assert.equal((await get('/report', { cookie })).status, 405);
  assert.equal((await postReport(goodReport, { cookie, 'content-type': 'text/plain' })).status, 415);
});
await check('/report: 400 on bad JSON, empty or long text, long title, non-PNG or bad base64, bad or big meta', async () => {
  const bad = [
    '{', '[]', { ...goodReport, text: '' }, { ...goodReport, text: '  \n ' }, { ...goodReport, text: 'x'.repeat(4001) }, { ...goodReport, text: 7 },
    { ...goodReport, title: 'x'.repeat(121) }, { ...goodReport, png: randomBytes(300).toString('base64') }, { ...goodReport, png: '!!!!' },
    { ...goodReport, png: PNG.toString('base64').slice(0, -1) }, { ...goodReport, png: undefined }, { ...goodReport, meta: [] },
    { ...goodReport, meta: { pad: 'x'.repeat(4096) } },
  ];
  for (const body of bad) {
    const res = await postReport(body, { cookie });
    assert.equal(res.status, 400, JSON.stringify(body).slice(0, 120));
    assert.equal((await res.json()).ok, false);
  }
});
await check('/report: 413 over 9 MiB (declared or streamed), an endless body is cut off, 413 for a PNG over 6 MiB', async () => {
  // Streamed: chunks of 64 KiB, no Content-Length; `limit` bytes, then the stream ends.
  const stream = (limit, sent = { bytes: 0 }) => Object.assign(sent, { body: new ReadableStream({
    pull: (c) => (sent.bytes += 1 << 16) > limit ? c.close() : c.enqueue(new Uint8Array(1 << 16).fill(32)),
  }) });
  const postStream = (s) => fetch(base + '/report', { method: 'POST', duplex: 'half', headers: { 'content-type': 'application/json', cookie }, body: s.body });
  assert.equal((await postReport(Buffer.alloc((9 << 20) + 1, 32), { cookie })).status, 413, 'declared');
  assert.equal((await postStream(stream(12 << 20))).status, 413, 'streamed');
  // 1 GiB that nobody should read: answered 413 (or the connection is cut) long before the end.
  const endless = stream(2 ** 30);
  const outcome = await postStream(endless).then((r) => r.status, (e) => e.cause?.code ?? e.message);
  assert.ok([413, 'ECONNRESET', 'EPIPE', 'UND_ERR_SOCKET'].includes(outcome), String(outcome));
  assert.ok(endless.bytes < 256 << 20, `${endless.bytes} bytes sent before the server stopped reading`);
  const big = Buffer.concat([PNG.subarray(0, 8), Buffer.alloc((6 << 20) - 7)]);
  assert.equal((await postReport({ ...goodReport, png: big.toString('base64') }, { cookie })).status, 413);
  assert.ok(!existsSync(reportDir) || readdirSync(reportDir).length === 0, 'nothing saved for refused reports');
});
await check('/report: 200 forwarded to FEMME (bearer, {title, text, png, meta + invite + server}); copy saved 0600 in a 0700 dir', async () => {
  const res = await postReport(goodReport, { cookie, 'user-agent': 'test-agent/1' });
  assert.equal(res.status, 200);
  assert.deepEqual(await res.json(), { ok: true, id: 7, forwarded: true });
  assert.equal(femmeGot.length, 1);
  const [got] = femmeGot;
  assert.deepEqual({ ...got, body: undefined }, { auth: true, method: 'POST', url: '/api/reports', type: 'application/json', body: undefined });
  assert.deepEqual(got.body, { title: 'Goro clips through the floor', text: goodReport.text, png: goodReport.png, meta: { build: 'abc', page: '/play/x', invite: invite.id, server: 'vps' } });
  const files = readdirSync(reportDir).sort();
  assert.equal(files.length, 2);
  assert.match(files[0], /^\d{8}T\d{6}Z-[0-9a-f]{8}\.json$/);
  assert.equal(files[1], files[0].replace(/json$/, 'png'));
  assert.ok(readFileSync(join(reportDir, files[1])).equals(PNG));
  const saved = JSON.parse(readFileSync(join(reportDir, files[0]), 'utf8'));
  assert.equal(saved.invite, invite.id);
  assert.equal(saved.note, 'test');
  assert.equal(saved.userAgent, 'test-agent/1');
  assert.equal(saved.server, 'vps');
  assert.ok(Math.abs(Date.parse(saved.time) - Date.now()) < 10_000);
  assert.deepEqual([saved.text, saved.meta, saved.forwarded, saved.femmeId], [goodReport.text, goodReport.meta, true, 7]);
  assert.equal(statSync(reportDir).mode & 0o777, 0o700);
  for (const f of files) assert.equal(statSync(join(reportDir, f)).mode & 0o777, 0o600, f);
});
await check('/report: 5 an hour per invite, the 6th is 429 (Retry-After); another invite is not affected', async () => {
  const [one, two] = [await redeem(), await redeem()];
  for (let i = 0; i < 5; i++) assert.equal((await postReport(goodReport, { cookie: one })).status, 200, `report ${i + 1}`);
  const res = await postReport(goodReport, { cookie: one });
  assert.equal(res.status, 429);
  assert.ok(Number(res.headers.get('retry-after')) > 3500);
  assert.equal((await postReport(goodReport, { cookie: two })).status, 200);
});
await check('/report: FEMME down is still 200, forwarded:false, copy saved; the token is never logged or answered', async () => {
  await new Promise((r) => { femme.close(r); femme.closeAllConnections(); });
  const before = readdirSync(reportDir).length;
  const res = await postReport(goodReport, { cookie });
  const text = await res.text();
  assert.equal(res.status, 200);
  assert.deepEqual(JSON.parse(text), { ok: true, id: null, forwarded: false });
  assert.equal(readdirSync(reportDir).length, before + 2);
  assert.match(signal.log, /report \S+ from \S+: \d+ B png, saved, not forwarded \(\w+\)/);
  assert.ok(!signal.log.includes(FEMME_TOKEN) && !text.includes(FEMME_TOKEN), 'token leaked');
  for (const f of readdirSync(reportDir)) assert.ok(!readFileSync(join(reportDir, f)).includes(FEMME_TOKEN), `token in ${f}`);
});
await check('/report: FEMME_REPORT_URL / FEMME_REPORT_TOKEN unset keeps only the local copy', async () => {
  const port = await freePort(), at = `http://127.0.0.1:${port}`, dataDir = join(tmp, 'data-nofemme');
  const other = await start('signal.mjs', process.execPath, ['signal.mjs'], { ...signalEnv, PORT: String(port), DATA_DIR: dataDir, FEMME_REPORT_URL: '', FEMME_REPORT_TOKEN: '' }, /listening on/);
  try {
    assert.match(other.log, /local copy only/);
    const { link } = await (await fetch(at + '/admin/invite', { method: 'POST', headers: adminHeaders })).json();
    const own = (await fetch(at + new URL(link).pathname + new URL(link).search, { redirect: 'manual' })).headers.getSetCookie()[0].split(';')[0];
    const res = await postReport(goodReport, { cookie: own }, at);
    assert.equal(res.status, 200);
    assert.deepEqual(await res.json(), { ok: true, id: null, forwarded: false });
    assert.equal(readdirSync(join(dataDir, 'reports')).length, 2);
  } finally {
    await stop(other);
  }
});

// ---- rooms ----
let room, a, b;
await check('/ws without a cookie is refused (401)', async () => {
  await assert.rejects(client(base, null), { status: 401 });
  await assert.rejects(client(base, 'other=1'), { status: 401 });
});
await check('/ws from a foreign Origin is refused (403)', async () => {
  await assert.rejects(client(base, cookie, { origin: 'https://evil.example' }), { status: 403 });
});
await check('create returns a short random room id pinned to a build', async () => {
  const creator = await client(base, cookie);
  const reply = await creator.ask({ type: 'create', build });
  assert.equal(reply.type, 'created');
  assert.match(reply.room, /^[a-z2-9]{12}$/);
  assert.equal(reply.build, build);
  room = reply.room;
  const again = await creator.ask({ type: 'create' });
  assert.notEqual(again.room, room);
  creator.close(); // the landing page closes its socket; the room waits for the game pages
  assert.deepEqual(await (await client(base, cookie)).ask({ type: 'info', room }), { type: 'info', room, build, peers: 0 });
});
await check('relay before joining is refused; unknown room is not-found', async () => {
  a = await client(base, cookie);
  assert.deepEqual(await a.ask({ type: 'offer', sdp: 'x' }), { type: 'error', error: 'not-joined', request: 'offer' });
  assert.deepEqual(await a.ask({ type: 'join', room: 'aaaaaaaaaaaa' }), { type: 'error', error: 'not-found', request: 'join' });
  assert.deepEqual(await a.ask({ type: 'nonsense' }), { type: 'error', error: 'bad-request', request: 'nonsense' });
});
await check('first joiner is host and has no peer; relay with no peer is refused', async () => {
  const joined = await a.ask({ type: 'join', room, build });
  assert.equal(joined.type, 'joined');
  assert.equal(joined.host, true);
  assert.equal(joined.peer, null);
  assert.equal(joined.build, build);
  a.id = joined.id;
  assert.deepEqual(await a.ask({ type: 'ice', candidate: {} }), { type: 'error', error: 'no-peer', request: 'ice' });
});
await check('a client on another build is refused', async () => {
  const c = await client(base, cookie);
  assert.deepEqual(await c.ask({ type: 'join', room, build: 'ab'.repeat(32) }), { type: 'error', error: 'build-mismatch', request: 'join' });
  c.close();
});
await check('second joiner sees the host; the host is told', async () => {
  b = await client(base, cookie);
  const joined = await b.ask({ type: 'join', room });
  assert.equal(joined.host, false);
  assert.equal(joined.peer, a.id);
  b.id = joined.id;
  assert.deepEqual(await a.next(), { type: 'peer-joined', peer: b.id });
});
await check('offer/answer/ice/ctl are relayed both ways with the sender id', async () => {
  const offer = { type: 'offer', sdp: 'v=0 offer' };
  b.send(JSON.stringify(offer));
  assert.deepEqual(await a.next(), { ...offer, from: b.id });
  const answer = { type: 'answer', sdp: 'v=0 answer' };
  a.send(JSON.stringify(answer));
  assert.deepEqual(await b.next(), { ...answer, from: a.id });
  for (const [from, to] of [[a, b], [b, a]]) {
    const ice = { type: 'ice', candidate: { candidate: 'candidate:1 1 udp 1 1.2.3.4 5 typ host', sdpMid: '0' } };
    from.send(JSON.stringify(ice));
    assert.deepEqual(await to.next(), { ...ice, from: from.id });
    const ctl = { type: 'ctl', data: { hello: [1, 2, 3] } };
    from.send(JSON.stringify(ctl));
    assert.deepEqual(await to.next(), { ...ctl, from: from.id });
  }
  await a.quiet();
  await b.quiet();
});
await check('a third peer is rejected (full) and nobody is notified', async () => {
  const c = await client(base, cookie);
  assert.deepEqual(await c.ask({ type: 'join', room }), { type: 'error', error: 'full', request: 'join' });
  assert.deepEqual(await c.ask({ type: 'info', room }), { type: 'info', room, build, peers: 2 });
  c.close();
  await a.quiet();
  await b.quiet();
});
await check('a guest disconnect notifies the host; a new guest drops in', async () => {
  b.close();
  assert.deepEqual(await a.next(), { type: 'peer-left', peer: b.id, host: true });
  b = await client(base, cookie);
  const joined = await b.ask({ type: 'join', room });
  assert.equal(joined.peer, a.id);
  b.id = joined.id;
  assert.deepEqual(await a.next(), { type: 'peer-joined', peer: b.id });
});
await check('when the host leaves, the guest is told and becomes host', async () => {
  assert.deepEqual(await a.ask({ type: 'leave' }), { type: 'left' });
  assert.deepEqual(await b.next(), { type: 'peer-left', peer: a.id, host: true });
  a.close();
});
await check('an empty room survives the grace period, then is dropped', async () => {
  b.close();
  await closed(b);
  const c = await client(base, cookie);
  assert.deepEqual(await c.ask({ type: 'info', room }), { type: 'info', room, build, peers: 0 });
  await sleep(GRACE_MS + 300);
  assert.deepEqual(await c.ask({ type: 'info', room }), { type: 'error', error: 'not-found', request: 'info' });
  c.close();
});
// ---- personal codes: the owner hosts room codeOf(owner), friends join by code ----
const ROOM_CHARS = 'abcdefghijkmnpqrstuvwxyz23456789';
const codeOf = (owner) => { // 40 bits of HMAC(COOKIE_SECRET, 'code:' + owner), 5 bits per char, most significant first
  const v = BigInt('0x' + createHmac('sha256', secrets.COOKIE_SECRET).update('code:' + owner).digest().subarray(0, 5).toString('hex'));
  return Array.from({ length: 8 }, (_, i) => ROOM_CHARS[Number((v >> BigInt(35 - 5 * i)) & 31n)]).join('');
};
const owner = () => randomBytes(16).toString('hex'), tab = () => randomBytes(8).toString('hex');
const host = async (who, nick = 'Alice', t = tab()) => {
  const ws = await client(base, cookie);
  const joined = await ws.ask({ type: 'join', owner: who, nick, build, tab: t });
  assert.equal(joined.type, 'joined', JSON.stringify(joined));
  ws.id = joined.id;
  return [ws, joined];
};
const guest = async (code, nick = 'Bob', t = tab()) => {
  const ws = await client(base, cookie);
  const joined = await ws.ask({ type: 'join', room: code, nick, build, tab: t });
  ws.id = joined.id;
  return [ws, joined];
};
let alice, code;
await check('code: 8 room chars, HMAC of the owner key; stable per owner; a malformed owner is refused', async () => {
  const c = await client(base, cookie);
  alice = owner();
  const reply = await c.ask({ type: 'code', owner: alice });
  assert.deepEqual(reply, { type: 'code', code: codeOf(alice) });
  assert.match(reply.code, /^[a-z2-9]{8}$/);
  code = reply.code;
  assert.equal((await c.ask({ type: 'code', owner: alice })).code, code);
  assert.notEqual((await c.ask({ type: 'code', owner: owner() })).code, code);
  for (const bad of [undefined, 'abc', alice.toUpperCase(), alice + '0', 42])
    assert.deepEqual(await c.ask({ type: 'code', owner: bad }), { type: 'error', error: 'bad-request', request: 'code' }, String(bad));
  c.close();
});
await check('a code nobody hosts is offline (info and join)', async () => {
  const c = await client(base, cookie);
  assert.deepEqual(await c.ask({ type: 'info', room: code }), { type: 'error', error: 'offline', request: 'info' });
  assert.deepEqual(await c.ask({ type: 'join', room: code, nick: 'Bob' }), { type: 'error', error: 'offline', request: 'join' });
  c.close();
});
let h, g;
await check('join by owner creates the room on demand; the owner is host; info gives the host nick', async () => {
  let joined;
  [h, joined] = await host(alice, 'Alice');
  assert.deepEqual(joined, { type: 'joined', room: code, id: h.id, host: true, peer: null, build, nick: null });
  const c = await client(base, cookie);
  assert.deepEqual(await c.ask({ type: 'info', room: code }), { type: 'info', room: code, build, peers: 1, nick: 'Alice' });
  c.close();
});
await check('join by code: guest is P2, both sides get the other nick, signalling flows', async () => {
  let joined;
  [g, joined] = await guest(code, 'Bob');
  assert.deepEqual(joined, { type: 'joined', room: code, id: g.id, host: false, peer: h.id, build, nick: 'Alice' });
  assert.deepEqual(await h.next(), { type: 'peer-joined', peer: g.id, nick: 'Bob' });
  g.send(JSON.stringify({ type: 'offer', sdp: 'x' }));
  assert.deepEqual(await h.next(), { type: 'offer', sdp: 'x', from: g.id });
  const c = await client(base, cookie);
  assert.deepEqual(await c.ask({ type: 'join', room: code, nick: 'Eve' }), { type: 'error', error: 'full', request: 'join' });
  assert.deepEqual((await c.ask({ type: 'info', room: code })).peers, 2);
  c.close();
});
await check('a guest on another build is refused (build-mismatch)', async () => {
  const c = await client(base, cookie);
  g.close();
  assert.deepEqual(await h.next(), { type: 'peer-left', peer: g.id, host: true });
  assert.deepEqual(await c.ask({ type: 'join', room: code, build: 'ab'.repeat(32) }), { type: 'error', error: 'build-mismatch', request: 'join' });
  c.close();
  [g] = await guest(code, 'Bob');
  assert.equal((await h.next()).type, 'peer-joined');
});
await check('the same page rejoining (same tab) takes its old place: same id, the peer is not told', async () => {
  const carol = owner(), t = tab();
  const [h2, j2] = await host(carol, 'Carol', t);
  const [g2] = await guest(j2.room, 'Dave');
  assert.equal((await h2.next()).type, 'peer-joined');
  // h2's connection died without the server noticing yet; the page reconnects with the same tab
  const [h3, j3] = await host(carol, 'Carol', t);
  assert.deepEqual(j3, { type: 'joined', room: j2.room, id: h2.id, host: true, peer: g2.id, build, nick: 'Dave' });
  await closed(h2);
  await g2.quiet();
  h3.send(JSON.stringify({ type: 'ctl', data: 1 }));
  assert.deepEqual(await g2.next(), { type: 'ctl', data: 1, from: h2.id });
  // the guest too
  const [g3, j4] = await guest(j2.room, 'Dave', 'ff'.repeat(8));
  assert.deepEqual(j4, { type: 'error', error: 'full', request: 'join' });
  g3.close();
  h3.close();
  assert.deepEqual(await g2.next(), { type: 'peer-left', peer: h2.id, closed: true });
  g2.close();
});
await check('a second page of the same owner replaces the first: it gets replaced, its guest peer-left closed', async () => {
  const [h2, joined] = await host(alice, 'Alice 2');
  assert.deepEqual(joined, { type: 'joined', room: code, id: h2.id, host: true, peer: null, build, nick: null });
  assert.deepEqual(await h.next(), { type: 'replaced' });
  assert.deepEqual(await g.next(), { type: 'peer-left', peer: h.id, closed: true });
  assert.deepEqual(await h.ask({ type: 'ctl', data: 1 }), { type: 'error', error: 'not-joined', request: 'ctl' });
  assert.deepEqual(await g.ask({ type: 'ctl', data: 1 }), { type: 'error', error: 'not-joined', request: 'ctl' });
  h.close();
  await h2.quiet();
  const c = await client(base, cookie);
  assert.deepEqual(await c.ask({ type: 'info', room: code }), { type: 'info', room: code, build, peers: 1, nick: 'Alice 2' });
  c.close();
  g.close();
  h = h2;
});
await check('a guest leaving keeps the room; the owner leaving closes it (guest gets peer-left closed, no promotion)', async () => {
  [g] = await guest(code, 'Bob');
  assert.equal((await h.next()).type, 'peer-joined');
  assert.deepEqual(await g.ask({ type: 'leave' }), { type: 'left' });
  assert.deepEqual(await h.next(), { type: 'peer-left', peer: g.id, host: true });
  [g] = await guest(code, 'Bob');
  assert.equal((await h.next()).type, 'peer-joined');
  h.close();
  assert.deepEqual(await g.next(), { type: 'peer-left', peer: h.id, closed: true });
  assert.deepEqual(await g.ask({ type: 'info', room: code }), { type: 'error', error: 'offline', request: 'info' });
  assert.deepEqual(await g.ask({ type: 'ctl', data: 1 }), { type: 'error', error: 'not-joined', request: 'ctl' });
  g.close();
});
await check('nicknames: NFKC, control/bidi/zero-width chars stripped, spaces collapsed, 20 chars max, else Player', async () => {
  const cases = [
    ['Ａｌｉｃｅ', 'Alice'],
    ['\u202eecilA\u202c', 'ecilA'],
    ['Al\u200bi\u0000c\u0007e\u2066', 'Alice'],
    ['  two \n\t  words\u2028 ', 'two words'],
    ['x'.repeat(30), 'x'.repeat(20)],
    ['😀'.repeat(25), '😀'.repeat(20)],
    ['\u200f\u200e ', 'Player'],
    ['', 'Player'],
    [42, 'Player'],
  ];
  for (const [nick, want] of cases) {
    const key = owner();
    const [o] = await host(key, nick);
    const c = await client(base, cookie);
    assert.equal((await c.ask({ type: 'info', room: codeOf(key) })).nick, want, JSON.stringify(nick));
    const [p, joined] = await guest(codeOf(key), nick);
    assert.equal(joined.nick, want);
    assert.equal((await o.next()).nick, want, JSON.stringify(nick));
    for (const ws of [o, c, p]) ws.close();
  }
});
await check('code probes (info / join by code) are rate-limited per invite; code and owner joins are not', async () => {
  const one = await mint(1);
  const res = await get(new URL(one.link).pathname + new URL(one.link).search);
  const other = res.headers.getSetCookie()[0].split(';')[0];
  const c = await client(base, other);
  const nobody = codeOf(owner());
  for (let i = 0; i < PROBE_BURST; i++) assert.equal((await c.ask({ type: i % 2 ? 'info' : 'join', room: nobody })).error, 'offline', 'probe ' + i);
  assert.deepEqual(await c.ask({ type: 'info', room: nobody }), { type: 'error', error: 'rate-limited', request: 'info' });
  assert.deepEqual(await c.ask({ type: 'join', room: nobody }), { type: 'error', error: 'rate-limited', request: 'join' });
  assert.equal((await c.ask({ type: 'code', owner: owner() })).type, 'code');
  const d = await client(base, other); // per invite, not per socket
  assert.equal((await d.ask({ type: 'info', room: nobody })).error, 'rate-limited');
  assert.equal((await d.ask({ type: 'join', owner: owner(), nick: 'x' })).type, 'joined');
  const e = await client(base, cookie); // another invite is not affected
  assert.equal((await e.ask({ type: 'info', room: nobody })).error, 'offline');
  for (const ws of [c, d, e]) ws.close();
});
await check('/invite?room= also takes an 8-char personal code', async () => {
  const one = await mint(1);
  const res = await get(`${new URL(one.link).pathname}${new URL(one.link).search}&room=${code}`);
  assert.equal(res.status, 302);
  assert.equal(res.headers.get('location'), '/play/' + code);
});
await check('oversized messages close only that socket (1009); the server keeps serving', async () => {
  const c = await client(base, cookie);
  const code = new Promise((resolve) => c.once('close', resolve));
  c.send(JSON.stringify({ type: 'ctl', data: 'x'.repeat(70 * 1024) }));
  assert.equal(await code, 1009);
  const d = await client(base, cookie);
  assert.equal((await d.ask({ type: 'create' })).type, 'created');
  d.close();
  assert.equal((await fetch(direct + '/auth', { headers: { cookie } })).status, 200);
});

// ---- binary relay (the fallback when WebRTC cannot connect) ----
const RELAY_MAX = 256 * 1024, RELAY_RATE = 8_000_000, RELAY_BURST = 1 << 20, RELAY_BACKLOG = 4 << 20; // signal.mjs defaults
const status = async () => (await get('/admin/status', adminHeaders)).json();
const pair = async () => {
  const x = await client(base, cookie), y = await client(base, cookie);
  const { room } = await x.ask({ type: 'create' });
  x.id = (await x.ask({ type: 'join', room })).id;
  y.id = (await y.ask({ type: 'join', room })).id;
  assert.deepEqual(await x.next(), { type: 'peer-joined', peer: y.id });
  return [x, y, room];
};
// 20 MiB as 320 frames of 64 KiB: client header (channel 0, binary) + uint32 sequence number + random bytes.
const COUNT = 320, SIZE = 64 * 1024, TOTAL = COUNT * SIZE, blob = randomBytes(SIZE);
const frame = (seq) => {
  const b = Buffer.from(blob);
  b[0] = b[1] = 0;
  b.writeUInt32BE(seq, 2);
  return b;
};
const sendAll = (ws) => { for (let i = 0; i < COUNT; i++) ws.send(frame(i)); };
const receiveAll = async (ws) => {
  for (let i = 0; i < COUNT; i++) {
    const msg = await ws.next(10_000);
    assert.ok(Buffer.isBuffer(msg), `frame ${i}: got ${JSON.stringify(msg)}`);
    if (!msg.equals(frame(i))) assert.fail(`frame ${i}: got ${msg.length} bytes, sequence ${msg.readUInt32BE(2)}`);
  }
};
let x, y;
await check('binary before joining is refused (not-joined); alone in a room it is dropped silently', async () => {
  const c = await client(base, cookie);
  c.send(Buffer.from([0, 0, 1, 2, 3]));
  assert.deepEqual(await c.next(), { type: 'error', error: 'not-joined', request: 'relay' });
  const { room } = await c.ask({ type: 'create' });
  assert.equal((await c.ask({ type: 'join', room })).type, 'joined');
  c.send(Buffer.from([0, 0, 1, 2, 3]));
  await c.quiet();
  c.close();
});
await check('binary is relayed verbatim both ways, as binary, with nothing added', async () => {
  [x, y] = await pair();
  const cases = [
    [x, y, Buffer.from([0, 0, ...randomBytes(1000)])],
    [y, x, Buffer.concat([Buffer.from([1, 1]), Buffer.from('{"hello":"wörld"}')])],
    [x, y, Buffer.from([1, 0])],
    [y, x, randomBytes(5000)],
  ];
  for (const [from, to, data] of cases) {
    from.send(data);
    const got = await to.next();
    assert.ok(Buffer.isBuffer(got), 'arrives as binary');
    assert.ok(got.equals(data), 'byte-exact');
  }
  await x.quiet();
  await y.quiet();
});
await check('transport is relayed both ways with the sender id', async () => {
  for (const [from, to, mode] of [[x, y, 'relay'], [y, x, 'p2p']]) {
    from.send(JSON.stringify({ type: 'transport', mode }));
    assert.deepEqual(await to.next(), { type: 'transport', mode, from: from.id });
  }
});
await check('exactly RELAY_MAX (256 KiB) passes; 1 byte more is refused (too-big) and the socket keeps working', async () => {
  const max = randomBytes(RELAY_MAX);
  x.send(max);
  assert.ok((await y.next()).equals(max));
  x.send(randomBytes(RELAY_MAX + 1));
  assert.deepEqual(await x.next(), { type: 'error', error: 'too-big', request: 'relay' });
  const after = Buffer.from([0, 0, 42]);
  x.send(after);
  assert.ok((await y.next()).equals(after));
  await x.quiet();
  await y.quiet();
  x.close();
  y.close();
});
await check('a 20 MiB burst is paced by RELAY_RATE, not dropped: complete, in order, >= (20 MiB - burst) / rate', async () => {
  [x, y] = await pair();
  const t0 = performance.now();
  sendAll(x);
  await receiveAll(y);
  const seconds = (performance.now() - t0) / 1000, floor = (TOTAL - RELAY_BURST) / RELAY_RATE;
  console.log(`     ${(TOTAL / 2 ** 20).toFixed(0)} MiB in ${seconds.toFixed(2)} s; floor ${floor.toFixed(2)} s`);
  assert.ok(seconds >= floor * 0.98, `too fast for the rate limit: ${seconds} s`);
  assert.ok(seconds < floor * 2 + 1, `much slower than RELAY_RATE: ${seconds} s`);
  await y.quiet(0);
  x.close();
  y.close();
});
await check('a receiver that stops reading holds its sender (backlog cap); after it resumes nothing is lost', async () => {
  [x, y] = await pair();
  assert.ok((await status()).relay.peakBacklog <= RELAY_BACKLOG);
  const t0 = performance.now();
  y.pause();
  sendAll(x);
  await sleep(2000);
  y.resume();
  await receiveAll(y);
  const seconds = (performance.now() - t0) / 1000, { relay } = await status();
  console.log(`     ${(TOTAL / 2 ** 20).toFixed(0)} MiB in ${seconds.toFixed(2)} s with a 2 s stall; peak backlog ${(relay.peakBacklog / 2 ** 20).toFixed(2)} MiB`);
  assert.ok(relay.peakBacklog > RELAY_BACKLOG, 'the backlog never reached RELAY_BACKLOG (path not exercised)');
  assert.ok(relay.peakBacklog <= RELAY_BACKLOG + 2 * RELAY_MAX, 'the backlog was not capped');
  await x.quiet(0);
  x.close();
  y.close();
});
await check('a held sender is released when its peer goes away; the rest of its binary is dropped silently', async () => {
  let room;
  [x, y, room] = await pair();
  y.pause();
  sendAll(x);
  await sleep(1500);
  y.terminate();
  assert.deepEqual(await x.next(5000), { type: 'peer-left', peer: y.id, host: true });
  assert.deepEqual(await x.ask({ type: 'info', room }), { type: 'info', room, build: null, peers: 1 });
  await x.quiet();
  x.close();
});

// ---- Caddy: gate, headers, precompression, Range ----
if (caddy) {
  const isolation = (res) => {
    assert.equal(res.headers.get('cross-origin-opener-policy'), 'same-origin');
    assert.equal(res.headers.get('cross-origin-embedder-policy'), 'require-corp');
    assert.equal(res.headers.get('cross-origin-resource-policy'), 'same-origin');
  };
  await check('caddy: every path is 401 without the cookie, the disc included, and 401s are not cacheable', async () => {
    for (const path of ['/', '/play/abcdefghijkm', '/current.json', `/v/${build}/ps2web.wasm`, `/v/${build}/ps2web.html`, '/disc.iso', '/nope',
      '/pack/current.json', `/pack/${packId}.txt`, `/pack/obj/${tex}`, '/pack/obj/x.tex'])
      for (const method of ['GET', 'HEAD']) {
        const res = await get(path, { range: 'bytes=0-9' }, { method });
        assert.equal(res.status, 401, `${method} ${path}`);
        assert.equal(res.headers.get('cache-control'), 'no-store', `${method} ${path}`);
      }
  });
  await check('caddy: landing page and /play/<room> with COOP/COEP/CORP and no-cache', async () => {
    for (const path of ['/', '/play/abcdefghijkm']) {
      const res = await get(path, { cookie });
      assert.equal(res.status, 200, path);
      isolation(res);
      assert.equal(res.headers.get('cache-control'), 'no-cache');
      assert.match(await res.text(), /Your code/);
    }
  });
  await check('caddy: current.json is no-cache', async () => {
    const res = await get('/current.json', { cookie });
    assert.equal(res.headers.get('cache-control'), 'no-cache');
    assert.deepEqual(await res.json(), { build });
  });
  await check('caddy: pack current.json is no-cache; indexes and objects immutable octet-stream, raw bytes, no Content-Encoding', async () => {
    const cur = await get('/pack/current.json', { cookie });
    assert.equal(cur.status, 200);
    isolation(cur);
    assert.equal(cur.headers.get('cache-control'), 'no-cache');
    assert.deepEqual(await cur.json(), { 4: packId });
    for (const [path, body] of [[`/pack/${packId}.txt`, index], [`/pack/obj/${tex}`, texBody]]) {
      const res = await get(path, { cookie, 'accept-encoding': 'gzip, br' });
      assert.equal(res.status, 200, path);
      isolation(res);
      assert.equal(res.headers.get('cache-control'), 'private, max-age=31536000, immutable', path);
      assert.equal(res.headers.get('content-type'), 'application/octet-stream', path);
      assert.equal(res.headers.get('content-encoding'), null, path);
      assert.equal(Number(res.headers.get('content-length')), body.length, path);
      assert.ok(Buffer.from(await res.arrayBuffer()).equals(body), path);
    }
    const missing = await get(`/pack/obj/${'0'.repeat(16)}.${'0'.repeat(12)}.tex`, { cookie });
    assert.equal(missing.status, 404);
    assert.equal(missing.headers.get('cache-control'), null, 'a 404 must not be cached as immutable');
    assert.equal((await get('/pack/obj/', { cookie })).status, 404, 'no directory listing');
  });
  await check('caddy: build files are immutable and served precompressed as application/wasm', async () => {
    const res = await get(`/v/${build}/ps2web.wasm`, { cookie, 'accept-encoding': 'br, gzip' });
    assert.equal(res.status, 200, 'Caddy < 2.11 answers precompressed files with 206 (caddy#7250)');
    isolation(res);
    assert.equal(res.headers.get('content-encoding'), 'gzip');
    assert.equal(Number(res.headers.get('content-length')), gzipSync(wasm, { level: 9 }).length);
    assert.equal(res.headers.get('content-type'), 'application/wasm');
    assert.equal(res.headers.get('cache-control'), 'private, max-age=31536000, immutable');
    assert.ok(Buffer.from(await res.arrayBuffer()).equals(wasm));
    const missing = await get(`/v/${build}/nope.js`, { cookie });
    assert.equal(missing.status, 404);
    assert.equal(missing.headers.get('cache-control'), null, 'a 404 must not be cached as immutable');
    assert.equal((await get('/v/', { cookie })).status, 404, 'no directory listing');
  });
  await check('caddy: disc HEAD size and Range reads (206, raw bytes)', async () => {
    const head = await get('/disc.iso', { cookie }, { method: 'HEAD' });
    assert.equal(head.status, 200);
    assert.equal(Number(head.headers.get('content-length')), disc.length);
    assert.equal(head.headers.get('accept-ranges'), 'bytes');
    for (const [start, end] of [[0, 2047], [1 << 20, (1 << 20) + 65535], [disc.length - 100, disc.length - 1]]) {
      const res = await get('/disc.iso', { cookie, range: `bytes=${start}-${end}`, 'accept-encoding': 'gzip, br' });
      assert.equal(res.status, 206);
      isolation(res);
      assert.equal(res.headers.get('content-range'), `bytes ${start}-${end}/${disc.length}`);
      assert.equal(res.headers.get('content-encoding'), null);
      assert.ok(Buffer.from(await res.arrayBuffer()).equals(disc.subarray(start, end + 1)));
    }
  });
}

console.log(`\n${passed} checks passed${caddy ? '' : ' (Caddy checks skipped)'}`);
await stop(signal);
for (const child of children) await stop(child);
process.exit(0);
