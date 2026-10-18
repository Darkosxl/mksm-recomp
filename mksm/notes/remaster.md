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

| Scene | Frame | Source | GPU ms/frame (native res) | Browser fps (10 s after capture) | Browser GS-thread busy | Native uncapped fps |
|---|---|---|---|---|---|---|
| menu (3D main menu) | 2400 | boot + story | 0.92 | 60.0 | 7% | 249 |
| charsel | 2700 | boot + story | 0.79 | 59.6 | — | 293 |
| fmv (intro movie) | 4200 | boot + story | 0.04 | 58.2 | — | 328 |
| raiden (in-engine cutscene) | 6200 | boot + story | 6.28 | **43.0** | 86% | 64 |
| goro (gameplay + HUD) | 8000 | g7600 + story | 7.04 | **43.3** | 93% | 77 |
| pause (pause menu) | 7900 | g7600 + start | 0.26 | 60.0 | — | 232 |
| koop (2P fight) | 7000 | boot + koop | 5.06 | 59.4 | 80% | 84 |
| academy (Wu Shi 0x67) | 10000 | warp | 8.27 | 58.0 | — | 65 |
| forest (0x80) | 11000 | warp | 5.21 | 59.9 | 73% | 89 |
| nether (0xA0) | 11400 | warp | 8.44 | **46.6** | 66% | 54 |
| kahn (Foundry 0x49 cutscene) | 10200 | warp | 4.31 | **54.3** | 94% | 83 |
| foundry (0x49 arena) | 14200 | warp | 13.89 | **43.7** | 50% | 47 |

- GPU ms: sum of `PS2_GPU_PROFILE` dispatch times, mean over the 120 frames before the capture (RTX 4050).
- Browser: `stats` overlay, scale 1, Xvfb (on-screen fps there is limited by Xvfb's software compositing and is not
  meaningful). Native uncapped: threaded, headless, 800 frames from the state incl. load, i7-12700H, performance profile.
- **Finding:** in the slow browser scenes the CPU side of the renderer (GS render thread, wasm) is 86–94 % busy while
  the GPU is 24–27 % busy. Natively, nether and foundry also stay under 60 uncapped. The remaster needs renderer
  headroom before it adds work.
- Notes: 0x60 "Wu Shi Map 01" is the new-game map (Goro's Lair opening), so the Academy scene uses 0x67. The Forest's
  large red cloud looks intentional but was never compared with PCSX2. Warp states carry the invulnerability poke.
