# Blockers / fix queue

## Active
- [ ] **0xCDCDCDCC halt after level-1 load** (frame ~4977, ra 0x20C61C, object @ scratchpad 0x70000400 = 0xCD fill). Debug agent on it. Suspect SPR DMA.

## Queued (after active fix; runtime/src)
- [ ] EE syscall 0x80 `_GetGsDxDyOffset` (caller 0x382F40, boot path): write 0 to all 4 out-pointers, return 0 — `kernel.cpp handle_syscall()`.
- [ ] EE syscall 0x56 `_SetTLBEntry` (crt0 ×4): no-op — `kernel.cpp`.
- [ ] ioman #20 AddDrv / #21 DelDrv return -1 → CDVDSTM self-unloads. Cheapest: `register_hle_module("CDVDSTM")` in `iop/kernel.cpp` (EE sceCdSt* already served by cdvdfsv 0x80000595 m9). Alt: implement AddDrv in `io.cpp:169`.
- [ ] PADMAN IOP hard timer: line-14 handler (0x8E0) never fires — SetTimerMode/SetTimerCompare are no-op stubs in `iop/libs.cpp install_timrman()`. Check pad polling.
- [ ] (only if CDVDSTM goes LLE) cdvdman #40,46,48,49,50,61,114.

## Notes
- Don't move `kSyscallTable` (0x1800): `_InitSys` FindAddress (0x83) loop relies on it being in 0x80000000–0x80080000 search.
- IOPRP300 never loaded; all its libs are HLE. Only rom0 accesses: UDNL (reboot) and ROMVER.

## M6 accuracy queue — IPU (see notes/ipu-gaps.md)
- [ ] IPU_BP / IPU_CTRL.IFC must report true counts while waiting (libmpeg stops/restarts ch4 every frame using them).
- [ ] VDEC invalid code → result 0 + ECD, no stale result.
- [ ] Intra BDEC clamp: verify vs PCSX2 (0..255 vs −256..255).
- [ ] Integer IEEE-1180 IDCT (accuracy over P/B chains, ~10× cheaper).
- Fallback HLE points: player create 0x26f918, per-frame 0x26fbf0, loop 0x26fd8c, filename table 0x4d3a10.

## Done
- [x] SPR DMA ch8/ch9 MADR bit31 (b4def0d) — fixed the 0xCDCDCDCC crash.
- [x] Syscalls 0x56/0x80/0x82, CDVDSTM HLE module, IOP hard timers (merge 24b4f9b). Note: 0x56/0x80 never actually called at runtime.

## Queued (low priority)
- [ ] "DUALSHOCK2 not detected — press ✕" at boot = timing race: game checks pad type at frame ~72, PADMAN's DS2 setup
      (1 SIO2 cmd/vblank, ~60 cmds) finishes ~frame 92. Native boot I/O has no seek latency so the check comes early.
      Real fix: disc/FILEIO latency model (timing fidelity), not a padman hack.

## 2026-10-15 late
- [x] Garbled menu font + square particles: NOT a current bug — fixed by DIV.S round-to-nearest (30e6276). Stale savestates
      (saved before it) carried TEX0 TW/TH computed with chopped DIV.S. States regenerated → logs/states/; stale archived.
- [x] Havok ground raycast misses (black maps): VU0 macro ops never set MAC/status flags; hkBoxShape::castRay reads
      `cfc2 vi17` after `vsub vf0,…` (merge d9b856e). 21/22 maps verified grounded. See notes/black-maps.md §7.
- [x] Map 0xE9 fall at frame 10850 is authentic: the mash walks through collision-less walls past the floor mesh edge
      (z ≈ −56550); PCSX2 falls identically when poked there (black-maps.md §8). So 22/22 match PCSX2.
- [ ] Pi sweep3: all 107 maps on the fixed build (running 2026-10-16, ~9 h). sweep2 (pre-fix): 107/107 no halt, 0 misses.
- [?] Map 0x14 pause-menu panel shows font sheet ~25 frames after L1/R1 tab mashing (game writes that TEX0 itself; needs PCSX2 check).
- [?] Netherrealm loading: "LOADING" baked into art + drawn again on top (ZTST ALWAYS) — likely authentic; needs PCSX2 check.
- [ ] 53 VU1 programs recorded (12 new) — compile with vurecomp (perf, parked).

## 2026-10-16
- [x] COP1 SQRT.S rounds to nearest, RSQRT rounds root then quotient, as PCSX2 does (merge 470bffe).
- [x] FMV gallery 8/8 SFDs, Kontent galleries, LK Shang Tsung + Kintaro fatalities, ending FINAL.SFD → credits → save → title
      (ending reached via the finalvictory flag poke, not a real Kahn kill). notes/endgame.md.
- [x] 0x49 dais fall-through (pre-fix build) is gone on the fixed build (endgame.md 2d addendum).
- [x] Saves round-trip recomp ↔ PCSX2 both ways (notes/pcsx2-crosscheck.md). Options (audio modes, volumes, camera invert,
      persistence) PASS; no widescreen/vibration/remap options exist in retail (notes/finishers-options.md).
- [ ] Not finished by script: each LK/KL Fatality/Multality/Brutality (codes decoded, see finishers-options.md), Shao Kahn kill,
      Kung Lao run, Versus rounds for Kitana/Sub-Zero/Johnny Cage/Reptile/Baraka, Netherrealm LOADING + 0x14 panel vs PCSX2.
- [?] Map 0x60 Raiden tutorial box froze play ~f9600–11000 and × didn't dismiss it (finishers-options.md; not triaged).
- [ ] Human-only: online co-op on a second device / over the internet; feel/timing; full Story playthrough.
