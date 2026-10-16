# Lockstep netplay (W3)

Two browsers each run the full game. Every frame they exchange the local pad, and each emulator runs frame N only once it has both players' inputs for N. If the emulator is deterministic, both sides stay in the same state. There is no rollback. Input is delayed by D frames (2–8) for both players, and a peer that runs ahead waits for the other.

| File | What it is |
|---|---|
| `web/lockstep.js` | The protocol: signalling, WebRTC, handshake, input ring, time sync, pause, disconnect, hash check and blob transfer. One ES module with no dependencies. |
| `web/lockstep-mock.html`, `web/lockstep-mock-worker.js` | A mock emulator that implements the emulator side of the interface below, with a toy state, plus a seeded random pad. |
| `scripts/lockstep_test.mjs`, `scripts/lockstep_env.mjs` | End-to-end test: a local `signal.mjs`, a static server with COOP/COEP that proxies `/ws` and `/turn`, and two headless Chromium instances driven over CDP. |

## Shared struct

The struct is 2088 bytes, little-endian. It lives in a `SharedArrayBuffer`: the wasm heap in the real build, for example `Module._ps2web_lockstep()` next to `ps2web_audio_ring`. Every word is an int32, read and written with `Atomics` unless noted. `JS` means lockstep.js on the page's main thread; `emu` means the emulator thread.

| Off | Field | Writer | Meaning |
|---|---|---|---|
| 0 | `emu_frame` | emu | The frame N the emulator is waiting to run. Starts at -1. The emu does `Atomics.notify` on this word after every store. |
| 4 | `seq` | JS | The futex word. JS increments it and notifies after writing any input or flag. |
| 8 | `delay` | JS | The input delay D. It is informational for the emulator. |
| 12 | `active` | JS | 1 = lockstep on. 0 = the emulator runs free on its local pad path, and the remote slot is neutral. |
| 16 | `flags` | JS | bit0 paused-by-protocol: JS is waiting on the network (lost connection) or a resync. The emulator should not count that wait as a stall and may mute audio. bit1 resync requested: set while a D resync runs (play continues). bit2 **hold** (W4): the emulator stops at its next vblank, or at once if it is waiting for input, runs no frame while the bit is set, and takes snapshot/load commands meanwhile. `begin()` clears it only after `active=1`, so a held emulator never runs a free frame. |
| 20 | `local_slot` | JS | 0 = I am P1 (host), 1 = I am P2 (guest). |
| 24 | `have[2][64]` | JS | The frame number stored in slot `frame & 63` for player p, or -1 when the slot is empty. Index = `p*64 + (f&63)`. |
| 536 | `input[2][64]` | JS | 12 bytes each, at `536 + (p*64 + (f&63))*12`, plain bytes. Layout: `u16 buttons` (PS2 bitmask, active-high, 1 = pressed), then `u8 lx, ly, rx, ry` (128 = centre), `u8 l2, r2` pressure, `u8 flags` (bit0 = pause), then 3 bytes of padding. |
| 2072 | `hash_frame` | emu | The frame of the last published hash. Starts at -1. |
| 2076 | `slow_ms` | JS | 0, 1 or 2: extra milliseconds the emulator adds to each frame's pacing (time sync). This used to be padding. **The brief suggested offset 2084, but that is the high half of `hash`, so the field went into the free padding word instead.** |
| 2080 | `hash` | emu | u64, the state hash for `hash_frame`. Written before `hash_frame`, as a plain 8-byte store. |

Memory ordering: JS writes the 12 input bytes, then does `Atomics.store` of `have[p][f&63] = f`, then `Atomics.add(seq)` and `Atomics.notify(seq)`. An emulator that reads `have` with `Atomics.load` (or `__atomic_load_n(..., SEQ_CST)`) sees the bytes.

### W4 extension (2088–2447)

The real emulator (`host/web.cpp` `LockstepShared`) appends a W4 block after the W3 struct; the mock does not use
it. `web/lockstep-emu.js` drives it.

| Off | Field | Writer | Meaning |
|---|---|---|---|
| 2088 | `cmd` | JS | 1 = snapshot, 2 = load. JS writes the arguments, then `cmd`, then bumps `seq`. The emulator takes the command (writes 0) at a held vblank. |
| 2092 | `held_frame` | emu | The frame the emulator is held at (bit2), else -1. Notified on change. |
| 2096 | `load_ptr`, `load_size`, `load_frame` | JS | The state to load (heap pointer and size) and its lockstep frame F. After the load the emulator's next frame is F+1. |
| 2108 | `card_ptr`, `card_size` | JS | The memory card to install with the load (size 0 = no card), or `card_size = -1` to keep the current one. A guest's session card lives in MEMFS (`/session`), so its own card in IndexedDB stays untouched. |
| 2116 | `snap_state` | emu | 0 idle, 1 snapshot ready, 2 not at a safe point (the emulator retries at the next vblank by itself), 3 loaded, 4 load failed. |
| 2120 | `snap_ptr`, `snap_size`, `snap_frame` | emu | The snapshot (no upscaled VRAM), valid until the load command. |
| 2132 | `card_out_ptr`, `card_out_size` | emu | The memory card at the snapshot (size 0 = no card). |
| 2144 | `load_hash` | emu | u64, the full state hash right after a load; `loaded_frame` (2152) is written after it. |
| 2156 | `disc_wait` | emu | Milliseconds the emulation thread has been blocked on the current disc fetch (0 = not blocked; set after 250 ms). |
| 2160 | `stall_frames`, `stall_ms`, `paused_frames`, `game_frame` | emu | Counters: frames that waited for an input (not counting holds or `flags & 1`), the time spent waiting, consumed paused frames, and the emulated vblank count. |
| 2176 | `rtc` (i64), `rtc_set` | JS | The guest RTC epoch to install with the next load (the host's, from the snapshot metadata). |
| 2192 | `slices[32]` | emu | u64 each: the 32 part hashes behind the last published `hash`, sent with it to name the differing parts on a desync. |

### Emulator side

The mock worker implements exactly this:

```c
// at vblank N (the point where pads are latched)
atomic_store(&s->emu_frame, N); futex_wake(&s->emu_frame);
if (atomic_load(&s->active)) {
  for (;;) {
    int seq = atomic_load(&s->seq);
    if (!atomic_load(&s->active)) break;                       // went solo while we waited
    if (atomic_load(&s->have[0][N & 63]) == N && atomic_load(&s->have[1][N & 63]) == N) break;
    emscripten_futex_wait(&s->seq, seq, 250);                  // stall (count it unless flags & 1)
  }
}
in0 = active ? s->input[0][N & 63] : neutral;  in1 = active ? s->input[1][N & 63] : neutral;
if ((in0.flags | in1.flags) & 1) { /* paused: the game does not run this frame */ }
else apply(in0 -> pad 0, in1 -> pad 1) and run the game frame;
if (N % 32 == 0) { s->hash = state_hash(); atomic_store(&s->hash_frame, N); }
N++;
pace to 59.94 Hz + atomic_load(&s->slow_ms) ms; after a stall longer than a frame, restart the clock (no catch-up burst)
```

- **Pause** is an input bit. If either player's input for frame N has bit0 set, frame N is a paused frame. The emulator consumes it, leaves the game state alone, stays at 60 Hz, and moves on to N+1. Lockstep frames keep ticking and inputs keep flowing, so both peers freeze on the same frame and resume on the same frame. Only the pause bit of a paused frame matters.
- **Frame numbering:** JS assumes the session starts at `firstFrame` (default 0). Before setting `active=1`, it pre-fills frames `F..F+D-1` with neutral input for both players, so frames start at F with no network round trip. For W4 (join at a snapshot of frame F), pass `firstFrame: F+1`.
- **`active=0`** means no waiting. The emulator uses its normal local pad path and keeps the remote player neutral. JS sets it 15 s after packets stop. It never sets it back during the same session, because a rejoin goes through W4.
- **Hash:** the emulator publishes a 64-bit hash of its state every 32 frames. The real emulator hashes part `N & 31` at vblank N (1 MB of EE RAM, plus the EE CPU/scratchpad/events on part 0, IOP RAM/CPU on 8, SPU2 RAM on 16, VU memory/registers on 24; raw memory and named fields only, never GS memory or padded structs) and publishes XXH64 of the 32 part hashes at the frame ending in 31, once the whole window lies after the last load. JS sends `{t:'hash', f, h, x}` on ctl (`x` = the part hashes, `opts.hashExtra`) and compares it with the peer's.

## Protocol (lockstep.js)

1. **Signalling** (`server/README.md`): `GET /turn` gives the ICE servers, then `/ws` with `join {room, build}`. The newcomer, whose `joined.peer` is non-null, sends the offer, and ICE trickles both ways. Two negotiated data channels (no `ondatachannel` race):
   - `in` (id 0): `ordered:false, maxRetransmits:0`, for input packets;
   - `ctl` (id 1): reliable and ordered, for JSON control messages and binary blob chunks.
2. **Handshake** on ctl. Both sides send `{t:'hello', proto, build, disc, config}` and compare them with `JSON.stringify`. On a mismatch, either side sends `{t:'refuse', reason}`, both close, and `connect()` rejects with `refused: <field>`. `disc` is whatever the page passes; `discId(size, firstMB)` builds the plan's "size:sha256(first MB)".
3. **RTT and D:** the host sends 20 pings in a row on ctl and sets `D = clamp(ceil((p95/2 + 8)/16.68) + 1, 2, 8)`. It sends `{t:'start', D, frame, rtt}`, waits rtt/2 so both sides begin together, and starts. Pings repeat every second during play to feed the time sync.
4. **Sampling:** when `emu_frame` becomes N (`Atomics.waitAsync`), JS calls `readPad()` once. It writes the result, with the local pause bit, to every local frame from `localHigh+1` to `N+D`. This makes a change of D need no agreed frame: a larger D fills the gap with the current pad, and a smaller D just samples nothing until N+D passes `localHigh`.
5. **Input packet** on `in`. It is sent once per frame, plus a keepalive after 50 ms of silence, and again every 16 ms while the emulator is stalled. The 20-byte header is `u8 kind=1, u8 count, u8 flags, u8 slot, i32 emu_frame, i32 ack, i32 first, i16 adv*16, u16 seq`. Then come `count × 10` bytes: the input layout above minus the padding, for frames `first..first+count-1`, which are the oldest unacknowledged local inputs, at most 32. `ack` is the highest remote frame received with no gaps. Flags bit0 (**need**) means "I lack your input for my frame N or N+1", and the receiver resends at once, at most once every 4 ms. The receiver writes only frame `remoteHigh+1` onward, in order, and never at or past `emu_frame + 56`, so a slot the emulator has not consumed is never overwritten.
6. **Time sync:** `localAdv = myFrame − (theirFrame + rtt/2/16.68)`, smoothed, and sent as `adv`. `adv = (localAdv − theirAdv)/2` cancels the latency estimate. When `adv > 1`, JS writes `slow_ms` = 1 (or 2 when `adv > 2`); otherwise it writes 0.
7. **Pause:** `setPaused(bool)`, plus `visibilitychange` (a hidden tab pauses itself; `pauseOnHidden:false` turns that off). Pause is a sticky bit in the local inputs (see above). A player can only clear their own pause.
8. **Disconnect:** after 3 s with no packet on `in`, JS sets `flags|=1`, fires `onDisconnect` and shows an overlay with a countdown. If packets come back, it clears the flag, fires `onReconnect` and hides the overlay. At 15 s it sets `active=0`, fires `onSolo`, closes the peer connection and shows "continuing solo" for 3 s.
9. **Resync of D:** `resync()` runs on the host (a guest's call asks the host). It sets `flags|=2`, sends 20 pings, sends `{t:'delay', D, rtt}`, applies D, then clears the flag. Play continues during it.
10. **Blob transfer** (the W4 hook): `sendBlob(bytes, meta)` sends `{t:'blob', id, size, meta}`, then the gzip stream (`CompressionStream`) in 64 KB binary messages on ctl, then `{t:'blob-end', id, zsize}`. It waits for `bufferedamountlow` (threshold 1 MB) whenever more than 4 MB is queued. The receiver pipes the chunks into a `DecompressionStream` and gets `onBlob({id, meta, bytes, zsize, ms, ok})`, or `await recvBlob()`. Only one inbound blob at a time.

ctl messages: `hello`, `refuse`, `ping`/`pong` (`i=-1` for the periodic ones), `start`, `hash {f,h}`, `delay`, `resync-request`, `resync-begin`, `blob`, `blob-end`, and binary blob chunks.

### API

W4 additions used by `lockstep-emu.js`: `join()` joins the signalling room only (the role is known before the
emulator boots); `opts.sync(ls, isHost)` runs between the handshake and the first frame (on the host it returns the
first frame, sent in `start`); `startAt(frame)` / `awaitStart()` restart a session after a resync; `suspend()` stops
sampling, sending and the disconnect watchdog and holds the emulator; `opts.earlyTypes` lists session messages that
may arrive before their `waitCtl`; any other unknown ctl message goes to `onMessage`.

```js
import { Lockstep, OFF, Ring, discId, inputDelay } from './lockstep.js';
const room = await Lockstep.createRoom({ build });           // host page, once; share /play/<room>
const ls = new Lockstep({
  buffer: Module.HEAPU8.buffer, base: Module._ps2web_lockstep(),
  room, build, disc: await discId(size, firstMB), config: { lockstep: 1 },
  readPad: (frame) => ({ buttons, lx, ly, rx, ry, l2, r2 }),  // called once per sampled frame
  signal: location.origin, firstFrame: 0, overlay: true, pauseOnHidden: true, log: console.log,
  test: { dropIn: 0, delayMs: 0 },                            // test hooks only
});
ls.onDesync = ({ frame, local, remote, lastGood }) => {};     // also onStatus, onStart, onHash, onDisconnect,
await ls.connect();                                           // onReconnect, onSolo, onRefused, onResync, onBlob, onPeerLeft
ls.setPaused(true); await ls.resync(); await ls.sendBlob(bytes, meta); ls.snapshot(); ls.close();
```

## Test

```sh
(cd server && npm install)          # ws for signal.mjs
node scripts/lockstep_test.mjs      # about 9 min: --main 300 --loss 60 --lag 30, or --only main,loss,...
```

The test needs at least 3 GB of `MemAvailable` and runs two headless Chromium instances with throwaway profiles (`CHROMIUM=` overrides the binary). Both pages run on the same machine and pair over LAN-IP host candidates.

Results from 2026-10-16 (Chromium 152, one laptop, mock emulator). Stall counts are frames where the emulator had to wait for an input, listed as host / guest.

| Scenario | Result |
|---|---|
| Handshake mismatch (disc) | Both sides refuse. |
| Clean, 300 s | RTT p50 1.2 ms, p95 1.8 ms, D = 2. 18 000 frames at 59.95 fps. 563 hashes identical, 0 desyncs. 0 stalls. |
| One side's state corrupted | `onDesync` fires on both sides at the next hash (frame +32). |
| 20 % of `in` packets dropped, 60 s | 0 desyncs (113 hashes compared), 59.94 fps. Stalls 2.3 % / 0.5 % of frames, 486 / 113 ms per minute, longest 34 ms. |
| 40 ms added to every send | Before resync, D = 2 stalls on 97 % of frames. `resync()` measures p95 88 ms and sets D = 5; stalls drop to 0.2 % / 0.06 %. Reconnecting with the lag gives D = 4 from the handshake (p95 82 ms) and 0 stalls. 0 desyncs. |
| Pause | Host `setPaused` or guest `visibilitychange`: both freeze on the same frame and game frame, and resume on the same frame. Hashes stay identical. |
| 40 MB random blob | sha256 intact. 1.29 s end to end (31 MB/s); gzip is 41.96 MB because the data is random. During the transfer the running game stalled 17 / 11 frames (≈0.5 s). |
| Guest page closed | Overlay after 3.02 s; solo after 15.02 s with `active=0`, 60 fps. |
