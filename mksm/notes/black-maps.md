# Black-screen maps ("dark-fade")

Branch `fix/black-maps` (worktree `$P/wt/black`). Status: **fixed** (2026-10-16). Emulation bug: VU0 macro-mode
instructions never updated the MAC/status flags, so Havok's box raycast read stale flags and missed box-shaped floors.
§7 has the root cause and the verification. §1–§4 are the day-1 investigation, kept for the method and the tools.

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
- `PS2_PROBE_DUMP="pc:first:count:prefix"` (together with `PS2_PROBE_FRAME`) writes `prefix_<hit>.bin` at hits first..first+count−1
  of probe `pc` in that frame: a 32-byte header (magic `PROB`, sizeof(Cpu), offsets of f/vf/acc/vi/q, pc), then the raw `Cpu`,
  then 32 MB of EE RAM. `tools/scripts/probe_replay.cpp` loads one dump, links `libps2game.a` + `libps2runtime.a`,
  dispatches from that pc and prints the result: a whole guest call replayed offline in about 1 s, which can be run under gdb.
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

## 5. Suspects that were ruled out on day 2

Env toggles of FP semantics inside the MOPP VM (unit with alternative ADD/MUL/CVT/−0 handling, `HZ_MODE` in an offline
harness) changed nothing: the MOPP VM was never the problem. The offline harness replays one world castRay from a probe
dump (`PS2_PROBE_DUMP`) through the real generated code; tracing its indirect calls showed that the floor under the 0x0C
spawn point is broadphase node 18. That is collidable 0xB326BC → shape 0xB32840, an **hkTransformShape** (owner 0xB2B090, the
same object PCSX2 reports as the hit) whose child 0xB32740 is an **hkBoxShape**, ray-tested by 0x3A45F8. The MOPP meshes
were tested correctly and simply contain no floor at that spot.

## 6. (superseded) The day-1 plan was an instruction trace of the MOPP VM. The harness above replaced it.

Artifacts: `logs/black/` holds the PCSX2 0x0C state and RAM, the probe lists, the failing-frame probe trace, and the watch logs
of the fresh-state batch (`traces/fb-<map>.w`).

## 7. Root cause and fix

**Root cause.** `hkBoxShape::castRay` (0x3A45F8, unit_00A9) computes per-axis "which side of the box" masks from the VU0
MAC flags:
```
vsub.xyzw vf0, vf1, vf3      # result discarded (vf0 is read-only); only the flags matter
cfc2      v1, vi17           # MAC flags
sra v0, v1, 4 ; or v0, v0, v1 ; andi v0, v0, 0xF   # per-lane sign|zero mask
```
A second Havok function at 0x3A4880 does the same with `& 0xF0`. Our macro-mode ops in `runtime/include/ps2/vu.hpp`
(`apply`/`apply_acc`) wrote the destination lanes but never touched `Vu0Regs::mac` or `status`, so `cfc2 vi17` returned
whatever the last VU0 micro program or `ctc2` left there. The slab test then rejected the box. Every floor that is a
box (or a transform of one) became invisible to the ground ray; MOPP triangle meshes still worked. That is why the failure
was position-dependent: 0x0C's spawn room floor is a box, and on the other maps the misses happened where the probe point
landed on box-shaped floor pieces (inferred from the fix, not traced per map). With no hit, `FUN_00165418` returns pos.y + 10000, the player falls forever (or, on 0x40/0x96, the up-ray
rescue teleports them upward every frame), and the camera follows into the distance fog.

**Fix** (`runtime/include/ps2/vu.hpp`). ADD/SUB/MUL/MADD/MSUB in all bc/q/i forms, their ACC variants (ADDA…MSUBA), and
OPMULA/OPMSUB now set MAC and status, using the same convention as the micro-mode interpreter (`vu_micro.cpp`
`mac_flags`/`set_flags`):
- per written lane: Z (exponent 0), S (sign), O (clamped to ±max);
- lanes outside the dest mask read 0;
- status gets Z/S/U/O from the MAC plus the sticky copies in bits 6–9, and keeps I/D (bits 4–5).
A result written to vf0 still sets flags. MAX/MINI/ABS/MOVE/MR32/FTOI/ITOF leave the flags alone, as on hardware. It is generic:
any game that branches on macro-mode flags (`cfc2 vi16/vi17` after an op) was affected.

**Verification.**
- Offline harness (`tools/scripts/probe_replay.cpp`) on the 0x0C frame-9230 castRay dump: before the fix, no hit (v0 = 0); after the fix, the hit is
  collidable 0xB2B090 with normal (0, −1, 0). PCSX2 reports the same object.
- No-input 0x0C repro (fresh g7600, frames 7600–9600): `g1` and y = 2027 throughout, the same as PCSX2 (it used to fall at frame ~9205).
- Mash batch (fresh g7600 warp + sweep inputs, frames 7600–11200, `OUT=$P/logs/black/verify black_batch.sh fx …`, merged with main 470bffe):
  21/22 maps stay grounded through 11200: 40 0c 48 92 a2 a4 a6 a7 bc e3 eb 0f 87 62 e6 2f a0 2d 14 47 a5
  (a0's flagged jump at 8050 is a room change, grounded throughout). **e9 still misses** at frame 10850, pos (−36421, −56866):
  not an emulation bug. The player walks off the edge of E9's collision floor, and PCSX2 falls at the same spot (§8).
- `regress.sh` on the merged build: PASS ×4 (boot, gameplay, koop, versus).


## 8. Map 0xE9: real edge of the collision floor, not an emulation bug (fix/raycast-e9, 2026-10-16)

**Verdict.** E9 ("Extra Map - Map 10", one of the debug Extra maps) has one floor collidable, a flat MOPP mesh. The mash
input walks the player through the building's visual walls, most of which have no collision, and then off the south edge
of that floor. PCSX2 behaves the same way at the same spot. No runtime change was needed.

**Repro.** The miss is deterministic. `verify/fx-e9.w` (VU0-flags fix) is byte-identical to the pre-fix
`traces/fb-e9.w` and to a re-run on fix/raycast-e9, so the VU0 flag fix never changed E9.
- Ground is lost at watch frame 10834 (move 0x12E → 0x10A). The root-motion probe point travels to z −56594, then −56665.
- The scene has been black since frame ≈9200, while the player is still grounded (g1, y −22).

**Offline replay.** The probe build (probes2 list) was run with `PS2_PROBE_FRAME=10834` and
`PS2_PROBE_DUMP=2c0aa8:1:60:…`. Hit 5 is the P1 ground ray (a1 0x5E9830). The new `tools/scripts/ray_scan.cpp`
replays that ray and can move it anywhere:
- **Broadphase.** The floor collidable 0xB107DC (hkMoppBvTreeShape 0xB0F600 over mesh 0xB20210) is not a candidate for the
  failing ray. The only candidates are the player's own two proxies, 0xB2169C and 0xB21A5C, which the filter rejects.
  A ray in the same frame at z −56494 hits the floor at y −21.97.
- **Grid scan** with rays from y −60000 to +200000:
  - floor at y −22 for x −70000…−27500 and z −56550…−28750, and at y −400 north of that;
  - nothing at any height for z < −56600 or x > −27000. The edge is one straight line across x.
- **3-axis-sweep broadphase** (0xB0ED80: offset 500, scale 32.767, 35 objects):
  - object 1 is the floor, with quantized AABB x −74580…−27139, y −450…53, z −56635…−9163;
  - objects 2–5 and 11–12 are small props, and 13–34 are 11 pairs of character proxies parked at the origin;
  - the only tall objects are 6–8: two thin wall pieces at x ≈ −43330 (z −39361…−36325) and z ≈ −26140
    (x −56604…−44626), and a block at x −58618…−55460. None of them is near the player's path or the south edge;
    the building's other walls have no collision.
- **MOPP code info** (0xB104D0) is loaded from disc data, not computed by us: offset (−149.107, −0.834, −113.186),
  scale 175593. Its domain starts at z −56593 game units, so the floor mesh ends there.

**PCSX2 oracle** (headless Xvfb, Null audio, `-statefile logs/black/pcsx2/pc_0c.p2s`, then the same warp pokes):
- **Spawn:** (−50598, −22, −34280), g1, the same as the recomp.
- **eeMemory:** the broadphase is identical to ours except objects 9–10 (the player proxies, which are at the spawn point in
  PCSX2). The MOPP info is at the same address with the same bytes.
- **Position pokes** on P1 (pos 0x5E6BC0/C8):
  - (−36500, −56400): stays grounded;
  - (−36421, −56866): g0, root.y = pos.y + 10000, falls 583 → 25183 in 4 s, exactly like the recomp.
- **Dark-fade:** P1 poked to the frame-9300 spot (−42588, −47413) renders an all-black frame in PCSX2 too, while
  (−46813, −40000) is lit. Outside the rendered building, the floor is an invisible plane.

**Consequence.** E9's dark-fade and its fall are game/map behaviour under random input, so the sweep should not count them
as emulator failures. The other debug Extra maps flagged dark-fade (E3, EB) are grounded since the VU0 fix.

Artifacts are in `logs/e9/`:
- `dump34/d_*.bin`: the frame-10834 dumps;
- `grid*.txt`: the floor scans;
- `pcsx2/pc_e9_spawn.p2s`, `pcsx2/spawn/eeMemory.bin`, `pcsx2/shot_*.png`: PCSX2 state, RAM and screenshots;
- `runs/r1-e9.w`: the repro watch log.
