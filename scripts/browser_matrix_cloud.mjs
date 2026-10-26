// The same probe as browser_matrix.mjs on a real browser in LambdaTest's Selenium grid (plain W3C WebDriver over HTTPS,
// no client library): real Safari on macOS, real Chrome/Firefox/Edge on Windows 11, with whatever GPU the VM has.
//   node scripts/browser_matrix_cloud.mjs --browser Safari --version 27.0 --platform "MacOS Golden Gate" [--label ..] [--seconds 40] [--out results.jsonl]
// Credentials: ~/.config/mksm/lambdatest.env (LT_USERNAME, LT_ACCESS_KEY). Free plan = 100 lifetime minutes: keep runs short.
import { appendFileSync, readFileSync, mkdirSync, writeFileSync } from 'node:fs';
import { resolve, join } from 'node:path';

const arg = (name, def) => { const i = process.argv.indexOf('--' + name); return i > 0 ? process.argv[i + 1] : def; };
const browserName = arg('browser', 'Chrome'), browserVersion = arg('version', 'latest'), platformName = arg('platform', 'Windows 11');
const label = arg('label', `${browserName} ${browserVersion} ${platformName}`);
const base = arg('url', 'https://mkshaolinmonks.com').replace(/\/$/, '');
const seconds = Number(arg('seconds', 40));
const out = arg('out', join(process.env.HOME, '.local/state/mksm-browser-matrix/results.jsonl'));
mkdirSync(resolve(out, '..'), { recursive: true });
const env = Object.fromEntries(readFileSync(join(process.env.HOME, '.config/mksm/lambdatest.env'), 'utf8').trim().split('\n').map((l) => l.split('=')));
const hub = 'https://hub.lambdatest.com/wd/hub';
const auth = 'Basic ' + Buffer.from(`${env.LT_USERNAME}:${env.LT_ACCESS_KEY}`).toString('base64');
const log = (...a) => console.log(`[${label}]`, ...a);
const sleep = (ms) => new Promise((r) => setTimeout(r, ms));

async function wd(method, path, body) {
  const r = await fetch(hub + path, { method, headers: { Authorization: auth, 'Content-Type': 'application/json' }, body: body ? JSON.stringify(body) : undefined });
  const j = await r.json().catch(() => ({}));
  if (!r.ok || (j.value && j.value.error)) throw new Error(`${method} ${path}: ${r.status} ${JSON.stringify(j.value || j).slice(0, 300)}`);
  return j.value;
}

const result = { label, cloud: 'lambdatest', browserName, browserVersion, platformName, when: new Date().toISOString() };
const t0 = Date.now();
const session = await wd('POST', '/session', { capabilities: { alwaysMatch: {
  browserName, browserVersion,
  'LT:Options': { platformName, build: 'mksm browser matrix', name: label, user: env.LT_USERNAME, accessKey: env.LT_ACCESS_KEY, video: true, console: true, network: false, w3c: true },
} } });
const id = session.sessionId;
result.session = id;
result.caps = { browserVersion: session.capabilities.browserVersion, platformName: session.capabilities.platformName };
const S = (path) => `/session/${id}${path}`;
const run = (script, args = []) => wd('POST', S('/execute/sync'), { script, args });
let boots = false;
try {
  const build = JSON.parse(await (await fetch(base + '/current.json')).text()).build;
  result.url = `${base}/v/${build}/ps2web.html?disc=/disc.iso`;
  await wd('POST', S('/timeouts'), { script: 30000, pageLoad: 60000 });
  await wd('POST', S('/url'), { url: result.url });
  result.ua = await run('return navigator.userAgent');
  const probe = `const s = document.getElementById('start'), h = document.getElementById('help');
    return { secure: isSecureContext, coi: crossOriginIsolated, missing: typeof missingFeatures === 'function' ? missingFeatures() : null,
      start: s ? s.textContent : null, ready: !!s && !s.disabled, help: h && !h.hidden ? h.textContent : '',
      status: (document.getElementById('status') || {}).textContent || '', gpu: typeof Module !== 'undefined' ? Module.gpuInfo || null : null,
      sw: navigator.serviceWorker && navigator.serviceWorker.controller ? navigator.serviceWorker.controller.scriptURL : null };`;
  let state = null;
  for (let t = 0; t < 150; t++) {
    try { state = await run(probe); } catch (e) { await sleep(1000); continue; } // the disc worker's one-time reload
    if (state.ready || (state.missing && state.missing.length && state.help)) break;
    await sleep(1000);
  }
  Object.assign(result, state || { error: 'page never answered' });
  log('secure', result.secure, 'isolated', result.coi, 'missing', JSON.stringify(result.missing), 'gpu', result.gpu);
  if (result.ready) {
    const el = await wd('POST', S('/element'), { using: 'css selector', value: '#start' });
    await wd('POST', S(`/element/${el['element-6066-11e4-a52e-4f735466cecf']}/click`), {}); // a real click: user activation for audio and fullscreen
    const frames = () => run('return typeof Module !== "undefined" && Module._ps2web_frames ? Module._ps2web_frames() : -1');
    const half = Math.max(5, Math.floor(seconds / 2));
    await sleep(half * 1000);
    const f1 = await frames();
    await sleep((seconds - half) * 1000);
    const f2 = await frames();
    result.frames = f2; result.fps = Number(((f2 - f1) / (seconds - half)).toFixed(1));
    result.status = await run(`return document.getElementById('status').textContent`);
    boots = f2 > 0;
    log('frames', f2, 'fps', result.fps, 'status', result.status);
  } else {
    log('not started:', result.help || result.status);
  }
  const png = await wd('GET', S('/screenshot'));
  writeFileSync(join(resolve(out, '..'), label.replace(/[^\w.-]+/g, '_') + '.png'), Buffer.from(png, 'base64'));
  await run(`lambdatest_action: ${JSON.stringify({ action: 'setTestStatus', arguments: { status: boots ? 'passed' : 'failed', remark: boots ? 'boots' : (result.missing || []).join('; ') } })}`).catch(() => {});
} catch (e) {
  result.error = String(e.message || e).slice(0, 500);
  log('ERROR', result.error);
} finally {
  await wd('DELETE', S('')).catch(() => {});
}
result.boots = boots;
result.minutes = Number(((Date.now() - t0) / 60000).toFixed(1));
appendFileSync(out, JSON.stringify(result) + '\n');
console.log(`${boots ? 'BOOTS' : 'FAIL'} ${label} ${result.caps ? result.caps.browserVersion : ''} ${boots ? result.fps + ' fps' : (result.missing || []).join('; ') || result.error || result.help} (${result.minutes} min)`);
