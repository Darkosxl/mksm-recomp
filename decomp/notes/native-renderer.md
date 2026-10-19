# Native renderer for MK:SM: design

Status: sections 1-3 written; the rest is in progress (sections marked TODO are not filled yet).

Scope: replace the VIF1 → VU1 → GIF → GS emulation path for the game's 3D with native WebGPU draw calls, keeping
the approved look and leaving game state bit-identical. Design only; no code is changed by this document.

**Evidence conventions.** EE addresses are in the disc ELF (`games/mksm/disc/SLUS_210.87`, the Ko-op-patched dump).
`decomp/notes/tools/dis.py <addr>` prints the disassembly of a function with the R5900 opcodes llvm-objdump does not
know (lq/sq, MMI, COP2) patched in, so every `0x2xxxxx` instruction cited here can be checked in one command.
`xref.py` finds code that addresses a global, `cg.py` prints callers/callees from `decomp/map/callgraph.tsv`,
`closure.py` computes callee closures with sizes (all Python stdlib, `python3 -I`, well under a second each).
The recompiled twin of a function `fn_X` is at `L_00X:` in `mksm/generated/unit_*.cpp` (line numbers given below).
Names like "scene draw" are ours (role names), not symbols.

## 1. Frame structure

### 1.1 The frame, top down

`GameLoop` (0x1d73c8) calls **fn_2f4200** (Paradox general, 768 B, `unit_007D.cpp:591`) once per in-game frame. Its
order (disassembly of 0x2f4200-0x2f44f8):

| Site | Call | What it is |
|---|---|---|
| 0x2f422c-0x2f4264 | fn_343990(0x71e4e0), fn_2d08c0 (effects), fn_2e0d30(i) for i = 0..13, fn_30fa38 | pre-render updates (role inferred from the module, not decompiled) |
| 0x2f4270 | if `[0x642818]` ≠ 0: fn_2b3298 per slot, fn_24cd90 ×2, return | a mode with no 3D frame (fn_241410 is not called) |
| **0x2f42f0** | **fn_241410** | **end of the previous frame**: post-draw updates, 2D lists, glow, field flip, close the VIF1 chain and kick it |
| 0x2f4310, 0x2f43b0 | fn_2367b8(0x5e3780 + k·0x33c0), k = 0..14 | enqueue the 15 fighter slots into the render lists (§1.2) |
| 0x2f4478 | fn_30f968 | more enqueues (it calls fn_2367b8) |
| **0x2f4484** | **fn_24c280** (64 B, `unit_0053.cpp:649`) | **begin the next frame**: fn_236878 (camera/frustum), then **fn_23ff60** (the scene draw, unless `[0x4f4b50]`), then fn_22c920 |

So the chain for frame N is **built** at the end of fn_2f4200 call N (fn_24c280 → fn_23ff60) and **kicked** at the
start of call N+1 (fn_241410), after that frame's game update. fn_241410 and fn_24c280 have the same 35 callers
(front end, pause, save, load screens, Flash menus): every screen of the game pairs them the same way.

### 1.2 The render lists

**fn_2367b8** (0x2367b8, 188 B, `unit_004D.cpp:3021`) is the enqueue. For an object `o` that is not hidden
(`o+0x70` byte = 0) it takes the render-instance index `o+0x68`, the node `n = 0x668720 + idx·0x18`
(`n+0` next, `n+4`, `n+8` model, `n+0xc` = o, `n+0x10` = list type t), and appends n to list t of the block
**R2 = 0x65e398**: total count at R2+0, count[t] at R2+4+4t, tail[t] at R2+0x28+4t, head[t] at R2+0x4c+4t
(0x2367d0-0x236868). There are 9 types. fn_241410 clears all of them at its end (0x241d24-0x241d4c).

### 1.3 The scene draw, fn_23ff60

**fn_23ff60** (0x23ff60, 1240 B, `unit_004F.cpp:4725`) walks the lists in two passes p = 0, 1 (loop 0x240018-0x2402a4)
and then draws the screen-space work. `fn_223fa8(id)` brackets every step (ids 0x0-0xf, an in-game profiler, inferred).

| Step | List | Draw function | VU1 image uploaded first (fn_23de10) | What it draws (from §3 and the draw order below) |
|---|---|---|---|---|
| setup | - | fn_238ff8, fn_236ba0 (if R+0xd4 = 2), fn_129a18, fn_24afa0, fn_27d3f0(0x67b750), fn_24ac88 | - | camera/env setup, clear, first screen-copy state |
| p=1 only, if `[0x4f4d60]` | t=2 (R2+0xc / +0x54) | fn_24cf08 | 0x49f900 (image B) | the 1-pass fighters (c77204b7/2f9dff01/95a24514: koop, academy, nether) |
| p=0 and p=1 | t=1 (R2+0x8 / +0x50) | fn_24cf08 | 0x4a20b0 (image C) | world, props, sky: opaque in p=0, the second (blended) world pass in p=1 |
| p=1, if not `[0x4f4d60]` | - | fn_23fcc0(1) | (fn_23e830 uploads its own) | screen-copy driven passes (ScreenCopy.cpp calls), plus fn_23e830 → fn_2357d8 → fn_232628/fn_231ad0 |
| p=1 | - | fn_2659b0(`[0x4eff9c]`) | - | - |
| p=0, if `[0x4f508c]` | - | fn_23df70(0) | 0x49e430 / 0x49f900 / 0x4a20b0 | another instance path (calls fn_246cf0 and fn_235e28) |
| p=0 and p=1, if `[0x4f5080]` | t=5 (R2+0x18 / +0x60) | fn_263428 (meshdraw.cpp) | - | effect meshes |
| p=0, if not `[0x665f6c]` | t=3 (R2+0x10 / +0x58) | **fn_246cf0**(o, n+4, n+8, p, 1, 0, 3) | **0x49e430** (image A) | the 3-pass fighters (672fef39/ad5f3626/51bdaf8f: goro, foundry, nether). fn_246cf0 also holds image-B labels, used when fn_23df70/fn_23fa00/fn_24cbf8 call it after uploading 0x49f900. |
| after the passes | t=6 / t=7 (R2+0x1c, +0x20 / +0x64, +0x68) | fn_266858, fn_2670a0 | - | - |
| then | - | virtual call on `[0x677d40]` (0x24031c / 0x240344) | - | the Flash/menu layer (inferred from the object; not decompiled) |
| then | - | fn_27c898(0x67b750), **packet_anti_alias_or_blur** (0x227cd0), fn_24afa0, fn_27d3f0, fn_266858(..., 0, 1), fn_2282f8 | - | screen copy and post FX packets |

The per-frame draw order seen by the GS (framedbg, `remaster-data/framedbg/goro/draws.ndjson`, frame 7999, 785
draws) matches this (3-pass fighters in p=0 between the two world passes; in koop the 1-pass fighters sit at the start
of p=1, also between the world passes): path-3 clear (0x275194) → b27a143b (140 sprites) → sky 8a4e53a2 → world 002c80ed/567ce7d8/5f818a97
→ b27a143b → characters 51bdaf8f/ad5f3626/672fef39 interleaved (base, highlight, shading per mesh) → world second
pass 567ce7d8/002c80ed/50bda0e2 → glow chain (b27a143b into FBP 0x12c, 0x14c, then 23 draws into 0x8c) → path-2
VIF1 DIRECT strips → path-3 HUD (0x37e578). In koop the characters are c77204b7/2f9dff01/95a24514 (the image at
0x49f900); nether has both sets.

### 1.4 What fn_241410 does (end of frame)

fn_241410 (0x241410, 2448 B, `unit_0050.cpp:1734`; R = 0x4f4b40):

1. If R+0x10 = 2: wait (fn_24e680), FlushCache, and if at least 0x20 bytes are queued and R+0xc = 0, kick the chain
   early (0x24149c-0x2414d8, D1_CHCR = 0x145).
2. Post-draw instance work (0x241528-0x2416a8): list t=2, per instance fn_283b80, fn_2457d0, fn_367250 (pxmaptrig),
   fn_26ea60; the first node of list t=1: fn_2ae560 (anim), fn_26ea60; list t=3, per instance fn_2ae560, fn_2457d0,
   fn_26ea60. These run after the instances were drawn (in the previous fn_2f4200 call).
3. fn_24b598, fn_24d758, wait, D_CTRL |= 2 (0x2416cc), fn_22cb78 (ps2BasicPrimitives.cpp).
4. **Game-state updates inside the render layer**: per object in the table at 0x6680d8, a float timer at o+0x1a0 is
   advanced and wrapped (0x241768-0x2417e8); `[0x6b32e0]` = fn_37b3b8(0) (0x24182c); the frame counter `[0x4f4d64]`
   += 1 (0x241a6c-0x241a7c). These must keep running when the render path changes (§6).
5. If `[0x4f50b8]`: GS register writes through fn_27d418(reg, value): ZBUF_1 (0x4e), XYOFFSET_1 (0x18), CLAMP_1
   (0x08), FRAME_1 (0x4c), then the screen-copy object 0x67b750 (fn_278050, fn_278520, fn_27cf38).
6. **anti_alias_or_blur** (0x227f58, 924 B): the post-FX pass.
7. Wait, fn_2f6a90, **Gs_FlipFields** (0x2743d8), fn_2f6b08, wait.
8. Lists for the 2D layer: fn_266d18 ×2 (0x241a40-0x241a64); `sceDmaSend(ch [0x4f4d7c], 0x4a5d10)` (0x241ad8, a
   static packet right after the last VU1 image).
9. Double-buffer swap through the tables at 0x661ac8 indexed by `[0x4f4d68]` (0x241ae0-0x241b28); GIF_MODE = 4
   (0x241b38); D_CTRL |= 2; fn_2314d8 (new chain, inferred).
10. **The kick**: if R+0x10 ≠ 0, at 0x241bf0-0x241c30; else if R+0xd4 = 2, at 0x241cb4-0x241cf0, right after
    `jal FlushCache` at 0x241c80, whose return address **0x241c88** is the "EE call site" the runtime records for
    every VU1 draw. Both write D_PCR = 2, D1_TADR = `[0x65e304]` & 0x0fffffff, D_STAT = 2, D1_CHCR = 0x145 (chain mode,
    TTE, STR), and set `[0x65e38c]` = 1.
11. Clear the render lists; fn_226f78.

**fn_24e680** (0x24e680, 312 B, ps2Setup.cpp, 19 callers) is the render-idle wait every one of these steps uses:
D_PCR = 2 and D_STAT = 2, then a `bc0f` loop while D1_CHCR.STR, then busy-polls D1_CHCR.STR, D2_CHCR.STR, VIF1_STAT
& 0x1f000003, a `bc2t` loop, and GIF_STAT & 0xc00 (0x24e69c-0x24e7a8). Every poll is EE-visible timing (§6).

### 1.5 The chain and its writers

There is one VIF1 chain write pointer, **`[0x65e300]`**; `[0x65e304]` is the chain start, `[0x65e308]` the open DMA tag
and `[0x65e30c]` the open VIF code whose size is patched when it is closed (e.g. 0x23b4c8-0x23b4f8, 0x23b598-0x23b5b8
in fn_23a280). **98 functions** read or write `[0x65e300]` (`xref.py 65e300`): ps2BasicPrimitives.cpp, ps2render.cpp,
meshdraw.cpp, TextureManager.cpp and all of ScreenCopy.cpp. They append inline, without the Sony packet library for
the 3D: DMA `cnt` tags with inline VIF data, VIF `DIRECT` blocks carrying GIF A+D packets for GS state, `UNPACK` of
per-draw constants, `BASE`/`OFFSET` for VU1 double buffering, and `MSCAL`/`MSCALF`/`MSCNT`.

**VU1 microcode** is swapped as whole 16 KB images. **fn_23de10** (0x23de10, 352 B, `unit_004F.cpp:2400`) does
nothing if the image is already loaded (`[0x665f3c]`; fn_23ff60 sets it to -1 first, 0x23ff70). Otherwise it emits
FLUSHE, then 8 `MPG` blocks of 0x80 qwords by DMA reference to the image (fn_384eb0), then FLUSH. The images live in
the ELF data and were matched byte for byte against the recorded VU1 code snapshots (`games/mksm/vu1/*.bin`, §3):
**D = 0x49b8b0** (post FX; referenced by Gs_FlipFields and 9 ScreenCopy.cpp functions), **A = 0x49e430** (3-pass
characters), **B = 0x49f900** (1-pass characters), **C = 0x4a20b0** (world; ends at 0x4a5d10). The images overlap in
the ELF (each is uploaded as a full 16 KB, so it carries the start of the next one).

**The program per draw** is chosen by an MSCAL/MSCALF whose immediate is a label inside the loaded image, computed
from EE addresses: e.g. fn_23a280 writes `BASE 0x2e`, `OFFSET 0x1e9`, `MSCAL [sp+0xf4]` at 0x23a6a4-0x23a6e0, and
computes an entry as (0x4a5190 − 0x4a20b0)/8 at 0x23a754-0x23a77c. The code references these labels (`lui/addiu`
into 0x49c000-0x4a8000):

| Image | Labels used by the code (offset in the image) | Programs seen in framedbg at those offsets | Users |
|---|---|---|---|
| D 0x49b8b0 | +0, +0xa30, +0xf60, +0x1430 | b27a143b at +0 (post FX sprite grid) | Gs_FlipFields, ScreenCopy.cpp (fn_278bd8 … fn_279ab0), fn_235090, fn_242ff8 |
| A 0x49e430 | +0, +0x6f0, +0xe50 | 672fef39, ad5f3626, 51bdaf8f (3-pass characters: rigid, 2-bone, 3-bone) | fn_246cf0, fn_242ff8, fn_235090, fn_23df70, fn_23ff60 |
| B 0x49f900 | +0, +0x360, +0x800, +0xd20, +0x1030, +0x1550, +0x1b20, +0x1db0, +0x21e0 | c77204b7, 2f9dff01, 95a24514 (1-pass characters) | fn_246cf0, fn_242ff8, fn_235090, fn_23fa00 |
| C 0x4a20b0 | +0x4a0, +0x790, +0xb40, +0xef0, +0x17e0, +0x2230, +0x2520, +0x30e0 (hook), +0x3210, +0x36f0 | c372c643, 8a4e53a2, 567ce7d8, 5f818a97, 50bda0e2, 002c80ed (world, sky, shadow, effects); +0x17e0/+0x2520 are programs no reference scene uses | fn_242ff8, fn_23a280, fn_232628, fn_231ad0, fn_235090, fn_235e28 |

### 1.6 What one draw carries

Read from the packers' code; layouts in VU1 memory are cross-checked against the microcode in §3.

- **The instance**: node `n` (§1.2): `o` = game object (`o+0x68` instance index, `o+0x70` hidden), `n+8` = model.
  fn_24cf08 (76 B) saves `model+0x20` (pointer to an array of **0x1d0-byte segment records**) and `model+0x38` (their
  count) around fn_249060, which rewrites them (0x24cf20-0x24cf34). fn_249060 also writes into the model and its
  segments (e.g. `seg+0x18` = 2 at 0x249258, `model+0x4c` at 0x2491c8): the render code keeps state in game RAM.
- **Matrices and lights**: computed on the EE per instance (fn_249060 calls sceVu0TransposeMatrix, fn_214058 = rigid
  inverse, sceVu0LightColorMatrix; fn_2610f0 in meshdraw also calls sceVu0NormalLightMatrix). They go to VU1 data
  memory as `UNPACK V4-32` blocks at VU addresses **0x20-0x2d** (fn_232628, fn_239c48, fn_2478f0, fn_247bd8,
  fn_248058, fn_248658, fn_248900, fn_246258, fn_244368) and **0x4/0x6** (fn_23a280, fn_231ad0, fn_2379f0).
- **Segments**: fn_242ff8 DMAs each 0x1d0-byte segment record to the scratchpad with the toSPR channel (D9:
  QWC = 0x1d, SADR = 0x70000000 or 0x700001d0 double-buffered, CHCR = 0x101; 0x2430b0-0x24311c and 0x243230-0x243298),
  waits for it in a loop that **counts its own iterations into `[0x65e450]`** (0x2431a8-0x2431c0), and hands the
  record to fn_23a280 (8892 B), which writes that segment's GS state (DIRECT), constants, BASE/OFFSET and MSCAL.
- **Vertex streams**: prebuilt per mesh by ps2Setup.cpp (fn_24e7b8, fn_24f290, fn_24f990, fn_250450, fn_250fd0,
  fn_252148, fn_252d40, fn_253108, fn_2535a8, fn_253cd0, fn_258040, fn_2591c0, fn_259768: VIF UNPACK + `MSCNT`,
  closed with `sceVif1PkRet`), i.e. static VIF programs that the frame chain enters by DMA `call`/`ref` (inferred from
  the RET; to confirm with the chain dump in §7). fn_23e830 builds such packets per frame (it calls fn_252d40,
  fn_253108, fn_253cd0).
- **GS state**: per material through DIRECT A+D packets in the chain (TEX0/TEX1/CLAMP/ALPHA/TEST/FRAME/ZBUF, the values
  framedbg records per draw); textures are uploaded through TextureManager.cpp (fn_26bcf8, fn_268ae0, fn_268ec0,
  fn_26bb00, fn_26c888, fn_269170: sceVif1PkOpenDirectCode + IMAGE transfers in the same chain).

Not determined statically (needs the run in §7): the exact vertex formats of each mesh class (the UNPACK formats are
data-driven), and which EE function wrote which framedbg draw group (the runtime attributes all of them to 0x241c88).

## 2. The interception point

### 2.1 Two candidate seams

The work that costs fps is downstream of the chain: GIF parsing and per-primitive setup, GS raster, and VU1. The EE
side (building the chain) is cheap and must stay bit-exact anyway, because **the chain buffer is EE RAM and EE RAM is
in the state hash**. So in both designs the EE keeps building the chain exactly as today, and the native renderer
consumes records taken at a seam; nothing upstream changes.

| | Seam E: draw records on the EE, before VIF packing | Seam V: VU1-input records in the runtime, at each MSCAL |
|---|---|---|
| Where | entry of the packers (fn_23a280, fn_244368/fn_239c48/fn_2459f8/fn_245d48, fn_2610f0, fn_232628), with the instance from fn_24cf08 / fn_246cf0 | in `runtime/src/vif.cpp`: the VIF1 interpreter keeps a shadow of VU1 data memory; at MSCAL/MSCALF/MSCNT the record is (image, entry PC, the constants block, the unpacked batch, the DMA source address of each UNPACK) |
| Data | the source: model, segment record, bone palette, lights, material, texture id | what VU1 would read: the same data after VIF packing, in VU1 memory layout, split into VU1-sized batches |
| Decomp needed | yes: §2.2 (the packers and the per-instance callers) | none |
| Batching | one draw per mesh segment (or per mesh) | one draw per VU1 batch; merge consecutive batches with identical constants and GS state |
| GPU vertex buffers | static per mesh, keyed by the model pointer | keyed by the UNPACK's DMA source address + length (static mesh packets are DMA'd by reference, §1.6) |
| What the WGSL has to reproduce | the VU1 program's math (§3) on the source data | the same, on the same inputs VU1 gets: the closest possible match |
| Risk | the decomp must be bit-exact for the chain it still writes (the existing difftest + gate handle that) | none on game state; the VIF unpack shadow must match the real VIF (it already exists) |

**Recommendation.** Build Seam V first, then move individual categories to Seam E where the source data buys
something. Seam V reaches the first milestone with no decomp, has a perfect per-draw oracle (run the real VU1 on the
same record and compare), and removes all three costs (GIF front end, GS raster, VU1). Seam E is the real fix for what
Seam V cannot do: whole-mesh static vertex buffers instead of per-batch uploads, per-pixel lighting from the source
normals and bone palette (the remaster's "modern" plan, `mksm/notes/remaster.md` lines 118-134), and dropping the VIF
shadow. The decomp below is the path to Seam E, and the per-instance functions are where it pays most.

### 2.2 Functions to decompile for Seam E, leaves first

The set is the callee closure of the two per-instance draw entries that produce almost all 3D primitives: fn_24cf08
(lists t=1 and t=2: world, props, sky, character set 2) and fn_246cf0 (list t=3: the fighters). Output of
`python3 -I decomp/notes/tools/closure.py 24cf08 246cf0`; "chain" marks functions that write the chain pointer.
Library code (FastMemcpy/FastMemset, Sony vu0/packet library, libm) is not counted and can stay recompiled.

| Level | Address | Size | Name / role (ours) | Chain |
|---|---|---|---|---|
| 0 | 22c308 | 680 | fn_22c308 | |
| 0 | 22c620 | 12 | fn_22c620 | |
| 0 | 22c630 | 248 | fn_22c630 | |
| 0 | 236db0 | 384 | fn_236db0 | chain |
| 0 | 23cf90 | 404 | fn_23cf90 | |
| 0 | 23db48 | 708 | fn_23db48 | |
| 0 | 240438 | 436 | fn_240438 | |
| 0 | 2478f0 | 740 | fn_2478f0: UNPACK V4-32 to VU 0x21-0x23, 0x2d | |
| 0 | 247bd8 | 1152 | fn_247bd8: UNPACK V4-32 to VU 0x21-0x23, 0x2d | chain |
| 0 | 248058 | 1536 | fn_248058: UNPACK V4-32 to VU 0x20, 0x25-0x27, 0x2d | chain |
| 0 | 24cff8 | 68 | fn_24cff8 | |
| 0 | 268ae0 | 536 | fn_268ae0 (TextureManager: DIRECT A+D) | |
| 0 | 268ec0 | 688 | fn_268ec0 (TextureManager: DIRECT A+D) | |
| 0 | 26d2e8, 26de50, 26de88, 26dec0, 26df48 | 28-56 | texture-slot accessors (render-layer.md batch 1) | |
| 0 | 275300, 2753a0 | 16 | fn_275300, fn_2753a0 | |
| 0 | 326140 | 12 | fn_326140 (paradox:general) | |
| 0 | 379988 | 32 | fn_379988 (paradox:core) | |
| 1 | 22c838 | 232 | fn_22c838 | |
| 1 | 236f30 | 1840 | fn_236f30: STMASK, DMA next/refs/ret, ITOP | chain |
| 1 | 2388b0 | 1860 | fn_2388b0 | chain |
| 1 | 239c48 | 1292 | fn_239c48: UNPACK V4-32 to VU 0x22-0x29 (palette/constants) | chain |
| 1 | 23cae8 | 280 | fn_23cae8 | |
| 1 | 23d128 | 452 | fn_23d128 | |
| 1 | 2457d0 | 552 | fn_2457d0 (also called by fn_241410) | |
| 1 | 248900 | 1884 | fn_248900: UNPACK V4-32 to VU 0x28-0x2c | chain |
| 1 | 26bcf8 | 1096 | fn_26bcf8 (TextureManager upload) | chain |
| 2 | 237660 | 908 | fn_237660 | chain |
| 2 | 23d2f0 | 880 | fn_23d2f0 | |
| 2 | 242ad0 | 1316 | fn_242ad0 | |
| 2 | 244368 | 3580 | fn_244368: BASE/OFFSET, UNPACK to VU 0x2d, 42 `sq` (character constants) | chain |
| 2 | 245168 | 1640 | fn_245168 | |
| 2 | 246120 | 308 | fn_246120 | |
| 2 | 246258 | 1728 | fn_246258: UNPACK V4-32 to VU 0x25-0x27 | chain |
| 2 | 246918 | 984 | fn_246918 | chain |
| 3 | **23a280** | **8892** | **fn_23a280: the segment packer (DIRECT, BASE/OFFSET, MSCAL/MSCALF)** | chain |
| 3 | 2459f8 | 844 | fn_2459f8 | |
| 3 | 245d48 | 980 | fn_245d48 | |
| 4 | **242ff8** | **4976** | **fn_242ff8: segment loop, toSPR double buffer** | chain |
| 4 | **246cf0** | **3068** | **fn_246cf0: the fighter instance draw** | chain |
| 5 | **249060** | **3544** | **fn_249060: instance setup (LOD, matrices, lights)** | chain |
| 6 | 24cf08 | 76 | fn_24cf08: instance entry | |

**Total: 53 functions, 52,028 bytes** (16 of them write the chain: 38,724 bytes). At the decomp's measured pace this is
the size of the next two or three batches, not a separate project. The record that Seam E emits is the argument set of
fn_23a280 (one segment) and of fn_246cf0's packers (one fighter mesh), plus the instance (o, model).

The rest of the 3D, for later stages (union closures, overlapping the set above):

| Path | Entries | Closure |
|---|---|---|
| all 3D instance paths | fn_24cf08, fn_246cf0, fn_23df70, fn_23fa00, fn_23f6f8, fn_23e830, fn_263428 (meshdraw) | 144 functions, 117,292 bytes |
| everything fn_23ff60 draws, plus setup and post FX | the above + fn_266858, fn_2670a0, fn_2659b0, packet_anti_alias_or_blur, fn_27c898, fn_2282f8, fn_27d3f0, fn_24afa0, fn_24ac88, fn_238ff8, fn_236ba0, fn_129a18, fn_23cc00, fn_23de10, fn_23fcc0 | 200 functions, 150,836 bytes |
| the whole render frame | fn_24c280 + fn_241410 | 336 functions, 197,928 bytes |

Seam V needs none of these. The only EE function it must understand is the kick (fn_241410) and the image upload
(fn_23de10), both of which it observes rather than replaces.

## 3. The VU1 programs

From a static read of the recorded microcode (`games/mksm/vu1/*.bin`) and its AOT translation
(`mksm/generated/vu1_000.cpp` … `vu1_003.cpp`). Tools: `decomp/notes/tools/vu1_dis.py` (disassembler that follows the
reachable code from an entry, as `runtime/include/ps2/vu_ops.hpp:44` does) and `vu1_map.py` (bin ↔ 8-hex hash ↔
framedbg statistics). "mem[n]" is a VU1 data-memory qword; "@xxxx" a VU code byte address (the `L_xxxx` labels in
the translated files).

### 3.1 Hashes, bins and the init/body structure

- The 8-hex hash in remaster.md and draws.ndjson is FNV-1a-32 over the 256 bytes at the MSCAL entry PC
  (`runtime/src/gs/drawdbg.cpp:123-132`), taken only on MSCAL/MSCALF (`runtime/src/vif.cpp:283-285`). An MSCNT
  (`vif.cpp:287`) keeps the last hash, so every XGKICK of a continued program carries the hash of the last MSCAL.
  The draws' `vu1` field is the entry byte address (1936 = @0790).
- A bin is `<KEY>_<ENTRY>.bin`: KEY is a 64-bit FNV over every reachable (pc, lo, hi) seeded with the entry
  (`vu_ops.hpp:294`); the file is the 16 KB code memory at the first lookup (`runtime/src/vu_micro.cpp:918-944`).
  Every start PC gets a bin, including MSCNT continuation points and JR/JALR targets: 53 bins for 13 draw hashes.
  `vu1_table.cpp` has 60 programs: the 53, plus 7 dead ones that vurecomp seeds from `IADDIU` constants
  (`recomp/vurecomp.cpp:610-620`).
- **Every MSCAL'd program is a short init** (load constants into VF registers, end); the MSCNT that follows runs the
  per-batch **body** (at the init's E-bit delay slot + 8), which ends in XGKICK + E; the next MSCNT lands on a
  one-instruction stub `B body`. So one draw = one init + N body runs, one per VIF batch.

| Hash | Init bin | Body bin (stub) | Image | Category |
|---|---|---|---|---|
| 567ce7d8 | 9F1A7CBCB76DB203_0B40 | 070AF9B51D984916_0BA8 (…_0ED8) | C | world (173,737 prims in 12 scenes) |
| 002c80ed | E3615420A30987F9_36F0 | 14E2EF04C14A62D7_3778 (…_3C50) | C | world (foundry, goro) |
| 50bda0e2 | B8C270361E6E41FF_3210 | 9F379B16580FC7A8_3288 (…_36D8) | C | world (goro) |
| 5f818a97 | 0BD13F6979B552C7_0EF0 | DCF40A00DEE3BD03_0F78 (…_1298) | C | world_alpha |
| 8a4e53a2 | 1690D41535B3ACD6_0790 | 60F5D2D9F6030912_07F8 (…_0B28) | C | sky (TME=1) / shadow (TME=0) |
| c372c643 | 73AEAF8820E55C3F_04A0 | B268A7C458B6D044_04E8 (…_0778) | C | world (blend 0101) / effects |
| 672fef39 | F615E86B37442616_0000 | 5E89EE207CE0CADF_00A8 (…_06D8) | A | character, rigid, 3 passes |
| ad5f3626 | 61963840C5DA2F1D_06F0 | 50F4B9A79EB3B335_07A8 (…_0E38) | A | character, 2 bones, 3 passes |
| 51bdaf8f | B7F6B0712B514FD5_0E50 | C9D3CEBB1730479D_0EF0 (…_14C0) | A | character, 3 bones, 3 passes |
| c77204b7 | 46A8C35A4B91EC99_0000 | DADC22C3354EFB3B_0108 (…_0350) | B | character, rigid, 1 pass |
| 2f9dff01 | 79BAD7FA42B1CBE0_0360 | 109AC4E027CD7413_0410 (…_07F0) | B | character, 2 bones, 1 pass |
| 95a24514 | C0561A4F7ADDE8DC_0800 | 644411AE1443AD20_08D0 (…_0D10) | B | character, 3 bones, 1 pass |
| b27a143b | 4301005995C2B1AB_0000 (self-contained, 50 instructions) | - | D | post_fx |

In image C but in none of the 12 scenes: @2520→@25F8 (3-pass rigid character with CLIP cull), @17E0→@1870 (lit prop,
4 light lanes), @1BC0→@1C68 (reflection environment map, R = V − 2(N·V)N). @30E0 (7908B255…) is the only hook
subroutine (§3.3).

### 3.2 VU1 data memory (qwords)

Constants are EE-uploaded at absolute addresses 0-45 (`UNPACK V4-32` at 0x20-0x2d and 0x4/0x6 in §1.6 are these);
the batch input is at TOP (`XTOP`, the VIF double buffer from BASE/OFFSET); the output is built in the same half at
TOP+0x66/0x96/0xC3/0xC4/0xFC/0x12C depending on the program.

| mem | World (image C) | Characters (images A/B) |
|---|---|---|
| 0-3 | P: 4×4 model → screen-homogeneous (viewport and the 2048 offset folded in) | P: world → screen (A); B's init premultiplies P·M (@0028-0060) |
| 4 | .x fog min, .y fog max, .w fog bias A | light directions, transposed: light i = (m4[i], m5[i], m6[i]); 3 lights |
| 5 | .w fog scale B | (light directions) |
| 6 | point light position .xyz, .w = k (falloff) | (light directions) |
| 7 | point light colour .xyz, .w = strength | - |
| 8-10 | - | light colours, light i = mem[8+i] |
| 11 | - | ambient .xyz + alpha .w, biased by 2²³ (inference, §3.4) |
| 12-15 | clip-test matrix (CLIP variants) | bone matrix A |
| 16 | .w = hook address (0 = none) | 16-19 bone matrix B |
| 17 | UV scroll vector for the hook | (bone B) |
| 20-23 | (2520: clip matrix; 1BC0: model-view) | bone matrix C |
| 24-27 .xy | - | pass-3 projector: world position → UV |
| 28-31 .xy | - | pass-2 projector: world normal → UV |
| 32 / 44 | - | constant RGBA of pass 2 / pass 3 |
| 33 | - | GIF tag of the A+D header shared by the passes (inference: NLOOP 4) |
| 34, 35, 45 + in[1] | - | pass-1 A+D (in[1] changes per batch, e.g. the skin TEX0) |
| 37-39, 45 | - | pass-2 A+D |
| 40-43 | - | pass-3 A+D |

### 3.3 World family (image C, six bodies)

Skeleton (e.g. @0BA8 at `vu1_000.cpp:275`):

- **Input at TOP**: a GIF tag whose NLOOP N (`ILW.x & 0x7fff`) is copied with its N A+D qwords verbatim to the output
  (@0BB0-0C20): per-batch GS state rides inside the VU1 batch. Then the vertex GIF tag (NLOOP n, copied), then n × 2
  qwords: Q0 = int32 x, y, z (`ITOF0` @0C68), bit 15 of Q0.w = the strip-break (ADC) flag; Q1 = s, t, q in 20.12
  fixed point (`ITOF12` @0C90).
- **Output at TOP+0xC4**: n × 3 PACKED qwords STQ, RGBA, XYZF. The VU never writes RGBA: the EE streams vertex colours
  into that slot with a masked VIF UNPACK. @3778 and @3288 read it back (`LQ.xyz vf17,1(vi2)`, `vu1_000.cpp:1004`).
- **Transform**: one 4×4 (P·position), `DIV Q = 1/w` (@0C98, `vu1_000.cpp:307`), `MULq`, `FTOI4.xyzw` (@0D40,
  `vu1_000.cpp:328`) → 12.4 X/Y and integer Z. Texturing is perspective-correct: STQ = (s, t, q)·(1/w).
- **Fog**: F = clamp(m4.w + m5.w·(1/w), m4.x, m4.y) (@0CC8-0D20, `vu1_000.cpp:321-324`); `FTOI4` puts F·16 into
  XYZF.w (the GS takes bits 4-11), then ORed with ADC via MTIR/IOR/MFIR (@0D60-0D78).
- **No clipping anywhere.** The CLIP variants do `CLIPw.xyz` against mem[12..15], `FCAND vi1,0x3ffff` over the last
  three vertices, `+0x7fff` (@3908-3918, `vu1_000.cpp:1011,1021-1023`): ADC = input ADC OR "any vertex of this strip
  triangle outside the clip volume". Triangles that cross the guard band or the near plane are **dropped**. The others
  rely on EE culling and the GS guard band (sky boxes reach x = −1573…2194 in framedbg).
- **One XGKICK per batch** (@0EC0); the output is in the current half, so the GIF transfer overlaps the next upload.
- **Hook**: if mem[16].w ≠ 0 the body calls it (`JALR vi15,vi14`, @0EA0-0EB0, `vu1_000.cpp:377`) before the kick. The
  only hook, @30E0 (37 instructions), adds s += du·q, t += dv·q with vf31 = mem[17]: UV scrolling (@31C0,
  `vu1_001.cpp:1832`).

| Body | Fog | CLIP cull | Point light | XYZ.w |
|---|---|---|---|---|
| @0BA8 567ce7d8 | yes | no | no | fog + ADC |
| @0F78 5f818a97 (`vu1_003.cpp:1103,1113`) | yes | yes | no | fog + ADC |
| @07F8 8a4e53a2 (`vu1_001.cpp:1332-1345`) | no | yes | no | ADC |
| @04E8 c372c643 (`vu1_002.cpp:944,959-960`) | no | no | no | raw input w |
| @3778 002c80ed | yes | yes | yes | fog + ADC |
| @3288 50bda0e2 (`vu1_002.cpp:685,705-709`) | no | yes | yes | ADC |

**Point light** (@3778, @3288): d² = |p − m6.xyz|² (`ESADD`), rgb' = rgb + (m7.xyz − rgb)·m7.w·max(1 + m6.w·d², 0),
`FTOI0`-truncated into the RGBA slot, alpha untouched (@3880-39C0, @3A88, `vu1_000.cpp:1004-1044,1070`). Per vertex,
quadratic falloff, model space. There is no directional lighting in the world: its shading is baked into the vertex
colours.

### 3.4 Character family (images A and B)

Input: in[0] unused, in[1] one A+D qword, in[2] the vertex GIF tag (reused by every pass), vertices from in[3]:

| Variant | Stride | Layout | Strip break (ADC) |
|---|---|---|---|
| rigid (@00A8, @0108) | 2 qwords, float | Q0 = (x, y, z, nz), Q1 = (s, t, nx, ny) | bit 15 of nz's raw bits (@0170, `vu1_001.cpp:1078`) |
| 2-bone (@07A8, @0410) | 3 qwords | Q0 = (x, y, z, wA), Q1 = (s, t, wB), Q2 = (nx, ny, nz) | bit 0 of s's raw bits (@0850, @0910) |
| 3-bone (@0EF0, @08D0) | 3 qwords | Q1 = (s, t, wB, wC) | same |

- **Skinning**: M = wA·MA + wB·MB (+ wC·MC) per vertex (@0870-08E0, `vu1_001.cpp:659-673`; @0F98-0FF0,
  `vu1_003.cpp:79-90`), position = M·p, normal = M₃ₓ₃·n, not renormalised. **No per-vertex palette index**: the EE
  re-uploads mem[12..23] and re-MSCALs per bone group, so one mesh = many small draws. A native shader can take a real
  palette (bone indices per vertex) once Seam E gives the source data; Seam V gets one bone group per record.
- **Pass 1 (base)**: P·(M·p), `DIV Q`, `MULq`, `FTOI4.xyz` (@0248-0278, `vu1_001.cpp:1105-1111`). Lighting:
  d_i = max(L_i·n, 0) for 3 directional lights, rgb = Σ m[8+i]·d_i + m11 (ambient), alpha = m11.w, clamped with `MINIi`
  against 0x4B0000FF = 2²³ + 255 (@0320, `vu1_001.cpp:1133`). The colour goes into RGBAQ as raw float bits and the GS
  keeps the low 8 bits (`gs.cpp` `write_packed` case 1): this works only if the ambient carries a 2²³ bias (inference;
  the memory dump in §7 confirms). No specular, no lower clamp. **STQ = (s, t, 1.0)** (`MR32.z vf23,vf0` @0180):
  **characters are textured affinely** (Q = 1).
- The world position and normal are written back into the input slots (@0188, @01B8) for the next passes.
- **Pass 2 (highlight)**: XGKICK @0588 (pass 1 @0448). UV = mem[28..31].xy·(world normal, 1): an environment lookup
  from the normal (@04E0-0550); RGBA = mem[32]; XYZ is pass 1's, copied (@0278/0280).
- **Pass 3 (shading)**: XGKICK @06C0, reuses pass 1's buffer and XYZ. UV = mem[24..27].xy·(world position, 1): a planar
  projected texture (@0660-06B0, `vu1_001.cpp:1239-1252`); RGBA = mem[44].
- framedbg pass blends: 0121 / 0211 / third pass 1202 (multiply) in forest, goro, raiden, or **2221 with TEST 0x50001
  (ATST = NEVER) elsewhere: a pass that writes nothing, 94,026 primitives across the 12 scenes**. A native renderer
  skips it outright.
- **Set B** (image B: koop, academy, nether) is pass 1 only, with the same lighting; the lights are pre-rotated into
  model space and MVP premultiplied in the init (`vu1_001.cpp:349-369`).
- Capacity: about 48-49 vertices per batch.

### 3.5 post_fx (image D, @0000, 50 instructions)

No vertex stream: a grid of sprites over the screen. mem[8].x = rows, .y = columns (`vu1_000.cpp:2177`); mem[0..3]
two corner pairs; mem[4..7] row/column steps; the GIF tag at mem[9] is copied to mem[15]. Each sprite is a 5-qword
packet (tag + 4 × `FTOI4`) ping-ponged between mem[9..13] and mem[15..19], **one XGKICK per sprite** (@00E0, @0130,
`vu1_000.cpp:2200,2211`). framedbg shows 140 sprites over 640×224: a 20 × 7 grid of 32 × 32 tiles. No colour is set;
RGBAQ comes from the GS state before it. The register order in the tag is not known statically (§7, run R2).

### 3.6 Which can be one shader

| Shader | Covers | Uniforms | Switches |
|---|---|---|---|
| **W** static world | all six world bodies (567ce7d8, 002c80ed, 50bda0e2, 5f818a97, 8a4e53a2, c372c643) and the scroll hook | P, fog A/B/min/max, point light (pos, k, colour, strength), UV scroll | fog, point light, CLIP cull, raw-w (c372c643) |
| **C** lit character | the six character programs, sets A and B, plus @25F8 and @1870 as variants | P (or P·M), 3 lights + ambient, bone matrices, projectors mem[24..31], pass colour | 1/2/3 bones (two layouts), pass = base / normal-projector / position-projector |
| **C-env** | @1C68 (reflection; not in any reference scene) | as C | own entry point |
| **S** sprite grid | post_fx (b27a143b) | grid params | none: build the 140 quads on the CPU (or instanced) with a pass-through 2D shader |

So 13 hashes become **two real vertex shaders plus a sprite path**.

What must be exact (structural; wrong = broken geometry or z-fighting):

1. The strip-break sources: bit 15 of the w word (world, rigid characters), bit 0 of s (skinned characters), and the
   3-vertex CLIP window rule.
2. Bit-identical positions across the three character passes: they are drawn with ZTST GEQUAL on equal Z. Compute the
   transformed vertices once (compute pass or storage buffer) and draw the three passes from that, or use
   `@invariant` with identical arithmetic.
3. Q: world Q = 1/w (perspective-correct), characters Q = 1 (affine). Faithful mode keeps characters affine;
   perspective-correct is an optional upgrade.
4. The guard-band/near-plane **cull** in faithful mode: a GPU clips and would show triangles the PS2 dropped. Not
   expressible in a vertex shader; do it where strips are expanded (CPU or a compute pass that writes the index
   buffer).
5. Saturation at 255 (`MINIi`), fog clamp to [min, max], and the int32/20.12 dequantisation.

Perceptual (±1 LSB is acceptable): EE/VU float add and mul truncate and `FTOI` truncates toward zero
(`runtime/include/ps2/fpu.hpp:24-68,157-168`), GPUs round to nearest; this moves lighting sums, fog F, the point
light and the 1/16-pixel snap by an LSB. Drop the snap above 1×. Keep the same Z formula (z/w through `FTOI4`) within
a pass family so depth ties stay ties.

## 4. GS features on WebGPU, category by category

TODO

## 5. Staged plan

TODO

## 6. Exactness

TODO

## 7. Runs needed on AWS

TODO
