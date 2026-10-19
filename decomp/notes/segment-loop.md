# The segment loop: fn_242ff8 (DrawModelSegments)

Status: decompiled (`decomp/src/render/draw_segments.cpp`), verified bit-exact (replay + scene gate, see the commit).
Static reading of the function and its recompiled twin (`unit_0050.cpp` `L_00242FF8`, continued in `unit_0051.cpp`
up to `L_00244368`). Feeds the Seam E design in `native-renderer.md` §2.2: this is where one draw record per mesh
segment can be taken.

## Where it sits

```
fn_23ff60 (scene draw, lists t=1/t=2) -> fn_24cf08(o, n+4, model) -> fn_249060(o, n+4, model, pass)
    -> fn_242ff8(model, main_pass, pass, end) -> per segment: fn_23a280(record, model, program, bits, &state)
```

fn_249060 does the per-instance work first (LOD, matrices, lights; native-renderer.md §1.6), fills the segment list
and calls fn_242ff8 once per instance and pass:

| Argument | Meaning |
|---|---|
| a0 | the model (`n+8`): +0x18 per-instance segment states (0x1C0 bytes each), +0x20 segment records, +0x38 their count, +0xE18 pass mask, +0x1048 brightness (float, 128.0 = 1.0) |
| a1 | main pass: nonzero in the normal draw. Zero = only the per-segment instance state is updated (state+0xAC = 1.0, segment matrix, `[0x65E454]`); no chain, no fn_23a280 |
| a2 | draw pass, 0 or 1 (fn_23ff60's two passes); selects the dedupe bits and the "first segment" rule |
| a3 | end index into the segment list |

Globals it reads as input: the **segment list** `0x65E460` (pointers to records, built by fn_249060; fn_242ad0 also uses it),
the first index `[0x4F50D0]`, the first index of pass 1 `[0x666098]` (fn_249060), the render settings block
R = 0x4F4B40 (+0x20 packets on, +0x24 dedupe on, +0xA0 mode, +0xB4/+0xC0 a counter, +0xC8 lights on, +0xD4 = 2,
+0x104/+0x108 which character image is loaded), the light settings `0x661594`, `0x4F4C94` (28-byte light sets),
the camera `0x4F4C78` and near bias `0x4F4C74`, the per-state brightness bytes `[0x62AC24]` (written by
FlickerBackground.cpp, Backgrnd.cpp, MapAnimObject.cpp, pfmc_Water.cpp).

## What a segment is

A segment is one piece of a model's mesh with one VU1 program and one set of GS texture state: a **0x1D0-byte record**
in the model's array (`model+0x20`), built at load by ps2Setup.cpp (fn_24db78 writes its packet pointers). Fields this
function uses:

| Offset | Field |
|---|---|
| +0x00 | index of the segment's per-instance state (`model+0x18 + i*0x1C0`; also its brightness byte) |
| +0x10 | kind: picks the VU1 program family (jump table at 0x585240, below) |
| +0x14 | pass bits, ANDed with `model+0xE18` when a1 = 0 |
| +0x18 | cull result (fn_249060 sets 2 on every segment at 0x249258; the character culls write it per segment): 2 here, with R+0xB4, gives draw bit 0x1 and counts in R+0xC0 (inferred: the segments that need the clipping variant of their program) |
| +0x20 | in R+0xA0 = 3 mode, 0 or 2 forces draw bit 0x80 (lit) |
| +0x60, +0x6C | bounding box min / max (floats) |
| +0x12C, +0x1BC | sub-meshes: count and array (0x20 bytes each: +0 texture slot, +8 TEX0, +0x10 MIPTBP1, written by fn_24db78) |
| +0x130 | 64-bit flags: bit 41 no packet C (and draw bit 0x10000), 42/43/46/47 draw bits 0x4000/0x8000/0x1000/0x2000, 54 fixed program (no near LOD, no counter), 57 unlit |
| +0x138 | 64-bit flags: bit 2 prelit world program, bit 10 no near LOD (and draw bit 0x20000000) |
| +0x180, +0x184, +0x188 | counts added to the statistics `[0x661908]`, `[0x661888]` |
| +0x1A0 | LOD (float): nonzero selects packets A/B `[(int)lod]` and forces packets A and B |
| +0x1A4[2], +0x1AC[2], +0x1B4, +0x1B8 | four static GS-state packets (A per LOD, B per LOD, C, D "header"): VIF DIRECT A+D programs built once by fn_24db78 through TextureManager.cpp (B by fn_268ae0, C by fn_268ec0, D by fn_269170); as DMA `call` targets they end in a `ret` |
| +0x1C4 | light set index (28-byte entries at 0x4F4C94; < 2 = the default set) |

## The scratchpad double buffer

With `[0x4F4D5C]` = 2 (any nonzero value is forced to 2 on entry), records are not read from RAM: each one is copied
to the scratchpad by the toSPR DMA channel (D9) while the previous one is packed.

- Two halves: 0x70000000 and 0x700001D0 (one record each, QWC = 0x1D). `[0x4F50D8]` says which half the next transfer
  goes to and flips each time.
- Before the loop the first list entry (`[0x65E460]`, always index 0) is started. At each segment the loop waits for
  the transfer in flight (`CHCR.STR`), **counting its polls into `[0x65E450]`**, starts the next entry's transfer into
  the other half, and packs the record in the half filled last time. The last iteration prefetches one entry past the
  end, whatever that list slot holds (the copy is never used).
- Registers written per transfer: D9_QWC = 0x1D, D9_SADR = half, D9_MADR = (record & 0x0FFFFFFF) | 0x80000000,
  D_PCR = 0x200, D_STAT = 0x200 (clears CIS9), D9_CHCR = 0x101.
- In this runtime the DMA completes inside the CHCR store, so the wait loop never iterates and `[0x65E450]` never
  changes. The decompiled function keeps the loop anyway: it is game RAM, in the state hash.
- Consequence for a native renderer: **fn_23a280's a0 is a scratchpad address** in this mode, valid only until the
  segment after the next one is fetched. Anything taken at this seam must be copied at the call (or read from the RAM
  record, the list entry `[0x65E460 + 4*i]`).

With `[0x4F4D5C]` != 2 the record pointer comes straight from the list. That is what the game does: `[0x4F4D5C]` is
written only here (fn_216ac0 takes its address, likely a debug menu entry) and is 0 in every reference scene, and
`[0x66609C]` (the chain in the scratchpad, below) is never written by code. Both modes are verified only on synthetic
contexts (decomp/difftest/synth/batch_j.py).

## Per segment, in order

1. **State**: `s = model+0x18 + record.state * 0x1C0` (through the uncached segment if `[0x663450]`); `s+0xAC = 1.0`.
   When a1 = 0 the segment is skipped unless `model+0xE18 & record+0x14`.
2. **Draw bits** start at 0, or 1 with R+0xC0 counting when R+0xB4, a1, not flag 54, and record+0x18 = 2.
3. **Light set** (if R+0xC8): `[0x65E380]` = set `record+0x1C4` (or the default 0x661598 / 0x4F4CB0), and draw bit
   0x80 (lit) by flag 57 or the set's +0x18; R+0xA0 = 3 forces 0x80 for record+0x20 in {0, 2}.
4. **Program** by kind (the offset goes to fn_23a280 as a2; the image is uploaded by fn_23ff60/fn_23de10 before):

   | Kind | Condition | Image | Entry offset | Draw bits |
   |---|---|---|---|---|
   | 1 | flag 54 | C 0x4A20B0 | 0x790 | `|= 0x04000001`, `&= ~0x80` |
   | 1 | setting `[0x756C90]` (fn_379988), near test on `[0x4F4C98]`, `|state+0xA0 - camera|^2 < (largest bbox extent + bias)^2`, not flags2 bit 10 | C | lit ? 0x36F0 : 0x3210 | `|= 0x08000001` (near) |
   | 1 | otherwise | C | bit 0x1 ? (lit ? 0xEF0 : 0x790) : (lit ? 0xB40 : 0x4A0) | |
   | 2 | a1, flags2 bit 2 | C | 0x17E0 | `|= 3` |
   | 2 | a1 | C | 0x2520 | `|= 2` |
   | 2 | a1 = 0 | A / B / D | 0 / 0 / 0x1290 | `= 0x10402` |
   | 3 | | A / B / D | 0x6F0 / 0x360 / 0 | `= 0x10006` |
   | 4 | | A / B / D | 0xE50 / 0x800 / 0x890 | `= 0x1000A` |
   | 5 | image D only (else skipped) | D | 0xDC0 | `= 0x10012` |
   | 0, 15 | | | | skipped |
   | 6-14, >= 16 | | | 0 | |

   A = 0x49E430 if R+0x104, else B = 0x49F900 if R+0x108, else D. The D offsets are counted from **0x49BA50**, i.e.
   image D (0x49B8B0, native-renderer.md §1.5) + 0x1A0: the labels +0x1A0, +0xA30, +0xF60, +0x1430 of that table.
   So image D also holds character programs, not only post FX (to confirm with a run where R+0x104/0x108 are 0).
5. **More bits** (all kinds but the skipped ones): flags as in the record table, 0x200 in the main pass, 0x100 if the
   state's brightness byte is nonzero or `model+0x1048` != 128.0.
6. **Setup**: with `[0x66609C]` the chain is restarted in the scratchpad at 0x70001000 for every segment (and put back
   to `([0x660D50] & 0x0FFFFFFF) | 0x30000000` at the end); kind 2 in the main pass calls fn_23d2f0(state, record, 1);
   draw bit 0x1 computes the segment matrix `[0x661A70] = sceVu0MulMatrix(view 0x6610A0, state+0x50)`. a1 = 0 stops here
   after `[0x65E454] = (int)model+0x1048`; in the main pass `[0x65E454]` = the brightness byte when bit 0x100.
7. **Texture-state dedupe** (if R+0x24): `[0x6615B8 + 4*slot]` holds per texture slot which packets were sent this
   frame (bits 1-3 pass 0, 4-6 pass 1, for A/B/C). The segment needs a packet when any of its sub-meshes has not had
   it; a nonzero LOD needs A and B; then all its sub-meshes are marked sent (C only without flag 41). R+0x24 = 0:
   every packet.
8. **Chain** (if R+0x20 and R+0xD4 = 2), below.
9. **fn_23a280**(a0 = record, a1 = model, a2 = program offset, a3 = draw bits, t0 = 0x65E2C8), with `[0x65E380]`
   light set, `[0x65E454]` brightness, `[0x661A70]` segment matrix as implicit inputs. `0x65E2C8` is reset to 0 and
   `[0x6618FC]`, `[0x65E458]` to -1 once per call of fn_242ff8 (state fn_23a280 keeps across the instance's
   segments).

## The chain bytes it writes

All through `[0x65E300]` (decomp/src/render/dma_chain.hpp). Each packet is a DMA `call` to the static packet:

```
pad with zero words to a qword            (VIF NOPs in the open tag's data)
open tag [0x65E308]: word 0 += qwords written after it - 1   (its QWC now covers its inline data)
tag:  0x50000000 (call, QWC 0)  |  packet & 0x9FFFFFFF  |  VIF code 0  |  VIF code 1
[0x65E308] = tag, [0x65E30C] = 0, [0x65E300] = tag + 8
```

In order, per segment:

- **D (header) + FLUSH**: at the first segment of a pass (index 0, or `[0x666098]` in pass 1); then every packet is
  needed.
- **FLUSH** when any packet is needed (unless `[0x6634E0]`).
- **A** `[(int)lod]`, **C** (not with flag 41), **B** `[(int)lod]`, each if needed.
- **D again** after any of them (unless `[0x6634E4]`).

fn_23a280 then appends the segment's own data (GS state, constants, BASE/OFFSET, MSCAL) after the last tag, inside
its QWC: with TTE, the VIF sees each tag's two VIF codes, then the inline data, then the called packet up to its
`ret`. So the per-segment constants and MSCAL written by fn_23a280 reach VIF1 **before** the D packet called by the
last tag.

## For the native renderer (Seam E)

- The natural record is the fn_23a280 call: record (copy it: scratchpad), model, program (image + offset), draw bits,
  light set, brightness, segment matrix, plus the texture slots of the record's sub-meshes. Everything else the chain
  carries for the segment is static per record (packets A-D) or written by fn_23a280.
- Texture state is deduplicated per frame and pass by texture slot, so the chain does not repeat it: a native path
  must key texture state on the slot, not on the presence of a packet.
- The EE side must keep running unchanged (native-renderer.md §6): the toSPR transfers, the wait counter, the
  statistics, the dedupe table and the chain bytes are all game RAM.
- Not determined statically: what the counter at R+0xC0 and the draw bits 0x1000-0x8000, 0x04000000, 0x20000000 mean
  to fn_23a280 (read them there), and whether the last-iteration prefetch past the list end ever reads a bad pointer.
