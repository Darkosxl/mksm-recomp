# Mortal Kombat: Shaolin Monks — native Linux (static recompilation)

**Private repository. Never make it public:** `mksm/generated/` is the game's own code (Midway's SLUS_210.87) translated to C++.

Layout:
- repo root — the runtime: [ps2-web-recomp](https://github.com/snuri00/ps2-web-recomp) (MIT) plus our fixes (SPR DMA, VU1/VIF
  XGKICK timing, GS mipmaps + texture cache, SPU2 routing/reverb, DVD timing model, IOP timers, P2/analog input,
  LoadExecPS2 reboot, WebRTC online co-op). Upstream is the `origin`/`upstream` remote for pulling their fixes.
- `mksm/generated/` — translated game code (231 units), built from the Ko-op-patched ELF with `mksm/entries.txt` seeds.
- `mksm/build.sh` — one command from your ISO to `build/native-mksm/ps2run`.
- `mksm/tools/scripts/` — analysis + test tooling (seed scan, gap analyses, PCSX2 oracle, coverage loop, regression suite,
  savestate pokes, Ko-op patch). `mksm/tools/ghidra-scripts/` — Ghidra 12.1.4 + EE extension headless scripts.
- `mksm/notes/` — JOURNAL (build log), BLOCKERS (fix queue), gap analyses, debug facilities, sweep results, media.
- `mksm/inputs/` — scripted input for headless runs.

Build: `mksm/build.sh /path/to/your/SLUS-21087.iso` (needs clang 17+/gcc 13+, cmake, ninja, SDL2, Vulkan driver).
Play: `build/native-mksm/ps2run games/mksm/disc/SLUS_210.87 --disc games/mksm/disc.iso --window --memcard games/mksm/card.ps2`.
Online co-op: add `--host`; the friend opens the printed link in a browser (see docs/netplay.md).

No disc data, BIOS or savestates are stored here — you need your own disc image.

The remaster, the browser build, lockstep co-op, the server and the decomp: see the [root README](../README.md).
