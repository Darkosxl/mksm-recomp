// Does the live site open in a given browser? One engine per run, headless, driven through Playwright:
//   node scripts/browser_matrix.mjs --pw <dir with node_modules/playwright> --engine chromium|firefox|webkit \
//        [--exe /path/to/chrome] [--label "Chrome 156"] [--url https://mkshaolinmonks.com] [--out results.jsonl] [--seconds 40]
// Records the page's own verdict (missingFeatures(), isSecureContext, crossOriginIsolated), the WebGPU adapter, then
// presses Start and counts emulated frames for --seconds. Appends one JSON line per run to --out (mksm/notes/browser-support.md
// holds the table). The remote disc cache worker reloads the page once on the first visit; the polling below survives that.
import { createRequire } from 'node:module';
import { appendFileSync, readFileSync, mkdirSync } from 'node:fs';
import { resolve, join } from 'node:path';

const arg = (name, def) => { const i = process.argv.indexOf('--' + name); return i > 0 ? process.argv[i + 1] : def; };
const pw = resolve(arg('pw', '.'));
const engine = arg('engine', 'chromium');
const exe = arg('exe');
const label = arg('label', engine);
const base = arg('url', 'https://mkshaolinmonks.com').replace(/\/$/, '');
const seconds = Number(arg('seconds', 40));
const out = arg('out', join(process.env.HOME, '.local/state/mksm-browser-matrix/results.jsonl'));
mkdirSync(resolve(out, '..'), { recursive: true });

const memMb = () => Number(/MemAvailable:\s+(\d+)/.exec(readFileSync('/proc/meminfo', 'utf8'))[1]) / 1024;
if (memMb() < 4000) { console.error(`only ${memMb().toFixed(0)} MB available; not starting a browser`); process.exit(2); }

const playwright = createRequire(join(pw, 'package.json'))('playwright');
const type = playwright[engine];
const sleep = (ms) => new Promise((r) => setTimeout(r, ms));
const result = { label, engine, exe: exe || type.executablePath(), when: new Date().toISOString(), url: null, version: null, ua: null };
const log = (...a) => console.log(`[${label}]`, ...a);

const browser = await type.launch({ headless: true, executablePath: exe || undefined, args: engine === 'chromium' ? ['--no-sandbox'] : [] });
result.version = browser.version();
const page = await browser.newPage({ viewport: { width: 1024, height: 640 } });
const errors = [];
page.on('pageerror', (e) => errors.push(String(e.message).slice(0, 200)));
page.on('console', (m) => { if (m.type() === 'error') errors.push(m.text().slice(0, 200)); });
try {
  const build = JSON.parse(await (await fetch(base + '/current.json')).text()).build;
  result.url = `${base}/v/${build}/ps2web.html?disc=/disc.iso`;
  await page.goto(result.url, { waitUntil: 'domcontentloaded', timeout: 60000 });
  result.ua = await page.evaluate('navigator.userAgent');
  // the page decides: Start enabled (runtime up, nothing missing) or the help text (something missing)
  const probe = `(() => { const s = document.getElementById('start'), h = document.getElementById('help');
    return { secure: isSecureContext, coi: crossOriginIsolated, missing: typeof missingFeatures === 'function' ? missingFeatures() : null,
      start: s ? s.textContent : null, ready: !!s && !s.disabled, help: h && !h.hidden ? h.textContent : '',
      status: (document.getElementById('status') || {}).textContent || '', gpu: typeof Module !== 'undefined' ? Module.gpuInfo || null : null,
      sw: navigator.serviceWorker && navigator.serviceWorker.controller ? navigator.serviceWorker.controller.scriptURL : null }; })()`;
  let state = null;
  for (let t = 0; t < 180; t += 1) {
    try { state = await page.evaluate(probe); } catch (e) { await sleep(1000); continue; } // a reload between polls destroys the context
    if (state.ready || (state.missing && state.missing.length && state.help)) break;
    await sleep(1000);
  }
  Object.assign(result, state || { error: 'page never answered' });
  log('secure', result.secure, 'isolated', result.coi, 'missing', JSON.stringify(result.missing), 'gpu', result.gpu);
  if (result.ready) {
    await page.click('#start', { timeout: 10000 });
    const frames = async () => page.evaluate('typeof Module !== "undefined" && Module._ps2web_frames ? Module._ps2web_frames() : -1');
    const half = Math.max(5, Math.floor(seconds / 2));
    await sleep(half * 1000);
    const f1 = await frames();
    await sleep((seconds - half) * 1000);
    const f2 = await frames();
    result.frames = f2;
    result.fps = Number(((f2 - f1) / (seconds - half)).toFixed(1));
    result.status = await page.evaluate(`document.getElementById('status').textContent`);
    result.boots = f2 > 0;
    log('frames', f2, 'fps', result.fps, 'status', result.status);
  } else {
    result.boots = false;
    log('not started:', result.help || result.status);
  }
  await page.screenshot({ path: join(resolve(out, '..'), label.replace(/[^\w.-]+/g, '_') + '.png') }).catch(() => {});
} catch (e) {
  result.error = String(e.message || e).slice(0, 500);
  log('ERROR', result.error);
} finally {
  result.errors = errors.slice(0, 10);
  await browser.close().catch(() => {});
}
appendFileSync(out, JSON.stringify(result) + '\n');
console.log(`${result.boots ? 'BOOTS' : 'FAIL'} ${label} ${result.version} ${result.boots ? result.fps + ' fps' : (result.missing || []).join('; ') || result.error || result.help}`);
