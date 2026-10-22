// Drives the ps2web build in Chromium over CDP for tests (mksm/notes/web-build.md). Never touches the user's desktop:
// Chromium runs headless or headful inside a private Xvfb, with a temporary profile (or --profile), muted, and the
// user's chromium-flags.conf kept out. Every launch takes logs/heavy.lock and an 8 GB memory cap.
// usage: node drive.mjs --url URL --out DIR [options]
//   --seconds N --until-frame F        stop conditions (wall clock / emulated frame)
//   --shots f1,f2 --shot-every-frames K   screenshots (CDP) at emulated frames
//   --xvfb                             headful in Xvfb (real compositing, so WebGPU canvases show in screenshots)
//   --nvidia                           PRIME offload env for the dGPU; --gpu-flags "..." replaces the WebGPU flags
//   --profile DIR                      keep the browser profile (IndexedDB memory card) between runs
//   --fake-pads N --pad-script FILE    N Gamepad API pads, scripted by emulated frame:
//                                      "<frame> <pad> <btn[+btn]|none> [hold] [lx,ly]"
//   --control FILE                     live commands appended to FILE: press <pad> <btn> [hold] [delay] | stick <pad> <x,y>
//                                      [hold] [delay] | shot <label> [delay] | eval <js> | quit   (see ctl.sh)
//   --eval-at FRAME:JS --eval-before-start JS --reload-at FRAME --probe-gpu --probe-shot --window W,H
//   --cpu-profile FRAME:SECONDS        main-thread CPU profile from FRAME for SECONDS -> OUT/main.cpuprofile
//   buttons: cross circle square triangle l1 r1 l2 r2 select start l3 r3 up down left right
import { spawn, execFileSync } from 'node:child_process';
import fs from 'node:fs';
import os from 'node:os';
import path from 'node:path';

const argv = process.argv.slice(2);
const opt = { evalAt: [], shots: [] };
for (let i = 0; i < argv.length; ++i) {
  const a = argv[i], next = () => argv[++i];
  if (a === '--url') opt.url = next();
  else if (a === '--out') opt.out = next();
  else if (a === '--seconds') opt.seconds = Number(next());
  else if (a === '--until-frame') opt.untilFrame = Number(next());
  else if (a === '--shot-every-frames') opt.shotEvery = Number(next());
  else if (a === '--shots') opt.shots = next().split(',').map(Number);
  else if (a === '--nvidia') opt.nvidia = true;
  else if (a === '--profile') opt.profile = next();
  else if (a === '--fake-pads') opt.fakePads = Number(next());
  else if (a === '--pad-script') opt.padScript = next();
  else if (a === '--eval-at') { const s = next(); const c = s.indexOf(':'); opt.evalAt.push({ frame: Number(s.slice(0, c)), js: s.slice(c + 1), done: false }); }
  else if (a === '--reload-at') opt.reloadAt = Number(next());
  else if (a === '--cpu-profile') { const [f, secs] = next().split(':').map(Number); opt.cpuProfile = { frame: f, ms: secs * 1000 }; }
  else if (a === '--no-start') opt.noStart = true;
  else if (a === '--flags') opt.flags = next().split(' ').filter(Boolean);
  else if (a === '--probe-gpu') opt.probe = true;
  else if (a === '--probe-shot') opt.probeShot = true;
  else if (a === '--gpu-flags') opt.gpuFlags = next().split(' ').filter(Boolean);
  else if (a === '--headful') opt.headful = true;
  else if (a === '--xvfb') { opt.headful = true; opt.xvfb = true; }
  else if (a === '--window') opt.window = next();
  else if (a === '--control') opt.control = next();
  else if (a === '--eval-before-start') (opt.evalBefore = opt.evalBefore || []).push(next());
  else { console.error('unknown option ' + a); process.exit(2); }
}
if (!opt.url || !opt.out) { console.error('need --url and --out'); process.exit(2); }
fs.mkdirSync(opt.out, { recursive: true });
const t0 = Date.now();
const stamp = () => ((Date.now() - t0) / 1000).toFixed(2).padStart(8);
const consoleLog = fs.createWriteStream(path.join(opt.out, 'console.log'));
const statsLog = fs.createWriteStream(path.join(opt.out, 'stats.log'));
const say = (s) => { const line = stamp() + ' ' + s; console.log(line); statsLog.write(line + '\n'); };

const tempProfile = !opt.profile;
const profile = opt.profile || fs.mkdtempSync(path.join(os.tmpdir(), 'ps2web-chrome-'));
fs.mkdirSync(profile, { recursive: true });
try { fs.rmSync(path.join(profile, 'DevToolsActivePort')); } catch {}

const gpuFlags = opt.gpuFlags || ['--enable-unsafe-webgpu', '--enable-features=Vulkan,WebGPU,SharedArrayBuffer', '--use-angle=vulkan', '--ignore-gpu-blocklist'];
const flags = [
  ...(opt.headful ? [] : ['--headless=new']), `--user-data-dir=${profile}`, '--remote-debugging-port=0', '--no-first-run', '--no-default-browser-check',
  '--mute-audio', '--autoplay-policy=no-user-gesture-required', `--window-size=${opt.window || '1280,1000'}`,
  ...gpuFlags,
  '--disable-background-timer-throttling', '--disable-renderer-backgrounding', '--disable-backgrounding-occluded-windows',
  '--disable-extensions', '--disable-sync', '--password-store=basic', '--use-mock-keychain',
  ...(opt.flags || []), 'about:blank',
];
const env = { ...process.env };
// keep the user's ~/.config/chromium-flags.conf (--ozone-platform=wayland, extensions) out, and never reach their Wayland session
env.XDG_CONFIG_HOME = path.join(profile, 'xdg-config');
fs.mkdirSync(env.XDG_CONFIG_HOME, { recursive: true });
delete env.WAYLAND_DISPLAY;
let xvfb = null;
{
  // a private X server for both modes (the NVIDIA PRIME Vulkan driver hides the dGPU without a DISPLAY)
  // a private X server: the window never reaches the user's Wayland desktop
  const display = ':' + (90 + Math.floor(Math.random() * 9));
  xvfb = spawn('Xvfb', [display, '-screen', '0', '1280x1024x24', '-nolisten', 'tcp'], { stdio: 'ignore', detached: true });
  env.DISPLAY = display;
  delete env.WAYLAND_DISPLAY;
  env.XDG_SESSION_TYPE = 'x11';
  if (opt.xvfb) flags.unshift('--ozone-platform=x11', '--window-position=0,0', '--force-device-scale-factor=1');
  execFileSync('sleep', ['1']);
}
if (opt.nvidia) Object.assign(env, { __NV_PRIME_RENDER_OFFLOAD: '1', __VK_LAYER_NV_optimus: 'NVIDIA_only' });
// one heavy job at a time machine-wide, capped at 8 GB, no swap
const P = '/home/darkwarro/Documents/Twitter/PS2_REA';
const chrome = spawn('flock', [`${P}/logs/heavy.lock`, 'systemd-run', '--user', '--scope', '-q', '-p', 'MemoryMax=8G', '-p', 'MemorySwapMax=0', '--',
  '/home/darkwarro/.local/bin/chromium', ...flags], { env, detached: true, stdio: ['ignore', 'ignore', fs.openSync(path.join(opt.out, 'chrome-stderr.log'), 'w')] });
let chromeExit = null;
chrome.on('exit', (code, signal) => { chromeExit = { code, signal }; say(`[driver] chromium exited code=${code} signal=${signal}`); });

let cleaned = false;
function cleanup() {
  if (cleaned) return;
  cleaned = true;
  try { process.kill(-chrome.pid, 'SIGTERM'); } catch {}
  if (xvfb) { try { process.kill(-xvfb.pid, 'SIGTERM'); } catch {} }
  try { execFileSync('pkill', ['-f', `user-data-dir=${profile}`]); } catch {}
  if (tempProfile) setTimeout(() => { try { fs.rmSync(profile, { recursive: true, force: true }); } catch {} }, 500);
}
process.on('exit', cleanup);
process.on('SIGINT', () => { cleanup(); process.exit(130); });
process.on('SIGTERM', () => { cleanup(); process.exit(143); });

const sleep = (ms) => new Promise((r) => setTimeout(r, ms));
async function devtoolsPort() {
  for (let i = 0; i < 600; ++i) {  // the flock may wait for another heavy job
    if (chromeExit) throw new Error('chromium exited before devtools came up');
    try { return Number(fs.readFileSync(path.join(profile, 'DevToolsActivePort'), 'utf8').split('\n')[0]); } catch {}
    await sleep(1000);
  }
  throw new Error('no DevToolsActivePort');
}

const BUTTONS = { cross: 0, circle: 1, square: 2, triangle: 3, l1: 4, r1: 5, l2: 6, r2: 7, select: 8, start: 9, l3: 10, r3: 11, up: 12, down: 13, left: 14, right: 15 };
function loadPadScript(file) {
  const out = [];
  for (const raw of fs.readFileSync(file, 'utf8').split('\n')) {
    const line = raw.replace(/#.*/, '').trim();
    if (!line) continue;
    const [frame, pad, names, hold, stick] = line.split(/\s+/);
    let mask = 0;
    if (names !== 'none') for (const n of names.split('+')) { if (!(n in BUTTONS)) throw new Error('bad button ' + n); mask |= 1 << BUTTONS[n]; }
    const axes = stick ? stick.split(',').map((v) => Number(v) / 127.5 - 1) : null;
    out.push({ frame: Number(frame), pad: Number(pad), mask, hold: Number(hold || 6), axes });
  }
  return out;
}

const fakePadSource = (n) => `(() => {
  const mk = (i) => ({ id: 'cdp-fake-pad-' + i + ' (STANDARD GAMEPAD)', index: i, connected: true, mapping: 'standard', timestamp: 0,
    buttons: Array.from({ length: 17 }, () => ({ pressed: false, touched: false, value: 0 })), axes: [0, 0, 0, 0], vibrationActuator: null });
  window.__fakePads = Array.from({ length: ${n} }, (_, i) => mk(i));
  Navigator.prototype.getGamepads = function () { return window.__fakePads.slice(); };
  window.__setPad = (i, mask, axes) => {
    const p = window.__fakePads[i];
    for (let b = 0; b < 17; ++b) { const on = !!(mask & (1 << b)); p.buttons[b].pressed = on; p.buttons[b].value = on ? 1 : 0; }
    p.axes = axes ? [axes[0], axes[1], 0, 0] : [0, 0, 0, 0];
    p.timestamp = performance.now();
  };
})();`;

// runs inside the page: drives the fake pads from the emulated frame counter, before shell.html polls input
const padDriverSource = (events) => `(() => {
  window.__padEvents = ${JSON.stringify(events)};
  const original = Module.onFrame;
  Module.onFrame = () => {
    const f = Module._ps2web_frames();
    const events = window.__padEvents;
    const pads = window.__fakePads ? window.__fakePads.length : 0;
    for (let p = 0; p < pads; ++p) {
      let mask = 0, axes = null;
      for (const e of events) if (e.pad === p && f >= e.frame && f < e.frame + e.hold) { mask |= e.mask; if (e.axes) axes = e.axes; }
      window.__setPad(p, mask, axes);
    }
    original();
  };
})();`;

let id = 0;
const pending = new Map();
const listeners = [];
let ws;
function send(method, params = {}, sessionId) {
  const msg = { id: ++id, method, params };
  if (sessionId) msg.sessionId = sessionId;
  ws.send(JSON.stringify(msg));
  return new Promise((resolve, reject) => pending.set(msg.id, { resolve, reject, method }));
}

async function main() {
  const port = await devtoolsPort();
  const version = await (await fetch(`http://127.0.0.1:${port}/json/version`)).json();
  say(`[driver] ${version.Browser} port ${port}`);
  ws = new WebSocket(version.webSocketDebuggerUrl);
  await new Promise((resolve, reject) => { ws.onopen = resolve; ws.onerror = reject; });
  ws.onmessage = (event) => {
    const msg = JSON.parse(event.data);
    if (msg.id && pending.has(msg.id)) {
      const p = pending.get(msg.id);
      pending.delete(msg.id);
      if (msg.error) p.reject(new Error(p.method + ': ' + msg.error.message)); else p.resolve(msg.result);
    } else if (msg.method) for (const l of listeners) l(msg);
  };
  const { targetInfos } = await send('Target.getTargets');
  const page = targetInfos.find((t) => t.type === 'page');
  const { sessionId } = await send('Target.attachToTarget', { targetId: page.targetId, flatten: true });
  const call = (m, p) => send(m, p, sessionId);
  // workers (the emulation pthreads) print through the main thread in emscripten, so page console is enough
  listeners.push((msg) => {
    if (msg.method === 'Runtime.consoleAPICalled') {
      const text = msg.params.args.map((a) => a.value !== undefined ? a.value : a.description || a.type).join(' ');
      consoleLog.write(stamp() + ' [' + msg.params.type + '] ' + text + '\n');
    } else if (msg.method === 'Runtime.exceptionThrown') {
      const d = msg.params.exceptionDetails;
      consoleLog.write(stamp() + ' [exception] ' + (d.exception && d.exception.description || d.text) + '\n');
    } else if (msg.method === 'Log.entryAdded') {
      consoleLog.write(stamp() + ' [log:' + msg.params.entry.level + '] ' + msg.params.entry.text + '\n');
    } else if (msg.method === 'Network.responseReceived' && msg.params.response.status >= 400) {
      consoleLog.write(stamp() + ' [http ' + msg.params.response.status + '] ' + msg.params.response.url + '\n');
    } else if (msg.method === 'Inspector.targetCrashed') {
      say('[driver] renderer crashed');
    }
  });
  await call('Runtime.enable');
  await call('Log.enable');
  await call('Page.enable');
  await call('Network.enable').catch(() => {});
  await call('Inspector.enable').catch(() => {});
  if (opt.fakePads) await call('Page.addScriptToEvaluateOnNewDocument', { source: fakePadSource(opt.fakePads) });
  const evaluate = async (expression, userGesture = false) => {
    const r = await call('Runtime.evaluate', { expression, returnByValue: true, userGesture, awaitPromise: true });
    if (r.exceptionDetails) throw new Error('eval failed: ' + (r.exceptionDetails.exception && r.exceptionDetails.exception.description || r.exceptionDetails.text));
    return r.result.value;
  };
  const padEvents = opt.padScript ? loadPadScript(opt.padScript) : [];

  let shotIndex = 0;
  const shot = async (label) => {
    try {
      const { data } = await call('Page.captureScreenshot', { format: 'png' });
      const file = path.join(opt.out, `shot-${String(shotIndex++).padStart(3, '0')}-${label}.png`);
      fs.writeFileSync(file, Buffer.from(data, 'base64'));
      say('[driver] screenshot ' + file);
    } catch (e) { say('[driver] screenshot failed ' + e.message); }
  };

  if (opt.probeShot) {
    await call('Page.navigate', { url: opt.url });
    await sleep(3000);
    say('[probe] ' + JSON.stringify(await evaluate('window.probeDone').catch((e) => 'ERR ' + e.message)));
    const { data } = await call('Page.captureScreenshot', { format: 'png' });
    fs.writeFileSync(path.join(opt.out, 'probe.png'), Buffer.from(data, 'base64'));
    return finish(0);
  }
  if (opt.probe) {
    await call('Page.navigate', { url: opt.url });
    await sleep(1500);
    const info = await evaluate(`(async () => {
      const out = { isolated: window.crossOriginIsolated, gpu: !!navigator.gpu, jspi: typeof WebAssembly.Suspending };
      if (!navigator.gpu) return out;
      for (const power of ['high-performance', 'low-power']) {
        const a = await navigator.gpu.requestAdapter({ powerPreference: power });
        out[power] = a ? { vendor: a.info.vendor, arch: a.info.architecture, device: a.info.device, description: a.info.description, fallback: a.info.isFallbackAdapter, features: [...a.features].length } : null;
      }
      return out;
    })()`).catch((e) => 'ERR ' + e.message);
    say('[probe] ' + JSON.stringify(info));
    await call('Page.navigate', { url: 'chrome://gpu' });
    await sleep(2500);
    const gpuPage = await evaluate(`(() => { const r = document.querySelector('info-view'); const root = r && r.shadowRoot; return root ? root.textContent.replace(/\\s+/g, ' ').slice(0, 6000) : document.body.innerText.slice(0, 6000); })()`).catch((e) => 'ERR ' + e.message);
    fs.writeFileSync(path.join(opt.out, 'chrome-gpu.txt'), String(gpuPage));
    return finish(0);
  }
  const boot = async (reload) => {
    const navStart = Date.now();
    if (reload) await call('Page.reload', { ignoreCache: false }); else await call('Page.navigate', { url: opt.url });
    for (let i = 0; ; ++i) {
      const state = await evaluate(`(() => { const b = document.getElementById('start'); return { ready: !!(b && !b.disabled), text: b ? b.textContent : '', status: document.getElementById('status').textContent, help: document.getElementById('help') && document.getElementById('help').textContent } })()`).catch(() => null);
      if (state && state.ready) { say(`[driver] start button ready after ${((Date.now() - navStart) / 1000).toFixed(2)} s; status: ${state.status}; help: ${state.help || ''}`); break; }
      if (state && /Unsupported/.test(state.text)) { say('[driver] unsupported browser: ' + state.help); await shot('unsupported'); return false; }
      if (i % 20 === 0) say('[driver] waiting for start: ' + JSON.stringify(state));
      if (i > 1200) { say('[driver] start never became ready'); await shot('nostart'); return false; }
      await sleep(250);
    }
    if (padEvents.length || opt.fakePads) await evaluate(padDriverSource(padEvents));
    for (const js of opt.evalBefore || []) say('[driver] eval-before-start: ' + JSON.stringify(await evaluate(js).catch((e) => 'ERR ' + e.message)));
    if (opt.noStart) return true;
    await evaluate(`document.getElementById('start').click()`, true);
    say('[driver] clicked start');
    return true;
  };
  if (!(await boot(false))) return finish(1);

  const deadline = Date.now() + (opt.seconds || 600) * 1000;  // from the start click: the heavy lock may have kept it waiting
  let nextShotFrame = opt.shotEvery || Infinity;
  const pendingShots = [...opt.shots].sort((a, b) => a - b);
  let lastStats = '', reloaded = false, firstFrameAt = null, lastFrame = 0, controlDone = 0;
  const shotLabels = new Map();
  while (Date.now() < deadline && !chromeExit) {
    const s = await evaluate(`({ frame: typeof Module !== 'undefined' && Module._ps2web_frames ? Module._ps2web_frames() : -1, stats: document.getElementById('stats').textContent, status: document.getElementById('status').textContent })`).catch((e) => ({ frame: -2, stats: String(e.message), status: '' }));
    if (s.frame > 0 && firstFrameAt === null) { firstFrameAt = Date.now(); say('[driver] first emulated frame'); }
    if (s.stats !== lastStats) { say(`frame=${s.frame} ${s.stats} | ${s.status}`); lastStats = s.stats; }
    lastFrame = s.frame;
    for (const e of opt.evalAt) if (!e.done && s.frame >= e.frame) {
      e.done = true;
      const v = await evaluate(e.js).catch((err) => 'ERR ' + err.message);
      say(`[driver] eval@${e.frame}: ${JSON.stringify(v)}`);
    }
    if (opt.cpuProfile && !opt.cpuProfile.at && s.frame >= opt.cpuProfile.frame) {
      opt.cpuProfile.at = Date.now();
      await call('Profiler.enable');
      await call('Profiler.setSamplingInterval', { interval: 100 });
      await call('Profiler.start');
      say('[driver] cpu profile started at frame ' + s.frame);
    }
    if (opt.cpuProfile && opt.cpuProfile.at && !opt.cpuProfile.done && Date.now() - opt.cpuProfile.at >= opt.cpuProfile.ms) {
      opt.cpuProfile.done = true;
      const { profile: prof } = await call('Profiler.stop');
      fs.writeFileSync(path.join(opt.out, 'main.cpuprofile'), JSON.stringify(prof));
      say('[driver] cpu profile written at frame ' + s.frame);
    }
    while (pendingShots.length && s.frame >= pendingShots[0]) { const at = pendingShots.shift(); await shot((shotLabels.get(at) || 'f') + '-f' + s.frame); }
    if (s.frame >= nextShotFrame) { await shot('f' + s.frame); while (nextShotFrame <= s.frame) nextShotFrame += opt.shotEvery; }
    if (opt.reloadAt && !reloaded && s.frame >= opt.reloadAt) {
      reloaded = true;
      say('[driver] reloading page');
      if (!(await boot(true))) return finish(1);
      nextShotFrame = opt.shotEvery || Infinity;
      continue;
    }
    if (opt.untilFrame && s.frame >= opt.untilFrame) { say('[driver] reached frame ' + s.frame); break; }
    if (opt.control) {
      let text = '';
      try { text = fs.readFileSync(opt.control, 'utf8'); } catch {}
      const lines = text.split('\n').filter((l) => l.trim());
      let quit = false;
      for (; controlDone < lines.length; ++controlDone) {
        const parts = lines[controlDone].trim().split(/\s+/);
        const cmd = parts[0];
        if (cmd === 'press' || cmd === 'stick') {
          // press <pad> <buttons|none> [hold] [delay]   stick <pad> <x,y> [hold] [delay]
          const pad = Number(parts[1]);
          let mask = 0, axes = null;
          if (cmd === 'press') { if (parts[2] !== 'none') for (const n of parts[2].split('+')) mask |= 1 << BUTTONS[n]; }
          else axes = parts[2].split(',').map((v) => Number(v) / 127.5 - 1);
          const hold = Number(parts[3] || 6), delay = Number(parts[4] || 2);
          const at = await evaluate(`(() => { const f = Module._ps2web_frames() + ${delay}; window.__padEvents.push({ frame: f, pad: ${pad}, mask: ${mask}, hold: ${hold}, axes: ${JSON.stringify(axes)} }); return f; })()`);
          say(`[ctl] ${lines[controlDone].trim()} -> frames ${at}..${at + hold}`);
        } else if (cmd === 'shot') {
          pendingShots.push(s.frame + Number(parts[2] || 0)); pendingShots.sort((a, b) => a - b);
          shotLabels.set(s.frame + Number(parts[2] || 0), parts[1] || 'ctl');
          say(`[ctl] shot ${parts[1] || 'ctl'} at frame ${s.frame + Number(parts[2] || 0)}`);
        } else if (cmd === 'eval') {
          const js = lines[controlDone].trim().slice(5);
          say(`[ctl] eval ${JSON.stringify(await evaluate(js).catch((e) => 'ERR ' + e.message))}`);
        } else if (cmd === 'quit') { quit = true; }
      }
      if (quit) { say('[ctl] quit'); break; }
    }
    await sleep(opt.control ? 150 : 500);
  }
  await shot('final-f' + lastFrame);
  return finish(0);
}

async function finish(code) {
  say('[driver] done, elapsed ' + ((Date.now() - t0) / 1000).toFixed(1) + ' s');
  try { await send('Browser.close'); } catch {}
  await sleep(500);
  cleanup();
  consoleLog.end();
  statsLog.end();
  setTimeout(() => process.exit(code), 800);
}

main().catch((e) => { say('[driver] error ' + (e.stack || e)); finish(1); });
