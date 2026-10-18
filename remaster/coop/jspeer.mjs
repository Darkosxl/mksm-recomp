// The browser's web/lockstep.js (unmodified) in Node as the room's host (P1), with a mock emulator worker, against a
// native ps2run guest (P2). Node's WebSocket carries the invite cookie; no RTCPeerConnection is needed because the
// native peer asks for the relay. usage: node jspeer.mjs <signal> <cookie> <native-hello.json> <room-out> <script> <frames> <report.json>
import { Worker } from 'node:worker_threads';
import { readFileSync, writeFileSync } from 'node:fs';
const { Lockstep, OFF } = await import(new URL('../../web/lockstep.js', import.meta.url));
const [signal, cookieFile, helloFile, roomFile, scriptFile, framesArg, reportFile] = process.argv.slice(2);
const frames = Number(framesArg);
const cookie = readFileSync(cookieFile, 'utf8').trim();
const NodeWS = globalThis.WebSocket;
globalThis.WebSocket = class extends NodeWS { constructor(url) { super(url, { headers: { cookie } }); } };
globalThis.location = new URL(signal); // lockstep.js defaults read location.origin
const native = JSON.parse(readFileSync(helloFile, 'utf8'));

// shell.html parseScript / applyScript
const names = ['select', 'l3', 'r3', 'start', 'up', 'right', 'down', 'left', 'l2', 'r2', 'l1', 'r1', 'triangle', 'circle', 'cross', 'square'];
const script = [];
for (const line of readFileSync(scriptFile, 'utf8').split('\n')) {
  const m = line.trim().match(/^--(press|stick)(2?)\s+(\d+):(?:p([12]):)?([^:\s]+)(?::(\d+))?$/);
  if (!m) continue;
  const e = { frame: Number(m[3]), frames: m[6] ? Number(m[6]) : 6, pad: m[2] === '2' || m[4] === '2' ? 1 : 0, stick: m[1] === 'stick', buttons: 0, lx: 128, ly: 128 };
  if (e.stick) [e.lx, e.ly] = m[5].split(',').map(Number);
  else for (const n of m[5].split('+')) if (names.includes(n)) e.buttons |= 1 << names.indexOf(n);
  script.push(e);
}
const scripted = (frame, port) => {
  let mask = 0;
  for (const e of script) if (e.pad === port && !e.stick && frame >= e.frame && frame < e.frame + e.frames) mask |= e.buttons;
  return mask;
};

const sab = new SharedArrayBuffer(OFF.SIZE), ctrl = new SharedArrayBuffer(8);
const room = await Lockstep.createRoom({ signal, build: native.build });
const ls = new Lockstep({
  buffer: sab, base: 0, room, build: native.build, disc: native.disc, config: native.config, signal, firstFrame: 1,
  overlay: false, pauseOnHidden: false, log: (...a) => console.log('[js]', ...a),
  readPad: (frame) => ({ buttons: scripted(frame, 0), lx: 128, ly: 128, rx: 128, ry: 128, l2: 0, r2: 0 }),
});
const seen = { hashMsgs: 0, hashFrames: [], desyncs: 0, refused: null, pongs: 0 };
const onCtl = ls.onCtl.bind(ls);
ls.onCtl = (data) => {
  if (typeof data === 'string') {
    const m = JSON.parse(data);
    if (m.t === 'hash') { seen.hashMsgs++; seen.hashFrames.push(m.f); seen.hashSample = m; }
  }
  return onCtl(data);
};
ls.onDesync = () => seen.desyncs++;
ls.onRefused = ({ reason }) => { seen.refused = reason; };
const worker = new Worker(new URL('./jsmock.mjs', import.meta.url), { workerData: { sab, ctrl, frames } });
const done = new Promise((resolve) => worker.on('message', resolve));
await ls.join();
writeFileSync(roomFile, room);
console.log('[js] room', room, 'joined as', ls.isHost ? 'host' : 'guest');
const connected = ls.connect().then(() => true, (e) => { console.log('[js] connect failed:', e.message); return false; });
const ok = await Promise.race([connected, new Promise((r) => setTimeout(() => r('timeout'), 60000))]);
let mock = { frames: 0, inputs: [] };
if (ok === true) {
  const result = await Promise.race([done, new Promise((r) => setTimeout(() => r(null), (frames / 30 + 120) * 1000))]);
  if (result) mock = result;
  else console.log('[js] mock emulator did not finish in time');
}
new Int32Array(ctrl)[0] = 1;
// P2 (native) inputs the mock saw vs the native's p2 script lines
let p2Frames = 0, p2Match = 0, p2Active = 0;
for (const [f, ...b] of mock.inputs) {
  const got = b[10] | (b[11] << 8), want = scripted(f, 1);
  p2Frames++;
  if (want) p2Active++;
  if (got === want) p2Match++;
}
const report = { connected: ok, snapshot: ls.snapshot(), mockFrames: mock.frames, mockStalls: mock.stalls, p2Frames, p2Match, p2Active, ...seen };
writeFileSync(reportFile, JSON.stringify(report, null, 1));
console.log('[js] report', JSON.stringify({ ...report, hashFrames: undefined }));
ls.close();
await worker.terminate();
process.exit(0);
