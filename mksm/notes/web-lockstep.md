# MKSM 2-player lockstep in the browser: W2, W3 integration, W4 (2026-10-16)

Branch `feat/lockstep-web` (worktree `wt/ls2`), on main 78aa737. The protocol (W3, `web/lockstep.js`, mock-tested) now
drives the real emulator. Two browsers each run the whole game and exchange only pads; a guest drops into the host's
running game at any time, and a desync is repaired by reloading the host's state on both sides.

## Result

| Exit item (plan W2/W4/W6.1/6.2) | Result |
|---|---|
| Identical per-frame hashes, NVIDIA (host) vs Intel iGPU (guest) | **PASS**: 22.4 min with zero desyncs, 1,140 hash windows (36,246 frames), under injected faults (below); 1,388 windows over the whole 28.6-min run |
| Faults during that stretch | 20 % of input packets dropped (19.8 % measured), every disc Range request delayed 20–100 ms and 2 % of them answered 503, a 150 ms main-thread block every 4 s on both pages, a 278-frame pause |
| Host boots, guest drops in at the title, both reach Ko-op gameplay by script (P1 host, P2 guest) | **PASS**: join at frame 1446 (title), Ko-op with Liu Kang (P1) and Kung Lao (P2) from ~6400 to the end (`logs/ls2/long1/guest-*.png`) |
| Forced desync (one EE RAM byte flipped on the guest) | Detected on both sides at the next 32-frame window, naming the part (`ee31MB`); the host resyncs in 1.4 s; hashes identical afterwards |
| Mid-game drop-in | Guest closed at 24.5 min: the host goes solo after 15 s, rejoins the room, a new guest drops into Ko-op gameplay (13.3 MB gzip, 1.4 s) and the hashes match |
| Pause (an input flag) | Both peers consume the same 268–278 paused frames, the game frame stops on both, and both resume together |
| Native build of this branch | `regress.sh` **PASS ×4** (boot, gameplay, Ko-op, Versus); main's and this branch's `ps2run` give identical per-frame `PS2_HASH_LOG` files (Ko-op case from `koop-f6250`: 2,750 frames, every frame; boot → Ko-op with `mksm/inputs/koop.args`: 8,000 frames, every 4th) |

Runs: `logs/ls2/smoke1` (3 min, headful, story.args), `logs/ls2/med1` (9 min, all faults + desync + rejoin),
`logs/ls2/long1` (28.6 min, the run above). Each has `progress.log`, `samples.jsonl` (every 5 s, both peers),
`final.json`, both consoles and screenshots. Headless WebGPU canvases screenshot white (the host's); the guest's
show the game.

## Using it

```sh
mksm/build.sh <iso> --web            # or scripts/build_web.sh mksm; also copies web/lockstep*.js next to ps2web.html
```

- The page needs signalling (`server/signal.mjs` behind the same origin, see `server/README.md`). Locally,
  `scripts/lockstep_env.mjs` provides it (signal.mjs + a cookie-injecting proxy in front of `scripts/serve.py`).
- `ps2web.html?room=new` (or `?room=`) creates a room and starts as the **host (P1)**: the game boots and is
  playable alone at once, and the status bar shows the invite link. `ps2web.html?room=<id>` joins as the **guest
  (P2)**: its emulator boots held at its first vblank until the host's state arrives.
- Keyboard, touch and the first gamepad drive the local player only (the host's port 1, the guest's port 2).
- Test knobs (`web/shell.html`): `lsinput=<args file>` (scripted input in the native `--press`/`--stick` format, each
  page applying its own player's lines by lockstep frame), `lsrtc=<epoch>`, `lsvu=0` (VU1 on the emulation thread;
  both peers must agree, it is in the handshake), `lsdrop=<0..1>`, `lsdelay=<ms>`, `lsstall=<ms>,<every ms>`.
- In lockstep mode the page drops every `PS2_*` URL parameter except the render-only ones (`PS2_SCALE`,
  `PS2_NO_DEINTERLACE`, `PS2_DECODE`, `PS2_GPU_FALLBACK`, `PS2_GPU_LOW_POWER`). `press=` still reaches the host's
  runtime, but it only matters before a guest arrives: the input ring overwrites both pads every frame afterwards.

## What the emulator does in lockstep mode (W2)

`Options::lockstep` is set by the page (`Module.lockstep`) before `main`; natively it is always false and every new
path is behind it (`regress.sh` PASS ×4 on this branch's native build).

| Item | Implementation |
|---|---|
| Shared struct | `ps2web_lockstep()` returns `LockstepShared` (`host/web.cpp`): the 2088-byte W3 layout of `web/lockstep.md` (static_asserts pin every offset, `slow_ms` at 2076), plus a W4 extension (2088–2447, documented in `lockstep.md`). |
| Frame latch | `on_vblank` = `lockstep_vblank`: present the finished frame, publish `emu_frame = N` and notify, hash part `N & 31`, then futex-wait on `seq` until `have[0][N&63] == have[1][N&63] == N`, then apply both pads. |
| Pads | `ps2web_pad*` are ignored while `active`; both ports are plugged from boot. Pressure is derived: 255 for every pressed button, L2/R2 from the struct (255 when the struct says 0). After a state load both pads restart at 255 (pressure is outside the savestate). |
| Pause | If either input of frame N has the pause bit, frame N is consumed at 59.94 Hz without running the game (`paused_frames`). Lockstep frames therefore count vblanks plus paused frames, identically on both peers. |
| Pacing | 59.94 Hz clock + `slow_ms`, the period nudged by at most 0.2 % to keep the audio ring near 80 ms; after a stall longer than a frame the clock restarts (no catch-up burst). Audio-only pacing would absorb `slow_ms`. |
| Stalls | A frame that had to wait for an input (not a hold, not `flags & 1`) counts in `stall_frames`/`stall_ms`. |
| Hash | Part k of 32 per frame (`ps2::hash_part`): 1 MB of EE RAM each, plus EE CPU (named fields) + scratchpad + scheduler/event times on k=0, IOP RAM + CPU on 8, SPU2 RAM on 16, VU0/VU1 code+data, TOP/ITOP, pending XGKICKs and VU1 registers (behind the non-flushing VU-thread fence) on 24. XXH64 of the 32 part hashes is published at frames ≡ 31 mod 32 once the whole window lies after the last load. Never GS memory, never padded structs. Cost: about 1 MB of XXH64 per frame, 3 MB on parts 8 and 16. |
| RTC | `set_rtc_epoch()`: the host pins its epoch at boot (`Module.rtcEpoch`, the page's `Date.now()` or `lsrtc`); the guest gets it with every snapshot. Guest time = epoch + emulated seconds. |
| VU JIT | `vu_jit_web.cpp` `mode()` returns 1 in lockstep (never `check`, which rewrites VU1 memory while it compares). |
| Disc | A cache miss blocks the emulation thread (`chunk_blocking`), retrying a failed fetch forever (backoff 200 ms to 2 s) and publishing `disc_wait` for the overlay. `disc_ready` still issues the prefetch but always answers ready, so the guest never sees an emulated retry (`cdvd.cpp:201`, `cdvdfsv.cpp:47-58`) or a short read. Emulated timing is then the native one. |
| Memory card | `sio2::card_image()`/`set_card_image()`. The host's card travels with every snapshot; the guest installs it as an in-memory session card (`/session`, MEMFS), so the guest's own card in IndexedDB is untouched and session saves persist only on the host. A host without a card gives the guest no card. |
| Config | Handshake `config = {lockstep, vuThread, gs: 'gpu', vuJit: 1}`; build id (wasm size/date) and disc id (size + SHA-256 of the first MB) as in W3. |

## Drop-in and resync (W4)

`web/lockstep-emu.js` (`Session`) sits on `lockstep.js` and the W4 extension:

1. Before `callMain` the page joins the room (`ls.join()`); a guest sets `FLAG_HOLD`, so its emulator stops at its first vblank.
2. Handshake and RTT/D as in W3. Then the host holds its emulator, sends `cmd = snapshot`; the emulator returns from
   the vblank without applying that frame's inputs, saves at the top of the run loop (`save_state(vector, vram=false)`:
   no upscaled VRAM, the load rebuilds it from GS memory) and publishes the bytes plus its card. If the guest is not at
   a safe point (`IOP inside a guest call`, ...) it retries at the next vblank by itself.
3. JS copies state + card out of the heap, gzips them (`CompressionStream`) and streams them on ctl in 64 KB chunks
   (W3 `sendBlob`), while the host's emulator **reloads its own bytes** (`cmd = load`).
4. The guest loads the same bytes (with the card and RTC), both compute a full hash of the loaded state, the host
   compares them (`loaded`/`sync-result`; a mismatch retries the snapshot twice), and both `begin(F+1)`. The held
   emulators run frame F's game logic and wait at vblank F+1 until `begin()` clears the hold after `active=1`.
5. On a hash mismatch both sides see `onDesync` with the names of the differing parts; the host suspends the session
   (no sampling, no disconnect watchdog), holds both emulators and runs steps 2–4 again. More than 3 resyncs a minute
   shows a warning.
6. When the guest leaves, the host goes solo after 15 s (W3) and rejoins the same room, ready for another drop-in.

Overlays: joining / receiving the game (MB so far) / loading; "Loading game data… n s" when the local emulator waits
on a disc fetch; "Waiting for the other player…" when the frame has not advanced for a second; W3's disconnect
countdown.

## Test harness

`scripts/lockstep_emu_test.mjs` runs the whole stack on one laptop:
- `scripts/serve.py` (the build, the disc with Range; new: `--disc-delay ms[,jitter]`, `--disc-fail fraction`,
  `--files dir`), behind `lockstep_env.mjs` (new: `upstream`, so Range requests reach serve.py; `launchBrowser`
  gained `display`/`headless`/`flags`/`env`).
- Two Chromium instances with temp profiles inside one private Xvfb (`:90`–`:98`), muted, headless with that DISPLAY
  by default (`--host-mode/--guest-mode headful` for real pixels; the X11 present path caps NVIDIA at 40–45 fps):
  the host with the NVIDIA PRIME offload env, the guest with `?gpu=low` (Intel). The page's GPU pick is logged.
- The host boots with the input file as `--press` args; the guest joins once the host reaches `--join-at`; both then
  follow the file by lockstep frame. Faults: `--drop`, `--disc-delay`, `--disc-fail`, `--stall`, `--pause-at`,
  `--desync-at` (flips an EE RAM byte on the guest), `--rejoin-at` (closes the guest, opens a new one).
- Input: `mksm/inputs/koop.args` (to frame 20400; `mksm/tools/scripts/gen_koop.py out.args 6400 75000` makes the
  75,000-frame file of the long run), developed natively with the same
  conditions (unformatted card, `PS2_RTC=1767225600`, a pad-2 press so port 2 is plugged from boot): boot prompts,
  quiet window 1106–1799 (title from ~1325), Start 1800, Ko-op 2060, P2 joins 2180, characters 2240/2300, intro
  skipped, two-player gameplay from ~6390 with both pads moving and attacking to frame 75000. Because the blocking
  disc makes browser timing equal to native timing, the native frame numbers work unchanged in the browser.

## Measurements

Laptop: RTX 4050 Laptop (host) + Intel Iris Xe gen-12lp (guest), Chromium 152, loopback WebRTC, both pages headless
with a private Xvfb DISPLAY, VU1 thread on.

| What | Value |
|---|---|
| RTT / D | RTT p50 0.6–1.5 ms on loopback → **D = 2**. A guest that joins while its page is still compiling measures a p95 near 50 ms → D = 4 for that session. |
| fps | Menus up to 60. Ko-op gameplay: **median 26.6 fps, p10 23.8** on both peers, set by the Intel iGPU guest (W0 measured 22–25 headless for the iGPU alone). |
| Stall rate (frames that waited for the other side's input) | Guest (the slower peer): **1.47 %** of frames, 14.5 s in 22.4 min, mostly the injected 150 ms main-thread blocks and lost packets. Host: 49 % of frames, because it waits for the slower guest every frame. Smoke run without faults (both headful, the NVIDIA host then the slower peer): 39 of 8,845 frames (0.44 %). |
| Snapshot | State 40.1 MB + card 8.3 MB (48.3 MB raw, no upscaled VRAM) → **6.5 MB gzip at the title, 13.3 MB in Ko-op gameplay** |
| Snapshot timing | Save 50–200 ms; gzip + ctl transfer 0.8–1.4 s (≈ 10 MB/s, CompressionStream-bound on loopback); host reload 33–68 ms; guest load 23–31 ms (562 ms the first time, when the guest's renderer is cold); whole drop-in **1.0–1.7 s**, guest playing 1.5–3.3 s after its Start click |
| Hash cost | 1 MB of XXH64 per frame (3 MB on 2 frames of 32), the full post-load hash 40 MB once per sync |
| Load-hash check | 7 syncs, 7 matching post-load hashes (host vs guest), never a retry |

## Gaps

- **Not tested off this laptop.** Both peers ran on one machine over loopback WebRTC (RTT ≈ 1 ms, D = 2). The W6.3
  internet test (relay-only ICE, another ISP), coturn and the VPS (W5) are still open, and so is the input-to-present
  latency measurement (W6.4). On a slow uplink the 6–14 MB snapshot takes seconds, during which both games are held.
- **The slower peer sets the pace.** With the Intel iGPU guest both run at its 22–30 fps in gameplay; the NVIDIA host
  spends most of its frames waiting for the guest's input (that is its `stall_frames`). No frame skipping exists.
- **The hash does not cover device registers** (DMAC, VIF, IPU, SIO2, SIF, GS privileged registers): a divergence
  there is caught only once it reaches EE/IOP/SPU2/VU memory or the CPUs. GS memory is excluded on purpose.
- **Guest prefetch of recent disc chunks** (optional in the plan) is not done: a guest that drops in mid-level fetches
  what it needs on demand (blocking both peers briefly, with the overlay).
- **A guest whose host vanished** continues solo and cannot rejoin without reloading the page; only the host returns
  to the room and accepts a new guest. A `peer-left` from signalling is not used to shorten the 15 s solo timeout.
- **Audio** was muted in every test (headless/Xvfb); the 0.2 % audio nudge on the 59.94 Hz clock is untested with a
  real output device.
- **Headless quirk:** in headless Chromium the page's own `requestAdapter` probe sometimes returns null at load
  (status text "software renderer") although the runtime then gets the NVIDIA adapter and presents through WebGPU;
  the runtime now logs the adapter's vendor and architecture. Headful inside Xvfb, Chromium's present check fails on
  the Intel adapter (`vkAllocateMemory`), so that page renders on Intel but copies frames to a 2D canvas (smoke run).
- The VU1 thread layout is pinned through the handshake (`lsvu`); both tests used the VU1 thread.
