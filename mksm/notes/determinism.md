# Determinism spikes for lockstep netplay (W2 S1–S3)

Branch `feat/lockstep` (worktree `wt/lockstep`), 2026-10-16. Native build, headless and silent, NVIDIA GPU.
Line numbers below are on `feat/lockstep`.

**Result.** Across about 90,000 hashed frames in about 50 runs (story gameplay, mash, Ko-op, Versus and boot), the
emulator is bit-deterministic under host-thread jitter:
- the VU1 thread on or off makes no difference;
- the render thread makes no difference;
- the VU1-thread layout produces the same state as the single-threaded run.

Only two things diverged for real:
- the guest real-time clock;
- state that the savestate format does not carry.

MK:SM never reads GS memory back and never touches VU1 memory from the EE. That makes the two biggest risks in the
plan theoretical for this game.

## Tools added (all inert unless their variable is set)

**`PS2_HASH_LOG=file`** (`system.cpp` `hash_frame()`, called first thing in `vblank()`)
- Writes one line per frame: `frame xxh64`.
- What is hashed:
  - EE CPU (GPRs, FPRs, COP0, ACC, VU0 registers), EE RAM, scratchpad;
  - scheduler (`g_base`, `g_given`, the frame counter, IOP sync point, event ids and times);
  - every device's savestate section, serialized through a hashing `state::Stream` (`hashing()` = save with no side
    effects: no XGKICK flush, no refusal at unsafe points). This covers VU0/VU1 code, data and registers plus any
    pending XGKICK packets, VIF, DMAC, IPU, the GIF status, the IOP CPU and RAM, IOP kernel/modules, SPU2 RAM and
    cores, SIO2/pads, SIF and drive timing;
  - the GS privileged registers the EE can read (CSR, IMR, BUSDIR, SIGLBLID) and the latched INTC bits.
- Excluded: GS local memory and GS rendering state (`gs::state`), the render-thread-owned GIF path state, and host
  pointers.
- With the VU1 thread on, a non-flushing fence (`sync_vu_thread(false)`) waits for it to go idle before VU1 is read.
- Options:
  - `PS2_HASH_LOG_EVERY=N` hashes every Nth frame only.
  - `PS2_HASH_SPLIT=1` appends `section=hash` for 28 sections: eecpu, eeram, spr, sched, eekern, eehw, dmac,
    vif (EE-visible), vifvu (the VIF1 that feeds VU1), vu, ipu, gspriv, gif, iop (CPU+RAM), iopkern, ioplibs, cdvd,
    cdvdfsv, iophw, sio2, spu2 (RAM), spu2v0/1 (voices), spu2c0/1 (core registers), iopio, sif, drive.
- Hash: streaming XXH64 (`runtime/src/hash64.hpp`). It is verified against the reference value for "" and is the same
  on native and wasm32.

**Cost per full hash** (RTX 4050 laptop):

| Mode | Average | Notes |
|---|---|---|
| Single-threaded | 3.4–4.7 ms | max ~150 ms on page-fault outliers; raw XXH64 is 3.8 ms per 32 MB here |
| VU1 thread on | 11.6 ms | most of it is waiting at the fence for the VU1 thread to drain |
| VU1 thread on, with jitter | 19.8 ms | |

A full hash every frame is therefore a debug tool, not a lockstep feature. W4's 1/32 slice per frame is the right
shape. Hash the VU sections only on the frame that also pays the fence.

**`PS2_CENSUS=1`** (`runtime/src/debug.hpp`) prints counts at exit, each with its first and last frame and the top
guest PCs:
- GS downloads (DMA channel 1, VIF1 FIFO reads, qwords, cache hits, waits);
- CSR and other GS privileged reads;
- EE loads and stores to VU1 data and code memory, and EE loads from VU0 memory;
- guest RTC reads;
- SIGNAL/FINISH/LABEL events.

**`PS2_JITTER=seed[,ppm]`** sleeps 0–2 ms on a fraction of host-thread hand-offs (default 2000 ppm). Sites:
1. any queue post: emulation→VU1, emulation→render, VU1→render;
2. each VU1-thread item;
3. each render-thread item;
4. the emulation thread at vblank.

It prints the calls and sleeps per site at exit. Audio has no site: it only flows out of the emulator, through the
SDL queue or the web ring, and nothing comes back except pacing.

**`PS2_THREADS=1`** (`host/main.cpp`) runs headless with the browser's thread layout: render loop on the main
thread, VU1 thread (unless `PS2_NO_VU_THREAD`) and emulation thread, unpaced.

**`PS2_RTC=<unix seconds>`** (`system.cpp` `rtc_time()`) makes the guest clock read that epoch plus emulated
seconds. It is used by `cdvd.cpp` and `cdvdfsv.cpp`.

**`PS2_LOAD_AT=frame:file`** loads a state in-process at that vblank, after a `--save-state` for the same frame. This
is how a lockstep host reloads its own join snapshot.

**Scripts:**
- `mksm/tools/scripts/hashdiff.py a.hash b.hash...` prints the first divergent frame and the first frame each section
  diverges.
- `mksm/tools/scripts/determinism.sh <ps2run> <out> <state|-> <until> [args]` runs the plain/jitter × VU1-on/off/
  single-threaded matrix and diffs it.

## S1: GS readback census

Single-threaded `PS2_CENSUS=1` over the 4 regress cases plus a 20,000-frame `gen_mash.py 7600 20000 4242` from
`g7600`: 35,860 frames. GS signals and RTC reads were counted in the S2 runs: 6,000 boot frames and 7,760 frames
from states.

| Path to the guest | boot 0–6000 | gameplay 6900–10800 | Ko-op 6250–9000 | Versus 2790–6000 | mash 7600–27600 |
|---|---|---|---|---|---|
| GS→host transfers (DMA ch1 `dmac.cpp:180`, VIF1 FIFO `hw.cpp:275`) | 0 | 0 | 0 | 0 | 0 |
| `g_download_cache` hits / render-thread waits (`gs.cpp:742-768`) | 0 | 0 | 0 | 0 | 0 |
| EE loads/stores to VU1 data or code (`memory.cpp:34`) | 0 | 0 | 0 | 0 | 0 |
| EE loads from VU0 memory | 0 | 0 | 0 | 0 | 0 |
| CSR reads (`gs.cpp:818`) | 2.10 G | 2.13 G | 1.45 G | 1.74 G | 11.0 G |
| IMR/BUSDIR/SIGLBLID reads | 1 (frame 0, pc 0x4801A8) | 0 | 0 | 0 | 0 (the 6,000 counted are the hash's own) |
| SIGNAL/FINISH/LABEL raised (`gs.cpp:681`) | 0 | — | 0 | 0 | 0 (frames 7600–9400) |
| Guest RTC reads (`cdvd.cpp:250`, `cdvdfsv.cpp:73`) | 1 (frame 139, EE pc 0x480228) | — | 0 | 0 | 0 |

- **CSR reads** are the game's vsync wait loop, busy-polling CSR at 0x0027477C/0x00274790: about 350k reads per
  frame. The value is `g_csr` plus the FIELD bit, both written on the emulation thread (SIGNAL/FINISH/LABEL come from
  `gif::scan` at submit time, VSYNC from `gs::vblank`), so it is deterministic. In the browser the loop costs CPU,
  not correctness.
- **Display readback** (`copy_frame`/`display`) goes only to the host and the frame tap.

Paths that exist but MK:SM never takes:
- **The download cache** (`gs.cpp:742-768`). A cache hit returns bytes from an earlier transfer, then refreshes
  asynchronously on the render thread, so the result depends on render-thread progress. On GPU it also depends on GPU
  readback timing and vendor.
- **Any EE access to VU1 memory.** It would race the VU1 thread; nothing synchronizes `memory.cpp:34` with it.
- **PATH1 SIGNAL/FINISH/LABEL with the VU1 thread on.** These are silently dropped, because the VU1 thread skips
  `gif::scan` (`gif.cpp:180`). That is a behaviour difference between thread layouts, not a race.

## S2: determinism under thread jitter

Each run uses `PS2_THREADS=1` and `PS2_HASH_SPLIT=1`, with a hash every frame.

| Scenario | Frames | Layout | Jitter (sleep time slept) | vs the no-jitter run of the same layout |
|---|---|---|---|---|
| g7600 + mash | 7601–9400 | VU1 thread | seeds 1 and 2, 2000 ppm (53 s each) | identical |
| g7600 + mash | 7601–9400 | VU1 thread | seed 3, 20000 ppm (531 s, 5× slower) | identical |
| g7600 + mash | 7601–9400 | VU1 thread | seed 4 (after the VIF fix) | identical |
| g7600 + mash | 7601–9400 | no VU1 thread | seeds 1 and 2 (26 s each) | identical |
| koop-f6250 + regress Ko-op input | 6251–9000 | VU1 on / off | seed 1 (78 s / 38 s) | identical |
| vs-f2790 + regress Versus input | 2791–6000 | VU1 thread | seed 1 (170 s) | identical |
| boot + story.args, `PS2_RTC` pinned | 1–6000 | single-thread vs VU1 thread | — | identical |

Every divergence found, in the order they were found:

| # | What diverged | First frame, section | Root cause | Fix |
|---|---|---|---|---|
| 1 | VU1 thread vs no thread vs single-thread, g7600 | 7601, `vif` only (EE RAM, CPU, VU1 memory and everything else equal) | `vif::state` stores the EE-side shadow VIF1 and the VU-side VIF1 separately (`vif.cpp:436`). A state saved without the VU1 thread carries a blank VU-side VIF1 (CYCLE, MASK, ROW and ERR all zero; it was verified by parsing g7600, koop and vs states). The VU1 thread then ran with it until the game rewrote those registers. | **Done:** on load with the VU1 thread on, a blank VU-side VIF1 is seeded from VIF1 (`vif.cpp` `state()`). After the fix, the VU1-thread layout is identical to single-threaded over all 1800 frames. W2 should still pin the thread layout in the handshake. |
| 2 | Two boots in different processes | 1, `eekern` | `pod()` of `Thread` (4+8 padding bytes) and `Alarm` (4) in `kernel.cpp:34-75` hashes heap garbage for threads created after boot. This was a hash artefact; the savestate bytes carry that garbage too. | **Done:** the hash serializes them field by field (`kernel.cpp` `state()`). In W4, never hash padded structs with `pod()`. |
| 3 | Boot at two wall-clock times | 140, `eeram` (then `eecpu` at 535 and every 300 frames) | `sceCdReadClock` is read once, at frame 139, through `std::time` (`cdvd.cpp:250`, `cdvdfsv.cpp:73`) | **Hook done:** `PS2_RTC=epoch` gives epoch + emulated seconds (`system.cpp` `rtc_time()`), and pinned boots are identical. W2: lockstep mode sets the epoch from the session handshake. |

No race was found in the render thread, the VU1 thread, the queues or the download path: the guest never consumes
their results in MK:SM.

## S3: save → load equality

States are saved at F=8000 from g7600 + mash and run to 8600 with a hash every frame, both single-threaded and with
the VU1 thread.
- Every save happens at the top of the run loop right after vblank, and `gs::vblank` has just flushed PATH1. The
  documented risk "a save flushes pending XGKICKs early" (`vu_micro.cpp:1077`) therefore never fired. A message now
  logs it if it ever does.
- Save vs no-save runs: **identical** over 7601–8600.
- The two saves of frame 8000 were byte-identical.

| Comparison (from F+1) | Single-threaded | VU1 thread |
|---|---|---|
| Fresh-process load vs a second fresh-process load | identical | identical |
| In-process reload of the snapshot it just saved (`PS2_LOAD_AT`) vs fresh-process load | identical | identical |
| The saver continuing *without* reloading vs fresh-process load | `eehw` at 8001 and `spu2` (SPU2 RAM) at 8001–8100, then equal; EE/IOP never differ | same |

Why the saver differs from a loader: three pieces of guest-affecting state are outside the savestate format and are
zero in a fresh process.
- `g_intc_latched` (`hw.cpp:32`): the INTC bits the guest reads back before the handler runs.
- `g_history`, the ADPCM interpolator's last 3 samples per voice (`spu2.cpp:94`).
- `g_reverb_io`, the reverb resampler's FIR history (`spu2.cpp:369`). Through the reverb it changes the work area in
  SPU2 RAM for about 100 frames.

The download cache, `g_shadow` and `g_seen_ranges` (`gs.cpp:155-222`) are also unsaved and survived an in-process
load.

**Trivial fixes done:**
- On load, `hw` zeroes `g_intc_latched`.
- `spu2` zeroes `g_history`/`g_reverb_io`.
- `gs` clears the download cache and `g_shadow`/`g_seen_ranges`.

An in-process load is therefore now exactly a fresh-process load (verified above).

**Verdict:** "both peers load the same snapshot" is **sufficient**, and it is also **necessary**. The host must reload
its own snapshot at F as the plan's W4 says; continuing without the reload desyncs SPU2 RAM. To let the host skip the
reload, add those three items to the state as version 4. That is optional.

## Recommendation for the W2 fix list

| Plan risk | Verdict | W2 action |
|---|---|---|
| Async pad writes (`web.cpp:317`) | Not exercised: native input is scripted at vblank | Keep as planned |
| RTC `std::time` | **Confirmed**: one read at boot (frame 139) changes EE RAM | Keep. `rtc_time()` exists; lockstep sets the `PS2_RTC`-equivalent epoch from the handshake |
| Disc retry/zero-fill (`disc_arrived`, `cdvd.cpp`; `disc_ready`, `web.cpp`) | Not testable natively (native reads are always ready). **Confirmed on the web (2026-10-22):** after a `g7600.state` load, single-player pages retried late reads at frames 7627–7631, then differed from the desktop and from each other from frame 7628 | Keep: a cache miss retries 1000 µs later, so guest timing follows the network. Lockstep blocks instead, and so does `PS2_DISC_BLOCK=1` (web-build.md); with it the web hashes equal the desktop's 600/600 |
| GS readback cache | **Downgrade**: 0 downloads over 35,860 frames | Keep only the cheap part: a cache bypass in lockstep mode plus the clear on load (done). No CPU-raster readback needed for MK:SM. |
| VU1 thread race (`memory.cpp:34`, `gif.cpp:180`) | **Downgrade**: 0 EE accesses to VU1, 0 GS signals; the thread is deterministic under jitter and equal to single-threaded (after fix 1) | Keep the VU1 thread for speed and pin `PS2_NO_VU_THREAD` in the handshake. Optional tripwire: in lockstep mode, log once if `count_vu`/`read_image` ever fire. |
| VU JIT vs interpreter per peer | Not tested (native AOT) | Keep: force a single mode. Note that `check_jit` temporarily overwrites VU1 memory (`vu_micro.cpp:809-815`), so check mode must be off in lockstep. |
| Memcard not in the state | — | Keep |
| Env differences | — | Keep, and add `PS2_GS`, `PS2_NO_VU_THREAD` and `PS2_RTC` to the pinned config |

New items:
1. **Unsaved state at load:** done (reset on load and VIF1 seed). W4 must keep "both peers load".
2. **Padding in `pod()` structs** (EE `Thread`/`Alarm`, SPU2 `Voice`, ...): the snapshot bytes are not canonical.
   - The host must ship its bytes (it does).
   - The W4 hash must use the field-wise hashing stream (done for the EE kernel; the other padded pods were stable in
     every test).
3. **Hash cost:** 3.4–12 ms for a full hash, so use W4's 1/32 slice, with the VU sections hashed behind the
   non-flushing fence.
4. **Latent, not used by MK:SM:** PATH1 signals are dropped with the VU1 thread (`gif.cpp:180`), and the download
   cache is timing-dependent. Fix them only if another game needs them.

The plan's table stands, with two downgrades and three additions. Nothing found blocks W3.
