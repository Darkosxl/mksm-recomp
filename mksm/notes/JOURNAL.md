# MK: Shaolin Monks → native Linux (static recomp) — journal

## 2026-10-15 — M0/M1 kickoff
- Disc: SLUS_210.87 (NTSC-U, v1.02). Stripped C++ ELF, 3.6 MB .text, VU1 microcode in .vutext, Havok + CRI ADX + Sofdec.
- Base: snuri00/ps2-web-recomp (MIT). Analysis: Ghidra 12.1.4 + ghidra-emotionengine-reloaded; REA MCP on a MIPS32-flagged copy.
- No runtime-loaded EE code on disc (only LoadExecPS2 → MK2 arcade emu / Suffering demo) → one static recomp covers the game.
- Ghidra-free seed scan: 8,863 jal targets, 16,537 prologue-sweep starts (98% jal recall), 1,056 C++ EH landing pads, 14,400 data→code pointers → 20,160 seeds.

## 2026-10-15 — M0 done, M2 first build
- ps2-web-recomp @ ebf86d3 builds on Arch with clang 22 after one fix (cxx.sh died under `set -e` when no `clang++-N` exists).
- eerecomp's own analysis already covers 934,756 instructions = 3651/3689 KiB of .text, 75K entry labels. Prologue-sweep seeds add +2.1K instrs.
- 231 C++ units (55 MB source) → 55 MB `ps2run` in 160 s at -j8; ~200 MB RAM per compile job.
- PCSX2 oracle: IOP reboots with IOPRP300, loads SIO2MAN→PADMAN→LIBSD→SDRDRV→MCMAN→MCSERV→CDVDSTM→CRI_ADXI→SNDFI from cdrom0:\IOP. Banners: CRI ADX Driver 9.52, SNDF 2.24b.

## 2026-10-15 — M2: FIRST BOOT (native, headless)
- Run 1 (no input): 1800 frames in 10 s, zero halts, zero missing IOP imports, zero unhandled syscalls. Game draws its own
  "DUALSHOCK®2 not detected — press ✕" screen correctly (1.37M GS prims, VU1 + VIF1 MPG uploads working).
- Run 2 (scripted ✕/START): Midway Sofdec logo (IPU MPEG-2 decode works: 473K BDEC, 2.3M VDEC, CSC), memcard check,
  copyright, title "Press Start", brightness screen, 3D main menu, Character Select → Difficulty, story intro FMV. 5400 frames, no halt.
- No game-specific code yet. Zero lines changed in the runtime for MK:SM.

## 2026-10-15 — M3: audio + movies + menus confirmed; first real bug
- Audio works out of the box: CRI_ADXI + LIBSD + SDRDRV + SNDFI run LLE on the emulated IOP into the LLE SPU2 → 48 kHz stereo, non-silent through logo/menus/FMV.
- 23 VU1 microprograms recorded by end of front end. Character select renders all 3D fighters.
- Clip: notes/media/m3-frontend-native.mp4 (74 s, native build, scripted input).
- First blocker: after skipping the story FMV, LOADING bar fills → black → halt at frame ~4977:
  `[ee] no translated code at 0xCDCDCDCC (ra 0x0020C61C)`. Task-kill routine at 0x20c5d8 calls a cleanup callback
  from an object at 0x70000400 (scratchpad!) whose bytes are 0xCD fill. Suspect SPR DMA semantics. Debug agent on it.

## 2026-10-15 — M4: IN GAMEPLAY
- Root cause of the 0xCDCDCDCC crash: runtime DMA bug. fromSPR/toSPR (ch8/ch9) treated MADR bit31 as "scratchpad" like other
  channels; the game's particle update passes (ptr&0x0FFFFFFF)|0x80000000, so scratchpad got copied onto itself → a float read as
  an object pointer → call through 0xCDCD fill. Fix b4def0d (dmac.cpp, +18/-3), generic, matches PCSX2.
- Verified: from a frame-6900 state, 3,900 frames, no halt: Raiden cutscene, Liu Kang gameplay with HUD, enemies, death →
  "GAME OVER – Sheeva, Sheeva! Sheeva!" → Continue → loading tip → level reload → next cutscene.
- 41 VU1 programs recorded so far. Visual bug: opaque white light-shaft quads (GS blend/alpha?) → M6.
- Total game-specific code so far: still zero. Runtime fixes: 1 (SPR DMA).
- Coverage loop (tools/scripts/explore_from.sh) from gameplay state: 23,100 frames of seeded-random mashing → 0 misses,
  0 unmapped accesses, 0 unhandled syscalls/imports. Static analysis (eerecomp + prologue seeds) is holding. VU1 programs: 41.

## 2026-10-15 — accuracy wave merged (mksm @ 90647f6, private repo github.com/Darkosxl/mksm-recomp)
- GS "white light shafts" were NOT a GS bug: VU1 program 0x7F8 writes ST/XYZ, then the game streams RGBA into the
  same GIF packet via a masked VIF1 UNPACK *after* MSCNT. We XGKICKed synchronously → every batch used the previous
  batch's vertex colours. Fix: defer XGKICK packets until the VIF syncs (5473763). Fixed god rays, lighting, black floor tris.
  Before/after: notes/media/m6-lightshaft-before.png / -after.png.
- SPU2: real routing (VMIX/MMIX/AVOL/MVOL), ADMA stop, STATX state machine, reverb (the game programs "Studio Large"
  exactly), Gaussian interpolation, full one-shots. Clips: notes/media/audio-*.ogg.
- Syscalls/IOP: 0x56/0x80/0x82, CDVDSTM as HLE module, real IOP hard timers.
- Debug facilities found statically (notes/debug-facilities.md): warp to any of 108 maps, P1 invulnerability, TCRF debug menu,
  unlock flags — all data pokes, tested in the recomp via savestate patching (tools/scripts/poke_state.py).
- User priority: playable first, performance later (15–25 fps windowed while agents were hammering the CPU).

## 2026-10-15 — after reboot
- User reports windowed fps is very good once the machine isn't saturated: the earlier 15–25 fps was CPU/RAM contention
  (5 agents building + headless runs, 4 GB tmpfs /tmp, swap thrash → OOM killed everything). /tmp moved to disk.
- Boot DUALSHOCK race fixed with a DVD drive timing model (0b2ef98). Raspberry Pi 5 (16 GB) added as headless test runner
  (software GS, ~20 fps headless). 108-map sweep: bosses + level starts all clean (0 halts/misses).
- New track: online co-op via host-authoritative streaming (WebRTC, browser client, P2 input over DataChannel).

## 2026-10-15 — M5 sweep: every map loads and plays
- 107 maps (all valid ids), 125 runs, 529k emulated frames, warp + mash: 0 crashes/halts/timeouts, 0 missing code,
  0 unmapped/unhandled accesses, 0 new coverage misses. Static coverage is complete for everything reachable.
- 53 distinct VU1 microprograms seen (12 new beyond the front-end/level-1 set).
- Open: 16 maps fade the 3D scene to black mid-run (HUD alive) → agent on it; GS texture mixups (font glyphs, map panel shows
  font sheet, particles as squares, double LOADING) → font agent. Goro black screen = pit death blocked by the no-damage poke (benign).
- Disc finding: the ISO's ELF is a modded unlock-all build (CRC 5C8A2D7F, retail 455DD546) whose patch breaks Ko-op even on
  hardware; we apply a documented 1-byte fix (tools/scripts/patch_koop.py). Online co-op (WebRTC, browser P2) merged.

## 2026-10-15 — end of day 1
- Repo restructured: private github.com/Darkosxl/mksm-recomp `main` = runtime + `mksm/` (generated game C++, build.sh from ISO,
  tooling, notes). build.sh verified: ISO → ps2run → boots.
- Font garble / square particles: already fixed by DIV.S round-to-nearest; stale savestates were replaying old FPU results.
  States regenerated (logs/states), stale ones archived.
- Multiplayer: local Versus + Ko-op verified (Ko-op needs a 1-byte fix of the modded ELF); online co-op works on loopback
  (browser joins as P2 over WebRTC, ~22 ms input→screen).
- OPEN, top priority: on ~12 maps Havok's ground raycast finds no floor in the recomp (PCSX2 finds it, same RAM) → player
  falls into the void. Emulation bug inside the MOPP ray walker (0x3C9B80); suspects VU0 multiply-accumulate ops,
  FPU divide/compare of zero directions, cvt.s.w. Handoff: mksm/notes/black-maps.md, WIP probes on fix/black-maps (9f2972f).
- Pi: visual re-sweep of all 107 maps on HEAD running overnight (~/mksm/runs/sweep2).
