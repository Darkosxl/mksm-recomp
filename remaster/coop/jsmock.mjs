// Minimal emulator side of web/lockstep.md for a Node worker: frames from 1 (the native peer holds at its first
// vblank, frame 1), waits for both inputs, records them, paces at 59.94 Hz. No hashes (its state is not a PS2).
import { parentPort, workerData } from 'node:worker_threads';
const { OFF, Ring, FRAME_MS } = await import(new URL('../../web/lockstep.js', import.meta.url));
const ring = new Ring(workerData.sab), i32 = ring.i32, ctrl = new Int32Array(workerData.ctrl), idle = new Int32Array(new SharedArrayBuffer(4));
const ld = (off) => Atomics.load(i32, off >> 2);
while (!ld(OFF.ACTIVE) && !ctrl[0]) Atomics.wait(i32, OFF.SEQ >> 2, ld(OFF.SEQ), 100);
let N = 1, stalls = 0, next = performance.now();
const inputs = [];
while (!ctrl[0] && N <= workerData.frames) {
  Atomics.store(i32, OFF.EMU_FRAME >> 2, N);
  Atomics.notify(i32, OFF.EMU_FRAME >> 2);
  let waited = false;
  for (;;) {
    const seq = ld(OFF.SEQ);
    if (!ld(OFF.ACTIVE) || (ring.has(0, N) && ring.has(1, N)) || ctrl[0]) break;
    waited = true;
    Atomics.wait(i32, OFF.SEQ >> 2, seq, 250);
  }
  if (waited) stalls++;
  if (!ld(OFF.ACTIVE) || ctrl[0]) break;
  inputs.push([N, ...ring.get(0, N), ...ring.get(1, N)]);
  N++;
  next += FRAME_MS + ld(OFF.SLOW_MS);
  const t = performance.now();
  if (next < t - FRAME_MS) next = t;
  else if (next > t) Atomics.wait(idle, 0, 0, next - t);
}
parentPort.postMessage({ frames: N - 1, stalls, inputs });
