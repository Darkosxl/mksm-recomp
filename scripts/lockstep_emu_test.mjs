#!/usr/bin/env node
// Two-browser lockstep test of the real emulator (W6.1/6.2): a host on the NVIDIA GPU and a guest on the Intel iGPU,
// both headful inside one private Xvfb display (never the desktop), on the local stack of lockstep_env.mjs
// (signal.mjs + cookie proxy) in front of scripts/serve.py (Range, disc throttle).
//
//   node scripts/lockstep_emu_test.mjs --input koop.args --join-at 3000 --minutes 20 --out logs/x \
//        [--drop 0.2] [--disc-delay 20,80] [--disc-fail 0.02] [--stall 120,4000] [--desync-at MIN,...] \
//        [--rejoin-at MIN] [--host-gpu nvidia|igpu] [--guest-gpu igpu|nvidia] [--vu 0|1] [--shots-every SEC]
//
// --input is an args file in the native --press/--stick format (pad 2 lines drive the guest). The host boots with it
// as --press args (frame-exact before the guest arrives) and both pages apply their own player's lines by lockstep
// frame afterwards. The guest drops in once the host reaches --join-at. Progress goes to stdout and <out>/progress.log.
import { spawn } from 'node:child_process';
import { copyFileSync, mkdirSync, readFileSync, writeFileSync, appendFileSync, unlinkSync } from 'node:fs';
import { createServer } from 'node:net';
import { basename, dirname, join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { startEnv, launchBrowser } from './lockstep_env.mjs';

const ROOT = resolve(dirname(fileURLToPath(import.meta.url)), '..');
const argv = process.argv.slice(2);
const opt = (name, def) => { const i = argv.indexOf('--' + name); return i < 0 ? def : argv[i + 1]; };
const has = (name) => argv.includes('--' + name);
const build = resolve(opt('build', join(ROOT, 'build/web-mksm')));
const disc = resolve(opt('disc', join(ROOT, 'games/mksm/disc.iso')));
const input = resolve(opt('input'));
const out = resolve(opt('out', join(ROOT, 'logs/lockstep-emu')));
const joinAt = Number(opt('join-at', 3000));
const minutes = Number(opt('minutes', 3));
const drop = Number(opt('drop', 0));
const stall = opt('stall', '');
const desyncAt = opt('desync-at', '').split(',').filter(Boolean).map(Number);
const rejoinAt = opt('rejoin-at', '') === '' ? null : Number(opt('rejoin-at'));
const pauseAt = opt('pause-at', '') === '' ? null : Number(opt('pause-at'));
const shotsEvery = Number(opt('shots-every', 60));
const rtc = Number(opt('rtc', 1767225600));
const vu = opt('vu', '1');
const gpus = { host: opt('host-gpu', 'nvidia'), guest: opt('guest-gpu', 'igpu') };
// --host-origin http://localhost:8620: test against a running mksm/host.sh instead of the local stack. The host page
// is on that origin; the guest goes through the invite link (the Cloudflare tunnel) like a real friend.
const hostOrigin = opt('host-origin', '');
// headless (default) still gets the private Xvfb DISPLAY; headful shows real pixels in screenshots but the X11
// present path caps the NVIDIA peer at 40-45 fps (web-build.md)
const modes = { host: opt('host-mode', 'headless'), guest: opt('guest-mode', 'headless') };
mkdirSync(out, { recursive: true });
const progressLog = join(out, 'progress.log');
const t0 = Date.now();
const stamp = () => `[${((Date.now() - t0) / 1000).toFixed(0).padStart(5)} s]`;
const say = (...a) => { const line = `${stamp()} ${a.join(' ')}`; console.log(line); appendFileSync(progressLog, line + '\n'); };
const sleep = (ms) => new Promise((r) => setTimeout(r, ms));
const memMb = () => Number(readFileSync('/proc/meminfo', 'utf8').match(/MemAvailable:\s+(\d+)/)[1]) / 1024;
const freePort = () => new Promise((res) => { const s = createServer().listen(0, '127.0.0.1', () => { const { port } = s.address(); s.close(() => res(port)); }); });

const children = [];
let env, browsers = {}, failures = [], xvfb;
async function cleanup() {
  for (const b of Object.values(browsers)) await b?.close().catch(() => {});
  await env?.close().catch(() => {});
  for (const c of children) try { process.kill(-c.pid, 'SIGKILL'); } catch { try { c.kill('SIGKILL'); } catch {} }
}
process.on('SIGINT', async () => { say('interrupted'); await cleanup(); process.exit(130); });
process.on('SIGTERM', async () => { say('terminated'); await cleanup(); process.exit(143); });

const GPU_FLAGS = ['--enable-unsafe-webgpu', '--enable-features=Vulkan,WebGPU,SharedArrayBuffer', '--use-angle=vulkan', '--ignore-gpu-blocklist',
  '--autoplay-policy=no-user-gesture-required', '--disable-extensions', '--disable-sync', '--use-mock-keychain', '--force-device-scale-factor=1'];
const GPU_ENV = {
  nvidia: { __NV_PRIME_RENDER_OFFLOAD: '1', __VK_LAYER_NV_optimus: 'NVIDIA_only' },
  igpu: process.env.IGPU_HIDE_NVIDIA ? { __VK_LAYER_NV_optimus: 'non_NVIDIA_only' } : {},
};

async function startXvfb() {
  for (let i = 0; i < 9; i++) {
    const n = 90 + Math.floor(Math.random() * 9);
    const p = spawn('Xvfb', [`:${n}`, '-screen', '0', '1600x700x24', '-nolisten', 'tcp'], { stdio: 'ignore', detached: true });
    children.push(p);
    await sleep(1200);
    if (p.exitCode === null) return `:${n}`;
  }
  throw new Error('no free Xvfb display');
}

async function launch(role, gpu, x) {
  if (memMb() < 4000) throw new Error(`only ${memMb().toFixed(0)} MB available; not starting a browser`);
  const b = await launchBrowser(role, {
    display: xvfb, headless: modes[role] === 'headless', flags: [...GPU_FLAGS, `--window-position=${x},0`], env: GPU_ENV[gpu], windowSize: '780,660',
    log: (line) => { appendFileSync(join(out, `${role}.console.log`), line + '\n'); if (/DESYNC|resync|loaded frame|snapshot of|sync frame|error|exception|failed|refused|halted|WARNING|solo/i.test(line)) say(line.slice(0, 300)); },
  });
  browsers[role] = b;
  return b;
}

async function clickStart(b) {
  await b.page.waitFor(`document.getElementById('start') && !document.getElementById('start').disabled`, 120000, 250);
  const gpu = await b.page.evaluate(`(async () => { const out = []; for (const p of ['high-performance', 'low-power']) { const a = await navigator.gpu?.requestAdapter({ powerPreference: p }); out.push(p + ': ' + (a ? [a.info.vendor, a.info.architecture, a.info.description].filter(Boolean).join(' ') : 'none')); } return out.join(', ') + ' | page: ' + (Module.gpuInfo || '') + (Module.presentCopy ? ' (2D copy)' : ''); })()`).catch((e) => 'gpu query failed: ' + e.message);
  say(`[${b.name}] adapters ${gpu}`);
  await b.page.send('Runtime.evaluate', { expression: `document.getElementById('start').click()`, userGesture: true, awaitPromise: true });
}

const snap = (b) => b.page.evaluate(`(() => { const s = window.lsSession; if (!s) return null; const r = s.snapshot();
  r.stats = document.getElementById('stats').textContent; r.status = document.getElementById('status').textContent;
  r.gameFrame = Module._ps2web_frames(); return r; })()`);

async function shot(b, label) {
  try {
    const r = await b.page.send('Page.captureScreenshot', { format: 'png' });
    writeFileSync(join(out, `${b.name}-${label}.png`), Buffer.from(r.data, 'base64'));
  } catch (e) { say('screenshot failed', e.message); }
}

function check(cond, what) { if (!cond) { failures.push(what); say('FAIL:', what); } }

async function main() {
  say(`lockstep emulator test: build ${build}, input ${input}, join at ${joinAt}, ${minutes} min, drop ${drop}, stall '${stall}', desyncs at ${desyncAt}, rejoin at ${rejoinAt}`);
  if (memMb() < 4000) throw new Error(`only ${memMb().toFixed(0)} MB MemAvailable`);
  const files = join(out, 'files');
  mkdirSync(files, { recursive: true });
  copyFileSync(input, join(files, 'session.args'));
  if (hostOrigin) {
    copyFileSync(input, join(build, 'session.args')); // host.mjs serves the build dir; removed by cleanup
    children.push({ kill: () => { try { unlinkSync(join(build, 'session.args')); } catch {} } });
  } else {
    const port = await freePort();
    const serveArgs = [join(ROOT, 'scripts/serve.py'), build, disc, String(port), '--files', files];
    if (opt('disc-delay')) serveArgs.push('--disc-delay', opt('disc-delay'));
    if (opt('disc-fail')) serveArgs.push('--disc-fail', opt('disc-fail'));
    const serve = spawn('python3', ['-I', ...serveArgs], { stdio: ['ignore', 'pipe', 'pipe'], detached: true });
    children.push(serve);
    await sleep(800);
    env = await startEnv({ webRoot: build, upstream: `http://127.0.0.1:${port}` });
  }
  const origin = hostOrigin || env.origin;
  xvfb = await startXvfb();
  say(`stack: ${origin}${env ? ` (signal ${env.signalOrigin})` : ' (mksm/host.sh)'}, Xvfb ${xvfb}`);

  const presses = readFileSync(input, 'utf8').split('\n').map((l) => l.trim().match(/^--(press|stick)(2?)\s+(\S+)$/)).filter(Boolean);
  // only the frames the host can play before the guest arrives matter (the ring drives both pads afterwards)
  const pressArgs = presses.filter((m) => m[1] === 'press' && Number(m[3].split(':')[0]) < joinAt + 6000)
    .map((m) => (m[2] ? m[3].replace(/^(\d+):/, '$1:p2:') : m[3]));
  // the host's pre-session frames: --press only (a stick before the session would need --stick, not supported by the page)
  const common = `lsinput=session.args&lsrtc=${rtc}&lsvu=${vu}` + (drop ? `&lsdrop=${drop}` : '') + (stall ? `&lsstall=${stall}` : '');
  const hostUrl = `${origin}/ps2web.html?room=new&${common}${gpus.host === 'igpu' ? '&gpu=low' : ''}&press=${encodeURIComponent(pressArgs.join(','))}`;

  const host = await launch('host', gpus.host, 0);
  await host.page.navigate(hostUrl, 60000);
  await clickStart(host);
  const room = await host.page.waitFor(`window.lsSession && window.lsSession.ls && window.lsSession.ls.joinedMsg && new URL(location.href).searchParams.get('room')`, 60000);
  say(`host started, room ${room}`);
  await host.page.waitFor(`Module._ps2web_frames() >= ${joinAt}`, 30 * 60000, 1000);
  await shot(host, `f${joinAt}-before-join`);

  // host mode: each guest first opens a fresh single-use invite (sets the cookie on the tunnel origin)
  const invite = async () => hostOrigin ? (await (await fetch(`${hostOrigin}/host-info?new=1&room=${room}`)).json()) : null;
  let guestOrigin = hostOrigin ? new URL((await invite()).tunnelUrl).origin : origin;
  const guestUrl = (extra = '') => `${guestOrigin}/ps2web.html?room=${room}&${common}${gpus.guest === 'igpu' ? '&gpu=low' : ''}${extra}`;
  const startGuest = async () => {
    const guest = await launch('guest', gpus.guest, 800);
    if (hostOrigin) {
      const info = await invite();
      say(`guest opens invite ${info.inviteUrl.replace(/t=[^&]+/, 't=…')}`);
      await guest.page.navigate(info.inviteUrl, 60000);
    }
    await guest.page.navigate(guestUrl(), 60000);
    // a remote page installs the disc cache worker and reloads once before it can start
    if (hostOrigin) for (let t = Date.now(); Date.now() - t < 60000; await sleep(500))
      if (await guest.page.evaluate('!!(navigator.serviceWorker && navigator.serviceWorker.controller) && document.readyState === "complete"').catch(() => false)) break;
    await clickStart(guest);
    const t = Date.now();
    await guest.page.waitFor(`window.lsSession && window.lsSession.ls && window.lsSession.ls.running`, 10 * 60000, 250);
    const g = await snap(guest), h = await snap(host);
    const tr = h.transfers[h.transfers.length - 1] || {};
    say(`guest joined in ${((Date.now() - t) / 1000).toFixed(1)} s at frame ${g.ls.emuFrame}: state ${(tr.bytes / 1048576).toFixed(1)} MB -> ${(tr.zbytes / 1048576).toFixed(1)} MB gzip, snapshot ${tr.snapMs?.toFixed(0)} ms, send ${tr.sendMs?.toFixed(0)} ms, host load ${tr.loadMs?.toFixed(0)} ms, total ${tr.totalMs?.toFixed(0)} ms, D=${h.ls.D}, rtt p50 ${h.ls.rttP50?.toFixed(1)} ms`);
    return guest;
  };
  let guest = await startGuest();

  const end = Date.now() + minutes * 60000;
  const desyncs = [...desyncAt];
  let paused = false, rejoined = rejoinAt === null, lastShot = 0, last = null, expectedDesyncs = 0;
  const samples = [];
  let lastKey = '';
  while (Date.now() < end) {
    await sleep(5000);
    const elapsedMin = (Date.now() - (end - minutes * 60000)) / 60000;
    let h, g;
    try { [h, g] = await Promise.all([snap(host), snap(guest)]); } catch (e) { say('sample failed:', e.message); continue; }
    const fps = (s) => (s.stats.match(/([\d.]+) fps/) || [])[1];
    const line = `host f${h.ls.emuFrame} (game ${h.gameFrame}) ${fps(h)} fps | guest f${g.ls.emuFrame} ${fps(g)} fps | D ${h.ls.D} rtt ${h.ls.rttP50?.toFixed(1)} | ` +
      `hashes ${h.total.hashesOk}/${g.ls.hashesOk} desyncs ${h.total.desyncs}/${g.ls.desyncs} resyncs ${h.resyncs} | stalls ${h.emu.stallFrames}/${g.emu.stallFrames} ` +
      `(${h.emu.stallMs}/${g.emu.stallMs} ms) | drop ${h.ls.dropped}/${g.ls.dropped} | ${h.ls.status}/${g.ls.status}`;
    // every sample goes to progress.log; stdout gets one a minute, plus any change in desyncs/resyncs
    const key = `${h.total.desyncs}/${g.ls.desyncs}/${h.resyncs}/${h.ls.status}/${g.ls.status}`;
    if (samples.length % 12 === 0 || key !== lastKey) say(line); else appendFileSync(progressLog, `${stamp()} ${line}\n`);
    lastKey = key;
    samples.push({ t: Date.now() - t0, host: { ...h, transfers: undefined }, guest: { ...g, transfers: undefined } });
    appendFileSync(join(out, 'samples.jsonl'), JSON.stringify(samples[samples.length - 1]) + '\n');
    last = { h, g };
    if (Date.now() - lastShot > shotsEvery * 1000) {
      lastShot = Date.now();
      await Promise.all([shot(host, `f${h.ls.emuFrame}`), shot(guest, `f${g.ls.emuFrame}`)]);
    }
    if (desyncs.length && elapsedMin >= desyncs[0]) {
      desyncs.shift();
      expectedDesyncs++;
      // flip a byte of EE RAM on the guest only: the next hash window must differ, and the host must resync
      await guest.page.evaluate(`Module._ps2web_debug_corrupt(0x01F00000 + ${Math.floor(Math.random() * 0x10000)})`);
      say('forced a desync on the guest (EE RAM byte flipped)');
    }
    if (pauseAt !== null && !paused && elapsedMin >= pauseAt) {
      paused = true;
      // the guest pauses (an input flag): both must stop the game on the same frame for 5 s and resume together
      const before = await Promise.all([snap(host), snap(guest)]);
      await guest.page.evaluate('window.lsSession.ls.setPaused(true)');
      await sleep(5000);
      const during = await Promise.all([snap(host), snap(guest)]);
      await guest.page.evaluate('window.lsSession.ls.setPaused(false)');
      await sleep(3000);
      const after = await Promise.all([snap(host), snap(guest)]);
      const d = (a, b, k) => b[k] - a[k];
      say(`pause: lockstep frames +${d(before[0], during[0], 'gameFrame') === 0 ? '' : '!'}${during[0].ls.emuFrame - before[0].ls.emuFrame} while game frames +${d(before[0], during[0], 'gameFrame')}/+${d(before[1], during[1], 'gameFrame')} (host/guest); paused frames ${during[0].emu.pausedFrames}/${during[1].emu.pausedFrames}; after resume game frames +${d(during[0], after[0], 'gameFrame')}/+${d(during[1], after[1], 'gameFrame')}`);
      check(during[0].emu.pausedFrames === during[1].emu.pausedFrames || Math.abs(during[0].emu.pausedFrames - during[1].emu.pausedFrames) < 10, 'both peers consumed the paused frames');
      check(after[0].gameFrame > during[0].gameFrame, 'the game resumed after the pause');
    }
    if (!rejoined && elapsedMin >= rejoinAt) {
      rejoined = true;
      say('closing the guest for a mid-game drop-in');
      await guest.close();
      delete browsers.guest;
      await host.page.waitFor(`window.lsSession && window.lsSession.ls && !window.lsSession.ls.running && window.lsSession.ls.joinedMsg`, 60000, 500);
      say('host is waiting for a new guest');
      guest = await startGuest();
    }
  }
  const [h, g] = await Promise.all([snap(host), snap(guest)]);
  await Promise.all([shot(host, `final-f${h.ls.emuFrame}`), shot(guest, `final-f${g.ls.emuFrame}`)]);
  writeFileSync(join(out, 'final.json'), JSON.stringify({ host: h, guest: g }, null, 2));
  const desyncTotal = Math.max(h.total.desyncs, g.ls.desyncs);
  say(`final: host frame ${h.ls.emuFrame} (game ${h.gameFrame}), guest ${g.ls.emuFrame}; hashes ok ${h.total.hashesOk} over ${h.total.sessions} session(s) (this guest ${g.ls.hashesOk}); desyncs ${h.total.desyncs}/${g.ls.desyncs} (forced ${expectedDesyncs}); resyncs ${h.resyncs}; stalls ${h.emu.stallFrames}/${g.emu.stallFrames} frames, ${h.emu.stallMs}/${g.emu.stallMs} ms; paused ${h.emu.pausedFrames}`);
  say('transfers: ' + JSON.stringify(h.transfers));
  check(h.ls.hashesOk > 0 && g.ls.hashesOk > 0, 'hashes were compared on both sides');
  check(desyncTotal <= expectedDesyncs, `no desync beyond the ${expectedDesyncs} forced ones (got ${desyncTotal})`);
  check(h.resyncs >= expectedDesyncs, `every forced desync was resynchronised (${h.resyncs} resyncs)`);
  check(h.ls.status === 'running' && g.ls.status === 'running', 'the session is still running');
  say(failures.length ? `FAILED: ${failures.join('; ')}` : 'PASS');
}

main().catch((e) => { failures.push(e.message); say('ERROR', e.stack || e.message); }).finally(async () => {
  await cleanup();
  process.exit(failures.length ? 1 : 0);
});
