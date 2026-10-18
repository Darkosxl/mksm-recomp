# Shaolin Monks Remastered

A full graphics remaster of the recompiled MK:SM, on branch `shaolin-monks-remastered` (worktree `wt/remaster`).
Plan: `~/.claude/plans/make-a-plann-to-velvet-ocean.md`.

## Rules
- **One step at a time.** Each step ends with a full report to Cem (what was done, images and numbers, problems,
  what comes next). The next step starts only after Cem says ok.
- **Never change what the game computes.**
  - Presentation features (resolution, AA, textures, post FX) keep the lockstep/determinism hashes identical with the
    remaster on and off.
  - Features that must patch the game (widescreen) keep hashes identical between co-op peers with the same patch set.
  - Saves stay compatible. One key flips original ↔ remastered.
- **Web first, desktop too.** Both builds share the WebGPU renderer (WGSL; wgpu-native on desktop), so each feature is
  written once. Only WebGPU features that desktop Chrome/Edge ship.
- **No game-derived files in git.** States, screenshots, dumped and upscaled textures live in
  `~/Documents/Twitter/PS2_REA/remaster-data/`. Git gets scripts, hashes and notes only.

## Layout
| What | Where |
|---|---|
| Worktree | `wt/remaster` (links `games/`, `tools/`, `third_party/wgpu-native` to the main checkout) |
| Native build | `wt/remaster/build/native-mksm/ps2run` |
| Data (not in git) | `remaster-data/{states,golden,logs}` |
| Python | `.venv-remaster` (Pillow, numpy) in the project dir |

The main checkout stays on `main`, so `mksm/host.sh` there keeps serving the current game.

## Compute
Laptop RTX 4050 for render work. AWS is CPU only for now: Spot quota 32 vCPU, On-Demand 120 vCPU (us-east-1,
2026-10-16), and the CLI uses root credentials. A scoped IAM user, a budget alarm and a quota raise come before the
first AWS job, with Cem's ok.

## Step log
### Step 0 — setup (2026-10-16)
Branch from `main` f3a80ff, worktree, data dir, venv, these notes, native build check.
- Native build in the worktree: 2 min 37 s at `-j6` under a 3 GB cap. Headless boot with `story.args` and pinned
  `PS2_RTC` reaches the title screen ("PRESS START button") at frame 1600 on the RTX 4050, 1700 frames in 5 s.

### Step 1 — reference scenes (2026-10-18)
Scripts in `remaster/`: `run.sh` (reference run settings), `make_states.sh` (rebuilds every state from the disc,
7.6 min, sidecar JSON with commit, binary sha256 and recipe), `scenes.tsv`, `capture.sh`, `golden.sh` (capture twice
and compare), `web_baseline.sh` (Chromium in a private Xvfb, NVIDIA), `sheet.py`. Hashes and timings:
`remaster/golden.json`. Frames and states: `remaster-data/`.

All 12 scenes replay **bit-identically** (image sha256 and emulator state hash, two runs each).

| Scene | Frame | Source | GPU ms/frame (native res) | Browser fps (10 s after capture) | Browser GS-thread busy | Desktop uncapped fps (3 threads) |
|---|---|---|---|---|---|---|
| menu (3D main menu) | 2400 | boot + story | 0.92 | 60.0 | 7% | 245 |
| charsel | 2700 | boot + story | 0.79 | 59.6 | — | 281 |
| fmv (intro movie) | 4200 | boot + story | 0.04 | 58.2 | — | 309 |
| raiden (in-engine cutscene) | 6200 | boot + story | 6.28 | **43.0** | 86% | 104 |
| goro (gameplay + HUD) | 8000 | g7600 + story | 7.04 | **43.3** | 93% | 133 |
| pause (pause menu) | 7900 | g7600 + start | 0.26 | 60.0 | — | 275 |
| koop (2P fight) | 7000 | boot + koop | 5.06 | 59.4 | 80% | 128 |
| academy (Wu Shi 0x67) | 10000 | warp | 8.27 | 58.0 | — | 124 |
| forest (0x80) | 11000 | warp | 5.21 | 59.9 | 73% | 148 |
| nether (0xA0) | 11400 | warp | 8.44 | **46.6** | 66% | 110 |
| kahn (Foundry 0x49 cutscene) | 10200 | warp | 4.31 | **54.3** | 94% | 137 |
| foundry (0x49 arena) | 14200 | warp | 13.89 | **43.7** | 50% | 81 |

- GPU ms: sum of `PS2_GPU_PROFILE` dispatch times, mean over the 120 frames before the capture (RTX 4050).
- Browser: `stats` overlay, scale 1, Xvfb (on-screen fps there is limited by Xvfb's software compositing and is not
  meaningful). Desktop uncapped: `PS2_THREADS=1` headless (the windowed layout: emulation, VU1 and render threads),
  800 frames from the state incl. load, i7-12700H, performance profile. A first measurement without `PS2_THREADS`
  ran everything on one thread and gave 47–89 fps for the gameplay scenes; that was wrong for the real game.
- **Finding:** in the slow browser scenes the CPU side of the renderer (GS render thread, wasm) is 86–94 % busy while
  the GPU is 24–27 % busy. On the desktop every scene runs above 60 uncapped (Foundry lowest at 81).
- Notes: 0x60 "Wu Shi Map 01" is the new-game map (Goro's Lair opening), so the Academy scene uses 0x67. The Forest's
  large red cloud looks intentional but was never compared with PCSX2. Warp states carry the invulnerability poke.

### Step 2 — frame debugger (2026-10-18)
- `PS2_DRAW_DUMP` / `PS2_DRAW_SKIP` (runtime `gs/drawdbg.*`, debug only, off by default): every GIF packet is tagged
  with its source (DMA/VIF1 EE call site, VU1 microprogram entry + code hash), every draw recorded with GS state,
  screen box, render-thread CPU time and its share of the GPU raster dispatches. `remaster/check.sh`: PASS (12/12
  bit-identical) with the tagger built in.
- `remaster/framedbg.sh <scene> [n]` → `remaster-data/framedbg/<scene>/html/index.html`: frame with hover outlines,
  groups by cost with textures (CPU-renderer run) and isolation images (frame with the group left out), all draws
  with decoded registers. Grouping ignores FBP: the game double-buffers, so FBP alternates every frame.
- PCSX2 check (agent): the Forest's red cloud is real content (same cloud and colours in PCSX2, mean RGB 53,17,9 vs
  52,17,9). Small leads for later: a few single bright-red pixels at the Forest's right edge and sparks/stair-stepped
  edge in the Academy that PCSX2 doesn't show. `remaster-data/pcsx2-forest/side_by_side.png`.
- Character groups (VU1 programs @0000 #672fef39 and @06f0 #ad5f3626) sample 16-level white/alpha T4 textures
  (TFX highlight); their colour comes from vertex colours. World geometry: @36f0 #002c80ed and @0b40 #567ce7d8 (fogged).
  Full-screen sprites @0000 #b27a143b are the lighting/fog overlay passes.

Render-thread cost per frame (native, single-threaded debug run):

| Scene | Draws | Primitives | GIF parse ms | Drawing ms | GPU raster ms |
|---|---|---|---|---|---|
| raiden | 732 | 28,364 | 2.06 | 3.23 | 3.14 |
| goro | 785 | 29,808 | 1.94 | 3.32 | 3.31 |
| koop | 189 | 22,129 | 1.44 | 2.10 | 2.65 |
| academy | 916 | 36,953 | 2.64 | 4.52 | 4.74 |
| forest | 755 | 21,652 | 1.54 | 2.68 | 2.64 |
| nether | 897 | 41,245 | 2.50 | 4.45 | 4.31 |
| kahn | 820 | 22,405 | 2.04 | 3.85 | 2.13 |
| **foundry** | 2,349 | 62,710 | **17.49** | 7.45 | 6.01 |

Leads for step 2b: Foundry's GIF parsing is ~7× the other scenes'. Its largest group (410 draws, 10,266
primitives, character program) changes no pixel of the final frame when left out.

### Decisions after step 2 (2026-10-18, Cem)
- **Desktop first.** The browser is no longer a target for the remaster; step 2b (browser performance) is dropped.
  Performance work goes into the remaster features themselves.
- Target: Cem's laptop (RTX 4050 laptop GPU, i7-12700H) at **1440p, 60 fps**, all 12 scenes. Desktop headroom today:
  Foundry 81 fps uncapped, everything else 104+.
- Look: **faithful first** (sharp, same art and mood, toggle to original), modern lighting as a later optional mode.
- **Online co-op desktop to desktop** is needed: the lockstep netcode moves into the desktop app.

### Step 3 — draw classification (2026-10-18)
- `remaster/classify.py <framedbg dir> remaster/categories.json` sorts every draw group of the 12 framedbg scenes by
  the first matching rule (path, EE call site, VU1 program hash, primitive, blend, texture format, target). Result:
  **0 unclassified groups**, 13 categories. Writes `remaster-data/framedbg/categories/<cat>.png` (isolation masks per
  scene), `overview.png`, `report.json`. Isolation runs covered the top 40–60 groups by primitives per scene, so tiny
  HUD groups show "(no isolation)" — classified, just not masked.
- Every VU1 draw comes from one EE call site (0x241c88); the VU1 microprogram tells the kinds apart.

| Category | Primitives (12 scenes) | Key | Faithful plan | Modern plan (11+) |
|---|---|---|---|---|
| character | 92,996 | VU1 672fef39 ad5f3626 51bd… c77204b7 2f9dff01 95a24514, base pass T8 128², lerp-with-FIX blend | high-res T8 skins (6/7) | per-pixel lighting from VU1 normals |
| character_highlight | 44,496 | same programs, blend 0211 (additive, dest alpha) | keep pass, upscale 16-level masks | replaced by lighting |
| character_shading | 14,022 | same programs, blend 1202 (multiply), T4 512×256 masks | keep pass, smooth masks | replaced by lighting/AO |
| world | 72,078 | VU1 002c80ed 567ce7d8 50bd… (fogged), c372c643 opaque props | upscaled textures, fog at full res | normal/PBR maps, real lights |
| world_alpha | 18,361 | VU1 5f818a97, alpha blend 0101 (foliage, fences, trees, statues) | alpha edges alias at high scale → supersampled alpha/AA | same + denser detail |
| post_fx | 19,120 | VU1 b27a143b sprites, 320×128 offscreen glow chain (FBP 0x8c/0x12c/0x14c) | run the glow chain at scaled res (blocky otherwise) | HDR bloom, tone mapping |
| sky | 3,127 | VU1 8a4e53a2 textured | higher-res sky textures | dynamic sky |
| effects | 2,007 | VU1 c372c643 additive, path-2 sprites and additive strips | upscaled particle textures | soft particles (depth) |
| hud | 1,096 | path 3 EE 0x37e578, path-2 strips (health bars, pause menu, cinematic bars) | high-res HUD, re-anchor for 16:9 (step 5) | same |
| ui | 212 | path-2 triangles (main menu, character select) | high-res UI textures | same |
| shadow | 141 | VU1 8a4e53a2 untextured (blob shadows) | smooth edges at high res | shadow maps |
| clear | 11 | path 3 EE 0x275194 full-screen untextured sprite | — | — |
| movie | 1 | path 3 EE 0x272ccc CT32 sprite | unchanged (Cem: keep movies as they are), 4:3 in 16:9 | unchanged |

Step 4 groundwork — GPU cost per frame by stage (`PS2_GPU_PROFILE`, 60 frames, ms; dispatches per frame in brackets):

| Scene, scale | raster | load_clut | snapshot | decode | upload | total |
|---|---|---|---|---|---|---|
| goro 1× | 4.77 (122) | 1.39 (23) | 0.54 (107) | 0.38 (58) | 0.25 (55) | 7.33 |
| goro 3× | 7.45 | 1.16 | 1.22 | 0.27 | 0.54 | 10.63 |
| foundry 1× | 6.81 (140) | 2.81 (42) | 0.39 (107) | 0.94 (251) | 0.49 (141) | 11.44 |
| foundry 3× | 11.42 | 2.96 | 1.25 | 0.85 | 1.32 | 17.79 |

Desktop fps (PS2_THREADS=1, uncapped) at scale 2 / 3: goro 89 / 74, nether 80 / 64, academy 70 / 63, foundry 48 / 48.
Raster grows only ~1.7× for 9× the pixels → fixed per-dispatch/per-primitive cost dominates, not fill. load_clut
costs ~65 µs per call. The game draws 640×224 fields, so 1440p needs ~3× horizontal and ~6× vertical with today's
square scale.

### Research for later steps (agents, 2026-10-18)
- **Widescreen (step 5):** the only public patch (PCSX2 `SLUS-21087_455DD546.pnach`, OPL CHT; PAL version by
  nemesis2000) sets a dormant aspect variable at **0x4f4b38** (data, 1.0f → 0.75f). Nothing writes it; projection
  (0x249e38) and frustum culling (0x236ae0, width 640/aspect) already honour it (Hor+). `is_widescreen()` 0x36f848
  also feeds two camera/gameplay sites (0x14cc58, 0x14e47c) → simulation changes → co-op peers must match, hashes
  differ on/off. Other writes are code: 0x322f2c (cinematic bar height 88 → 1), 0x272210/0x272498 (FMV height 598).
  Apply as a host-side `st32` before boot behind a flag; skip the FMV patch (pillarbox movies); bars optional. HUD is
  not handled by any patch (needs an x-scale of 2D draws about the centre). Host must stretch to 16:9
  (window.cpp:237, gpu.cpp:935, :1799). Unverified: FOV values from unscaled 320 (0x663444/8) may pop edge culling.
- **Native co-op (step 9):** protocol fully mapped (`web/lockstep.js`, `lockstep-emu.js`, `server/signal.mjs`).
  Plan: move the emulator side of `host/web.cpp` into a portable `host/lockstep_emu.cpp`, port the JS (~2–2.5k lines
  C++) on libdatachannel (already found by CMake, 0.24.5). Blockers to solve: `rtc::WebSocket` can't send the
  `__Host-mksm` cookie (accept it via subprotocol/query, or use libcurl WS); web `build` id (hash of wasm headers)
  and `config.vuJit` must become portable values. **First job: native vs browser hash comparison** (never done);
  build with `-ffp-contract=off`, hard-code the IPU IDCT cos table.

### Step 4 — resolution (2026-10-18)
- **Fields:** the game draws a 640×224 field every frame at the same XYOFFSET (no half-line jitter between fields),
  so there is no hidden 448-line detail to weave. A true 1440p image needs twice as many samples down as across.
- **`PS2_SCALE=AxB`** (gpu.cpp, gs.wgsl): A samples across (1–3), B down (1–6) per GS pixel; sample k = sub_y·A +
  sub_x, sample 0 stays the native one. Display output is A per pixel both ways, so `3x6` turns a 224-line field into
  a full 1920×1344 frame (fills a 1440p 4:3 viewport ~1:1) and `2x4` into 1280×896. With B ≠ A the field blend is
  off (it would only ghost motion). Square scales are unchanged: `check.sh` PASS 12/12 at 1× and at 3×
  (`golden-s3.json`, new; replay-identical 12/12).
- **load_clut** in parallel (one workgroup per load, value = newest load covering the entry): bit-identical,
  Foundry 3× 55 → 60 fps (Performance profile).
- Tried and dropped: prefetching tile lists into workgroup memory. +4% at 1×, −14% at 3× (short lists; barriers
  cost more than they save); 3×6 has even shorter lists.
- `remaster/perf.sh`: fps over the 600 frames after each capture frame, 3-thread layout (`PS2_FPS` timer).

Desktop fps, Performance profile, before step-4 changes:

| Scene | 1× | 2× | 3× |
|---|---|---|---|
| menu / charsel / fmv / pause | 311 / 347 / 385 / 356 | 298 / 341 / 370 / 367 | 268 / 339 / 351 / 329 |
| raiden | 117 | 108 | 83 |
| goro | 143 | 135 | 93 |
| koop | 139 | 143 | 106 |
| academy | 141 | 106 | 80 |
| forest | 179 | 151 | 116 |
| nether | 125 | 95 | 76 |
| kahn | 156 | 137 | 97 |
| foundry | 88 | 67 | 56 |

After step 4, **Balanced profile** (Cem asked for quieter fans; lower clocks than above, compare within a table only):

| Scene | 3× | 2×4 | 3×6 |
|---|---|---|---|
| foundry | 43.6 | 43.9 | 39.1 |
| nether | 60.4 | 60.7 | 50.6 |
| academy | 69.4 | 69.5 | 55.8 |
| raiden | 68.0 | 67.3 | 53.1 |
| goro | 83.4 | 82.7 | 59.9 |

Where the time goes:
- GPU, Foundry 3×6 (`PS2_GPU_PROFILE`, Balanced): raster 21 ms of 30 ms. Inside raster: list walk + setup ~4.7,
  edge/interpolation/per-pixel logic ~7.8, texture sampling ~6, frame/Z reads and writes ~2.7 (measured by skipping
  each part). No single hotspot: 3×6 at 60 fps everywhere needs a deeper raster rework.
- CPU, Foundry (gprofng, 3 threads): render thread 1.6 s, EE thread 10.1 s (part of it spinning on GS CSR reads),
  VU1 thread 10.0 s (VIF unpack, VU1 microprograms, posting GIF packets). Foundry is CPU-bound on the VU1/EE side,
  which is why it sits at ~44 fps (Balanced) at any scale.
- Open perf items (own track, not blocking the remaster features): VU1 thread (hottest program vu1_C824C29B 2 s,
  Ring::post 1.1 s, vif::run 0.9 s self), EE CSR polling, raster per-sample cost at 3×6.

### Step 5 — widescreen (2026-10-18)
Usage: `PS2_PNACH=mksm/patches/widescreen.pnach PS2_ASPECT=16:9 PS2_SCALE=4x6` (4x6 renders 2560×1344, ~1:1 at
1440p 16:9; 2x4 is the cheaper choice).
- **Game patch** — `PS2_PNACH=file[,file]` (runtime, generic): PCSX2-style `patch=1,EE,addr,word,value` lines written
  to EE RAM at every vblank, as PCSX2 does. `mksm/patches/widescreen.pnach` sets the game's own aspect variable
  0x4f4b38 to 0.75 (from PCSX2's SLUS-21087 patch): projection and frustum culling widen (Hor+). Works after loading a
  savestate too. Changes game state: Goro widescreen state hash a0a79cca16735bee (same across runs and builds) vs
  db151828af4addc7 at 4:3 → co-op peers must share the patch set (step 9: part of the session config).
- **Display** — `PS2_ASPECT=16:9` (presentation): present viewport and window size follow it.
- **HUD** (presentation, gs.cpp `hud_squeeze`): with a wider aspect, path 2/3 primitives drawn with depth test ALWAYS
  and narrower than the frame are squeezed to their 4:3 width around the centre — HUD, text, pause menu, main-menu
  and character-select UI keep their shape (HUD sits where it was on a 4:3 TV). Full-width ones stay (clears,
  cinematic bars). Textured full-width path-3 sprites (movie frames, full-screen art) keep 4:3 (pillarboxed). 3D
  particles on path 2 use ZTST GREATER/GEQUAL and are not touched.
- Not applied from the community patch: its code writes (cinematic bar height, FMV height) — code is recompiled.
- Modern-mode option for later: HUD anchored to the screen edges (left/right elements).
- Movies (pre-rendered cutscenes) stay exactly as they are — no upscaling or cropping (Cem, 2026-10-18).
- `check.sh` with widescreen off: PASS 12/12 at 1× and 3×.

### Fix — dark specks (2026-10-18, before step 6)
Isolated dark/bright dots on surfaces (Koop floor, Academy "sparks"; PCSX2 shows none). Cause (agent trace): colour
was interpolated with absolute float weights, so three vertices of alpha 128 gave 127.99999 → 127 in ~5% of pixels;
the world passes test alpha ≥ 0x80 with AFAIL = RGB only, so those pixels skipped their Z write and a hidden surface
drawn later showed through. Fix in both renderers (raster.cpp lerp3, gs.wgsl shade_at): colour and fog as one vertex
plus deltas, as PCSX2 does — exact for equal vertex values. Re-baselined `golden.json` and `golden-s3.json`: state
hashes 12/12 unchanged, images changed in 11/12 (all but fmv), replay-identical 12/12.
