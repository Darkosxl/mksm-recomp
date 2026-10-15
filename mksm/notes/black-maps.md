# Black-screen maps ("dark-fade"): handoff

Date 2026-10-15. Branch `fix/black-maps` (worktree `$P/wt/black`, based on mksm 75cbbde). Status: **emulation bug,
not fixed yet.** Root cause narrowed to the Havok ground raycast. Next step: an instruction-level trace of the MOPP ray VM.

## 1. Symptom and verdict

In the M5 sweep, 16 maps (0C 40 47 48 62 92 93 A2 A4 A5 A6 A7 BC E3 E9 EB) render normally and then the 3D scene goes black.
The HUD, menus and automap keep updating. Per-frame logging of the P1 object (0x5E6B40) shows what happens: the
**ground probe suddenly returns "no ground"** and the player then falls forever. Y grows downward, so on most maps
pos.y climbs towards +2,000,000. The camera follows the player into the void, and distance fog makes the scene black.
On 0x40 the player flies **up** instead. FUN_00165418 has a "no ground → teleport up" rescue for maps 0x40 and 0x96,
and it repeats every frame (about −2000 y per frame).

**Verdict: emulation bug (b).** Evidence:
- **PCSX2 vs recomp, same warp, no input (decisive).** PCSX2 was booted headless from oracle slot 1. New game →
  gameplay on 0x60, then the same pokes `4d8c04=c 4d8c08=1 4b0d9c=0 4fee68=1 4d8bfc=1`. The same in-engine cutscene
  plays, with the same root positions and durations. Afterwards the player **stands on the floor** at y = 2027
  (`g1`, root.y = 2027) and gets into a fight. In the recomp under the same conditions (fresh g7600, no input) the ground
  ray **never** hits on 0x0C (`g0`, root.y = pos.y + 10000), and the player falls as soon as the cutscene ends (frame
  about 9205). Logs: `logs/black/traces/pcsx2_0c_pinewatch.txt` vs `logs/black/traces/n0c2.w`.
- **RAM-transplant experiment.** At frame 8100 of the recomp 0x0C run, EE RAM 0x480000–0x1FF0000 was overwritten with
  PCSX2's eeMemory (`logs/black/pcsx2/pc_0c_eeMemory.bin`, taken with the player standing on the floor). The player is then
  at PCSX2's position on the floor, but the recomp's ground ray **still misses**, and the player falls (g0, vy +7.5/frame).
  So the collision data in RAM is fine and the **computation** is wrong. Only EE RAM was copied, so VU0 state/micro memory
  and the scratchpad are not covered by this experiment (see §6).
- The heap layout is identical between the two emulators (the Havok world 0x71D1B0 and its pointers match word for word).
  The only differences in 0xB1E000–0xB2B000 are 4 padding words (`00000002` vs `454D4102`, "\2AME" garbage). Those
  are uninitialised bytes after a u8 field and are irrelevant.

Ruled out:
- **The invulnerability poke 4FEE68.** 0x40 is identical without it (sweep triage). A real pit death would still show
  HP loss, but here the ground ray fails on a flat floor where PCSX2 hits.
- **The DVD timing model / old binary.** The sweep's v1 binary does the same.
- **The stale-FPU savestate theory** (g7600 saved before 30e6276 DIV.S round-to-nearest). With the fresh
  `logs/font/states/g7600.state` and the HEAD-based build, 12 of 15 maps still go black (40 0C 48 92 A2 A4 A6 A7 BC E3 E9
  EB). 47, 62 and A5 did not in that run, which is trajectory-dependent. 93 was not retested (run killed for audio).
  0x40's trajectory is bit-identical with the old and the fresh state.
- **Warp / missing setup.** PCSX2 with the same warp pokes works.
- **DIV.S rounding.** The sweep binary (chop) and HEAD (nearest) both fail.

Normal players are affected: any ray that misses lets the player fall through solid floor. On 0x0C the very first
room after the cutscene is unplayable.

## 2. Mechanism / call chain (all addresses retail SLUS_210.87)

- Player slots: `0x5E6B40 + i*0x33C0` (14 slots, P1 first). Fields: +0x1C state frame counter, +0x20 previous state,
  +0x24 current state, +0x68 player index (1 = P1), +0x80/84/88 position (Y down), +0xD0/D4/D8 velocity,
  +0x190.. orientation 3×3, **+0x1D0/1D4/1D8 ground probe point** (x, ground height or pos.y+10000, z),
  +0x2C10 flags (0x400 = has ground), +0x1E14 move id.
- Per-frame player loop `FUN_001eb378` → (if `DAT_00642820 == 0`, i.e. not in a cutscene) `FUN_00165c70` →
  `FUN_00165870(0x5CCD50, player)`. That function clears `player+0x2CF0`, then calls vtable +0x44 = `FUN_00164980`, which
  builds a vertical ray in `player+0x2D10` (start) / `+0x2D20` (end) and calls **`FUN_002c0aa8(idx, player+0x2CF0, 4)`**.
  The ray result struct: +0 hit count (`g` in the logs), +0xC contact object, +0x30 hit point (so +0x2D24 = ground height),
  +0x40 normal.
- `FUN_002c0aa8` → `FUN_00326318` (scales by 0.002 into Havok units) → **`FUN_00338d18(0x71D1B0, from, to, hit, info, filter)`**,
  the Havok world castRay → `0x3A1598` (broadphase walk) → `0x338BC8` (per collidable; calls `0x40A6B0` ×2 to transform
  the ray) → shape raycast `0x3A8468` → `0x3CA9D8` (MOPP long-ray query setup: 1/scale, ×2^-16 quantisation, VU0
  sub/mul bc) → **`0x3C9B80` MOPP ray virtual machine** (bytecode walker; recursive). A second shape type is handled by
  `0x3A9088`. The trace of one failing frame is in `logs/black/traces/probe_0c_f9230.txt` (frame 9230; the ground ray is
  the call with `a1 005E9830`).
- The ground height is read by vtable +0x1C = `FUN_00165418`. No hit (count 0, or contact flag 0x100) → returns pos.y + 10000.
  On map 0x40/0x96 with no hit it does an extra up-ray and sets pos.y = hit − 100 (or start − 1100). When nothing is hit,
  that is the endless upward teleport on 0x40.
- Gravity/integration: `FUN_001c3a78` (y += vy·0.5, vy += g).
- How the trigger looks per map. On 0x40/A7 it happens at the end of a long root-motion move: move 0x149, where the probe
  point travels about 2000 units ahead of the player. The ray at the new spot misses, and the player is snapped there with no
  ground. On 0x48/A5 the ray misses about 100–500 units from a good spot during move 0x12E/DF. On 0x0C every ray misses.
  So the failure is position-dependent, which fits a precision/semantics problem inside the MOPP traversal or the
  triangle test, not missing data.

## 3. Repro commands

All runs are headless and silent (`SDL_AUDIODRIVER=dummy`, never `--window`), with one ps2run at a time, MemAvailable
≥ 4000 MB, and wrapped in `systemd-run --user --scope -p MemoryMax=3G -p MemorySwapMax=0`. The scripts handle this.

Recomp, deterministic 0x0C, no input (about 40 s):
```
: > /tmp/empty.args
ARGS=/tmp/empty.args PS2_WATCH="5E6B5C,C;5E6BC0,C;5E6D10,C;5E6C10,C;5E1660,4;5E9830,4;5E9750,4;5E2FC4,4;642820,4" \
  PS2_WATCH_OUT=$P/logs/black/n0c.w PS2_WATCH_FROM=7600 EVERY=100 tools/scripts/black_run.sh n0c 0c 9400
tools/scripts/black_traj.py $P/logs/black/n0c.w 20 9180 9300   # g0 throughout, falls from ~9205
```
The mash repro for all maps (sweep inputs, fresh state) is
`tools/scripts/black_batch.sh fb 40:11200 0c:11200 …`, followed by `black_traj.py --runaway $OUT/fb-<map>.w`.
0x40 falls at frame 8519 (ground lost 8518).

PCSX2 oracle, headless and silent (Xvfb :77, software GS, Null audio; nothing on the user's screen):
```
gcc -O1 -o tools/scripts/xkey tools/scripts/xkey.c -lX11 -lXtst
systemd-run --user --scope -p MemoryMax=3G -p MemorySwapMax=0 -- tools/scripts/pcsx2_headless.sh -state 1 &
tools/scripts/pcsx2_newgame.sh                      # menus → Liu Kang/Normal → gameplay on 0x60 (about 3 min with the cutscene)
python3 tools/scripts/pinewatch.py /tmp/pc_0c.txt 90 4d8c04=c 4d8c08=1 4b0d9c=0 4fee68=1 4d8bfc=1   # warp + 20 Hz log
DISPLAY=:77 import -window root /tmp/shot.png       # screenshot
python3 tools/scripts/pine.py savestate 2           # writes oracle/states/…02.p2s: move it out right away; eeMemory.bin is inside the zip
```
PCSX2's 0x0C state (player on the floor) is saved as `logs/black/pcsx2/pc_0c.p2s` (load it via a slot file name in the oracle
states dir, or use the extracted `pc_0c_eeMemory.bin`).

## 4. Debug facilities added on fix/black-maps (runtime, env-gated, inert by default)

`runtime/src/system.cpp`, run once per vblank (`watch_frame`):
- `PS2_WATCH="addr,len;*ptr+off,len;…"` logs hex words every `PS2_WATCH_EVERY` frames (default 1) from `PS2_WATCH_FROM`
  to `PS2_WATCH_OUT` (default stderr). Each line is `frame | words | words …`. `*ptr+off` dereferences a pointer.
- `PS2_DUMP_AT="f1,f2,…:prefix"` writes raw 32 MB EE RAM to `prefix_<f>.bin` at those frames.
- `PS2_PATCH="frame:image:lo-hi[,lo-hi…]"` copies those byte ranges from a raw RAM image (for example a PCSX2 eeMemory.bin)
  into EE RAM at that frame. This is the RAM-transplant experiment.

`runtime/src/dispatch.cpp`, `probe()`:
- The recompiler can insert `probe(c, pc)` at any guest address: `eerecomp … --probes <file of hex addresses>`.
  With `PS2_PROBE_FRAME=N`, probes log only in frame N, starting at the first hit of `PS2_PROBE_START` (hex pc), for at most
  `PS2_PROBE_COUNT` lines, to `PS2_PROBE_OUT`. Each line has pc, a0–a3, t0, ra, v0, sp, f0 and f12–f14. Without the env
  variable the old behaviour stays (print every probe to stderr).
- Probe build recipe. Probes at every Havok-range function entry: `logs/black/probes2.txt`, made from
  `analysis/exports/functions.txt` for 0x320000–0x49A708, 0x2C0000–0x2C2000 and 0x213000–0x215000, plus 3CA9D8/3CAB10.
  ```
  build/native-mksm/eerecomp $P/ps2-web-recomp/games/mksm/disc/SLUS_210.87 --entries $P/ps2-web-recomp/games/mksm/entries.txt \
     --probes $P/logs/black/probes2.txt --out /tmp/genp
  # copy only the differing units into wt/black/generated/mksm (55 units), ninja -j3; restore the pristine units afterwards
  PS2_PROBE_FRAME=9230 PS2_PROBE_START=2c0aa8 PS2_PROBE_COUNT=400000 PS2_PROBE_OUT=/tmp/p.txt ARGS=/tmp/empty.args \
     tools/scripts/black_run.sh pr0c 0c 9232
  ```
  The same command without `--probes` reproduces generated/mksm byte for byte (checked). Note: after the repo restructure,
  `ps2-web-recomp/generated/mksm` is a symlink to `../mksm/generated`, so copy it with `cp -rL`.

gdb hardware write-watch on a guest RAM word (finds which guest function writes it): `tools/scripts/black_gdbwatch.py`.
For example `WP_ADDR=0x5E6BC4`, which found the pos.y writers `FUN_001c3a78` (gravity) and `FUN_00165418` (0x40 rescue).

## 5. Ranked suspects (all in the castRay → MOPP path)

The MOPP VM 0x3C9B80 instruction mix is ld8/ld16/ld32 bytecode reads, `cvt.s.w` (×21), `c.lt.s` (×20), DIV.S (×6),
ADD/SUB/MUL.S, `lqc2/sqc2/lq/sq`, and VU0 macro `vmulabc`/`vmsubabc`/`vmaddbc`/`vmulbc`/`vsub` (cross products).
The setup 0x3CA9D8 computes `1/scale` with DIV.S and `scale·2^-16` with MUL.S, and uses vsub/vmulbc.
1. **VU0 macro multiply-accumulate (`vmula/vmsuba/vmadd` bc forms).** Rounding/clamping of the accumulate, or ACC handling,
   in `runtime/include/ps2/vu.hpp` / `vu_ops.hpp`. Check ACC and the product→sum order against PCSX2's VU macro
   semantics (product rounded to float before the add? clamp of ±max? sign of zero?).
2. **FPU compare/flags on edge values.** `fp::key` flushes denormals and orders −0 == +0. Vertical rays have dx = dz = 0,
   so 1/0 → ±MAX (sign of the zero matters: −0 gives −MAX) and ±MAX·0 = 0. Check `c.lt.s` with ±MAX and the
   −0/+0 sign after SUB.S (`fp::add` returns +0 for x − x, as the PS2 does, but check `a & b` for −0 + −0).
3. **`cvt.s.w` / `cvt.w.s`.** `from_fixed` goes through double and truncates. PS2 CVT.S.W of |int| > 2^24 rounding, and
   CVT.W.S saturation at exponent ≥ 158.
4. **`fp::add` guard-bit behaviour on subtraction** (keeps 1 guard bit, drops the rest of the shifted operand).
   That is ulp-level only, but MOPP compares quantised integers derived from these values.
5. **128-bit loads/stores (`lq`/`sq`/`lqc2`) with unaligned addresses** (`& ~15`). The MOPP VM keeps its stack of
   intervals in 16-byte slots.
Also not yet excluded: the VU0 micro memory / VU0 register state and the scratchpad, since only EE RAM was transplanted.
The VM uses no `vcallms`, so a micro-memory problem is unlikely.

## 6. Planned next step

Instruction-level trace of one failing ray. Use the deterministic no-input 0x0C run, frame 9230, ground ray `a1 = 0x5E9830`.
1. Put probes on **every instruction address** of 0x3C9B80–0x3CA9D8 and 0x3CA9D8–0x3CAB10 (and 0x3A9088 if the MOPP
   VM returns hits). Extend `probe()` to also dump the touched VF registers/ACC and the FPRs (env-gated).
2. Re-implement the VM's FP/VU steps offline from that trace in a small independent model of PS2 semantics (Python), and
   flag the first instruction whose recomp result disagrees. Alternatively, find the first VM decision that rejects a node
   containing the floor triangle under (−4291, −15155). The floor is at y = 2027, which is 4.054 in Havok units, and the
   ray goes from +0x2D10 to +0x2D20.
3. Cheaper bisection first, each one env-gated in vu.hpp/fpu.hpp: toggle candidate semantics one at a time (VU MADD/MSUB
   with an unrounded product, CVT rounding, −0 handling) and check whether `g` turns 1 on the no-input 0x0C repro
   (40 s per try). Unlike the mash runs this repro is chaos-free, so a flip is meaningful.
4. Fix it generically, then verify 0x0C (player stands after the cutscene), 0x40 (no runaway at 8519), the fresh-state batch,
   and `tools/scripts/regress.sh <ps2run>` (PASS ×4).

Artifacts: `logs/black/` holds the PCSX2 0x0C state and RAM, the probe lists, the failing-frame probe trace, and the watch logs
of the fresh-state batch (`traces/fb-<map>.w`).
