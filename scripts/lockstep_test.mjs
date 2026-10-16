#!/usr/bin/env node
// End-to-end test of web/lockstep.js with the mock emulator (web/lockstep-mock.html) in two separate headless
// Chromium instances, through a local signal.mjs. Prints one progress line every 10 s and a JSON summary.
//
//   node scripts/lockstep_test.mjs [--main 300] [--loss 60] [--lag 30] [--only main,loss,...]
//
// Scenarios: refuse (handshake mismatch), main (clean run), desync (detection), loss (20% "in" drop),
// lag (40 ms per send, resync and reconnect), pause, snapshot (40 MB gzip blob on ctl), disconnect.
import { dirname, join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { startEnv, launchBrowser } from './lockstep_env.mjs';

const args = process.argv.slice(2);
const opt = (name, def) => { const i = args.indexOf(name); return i < 0 ? def : args[i + 1]; };
const MAIN_S = Number(opt('--main', 300)), LOSS_S = Number(opt('--loss', 60)), LAG_S = Number(opt('--lag', 30));
const only = opt('--only', '') ? new Set(opt('--only').split(',')) : null;
const want = (name) => !only || only.has(name);
const repo = join(dirname(fileURLToPath(import.meta.url)), '..');
const sleep = (ms) => new Promise((r) => setTimeout(r, ms));
const results = {};
let failures = 0;
const check = (name, ok, detail = '') => {
  console.log(`${ok ? 'ok  ' : 'FAIL'} ${name}${detail ? ' — ' + detail : ''}`);
  if (!ok) failures++;
};

let env, A, B;
const cleanup = async () => {
  for (const b of [A, B]) await b?.close().catch(() => {});
  await env?.close().catch(() => {});
};
process.on('SIGINT', async () => { await cleanup(); process.exit(130); });

const quietLog = (line) => { if (/DESYNC|error|refused|solo|disconnect|reconnect|resync|D=|rtt/i.test(line)) console.log(line); };

try {
  env = await startEnv({ webRoot: join(repo, 'web') });
  A = await launchBrowser('A', { log: quietLog });
  B = await launchBrowser('B', { log: quietLog });
  const url = (params) => `${env.origin}/lockstep-mock.html?${new URLSearchParams(params)}`;

  // Opens A as host (creates the room) and B as guest; resolves when both are running or failed.
  async function pair(pa = {}, pb = {}) {
    await A.page.navigate(url({ create: 1, seed: 1, ...pa }));
    const room = await A.page.waitFor('window.T && (T.room || T.error)', 10000);
    await B.page.navigate(url({ room, seed: 1, ...pb }));
    const [ea, eb] = await Promise.all([A.page.waitFor('T.ready || T.error', 30000), B.page.waitFor('T.ready || T.error', 30000)]);
    if (ea === true && eb === true) await Promise.all([A.page.waitFor('T.emu.frames > 0'), B.page.waitFor('T.emu.frames > 0')]);
    return { room, a: ea === true ? null : ea, b: eb === true ? null : eb };
  }
  const state = (p) => p.evaluate('({ ls: T.ls.snapshot(), emu: { ...T.emu, hashes: undefined, pauses: T.emu.pauses }, events: T.events.map((e) => ({ ev: e.ev, t: e.t, frame: e.frame })) })');
  const hashes = (p) => p.evaluate('T.hashes');
  const compareHashes = async () => {
    const [ha, hb] = await Promise.all([hashes(A.page), hashes(B.page)]);
    const common = Object.keys(ha).filter((f) => f in hb);
    const bad = common.filter((f) => ha[f] !== hb[f]);
    return { common: common.length, mismatches: bad.length, firstBad: bad[0] ?? null };
  };
  // Runs for `seconds`, printing progress every 10 s; returns per-side deltas over the window.
  async function run(name, seconds) {
    const s0 = await Promise.all([state(A.page), state(B.page)]);
    const t0 = Date.now();
    while (Date.now() - t0 < seconds * 1000) {
      await sleep(Math.min(10000, seconds * 1000 - (Date.now() - t0)));
      const [a, b] = await Promise.all([state(A.page), state(B.page)]);
      console.log(`[${name}] ${Math.round((Date.now() - t0) / 1000)}/${seconds} s  frame ${a.emu.frame}/${b.emu.frame}  fps ${a.emu.fps}/${b.emu.fps}  ` +
        `stalls ${a.emu.stalls - s0[0].emu.stalls}/${b.emu.stalls - s0[1].emu.stalls}  D ${a.ls.D}/${b.ls.D}  hashesOk ${a.ls.hashesOk}/${b.ls.hashesOk}  desyncs ${a.ls.desyncs}/${b.ls.desyncs}  ` +
        `slow ${a.ls.slowMs}/${b.ls.slowMs} adv ${a.ls.adv.toFixed(2)}/${b.ls.adv.toFixed(2)}`);
    }
    const s1 = await Promise.all([state(A.page), state(B.page)]);
    const side = (x0, x1) => {
      const frames = x1.emu.frames - x0.emu.frames, secs = (x1.emu.elapsed - x0.emu.elapsed) / 1000;
      return {
        frames, fps: +(frames / secs).toFixed(2), stalls: x1.emu.stalls - x0.emu.stalls,
        stallRate: +((x1.emu.stalls - x0.emu.stalls) / frames * 100).toFixed(3), stallMs: +(x1.emu.stallMs - x0.emu.stallMs).toFixed(1),
        stallMsPerMin: +((x1.emu.stallMs - x0.emu.stallMs) / secs * 60).toFixed(1), maxStallMs: +x1.emu.maxStallMs.toFixed(1),
        slowFrames: x1.emu.slowFrames - x0.emu.slowFrames, D: x1.ls.D, rttStart: x1.ls.rttStart, rttP50: x1.ls.rttP50 && +x1.ls.rttP50.toFixed(2),
        hashesOk: x1.ls.hashesOk - x0.ls.hashesOk, desyncs: x1.ls.desyncs, sent: x1.ls.sent - x0.ls.sent, recv: x1.ls.recv - x0.ls.recv,
        dropped: x1.ls.dropped - x0.ls.dropped, needSends: x1.ls.needSends - x0.ls.needSends, keepalives: x1.ls.keepalives - x0.ls.keepalives,
        maxGapMs: +x1.ls.maxGapMs.toFixed(1),
      };
    };
    return { seconds, A: side(s0[0], s1[0]), B: side(s0[1], s1[1]), hashes: await compareHashes() };
  }
  const assertClean = (name, r, maxStallRate) => {
    check(`${name}: identical hashes every 32 frames`, r.hashes.common > 0 && r.hashes.mismatches === 0, `${r.hashes.common} compared, ${r.hashes.mismatches} mismatched`);
    check(`${name}: zero desyncs reported`, r.A.desyncs === 0 && r.B.desyncs === 0 && r.A.hashesOk > 0, `ok ${r.A.hashesOk}/${r.B.hashesOk}`);
    check(`${name}: fps ~60`, r.A.fps > 57 && r.B.fps > 57, `${r.A.fps}/${r.B.fps}`);
    if (maxStallRate !== undefined) check(`${name}: stall rate < ${maxStallRate}%`, r.A.stallRate < maxStallRate && r.B.stallRate < maxStallRate, `${r.A.stallRate}%/${r.B.stallRate}%`);
  };

  if (want('refuse')) {
    const p = await pair({}, { disc: 'other-disc' });
    results.refuse = p;
    check('refuse: disc mismatch refused on both sides', /refused: disc/.test(p.a || '') && /refused: disc/.test(p.b || ''), `${p.a} | ${p.b}`);
  }

  if (want('main') || want('desync')) {
    const p = await pair();
    check('main: connected', !p.a && !p.b, `${p.a || ''} ${p.b || ''}`);
    const r = (results.main = await run('main', MAIN_S));
    assertClean('main', r, 1);
    check('main: D measured on both', r.A.D >= 2 && r.A.D === r.B.D, `D=${r.A.D}, host rtt p50 ${r.A.rttStart?.p50?.toFixed(2)} p95 ${r.A.rttStart?.p95?.toFixed(2)} ms`);
    if (want('desync')) {
      await A.page.evaluate('T.corrupt()');
      const da = await A.page.waitFor('T.events.find((e) => e.ev === "desync")?.d', 5000).catch(() => null);
      const db = await B.page.waitFor('T.events.find((e) => e.ev === "desync")?.d', 5000).catch(() => null);
      results.desync = { A: da, B: db };
      check('desync: corrupting one side fires onDesync on both', !!da && !!db && da.frame === db.frame, da ? `frame ${da.frame}, last good ${da.lastGood}` : 'no event');
    }
  }

  if (want('loss')) {
    const p = await pair({ drop: 0.2 }, { drop: 0.2 });
    check('loss: connected', !p.a && !p.b);
    const r = (results.loss = await run('loss', LOSS_S));
    assertClean('loss', r, 5);
    check('loss: ~20% of "in" packets dropped', r.A.dropped / r.A.sent > 0.15 && r.A.dropped / r.A.sent < 0.25, `${(r.A.dropped / r.A.sent * 100).toFixed(1)}% of ${r.A.sent}`);
  }

  if (want('lag')) {
    // 3a: start clean, add 40 ms to every send on both sides, resync -> D re-measured.
    const p = await pair();
    check('lag: connected', !p.a && !p.b);
    const before = await run('lag-before', 10);
    await Promise.all([A.page.evaluate('T.ls.test.delayMs = 40'), B.page.evaluate('T.ls.test.delayMs = 40')]);
    const during = await run('lag-D-unchanged', 5);
    const rs = await A.page.evaluate('T.ls.resync().then((r) => ({ D: r.D, p50: r.rtt.p50, p95: r.rtt.p95 }))');
    await B.page.waitFor(`T.ls.D === ${rs.D}`, 5000);
    const after = await run('lag-after-resync', LAG_S);
    results.lag = { D0: before.A.D, resync: rs, before, during, after };
    check('lag: resync raises D (40 ms each way)', rs.D > before.A.D && after.B.D === rs.D, `D ${before.A.D} -> ${rs.D} (rtt p50 ${rs.p50.toFixed(1)} p95 ${rs.p95.toFixed(1)} ms)`);
    assertClean('lag after resync', after, 2);
    // 3b: reconnect with the lag already on: D comes from the handshake.
    const p2 = await pair({ lag: 40 }, { lag: 40 });
    check('lag reconnect: connected', !p2.a && !p2.b);
    const re = await run('lag-reconnect', 15);
    results.lagReconnect = re;
    const expect = Math.min(8, Math.max(2, Math.ceil((re.A.rttStart.p95 / 2 + 8) / 16.68) + 1));
    check('lag reconnect: handshake measures D for the lag', re.A.D >= 4 && re.A.D === expect && re.B.D === re.A.D, `D=${re.A.D}, rtt p95 ${re.A.rttStart?.p95?.toFixed(1)} ms`);
    assertClean('lag reconnect', re, 2);
  }

  if (want('pause') || want('snapshot') || want('disconnect')) {
    const p = await pair();
    check('session: connected', !p.a && !p.b);
    await run('warmup', 5);
  }

  if (want('pause')) {
    const pauseOnce = async (who, how, label) => {
      const P = who === 'A' ? A.page : B.page;
      await P.evaluate(how(true));
      await Promise.all([A.page.waitFor('T.emu.paused', 3000), B.page.waitFor('T.emu.paused', 3000)]);
      await sleep(1500);
      const [a1, b1] = await Promise.all([state(A.page), state(B.page)]);
      await sleep(1000);
      const [a2, b2] = await Promise.all([state(A.page), state(B.page)]);
      await P.evaluate(how(false));
      await Promise.all([A.page.waitFor('!T.emu.paused', 3000), B.page.waitFor('!T.emu.paused', 3000)]);
      await sleep(1000);
      const [a3, b3] = await Promise.all([state(A.page), state(B.page)]);
      const pa = a3.emu.pauses.at(-1), pb = b3.emu.pauses.at(-1);
      const r = { pauseA: pa, pauseB: pb, frozenGame: [a1.emu.game, b1.emu.game], lockstepTicking: [a2.emu.frame - a1.emu.frame, b2.emu.frame - b1.emu.frame] };
      check(`pause (${label}): both stop on the same frame and game state`, pa.start === pb.start && pa.game === pb.game && a1.emu.game === b1.emu.game && a2.emu.game === a1.emu.game && b2.emu.game === b1.emu.game,
        `start ${pa.start}/${pb.start}, game frame ${a1.emu.game}/${b1.emu.game}`);
      check(`pause (${label}): both resume on the same frame`, pa.end === pb.end && pa.end > pa.start, `end ${pa.end}/${pb.end} (${pa.end - pa.start} frames paused)`);
      return r;
    };
    results.pause = {
      manualA: await pauseOnce('A', (on) => `T.ls.setPaused(${on})`, 'host, setPaused'),
      hiddenB: await pauseOnce('B', (on) => `T.fakeHidden(${on})`, 'guest, visibilitychange'),
    };
    const h = await compareHashes();
    const [a, b] = await Promise.all([state(A.page), state(B.page)]);
    check('pause: hashes still identical afterwards', h.mismatches === 0 && a.ls.desyncs === 0 && b.ls.desyncs === 0, `${h.common} compared`);
  }

  if (want('snapshot')) {
    const SIZE = 40 * 1024 * 1024;
    const [sa, sb] = await Promise.all([state(A.page), state(B.page)]);
    await B.page.evaluate(`(T.blobRecv = null, T.ls.recvBlob().then(async (b) => {
      const sha = [...new Uint8Array(await crypto.subtle.digest('SHA-256', b.bytes))].map((x) => x.toString(16).padStart(2, '0')).join('');
      T.blobRecv = { size: b.bytes.byteLength, zsize: b.zsize, ms: b.ms, sha, at: performance.now() };
    }), true)`);
    const sent = await A.page.evaluate(`(async () => {
      const bytes = new Uint8Array(${SIZE});
      for (let o = 0; o < bytes.length; o += 65536) crypto.getRandomValues(bytes.subarray(o, o + 65536));
      const sha = [...new Uint8Array(await crypto.subtle.digest('SHA-256', bytes))].map((x) => x.toString(16).padStart(2, '0')).join('');
      T.blobBytes = bytes;
      return sha;
    })()`);
    const t0 = Date.now();
    const sendRes = await A.page.evaluate('T.ls.sendBlob(T.blobBytes, { kind: "test" }).then((r) => (T.blobBytes = null, r))');
    const recv = await B.page.waitFor('T.blobRecv', 120000, 20);
    const totalMs = Date.now() - t0;
    const [sa2, sb2] = await Promise.all([state(A.page), state(B.page)]);
    results.snapshot = { size: SIZE, sha: sent, send: sendRes, recv, totalMs, MBps: +(SIZE / 1048576 / (totalMs / 1000)).toFixed(1),
      stallsDuring: [sa2.emu.stalls - sa.emu.stalls, sb2.emu.stalls - sb.emu.stalls], stallMsDuring: [+(sa2.emu.stallMs - sa.emu.stallMs).toFixed(1), +(sb2.emu.stallMs - sb.emu.stallMs).toFixed(1)] };
    check('snapshot: 40 MB intact through gzip + ctl (sha256)', recv.sha === sent && recv.size === SIZE, `${totalMs} ms end to end, ${results.snapshot.MBps} MB/s, gzip ${sendRes.zsize} B, stalls during ${results.snapshot.stallsDuring}`);
  }

  if (want('disconnect')) {
    const t0 = Date.now();
    await B.page.navigate('about:blank'); // the guest's page goes away: its peer connection closes
    const fa = await A.page.evaluate('T.emu.frame');
    await A.page.waitFor('T.ls.overlayVisible', 8000, 20);
    const overlayMs = Date.now() - t0;
    const frozen = await A.page.evaluate('T.emu.frame');
    await A.page.waitFor('T.ls.solo', 20000, 20);
    const soloMs = Date.now() - t0;
    const f1 = await A.page.evaluate('T.emu.frame');
    await sleep(2000);
    const [f2, active] = await A.page.evaluate('[T.emu.frame, T.emu.active]');
    results.disconnect = { overlayMs, soloMs, frameAtLeave: fa, frameAtOverlay: frozen, framesIn2sSolo: f2 - f1, active };
    check('disconnect: overlay after ~3 s', overlayMs >= 2800 && overlayMs < 4500, `${overlayMs} ms`);
    check('disconnect: solo after ~15 s, emulator runs free (active=0)', soloMs >= 14800 && soloMs < 16500 && f2 - f1 > 100 && active === 0, `${soloMs} ms, ${f2 - f1} frames in 2 s`);
  }
} catch (e) {
  failures++;
  console.log('FAIL', e.stack);
  for (const b of [A, B]) if (b) console.log(`--- ${b.name} last logs:\n${b.page.logs.slice(-30).join('\n')}`);
} finally {
  console.log('RESULTS ' + JSON.stringify(results, null, 1));
  console.log(failures ? `${failures} FAILED` : 'ALL PASSED');
  await cleanup();
  process.exit(failures ? 1 : 0);
}
