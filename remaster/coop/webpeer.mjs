#!/usr/bin/env node
// Browser <-> desktop lockstep test (mksm/notes/native-lockstep.md): the real web build (build/web-mksm) in headless
// Chromium against a native ps2run, on a throwaway local signal.mjs behind the same-origin proxy of
// scripts/lockstep_env.mjs. Both sides write PS2_HASH_LOG (+ PS2_HASH_SPLIT) every frame; after the drop-in the logs
// are compared frame by frame, and the first differing frame is printed with the state sections that differ.
//
//   node remaster/coop/webpeer.mjs --out DIR --state koop.state [--frames 400] [--relay] [--browser-host]
//        [--web-params 'lsvu=0'] [--native-env 'PS2_THREADS=1'] [--no-gpu] [--web build/web-mksm] [--ps2run …]
//   node remaster/coop/webpeer.mjs --solo --out DIR --state koop.state [--frames 400] [--web-params 'PS2_VU_JIT=all']
//
// Default: the native ps2run hosts (loads --state, plays alone) and the browser drops in as P2. --browser-host swaps
// the roles (the page loads the state with ?state=). --relay forces the WebSocket relay (PS2_LOCKSTEP_RELAY=1 on the
// native side; the page follows). --solo: no session; the page (?state=, ?press=, no memory card) and ps2run
// (--load-state, --press) each play the same script alone from the state, e.g. to compare the browser's VU1 JIT
// (PS2_VU_JIT=all, which lockstep mode does not allow) with the desktop's compiled VU1 code. Local only: the page gets its ICE servers from the local /turn, Chromium resolves
// no host name but 127.0.0.1, the native side runs with PS2_LOCKSTEP_STUN=none.
// Chromium runs headless with a private Xvfb DISPLAY (the NVIDIA PRIME Vulkan driver needs one for WebGPU), in a
// MemoryMax=3G scope; so does ps2run. The browser uses the GPU: run this under logs/heavy.lock. --no-gpu: Chromium
// without a GPU (--disable-gpu, no WebGPU), so the page renders with the CPU GS (PS2_GS=soft) and presents a 2D copy.
import { spawn } from 'node:child_process';
import { copyFileSync, mkdirSync, readFileSync, writeFileSync, appendFileSync, existsSync, chmodSync, openSync } from 'node:fs';
import { createServer } from 'node:net';
import { dirname, join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';

const ROOT = resolve(dirname(fileURLToPath(import.meta.url)), '../..');
const argv = process.argv.slice(2);
const opt = (name, def) => { const i = argv.indexOf('--' + name); return i < 0 ? def : argv[i + 1]; };
const has = (name) => argv.includes('--' + name);
const out = resolve(opt('out', join(ROOT, 'logs/webpeer')));
const web = resolve(opt('web', join(ROOT, 'build/web-mksm')));
const bin = resolve(opt('ps2run', join(ROOT, 'build/native-mksm/ps2run')));
const state = resolve(opt('state'));
const frames = Number(opt('frames', 400));
const relay = has('relay');
const browserHost = has('browser-host');
const webParams = opt('web-params', '');
const nativeEnv = Object.fromEntries(opt('native-env', '').split(/\s+/).filter(Boolean).map((kv) => [kv.slice(0, kv.indexOf('=')), kv.slice(kv.indexOf('=') + 1)]));
const minutes = Number(opt('minutes', 20));
const noGpu = has('no-gpu');
const solo = has('solo');
const G = join(ROOT, 'games/mksm');
const RTC = 1792000000;

mkdirSync(out, { recursive: true });
const t0 = Date.now();
const say = (...a) => { const line = `[${((Date.now() - t0) / 1000).toFixed(0).padStart(4)} s] ${a.join(' ')}`; console.log(line); appendFileSync(join(out, 'progress.log'), line + '\n'); };
const sleep = (ms) => new Promise((r) => setTimeout(r, ms));
const memMb = () => Number(readFileSync('/proc/meminfo', 'utf8').match(/MemAvailable:\s+(\d+)/)[1]) / 1024;
const freePort = () => new Promise((res) => { const s = createServer().listen(0, '127.0.0.1', () => { const { port } = s.address(); s.close(() => res(port)); }); });

// Chromium in a MemoryMax=3G scope: lockstep_env.mjs starts process.env.CHROMIUM (read when it is imported)
const wrapper = join(out, 'chromium-scope.sh');
writeFileSync(wrapper, `#!/bin/sh\nexec systemd-run --user --scope -q -p MemoryMax=3G -p MemorySwapMax=0 -- ${process.env.CHROMIUM || '/home/darkwarro/.local/bin/chromium'} "$@"\n`);
chmodSync(wrapper, 0o755);
process.env.CHROMIUM = wrapper;
const { startEnv, launchBrowser } = await import(join(ROOT, 'scripts/lockstep_env.mjs'));

const GPU_FLAGS = ['--enable-unsafe-webgpu', '--enable-features=Vulkan,WebGPU,SharedArrayBuffer', '--use-angle=vulkan', '--ignore-gpu-blocklist',
  '--autoplay-policy=no-user-gesture-required', '--disable-extensions', '--disable-sync', '--use-mock-keychain', '--force-device-scale-factor=1'];
// nothing leaves the machine: no host name resolves but 127.0.0.1 (public STUN, updates, safe browsing), no
// background networking
const LOCAL_FLAGS = ['--host-resolver-rules=MAP * ~NOTFOUND , EXCLUDE 127.0.0.1', '--disable-background-networking', '--disable-component-update',
  '--disable-domain-reliability', '--no-pings', '--disable-client-side-phishing-detection'];
const PRIME = { __NV_PRIME_RENDER_OFFLOAD: '1', __VK_LAYER_NV_optimus: 'NVIDIA_only' };

const children = [];
let env, browser, native, nativeExit = null;
async function cleanup() {
  await browser?.close().catch(() => {});
  if (native && nativeExit === null) { try { native.kill('SIGTERM'); } catch {} await sleep(1500); try { native.kill('SIGKILL'); } catch {} }
  await env?.close().catch(() => {});
  for (const c of children) try { process.kill(-c.pid, 'SIGKILL'); } catch { try { c.kill('SIGKILL'); } catch {} }
}
process.on('SIGINT', async () => { say('interrupted'); await cleanup(); process.exit(130); });
process.on('SIGTERM', async () => { say('terminated'); await cleanup(); process.exit(143); });

async function startXvfb() {
  for (let i = 0; i < 9; i++) {
    const n = 70 + Math.floor(Math.random() * 19);
    const p = spawn('Xvfb', [`:${n}`, '-screen', '0', '1024x768x24', '-nolisten', 'tcp'], { stdio: 'ignore', detached: true });
    children.push(p);
    await sleep(1200);
    if (p.exitCode === null) return `:${n}`;
  }
  throw new Error('no free Xvfb display');
}

function startNative(join_, cap = 100000) { // lockstep: the run ends when both hash logs have enough frames after the drop-in
  const dir = join(out, 'native');
  mkdirSync(dir, { recursive: true });
  const args = readFileSync(join(out, 'files/session.args'), 'utf8').split('\n').filter(Boolean).flatMap((l) => l.split(/\s+/));
  const log = openSync(join(dir, 'run.log'), 'w');
  const e = { ...process.env, SDL_AUDIODRIVER: 'dummy', ...PRIME, PS2_GS: 'soft', PS2_RTC: String(RTC), PS2_LOCKSTEP_STUN: 'none',
    PS2_HASH_LOG: join(dir, 'hash.log'), PS2_HASH_SPLIT: '1', PS2_LOCKSTEP_COOKIE_FILE: join(dir, 'cookies'), ...(relay ? { PS2_LOCKSTEP_RELAY: '1' } : {}), ...nativeEnv };
  for (const k of Object.keys(e)) if (k.startsWith('PS2_') && !(k in nativeEnv) && !['PS2_GS', 'PS2_RTC', 'PS2_LOCKSTEP_STUN', 'PS2_HASH_LOG', 'PS2_HASH_SPLIT', 'PS2_LOCKSTEP_COOKIE_FILE', 'PS2_LOCKSTEP_RELAY'].includes(k)) delete e[k];
  const p = spawn('systemd-run', ['--user', '--scope', '-q', '-p', 'MemoryMax=3G', '-p', 'MemorySwapMax=0', '--', 'timeout', String(minutes * 60 + 120), bin,
    join(G, 'disc/SLUS_210.87'), '--disc', join(G, 'disc.iso'), '--frames', String(cap), ...args, ...(solo ? [] : ['--memcard', join(dir, 'card.ps2')]), ...join_],
  { env: e, stdio: ['ignore', log, log] });
  p.on('exit', (code, sig) => { nativeExit = code ?? sig; say(`native exited: ${code ?? sig}`); });
  return p;
}
const nativeLog = () => { try { return readFileSync(join(out, 'native/run.log'), 'utf8'); } catch { return ''; } };
const parseLog = (text) => new Map(text.split('\n').filter(Boolean).map((l) => { const [f, h, ...parts] = l.split(' '); return [Number(f), { h, parts }]; }));

async function main() {
  if (memMb() < 2560 + 1024) throw new Error(`only ${memMb().toFixed(0)} MB MemAvailable`);
  if (solo) return soloRun();
  say(`browser <-> native: ${browserHost ? 'browser hosts' : 'native hosts'}, ${relay ? 'relay forced' : 'WebRTC'}, ${frames} frames, web ${web}, ps2run ${bin}`);
  const files = join(out, 'files');
  mkdirSync(files, { recursive: true });
  // the same script for both: p1 lines drive the host's pad, p2 lines (another seed) the guest's
  const gen = (seed) => new Promise((res, rej) => { const p = spawn('python3', ['-I', join(ROOT, 'mksm/tools/scripts/gen_mash.py'), '10', String(frames + 100), String(seed)]); let s = ''; p.stdout.on('data', (d) => (s += d)); p.on('exit', (c) => (c ? rej(new Error('gen_mash')) : res(s))); });
  writeFileSync(join(files, 'session.args'), (await gen(4242)) + (await gen(777)).replace(/^--press (\d+):/gm, '--press $1:p2:'));
  if (browserHost) copyFileSync(state, join(files, 'start.state'));

  const port = await freePort();
  const serve = spawn('python3', ['-I', join(ROOT, 'scripts/serve.py'), web, join(G, 'disc.iso'), String(port), '--files', files], { stdio: ['ignore', 'ignore', 'pipe'], detached: true });
  children.push(serve);
  await sleep(800);
  env = await startEnv({ webRoot: web, upstream: `http://127.0.0.1:${port}` });
  const wsOrigin = env.origin.replace(/^http/, 'ws');
  const xvfb = noGpu ? null : await startXvfb();
  say(`stack: ${env.origin} (signal ${env.signalOrigin}), Xvfb ${xvfb}`);

  browser = await launchBrowser('web', {
    display: xvfb, headless: true, flags: noGpu ? ['--disable-gpu', '--disable-extensions', '--mute-audio', ...LOCAL_FLAGS] : [...GPU_FLAGS, ...LOCAL_FLAGS],
    env: noGpu ? {} : PRIME, windowSize: '800,600',
    log: (line) => { appendFileSync(join(out, 'browser.console.log'), line + '\n'); if (/DESYNC|refused|loaded frame|snapshot of|error|exception|failed|relay|direct|transport|handshake|pc (connected|failed)/i.test(line)) say(line.slice(0, 300)); },
  });
  const page = browser.page;
  const common = `lsinput=session.args&lsrtc=${RTC}&PS2_HASH_LOG=/session/hash.log&PS2_HASH_SPLIT=1${noGpu ? '&PS2_GS=soft&copy' : ''}${webParams ? '&' + webParams : ''}`;
  const startPage = async (room) => {
    await page.navigate(`${env.origin}/ps2web.html?room=${room}&${common}${browserHost ? '&state=start.state' : ''}`, 60000);
    await page.waitFor(`document.getElementById('start') && !document.getElementById('start').disabled`, 180000, 250);
    const info = await page.evaluate(`(async () => { const out = []; for (const p of ['high-performance', 'low-power']) { const a = await navigator.gpu?.requestAdapter({ powerPreference: p }); out.push(p + ': ' + (a ? [a.info.vendor, a.info.architecture, a.info.description].filter(Boolean).join(' ') : 'none')); } const t = await (await fetch('/turn')).json(); return out.join(', ') + ' | page: ' + (Module.gpuInfo || '') + ' | ice ' + JSON.stringify(t.iceServers.map((s) => s.urls)); })()`).catch((e) => 'adapter query failed: ' + e.message);
    say(`page adapters ${info}`);
    await page.send('Runtime.evaluate', { expression: `document.getElementById('start').click()`, userGesture: true, awaitPromise: true });
  };

  let room;
  if (browserHost) {
    await startPage('new');
    room = await page.waitFor(`window.lsSession && window.lsSession.ls && window.lsSession.ls.joinedMsg && new URL(location.href).searchParams.get('room')`, 120000, 250);
    say(`browser hosts room ${room}`);
    await page.waitFor(`Module._ps2web_frames() > 30`, 300000, 500);
    native = startNative(['--lockstep', wsOrigin, '--room', room]);
  } else {
    native = startNative(['--load-state', state, '--lockstep', wsOrigin, '--room', 'new']);
    for (let i = 0; i < 600 && !room; i++, await sleep(100)) room = (nativeLog().match(/created room ([a-z0-9]{12})/) || [])[1];
    if (!room) throw new Error('the native host made no room: ' + nativeLog().slice(-500));
    say(`native hosts room ${room}`);
    await startPage(room);
  }

  // until both hash logs hold `frames` frames after the drop-in
  let dropIn = null, lastSay = 0, webHashes = new Map();
  const end = Date.now() + minutes * 60000;
  for (;;) {
    await sleep(3000);
    const nl = nativeLog();
    const m = nl.match(/\[lockstep\] loaded frame \d+ \(game frame (\d+)\)/);
    if (m && dropIn === null) { dropIn = Number(m[1]); say(`drop-in after game frame ${dropIn}`); }
    if (/\[lockstep\] (refused|the other player refused)/.test(nl)) { say('native: ' + (nl.match(/\[lockstep\] (refused|the other player refused).*/) || [''])[0]); break; }
    const s = await page.evaluate(`(() => { const s = window.lsSession; const r = s ? s.snapshot() : {}; return { frame: Module._ps2web_frames(), ls: r.ls || {}, status: document.getElementById('status').textContent, stats: document.getElementById('stats').textContent }; })()`).catch((e) => ({ error: e.message }));
    const nh = existsSync(join(out, 'native/hash.log')) ? parseLog(readFileSync(join(out, 'native/hash.log'), 'utf8')) : new Map();
    const nAfter = dropIn === null ? 0 : [...nh.keys()].filter((f) => f > dropIn).length;
    const wAfter = dropIn === null ? 0 : Math.max(0, (s.frame || 0) - dropIn - 1);
    if (Date.now() - lastSay > 15000) {
      lastSay = Date.now();
      say(`native ${nh.size} hashed (${nAfter} after drop-in) | browser game frame ${s.frame} ${(s.stats || '').match(/[\d.]+ fps/)?.[0] || ''} | ls ${s.ls?.status || s.error || ''}${s.ls?.transport ? ' ' + s.ls.transport : ''} hashes ok ${s.ls?.hashesOk ?? '-'} desyncs ${s.ls?.desyncs ?? '-'} | mem ${memMb().toFixed(0)} MB`);
    }
    if (/refused/.test(s.ls?.status || '') || /refused|could not/i.test(s.status || '')) { say('browser: ' + s.status + ' / ' + s.ls?.status); break; }
    if (nAfter >= frames && wAfter >= frames) break;
    if (nativeExit !== null) { say('the native peer stopped'); break; }
    if (Date.now() > end) { say('time limit'); break; }
    if (memMb() < 1200) { say(`stopping: only ${memMb().toFixed(0)} MB MemAvailable`); break; }
  }
  // the browser's log out of its in-memory file system, then stop the native peer
  const text = await page.evaluate(`(() => { try { return FS.readFile('/session/hash.log', { encoding: 'utf8' }); } catch (e) { return 'ERROR ' + e.message; } })()`).catch((e) => 'ERROR ' + e.message);
  writeFileSync(join(out, 'web-hash.log'), text);
  const final = await page.evaluate(`(() => { const s = window.lsSession; return { snapshot: s && s.snapshot(), vuInterpreted: Module._ps2web_vu_interpreted(), vuJit: Module._ps2web_vu_jit_programs?.(), status: document.getElementById('status').textContent }; })()`).catch((e) => ({ error: e.message }));
  writeFileSync(join(out, 'web-final.json'), JSON.stringify(final, null, 2));
  if (native && nativeExit === null) { native.kill('SIGTERM'); for (let i = 0; i < 50 && nativeExit === null; i++) await sleep(100); }
  say(`native: ${(nativeLog().match(/\[lockstep\] summary.*/) || ['no summary'])[0].slice(0, 400)}`);
  say(`browser: ${JSON.stringify({ transport: final.snapshot?.ls?.transport, D: final.snapshot?.ls?.D, hashesOk: final.snapshot?.ls?.hashesOk, desyncs: final.snapshot?.ls?.desyncs, stalls: final.snapshot?.emu?.stallFrames, vuInterpreted: final.vuInterpreted, vuJitPrograms: final.vuJit, transfers: final.snapshot?.transfers })}`);

  if (text.startsWith('ERROR')) return say('no browser hash log: ' + text);
  if (dropIn === null) return say('no drop-in seen in the native log');
  const a = parseLog(readFileSync(join(out, 'native/hash.log'), 'utf8')), b = parseLog(text);
  const both = [...a.keys()].filter((f) => f > dropIn && b.has(f)).sort((x, y) => x - y);
  const same = both.filter((f) => a.get(f).h === b.get(f).h).length;
  const first = both.find((f) => a.get(f).h !== b.get(f).h);
  const report = { dropIn, nativeFrames: a.size, webFrames: b.size, compared: both.length, identical: same, range: both.length ? [both[0], both[both.length - 1]] : null, firstDivergent: first ?? null };
  if (first !== undefined) {
    const pa = Object.fromEntries(a.get(first).parts.map((p) => p.split('='))), pb = Object.fromEntries(b.get(first).parts.map((p) => p.split('=')));
    report.sections = Object.keys(pa).filter((k) => pa[k] !== pb[k]);
    report.lastEqual = both.filter((f) => f < first).pop() ?? null;
  }
  writeFileSync(join(out, 'report.json'), JSON.stringify(report, null, 2));
  say(`hash logs after the drop-in (game frame ${dropIn}): native ${[...a.keys()].filter((f) => f > dropIn).length}, browser ${[...b.keys()].filter((f) => f > dropIn).length}; identical ${same}/${both.length}` +
    (both.length ? ` (${both[0]}-${both[both.length - 1]})` : '') + `; first divergent frame ${first ?? 'none'}${report.sections ? ', sections ' + report.sections.join(',') : ''}`);
}

// both play alone from the state with the same script (presses by game frame); the hash logs cover every frame
async function soloRun() {
  const base = JSON.parse(readFileSync(state.replace(/\.state$/, '.json'), 'utf8')).frame;
  say(`browser and native alone from game frame ${base}, ${frames} frames, page params '${webParams}', web ${web}`);
  const files = join(out, 'files');
  mkdirSync(files, { recursive: true });
  const gen = (seed) => new Promise((res, rej) => { const p = spawn('python3', ['-I', join(ROOT, 'mksm/tools/scripts/gen_mash.py'), String(base + 10), String(frames), String(seed)]); let s = ''; p.stdout.on('data', (d) => (s += d)); p.on('exit', (c) => (c ? rej(new Error('gen_mash')) : res(s))); });
  const script = (await gen(4242)) + (await gen(777)).replace(/^--press (\d+):/gm, '--press $1:p2:');
  writeFileSync(join(files, 'session.args'), script);
  copyFileSync(state, join(files, 'start.state'));
  const presses = script.split('\n').filter(Boolean).map((l) => l.split(/\s+/)[1]);
  const port = await freePort();
  const serve = spawn('python3', ['-I', join(ROOT, 'scripts/serve.py'), web, join(G, 'disc.iso'), String(port), '--files', files], { stdio: ['ignore', 'ignore', 'pipe'], detached: true });
  children.push(serve);
  await sleep(800);
  const xvfb = noGpu ? null : await startXvfb();
  browser = await launchBrowser('web', {
    display: xvfb, headless: true, flags: noGpu ? ['--disable-gpu', '--disable-extensions', '--mute-audio', ...LOCAL_FLAGS] : [...GPU_FLAGS, ...LOCAL_FLAGS],
    env: noGpu ? {} : PRIME, windowSize: '800,600',
    log: (line) => { appendFileSync(join(out, 'browser.console.log'), line + '\n'); if (/error|exception|failed|cannot|state/i.test(line)) say(line.slice(0, 300)); },
  });
  const page = browser.page;
  const url = `http://127.0.0.1:${port}/ps2web.html?state=start.state&nocard&PS2_RTC=${RTC}&PS2_HASH_LOG=/hash.log&PS2_HASH_SPLIT=1` +
    `${noGpu ? '&PS2_GS=soft&copy' : ''}${webParams ? '&' + webParams : ''}&press=${encodeURIComponent(presses.join(','))}`;
  await page.navigate(url, 60000);
  await page.waitFor(`document.getElementById('start') && !document.getElementById('start').disabled`, 180000, 250);
  await page.send('Runtime.evaluate', { expression: `document.getElementById('start').click()`, userGesture: true, awaitPromise: true });
  native = startNative([`--load-state`, state], base + frames + 1);
  const end = Date.now() + minutes * 60000;
  let lastSay = 0, f = 0;
  for (;;) {
    await sleep(3000);
    f = await page.evaluate('Module._ps2web_frames()').catch(() => f);
    let n = 0; try { n = readFileSync(join(out, 'native/hash.log'), 'utf8').split('\n').length - 1; } catch {}
    if (Date.now() - lastSay > 15000) { lastSay = Date.now(); say(`browser game frame ${f}, native ${n} hashed${nativeExit !== null ? ' (exited ' + nativeExit + ')' : ''} | mem ${memMb().toFixed(0)} MB`); }
    if (f > base + frames && nativeExit !== null) break;
    if (Date.now() > end) { say('time limit'); break; }
    if (memMb() < 1200) { say(`stopping: only ${memMb().toFixed(0)} MB MemAvailable`); break; }
  }
  const text = await page.evaluate(`(() => { try { return FS.readFile('/hash.log', { encoding: 'utf8' }); } catch (e) { return 'ERROR ' + e.message; } })()`).catch((e) => 'ERROR ' + e.message);
  writeFileSync(join(out, 'web-hash.log'), text);
  const vuInterpreted = await page.evaluate('Module._ps2web_vu_interpreted()').catch(() => null);
  if (text.startsWith('ERROR')) return say('no browser hash log: ' + text);
  const a = parseLog(readFileSync(join(out, 'native/hash.log'), 'utf8')), b = parseLog(text);
  const both = [...a.keys()].filter((x) => x > base && x <= base + frames && b.has(x)).sort((x, y) => x - y);
  const same = both.filter((x) => a.get(x).h === b.get(x).h).length;
  const first = both.find((x) => a.get(x).h !== b.get(x).h);
  const report = { base, compared: both.length, identical: same, range: both.length ? [both[0], both[both.length - 1]] : null, firstDivergent: first ?? null, vuInterpreted };
  if (first !== undefined) {
    const pa = Object.fromEntries(a.get(first).parts.map((p) => p.split('='))), pb = Object.fromEntries(b.get(first).parts.map((p) => p.split('=')));
    report.sections = Object.keys(pa).filter((k) => pa[k] !== pb[k]);
  }
  writeFileSync(join(out, 'report.json'), JSON.stringify(report, null, 2));
  say(`solo hash logs from game frame ${base}: identical ${same}/${both.length}${both.length ? ` (${both[0]}-${both[both.length - 1]})` : ''}; first divergent frame ${first ?? 'none'}` +
    `${report.sections ? ', sections ' + report.sections.join(',') : ''}; browser VU1 interpreted calls ${vuInterpreted}`);
}

main().catch((e) => say('ERROR', e.stack || e.message)).finally(async () => {
  await cleanup();
  say('done');
  process.exit(0);
});
