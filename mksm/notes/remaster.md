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
