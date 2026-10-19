# The per-instance draw: fn_24cf08, fn_249060, fn_246cf0

Status: decompiled (batch K, 2026-10-19). Code: `decomp/src/render/instance_draw.cpp` (fn_24cf08, fn_249060),
`decomp/src/render/fighter_draw.cpp` (fn_246cf0). Struct model: `decomp/src/render/instance.hpp`. Chain helpers:
`decomp/src/render/vif.hpp`. These are the top of Seam E (`native-renderer.md` §2.2). Names marked
"(inferred)" come from how the code uses a value, not from a symbol or string.

## 1. What an instance is

An instance is one entry of a render list (`native-renderer.md` §1.2). fn_2367b8 enqueues it, and fn_23ff60 hands it to
a draw as the triple **(object, node.arg, model)** plus the pass:

| Piece | Where | What the draws read |
|---|---|---|
| `RenderNode` | 0x668720 + object.instance_index · 0x18 | next, arg (+4, not read), model (+8), object (+0xc), list type (+0x10) |
| `GameObject` | node+0xc | `instance_index` +0x68 (0 = the stage), `hidden` +0x70 (s8). Fighters also have `effect_now` +0x84 and `effect_end` +0xf4 (floats, effect pass only) |
| `Model` | node+8 | `bones` +0x18, `segments` +0x20, `light_rig` +0x2c, `bone_count` +0x30, `segment_count` +0x38, `visibility` +0x4c, `always_crossing` +0xdc8, `layer_mask` +0xe18, `radius` +0xf68, texture set +0x1008/+0x100c/+0x101c, `texture_mode` +0x1018 |
| `Bone` (0x1c0) | model.bones[i] | `world` +0x50 (4×4: rotation rows +0x50/+0x60/+0x70, `translation` +0x80), bind `pivot` +0x90, `position` +0xa0 (a copy of the translation: the frustum tests' centre and the lit point), **skin matrix** +0x170 (4×4, written here) |
| `Segment` (0x1d0) | model.segments[i] | `bone`/`bone1`/`bone2` +0/+4/+8, `kind` +0x10 (2 rigid, 3 two-bone, 4 three-bone), `layers` +0x14, `clip` +0x18 (written), `texture` +0x1c, `radius` +0x78, `depth` +0x128, `packet` +0x13c (the prebuilt VIF program for its vertices) |
| `LightRig` | model.light_rig | `anchor` +0x20 (a Bone: the lit point and the frame lights are expressed in), `lights` +0x3c → 3 × `Light` (0x30: position, colour, near +0x20, far +0x24), then the ambient colour at +0x90 |
| `RenderSettings` | 0x4f4b40 | the switches below (`per_area_lists` +0x14, `skinning` +0x18, `no_pass1_segments` +0x44, `area_mask_off` +0x48, `cull_mode` +0xa0, `segments_drawn` +0xbc, `cull` +0xc4, `glow_scale` +0xd8, `specular_scale` +0xdc, `image_b` +0x108) |

The render code keeps state in game RAM: fn_249060 writes `model.visibility`, every `segment.clip` it looks at, and
every bone's skin matrix. fn_24cf08 saves `model.segments` and `model.segment_count` around fn_249060 and puts them
back afterwards, so something below it (fn_242ff8's segment loop, not decompiled here) may point them elsewhere.

## 2. fn_24cf08 → fn_249060: world, props, sky (lists t=1, t=2)

`fn_24cf08(object, arg, model, pass)` only brackets fn_249060 (above). `fn_249060(object, arg, model, pass)` with pass
0 (opaque) or 1 (fn_23ff60's second, blended pass):

1. **Skip.** It returns at once when the object is hidden, when `[0x6618e0]` is set in pass 1, and in pass 1 for
   anything but the stage when `[0x65e384]` is set. The stage's pass-0 draw also clears the 0x2d0-byte table at
   0x6615b8 that fn_242ff8 uses (it is the first draw of the frame). The **area mask** (stack +0xcc) is
   `1 << [0x65e394]` (the current area as a bit, set by GameMain.cpp) unless `area_mask_off` is set.
2. **The draw list** at 0x65e460 (Segment pointers; its length is kept in s3, then at stack +0xc8):
   - *Pass 0, not the stage:* if `skinning` is set, fn_2457d0(model) runs first (it updates the bones; inferred).
     - **Whole-model test.** `visibility = fn_22c838(0x77f920, bones[0].position, model.radius)`, or 2 when
       `always_crossing` is 1. fn_22c838 tests a sphere against six planes with VU0 CLIP: 0 outside, 1 inside,
       2 crossing.
     - `cull == 0`: every segment goes into the list.
     - `cull_mode != 1`: no segment is tested. Each gets `clip = 2` and none goes into the list here.
     - `cull_mode == 1`:
       - visibility 0: nothing is drawn.
       - visibility 1: every segment goes in.
       - visibility 2: segments with `layers & model.layer_mask` are tested one by one,
         `clip = fn_22c838(0x77fe80, bones[seg.bone].position, seg.radius)`. Only the inside ones (1) go in; the
         others get `clip = 0`.
   - *Pass 0, the stage:* fn_242ad0 culls a prebuilt list. The lists live in the 16-byte entry
     `0x6662a8 + 16·[0x642814]` (current area): {opaque list, blended list, opaque count, blended count}. When
     `per_area_lists` is not 1, the stage uses the global entry at index 32. fn_242ad0(model, count, list,
     area mask, &out, pass) writes the draw list and sets some segments aside at 0x663648 (count [0x665f38]).
   - *Pass 1, every instance:* fn_242ad0 on the area's blended list. The result is sorted far to near by
     `seg.depth` (qsort with comparator 0x24c7b0). Unless `[0x4f50cc]` is set, the segments set aside in pass 0 are
     appended unsorted, and [0x666098] gets the sorted count. `cull_mode` 2 becomes 3.
3. **Skin matrices** (pass 0, not the stage, `skinning` set). For every bone, the skin matrix is
   `[R0; R1; R2; translation − (pivot.x R0 + pivot.y R1 + pivot.z R2)]` (VU0: one `vmulx` by −1, then `vmulax`, `vmadday`,
   `vmaddaz`, `vmaddw`). This is the palette the world VU1 programs and fn_23a280 read. The two inlined copies,
   picked by `image_b`, compute the same values and differ only in registers.
4. **Textures.** fn_246120(model) uploads the model's texture set through TextureManager when its id differs from
   the last one uploaded (0x6618ec). This step is skipped for the stage.
5. **Lights** (pass 0, not the stage, rig has lights). For each of the 3 lights:
   - `d = anchor.position − light.position` and `dist = |d|` (VU0 `vsqrt`).
   - `falloff` is 0 from `far` on, 1 up to `near`, and `(far − dist) / (far − near)` in between (COP1 `div.s`).
   - colour_i = (light.colour.rgb · falloff, w). w is 25.0, or, when `[0x4f6e44]` is set, `glow_scale` for
     light 0 and 0 for the others.
   - dir_i = d / |d| (VU0 `vrsqrt`).
   - `sceVu0LightColorMatrix(0x6619a0, colour0, colour1, colour2, rig.lights + 0x90)` gives the **light colour
     matrix** (word 0x6619dc then cleared).
   - The **light direction matrix** at 0x661920 is −dir0, −dir1, −dir2 and a fourth row, the specular half vector:
     `−normalise(normalise(dir2) + fn_23cae8()) · specular_scale`, w = 1. fn_23cae8 returns a direction computed
     from 0x6cba50 (inferred: the view direction).
   - The rows are copied to 0x661960. Unless `image_b` is set, they are multiplied by the inverse
     (fn_214058, rigid) of the anchor's rotation (fn_213ce8), which puts them in the model's frame. They are then
     transposed for VU1 and copied to 0x6619e0.
   - The packers read both matrices: fn_23a280, fn_239268/fn_239578/fn_239748, fn_244368 and fn_246258
     (`xref.py 6619a0`, `6619e0`).
6. **Chain.** `open_flush_tag` (§4) runs, then fn_246918(model) writes the instance's own packet: FLUSH, a DIRECT
   GIF A+D packet (FBA_1 = 0, TEX1_1 = 0x60 linear filtering, CLAMP_1 = 5 clamp/clamp), fn_23db48, and UNPACKs of
   matrices from 0x660f20, model+0x1060 and 0x6634a0. Steps 5 and 6 run for pass 0, non-stage instances only.
7. **Draw.** The stage adds the list length to `segments_drawn`. When `no_pass1_segments` is set, a pass-1 draw
   stops here. The length is capped at `[0x4f507c]`. A non-stage model with `texture_mode == 2` and at least 2
   segments has its list sorted by `texture_get_link_a(seg.texture)` (comparator 0x24cf58). Then
   **`fn_242ff8(model, is_stage, pass, count)`** draws the list. It DMAs each segment record to the scratchpad and
   calls the segment packer fn_23a280.

**What the native renderer gets at fn_249060's exit:** the draw list (0x65e460, count at stack +0xc8 = fn_242ff8's
a3), each segment's `clip`, the skin palette inside the Bone records (+0x170), the light colour matrix (0x6619a0),
the light directions in world space (0x661920) and in model space, transposed (0x6619e0), and the pass and stage
flag. None of these depend on the VIF chain. They are the Seam E record for the world/prop path, and fn_23a280's
inputs come on top of them.

## 3. fn_246cf0: the fighters (list t=3, and fn_23df70 / fn_23fa00 / fn_24cbf8)

`fn_246cf0(object, arg, model, pass, three_pass (t0), effect_pass (t1), t2)`. a1, a3 and t2 are not read. fn_23ff60
and fn_24cbf8 pass three_pass = 1 (VU1 image A 0x49e430, already uploaded by the caller). fn_23fa00 passes
effect_pass = 1. The others draw with image B 0x49f900. The function keeps a block at sp+0 (`FighterDrawArgs`: −2,
three_pass, effect_pass, visibility, segments, next index) that it passes to fn_239c48.

1. **Pose and cull.** Normally fn_2459f8(object, model, 0, 0). In the effect pass, the effect strength
   [0x66608c] is first divided by `(effect_end − effect_now) / 100 + 1` while `effect_now < effect_end − 1`,
   otherwise reset to 0.2; then fn_245d48 is called. The result is the visibility: 0 means return, 2 means skip
   segments whose `clip` is 0.
2. **Setup.**
   - `open_flush_tag` (§4).
   - fn_246120(model) uploads the textures, unless the effect pass draws with its own program family
     (`[0x4f4b2c]`).
   - With `texture_mode == 2` and three_pass, the segments are listed into [0x6660ac] and sorted by texture
     (fn_24cff8).
   - **fn_244368(model, segments, 0x10402, three_pass, effect_pass)** writes the character constants: BASE/OFFSET
     and UNPACK to VU 0x2d.
3. **Per segment**, in sorted or array order. A segment is drawn when `layers != 0`, `clip != 0` (visibility 2
   only) and `kind` is 2-4. Each drawn segment adds to the chain:
   - zero pad to a qword, and the open tag's QWC closed;
   - a **DMA `call` tag** (QWC 0 → `packet & 0x9fffffff`, VIF NOP NOP), which becomes the open tag;
   - per bone k < kind − 1, 5 qwords: the template qword at 0x4f4d90 (NOP, NOP, STCYCL 4,4, UNPACK V4-32 ×4 at
     VU 12/16/20) followed by the 4×4 matrix `palette[bone_k]`. The palette is the pointer at [0x6660a4], 64 bytes
     per bone, built by fn_245168;
   - three_pass only: fn_239c48(model, seg, args) adds its UNPACKs to VU 0x22-0x29, with [0x65e300] stored before
     the call and reloaded after it;
   - **MSCALF (label − image) / 8**: one of 4 program families × 3 kinds. Image A gives the three-pass programs
     +0/+0x6f0/+0xe50. Image B gives the one-pass programs +0/+0x360/+0x800, the alternative family
     +0xd20/+0x1030/+0x1550 (when `[0x6660c0]` is set) and the effect family +0x1b20/+0x1db0/+0x21e0.

   The call tag's QWC is patched when the next tag opens. So the DMA sends the matrices and the MSCALF, then enters
   the segment's prebuilt vertex packet, whose MSCNTs continue the program. The write pointer stays in t3 during the
   loop and is stored once at the end.

**Seam E record for a fighter segment:** (object, model, segment, kind, the 1-3 palette matrices, the program
family, image A or B, three_pass/effect_pass) plus fn_244368's per-model constants and the light matrices from §2.5.
The vertex data is the static packet at `segment.packet`.

## 4. The shared FLUSH tag (`vif.hpp`: `open_flush_tag`)

Both draws inline the same sequence (fn_249060 at 0x249c64, fn_246cf0 at 0x246e08):

1. Pad [0x65e300] to a qword with zero words.
2. Close the open tag: `QWC += (ptr − tag) / 16 − 1`.
3. Write the qword `DMA cnt QWC 0 | VIF FLUSH | VIF NOP`, make it the open tag ([0x65e308]) and clear the open VIF
   code ([0x65e30c]).

`open_flush_tag(c, FlushTagRegs{…})` reproduces it. The register choice differs between the two copies (t3/v0/t5
vs v0/v1/a0), and fn_249060's copy has one extra nop cycle. The chain-control block is `Chain` (0x65e300: write
pointer, start, open tag, open VIF code). `dma::tag`, `dma::tag_addr` and `vif::code` name the tags and codes.

## 5. Exactness notes

- These functions are register-exact. At every call, poll and return they leave each GPR (with its upper half),
  FPR, FCR31, HI/LO, VU0 register and flag, and every stack byte as the recompiled code does. The floats pass
  through FPRs and GPRs into VF registers (the compiler's `pextlw`/`pextlw`/`pcpyld`), so each step also sets
  the GPRs and FPRs the original left holding them (`pack4`, the skin-loop register tables).
- All float math goes through `psf` (COP1) and the `decomp_vu0.hpp` ops with the original's VF registers, in the
  original's order, so ACC, Q and the MAC/status flags match.
- The loops that poll write their registers before `poll()`.

## 6. Verification (box w7, 2026-10-19)

| Check | fn_24cf08 | fn_249060 | fn_246cf0 |
|---|---|---|---|
| `decomp/ci.sh` (job k1): real contexts from boot, charsel and koop | 32 pass | 32 pass | 32 pass |
| `decomp/coverage.sh` (k2): 10 gameplay scenes + charsel:6300, 16 contexts each | 160 pass | 160 pass | 160 pass |
| Mutated contexts (`decomp/difftest/mutate_instance.py`, k5 + k6) | - | 48 + 24 pass | 48 pass |

k1 also passed the regeneration check (identical units), the scene gate (12 scenes, every frame's state hash, off vs
all) and the golden hashes with off and with all.

**What the scenes reach.** k3 classified 477 recorded contexts by their branch inputs.

- fn_249060 draws only the stage (instance 0) in every reference scene:
  - pass 0 uses the per-area list;
  - pass 1 runs both with and without segments deferred from pass 0.
- In those scenes `RenderSettings` is skinning 1, cull 1, cull_mode 1, image_b 1, and `[0x4f6e44]` is 1.
- fn_246cf0 runs with three_pass 0 and 1 but never with effect_pass, and `[0x6660c0]` is always 0.

So the instance paths of fn_249060 (culling, skin matrices, lights) and fn_246cf0's effect and alternative families
are not covered by recorded contexts or by the gate. `mutate_instance.py` covers them. It takes recorded fighter
contexts as seeds, so the machine stays real, then:

- draws the fighter through fn_249060 as a non-stage instance, varying every switch in §2 and the falloff branches;
- runs fn_246cf0 with the effect pass, the program families, sorting and both effect-timer branches;
- adds fixed stage cases: the global list, the pass-1 exits, and cull_mode 2 → 3.

Every one of these contexts passes. For the native renderer, this means list t=1 holds only the stage model in
these scenes. Props and the sky are segments of that model, or other paths (§1.3 of `native-renderer.md`).
