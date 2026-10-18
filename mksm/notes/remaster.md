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
