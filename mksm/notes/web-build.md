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

- Chrome or Edge on Linux needs `--enable-unsafe-webgpu --enable-features=Vulkan`. On a hybrid laptop the page
  requests the `high-performance` adapter, which is the NVIDIA GPU. Add `?gpu=low` to force the iGPU.
- URL parameters (from `web/shell.html`):
  - `press=200:cross,700:p2:square` for scripted input;
  - `PS2_*` sets environment variables, e.g. `PS2_NO_VU_THREAD=1` or `PS2_SCALE=2`;
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

## How it was tested (`mksm/tools/web/`)

- **`drive.mjs`**: Node's built-in WebSocket over CDP.
  - Runs Chromium headless, or headful inside its own Xvfb.
  - Uses a temporary profile, `--mute-audio`, and keeps `~/.config/chromium-flags.conf` out via `XDG_CONFIG_HOME`.
  - Takes `logs/heavy.lock` and runs under `systemd-run MemoryMax=8G`.
  - Optional fake Gamepad API pads, driven by emulated frame (`--pad-script`) or live (`--control` + `ctl.sh`).
  - Saves screenshots, logs the console and samples the overlay every second (`fps.py` summarises it).
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
