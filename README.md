# mksm-recomp — project branch

Tooling and notes for statically recompiling **Mortal Kombat: Shaolin Monks** (PS2, NTSC-U SLUS_210.87) to native Linux.
The runtime fork lives on branch `mksm` (based on snuri00/ps2-web-recomp, MIT); fixes on `fix/*`.

- `tools/scripts/` — seed scanning, IRX/syscall gap analysis, PCSX2 oracle (PINE), coverage loop, savestate pokes, audio/IPU scanners.
- `tools/ghidra-scripts/` — Ghidra 12.1.4 + ghidra-emotionengine-reloaded headless export/decompile scripts.
- `notes/` — JOURNAL (build log for the thread), BLOCKERS (fix queue), gap analyses, debug facilities, media.

No game data is stored here: you need your own disc image.
