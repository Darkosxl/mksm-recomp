# MKSM in the browser: W0 single-player web build (2026-10-16)

Branch `feat/web-build` (worktree `wt/web`), which includes main 6d9ec9d (VU1 ahead-of-time compilation). The web build
compiles the 53 AOT VU1 programs too, so the browser almost never needs the VU JIT: "vu1 interpreted" never appeared in any run.

## Exit test

| Item | Result | Evidence |
|---|---|---|
| Boots through logos and menus into a story level | **PASS** (Liu Kang, first story level, f9000) | `media/web-menu.png`, `media/web-story.png` |
| Steady 60 fps | **PASS on NVIDIA**: 60.0 average in gameplay over f5000–14500, lowest 1-second sample 59.6 | table below |
| Presents through WebGPU, no shader errors, no software fallback | **PASS**: `[web] presenting through WebGPU`, adapter `nvidia lovelace` (not a fallback adapter), and no error in any console except `favicon.ico` 404s | `logs/web/runs/*/console.log` |
| Ko-op with 2 pads | **PASS**: two Gamepad API pads; both pick characters, both move and fight | `media/web-koop.png` |
| Memory card save and reload through IDBFS | **PASS**: format and save in the game, close the browser, reopen; the card is still in IndexedDB (same bytes) and the game autoloads it | `media/web-memcard.png` |
| fps with `?PS2_NO_VU_THREAD=1` | **60.0 as well**; the emulation thread is 28% idle instead of 55% | table below |
| LoadExecPS2 restart (Kontent → Mortal Kombat II) | **PASS** after the fix below: `[ee] reboot at frame 5348`, the game restarts | `media/web-mk2-reboot.png` |

Still to do with a person at the desk: a windowed run in desktop Chrome (agents may not open windows), real gamepads, and sound.

## Commands

```sh
mksm/build.sh <your.iso> --web [--jobs 3]     # = scripts/setup.sh --web-only (emsdk 6.0.11 into tools/emsdk) + scripts/build_web.sh mksm
python3 scripts/serve.py build/web-mksm games/mksm/disc.iso    # COOP/COEP + HTTP Range, http://127.0.0.1:8620/
```

- The threads need cross-origin isolation (COOP + COEP). Caddy, host.mjs and serve.py send the headers. A server that
  does not (a plain static host, a header-stripping proxy) still works: the page registers `disc-sw.js?coi`, which adds
  the headers to every same-origin response, and reloads once (`?nocoi` turns that off). What nothing fixes: a plain
  `http://<address>` page (not a secure context, so no SharedArrayBuffer and no WebGPU; `http://localhost` is fine), the
  game inside an iframe or in-app browser, or Chrome with site isolation turned off. The page says which it is.

- Chrome or Edge on Linux needs `--enable-unsafe-webgpu --enable-features=Vulkan`. On a hybrid laptop the page
  requests the `high-performance` adapter, which is the NVIDIA GPU. Add `?gpu=low` to force the iGPU.
- URL parameters (from `web/shell.html`):
  - `press=200:cross,700:p2:square` for scripted input;
  - `PS2_*` sets environment variables, e.g. `PS2_NO_VU_THREAD=1` or `PS2_SCALE=2`;
  - `PS2_DISC_BLOCK=1` makes a disc cache miss block the emulation thread, as lockstep does. Without it a read whose
    bytes are still in flight is retried 1 ms of emulated time later (`[disc] ... not here yet` in the console), so
    guest timing follows the network and two runs differ. A `PS2_HASH_LOG` compared with another run or with the
    desktop build needs it: `g7600.state` with it equals the desktop 600/600 frames.
  - `copy` presents through a 2D canvas copy;
  - `nocard` runs without a memory card.
- The memory card lives in IndexedDB, which belongs to the page **origin** (scheme + host + port). Serving on a different
  port gives an empty card, so the VPS must keep a stable origin. "Export card" and "Import card" move it by hand.

## Fixes

The fork's runtime compiled for wasm32 without a single error or warning. These were the only changes:

1. `runtime/src/system.cpp` `reboot()`, guarded by `#ifdef __EMSCRIPTEN__`:
   - **Problem:** `reboot()` calls `gs::flush_and_wait()` → `gpu::wait_idle()` on the emulation thread. On the web, the
     WebGPU device belongs to the browser main thread, so LoadExecPS2 (Kontent → MK II, the Suffering 2 demo) would
     use it from a worker.
   - **Fix:** when the render queue is active, skip the wait. `boot()` → `gs::reset()` already posts the reset to the
     queue in order.
   - The native build is unchanged, because the preprocessor removes the guarded line.
2. Build scripts (native defaults unchanged):
   - `mksm/build.sh --web`;
   - `scripts/setup.sh --web-only`;
   - `scripts/build_web.sh` reads `PS2_JOBS` (otherwise ninja uses nproc+2 jobs) and `PS2_GENERATED` (so a fresh clone,
     without the `generated/mksm` symlink, works).

Problems the plan expected that did not happen:
- wasm32 `size_t`/`uint64_t` errors: none. Every mixed `std::min`/`std::max` already names its type.
- Tint rejecting `gs.wgsl`: no. The mip code is compute-only, with no texture builtins or uniformity issues.
- The `kMaxDepth = 192` stack: no overflow in 14.5k-frame story runs, the Ko-op level, menus or a reboot. It stays at 192.
- wasm-opt: the `-O3` link takes 37 s with a 1.1 GB peak, so there was no need for `-O1`.
- Native code leaking into the web build: none. CMake returns before netplay, SDL and the window code.

Open items the code review found (harmless today):
- `iop/sif.cpp` uses `std::tolower` without `<cctype>`. It compiles only because libc++'s `<vector>` includes it.
- Every VU1 XGKICK allocates a `std::vector`. With `-pthread`, dlmalloc takes one global lock (perf only).

## Measurements (laptop: RTX 4050 Laptop + Intel Iris Xe, Chromium 152, emsdk 6.0.11)

| What | Value |
|---|---|
| `ps2web.wasm` | 24.65 MB raw, 5.62 MB gzip -9 |
| `ps2web.data` (core.elf + boot.txt) | 4.7 MB raw, 1.7 MB gz |
| `ps2web.js` | 149 KB raw, 37 KB gz |
| Compile, 233 generated units at `-j3` | about 90 s |
| Link (wasm-ld + wasm-opt `-O3`, `--profiling-funcs`) | 37 s, peak 1.1 GB |
| Cold start, new profile, localhost | Start button ready 0.55 s after navigation (fetch + streaming compile; V8 compiles lazily), first emulated frame 1.0 s after Start, steady 60 fps about 2 s after Start |

Fps by run. Each value is a 1-second sample of the page's overlay; "emu idle" is the emulation thread's idle share.

| Run | Menus/FMV f0–4999 | Gameplay f5000–14500 | Emu idle in gameplay | Main (gs) idle in gameplay |
|---|---|---|---|---|
| NVIDIA, headless, VU thread on | 60.0 | **60.0** (min 59.6) | 55% | 65% |
| NVIDIA, headless, `PS2_NO_VU_THREAD=1` | 60.0 | **60.0** (min 58.6) | 28% | 60% |
| Intel iGPU (`gpu=low` path), headless | 60.0 | 22–25 | 77% | 20–30% (GPU-bound) |
| NVIDIA, headful in Xvfb | 60.0 | 40–45 | 60% | 2–9% (X11 present path, see below) |

Notes on the numbers:
- For W2: VU1 on the emulation thread still holds 60 fps with 28% headroom on this laptop, so lockstep can use
  `PS2_NO_VU_THREAD`.
- Headless Chromium uses software compositing, so it never displays a WebGPU canvas: screenshots come out white, but
  rendering and presenting run in full. Headful Chromium in a private Xvfb composites on the NVIDIA GPU and shows the
  frames, but every frame is then copied to the X11 framebuffer on the CPU. That back-pressure fills the main thread
  (gs idle 2–9%) and caps it at 40–45 fps.
- The headless numbers measure the emulator, and the Xvfb ones only show what a pathological display path does. A
  real desktop with GPU compositing has not been measured, because agents may not open windows.

## Remaster (3x6 + 4x pack) frame times, unpaced (2026-10-22)

`PS2_SCALE=3x6&PS2_WEB_UNPACED=1` (no 59.94 Hz clock, a present whose previous one is not on screen yet is drawn but not
shown), `sweep.sh` with `--frame-times`, 30 s per scene, p50/p95 of the frame times after the first 6 s:

| Scene | mean | p50 | p95 |
|---|---|---|---|
| goro | 111.9 | 114.8 | 85.7 |
| foundry | 91.2 | 92.3 | 72.4 |
| raiden | 105.8 | 110.0 | 77.6 |
| koop | 119.2 | 119.6 | 92.4 |
| kahn | 115.2 | 121.1 | 74.3 |
| menu | 142.8 | 143.7 | 65.7 |
| forest | 94.0 | 101.0 | 58.0 |
| fmv | 100.5 | 106.5 | 58.1 |
| nether | 84.0 | 93.4 | 45.4 |
| academy | 72.2 | 90.7 | 37.0 |

- The tail is Chrome's GPU process main thread, which decodes every WebGPU call (a Chrome trace: `drive.mjs --trace`).
  The renderer's main thread blocks in `DawnClientSerializer::GetCommandSpace` when it gets too far ahead.
- What fixed most of it: staging buffers map only what the jobs use. Chrome copies a mapped range whole, in at
  `mapAsync` and out at `unmap`, on that thread, and the buffers were mapped whole (16 MB and more for ~3 MB used). The
  main loop's jobs also now wait for a staging buffer instead of writing through `writeBuffer`, which puts the bytes in
  the command stream that is already behind (35-40% of jobs did). Same build, `PS2_WEB_STAGING=0` (the old way)
  against the default: goro p95 42.9 -> 67.2, foundry 52.2 -> 71.4.
- Tried and dropped: parameters by first instance from a storage buffer (one bind group for all hardware draws, -13%
  fps on goro), one draw for alpha-test pass and fail pixels written alike (flat). Kept: the blend constant set only
  for pipelines that read it, one submit per job.
- academy and nether still wait for staging buffers ~40% of the main thread's time: the GPU process is still the limit.

## Later the same day (2026-10-22)

- **CLUT ring 8192 slots** (was 2048, `PS2_CLUT_SLOTS` for A/B). The game reloads the CLUT before nearly every draw, so
  nether and forest ran past 2048 loads a frame and paid a second submit per frame.
- **Present jobs are hoisted like every other job** (`PS2_PRESENT_HOIST=0` for A/B). The glow chain went from 72 to 36
  passes a frame, and academy's GPU time from 9.6-10.0 to 8.35 ms a frame (`PS2_WEB_GPUPROF=1`). The fps change is
  small: goro gained, and the rest held within noise.
- **`feed_image` writes a page column span at a time and only reads until something differs.** That is 3.5-4x less CPU
  for uploads into the CPU copy. It is exact, checked by a randomised old-vs-new test. fps did not change.
- **The limit now is Chrome's GPU process main thread**, at ~100% of a core. Of its time, ~41% is the NVIDIA Vulkan
  driver, ~29% Chrome/Dawn, ~17% memcpy (staging) and ~10% `clock_gettime`. The renderer waits for staging buffers on
  every job in academy. Next suspect: the alpha-test pass/fail pipeline ping-pong, ~2100 pipeline binds a frame.
- **Clean cooled pairs, p50/p95:** academy 104/71-79, nether 93-95/62-65, goro 116-119/70-95, foundry 87-91/58-70.
  Single full sweeps swing 15-20 p95 fps with the laptop's background load and its 1.6-3.5 GHz clock.
- **Tools:** `sweep.sh` waits for the CPU to cool below 70 C before each run. It logs per-second CPU temperature, clock,
  load and top processes (`sys.txt`) plus the GPU (`gpu.csv`), and `WEB=<dir>` A/Bs two builds. `drive.mjs` sleeps 3 s
  after taking the lock. `PS2_WEB_GPUPROF=1` with `--enable-webgpu-developer-features` gives GPU ms per pass kind.

## How it was tested (`mksm/tools/web/`)

- **`drive.mjs`**: Node's built-in WebSocket over CDP.
  - Runs Chromium headless, or headful inside its own Xvfb.
  - Uses a temporary profile, `--mute-audio`, and keeps `~/.config/chromium-flags.conf` out via `XDG_CONFIG_HOME`.
  - Takes `logs/heavy.lock` and runs under `systemd-run MemoryMax=3G`; its Xvfb takes a free display (`-displayfd`).
  - `--frame-times`, `--trace FRAME:SECONDS`, `--gpu-calls [+]FRAME:SECONDS` for frame-time, GPU-process and call-count work.
  - Optional fake Gamepad API pads, driven by emulated frame (`--pad-script`) or live (`--control` + `ctl.sh`).
  - Saves screenshots, logs the console and samples the overlay every second (`fps.py` summarises it).
- **`sweep.sh <tag> <seconds> <query> <scene>...`**: per scene of `remaster/scenes.tsv`, fps and frame-time percentiles
  (output in `logs/web/runs/sweep-<tag>-<scene>/`).
- **`run.sh <name> "<query>" [drive options]`**: serves the build with `serve.py` and drives it. Output goes to
  `logs/web/runs/<name>/`.
- **Gotchas:**
  - The NVIDIA PRIME Vulkan driver hides the dGPU without `DISPLAY`, and the page then quietly picks the iGPU. That is
    why the driver always starts a private Xvfb.
  - Native frame-timed input scripts do not carry over to the browser. Disc reads are asynchronous HTTP fetches there,
    so boot screens arrive at different frames. For example, native shows the save prompt at f600, while the browser
    still showed the autosave notice at f559–f701, and a cross at f700 that answers the prompt natively did nothing.
    Menus were driven step by step from screenshots (`ctl.sh`).
  - Same root cause as the "disc cache-miss" item in W2: lockstep needs the blocking fetch.
- Runs:
  - `logs/web/runs/story-hl-{vuthread,novuthread}`, `igpu-hl-*` and `story-nv` (Xvfb): story.args inputs through
    `?press=`.
  - `mcA`: fresh card, format, save, Ko-op.
  - `mcB`: same profile and origin; autoload, Kontent → MK II reboot.
