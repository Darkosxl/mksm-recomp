#!/usr/bin/env node
// Real-tunnel smoke test of host mode (needs internet; mksm/host.sh downloads cloudflared on its first run). Runs
// mksm/host.sh with a dummy build and a random disc, then goes through https://<random>.trycloudflare.com:
// 401 without the cookie, /host-info refused, invite -> cookie -> page 200, disc Range 206 with the right bytes,
// invite reuse refused, full-disc download throughput, small Range latency, and the binary WebSocket relay between
// the host (local) and a guest (through the tunnel). Ctrl-C-style teardown at the end must leave no process behind.
// usage: cd server && node host_tunnel_test.mjs [--disc-mb 50] [--relay-mb 20]
import assert from 'node:assert/strict';
import { execFileSync, spawn } from 'node:child_process';
import { createHash, randomBytes } from 'node:crypto';
import { lookup as dnsLookup } from 'node:dns';
import { mkdirSync, mkdtempSync, rmSync, writeFileSync } from 'node:fs';
import { request as httpsRequest, Agent } from 'node:https';
import { createServer } from 'node:net';
import { tmpdir } from 'node:os';
import { dirname, join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { parseArgs } from 'node:util';
import { gunzipSync } from 'node:zlib';
import WebSocket from 'ws';

const { values: opt } = parseArgs({ options: { 'disc-mb': { type: 'string', default: '50' }, 'relay-mb': { type: 'string', default: '20' } } });
const here = dirname(fileURLToPath(import.meta.url));
const tmp = mkdtempSync(join(tmpdir(), 'mksm-tunnel-test-'));
const sleep = (ms) => new Promise((r) => setTimeout(r, ms));
const MiB = 1 << 20;
let hostSh, a, b; // a: the host's WebSocket (local), b: the guest's (through the tunnel)
const killGroup = (sig) => { try { process.kill(-hostSh.pid, sig); } catch {} };
process.on('exit', () => {
  if (hostSh && hostSh.exitCode === null) killGroup('SIGTERM'); // host.sh's trap stops cloudflared, host.mjs, signal.mjs
  rmSync(tmp, { recursive: true, force: true });
});
for (const sig of ['SIGINT', 'SIGTERM']) process.on(sig, () => process.exit(130));

const results = {};
let passed = 0;
async function check(name, fn) {
  const t0 = Date.now();
  try {
    await fn();
    passed++;
    console.log(`ok   ${name} (${Date.now() - t0} ms)`);
  } catch (e) {
    console.log(`FAIL ${name}\n${e.stack}\n--- host.sh output tail:\n${hostSh.log.slice(-3000)}`);
    await teardown();
    process.exit(1);
  }
}

// ---- fixtures ----
const build = join(tmp, 'build');
mkdirSync(build);
const page = '<!doctype html><title>game</title>\n';
const wasm = Buffer.concat([Buffer.from('\0asm\x01\0\0\0'), randomBytes(256 * 1024)]);
writeFileSync(join(build, 'ps2web.html'), page);
writeFileSync(join(build, 'ps2web.wasm'), wasm);
const disc = randomBytes(Number(opt['disc-mb']) * MiB); // random: nothing on the way can compress it
writeFileSync(join(tmp, 'disc.iso'), disc);
const discSha = createHash('sha256').update(disc).digest('hex');

const port = await new Promise((res) => { const s = createServer().listen(0, '127.0.0.1', () => { const p = s.address().port; s.close(() => res(p)); }); });
const local = `http://127.0.0.1:${port}`;

// ---- mksm/host.sh, in its own process group ----
hostSh = spawn('bash', [join(here, '..', 'mksm', 'host.sh'), '--port', String(port), '--build', build, '--disc', join(tmp, 'disc.iso')],
  { stdio: ['ignore', 'pipe', 'pipe'], detached: true });
hostSh.log = '';
for (const s of [hostSh.stdout, hostSh.stderr]) s.on('data', (d) => { hostSh.log += d; process.stdout.write(String(d).replace(/^(?=.)/gm, '  host.sh| ')); });
const hostShExit = new Promise((r) => hostSh.once('exit', (code, sig) => r(code ?? sig)));

const t0 = Date.now();
let tunnel;
await check('host.sh starts host.mjs and a quick tunnel that reaches it', async () => {
  for (const end = Date.now() + 120_000; ; await sleep(500)) {
    if (hostSh.exitCode !== null) throw new Error(`host.sh exited with ${hostSh.exitCode}`);
    if (Date.now() > end) throw new Error('no tunnel within 120 s');
    if (/tunnel reaches this PC|did not answer within/.test(hostSh.log)) break;
  }
  tunnel = JSON.parse(execFileSync('curl', ['-fsS', `${local}/host-info`], { encoding: 'utf8' })).tunnelUrl;
  assert.match(tunnel, /^https:\/\/[a-z0-9-]+\.trycloudflare\.com$/);
  results.tunnelUrl = tunnel;
  results.startToReachableS = (Date.now() - t0) / 1000;
});

// The new host name may still be NXDOMAIN in this machine's resolver cache (60 s negative TTL): connect to
// trycloudflare.com's edge addresses instead, with the tunnel's name in SNI and Host (like curl --connect-to).
const tunnelHost = new URL(tunnel).host;
const lookup = (host, options, cb) => dnsLookup(host === tunnelHost ? 'trycloudflare.com' : host, options, cb);
const agent = new Agent({ keepAlive: true, lookup });
// -> { status, headers, body: Buffer } (no redirects followed, no decompression)
const get = (path, headers = {}, method = 'GET', sink) => new Promise((resolve, reject) => {
  const req = httpsRequest(tunnel + path, { method, headers, agent }, (res) => {
    const chunks = [];
    res.on('data', (c) => (sink ? sink(c) : chunks.push(c)));
    res.on('end', () => resolve({ status: res.statusCode, headers: res.headers, body: Buffer.concat(chunks) }));
    res.on('error', reject);
  });
  req.setTimeout(120_000, () => req.destroy(new Error('timeout')));
  req.on('error', reject).end();
});

await check('the tunnel answers from the origin 5 times in a row (edges learn a new tunnel over a few seconds)', async () => {
  const seen = [];
  for (let ok = 0, end = Date.now() + 60_000; ok < 5; await sleep(300)) {
    if (Date.now() > end) throw new Error('statuses: ' + seen.join(' '));
    const { status } = await get('/');
    seen.push(status);
    ok = status === 401 ? ok + 1 : 0;
  }
  results.edgeStatusesBeforeStable = seen.join(' ');
});

await check('through the tunnel without a cookie: 401 on the page, wasm and disc; /host-info refused', async () => {
  for (const path of ['/', '/ps2web.html', '/ps2web.wasm', '/disc.iso', '/turn']) {
    const res = await get(path, { range: 'bytes=0-1023' });
    assert.equal(res.status, 401, path);
    assert.ok(!res.body.includes(disc.subarray(0, 64)), path);
  }
  for (const path of ['/host-info', '/host-info?new=1']) assert.equal((await get(path)).status, 403, path);
  assert.equal((await get('/host-info/tunnel?url=https://evil.example', {}, 'POST')).status, 403);
});

const ROOM = 'abcdefghijkm';
let cookie, inviteUrl;
await check('invite through the tunnel: cookie + redirect to the room; the second use is refused', async () => {
  inviteUrl = JSON.parse(execFileSync('curl', ['-fsS', `${local}/host-info?room=${ROOM}`], { encoding: 'utf8' })).inviteUrl;
  assert.ok(inviteUrl.startsWith(`${tunnel}/invite?t=`) && inviteUrl.endsWith(`&room=${ROOM}`), inviteUrl);
  const path = inviteUrl.slice(tunnel.length);
  const res = await get(path);
  assert.equal(res.status, 302);
  assert.equal(res.headers.location, `/ps2web.html?room=${ROOM}`);
  cookie = res.headers['set-cookie'][0].split(';')[0];
  assert.match(cookie, /^__Host-mksm=/);
  const again = await get(path);
  assert.equal(again.status, 403);
  assert.equal(again.headers['set-cookie'], undefined);
});

await check('with the cookie: page 200 with COOP/COEP/CORP, wasm (gzip-tolerant), disc HEAD size', async () => {
  const p = await get(`/ps2web.html?room=${ROOM}`, { cookie });
  assert.equal(p.status, 200);
  assert.equal(String(p.body), page);
  assert.equal(p.headers['cross-origin-opener-policy'], 'same-origin');
  assert.equal(p.headers['cross-origin-embedder-policy'], 'require-corp');
  assert.equal(p.headers['cross-origin-resource-policy'], 'same-origin');
  const w = await get('/ps2web.wasm', { cookie, 'accept-encoding': 'gzip' });
  assert.equal(w.status, 200);
  assert.ok((w.headers['content-encoding'] === 'gzip' ? gunzipSync(w.body) : w.body).equals(wasm));
  const h = await get('/disc.iso', { cookie }, 'HEAD');
  assert.equal(h.status, 200);
  assert.equal(Number(h.headers['content-length']), disc.length);
});

await check('disc Range reads through the tunnel: 206 with the exact bytes, never compressed', async () => {
  const n = disc.length;
  for (const [start, end] of [[0, 2047], [1_000_000, 1_065_535], [n - 100, n - 1], [17 * MiB + 5, 18 * MiB + 4]]) {
    const res = await get('/disc.iso', { cookie, range: `bytes=${start}-${end}`, 'accept-encoding': 'gzip, br' });
    assert.equal(res.status, 206, `${start}-${end}`);
    assert.equal(res.headers['content-range'], `bytes ${start}-${end}/${n}`);
    assert.equal(res.headers['content-encoding'], undefined);
    assert.ok(res.body.equals(disc.subarray(start, end + 1)), `${start}-${end} bytes`);
  }
});

await check(`small Range latency: 20 sequential 64 KiB reads`, async () => {
  const ms = [];
  for (let i = 0; i < 20; i++) {
    const start = (i * 7919 * 4096) % (disc.length - 65536), t = performance.now();
    const res = await get('/disc.iso', { cookie, range: `bytes=${start}-${start + 65535}` });
    ms.push(performance.now() - t);
    assert.ok(res.body.equals(disc.subarray(start, start + 65536)));
  }
  ms.sort((a, b) => a - b);
  results.range64k = { p50ms: Math.round(ms[10]), p90ms: Math.round(ms[18]), minMs: Math.round(ms[0]) };
});

await check(`full disc download (${opt['disc-mb']} MiB) through the tunnel: right bytes, throughput`, async () => {
  const hash = createHash('sha256');
  let bytes = 0;
  const t = performance.now();
  const res = await get('/disc.iso', { cookie }, 'GET', (c) => { hash.update(c); bytes += c.length; });
  const s = (performance.now() - t) / 1000;
  assert.equal(res.status, 200);
  assert.equal(bytes, disc.length);
  assert.equal(hash.digest('hex'), discSha);
  results.discDownload = { MiB: disc.length / MiB, seconds: +s.toFixed(2), MBps: +(disc.length / 1e6 / s).toFixed(2), contentEncoding: res.headers['content-encoding'] ?? null };
});

// ---- relay: host on localhost, guest through the tunnel ----
function client(url, options) {
  return new Promise((resolve, reject) => {
    const ws = new WebSocket(url, { maxPayload: MiB, ...options });
    const queue = [], waiters = [];
    ws.on('message', (data, binary) => {
      const msg = binary ? data : JSON.parse(data);
      const waiter = waiters.shift();
      waiter ? waiter(msg) : queue.push(msg);
    });
    ws.next = (ms = 15_000) => queue.length ? Promise.resolve(queue.shift()) : new Promise((res, rej) => {
      const waiter = (msg) => { clearTimeout(timer); res(msg); };
      const timer = setTimeout(() => { waiters.splice(waiters.indexOf(waiter), 1); rej(new Error('no message within ' + ms + ' ms')); }, ms);
      waiters.push(waiter);
    });
    ws.ask = (msg) => { ws.send(JSON.stringify(msg)); return ws.next(); };
    ws.on('open', () => resolve(ws));
    ws.on('unexpected-response', (req, res) => reject(new Error('HTTP ' + res.statusCode)));
    ws.on('error', reject);
  });
}
await check('relay: host (local) and guest (wss through the tunnel) join a room', async () => {
  a = await client(`ws://127.0.0.1:${port}/ws`, { origin: `http://localhost:${port}` });
  const { room } = await a.ask({ type: 'create' });
  assert.equal((await a.ask({ type: 'join', room })).host, true);
  await assert.rejects(client(tunnel.replace('https', 'wss') + '/ws', { lookup, origin: tunnel }), /HTTP 401/);
  b = await client(tunnel.replace('https', 'wss') + '/ws', { lookup, origin: tunnel, headers: { cookie } });
  assert.equal((await b.ask({ type: 'join', room })).host, false);
  assert.equal((await a.next()).type, 'peer-joined');
  b.send(JSON.stringify({ type: 'transport', mode: 'relay' }));
  assert.equal((await a.next()).mode, 'relay');
});
await check('relay round trip: 20 small binary pings guest -> host -> guest', async () => {
  a.on('message', (d, binary) => binary && d[0] === 9 && a.send(d)); // echo
  const ms = [];
  for (let i = 0; i < 20; i++) {
    const t = performance.now();
    b.send(Buffer.from([9, 0, i]));
    const got = await b.next();
    assert.ok(got.equals(Buffer.from([9, 0, i])));
    ms.push(performance.now() - t);
  }
  a.removeAllListeners('message').on('message', () => {});
  ms.sort((x, y) => x - y);
  results.relayRtt = { p50ms: Math.round(ms[10]), p90ms: Math.round(ms[18]), minMs: Math.round(ms[0]) };
});
for (const [name, from, to] of [['guest -> host', () => b, () => a], ['host -> guest', () => a, () => b]]) {
  await check(`relay ${opt['relay-mb']} MiB of 64 KiB messages ${name}: complete, in order, throughput`, async () => {
    const src = from(), dst = to(), COUNT = Number(opt['relay-mb']) * 16, SIZE = 64 * 1024;
    let got = 0, t;
    const done = new Promise((resolve, reject) => {
      dst.removeAllListeners('message').on('message', (d, binary) => {
        if (!binary) return reject(new Error('unexpected ' + d));
        if (d.length !== SIZE || d.readUInt32LE(2) !== got) return reject(new Error(`message ${got}: got #${d.readUInt32LE(2)}, ${d.length} bytes`));
        if (++got === COUNT) resolve();
      });
    });
    t = performance.now();
    for (let i = 0; i < COUNT; i++) {
      const m = randomBytes(SIZE);
      m[0] = 1; m[1] = 0; m.writeUInt32LE(i, 2);
      src.send(m);
    }
    await Promise.race([done, sleep(180_000).then(() => { throw new Error(`only ${got}/${COUNT} after 180 s`); })]);
    const s = (performance.now() - t) / 1000;
    results[`relay ${name}`] = { MiB: COUNT / 16, seconds: +s.toFixed(2), MBps: +(COUNT * SIZE / 1e6 / s).toFixed(2) };
  });
}

// ---- teardown like Ctrl-C ----
async function teardown() {
  a?.terminate(); b?.terminate();
  try { agent.destroy(); } catch {} // not defined yet if the tunnel never came up
  const pids = execFileSync('bash', ['-c', `pgrep -f '[h]ost.mjs --port ${port} ' ; pgrep -f '[c]loudflared tunnel --no-autoupdate --url http://127.0.0.1:${port}$'; for p in $(pgrep -f '[h]ost.mjs --port ${port} '); do pgrep -P $p; done; true`], { encoding: 'utf8' })
    .split('\n').filter(Boolean).map(Number);
  killGroup('SIGINT');
  const code = await Promise.race([hostShExit, sleep(15_000).then(() => 'timeout')]);
  await sleep(300);
  const alive = pids.filter((p) => { try { process.kill(p, 0); return true; } catch { return false; } });
  return { code, pids, alive };
}
await check('Ctrl-C (SIGINT to the process group) stops host.sh, cloudflared, host.mjs and signal.mjs', async () => {
  const { code, pids, alive } = await teardown();
  assert.ok(pids.length >= 3, `found ${pids.length} processes (host.mjs, cloudflared, signal.mjs)`);
  assert.equal(code, 130, 'host.sh exit status');
  assert.deepEqual(alive, [], 'left running');
});

console.log(`\n${passed} checks passed\n${JSON.stringify(results, null, 1)}`);
process.exit(0);
