#!/usr/bin/env node
// Joins a `ps2run --host` session from a headless Chromium using web/netplay.html's test mode and
// prints what the page measured (input -> picture latency, fps, bit rates, audio).
//
//   node scripts/netplay_test.mjs 'http://127.0.0.1:47920/#code=123456&test=30&script=5000:stickl:1500' [shot.png] [--shot-every S]
//
// Needs Node >= 22 (built-in WebSocket) and a Chromium with H.264 (CHROMIUM=path, default /usr/bin/chromium).
// The browser runs headless with a throwaway profile and muted output; nothing opens on the desktop.
import { spawn } from 'node:child_process';
import { mkdtempSync, rmSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';

const args = process.argv.slice(2);
const flag = (name) => { const i = args.indexOf(name); if (i < 0) return null; const v = args[i + 1]; args.splice(i, 2); return v; };
const shotEvery = Number(flag('--shot-every') || 0);
const [url, shot] = args;
if (!url) { console.error('usage: netplay_test.mjs <url> [shot.png] [--shot-every seconds]'); process.exit(2); }
const testSeconds = Number(new URLSearchParams(new URL(url).hash.slice(1)).get('test') || 30);

const profile = mkdtempSync(join(tmpdir(), 'netplay-chromium-'));
const port = 9300 + Math.floor(Math.random() * 600);
const browser = spawn(process.env.CHROMIUM || '/usr/bin/chromium', [
  '--headless=new', `--remote-debugging-port=${port}`, `--user-data-dir=${profile}`, '--no-first-run', '--no-default-browser-check',
  '--autoplay-policy=no-user-gesture-required', '--mute-audio', '--window-size=960,720', 'about:blank',
], { stdio: ['ignore', 'ignore', 'ignore'] });
const cleanup = () => { try { browser.kill('SIGTERM'); } catch (_) {} setTimeout(() => rmSync(profile, { recursive: true, force: true }), 500); };
process.on('exit', cleanup);

const sleep = (ms) => new Promise((r) => setTimeout(r, ms));
let target = null;
for (let i = 0; i < 100 && !target; i++) {
  await sleep(100);
  try { target = (await (await fetch(`http://127.0.0.1:${port}/json/list`)).json()).find((t) => t.type === 'page'); } catch (_) {}
}
if (!target) { console.error('chromium did not start'); process.exit(1); }

const ws = new WebSocket(target.webSocketDebuggerUrl);
await new Promise((resolve, reject) => { ws.onopen = resolve; ws.onerror = reject; });
let nextId = 0;
const pending = new Map();
const send = (method, params = {}) => new Promise((resolve, reject) => {
  const id = ++nextId;
  pending.set(id, { resolve, reject });
  ws.send(JSON.stringify({ id, method, params }));
});
let result = null;
ws.onmessage = (e) => {
  const m = JSON.parse(e.data);
  if (m.id && pending.has(m.id)) {
    const p = pending.get(m.id);
    pending.delete(m.id);
    m.error ? p.reject(new Error(m.error.message)) : p.resolve(m.result);
  } else if (m.method === 'Runtime.consoleAPICalled') {
    const text = m.params.args.map((a) => (a.value !== undefined ? a.value : a.description)).join(' ');
    if (text.startsWith('NETPLAY_RESULT ')) result = JSON.parse(text.slice(15));
    else console.log('[page]', text);
  } else if (m.method === 'Runtime.exceptionThrown') {
    console.log('[page error]', m.params.exceptionDetails.exception?.description || m.params.exceptionDetails.text);
  }
};
const screenshot = async (path) => {
  const { data } = await send('Page.captureScreenshot', { format: 'png' });
  writeFileSync(path, Buffer.from(data, 'base64'));
  console.log('[test] screenshot', path);
};

await send('Runtime.enable');
await send('Page.enable');
await send('Page.navigate', { url });
const start = Date.now();
let shots = 0;
while (!result && Date.now() - start < (testSeconds + 30) * 1000) {
  await sleep(250);
  const t = (Date.now() - start) / 1000;
  if (shot && shotEvery && t >= (shots + 1) * shotEvery) {
    shots++;
    await screenshot(shot.replace(/\.png$/, `-${String(Math.round(t)).padStart(3, '0')}s.png`));
  }
}
if (shot) await screenshot(shot);
if (!result) {
  const state = await send('Runtime.evaluate', { expression: "document.getElementById('status').textContent + ' | ' + ((typeof pc !== 'undefined' && pc) ? pc.connectionState : 'no pc')" });
  console.error('no result; page status:', state.result.value);
  process.exit(1);
}
console.log(JSON.stringify(result, null, 2));
process.exit(0);
