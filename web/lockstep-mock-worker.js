// Mock emulator for lockstep-mock.html: the emulator side of the lockstep.md interface, with a toy
// deterministic state (a 64-bit FNV-1a chain over both players' inputs and the game frame) instead of a PS2.
// Started with {buffer: lockstep struct SharedArrayBuffer, ctrl: SharedArrayBuffer} where ctrl Int32 [0] = stop,
// [1] = corrupt the state once (desync test). Posts stats every 250 ms. Blocking waits are fine in a worker.
import { OFF, FLAG_PAUSED, FRAME_MS, INPUT_PAUSE, NEUTRAL, Ring, encodeInput } from './lockstep.js';

const FNV_PRIME = 0x100000001b3n, MASK = (1n << 64n) - 1n;
const neutral = encodeInput(NEUTRAL);

onmessage = ({ data }) => run(new Ring(data.buffer), new Int32Array(data.ctrl));

function run(ring, ctrl) {
  const i32 = ring.i32, idle = new Int32Array(new SharedArrayBuffer(4));
  const ld = (off) => Atomics.load(i32, off >> 2);
  // Wait for the session to start (lockstep.js sets active=1 and bumps seq).
  while (!ld(OFF.ACTIVE) && !ctrl[0]) Atomics.wait(i32, OFF.SEQ >> 2, ld(OFF.SEQ), 100);

  let N = 0, game = 0, state = 0xcbf29ce484222325n, wasPaused = false;
  const s = { frames: 0, stalls: 0, stallMs: 0, maxStallMs: 0, protoWaitMs: 0, pauseFrames: 0, slowFrames: 0, slowMs: 0, soloFrames: 0, pauses: [], hashes: [] };
  const t0 = performance.now();
  let next = t0, lastPost = t0, recent = [];
  const mix = (byte) => { state = ((state ^ BigInt(byte)) * FNV_PRIME) & MASK; };

  while (!ctrl[0]) {
    // vblank N: publish the frame, then wait for both inputs (or run free when active=0).
    Atomics.store(i32, OFF.EMU_FRAME >> 2, N);
    Atomics.notify(i32, OFF.EMU_FRAME >> 2);
    const w0 = performance.now();
    let waited = false, active;
    for (;;) {
      const seq = ld(OFF.SEQ);
      active = ld(OFF.ACTIVE);
      if (!active || (ring.has(0, N) && ring.has(1, N)) || ctrl[0]) break;
      waited = true;
      Atomics.wait(i32, OFF.SEQ >> 2, seq, 250);
    }
    const ms = performance.now() - w0;
    if (waited) {
      if (ld(OFF.FLAGS) & FLAG_PAUSED) s.protoWaitMs += ms; // disconnect wait, not a network stall
      else { s.stalls++; s.stallMs += ms; s.maxStallMs = Math.max(s.maxStallMs, ms); }
    }
    const in0 = active ? ring.get(0, N) : neutral, in1 = active ? ring.get(1, N) : neutral;
    if (!active) s.soloFrames++;

    // Pause is an input flag: either player's bit freezes the game; lockstep frames keep ticking.
    const paused = ((in0[8] | in1[8]) & INPUT_PAUSE) !== 0;
    if (paused !== wasPaused) {
      if (paused) s.pauses.push({ start: N, game });
      else s.pauses[s.pauses.length - 1].end = N;
      wasPaused = paused;
    }
    if (paused) s.pauseFrames++;
    else {
      for (let i = 0; i < 9; i++) mix(in0[i]);
      for (let i = 0; i < 9; i++) mix(in1[i]);
      mix(game & 255); mix((game >> 8) & 255); mix((game >> 16) & 255);
      game++;
    }
    if (ctrl[1]) { state ^= 1n; ctrl[1] = 0; }
    if (N % 32 === 0) {
      ring.dv.setBigUint64(OFF.HASH, state, true);
      Atomics.store(i32, OFF.HASH_FRAME >> 2, N);
      s.hashes.push([N, state.toString(16)]);
    }
    N++;
    s.frames++;

    // Pace at 59.94 Hz plus slow_ms; after a stall longer than a frame, restart the clock (no burst).
    const slow = active ? ld(OFF.SLOW_MS) : 0;
    if (slow) { s.slowFrames++; s.slowMs += slow; }
    next += FRAME_MS + slow;
    const t = performance.now();
    if (next < t - FRAME_MS) next = t;
    else if (next > t) Atomics.wait(idle, 0, 0, next - t);

    recent.push(t);
    while (recent[0] < t - 1000) recent.shift();
    if (t - lastPost >= 250) {
      lastPost = t;
      postMessage({ ...s, frame: N, game, paused, active, fps: recent.length, avgFps: s.frames / ((t - t0) / 1000), elapsed: t - t0 });
      s.hashes = [];
    }
  }
  postMessage({ stopped: true, frame: N });
}
