// Checks the page's own cross-origin isolation fallback (web/shell.html + web/disc-sw.js?coi) in headless Chromium:
//   node scripts/coi_test.mjs [build dir]        (default build/web-mksm; CHROMIUM=... picks the browser)
// 1. a server without COOP/COEP: the page registers disc-sw.js?coi, reloads once, and is isolated afterwards;
// 2. the same page inside an iframe: one reload, then the "embedded" message, no reload loop;
// 3. a server with the headers: isolated at once, no service worker;
// 4. plain http on a non-loopback address: the "plain http" message, no service worker.
import { createServer } from 'node:http';
import { createReadStream, readFileSync, readdirSync, statSync, symlinkSync, writeFileSync, existsSync } from 'node:fs';
import { networkInterfaces } from 'node:os';
import { extname, join, resolve } from 'node:path';

// No CHROMIUM and no system chromium: the newest Playwright download (chrome-headless-shell or full chromium)
if (!process.env.CHROMIUM && !existsSync('/home/darkwarro/.local/bin/chromium')) {
  const cache = join(process.env.HOME || '', '.cache/ms-playwright');
  const found = existsSync(cache) ? readdirSync(cache).map((d) => {
    const m = /^(chromium_headless_shell|chromium)-(\d+)$/.exec(d);
    const bin = m && join(cache, d, m[1] === 'chromium' ? 'chrome-linux/chrome' : 'chrome-headless-shell-linux64/chrome-headless-shell');
    return m && existsSync(bin) ? { rev: Number(m[2]), bin } : null;
  }).filter(Boolean).sort((a, b) => b.rev - a.rev)[0] : null;
  if (found) process.env.CHROMIUM = found.bin;
}
const { ISOLATION, TYPES, launchBrowser, tempDir, removeDir } = await import('./lockstep_env.mjs');

const here = resolve(import.meta.dirname, '..');
const build = resolve(process.argv[2] || join(here, 'build/web-mksm'));
const root = tempDir('coi-test-');
for (const f of readdirSync(build)) if (/\.(js|wasm|data)$/.test(f) && f !== 'disc-sw.js') symlinkSync(join(build, f), join(root, f));
writeFileSync(join(root, 'ps2web.html'), readFileSync(join(here, 'web/shell.html'), 'utf8').replace('{{{ SCRIPT }}}', '<script async src="ps2web.js"></script>'));
writeFileSync(join(root, 'disc-sw.js'), readFileSync(join(here, 'web/disc-sw.js')));
writeFileSync(join(root, 'frame.html'), '<!doctype html><meta charset="utf-8"><iframe src="ps2web.html" width="800" height="600"></iframe>');

const serve = (headers, host = '127.0.0.1') => new Promise((res) => {
  const s = createServer((req, r) => {
    const file = join(root, decodeURIComponent(new URL(req.url, 'http://x').pathname));
    let st;
    try { st = statSync(file); } catch { return r.writeHead(404, headers).end(); }
    r.writeHead(200, { ...headers, 'Content-Type': TYPES[extname(file)] || 'application/octet-stream', 'Content-Length': st.size });
    req.method === 'HEAD' ? r.end() : createReadStream(file).pipe(r);
  });
  s.listen(0, host, () => res(s));
});

const sleep = (ms) => new Promise((r) => setTimeout(r, ms));
const assert = (ok, what) => { if (!ok) throw new Error('FAIL: ' + what); console.log('ok:', what); };
const HELP = (frame = 'document') => `${frame}.getElementById('help').textContent`;
const STATE = `({ coi: crossOriginIsolated, sw: navigator.serviceWorker && navigator.serviceWorker.controller ? navigator.serviceWorker.controller.scriptURL : null, help: ${HELP()} })`;

// counts top-frame and child-frame navigations (initial load + every reload)
async function open(name, url) {
  // --no-sandbox: Ubuntu's apparmor userns restriction aborts the sandbox; every page here is our own file
  const b = await launchBrowser(name, { log: () => {}, flags: ['--no-sandbox'] });
  const navs = { top: 0, child: 0 };
  b.page.on('Page.frameNavigated', (p) => { navs[p.frame.parentId ? 'child' : 'top']++; });
  await b.page.navigate(url, 30000);
  return { ...b, navs };
}

let failed = 0;
const step = async (title, fn) => {
  try { await fn(); } catch (e) { failed++; console.log(title + ':', e.message); }
};

const plain = await serve({});
const P = `http://127.0.0.1:${plain.address().port}`;

await step('1 no headers', async () => {
  const b = await open('nohdr', `${P}/ps2web.html`);
  try {
    const s = await b.page.waitFor(`crossOriginIsolated && ${STATE}`, 30000, 250);
    assert(s.sw.endsWith('disc-sw.js?coi'), 'isolated under disc-sw.js?coi: ' + s.sw);
    assert(await b.page.evaluate(`fetch('ps2web.js').then((r) => r.headers.get('cross-origin-embedder-policy'))`) === 'require-corp', 'worker script gets COEP through the worker');
    assert(!s.help.includes('cross-origin isolation'), 'isolation no longer reported missing: ' + JSON.stringify(s.help));
    await sleep(3000);
    assert(b.navs.top === 2, `one reload (top navigations ${b.navs.top})`);
  } finally { await b.close(); }
});

await step('2 iframe', async () => {
  const b = await open('frame', `${P}/frame.html`);
  try {
    const help = await b.page.waitFor(`(() => { const d = document.querySelector('iframe').contentDocument; return d && d.readyState === 'complete' && ${HELP('d')}.includes('embedded') && ${HELP('d')}; })()`, 30000, 250);
    console.log('   iframe says:', help);
    await sleep(3000);
    assert(b.navs.top === 1 && b.navs.child === 2, `iframe reloaded once, top never (top ${b.navs.top}, child ${b.navs.child})`);
    assert(await b.page.evaluate(`!document.querySelector('iframe').contentWindow.crossOriginIsolated`), 'iframe stays non-isolated under a non-isolated top page');
  } finally { await b.close(); }
});

const withHeaders = await serve(ISOLATION);
await step('3 headers present', async () => {
  const b = await open('hdr', `http://127.0.0.1:${withHeaders.address().port}/ps2web.html`);
  try {
    await sleep(3000);
    const s = await b.page.evaluate(STATE);
    assert(s.coi && s.sw === null && b.navs.top === 1, `isolated at once, no worker, no reload (${JSON.stringify({ ...s, navs: b.navs.top })})`);
  } finally { await b.close(); }
});

const lan = Object.values(networkInterfaces()).flat().find((i) => i.family === 'IPv4' && !i.internal)?.address;
const insecure = lan ? await serve({}, lan) : null;
await step('4 plain http by address', async () => {
  if (!lan) return console.log('   skipped: no non-loopback IPv4');
  const b = await open('http', `http://${lan}:${insecure.address().port}/ps2web.html`);
  try {
    await sleep(3000);
    const s = await b.page.evaluate(STATE);
    console.log('   page says:', s.help);
    assert(!s.coi && s.sw === null && b.navs.top === 1 && s.help.includes('plain http'), 'plain-http message, no worker, no reload');
  } finally { await b.close(); }
});

for (const s of [plain, withHeaders, insecure]) s?.close();
removeDir(root);
console.log(failed ? `${failed} step(s) failed` : 'all steps passed');
process.exit(failed ? 1 : 0);
