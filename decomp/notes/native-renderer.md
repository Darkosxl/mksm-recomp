# Native renderer for MK:SM: design

Status: complete (2026-10-19). Static analysis, then the stage-0 runs R2, R3, R4 and R8 (2026-10-19, results in
§7.1); each point they settle is marked **Confirmed (§7.1)** or **Corrected (§7.1)** where it is stated.

Scope: replace the VIF1 → VU1 → GIF → GS emulation path for the game's 3D with native WebGPU draw calls, keeping
the approved look and leaving game state bit-identical. Design only; no code is changed by this document.

**Evidence conventions.** EE addresses are in the disc ELF (`games/mksm/disc/SLUS_210.87`, the Ko-op-patched dump).
`decomp/notes/tools/dis.py <addr>` prints the disassembly of a function with the R5900 opcodes llvm-objdump does not
know (lq/sq, MMI, COP2) patched in, so every `0x2xxxxx` instruction cited here can be checked in one command.
`xref.py` finds code that addresses a global, `cg.py` prints callers/callees from `decomp/map/callgraph.tsv`,
`closure.py` computes callee closures with sizes (all Python stdlib, `python3 -I`, well under a second each).
The recompiled twin of a function `fn_X` is at `L_00X:` in `mksm/generated/unit_*.cpp` (line numbers given below).
Names like "scene draw" are ours (role names), not symbols.

## Summary

- **Frame**: fn_2f4200 kicks frame N−1's VIF1 chain in fn_241410 (0x241c88 is the return address of its FlushCache)
  and builds frame N's chain at its end in fn_24c280 → **fn_23ff60**, which walks 9 typed render lists (block
  0x65e398, filled by fn_2367b8) in two passes. One write pointer, `[0x65e300]`, written inline by 98 functions.
  VU1 microcode is swapped as whole 16 KB images (fn_23de10): D 0x49b8b0 post FX, A 0x49e430 3-pass characters,
  B 0x49f900 1-pass characters, C 0x4a20b0 world.
- **Seam**: two options. **Seam V** (recommended first): records at each MSCAL/MSCNT on the VU thread, behind the
  existing VIF1 timing shadow; no decomp needed. **Seam E** (the real fix for whole-mesh buffers, a real bone palette
  and per-pixel lighting): the per-instance draws fn_24cf08 and fn_246cf0 and their packers, **53 functions,
  52,028 bytes** (the core: fn_23a280 8,892 B, fn_242ff8 4,976 B, fn_249060 3,544 B, fn_246cf0 3,068 B); all 3D
  paths 144 functions / 117 KB; the whole render frame 336 / 198 KB.
- **VU1**: 13 hashes = init + body pairs; they reduce to **two vertex shaders** (world W: one 4×4, 1/w, clamped fog,
  optional point light, CLIP cull; character C: 1-3 bone blend, 3 directional lights + ambient, three passes from the
  same transformed vertices, affine texturing) plus a CPU-built sprite grid for post FX. No real clipping anywhere:
  the guard-band/near-plane cull drops triangles, and faithful mode must too.
- **GS**: 11 blend equations; the 3D run is ≥ 96 % of every gameplay frame's primitives and reads no render target,
  so it moves to WebGPU as one block with one colour write-back into the compute VRAM per frame; HUD/DATE, glow and
  menus stay on compute. 25 % of Foundry's primitives are ATST NEVER no-ops (droppable today, exactly); the shadow
  prep chain changes 0 pixels.
- **Exactness**: render work costs no EE time in this runtime (DMAs finish inside the CHCR store, vblank is on an EE
  cycle schedule, VU1 status reads are constants). Skipping VU1 and the GS raster only changes the render-internal
  hash sections (VU1, `vifvu`), which the gate and `hash_part` must exclude. The trap is on the EE side: the EE must
  keep building and kicking the chain unchanged, because poll iterations feed `c.budget` → T0 → the flip pacing.
- **First milestone**: world opaque (567ce7d8, 002c80ed) natively, side by side and then replacing, with the
  per-category diff tool and the EE-visible hash gate. Characters (stage 2) are where 1440p/60 is reached.
- **Runs (§7.1)**: the premise holds. With VU1 and GIF paths 1/2 switched off (`PS2_VU1_NULL=1`) every hash section
  except VU1 and `vifvu` is equal on every frame of all 12 scenes in both thread layouts and under `PS2_JITTER`; the
  census finds 0 EE reads of VU1 memory, 0 GS downloads, 0 SIGNAL/FINISH/LABEL, 0 INTC 5, 0 D1 pauses. Every vertex
  UNPACK reads static mesh data (keyable by source address). One correction that matters: the world programs' vertex
  colours are UNPACKed **after** the batch's MSCNT, so the two point-lit programs light stale colours and today's
  emulation drops their point light (§7.1, R2).

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
5. If `[0x4f50b8]`: GS register writes through fn_27d418(reg, value) (an immediate path-3 A+D packet built in the
   scratchpad with sceGifPkAddGsAD, then a wait): ZBUF_1 (0x4e), XYOFFSET_1 (0x18), CLAMP_1 (0x08), FRAME_1 (0x4c), then the screen-copy object 0x67b750 (fn_278050, fn_278520, fn_27cf38).
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
  waits for it in a loop that **counts its own iterations into `[0x65e450]`** (0x2431a8-0x2431c0; exact today
  because the runtime finishes every DMA inside the CHCR store, §6.3), and hands the
  record to fn_23a280 (8892 B), which writes that segment's GS state (DIRECT), constants, BASE/OFFSET and MSCAL.
- **Vertex streams**: prebuilt per mesh by ps2Setup.cpp (fn_24e7b8, fn_24f290, fn_24f990, fn_250450, fn_250fd0,
  fn_252148, fn_252d40, fn_253108, fn_2535a8, fn_253cd0, fn_258040, fn_2591c0, fn_259768: VIF UNPACK + `MSCNT`,
  closed with `sceVif1PkRet`), i.e. static VIF programs that the frame chain enters by DMA `call`/`ref` (inferred from
  the RET; to confirm with the chain dump in §7). fn_23e830 builds such packets per frame (it calls fn_252d40,
  fn_253108, fn_253cd0). **Confirmed (§7.1, R2):** every vertex UNPACK of every program reads a static source address
  (world meshes 0x01a5…-0x01d4…, the player's model 0x00fab…-0x01013… in both goro and academy, the 1-pass fighters
  0x01655…-0x0183…), 97-100 % identical from frame to frame; only the per-draw constants come from the frame chain
  (0x0079…-0x0089…).
- **GS state**: per material through DIRECT A+D packets in the chain (TEX0/TEX1/CLAMP/ALPHA/TEST/FRAME/ZBUF, the values
  framedbg records per draw); textures are uploaded through TextureManager.cpp (fn_26bcf8, fn_268ae0, fn_268ec0,
  fn_26bb00, fn_26c888, fn_269170: sceVif1PkOpenDirectCode + IMAGE transfers in the same chain).

Not determined statically (needs the run in §7): the exact vertex formats of each mesh class (the UNPACK formats are
data-driven; **answered in §7.1, R2**: world V4-16, characters V4-32 float, colours V4-8 masked), and which EE function
wrote which framedbg draw group (the runtime attributes all of them to 0x241c88; still R1).

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
| GPU vertex buffers | static per mesh, keyed by the model pointer | keyed by the UNPACK's DMA source address + length (static mesh packets are DMA'd by reference, §1.6; **confirmed** for every vertex UNPACK, §7.1) |
| What the WGSL has to reproduce | the VU1 program's math (§3) on the source data | the same, on the same inputs VU1 gets: the closest possible match |
| Risk | the decomp must be bit-exact for the chain it still writes (the existing difftest + gate handle that) | none on game state; the VIF unpack shadow must match the real VIF (it already exists) |

**Recommendation.** Build Seam V first, then move individual categories to Seam E where the source data buys
something. Seam V reaches the first milestone with no decomp, has a perfect per-draw oracle (run the real VU1 on the
same record and compare), and removes all three costs (GIF front end, GS raster, VU1). Seam E is the real fix for what
Seam V cannot do: whole-mesh static vertex buffers instead of per-batch uploads, per-pixel lighting from the source
normals and bone palette (the remaster's "modern" plan, `mksm/notes/remaster.md` lines 118-134), and dropping the VIF
shadow. The decomp below is the path to Seam E, and the per-instance functions are where it pays most.

The Seam V record capture exists (stage 0): `PS2_TRACE_SEAMV=file` (`runtime/src/seamv.cpp`, format and sizes in
§7.1) writes one record per VU1 program start; `remaster/seamv.py` reads it. Two things the runs added to the record's
definition: a world batch is not complete at its MSCNT (its vertex colours arrive with the next VIF codes, §7.1 R2),
and the GS state a batch draws with is the path-2/3 A+D state plus the A+D carried inside the batch itself.

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
  one-instruction stub `B body`. So one draw = one init + N body runs, one per VIF batch. **Confirmed (§7.1):** every
  init start carries no batch (0 qwords at TOP), every body start does; the world and sky draws start with MSCAL, the
  character and post-FX draws with MSCALF. goro runs 836 program starts per frame, academy 1,767.

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
TOP+0x66/0x96/0xC3/0xC4/0xFC/0x12C depending on the program. **Corrected (§7.1, R2):** the world programs use BASE
0x18 / OFFSET 0x1f4 (buffers at 0x18 and 0x20c, 500 qwords each), so their constants are mem[0..23] only and
mem[24..45] is the start of buffer 0; the character programs use BASE 0x2e / OFFSET 0x1e9 (buffers 0x2e and 0x217),
constants mem[0..45]. Values seen are in §7.1 (R3).

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

**Confirmed by decomp** (batch h: PackFighterConstants 0x244368, PackCharInstanceConstants 0x246918,
PackBoneSegmentConstants 0x246258, all bit-exact on difftest). The character constants the EE uploads (UNPACK V4-32,
4-qword blocks after the header at 0x4f4d90):

| mem | Source | Meaning |
|---|---|---|
| 0-3 | 0x660f20 (the fighters' flat mode: 0x660f60) | P |
| 4-7 | 0x661960 | light directions, transposed: lanes 0-2 = normalize(bone position − rig light i), in the bone's space (× the inverse of its rotation unless [0x4f4c48]); lane 3 = an extra direction (light 2 + fn_23cae8's vector, × −[0x4f4c1c], which is 0 in the ELF data). The flat mode sends identity |
| 8-11 | 0x6619a0 (sceVu0LightColorMatrix) | rows 8-10: rig colour i × attenuation (1 inside `near` +32, 0 beyond `far` +36, linear between), .w = 25.0 (or [0x4f4c18] for light 0 when [0x4f6e44]); row 11: the rig's ambient (rig +0x90) with .w = 0. The 2²³ bias of §3.4 is not in the code, so it would be in the rig data |
| 12-15, 20-23 | bone world matrix; [0x6610a0] × bone | only the one-bone segment path (fn_246258, image C @2520): the bone and the clip matrix |
| 24-27 | 0x6634a0 | pass-3 projector |
| 28-31 | instance +0x1060 | pass-2 projector (per instance) |
| 37-39 | A+D | segment path: ALPHA_1 = 0x2000000068, TEST_1 = 0x50001 (ATST NEVER), TEX0_1 = 0 |
| 45 | A+D | one-pass fighters: FBA_1 = 1 |

The GS state around the batches goes as a DIRECT A+D block, not through VU1: FBA_1, TEX1_1 bilinear (0x60), CLAMP_1
clamp/clamp (the segment path takes it from flag bits 12/13, plus a TEXFLUSH), and for the fighters PRIM = tristrip,
Gouraud, textured, alpha-blended (0x5c), with FGE by [0x4f4c08] and AA1 by [0x4f6e94] and the owner's flags; the flat
mode draws untextured (0x4c). Pass 1's TEX0 is the skin slot's with TFX = MODULATE, TCC = RGB. VU1 double buffering is
BASE 0x2e / OFFSET 0x1e9. The bone palette is computed whole on the EE every frame by UpdateBoneMatrices (0x245168):
[0x6660a0][i] = bone i's world matrix, [0x6660a4][i] = its skinning matrix (same rotation, translation world.t −
pivot·R, no bind rotation), 120 bones, 64 bytes each: a native shader can take [0x6660a4] as its palette.

### 3.3 World family (image C, six bodies)

Skeleton (e.g. @0BA8 at `vu1_000.cpp:275`):

- **Input at TOP**: a GIF tag whose NLOOP N (`ILW.x & 0x7fff`) is copied with its N A+D qwords verbatim to the output
  (@0BB0-0C20): per-batch GS state rides inside the VU1 batch. Then the vertex GIF tag (NLOOP n, copied), then n × 2
  qwords: Q0 = int32 x, y, z (`ITOF0` @0C68), bit 15 of Q0.w = the strip-break (ADC) flag; Q1 = s, t, q in 20.12
  fixed point (`ITOF12` @0C90). **Confirmed (§7.1, R2):** the header (tag, N = 2 A+D: TEX0_1 and MIPTBP1_1, the
  vertex tag) is one `UNPACK V4-32` of 4 qwords at TOP, the vertices one `UNPACK V4-16` (signed) at TOP+4: positions
  and s, t, q are int16 on the bus (q = 0x1000 = 1.0), Q0.w = 0x7fff (draw) or 0xffff (ADC). Strips are short:
  567ce7d8/002c80ed draw 0.58-0.65 triangles per vertex (runs of 1-4 triangles between restarts), the sky,
  5f818a97 and 50bda0e2 0.8-0.9. In all six world programs the vertex tag is PACKED, NREG 3 [ST RGBAQ XYZF2], PRE 0:
  **XYZF2** (PRIM comes from a path-2 A+D).
- **Output at TOP+0xC4**: n × 3 PACKED qwords STQ, RGBA, XYZF. The VU never writes RGBA: the EE streams vertex colours
  into that slot with a masked VIF UNPACK. @3778 and @3288 read it back (`LQ.xyz vf17,1(vi2)`, `vu1_000.cpp:1004`).
  **Corrected (§7.1, R2):** the colour UNPACK (V4-8, mask 0xffffff00, CL 3/WL 1, absolute address TOP+0xC9 for N = 2)
  is the VIF code **after** the batch's MSCNT, and @3778/@3288 do write the slot (the lit RGB, `FTOI0` + `SQ.xyz`
  @3A88-3AA8). In this runtime VU1 runs to completion at the MSCNT, so those two bodies light the stale colours left
  in the buffer, and the colour UNPACK then overwrites the lit RGB in the held XGKICK packet (`vu::vif_wrote`): the GS
  gets the raw vertex colours and **the point light is lost**. On hardware the VIF writes the colours while the body
  runs, ahead of its reads, so the light is applied (inferred from the stream order and the code; not measured).
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
colours. In goro it is on (m7 = (220, 175, 0), strength 1.0; k = −4.9e-7, radius ≈ 1,425 units) but invisible today,
see the correction above: the approved look has no point light. Whether the native path reproduces today's output
or the hardware's is Cem's call (a look change); either way Seam V must take the colours from the UNPACK that follows
the batch, which the record carries (§7.1).

### 3.4 Character family (images A and B)

Input: in[0] unused, in[1] one A+D qword, in[2] the vertex GIF tag (reused by every pass), vertices from in[3].
**Confirmed (§7.1, R2):** in[0] is a GIF tag NLOOP 1 [A+D] that the program does not use (its header is mem[33]),
in[1] is TEX0_1 (the batch's skin texture), in[2] is PACKED NREG 3 [ST RGBAQ XYZF2] (**XYZF2**, as in the world). The
whole batch, in[0] to the last vertex, is one `UNPACK V4-32` straight from the model in RAM (floats, static source):

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
  **characters are textured affinely** (Q = 1). **Confirmed (§7.1, R3):** m11 = 2²³ + (21, 23, 16) in goro, and
  the pass-2/3 colours mem[32], mem[44] carry the same bias; light colours m8-10 are in 0-255 units, directions unit
  vectors. m11.w = 0, so the vertex alpha is 0: the base pass takes its alpha from the texture (in[1] TEX0: TFX
  HIGHLIGHT2, TCC 1; Af = 0 adds nothing to the colour).
- The world position and normal are written back into the input slots (@0188, @01B8) for the next passes.
- **Pass 2 (highlight)**: XGKICK @0588 (pass 1 @0448). UV = mem[28..31].xy·(world normal, 1): an environment lookup
  from the normal (@04E0-0550); RGBA = mem[32]; XYZ is pass 1's, copied (@0278/0280). **Confirmed (§7.1, R3):** u, v =
  0.5 + 0.5·(n·a) with unit axes a (a sphere map from the normal); its TEX0 (mem[39]) is MODULATE.
- **Pass 3 (shading)**: XGKICK @06C0, reuses pass 1's buffer and XYZ. UV = mem[24..27].xy·(world position, 1): a planar
  projected texture (@0660-06B0, `vu1_001.cpp:1239-1252`); RGBA = mem[44]. **Confirmed (§7.1, R3):** u = 2.79e-5·x +
  0.108, v = −1.30e-4·z + 0.610 (world x and z: a projection onto the ground plane); its TEX0 (mem[42]) is HIGHLIGHT,
  so As = At + 48 in goro (input to R5).
- **Pass A+D (§7.1, R3)**: mem[33] = GIF tag NLOOP 4 [A+D]; pass 1 = mem[34] ALPHA, mem[35] TEST, in[1] TEX0,
  mem[45] FBA = 0; pass 2 = mem[37] ALPHA, mem[38] TEST, mem[39] TEX0, mem[45]; pass 3 = mem[40] ALPHA, mem[41] TEST,
  mem[42] TEX0, mem[43] FBA = 1. mem[36] is not used.
- framedbg pass blends: 0121 / 0211 / third pass 1202 (multiply) in forest, goro, raiden, or **2221 with TEST 0x50001
  (ATST = NEVER) elsewhere: a pass that writes nothing, 94,026 primitives across the 12 scenes**. A native renderer
  skips it outright. **Confirmed (§7.1):** goro mem[34]/[37]/[40] = ALPHA 0x64 (0121, FIX 0x80), 0x58 (0211), 0x89
  (1202), TEST 0x5004b (alpha ≥ 4, Z GEQUAL) for passes 1-2 and 0x50000 for pass 3; academy pass 3 = ALPHA 0x6a (2221)
  with TEST 0x50001.
- **Set B** (image B: koop, academy, nether) is pass 1 only, with the same lighting; the lights are pre-rotated into
  model space and MVP premultiplied in the init (`vu1_001.cpp:349-369`). **Seen (§7.1):** academy draws its player
  with set A and the other fighters with set B; set B there has one light (lights 2 and 3 black) and its pass-1 A+D is
  ALPHA 0x44 (0101) with TEST 0x733cb (alpha ≥ 0x3c, AFAIL RGB_ONLY, Z GREATER): the "0x3C RGB_ONLY pass" of §5.2.
- Capacity: about 48-49 vertices per batch.
- **Confirmed by decomp** (batch h, table in §3.2): the three lights are point lights of the mesh's rig, turned into
  directions from the bone's position once per mesh on the EE, with a linear near/far falloff folded into their
  colours; the pass-2 projector is per instance and the pass-3 one global. A one-pass fighter draw (fn_244368's
  fourth argument 0) sends neither projector, texture nor pass packers, only the A+D at mem[45] (FBA_1 = 1).

### 3.5 post_fx (image D, @0000, 50 instructions)

No vertex stream: a grid of sprites over the screen. mem[8].x = rows, .y = columns (`vu1_000.cpp:2177`; **corrected
(§7.1): .x = 20 tiles across, .y = 7 down**); mem[0..3]
two corner pairs; mem[4..7] row/column steps; the GIF tag at mem[9] is copied to mem[15]. Each sprite is a 5-qword
packet (tag + 4 × `FTOI4`) ping-ponged between mem[9..13] and mem[15..19], **one XGKICK per sprite** (@00E0, @0130,
`vu1_000.cpp:2200,2211`). framedbg shows 140 sprites over 640×224: a 20 × 7 grid of 32 × 32 tiles. No colour is set;
RGBAQ comes from the GS state before it. The register order in the tag is not known statically (§7, run R2).
**Answered (§7.1, R2):** mem[9] = PACKED, NLOOP 2, NREG 2, EOP, PRE 0, REGS [NOP XYZ2] (the first qword holds a UV
the GS drops: these sprites are untextured, PRIM 0x246 = sprite, ABE, context 2) or [UV XYZ2] (textured) in other
grids of the same program: goro runs 32 grids per frame, 1,060 [NOP XYZ2] and 1,120 [UV XYZ2] sprites. mem[0..1]
hold the UV corners (0,0)-(32,32), mem[2..3] the XY corners (1728,1936)-(1760,1968) at Z = 2³¹, mem[4..7] the steps
(32, 0) and (0, 32).

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

Census of the classified frame (capture − 1) of the 12 framedbg scenes with the same grouping and first-match rules
as `remaster/classify.py`; the primitive counts match `mksm/notes/remaster.md:120-134`. Reproduce with
`python3 -I decomp/notes/tools/gs_features.py <framedbg dir> remaster/categories.json` (`gs_chain.py` lists the
ordered draws with their targets, `gs_rtt.py` the render-to-texture links, `gs_valpha.py` the vertex-alpha census of an
`PS2_RTRACE` log). Short names: gs.wgsl = `runtime/src/gs/gpu/gs.wgsl`, gpu.cpp = `runtime/src/gs/gpu/gpu.cpp`,
D = `remaster-data`.

### 4.1 Facts that shape the design (and corrections to the starting brief)

1. **The state space is small.** 11 blend equations (ABCD); with FIX they make 29 (ABCD, FIX) pairs in the classified
   frame, 38 over the 3 dumped frames because FIX fades frame to frame ("about 41" overcounted). No REGION_CLAMP or
   REGION_REPEAT, no lines, no points. CLUT is always CT32, CSM1, CSA 0, CLD 1. COLCLAMP = 1 and PABE = 0 in every
   traced primitive (academy 36,953, koop 22,129: `D/speckle/*/run.log`). DTHE is stored (`gs.cpp:775`) and never read
   by either renderer, AA1 is not emulated: the approved look has no dithering.
2. **Every gameplay frame has the same shape** (all 8 gameplay scenes):

   | Step | Draws | Size |
   |---|---|---|
   | 1 | full-screen clear sprite (draw 0), writes Z | 1 |
   | 2 | one 3D run on FB 0x46 (or 0) + Z 0x8c | 19.6k-60.6k prims, ≥ 96 % of the frame's primitives |
   | 3 | shadow prep: Z → 0x12c as Z24 (FBW 5) → re-read as CT32 (TBW 10) → 0x14c → Z24 subtract | small |
   | 4 | blob shadow, effects | 18-207 prims |
   | 5 | glow on 0x8c (aliases Z) | 1,020 prims |
   | 6 | upsample onto the frame, HUD | 424-570 prims |

   **No draw of the 3D run samples a render target.** The 3D run is a clean, self-contained block to move natively.
3. **The shadow-prep chain is dead.** Leaving out its groups (b6e0c33b, 1a642d6a, a8925176) or the alpha-only sprite
   f07a1f7a changes **0 pixels** in every scene with an isolation image (`D/framedbg/<scene>/iso/<group>.png` vs
   `frame.png`); nothing reads 0x14c in any frame.
4. **The FBMSK 0x7f000000 alpha marking is not consumed** (inference from data flow): frame alpha is reset to 0 four
   times per frame by full-screen `2221` NEVER/FB_ONLY sprites (560 such primitives in the traces, all Av = 0), DATE in
   the HUD only sees alpha written after the last reset, and the display has no PMODE alpha merge (`gs.cpp:1077-1093`).
5. **A quarter of Foundry's primitives are GS no-ops**: ATST NEVER + AFAIL KEEP, 15,890 of 62,710 (groups 9eacbd05 on
   672fef39 and 9a62bf49 on ad5f3626: the dead third character pass of §3.4). This is the "largest group changes no
   pixel" of `remaster.md:101-102`; academy, kahn and nether have 4.9-5.6k each. Today they are parsed, set up,
   binned and walked (no early-out in `gpu::draw`; the raster returns at `gs.wgsl:1038-1040`). **Dropping them is
   exact in any renderer, including today's.**
6. **GS memory is not in the state hash** (`runtime/src/system.cpp:472-475`). Savestates do read the full scaled VRAM
   (`gpu.cpp:2004-2032`), so a native path must write back before a save.

### 4.2 Census per category

Constant unless a row says otherwise: FRAME CT32 FBW 10 (640), FBP 0x46/0 (double-buffered); ZBUF Z24 at 0x8c;
SCISSOR 0-639 × 0-223; TEXA ta0 0x80, aem 0; MTBA 0; per-scene FOGCOL.

| Category (prims, 12 scenes) | PRIM | Blend (ABCD, FIX) | TEST | Z | FBMSK / FBA | Texture | Filter / wrap | Fog |
|---|---|---|---|---|---|---|---|---|
| character (92,996) | tristrip IIP | 0121 F128 (= Cs) 52.8k; **2221 + NEVER/KEEP no-op 31.3k**; 0101 5.9k; 0211 3.0k (foundry) | GEQUAL 0x4 KEEP; NEVER KEEP; GEQUAL 0x3C RGB_ONLY (academy, nether) | GEQUAL write (GREATER for the 0x3C pass) | 0 / fba0 (fba1 koop) | T8/T4 + CT32, HIGHLIGHT2 (base), MODULATE; 64²-256² | bilinear, no mip / CLAMP | no |
| character_highlight (44,496) | tristrip | 0211 (Cs·Ad + Cd) 42.4k; 0121 F128 2.1k | GEQUAL 0x4 KEEP | GEQUAL write | 0 / fba0 | T8 MODULATE 128² | bilinear / CLAMP | no |
| character_shading (14,022) | tristrip | 1202 (Cd·As) | off | GEQUAL write | 0 / fba1 | T4 512×256 (goro, raiden), T8 256² (forest), **HIGHLIGHT** (As = At + Av) | bilinear / CLAMP | no |
| world (72,078) | tristrip (3 trifans in koop) | 0101 ~69k; 0201 638; 0121 F114/117 132 (raiden); 2221 + FBMSK 0x7f 6 (koop) | **GEQUAL 0x80 RGB_ONLY**; GEQUAL 0x5 KEEP; NEVER RGB_ONLY (untextured) | **GREATER** write | 0 / **fba1** | T4/T8 MODULATE TCC1; 32²-512² | **trilinear** (L_MIP_L, MXL 2, LCM 0, K −35.94…−10.94) or bilinear; REPEAT/CLAMP | mostly |
| world_alpha (18,361) | tristrip | 0101; 0201 49 | GEQUAL 0x80 RGB_ONLY | GREATER write | 0 / fba1 | T4/T8 MODULATE ≤ 512² | trilinear | yes |
| sky (3,127) | tristrip | 0101; 0201 228 | GEQUAL 0x80 RGB_ONLY | GREATER, **ZMSK** on 1,382 prims | 0 / fba1 | T4/T8 ≤ 1024×256 | bilinear or trilinear (K −12.5) | no |
| post_fx (19,120) | sprite | 0221 F18-23 (18 glow taps); 0222 F128/32/42/45 (downsample, self-multiply); 2021 F0/21/27/**255** (clear by blend, tint subtract); 0221 F0/10/13 (tint add); 2221 (alpha only); 0221 F32 (upsample); 0122 / 0222 Z24 (shadow prep) | off; NEVER FB_ONLY | ALWAYS, ZMSK | 0 / fba0; targets 0x8c (= Z), 0x12c **Z24 FBW 5**, 0x14c CT32 **and** Z24 | CT32 or **Z24** targets read as 1024² DECAL, FST | point (bilinear on the upsample) / CLAMP | no |
| effects (2,007) | sprite, tristrip, trifan | 0101/0201 sprites; 0201 strips (nether 1,090); 0221 F58-60 (raiden); 2221 FBMSK 0x7f | GREATER 0 KEEP; GEQUAL 0x80 RGB_ONLY; GEQUAL 0x5; **DATE** (raiden, 142 prims) | GREATER (ZMSK on sprites); GEQUAL trifans (ZBP 0x12c for the marking) | **0xff000000** on sprites; 0x7f000000 + fba1 | T4/T8 64² | bilinear / CLAMP | trifans |
| hud (1,096) | tristrip IIP0 | 0101; **2201 (alpha only)** | GEQUAL 1 KEEP; NEVER RGB_ONLY; **DATE** datm1 / datm0 | ALWAYS, writes Z | 0 / fba0 | T8 128²-512×256, some FST | point or bilinear | no |
| ui (212) | tri IIP0 | 0101 | GREATER 0 RGB_ONLY | GEQUAL write | 0 | T8 (13 sizes), 4 untextured | bilinear / REPEAT | no |
| shadow (141) | tristrip, trifan | 0101 untextured; 2221 | NEVER RGB_ONLY | GEQUAL (no Z write); marking trifan on ZBP 0x12c | **0x7f000000 + fba1** on the marking trifan | - | - | yes |
| clear (11) | sprite | off | off | ALWAYS write | 0 | - | - | no |
| movie (1) | sprite FST | 0101 | off | ALWAYS ZMSK, Z32 at 0x70 = FBP | FBW 8 (512×448) | CT32 1024² | bilinear | no |

The 11 equations, Cv = ((A − B)·C >> 7) + D:

| ABCD | Equation | Prims | FIX | Categories |
|---|---|---|---|---|
| 0101 | (Cs − Cd)·As + Cd | 100,190 | - | most |
| 0121 | (Cs − Cd)·FIX + Cd | 55,018 | 128 (= Cs), 114, 117; 104-128 over 3 frames | character, highlight, world |
| 0211 | Cs·Ad + Cd | 45,364 | - | character_highlight |
| 2221 | Cd (writes alpha only) | 37,133 | 0 | character no-ops, post_fx, shadow, effects |
| 1202 | Cd·As | 14,022 | - | character_shading |
| 0221 | Cs·FIX + Cd | 8,833 | 0-60 (0-115 over 3 frames) | post_fx, effects |
| 0201 | Cs·As + Cd | 2,431 | - | world, sky, effects |
| 0222 | Cs·FIX | 2,080 | 32, 42, 45, 128 | post_fx |
| 2021 | Cd − Cs·FIX | 1,440 | 0, 21, 27, 255 | post_fx |
| 0122 | (Cs − Cd)·FIX | 1,120 | 128 | post_fx (the dead chain) |
| 2201 | Cd, alpha only | 26 | - | hud (DATE) |

Alpha above 0x80 in the data: 1,229 of 1,232 dumped textures have At ≤ 0x80 (3 T4 textures go higher,
`D/textures/dump`). Vertex alpha: world ≤ 0x80 except 92 of 28,638 koop vertices (≤ 0x88); highlight passes exactly
0x80; character base passes 0; **effects sprites reach Av 0xF5**, i.e. an As ≈ 1.9 factor in a lerp. Ad seen by the
highlight pass is ≤ 0x80 (inference: the alpha reset writes 0 after the world, then the base pass writes At ≤ 0x80).
character_shading's As (HIGHLIGHT, At + Av) is not in the traced scenes: run R5 (§7).

### 4.3 The common native design

- **Vertices** (Seam V): upload the batch's vertex data as it would leave VU1 into a storage buffer and expand strips
  and fans in the vertex shader by `vertex_index` (vertex pulling): kill triangles whose kick vertex has ADC = 1,
  take the flat colour (IIP0) from the GS provoking vertex (the last), turn a sprite into 6 vertices. The CPU then
  works per GIF tag, not per vertex; today `gpu::draw` builds a 28-word record with edge setup and a bbox per
  primitive (`gpu.cpp:1676-1764`) and the queue carries 6.4-10 MB per frame. The guard-band cull of §3.3 is applied
  where the strip is expanded.
- **Position**: target xy = GS xy × SCALE (+0.5 so sample k lands where `gs.wgsl:1347-1353` puts it today), clip w = 1;
  colour, fog and STQ with `@interpolate(linear)` (screen-linear like the GS), divide by q per pixel as
  `gs.wgsl:937-947` does. Same semantics; different rounding.
- **Colour target**: `rgba8unorm` holding integer/255, with the integer TFX and fog arithmetic of `gs.wgsl:960-1003`
  in the fragment shader, so the value written is exact. **Store alpha as min(A, 128)/128**: then the fixed-function
  SrcAlpha/DstAlpha factors are As/128 and Ad/128 directly, and bit 7 stays testable (stored 1.0 ⇔ A ≥ 0x80). Losing
  A > 0x80 in the target is invisible by §4.1.4 (inference; the per-category gate checks it).
- **Depth**: `depth32float` = Z/2²⁴ (represents Z24 exactly); compare greater / greater-equal / always; ZMSK →
  depthWriteEnabled false; ZTE = 0 → no Z write (`gs.wgsl:1117`). Interpolation rounding differs from today's
  float base + deltas, so depth ties can differ (perceptual); the three character passes stay consistent through the
  shared transformed vertices of §3.6.

### 4.4 Feature by feature

| GS feature | Where | WebGPU technique | Exact vs today |
|---|---|---|---|
| ATST NEVER + KEEP | character 31.3k | drop at the GIF tag on the CPU | **exact** |
| ATST + KEEP | character, hud, effects, world 0x5 | `discard` | **exact** |
| ATST NEVER + RGB_ONLY / FB_ONLY | shadow, hud, effects, post_fx | static writeMask (RGB / RGBA), depthWrite off | **exact** |
| ATST GEQUAL + **AFAIL RGB_ONLY** | world, world_alpha, sky (0x80), character 0x3C, ui | two pipelines per draw: pass = full write; fail = inverted test + `discard`, writeMask RGB, depthWrite off (PCSX2's split) | **perceptual**: within one draw, pass and fail pixels are written in a different order (foliage edges) |
| lerp 0101, 0121 (FIX ≠ 128) | most 3D | SrcAlpha/OneMinusSrcAlpha or Constant | **perceptual**: ±1 LSB (hardware rounds, the GS floors); **As > 0x80 clamps** (effects sprites up to 1.9×, koop world ≤ 1.06×) |
| 0121 FIX 128 | character base | blend off | **exact** |
| additive with a source factor (0201, 0221, 0222) | effects, post_fx, sky | shader outputs ⌊Cs·C/128⌋/255, blend One/One; unorm saturation = COLCLAMP, so factors > 1 stay exact | **exact** |
| 2021 (Cd − Cs·FIX, FIX up to 255) | post_fx | shader outputs ⌈Cs·C/128⌉, ReverseSubtract One/One | **exact** |
| 0211 Cs·Ad + Cd | character_highlight 45k | Src factor DstAlpha (Ad/128 under the A/128 storage), Dst One | **perceptual** ±1 LSB; exact only with a per-draw Ad snapshot (~100 bbox copies per frame) |
| 1202 Cd·As | character_shading 14k | Src 0, Dst SrcAlpha; if As > 0x80 the factor clamps: multiply by As/256 then a doubling pass (Src DstColor, Dst One) | **perceptual**; As range pending (R5) |
| 2221 / 2201 alpha only | post_fx, hud, shadow | writeMask ALPHA | **exact** |
| FBA | world, sky, character (koop) | output alpha 1.0 when FBA. World: pass pixels have As ≥ 0x80 → factor 1.0 anyway; fail pixels write no alpha. Elsewhere dual-source blending (`dual-source-blending` feature, WGSL `@blend_src`) or a split alpha pass | exact for the stored alpha |
| **DATE / DATM** | hud (6 pairs per frame), raiden effects (142 prims) | keep on compute (hybrid). Native: end the pass, stencil pre-pass from colour bit 7 (`depth32float-stencil8`), stencil EQUAL | exact on compute; native ignores alpha written inside the same draw → perceptual |
| FBMSK 0xff000000 | effects, hud | writeMask RGB | **exact** |
| **FBMSK 0x7f000000** + FBA | shadow, effects, world (≤ 12 prims per frame) | under the A/128 storage: alpha-only write of 1.0 (= set bit 7); or skip it (unconsumed, §4.1.4) | exact under the representation; its ZBP is the dead 0x12c buffer |
| **Z as texture**, Z24 ↔ CT32 reinterpretation, FBW 5 → TBW 10 page remap | post_fx shadow prep | not expressible with WebGPU textures. Skip it natively, or run it on compute after a Z write-back | skipping = **0 pixels** (measured, §4.1.3) |
| **Glow self-feedback** (19 self-reads per frame, 2:1 down, 1:2 up) | post_fx | ping-pong `rgba8` targets at scaled 320×112. Today each tap reads the state at its texcache run start (new-draw / reload / same inside a tap: `texcache.cpp`, `gpu.cpp:1780-1786`); to match, split the ping-pong at the same reload points (1-10 runs per tap). Down/upsample must copy the F_RT_HIRES sampling (`gs.wgsl:676-724`) | exact if the runs are mirrored, else perceptual |
| glow buffer aliases Z (FBP 0x8c = ZBP) | post_fx | separate textures; safe because draw 0 of every frame is a full-screen clear that writes Z (all 11 non-FMV scenes) | **exact** |
| T8/T4 + CT32 CLUT | all textured | GPU decode kernel (`gs.wgsl:1294-1316`) into an `rgba8` texture cache keyed by TEX0 + CLUT slot (`gpu.cpp:1313`) + page write generations | **exact** texels |
| bilinear / trilinear | all | hardware sampler + `textureSampleLevel` with the LOD of `gs.wgsl:726-735` (−log2\|q\|·2^L + K) and the MMIN rules of `gs.wgsl:737-785`; today uses float fractions with +0.5 rounding (`blend4`, `gs.wgsl:787-797`), not GS 4-bit fractions | perceptual (8-bit hardware weights); exact alternative: 4 × `textureLoad` per level, today's cost |
| mips (MTBA 0) | world, sky | decode the MIPTBP1 levels into a mip chain (MIPTBP1 is not in draws.ndjson: `drawdbg.cpp:92-102`; R6) | exact |
| REPEAT / CLAMP | all | sampler repeat / clamp-to-edge (power-of-two sizes, no REGION_*) | **exact** |
| COLCLAMP | - | only 1 is seen = unorm saturation; a 0 (wrap) would go to compute | exact |
| PABE, DTHE, AA1 | - | PABE always 0; DTHE and AA1 not emulated today | nothing to do |
| SCISSOR | all | `setScissorRect` × scale | **exact** |

### 4.5 Per category: pipeline and gate

| Category | Native pipelines | Gate |
|---|---|---|
| character | 0121 F128 blend off + discard; 0101 and the 0x3C pass as an AFAIL split; 0211 DstAlpha; drop NEVER/KEEP | exact except the 0x3C split and 0211 → perceptual |
| character_highlight | DstAlpha additive | perceptual (±1 LSB) |
| character_shading | Cd·As multiply (+ doubling if As > 0x80) | perceptual, pending R5 |
| world, world_alpha, sky | trilinear + fog + lerp, AFAIL split | perceptual (split order, lerp rounding, filtering, depth ties) |
| effects | additive exact; lerp sprites with As up to 1.9 clamp; DATE strip on compute | perceptual |
| shadow | static RGB-only mask; skip the marking | exact / 0 px |
| post_fx | native ping-pong, or keep on compute | exact on compute; native exact only if the texcache runs are mirrored |
| hud, ui, clear, movie | keep on compute (small, DATE) | exact |

### 4.6 What stays on the compute GS, and the hybrid

Today's renderer (read from the code):

- **VRAM** is one storage buffer, `array<atomic<u32>>`, 4 MiB × samples (`gpu.cpp:1500`, `gs.wgsl:5`), PS2-swizzled
  word address with the samples interleaved per word: index = gsword·S + k, k = sub_y·SCALE + sub_x
  (`gs.wgsl:221-242`); sub-word writes by atomicAnd/Or. 36 MiB at 3×, 72 MiB at 3x6, 96 MiB at 4x6. There is no 1×
  copy on the GPU; the CPU copy (`gs.cpp:43`) is current only for the soft GS or the texture pack.
- **Textures** are sampled live from scaled VRAM (fetch → address → convert, CLUT and TEXA inside:
  `gs.wgsl:585-673`), with an optional per-submit decode for batches over 64 primitives (`gpu.cpp:512-544`); render
  targets are read from the same VRAM at sample k (F_RT_HIRES for non-1:1 sprites, `gpu.cpp:1645-1669`).
- **Per primitive on the CPU** (`gpu::draw`, `gpu.cpp:1622-1842`): setup cache, the 28-word record (1676-1764),
  hazard checks (1771-1792), append to the batch (1793-1841, up to 64k prims); flush per FRAME/ZBUF change; CPU
  binning into 16×16-sample tiles (`gpu.cpp:399-450, 647-742`); one raster dispatch per batch, one workgroup per tile,
  one thread per sample walking the tile list in order (`gs.wgsl:1339-1380`). All dispatches of a submit are in one
  compute pass (`gpu.cpp:1043-1092`).
- **Present**: `display` compute (VRAM → linear scratch, `gs.wgsl:391-413`), then `blit.wgsl` into the swapchain.

**A render pass cannot attach VRAM** (a swizzled buffer with interleaved samples), so native targets are textures,
and the hand-off is a conversion. The frame shape (§4.1.2) makes it a single hand-off per frame:

1. Native: clear → the whole 3D run → blob shadow → effects, into an `rgba8unorm` colour + `depth32float` target at
   the output resolution, `loadOp: clear` from the draw-0 clear sprite (no import needed). Skip the dead shadow prep
   and the FBMSK marking.
2. **Write back colour only** into the current FBP of the compute VRAM (Z is dead after the effects: the glow
   overwrites its pages and the next frame clears it). A kernel with one thread per sample: `textureLoad` at
   (x·SCALE + k % SCALE, y·SCALE_Y + k / SCALE) (the mapping of `gs.wgsl:408, 1347-1351`), then a CT32 `atomicStore`
   through the swizzle table (as `copy_write`/`upload`, `gs.wgsl:278-347`); A = round(stored·128). 640·224·S·4 bytes:
   5.2 MB at 3×, 10.3 MB at 3x6, 13.8 MB at 4x6, plus as much read: about 0.05-0.15 ms on the RTX 4050 (estimate).
3. Glow, HUD and present stay on compute, unchanged: 1,020 + ~500 sprites, about 0.35 ms of render-thread time
   (drawdbg, inflated).

What the hybrid needs in `gpu.cpp`: a command kind that ends the compute pass, records the render pass and reopens
the compute pass (the submit worker's job carries it too); page ownership (native-owned FB/Z pages marked in
`g_rendered`/`g_rt_pages`), so that any compute draw, texture read, local copy, download or savestate that touches
them triggers the write-back first, and uploads to them invalidate. Import (VRAM → texture) is needed only after a
savestate load or when a frame does not start with the full clear (menus and the FMV stay on compute); a depth import
needs a full-screen pass writing `frag_depth` (WebGPU has no buffer → depth copy). One queue keeps the order.

**What stays on compute as a fallback, permanently or per frame**: path 2/3 (HUD, UI, clear, movie, the DATE pairs),
the glow chain until stage 5, any draw with a feature outside the native set (COLCLAMP 0, a new blend, a render-target
read inside the 3D run), and whole frames that do not start with the clear (menus, FMV, load screens). Because the
compute GS keeps per-sample VRAM, falling back is per draw within the 3D run too, at the price of a write-back +
import pair around it; the frame shape makes that rare.

## 5. Staged plan

### 5.1 Where the frame time goes today (inputs to the estimates)

All laptop numbers (RTX 4050 Laptop GPU, i7-12700H); power profiles differ between sources, so compare within a row.

| Source | Foundry (worst scene) | Others |
|---|---|---|
| CPU threads, 1× (`D/perf-cpu/*/stat.txt`, 10-19, perf stat) | render thread **11.34 ms, 100 % busy → 88 fps**; VU1 thread 8.11 ms (123 fps); EE 7.49 ms (133 fps) | - |
| CPU threads, 3x6 + pack + widescreen, with the submit worker | render 29.1 ms at 88 %; **gpusubmit 31.0 ms at 93 % (GPU-bound)**; VU1 13.4; EE 13.9 → 30 fps | academy: gpusubmit 100 % |
| GPU stages, 1× (`D/check/<scene>/gpu.txt`) | 11.02 ms: raster 7.98, load_clut 1.63, snapshot 0.46, decode 0.46, upload 0.49 | academy 7.38, nether 6.43, raiden 4.50, goro 4.53 |
| GPU stages, 3× (`D/check-s3/<scene>/gpu.txt`) | 18.28 ms (raster 14.61) | 10.3-17.1 ms (raster 8.2-13.7) |
| GPU stages, 3x6 (`D/gpuwork/{gfinal,s0}-<scene>/gpu.txt`) | 20.9-21.3 ms (raster 17.0-17.4) | academy 16.9-18.5, raiden 19.1-20.8 |
| fps 3x6, latest (commit 1bd1d52) | **49.2** | academy 63.0, nether 62.9, raiden 59.9 |
| front-end split (drawdbg, single-threaded, inflated: ratios only) | GIF parse 17.49 ms, draw 7.45 ms (`remaster.md:99`); draw-ms by category: character 3.98, highlight 1.81, world 1.21, post_fx 0.35 → **3D ≈ 95 %** | parse 1.4-2.6, draw 2.1-4.5 |
| raster breakdown, Foundry 3x6 (`remaster.md:212-215`) | list walk + setup ~4.7, edge/interp/per-pixel ~7.8, texture sampling ~6, frame/Z traffic ~2.7 ms: no single hotspot | - |

So: at 1× the render thread (GIF front end) binds; at 1440p (3x6) the compute raster binds. Both scale with the
**primitive count of the 3D run**, which is ≥ 96 % of every gameplay frame (§4.1.2). The VU1 thread (8-13 ms; the
hottest program is the character body stub C824…, `remaster.md:220-222`) and the EE (7.5-14 ms, part of it spinning on
GS CSR reads) are the next ceilings at 110-133 fps. 60 fps at 1440p needs ≤ 16.7 ms on every thread.

A native draw of the whole 3D run is small work for the GPU: 20-60k triangles with one or two texture fetches per
pixel at 2560×1344 is well under 2 ms on this GPU (estimate; measured in stage 1).

### 5.2 Stages

Each stage is behind a runtime switch (`PS2_NATIVE=off|<categories>|all`, default off), is a rendering-only switch
(never part of the lockstep identity, because it must not change state: verified, not assumed), and keeps the
emulated path as the reference.

**Stage 0: tooling and exact wins (no native rendering yet).**
- Drop ATST NEVER + AFAIL KEEP primitives at the GIF tag in today's `gpu::draw` and `raster.cpp` (§4.1.5): exact by
  construction, 25 % of Foundry's primitives, 5k in academy, kahn, nether. Optionally drop the dead shadow-prep chain
  (0 px, §4.1.3; GS memory is not hashed) behind its own switch.
- The record capture for Seam V (§2.1): on the VU thread at MSCAL/MSCALF/MSCNT (`vif.cpp:283-287`), write (image key,
  entry, VU1 mem[0..45], the batch at TOP, BASE/OFFSET/TOPS, the A+D state) per batch to a file. Run R2/R3 (§7).
  **Done** (`PS2_TRACE_SEAMV`, `remaster/seamv.py`; R2, R3, R4 and R8 run: §7.1). The record also carries each
  UNPACK's DMA source and the packed data of the post-MSCNT colour UNPACKs.
- An offline harness (`remaster/natrec.py` + a headless wgpu test binary) that replays records through the WGSL
  shaders and through `vu_micro.cpp` and compares per vertex: XYZ (12.4), Z, Q, STQ, RGBA, fog, ADC. This is the
  oracle for §3's "must be exact" list, before anything is drawn. The records feed it directly: `PS2_TRACE_SEAMV_REGS=1`
  adds the VU1 registers at every program start, so any body can be replayed on its own. A world batch's colours are
  in the next record (§7.1, R2).
- **The per-category diff tool**: `remaster/natdiff.sh <scene> <category>` runs the scene twice to the capture frame
  (state from `remaster/scenes.tsv`): (a) emulated, with every other category skipped by group (the framedbg isolation
  mechanism, `PS2_DRAW_SKIP`), and (b) native for that category only on a cleared target; then `natdiff.py` compares
  colour and depth inside the category's mask (`D/framedbg/categories/<cat>.png`), writing a heatmap PNG and a JSON
  line: max |Δ| per channel, % of pixels with |Δ| > 2, PSNR, depth-tie mismatches. Thresholds per category from §4.5:
  exact categories must be 0; perceptual ones get a threshold Cem approves from the heatmaps (the approved look is the
  reference, not a metric).
- fps effect: the no-op drop alone, Foundry: render thread −15-25 % (its share of character draw time), GPU raster
  −10-20 % (they are binned and walked today). Estimate 49 → 53-56 fps at 3x6. Exact, so the gate is `check.sh` 12/12.
- Risk: none for state; the record files are large (cap per frame).

**Stage 1 (first milestone): world opaque, native, side by side.**
- Category: world, programs 567ce7d8 and 002c80ed (plus 50bda0e2 in goro), opaque only (blend 0101 with As ≥ 0x80 and
  the AFAIL split). One shader W (§3.6) with fog and the point light, trilinear sampling from a decoded T4/T8 cache,
  depth32float.
- Mode **side**: the emulated path renders everything as today; the native path renders the world records into a
  second target at the output resolution, shown in a split view (`PS2_NATIVE_VIEW=split|native|emulated|diff`). No
  hand-off yet, so this costs fps (both paths run).
- Mode **replace**: the world batches skip VU1 + GIF + compute raster; the native pass draws into the frame target
  first (the world run is the first 3D block after the clear: §1.3, §4.1.2), then writes back into VRAM before the
  first emulated draw that follows (characters). This is the full hybrid machinery of §4.6 with one hand-off.
- fps effect (replace): the world programs carry 19 % of Foundry's primitives, 28 % academy's, 35-43 % in raiden,
  goro and nether, 4-20 % in forest, kahn and koop (classified frame, by VU1 hash; the table below). Expect the render
  thread and raster time to drop by about that share, minus 0.1-0.3 ms of write-back: roughly +10-20 % fps at 3x6 in
  goro/nether, +5-10 % in Foundry (estimate). Small; the point of stage 1 is to prove the seam, the shader, the
  hand-off and the gate.

  Primitive share per category in the classified frame (`draws.ndjson`, by VU1 hash; "char dead" = the ATST NEVER
  third pass):

  | Scene | prims | characters | char dead | world | world_alpha | sky/shadow | c372c643 | post_fx | path 2/3 |
  |---|---|---|---|---|---|---|---|---|---|
  | foundry | 62,710 | 51 % | 25 % | 19 % | 0 % | 1 % | 0 % | 3 % | 0 % |
  | academy | 36,953 | 37 % | 13 % | 28 % | 13 % | 1 % | 2 % | 6 % | 0 % |
  | nether | 41,245 | 29 % | 12 % | 43 % | 5 % | 0 % | 4 % | 5 % | 1 % |
  | goro | 29,808 | 50 % | 0 % | 42 % | 0 % | 0 % | 0 % | 7 % | 1 % |
  | raiden | 28,364 | 44 % | 0 % | 35 % | 10 % | 2 % | 1 % | 8 % | 1 % |
  | koop | 22,129 | 43 % | 0 % | 20 % | 20 % | 5 % | 0 % | 10 % | 1 % |
  | kahn | 22,405 | 50 % | 25 % | 11 % | 3 % | 2 % | 0 % | 10 % | 0 % |
  | forest | 21,652 | 68 % | 0 % | 4 % | 15 % | 2 % | 0 % | 10 % | 0 % |
- Risks: AFAIL split order at foliage edges; trilinear LOD mismatch (K values down to −36); depth ties between native
  world and emulated characters (both write Z24; the native depth is exact Z/2²⁴, the interpolation differs) →
  characters could z-fight against the floor. Mitigation: the write-back also writes Z for the hand-off until stage 2.
- Verification: every frame's EE-visible state hash identical with `PS2_NATIVE=world` vs off (the `decomp/gate.sh`
  pattern, all reference scenes). In replace mode the natively drawn batches leave VU1 registers and outputs
  unwritten, so the comparison is `PS2_HASH_SPLIT=1` minus the `vifvu` and VU1 sections from this stage on (§6.2);
  side mode must match the full hash; `natdiff` world within the approved threshold in all 12 scenes; lockstep co-op with mixed
  peers (one native, one not) identical (`remaster/coop/test.sh pair … PS2_NATIVE=world -- PS2_NATIVE=off`).

**Stage 2: characters (3-pass set A, 1-pass set B).**
- Shader C with 1/2/3-bone switches and the three pass modes; positions computed once per batch (a compute pass into
  a storage buffer, then three draws) so the passes tie exactly in depth; the dead third pass (ATST NEVER) dropped;
  highlight 0211 with DstAlpha under the A/128 storage; shading 1202 multiply (doubling only if R5 shows As > 0x80).
  Affine texturing (Q = 1) kept in faithful mode.
- fps effect: characters are 76 % of Foundry's primitives (with the dead pass) and about 78 % of its draw time
  (3.98 + 1.81 of 7.45 ms), and run the hottest VU1 program;
  with world + characters native, the render thread loses most of its GIF work and the compute raster most of its
  primitives. Estimate: Foundry 1× render thread 11.3 → 3-4 ms, GPU 3x6 21 → 5-7 ms; the frame becomes EE/VU-thread
  bound (§5.1): 3x6 ~49 → 70-90 fps (estimate). This is the stage that reaches 1440p/60 in every gameplay scene.
- Risks: the 2²³ ambient bias and the raw-float colour write (§3.4; confirm with R3), bone-group batching (one MSCAL
  per bone group means hundreds of small draws: batch consecutive records with one storage buffer and an instanced
  draw per group), the 0x3C RGB_ONLY pass in academy/nether.
- Verification: as stage 1, plus the per-vertex record oracle for all six programs, and natdiff for the three
  character categories separately.

**Stage 3: the rest of the 3D run (world_alpha, sky, shadow, effects).**
- world_alpha and sky are shader W with CLIP cull; shadow is the untextured 8a4e53a2 path with a static RGB mask;
  effects mix VU1 (c372c643) and path-2 sprites/strips (the sprites go through the same vertex-pulling path from GIF
  packets). The DATE strip in raiden effects (142 prims) stays on compute.
- After this stage the hand-off is once per frame: native clear → 3D run → shadow → effects, one colour write-back.
- fps effect: small (these are ~10 % of primitives); the gain is structural (one hand-off, no Z write-back).
- Risks: As up to 1.9 in effect sprites (lerp clamps: perceptual gate), the guard-band cull for sky boxes.

**Stage 4: post FX (glow chain).**
- Native ping-pong at the output resolution's 320×112 equivalent, mirroring today's texcache runs for exactness, or
  accept a perceptual gate. Skip the shadow-prep chain (0 px). The write-back moves after the glow.
- fps effect: small (1,020 sprites, ~0.35 ms render thread plus their raster); the value is a resolution-correct glow
  and a base for the modern mode's bloom.
- Risks: the 18 self-reads; the 1:2 bilinear upsample at scale; FBP 0x8c aliasing Z (safe because of the draw-0 clear).

**Stage 5: HUD and UI.** Path 3 (0x37e578) and path-2 strips. Keep them on compute unless the HUD re-anchoring for
16:9 (`remaster.md` step 5) needs native quads; DATE stays on compute. fps effect: negligible.

**Stage 6: switch off VIF1/VU1/GS emulation for natively drawn frames.**
- For a frame whose draws are all in the native set, the VU thread stops executing VU1 programs (it still parses the
  VIF stream into records and keeps the VU1-memory shadow) and the compute GS draws only the leftovers (HUD/DATE, or
  nothing). VRAM is still kept current where a later reader needs it (savestates, menus, the FMV, texture uploads).
- fps effect: the VU1 thread drops from 8-13 ms to the VIF parse (~1-2 ms, estimate), removing the last
  render-related ceiling; the EE becomes the limit (~133 fps at 1× in Foundry).
- Risks and verification: everything in §6; this is the stage where the exactness traps bite, because the VU1 and GS
  no longer run. Gate: every frame's state hash in all reference scenes, `remaster/statecheck.sh`, lockstep co-op
  3000 frames with mixed peers, and a 30-minute soak per scene class (gameplay, menus, FMV transitions, pause, load).

**Then Seam E** (§2.2), category by category where it pays: whole-mesh static vertex buffers keyed by the model
pointer, a real bone palette (one draw per mesh instead of one per bone group), per-pixel lighting from the source
normals (the modern mode). Gated the same way, plus the decomp's own difftest for every decompiled function.

## 6. Exactness

From a read of the runtime (`runtime/src/`) and a static scan of every EE access to the render hardware
(`python3 -I decomp/notes/tools/io_access_scan.py [--fn <addr>] [--cop]`: memory ops on DMAC/VIF/GIF/GS/timer/INTC
registers, poll loops, bc0/bc2 waits, cfc2/ctc2 of VPU_STAT/FBRST).

### 6.1 The headline: render work costs no EE time in this runtime

- **No DMA, VIF, VU, GIF or GS code touches `c.budget`** (the EE clock). `budget`/`now()` appear only in
  `system.cpp`, `kernel.cpp:194` (run_guest refill), `kernel.cpp:268, 538` (alarms) and the `hw.cpp` timers;
  `vu_jit.cpp`, `vif.cpp`, `dmac.cpp`, `gif.cpp` have none.
- **Every DMA kick runs to completion inside the guest's CHCR store** (`dmac.cpp:448-455` → start 298 →
  `run_chain` 200-296 → `finish` 117-128): STR clears and D_STAT.CIS is raised before the store returns. Vblank is on
  a fixed EE-cycle schedule (`system.cpp:109, 302-325`).
- **The timing shadow already exists.** With the VU1 thread on, the EE thread runs VIF1 in `shadow()` mode
  (`vif.cpp:38`): it walks every VIF code and keeps the EE-visible VIF1 registers (DBF/TOPS/TOP/ITOP/ROW, MSKPATH3),
  scans DIRECT packets for SIGNAL/FINISH (`gif::scan_signals`, `vif.cpp:307-309`), and posts the payloads to the VU
  thread, which does the real unpack, VU1 and GIF work. `mksm/notes/determinism.md` S2 measured VU1-thread mode equal
  to single-threaded full emulation over about 90k frames, also under `PS2_JITTER`.
- **The EE never consumes VU1 output or reads rendered data.** 0 EE accesses to VU1 memory over 35,860 frames
  (determinism.md S1; counter at `memory.cpp:55-61`), none in the static scan; VPU_STAT (`cfc2 vi29`) reads 0
  (`cop.cpp:30`), `bc2t` is `vu0_busy()` = false (`cop.cpp:57`), FBRST writes are ignored (`cop.cpp:47`), CMSAR1 is not
  implemented (`cop.cpp:48`). VU code has one outward path, `gif::transfer(1)` (`vu_micro.cpp:486, 693`). The VU1
  thread already drops PATH1 SIGNAL/FINISH scans (`gif.cpp:191`); the game emits no SIGNAL/FINISH/LABEL on any path
  (static scan, census 0); IMR = 0xFF00 masks every GS interrupt (sceGsResetGraph). 0 GS→EE downloads (TRXDIR is
  never 1).

So **skipping VU1 execution and the GS raster is free for EE state**, provided the EE side keeps doing exactly what
it does now. The answer to "does VU1 time affect EE timing" is no: nothing reads VU1 cycles. **Confirmed (§7.1, R8 and
R4):** with VU1 and GIF paths 1/2 never run, every section the EE can see is equal on every frame of every scene, in
both thread layouts and under `PS2_JITTER`, and the census counts none of the channels above.

### 6.2 Where the hash does change: render-internal sections

Two hashes: `hash_frame` (`PS2_HASH_LOG`, the gate; `system.cpp:518`, called from `vblank()` at `system.cpp:305`)
and `hash_part` (lockstep, 32 parts; `system.cpp:590-624`, from `host/lockstep.cpp:222` and `host/web.cpp:427`).

| State | hash_frame | hash_part | EE-readable | Changes when VU1/GS are skipped | Handling |
|---|---|---|---|---|---|
| EE CPU, VU0 regs, EE RAM, SPR | yes (`system.cpp:523-528`) | parts 0-31 | yes | **only if the seam alters EE code** (§6.4) | keep |
| scheduler, events | yes | part 0 | yes (`now()`) | no | keep |
| INTC, D_STAT, timers (`hw.cpp:304-314`) | yes | no | yes | no, while `finish()` stays synchronous | keep |
| DMAC channels (`dmac.cpp:474-488`) | yes | no | yes (sceDmaSend reads TADR at 0x384544/0x384554; STR polls) | no, while the tag walk runs | keep |
| `vif`: VIF0 and the EE-side VIF1 (`vif.cpp:434-464`) | yes | no | yes (`hw.cpp:197-198` → `g_units[1]`) | no (the shadow computes it) | keep |
| `vifvu`: the VU-side VIF1 (`vif.cpp:441-443`) | yes | no | **no** | yes in stage 6 (stays blank) | exclude, or hash `g_units[1]` in native mode (S2: equal at every vblank) |
| VU1 regs, TOP/ITOP, code, data, pending XGKICKs (`vu_micro.cpp:1093-1117`) | yes (`vu`) | **part 24** (`system.cpp:619-622`, `vu_micro.cpp:1079-1091`) | **no** | **yes, from stage 1 replace mode** (natively drawn batches leave VU1 outputs and registers unwritten) | exclude from both hashes for all peers; keep a full-hash debug mode |
| VU0 code and data | in `vu` | part 24 | yes (VCALLMS; VIF0 by D0 in fn_40e228) | no | keep: split `vu` into `vu0` + `vu1` |
| GS CSR/FIELD, IMR, BUSDIR, SIGLBLID (`system.cpp:545-549`) | yes | no | yes | no (VSINT, SIGNAL, FINISH are raised on the EE thread) | keep |
| GIF_STAT (`gif.cpp:227-230`) | yes | no | yes | no (M3P comes from the shadow's MSKPATH3) | keep |
| GS VRAM, draw state, display regs, GIF path state | **no** (`system.cpp:472-475`) | no | no | yes | already excluded; they are in savestates (`gs.cpp:1345`) |

**Gate consequence.** `remaster/golden.json`, `remaster/check.sh` and `decomp/gate.sh` compare the full hash. The
native gate is either a `PS2_HASH_SPLIT=1` comparison of every section except `vifvu` and VU1, or a new "EE-visible"
golden computed from emulated runs with the same exclusion. Lockstep: `hash_part` part 24 keeps VU0 and drops VU1; this
applies to all peers (a build-id change); `mksm/notes/web-lockstep.md:56` changes with it. The existing proof that
the VU JIT equals the AOT code (`native-lockstep.md:127`) relies on VU1 being in the lockstep hash: keep it as the
full-hash debug mode. `PS2_HASH_SPLIT=2` already prints the two halves of `vu` (`vu0x`, `vu1x`) next to the split
sections, outside the frame hash, so the gate can compare `vu0x` today without changing any golden. R8 (§7.1) also
shows which way `vifvu` goes: equal in the single-threaded layout (it hashes the EE-side VIF1 there), different in the
threaded one once the game's VIF1 registers move away from the values seeded at load.

A latent race seen on the way: `MSKPATH3` (VIF code 0x06) calls `gif::set_path3_masked` from both the EE-side shadow
and the VU1 thread, so a lagging VU1 thread could rewrite GIF_STAT.M3P behind the EE. MK:SM issues it once, during
boot, and never again (VIF1 code counts of every census run, §7.1), so it cannot bite in play; a native consumer should
still leave GIF_STAT to the shadow alone.

### 6.3 The channels by which the EE observes the render path

| Channel | Runtime | Timing | Trap | Handling |
|---|---|---|---|---|
| **D1 (VIF1) kick** | `dmac.cpp:448-455`, `run_chain` 200-296, `finish` 117-128 | synchronous in the CHCR store, 0 cycles | the game polls STR in fn_24e680 (0x24e6a4, 0x24e710; 19 callers, fn_241410 ×7, Gs_FlipFields), sceGsSyncPath (fn_382938), WaitDma; **each poll iteration charges budget**, so deferring the DMA, finishing it on another thread, or adding a cost model changes the iteration counts → `now()` → T0 → the flip pacing | keep the synchronous tag walk and `finish()`. Intercept at the DMAC/VIF level, not in fn_241410: D1 is also kicked at 0x2414ac, 0x241c00, via sceDmaSend at 0x241ad8, by fn_24bcd0, fn_24c7f8 (Gs_FlipFields, fn_273d78), fn_25efd0 (movie), and sceGsResetPath's FIFO writes |
| D1 register readback | `dmac.cpp:404-432` | - | sceDmaSend reads TADR; CHCR's upper half holds the last tag; TTE sends the tag's upper 64 bits as VIF codes (`dmac.cpp:237-242`) | run the walk exactly as now, TTE included |
| DMAC interrupt, CPCOND0 | `hw.cpp:185-188`, `kernel.cpp:410-433` | CIS raised in `finish()`, interrupt at the next preempt point | CIM1 is never set; `cpcond0()` is hardwired true (`cop.cpp:61`); fn_24e680 spins on `bc0f` at 0x24e6c8, fn_25efd0 at 0x25f00c | keep `finish()` |
| **D2 (GIF path 3)** | `dmac.cpp:167-193` → `gif.cpp:180-193` | synchronous | **fn_26d030 (TextureManager) stores its STR spin count (1 idle, 1000 busy) into a texture-queue entry at +12: EE-visible.** STR must read 0 at every kick. fn_22be18 and sceGsPutDrawEnv also poll it | keep D2 synchronous; keep the GS-memory writes for IMAGE transfers (textures stay current for a fallback and for savestates); skip only raster |
| toSPR (D9) | `dmac.cpp` | synchronous | fn_242ff8's wait loop counts its iterations into `[0x65e450]` (0x2431a8-0x2431c0, §1.6); fn_263cf8 also uses toSPR | keep synchronous; the seam must not touch it |
| VIF1 registers | `vif.cpp:380-402` | set by the code walk during the kick | fn_24e680 (0x24e758) and sceGsSyncPath poll VIF1_STAT & 0x1f000003 (VPS/FQC are never set in the runtime); DBF/TOPS/ITOP/TOP/ROW are EE-readable and hashed | the shadow (`vif.cpp:62-69, 144-148, 255-321`) |
| VIF1 i-bit stall | `vif.cpp:316-320, 404-419`; `dmac.cpp:288-291, 329-339` | synchronous: INTC 5, DMA pauses until FBRST.STC | the game's INTC 5 handler (fn_24d550) is dead code; an i-bit would hang fn_24e680 | the shadow keeps it; tripwire on any INTC 5 raise |
| VIF1 FIFO | `hw.cpp:273-277` (read), 288 (write) | - | reads would be GS downloads: 0 (census and scan); sceGsResetPath writes 2 qwords at init | route writes through the shadow; tripwire on reads |
| VU1 status and memory | `cop.cpp:30, 47-49, 57`; `memory.cpp:29-45` | - | none today; **modelling VPU_STAT/VBS1 later would couple EE polls to VU1 time** (the game polls VBS1 at 0x24e780 and 0x38299c) | leave hardwired; tripwire on `count_vu` |
| GIF_STAT | `gif.cpp:206-219` | - | polled for 0xc00 (0x24e798, sceGsSyncPath); APATH never set | keep MSKPATH3 in the shadow |
| CSR SIGNAL/FINISH/LABEL | `gs.cpp:826-842`, `gif.cpp:95-151, 191`, `vif.cpp:308` | scanned on the EE thread | the game emits none; the only reader (fn_2315d8, CSR/SIGLBLID at 0x231664) is dead | keep the scan on paths 2 and 3, drop path 1 (as today) |
| CSR VSINT/FIELD, INTC 2/3 | `system.cpp:109, 302-325`; `hw.cpp:134-138`; `gs.cpp:1026-1032`; `kernel.cpp:436-441` | fixed: every `frame_cycles()`, VBLANK_END 22 hblanks later | the vsync wait is a CSR.FIELD poll in fn_274688 (0x274790, interrupts off); the INTC 2 handler fn_26efe8 increments 0x67b79c and 0x678450 and wakes CRI | none needed |
| **Timers T0/T1 (flip pacing)** | `hw.cpp:51-113` | from `now()`, i.e. EE budget only | **fn_274688 reads T0 (hblanks since the last flip, reset per flip by fn_224000) and T1: if (t0 − t1) < 100 or t0 > 1000 it polls FIELD, else it skips the wait. That decides how many vblanks pass per game frame**, which reaches 0x678450 (Anim2D, the async loader, Map_LoadInPlace) and CRI wakeups | **the native path must leave EE cycles unchanged everywhere**, including the packet builders and every poll loop |
| GS downloads | `dmac.cpp:177-182`, `gs.cpp:887-913` | - | 0 in the census; the download cache is timing-dependent | tripwire |
| host threads | `queue.cpp:89-110` (backpressure blocks wall clock only); `system.cpp:428-433` (fence only for hash/save) | wall clock | - | the renderer never feeds anything back to guest state and never blocks the EE on a GPU result; whatever it needs from guest memory it copies on the EE or VU thread at the seam |
| cop0 | `kernel.cpp:879` (Count = `now()`), MFPC returns 0 | - | fn_24d8e8 adds PCR0 into an object at 0x24daa0 (constant 0) | never model performance counters |

### 6.4 The rule for the seams

- **Seam V** lives entirely behind the shadow: the EE thread keeps the full DMA tag walk (all tag ids, CALL/RET and
  ASR, TTE, MFIFO/fromSPR continuation, `finish()`), every VIF code (`data_words` and `execute`: STCYCL, OFFSET, BASE,
  ITOP, STMOD, MSKPATH3, MARK, STMASK, STROW, STCOL; MSCAL/MSCALF/MSCNT as DBF/TOPS/TOP/ITOP bookkeeping; FLUSH* as
  no-ops; the i-bit), a dry unpack only under STMOD = 2 (to keep the ROW accumulation, `vif.cpp:144-148, 170`), the
  GIF-tag walk + A+D scan of DIRECT payloads, and synchronous path 3 with its GS-memory writes. It charges 0 cycles,
  as today. The native consumer replaces the VU thread's `run_vu` at MSCAL/MSCNT (`vif.cpp:283-287`) with "emit a
  record"; it still applies UNPACKs to its VU1 data-memory shadow and MPGs to `g_vu1_code` (a cheap memcpy, so an
  emulated fallback has current microcode).
- **Seam E** is a **pure observer**: a decomp hook that records its arguments and returns false
  (`decomp_hook.hpp`: "Returns false to run the recompiled body"), or a decompiled function that still writes the
  chain bit-exactly. It does not change registers, memory or `c.budget`, and copies what it needs on the EE thread.
  **Skipping the packing to save EE time** would change EE RAM, the scratchpad (toSPR in fn_242ff8, fn_263cf8), and
  the budget, and through T0 the pacing: that is a decomp job under the `tick`/`poll` contract
  (`decomp/README.md`), never a renderer shortcut. The EE is not the bottleneck (§5.1), so there is no reason to.
- **Game state inside the render layer** (§1.4: the float timers at o+0x1a0 in fn_241410, the frame counter
  `[0x4f4d64]`, model/segment fields written by fn_249060, the `[0x65e450]` spin counter) keeps running in every mode,
  because the EE code that writes it is unchanged.
- Any future DMA cost model must be computed from shadow-visible quantities (QWC, tag count, VIF code count) in both
  modes, never from VU1 or GS work.

**Tripwires in native mode** (log once, mark the run invalid or fall back to emulation): `count_vu` (EE access to VU
memory), VIF1 FIFO reads (`hw.cpp:273`), D1 from-device (`dmac.cpp:177`), `gs::signal` (`gs.cpp:826`), an INTC 5
raise, CMSAR1 (`cop.cpp:48`), any D1 that pauses, a GS download, a frame that does not start with the full-screen
clear. All but the last now have a `PS2_CENSUS` counter (`vu1_mem_*`, `gs_download_*`, `gs_signal_path1..3`,
`gs_finish`, `gs_label`, `intc5_vif1`, `d1_pause`, `cmsar1`); native mode can turn them into tripwires as they are.

### 6.5 Lockstep, savestates, web

- **Build id**: it hashes `runtime/src` minus `gs/gpu` and texpack (`cmake/build_id.cmake:7-8`). The shadow switch and
  any seam hook belong in the id; the WebGPU draw code can live under `gs/gpu`.
- **`PS2_NATIVE` as a local-only setting** (`lockstep_id.cpp:45-52`) only after the gate proves EE-visible equality
  and `hash_part` no longer covers VU1; otherwise mixed peers false-desync on part 24.
- **Savestates and drop-in snapshots** carry VU1, `vifvu` and GS VRAM (`vu_micro.cpp:1093-1117`,
  `vif.cpp:434-473`, `gs.cpp:1345`). In native mode they go stale: wrong pixels on an emulated guest or an emulated
  fallback frame, not a desync (`vif.cpp:467-473` already reseeds a blank `vifvu` on load). Before a save, the native
  path writes its targets back into VRAM (§4.6); run R9 decides whether VU1 state needs rebuilding.
- **Web**: same `vif.cpp`/`dmac.cpp`, same design.
- **A fidelity gap found on the way** (not determinism): the game sets T1_MODE = 0x9F (gated, reset at each VBLANK);
  the runtime ignores gate bits 2-5 (`hw.cpp:51-113`), so T1 runs free and fn_274688 probably almost always takes the
  poll branch (inference). Fixing it changes the golden hash: a separate step, not part of this work.

## 7. Runs needed on AWS

Each says what it settles. "Light" runs only read a log afterwards; all of them need a build on the AWS box
(`decomp/README.md`, "Commands for the AWS box"). **R2, R3, R4 and R8 are done (§7.1)**; the others have not been run.

| Run | What | Why |
|---|---|---|
| **R1 draw attribution** | Retranslate with `eerecomp --probes <file>` listing the entries and return sites of fn_24cf08, fn_246cf0, fn_23df70, fn_23fa00, fn_23fcc0, fn_23e830, fn_263428, fn_266858, fn_2670a0, fn_2659b0, packet_anti_alias_or_blur, fn_27c898, fn_241410's kick sites; extend `probe()` (`runtime/src/dispatch.cpp:176`) to print `ld32(0x65e300)`; run goro, koop, nether, foundry with `PS2_PROBE_FRAME=<capture−1>` + `PS2_TRACE_DMA1=1` + `PS2_DRAW_DUMP` for the same frame | maps chain ranges → EE function → framedbg draw group: confirms §1.3's bucket/category table and §1.6's call/ref structure, and fixes the Seam E record per category |
| **R2 one-frame VIF/GIF trace** | `PS2_TRACE_GSFRAME=<frame>` (+ `PS2_DRAW_DUMP`) from a goro and an academy state | the vertex UNPACK formats (V4-16 vs V4-32, V4-8 colour), XYZF2 vs XYZ2, which registers mem[34..45] and in[1] set per pass, the post_fx tag layout, BASE/OFFSET values, whether the colour UNPACK lands before or after MSCNT for @3778 (§3) |
| **R3 VU1 constants dump** | a few debug lines next to `drawdbg::vu1_start` (`vif.cpp:284`) writing mem[0..45] once per (entry, hash) per frame | confirms the 2²³ ambient bias and light units (§3.4), P vs the clip matrix (guard-band size), fog A/B/min/max, the projector spaces of mem[24..31], the hook and scroll values, mem[33]; the start of the Seam V record format |
| **R4 coverage census** | `PS2_CENSUS=1 PS2_NO_VU_THREAD=1` over every gate scene plus boot → menus, movie (fn_25efd0), pause/save, finishers, each level; add counters for INTC 5 raises and paused D1 | the preconditions for excluding VU1 from the hash and dropping path 1: expect 0 VU1-memory accesses, GS downloads, signals |
| **R5 alpha range** | `PS2_GS=soft PS2_RTRACE=7999,320,112` on goro (and raiden at 6199), then `python3 -I decomp/notes/tools/gs_valpha.py <out>/run.log` (light) | HIGHLIGHT As = At + Av on character_shading: decides whether the multiply pass needs the doubling (§4.4) |
| **R6 missing registers** | add DTHE, MIPTBP1/2, COLCLAMP, PABE to drawdbg `flush_draw` (`drawdbg.cpp:92-102`), re-run `remaster/framedbg.sh` on all 12 scenes | mip-chain packing for the native texture cache; confirms COLCLAMP = 1 and PABE = 0 beyond two scenes |
| **R7 FBMSK marking** | a draw-level skip of the 0x7f000000 trifans (code change), then an isolation diff | proves the marking invisible (§4.1.4); it shares a group with the visible blob, so framedbg isolation cannot |
| **R8 null-sink equivalence** | a debug switch that makes `shadow()` true while the VU consumer discards kVif1/kVif1Write; `PS2_HASH_SPLIT=1` on every gate scene plus a `PS2_JITTER` seed | proves "skipping VU1 and GS is free" on today's code before any renderer exists: every section except `vifvu` and VU1 equal on every frame |
| **R9 transience** | from each gate state, zero at load (a) VU1 data + regs, (b) + VU1 code, (c) GS VRAM; 300 frames emulated; compare images and EE sections with an untouched load | whether native-made snapshots and native → emulated fallback need VU1, microcode or VRAM rebuilt |
| **R10 gate under the new definition** | recompute an EE-visible golden from emulated runs; `gate.sh`-style and `statecheck.sh` runs native vs emulated | the stage 1+ gate (§6.2) |
| **R11 mixed lockstep** | native vs emulated peer (desktop, then browser), 600+ frames, new `hash_part`; a drop-in from a native host to an emulated guest | `PS2_NATIVE` as local-only (§6.5) |
| **R12 perf baseline** | `PS2_SCALE=<1, 2x4, 3x6> remaster/perf.sh` for all 12 scenes in one recorded power profile; per-thread `perf stat` per scene; `perf record -g` of the render thread on a kept binary; three 3x6 captures per scene | the before numbers for every stage (§5.1 mixes profiles and dates) |
| R13 pacing (optional) | log T0/T1 and the branch taken in fn_274688 over one scene | documents that pacing depends only on EE cycles; sizes the T1 gate gap |
| R14 colour timing (new, §7.1 R2) | let a body that reads the RGBA slot (@3778, @3288) see the colour UNPACK that follows its MSCNT (run those bodies at the next VIF sync, or apply the UNPACK first), then compare goro's world colours with today's | whether restoring the point light matches hardware; a look change for Cem to approve, not a determinism question (no EE-visible effect, R8) |

Order: R8 and R4 first (they decide whether the plan's premise holds), then R2/R3/R1 (they feed the record format),
then R12 (baseline), R5-R7 as the categories come up, R9-R11 before stage 6.

### 7.1 Results of the stage-0 runs (2026-10-19)

All on the AWS box w5 (32 vCPU), soft GS, commits `d1ad43e`-`658ba0e`; with every switch off, the final build matches
`remaster/golden.json` in all 12 scenes (`remaster/statecheck.sh`). Switches and tools (all default off):
`PS2_VU1_NULL=1` (VIF1 walked as the EE-side shadow only; VU1 and GIF paths 1/2 never run), `PS2_HASH_SPLIT=2` (adds
`vu0x`/`vu1x`), the new `PS2_CENSUS` counters, `PS2_TRACE_SEAMV` (`runtime/src/seamv.cpp`), and the scripts
`remaster/nullsink.sh` + `nullsink.py`, `remaster/census.sh`, `remaster/seamv.py`. Outputs (not committed):
`remaster-data/aws/w5/{nat-r8,nat-r4,nat-rec,nat-rec2}`.

**R8, null-sink equivalence: the premise holds.** Every scene from its state to capture + 600 (goro 1,000, pause 900
frames), hashed every frame, in four layouts; jitter on goro, foundry and koop:

| Comparison | Scenes | Frames | Sections that differ (of 28) |
|---|---|---|---|
| single-threaded, null vs normal (`stn`/`st`) | 12 | 9,900 | `vu`, only its VU1 half (`vu1x`) |
| `PS2_THREADS=1`, null vs normal (`thn`/`th`) | 12 | 9,900 | `vu` (`vu1x`), `vifvu` |
| `thn` vs `st` | 12 | 9,900 | `vu` (`vu1x`), `vifvu` |
| `th` vs `st` (thread layout alone) | 12 | 9,900 | none |
| `PS2_JITTER=7`: `thj` vs `st`, `thnj` vs `thn` | 3 | 2,600 each | none |

The other 26 sections (eecpu, eeram, spr, sched, eekern, eehw, dmac, vif, ipu, gspriv, gif and the IOP, SPU2, SIF and
drive sections) and `vu0x` are equal on every frame. Why the two differ: `vu1x` because VU1 never runs and its MPGs are
skipped, from the first frame that uses VU1 (at once in gameplay, charsel 3168, fmv 4531; the menu run never uses it and
is equal in all 28); `vifvu`, threaded only, because the VU-side VIF1 never runs and keeps the copy seeded at load,
from the first frame whose VIF1 registers move away from it (goro 7822, foundry 14028, kahn 10096, koop 6865, raiden
6030, fmv 4531; never in the other six). The null frame at capture shows only the path-3 HUD; the normal single-threaded
run matches `golden.json` (goro 8000: db151828af4addc7).

**R4, coverage census: all zero.** `PS2_CENSUS=1 PS2_NO_VU_THREAD=1 PS2_TRACE_MC=1` (`remaster/census.sh`):

| Segment | Frames | VU1 starts (MSCAL / MSCALF / MSCNT) | Memory-card writes |
|---|---|---|---|
| boot (no state, story inputs) | 0-2300 | 0 / 6,081 / 0 | 0 |
| story (no state, story inputs) | 0-14600 | 773,935 / 1,508,742 / 5,574,742 | 0 |
| co-op from boot (koop inputs) | 0-6900 | 279,398 / 579,964 / 1,961,021 | 0 |
| menu, charsel | 2200-4000, 2500-4000 | 0 / 3,868 / 0; 0 / 2,668 / 0 | 0 |
| fmv (the movie and on) | 4000-6100 | 79,986 / 189,557 / 626,329 | 0 |
| raiden, goro | 6000-7700, 7600-10600 | 184,333 / 281,982 / 1,092,417; 256,403 / 457,082 / 1,815,914 | 0 |
| pause (start at 7700) | 7600-8600 | 69,229 / 128,549 / 495,909 | 0 |
| koop | 6800-8800 | 165,189 / 528,234 / 1,568,148 | 0 |
| academy, forest, nether, kahn, foundry | state + 2200 each | 365,200 / 717,200 / 2,805,000 in academy, similar elsewhere | 0 |
| save (`menu-f1600.state`, the options save of `mksm/notes/finishers-options.md` §O5) | 1600-4800 | (menus) | 4,130 |

51,100 frames in all. In every segment these are 0: `vu1_mem_read/write`, `vu1_code_read/write`, `vu0_mem_read`,
every `gs_download_*` (DMA, VIF1 FIFO, qwords, cached, wait), `gs_signal` on paths 1, 2 and 3, `gs_finish`,
`gs_label`, `intc5_vif1`, `d1_pause`, `cmsar1`. The only counters above 0 are EE-side: `gs_csr_read` (the vsync FIELD
poll in fn_274688 at 0x27477C/0x274790, billions of reads), one `gs_priv_read` and one `rtc_read` at boot. So nothing
the EE waits on comes from VU1, path 1 or the GS raster. Not covered: a finisher (no input script reaches one; the
scripted attempts in `finishers-options.md` fired none) and the ending's save prompt.

**R2 and R3: one-frame traces and Seam V records.** `PS2_TRACE_GSFRAME` at goro 7999 and academy 9999, and records of
goro 7998-8001 and academy 9998-10001 (`nat-rec`, `nat-rec2`). What they settle:

- **UNPACK formats.** Only four in a whole frame, all STMOD 0, CL/WL 4/4 except the colours, no V2/V3/V4-5, no USN:
  `V4-32 +TOPS` (world batch headers: tag, 2 A+D, vertex tag; character batches whole), `V4-32` absolute (constants),
  `V4-16 +TOPS` signed (world vertices: x, y, z, ADC word / s, t, q in 4.12), `V4-8` masked 0xffffff00, CL 3/WL 1,
  absolute (world vertex colours into the RGBA slots). VIF1 codes in use: NOP, STCYCL, OFFSET, BASE, FLUSHE, FLUSH,
  FLUSHA, MSCAL, MSCALF, MSCNT, STMASK, STROW, MPG, DIRECT and those UNPACKs; ITOP, STMOD and MSKPATH3 once each at
  boot and never again; no MARK, STCOL, DIRECTHL, no i-bit (R4).
- **Sources.** Every vertex and colour UNPACK reads static data (world meshes and the fighters' models), the same
  addresses frame after frame (97-100 % of them across consecutive frames; the rest is animation/visibility); the
  constants come from the frame chain. Seam V can key GPU vertex buffers by source address.
- **XYZF2** in every 3D vertex tag (PACKED, NREG 3, [ST RGBAQ XYZF2], PRE 0); XYZ2 only in the post-FX sprite tags.
- **BASE/OFFSET**: world 0x18/0x1f4 (buffers 0x18, 0x20c), characters 0x2e/0x1e9 (0x2e, 0x217), post FX whichever was
  set last. TOP alternates per program start.
- **The colour UNPACK lands after MSCNT**, in the output area of the batch that has just started (TOP+0xC9, every third
  qword). For the four bodies that never read the slot this is harmless (the held XGKICK picks the colours up through
  `vu::vif_wrote`); for @3778 (002c80ed) and @3288 (50bda0e2) it means the point light is computed from stale colours
  and then overwritten, so **today's output has no point light** where hardware would have one (§3.3; R14 checks it).
- **mem[34..45] and in[1]** per pass: §3.4 (pass A+D); the blends and tests match framedbg.
- **post FX tag**: §3.5.
- **R3 values** (goro unless said): world P = mem[0..3] (P·M per instance; the level geometry shares the characters'
  rotation rows); fog m4 = (min 171, max 255, -, A −18.7), m5.w = B 1.31e6 (academy 237/255, −61.3, 3.98e6); point
  light m6 = position, k −4.9e-7, m7 = (220, 175, 0), strength 1.0; hook: m16.w = 0x61c (@30E0, the UV scroll) with
  m17 = (0.087, 0) on 50bda0e2, 0 elsewhere. **The CLIP volume** (mem[12..15]) is |x − 2048| ≤ 2047.5 and
  |y − 2048| ≤ 860 GS pixels with the near plane at w = 100 (z' = w − 200): the whole 4096-pixel GS range across,
  about ±860 down; Z = 2.1475e9/w − 20.5. Characters: 2²³ bias on m11, m32, m44; lights, projectors and pass
  registers in §3.4. Set B in academy: one light. mem[7] (characters) = (−1, 0, 0, 1) or (0, 0, 2526, 1): role not
  known.

**The Seam V record** (`PS2_TRACE_SEAMV=file`, `PS2_TRACE_SEAMV_FRAMES=first,count`, `_MB` per-frame cap, default 32;
`_REGS=1` adds the VU1 registers). Little-endian records `u32 type, u32 length`: `F`/`E` frame start and end (counts,
dropped batches), `K` each code image once (FNV-1a-64 key + 16 KB), `C` mem[0..45] when it changes, `G` the GS
registers last set through paths 2/3 (PRIM, TEX0/1/2, CLAMP, XYOFFSET, PRMODE(CONT), TEXCLUT, SCANMSK, MIPTBP1/2, TEXA,
FOGCOL, SCISSOR, ALPHA, DIMX, DTHE, COLCLAMP, TEST, PABE, FBA, FRAME, ZBUF) when they change, `B` one per program start
(52-byte header: kind, entry, TOP/ITOP/BASE/OFFSET/TOPS, DBF, image key, the 8-hex hash of the entry and of the draw's
MSCAL, the C and G records in force; then one 24-byte entry per UNPACK since the previous start with its DMA source and
TOPS; the packed data of absolute UNPACKs above mem[45], i.e. the previous batch's colours; then the batch qwords at
TOP), `R` the VU1 registers. Sizes: goro 836 program starts and 1.6 MB per frame (2.1 MB with `_REGS`), academy 1,767
and 2.4 MB; about 2 KB per program start. A consumer must attach the colours in record k+1 to the batch of record k.

### 7.2 Stage 1 results: world opaque, mirror and replace (2026-10-19)

All on w5 with lavapipe (`PS2_GS=gpu PS2_GPU_FALLBACK=1`), 1x, compared with lavapipe runs of the same build or of the
base commit `52840a5`, never with `golden.json` images. Outputs (not committed): `remaster-data/aws/w5/nat1-*`,
`nat2-*`.

**What is native.** The three world programs (567ce7d8, 002c80ed, 50bda0e2): each batch is captured on the VU thread at
MSCNT (`runtime/src/native.cpp`: A+D, vf1..vf12, vf31, vi14, the 2n input qwords, the post-MSCNT colours) and drawn
by a WebGPU render pipeline (`runtime/src/gs/gpu/native.wgsl`). The vertex shader is the VU1 body with the VU's
arithmetic (IEEE RNE per op, no contraction, the VU clamps, DIV by chop, FTOI truncation, ESADD order); the fragment
shader evaluates the compute raster's `shade_at()` case 0 on the triangle the provoking vertex carries (positions,
1/area by RNE long division, inclusive edges, box), so barycentrics, colour, STQ, fog and Z are the compute raster's
expressions; the hardware only decides coverage. Texture, TFX, fog and the alpha test are `plot()`'s; the AFAIL
split, Z test and GS ALPHA map onto fixed-function state (C = Ad and PABE are refused).

- `PS2_NATIVE=world PS2_NATIVE_MIRROR=1`: side by side; VU1 and the emulated path draw as today, the native target
  only feeds `remaster/natdiff.sh <scene> world` (`PS2_NATIVE_CHECK=1` compares every vertex with the XGKICK).
- `PS2_NATIVE=world`: replace. VU1 skips the batch, so its GIF packet and its compute raster never happen; the render
  side applies the tags' PRIM and the A+D the packet would have set and draws natively. A run imports the frame and Z
  buffer and writes the target back to compute VRAM (only words that changed) before anything else touches VRAM.
  goro: 156,765 batches in 5,667 runs over 700 frames.

**Per-vertex oracle: exact.** 0 mismatches in X, Y, Z, F, ADC, S, T, Q, RGBA over 22.3 M vertices (8 scenes), and the
GS triangle count of every kick matches. ADC uses CLIP window 0 (windows 1 and 2 mismatch in goro and foundry).

**natdiff, world opaque isolated (commit `75caef7`):** mask = pixels either path changed in the dumped run.

| Scene | Mask px | max \|Δ\| R, G, B | % > 2 | % ≠ 0 | PSNR dB | Z mismatch px | Vertices checked |
|---|---|---|---|---|---|---|---|
| goro | 143,338 | 38, 48, 39 | 1.483 | 49.2 | 50.72 | 2 | 4,404,330 |
| academy | 56,263 | 64, 69, 42 | 0.841 | 41.8 | 49.38 | 1 | 3,181,227 |
| foundry | 143,358 | 33, 23, 20 | 0.098 | 14.0 | 56.68 | 1 | 3,213,742 |
| nether | 125,689 | 139, 46, 5 | 0.261 | 16.9 | 54.00 | 2 | 5,600,061 |
| raiden | 92,294 | 48, 40, 24 | 0.133 | 35.4 | 52.89 | 0 | 3,525,740 |
| koop | 71,903 | 13, 15, 10 | 0.006 | 31.0 | 55.28 | 1 | 1,278,925 |
| kahn | 42,436 | 1, 1, 1 | 0.000 | 0.02 | 88.77 | 1 | 806,676 |
| forest | 39,028 | 40, 18, 8 | 2.178 | 33.2 | 47.49 | 1 | 272,556 |

The compute-raster interpolation took Z mismatches from 2,227 px (goro, hardware interpolation, still available as
`PS2_NATIVE_INTERP=hw`) to 1-2. What is left is the blender: 95-99.9 % of the differing pixels are native ≥
emulated, by 1-2 per layer, because fixed-function blending rounds Cs·a + Cd·(1 − a) where the GS floors
((Cs − Cd)·As >> 7) + Cd. Layers add up (+3..+6), and the few large values sit on triangle edges. Exact blending needs
the destination in the shader (no framebuffer fetch in WebGPU) or the blended draws on the compute GS.

**Replace mode, whole frame vs the emulated frame (`capture.sh`):** goro 46.81 dB (max 23, 5.6 % of pixels > 2),
foundry 54.55, academy 52.68, nether 56.56; at `PS2_SCALE=3x6` goro 46.70 dB (1920×1344, max 64, 5.4 % > 2). No
visible difference, the same +1 bias.

**Hash gate (§6.2), `remaster/nullsink.sh` + `nullsink.py`, 12 scenes, capture + 300 frames, lavapipe: PASS.** Mirror
(`sts`/`ths`) equal in every section on every frame; replace (`stk`/`thk`, against `st` and `th`) differs only in
`vu`/`vu1x` (goro 700 of 700 frames, kahn from 10392, raiden from 6030; menu, charsel, fmv, forest equal). Switch off:
image and state hash equal to the base commit in all 12 scenes, `statecheck.sh` PASS.

**CPU per frame, replace vs emulated** (`PS2_THREADS=1 PS2_FPS`, the `[cpu]` line, 600 frames from capture, w5):

| Scene | render thread ms | VU1 thread ms | EE thread ms |
|---|---|---|---|
| goro | 4.05 → 3.07 (−24 %) | 4.45 → 3.44 (−23 %) | 7.21 → 7.31 |
| foundry | 7.83 → 6.67 (−15 %) | 7.55 → 6.37 (−16 %) | 8.57 → 8.55 |
| academy | 4.64 → 3.58 (−23 %) | 5.30 → 4.56 (−14 %) | 7.08 → 7.20 |

lavapipe's frame rate drops in replace mode (goro 12.5 → 8.6 fps: llvmpipe runs the fragment shader on the CPU); the
GPU side has to be measured on a real GPU.

**R14, goro's point light.** `PS2_R14=1` (bodies @3778/@3288 after their colour UNPACK, as hardware orders it)
changes 3,354 pixels of goro 8000 by up to 10, all in the light's area (x 44-146, y 332-411): `nat1-diff4/r14-goro-side.png`
(today, R14, difference ×16) and `r14-goro-zoom.png` (4×). The native light (`PS2_NATIVE_PLIGHT=1`) matches R14
exactly (oracle RGBA 0 of 4.4 M vertices) and differs from today's output in 82 vertices. Default unchanged.

**Left for replacing the emulated world for good:** exact blending (above); the characters and the other categories
(the run boundaries are where they cut in: about 8 runs per frame, each an import and a write-back pass); a fallback
when the render side refuses a batch VU1 has already skipped (none seen: `unsupported` is empty in all scenes, but a
GS-state shadow on the VU side would make the decision safe); vertex buffers keyed by source address instead of
per-batch uploads; `hash_part` part 24 and lockstep as a local-only setting (§6.5); savestates taken mid-run (the run is
written back first, but the VU1 state of skipped batches is not what VU1 would have left).

### 7.3 Replace mode without the round trip per run (2026-10-19)

On the laptop (RTX 4050) stage 1's replace mode was slower than the emulated path at 3x6 (academy 52.0 → 30.1 fps) while
every thread's CPU time went down: the GPU was the cap. Each run imported the whole target (frame and Z, a full-screen
pass) and wrote back the union of its batches' scissors (the whole screen), and every emulated draw between native
batches ended a run. Counted on w5 (1x, `PS2_THREADS=1`, capture + 600 frames, `[native] per frame` line):

| Scene | runs / frame | samples imported / frame | written back / frame |
|---|---|---|---|
| goro | 8.55 | 1,225,714 | 1,225,714 |
| foundry | 10.58 | 1,516,899 | 1,516,899 |
| academy | 20.00 | 2,867,200 | 2,867,200 |

×18 at 3x6 (academy: 52 M samples each way per frame).

**Now** (`gpu.cpp` `tiles_*`): the target stays bound to one frame + Z buffer (a new FBP/ZBP writes the old one back and
rebinds; the double buffer makes it once a frame) and is kept coherent with compute VRAM per tile of 16 × 16 GS pixels.
A tile is native-newer (colour, Z) or VRAM-newer, never both. A native batch imports the VRAM-newer tiles of its scissor
(one instanced draw over a tile list) and marks its scissor native-newer (the CPU does not know where its triangles
land). An emulated primitive (its box, on the bound frame/Z; by pages when it uses other buffers that alias them, and
for texture reads), an upload or CLUT load, a local copy, a download, a savestate and the display first write back the
native-newer tiles they touch (one compute dispatch over a tile list, queued ahead of the emulated batch that needs it)
and, if they write, mark them VRAM-newer. `PS2_NATIVE_RUNS=1` keeps stage 1's round trip for A/B.

| Scene | bindings / frame | samples imported / frame | written back / frame | import draws / write-back dispatches per frame |
|---|---|---|---|---|
| goro | 1.00 | 486,321 (−60 %) | 486,321 (−60 %) | 8.3 / 32.7 |
| foundry | 0.99 | 554,720 (−63 %) | 554,720 (−63 %) | 10.6 / 43.8 |
| academy | 1.00 | 606,796 (−79 %) | 606,796 (−79 %) | 19.3 / 84.9 |

What remains is about one full frame each way (the clear sprite at the start of the frame makes every tile VRAM-newer;
the glow and the display read it all at the end) plus the boxes of the emulated characters between world batches, which
stage 2 removes. Gate: the image and state hash at the capture frame are identical to `PS2_NATIVE_RUNS=1` in all 12
scenes (`capture.sh`, lavapipe 1x); the switch-off build is unchanged (no code runs without `PS2_NATIVE`).

