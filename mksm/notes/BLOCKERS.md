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
- [ ] **TOP: Havok ground raycast misses in the recomp** (maps 40 0C 48 92 A2 A4 A6 A7 BC E3 E9 EB still black on HEAD + fresh state).
      Emulation bug in MOPP ray walker 0x3C9B80 (PCSX2 RAM copied in → still misses). See notes/black-maps.md; WIP probes fix/black-maps 9f2972f.
- [ ] Re-run sweep visual verdicts on a post-30e6276 binary (Pi rebuild in progress).
- [?] Map 0x14 pause-menu panel shows font sheet ~25 frames after L1/R1 tab mashing (game writes that TEX0 itself; needs PCSX2 check).
- [?] Netherrealm loading: "LOADING" baked into art + drawn again on top (ZTST ALWAYS) — likely authentic; needs PCSX2 check.
- [ ] 53 VU1 programs recorded (12 new) — compile with vurecomp (perf, parked).
