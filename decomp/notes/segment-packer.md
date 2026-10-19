# fn_23a280, the VU1 segment packer

`PackSegment` in `decomp/src/render/segment_packer.cpp` (0x23a280-0x23c53c, 8892 bytes, Ps2/Renderer/Character/
ps2render.cpp). It packs one mesh segment of one instance into the frame's VIF1 chain. Its arguments are the draw
record the native renderer consumes at Seam E (`native-renderer.md` §2.2).

Evidence: the disassembly (`decomp/notes/tools/dis.py 23a280`) and the recompiled twin (`unit_004E.cpp:2520` to
`unit_004F.cpp:720`). The function crosses a unit boundary at 0x23c000. The caller's side was read from fn_242ff8,
fn_249060 and fn_24cf08. Anything not taken from code is marked *inferred*.

## 1. Where it sits

```
fn_24cf08(o, n)                      instance entry, lists t=1/t=2 (world, props, sky, 1-pass fighters)
  fn_249060(o, ?, model, pass)       instance setup: LOD, node matrices, lights
    fn_242ff8(model, o+0x68==0, pass, nseg)   segment loop: toSPR double buffer, flags, program choice
      fn_23a280(seg, model, prog, flags; t0)  once per segment, jal 0x2442d8
```

fn_242ff8 calls the packer only when its a1 (`o+0x68 == 0`) is nonzero. Otherwise it stores `model+0x1048` into
[0x65e454] and skips the call. So every call has flag 0x200 set.

## 2. Inputs (the draw record)

| Reg | What | Notes |
|---|---|---|
| a0 | **segment record**, 0x1d0 bytes | `model+0x20 + i*0x1d0`. When [0x4f4d5c] = 2 the packer gets the scratchpad copy at 0x70000000 / 0x700001d0, alternating and prefetched by D9 toSPR. So its write to +0x130 lands only in that copy |
| a1 | **model** | read only at +0x18: the node array |
| a2 | **VU1 program**, a byte offset in the loaded image | stored >> 3 at sp+0xf4 and used as the MSCAL immediate |
| a3 | **flags** | table below |
| t0 | pointer to 0x65e2c8 | the packer writes 1 on the fn_246258 path, 0 otherwise. No other reader found |

**Node record E** = `model[0x18] + seg[0] * 0x1c0`, kept at sp+0xf0:
- +0x50: local-to-world 4x4.
- +0x110: the 4x4 sent to VU 0-3.
- +0xa0: position (fn_242ff8's light range test).

**Segment record fields the packer reads:**

| Offset | Use |
|---|---|
| +0x00 | node index (selects E) |
| +0x10 | type (2 = the additive-pass type) |
| +0x20 | fog selector for render mode 3 (0 or 2 take the mode-3 fog) |
| +0x12c, +0x1bc | count and array of 32-byte material links. Word 0 is a TextureManager slot |
| +0x130 | flag dword. Bits 0x61000ce000000000 forbid AA1. The packer sets bits 46 and 47 when it packs the UV scroll |
| +0x138 | options. 0x2 = AA1 in AA mode 0; 0x4 = additive pass (type 2) and no fn_246258 path; 0x100 = linked-texture pass |
| +0x13c | **the segment's prebuilt vertex stream**, a static VIF program (UNPACK + MSCNT, ends in RET). It is the target of a DMA `call` |
| +0x158, +0x15c | material keys, compared with [0x661900/4] to skip resending GS state |
| +0x164, +0x168 | UV scroll (u, v) |
| +0x16c, +0x170 | UV scroll is packed unless both are 0.0 |

**Flags (a3)**, set by fn_242ff8:

| Bit | Meaning in the packer |
|---|---|
| 0x1 | send the node matrix product 0x661a70 (fn_213ce8(0x661a70, 0x6610a0, E+0x50), computed by the caller) to VU 0xc |
| 0x2 | lit or skinned (types 2-5). Sends the light matrices; with [0x4f5034] it takes the fn_246258 path |
| 0x4/0x8/0x10/0x400 | skinned types. Mask 0x41c skips the node 4x4 to VU 0 |
| 0x80 | fogged: fog constants to VU 4-5, and PRIM.FGE when the fog mode is nonzero |
| 0x100 | forces the GS state to be resent. Also blocks AA1 |
| 0x8000000 | point light in range: light position and colour to VU 6-7 |

**Program (a2)** by type, from the caller's jump table at 0x585240:
- **Type 1 (world, image C):**
  - 0x790 when seg+0x130 bit 54 is set;
  - 0x36f0 / 0x3210 with a point light (with / without fog);
  - otherwise 0xef0 / 0x790 with flag 1, and 0xb40 / 0x4a0 without (with / without fog).
- **Type 2:** 0x17e0 when seg+0x138 & 4, else 0x2520.
- **Types 3-5:** character images A or B, or base 0x49ba50.

## 3. Globals

| Address | What |
|---|---|
| 0x65e300 | chain: +0 write pointer, +4 start, +8 open DMA tag, +0xc open DIRECT/UNPACK code, +0x10 UNPACK unit, +0x14 open GIF tag |
| 0x65e458 | flags of the last GS state sent (-1 = none). Each extra pass sets bit 0x100 so the next segment resends |
| 0x661900/4 | material keys of the last GS state sent |
| 0x65e380 | the current fog record: +0xc, +0x10 (ints, used as near and far: names inferred), +0x14/+0x18 (ints) |
| 0x6619a0 | light colour matrix (sceVu0LightColorMatrix in fn_249060) |
| 0x6619e0 | light direction matrix. The additive pass overwrites it with identity |
| 0x661a70 | node matrix product (fn_213ce8 output) |
| 0x66346c | the additive pass's link-B texture slot |
| 0x67b724 | bit 0: clear the colour matrix [0].w before sending it. Bit 1: send PRIM |
| 0x4f4be0 (R+0xa0) | render mode. 3 = the mode-3 fog (55.0) and always resend GS state |
| 0x4f4c08 (R+0xc8) | fog mode for PRIM.FGE (2 = always) |
| 0x4f4c74/78/88 | point light radius, position, colour |
| 0x4f5018, 0x4f501c | additive pass enabled; its ALPHA FIX |
| 0x4f5030, 0x4f5034 | UV scroll enabled; fn_246258 path enabled |
| 0x4f6e94 | AA1 mode (0, 1, 2) |
| 0x4efe94 | the TextureManager |
| 0x5850f8 | GIF tag template {NLOOP 0, EOP, PACKED, NREG 1, A+D} |
| 0x4f4d90 | UNPACK header template {NOP, NOP, STCYCL 4/4, UNPACK V4-32 NUM 4 \| VU addr} |

## 4. Structure

There are no loops over segments or vertices. The function is straight-line packet building with flag tests. Its
only loops are:
- the packet library's zero-padding loops;
- one 2-iteration copy;
- two searches over the material links.

The packet steps are the library's inline macros:

| Step | Effect |
|---|---|
| align | zero words to a qword |
| pad to code | zero words until the next word is the last of a qword, so a VIF code's data starts aligned |
| close DMA tag | QWC += qwords since the tag |
| open DIRECT + GIF tag | the A+D template |
| close GIF tag | NLOOP from the pairs written |
| close DIRECT | size = qwords |
| UNPACK matrix | 5 qwords from the template |
| close UNPACK | NUM from bits written / 128 |

The C++ keeps each step on the original's registers. These are the helpers `zero_to_qword`, `zero_until`,
`round_up_to_*`, `close_*`, `unpack_matrix`, `write_prim` and `prim_antialias`.

```
enter                     frame 0x1b0, GIF template -> sp+0
open_stream_call          align; close the previous tag; DMA call -> seg+0x13c; pad
if [0x4f5034] && flags&2 && !(seg+0x138 & 4):        path 1, "constants by fn_246258"
    *t0 = 1
    [0x67b724]&2: DIRECT { PRIM }
    fn_246258(model, E, seg, flags)     FLUSH, DIRECT {TEXFLUSH, FBA, TEX1, CLAMP}, six matrices to VU 0x00-0x18,
                                        lights, TEST/ALPHA/TEX0 to VU 0x25-0x27 (character layout)
    BASE 0x2e, OFFSET 0x1e9, MSCAL prog; [0x65e458] = -1
else:                                                 path 2, pack_segment
    *t0 = 0
    UV scroll        (if [0x4f5030] and scroll != 0)    4 qwords to VU 0x10, label 0x4a5190 in word 3
    node 4x4 E+0x110 (unless flags & 0x41c)            VU 0x00
    fog              (flags & 0x80)                     VU 4-5
    mode-3 fog       ([0x4f4be0] = 3, seg+0x20 0/2)      VU 4-5 (overrides)
    lights           (flags & 2)                        direction 0x6619e0 -> VU 4, colour 0x6619a0 -> VU 8
    point light      (flags & 0x8000000)                VU 6-7 (position in node space, -1/r^2; colour)
    node product     (flags & 1)                        0x661a70 -> VU 0xc
    FLUSH; DIRECT { PRIM?, fn_237660's material A+D unless cached }; FLUSH; BASE 0x18; OFFSET 0x1f4; MSCAL prog
    linked pass      (seg+0x138 & 0x100)                see 5.2
    additive pass    (seg+0x138 & 4, [0x4f5018], type 2) see 5.3
leave
```

## 5. What is emitted

### 5.1 The main pass (path 2)

The whole pass is the inline data of one DMA `call` tag. VIF sees it first, then the DMA jumps to the vertex
stream at seg+0x13c and returns after it:

```
call(seg+0x13c), NOP, NOP
  [UNPACK 4x4 -> VU 0x10]       UV scroll       {0,0,0,0x61c}, {u,v,0,0}, 0, 0
  [UNPACK 4x4 -> VU 0x00]       node matrix     E+0x110
  [STCYCL; UNPACK 2 -> VU 4]    fog             (255-r18, 255-r14, 0, ((f+n)*-255/(f-n)+255)/2), (0,0,0, f*n*255/(f-n))
                                (mode 3: (0, 55, 0, same), same)
  [UNPACK 4x4 -> VU 4]          light directions 0x6619e0
  [UNPACK 4x4 -> VU 8]          light colours 0x6619a0 ([0].w = 0 when [0x67b724]&1)
  [STCYCL; UNPACK 2 -> VU 6]    point light     (inverse(E+0x50) * pos, -1/radius^2), colour
  [UNPACK 4x4 -> VU 0xc]        0x661a70
  FLUSH, DIRECT n { GIFtag A+D, PRIM 0x5c|FGE|AA1, material state (fn_237660) }
  FLUSH, BASE 0x18, OFFSET 0x1f4, MSCAL prog
-> vertex stream (UNPACKs + MSCNT), RET
```

- **PRIM:** 0x5c = triangle strip, Gouraud, textured, alpha-blended. FGE is added when the fog mode [0x4f4c08] is 2,
  or is nonzero and flags & 0x80. AA1 depends on [0x4f6e94]:
  - 1: always.
  - 0: when seg+0x138 & 2.
  - 2: always.
  - Modes 0 and 2 never set it for segments with the +0x130 bits 0x61000ce000000000, or for flag 0x100.
- **Material state:** fn_237660 runs unless all of these match the last segment: the flags, seg+0x158 and seg+0x15c.
  Render mode 3 always resends.

### 5.2 Linked-texture pass (seg+0x138 & 0x100, program @0x2230)

The pass draws the material's link-C texture over the base:
1. A DMA cnt with FLUSH, then:
   - UNPACK to VU 0x10 the link texture's UV transform from fn_26df48: [[su,0,0,0],[0,sv,0,0],[0,0,1,0],[tu,tv,1,0]];
   - to VU 0xc: 0x661a70 (recomputed by fn_213ce8);
   - to VU 4: the light directions;
   - to VU 8: the light colours with [3].w + 128 and [0].w = 0.
2. DIRECT { FBA_1 0, TEX0_1 link texture | TCC, TFX MODULATE, TEST_1 0x53001, ALPHA_1 0x44, CLAMP_1 0, TEXFLUSH }.
3. BASE 0x18, OFFSET 0x1f4.
4. A cnt { FLUSHA, BASE 0x18, OFFSET 0x1f4 }.
5. A second `call(seg+0x13c)` with MSCALF 0x446 (image C + 0x2230) in its VIF slot.
6. [0x65e458] |= 0x100.

### 5.3 Additive pass (type 2, seg+0x138 & 4, [0x4f5018], program @0x1bc0)

1. The light direction matrix 0x6619e0 becomes identity and goes to VU 4 in the open packet.
2. [0x66346c] = the link-B texture of the first link that has one.
3. fn_2388b0(E, seg) opens a cnt with FLUSH and the node product, UV and projection matrices.
4. DIRECT { FBA_1 0, TEX0_1 link-B | TCC, TFX DECAL, TEX1_1 0x60, TEST_1 0x53001, ALPHA_1 (Cs*FIX + Cd, FIX
   [0x4f501c]; or Cs*As + Cd), CLAMP_1 0, PRIM 0x5c }.
5. BASE 0x2e, OFFSET 0x1e9.
6. A cnt { FLUSHA, BASE 0x18, OFFSET 0x1f4 }.
7. A third `call(seg+0x13c)` with MSCALF 0x378 (image C + 0x1bc0).
8. [0x65e458] |= 0x100.

## 6. For the native renderer

- **One call is one segment, and its draw is fully described by the call's inputs plus globals.** The inputs are
  (seg, model, prog, flags). The globals are the camera/light matrices, fog record, point light, render mode and
  texture manager. The vertex data is not packed here: it is the static VIF program at seg+0x13c, built once per mesh
  by ps2Setup.cpp. A native draw keyed by seg+0x13c can upload that program's UNPACK payload once as a vertex buffer.
- **Constants per draw:**
  - Path 2 (world/props): node 4x4 (VU 0), fog (4-5), light dirs/colours (4/8), point light (6-7), node product
    (0xc), UV scroll or link UV (0x10).
  - Path 1 (fn_246258, character layout): a separate, larger block at VU 0x00-0x2d.
- **GS state per draw** is the DIRECT A+D list: PRIM here plus fn_237660's material state, which is cached across
  segments by (flags, +0x158, +0x15c). The two extra passes are separate draws of the same vertices with fixed state:
  - linked: MODULATE, standard alpha blend;
  - additive: DECAL, FIX or As additive.
  Each sets [0x65e458] bit 0x100 so the next segment resends its state.
- **The packer has side effects the native path must keep doing:**
  - seg+0x130 bits 46/47 (UV scroll);
  - [0x65e2c8];
  - [0x65e458];
  - [0x66346c];
  - 0x661a70 (written by fn_213ce8 here and in the caller);
  - 0x6619e0 := identity in the additive pass, so the next segment's light directions change;
  - the chain bytes themselves (EE RAM is hashed).

## 7. Verification (w7, 2026-10-19)

- **`decomp/ci.sh` with RECORD=0023A280 passes.** That covers:
  - the regenerated units;
  - 32 recorded koop calls replayed;
  - the scene gate: all 12 scenes, the state hash of every frame identical with the decomp on and off;
  - the golden hashes with decomp off and with decomp on.
- **The recorded calls (8 scenes, 42 calls; now recorded by `decomp/synth.sh <outdir> 23a280`) are all world
  segments.** They take these branches:
  - node matrix (42);
  - fog (35);
  - PRIM (42);
  - node product (16);
  - UV scroll (1).

  The other branches are covered by 462 variants of those calls written by `decomp/difftest/synth/batch_i.py`. These
  change the flags, the segment's option bits and the globals, and scramble the temporaries and the upper halves.
  Branch counts:
  - additive pass 58;
  - linked pass 81;
  - mode-3 fog 12;
  - lights with [0x67b724] bit 0 clear 25, set 39;
  - point light 52;
  - fn_246258 path 43;
  - UV scroll 30.

  All 462 variants pass, as do the 42 recorded calls.
