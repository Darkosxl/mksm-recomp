# IPU gaps for Sofdec movie playback (SLUS_210.87)

Scope: predict what CRI Sofdec (MWSFD 3.50 / SFD 1.958 / M2V 1.958) needs from the IPU emulation
in `ps2-web-recomp/runtime/src/ipu/ipu.cpp` + `dmac.cpp`, before we hit it.

ipu.cpp line numbers are from the 2026-10-15 snapshot; the runtime is being edited, so prefer the function names.

Tools (stdlib only, re-runnable):
- `tools/scripts/ipu_scan.py <elf>` - every lui-0x1000-based access to IPU regs/FIFOs, D3/D4, D_*; decodes constant IPU_CMD / IPU_CTRL values.
- `tools/scripts/str_xref.py <elf> <regex> --funcs` - string -> code xrefs (used for the MWSFD/libmpeg map below).
- `tools/scripts/sfd_parse.py` - SFD demux + MPEG-2 header/extension statistics (+ optional I-picture macroblock parse).

## Key structural finding

CRI M2V does **not** drive the IPU itself. It sits on Sony's **libmpeg** (strings
"sceMpegGetPicture is aborted", "_sceMpegSliceA0(): error happens", "[MPEG ERROR]%s") and
**libipu** ("PsIIlibipu 3000"). So the IPU usage is the stock SDK 3.0 libmpeg pattern: every header field
is read through the IPU (FDEC as getbits), every macroblock through VDEC + BDEC, motion compensation in EE
software (MMI + scratchpad DMA), colour conversion with CSC. **No IPU interrupt (INTC 8) handler is ever
registered**; everything polls IPU_CTRL/IPU_CMD BUSY, plus DMAC ch3/ch4 handlers for CSC.

Code map (EE vaddr):

| Range / addr | What |
|---|---|
| 0x43a000-0x443f00 | MWSFD (mwPly*) |
| 0x443f40-0x45b9d0 | CRI SFD core (demux, supply, timing); 0x44bc00-0x44c800 = SFD's IPU bitstream feeder |
| 0x45b9d0 / 0x45ca70 | CRI MPV / CRI M2V (thin layer on libmpeg) |
| 0x467c78-0x46f128 | Sony libmpeg |
| 0x46f128-0x46f740 | Sony libipu (sceIpuStopDMA 0x46f218, sceIpuRestartDMA 0x46f300, sceIpuSync 0x46f450, sceIpuInit 0x46f530) |

libmpeg internals worth naming: sceMpegCreate 0x467d48, sceMpegReset 0x468950 (likely), core get-picture
0x468048, sceMpegGetPicture (RGB32 via CSC) 0x4688b0, sceMpegGetPictureRAW8 0x4688f8, callback dispatcher
0x468a58 (type 2 CbStopDMA / 3 CbRestartDMA / 4 CbBackground), CbNodata 0x468ad0, CSC driver 0x469a58,
BDEC-error handler 0x46a200 ("Error code detected(BDEC)"), picture/slice loops 0x46b4e8 / 0x46b728,
macroblock decoder 0x46c020, MBAI loop 0x46c5a0, wait-not-busy 0x46cbe8 -> 0x46c6f0,
wait-and-read-IPU_CMD 0x46c858, getbits 0x46c9d8, showbits 0x46cac0, skipbits 0x46cb50,
sequence_extension 0x46e6f8, picture_coding_extension 0x46e940, sequence-header matrices ~0x46e2c0.
M2V callbacks: CbStopDMA 0x468d88 -> sceIpuStopDMA, CbRestartDMA 0x468db0 -> sceIpuRestartDMA,
CbNodata -> SFD supply 0x44c0d8.

## (a) What the game uses

### Commands (from `ipu_scan.py`, all call sites)

| Cmd | Sites | Options seen |
|---|---|---|
| BCLR | 0x469afc, 0x46e358/0x46e458 (via 0x46ed18), 0x46f584, 0x46f73c; **BCLR FB=BP** in RestartDMA 0x46f3bc (and SFD copy 0x44c648) | FB = saved IPU_BP.BP (0..127) |
| VDEC | TBL0 MBAI 0x46c5c4; TBL1 MBType 0x46c0a8; TBL2 MV 0x46bab8/0x46bc7c; TBL3 DMV 0x46bbec/0x46bdd8 | FB=0. Result read as 64-bit `ld IPU_CMD`; low 16 bits sign-extended = value; **(int32)DATA==0 means invalid code** (0x46c618, 0x46bb14). MBAI 0x22 = stuffing, 0x23 = escape(+33) |
| FDEC | 0x46ca1c, 0x46ca5c, 0x46cb08, 0x46cb7c | FB=0 (refill) and FB=n 1..32 (advance n, peek next 32). All header parsing (seq/GOP/pic/ext, start codes, matrices load flags) goes through this |
| BDEC | 0x46c434 | `0x20000000 | MBI<<27 | DCR<<26 | DT<<25 | QSC<<16`, FB=0; output RAW16 768 B -> ch3 (QWC 48, 0x46dd08) |
| SETIQ | IQM=0/1 straight from bitstream (0x46e304, 0x46e404); from memory via ch4 4 QW (0x46e3ac, 0x46e4b8, default matrices 0x560b00/0x560b40, bracketed by CbStopDMA/CbRestartDMA); sceIpuInit via 8x `sq IPU_in_FIFO` (0x46f5c4..0x46f63c) | |
| SETVQ | sceIpuInit only (0x46f698) | |
| CSC | 0x469c90, 0x469e40 (MBC = n), 0x4699b4 / 0x469fdc (MBC 1023, from ch3 handler 0x469f30), 0x46a064 (remainder) | **OFM=0 (RGB32), DTE=0** always. 640x432 = 1080 MB > 1023, so frames are split across two CSCs re-armed from the DMAC ch3 handler |
| SETTH | sceIpuInit (0x46f6cc) | TH0=TH1=0 |
| IDEC, PACK | **never** | |

### IPU_CTRL fields written

- MP1 set at create/reset (0x467c9c, 0x4689c0), cleared by sequence_extension (0x46e744).
- IDP (0x46e9c4), QST (0x46ea44), IVF (0x46ea74), AS (0x46eaa4) copied straight from picture_coding_extension.
- PCT per picture (0x46c084). RST = 0x40000000 at init/errors (0x468038, 0x469ac0 if ECD, 0x46a1f4, 0x46a240, 0x46f550, 0x46f704).

### Registers/flags read

- IPU_CMD 64-bit `ld`: DATA + BUSY(bit 63).
- IPU_TOP 64-bit `ld` after each VDEC/FDEC: BSTOP + BUSY(bit 63); valid bits = BUSY ? (32-BP%32)%32 : 32.
- IPU_BP: BP 0-6, IFC 8-11, FP 16-17. The wait loop computes `avail = (IFC+FP)*128 - BP`; if < 32 and D4_QWC==0 it calls CbNodata.
- IPU_CTRL: BUSY(31) and ECD(14) (wait loops exit on ECD), OFC(4-7) in sceIpuStopDMA. SCD and CBP are never read.

### DMA

- ch4 TO_IPU in **chain mode** fed by the SFD ring buffer (0x44c0d8): REF (id 3) / REFE (id 0) tags, 0x80 QW (2 KB) each, built at 0x44bd38.
- The SFD supply suspends the channel with **D_ENABLEW bit 16** (0x1000f590/0x1000f520) and writes CHCR=5 (stop). It reads D4_MADR to account consumed sectors, then restarts with `(CHCR & 0x0fffffff) | 0x30000000 | 0x100` (patches the TAG ID to REF).
- ch4 normal mode is used for CSC input and default matrices. ch3 normal mode is used for BDEC/CSC output.
- AddDmacHandler(3) 0x469f30 and AddDmacHandler(4) 0x46a078, plus EnableDmac, D_STAT CIS clear (0x469940, 0x469b80). The CSC driver busy-waits on a stack counter that only the handler increments (0x4699d8).
- **Every picture output** runs CbStopDMA (sceIpuStopDMA saves D4 MADR/TADR/QWC/CHCR, waits OFC=0, saves D3 + IPU_BP + IPU_CTRL), then RST-if-ECD, BCLR, CSC via ch4 normal, then CbRestartDMA. CbRestartDMA does `MADR -= (IFC+FP)*16; QWC += IFC+FP`, BCLR FB=BP, and restores the chain.
- SPR DMA ch8/ch9 (0x1000d000/0x1000d400) and MMI (paddh, psrlh, qfsrv, pextlb/ub, pminh/pmaxh, ppacb, pnor, pcpyld, por, pcgth) are used for motion compensation. These are not IPU, but they are on the same path.

### Bitstream (all 8 SFDs, `sfd_parse.py`)

- MPEG-1 system stream, 2048-byte packs. 0xE0 video; 0xC0-0xC4 ADX (enc 3, v4, 2 ch, 48 kHz, 18-byte blocks); 0xC5-0xC9 AC-3 5.1 448 kbps (multi-track files only); 0xBF "SofdecStream" info; 0xBE padding.
- MPEG-2 MP@ML 4:2:0, progressive_sequence=1, 29.97 fps. Sizes are 512x384 (MIDWAY), 640x432 (ESRB/GAUNTLET/BLITZ), 512x288 (END006/END011/FINAL) and 512x272 (OPENING). There is 1 sequence header per file.
- **Custom quant matrices in every file**: intra weights 1..8 (DC 8), non-intra flat 1 (BLITZ: flat 2). Both are loaded by SETIQ directly from the bitstream, at a non-byte-aligned bit offset.
- All 25,757 pictures have the same flags: picture_structure=3, frame_pred_frame_dct=1 (so DT is always 0), **intra_dc_precision=10 bits (IDP=2)**, **q_scale_type=1 (non-linear)**, **intra_vlc_format=1 (B.15)**, alternate_scan=0, concealment=0, progressive_frame=1.
- I/P/B with GOPs of 3-17 (IBBP...), one slice per MB row, and qscale codes 1..31.
- With these tiny weights, **escape codes are very common** (millions in the I-pictures), so 12-bit MPEG-2 escapes, saturation and mismatch control are heavily exercised.

Never exercised: alternate scan, field pictures, field DCT, B.14 intra, MPEG-1 video, IDEC, PACK, RGB16, dither, D-pictures, IPU interrupt.

## (b) What ps2-web-recomp implements (runtime/src/ipu/ipu.cpp)

| Feature | Status |
|---|---|
| BCLR incl. FB | yes, `run_command` :442 |
| BDEC MBI/DCR/DT/QSC, IDP, IVF/B.15, QST non-linear, MP1, mismatch control, ±2048 saturation, RAW16 768 B | yes, :448, `decode_block` :250, `decode_macroblock` :301 |
| VDEC TBL 0-3, MBType I/P/B (`len<<16|value`, Play!-derived tables) | yes, :463 (D-picture -> BadCode) |
| FDEC FB then 32-bit peek | yes, :485 |
| SETIQ zigzag to raster, SETVQ, SETTH | yes, :493/:505/:528 |
| CSC RGB32/RGB16, MBC count | yes, :516 (DTE ignored) |
| IDEC | partial (no SGN/DTE). Unused here |
| PACK | no (logs + completes). Unused here |
| Stall-tolerant input | commands run on the IPU_CMD write; NeedData rolls back the macroblock (`atomic` :356) and retries on FIFO write, DMA start, OUT read or command write |
| IN FIFO | unbounded vector, `top_up` to 8 QW (:187); ch4 pulled lazily via `dmac::ipu_pull` (chain refe/cnt/next/ref/refs/end, TIE+IRQ) |
| OUT -> ch3 | `drain` :538 -> `dmac::ipu_push` |
| Registers | IPU_CMD/TOP 64-bit via `hw::read64` = 2x read32; IPU_BP BP/IFC/FP (:596); IPU_CTRL IFC/OFC/ECD/SCD/BUSY, RST (:640) |
| D_ENABLER/W | ENABLER reads back the last ENABLEW (`hw::read32`); suspend itself not modelled, which is harmless because ch4 is pulled lazily |
| DMAC handlers | AddDmacHandler / EnableDmac syscalls (kernel.cpp syscall 0x12-0x17); dispatched in `kernel::service` at unwind points |
| IDCT | double-precision separable reference (`idct` :233), clamps to [-256,255] |

So **every command and option Sofdec issues exists**. The gaps are semantics, edge cases and accuracy.

## (c) Gap list (ordered by risk to playback)

1. **Per-frame CbStopDMA / CbRestartDMA round trip must be bit-exact.** Code: `ipu.cpp: read32(0x10002020)` :596, `read32(0x10002010)` :591, `run_command(kBclr)` :442; `dmac.cpp`: `write` (CHCR case), `start`.
   - IPU_BP and IPU_CTRL.IFC return **0 while `g_starved`** (:592, :597). If a stop ever happens mid-stall, the rewind is lost and the bitstream desyncs. Return the true counts.
   - IFC+FP must equal "qwords pulled from ch4 and not fully consumed". This holds today only because `commit()` runs after each command and `top_up` caps at 8 QW. Keep it as an invariant and assert it.
   - Add a `PS2_TRACE_IPU` check: the absolute stream offset before StopDMA must equal the offset after RestartDMA + BCLR(BP).
   - Reference: PCSX2 `ipuRead32/ipuRead64` IPU_BP, `ipuBCLR` (pcsx2/IPU/IPU.cpp); Play! `CIPU::GetBP`/`CINFIFO` (Source/ee/IPU.cpp).
2. **Error semantics.** Code: `ipu.cpp: step` :554, `kVdec` :463, `kFdec` :485.
   - On BadCode, VDEC must return **DATA=0** (libmpeg tests `(int32)DATA==0` -> error path). Today it leaves a stale `g_result`.
   - Set ECD, clear BUSY, and roll back or keep BP the way hardware does. Do not leave partial OUT data.
   - Today BDEC BadCode leaves ch3 waiting forever. libmpeg exits its D3 wait on ECD (0x46b5e8), so ECD must be visible immediately.
   - Reference: PCSX2 `ipuVDEC`/`ipuBDEC`/`mpeg2_slice` + `get_macroblock_address_increment` (pcsx2/IPU/mpeg2lib/Mpeg.cpp); Play! `CVDECCommand::Execute`.
3. **Intra BDEC output range.** Code: `ipu.cpp: decode_macroblock`/`idct` :246.
   - PCSX2 decodes intra MBs into `mb8` (clipped 0..255) and copies that to mb16. The runtime clamps to [-256,255].
   - libmpeg has pmaxh/pminh before ppacb in some paths, so this may be masked. Verify against PCSX2, and clamp intra to 0..255 if the hardware does.
4. **Dequant rounding and IDCT accuracy (P/B drift).** Code: `decode_block` :290, `idct` :233.
   - The weights are 1-8, so negative-escape rounding (spec truncation, used by the runtime, vs `>>4` floor in libmpeg2/PCSX2) and the IDCT algorithm change the low bits.
   - Those bits feed 15-17-frame prediction chains.
   - Replace the double IDCT with an IEEE-1180 integer IDCT (Play! `IDCT::CIEEE1180`, PCSX2 `mpeg2lib/Idct.cpp`). It is also about 10x cheaper: 1080 MB x 6 blocks x 30 fps.
   - Validate one GOP against PCSX2 frame dumps.
5. **DMAC handler delivery inside spin loops.**
   - The CSC driver spins on a memory counter (0x4699d8) that only the ch3/ch4 DMAC handlers bump. 640x432 also needs the second CSC to be issued from the ch3 handler (0x469f30 -> 0x469fdc/0x46a064).
   - Confirm that `kernel::must_unwind`/budget checks fire inside a loop with no I/O; otherwise it hangs.
   - Code: kernel.cpp `must_unwind`, `service`; dmac.cpp `finish`.
6. **ch4 chain restart with patched CHCR.TAG.**
   - The SFD supply writes CHCR=5 (stop), then `|0x30000000|0x100`. `start()` derives `tag_end` from CHCR.ID (`dmac.cpp start`), which looks right.
   - Test the REFE-ended case (QWC=0, TADR at the newly appended tag) and the mid-tag case (QWC>0, ID patched to REF).
   - Reference: PCSX2 `IPU1dma`/`IPU1chain` (pcsx2/IPU/IPUdma.cpp).
7. Minor and not needed for these SFDs:
   - BDEC sets SCD + suppresses INTC 8 when 8 zero bits follow (:457). Harmless here, because no INTC 8 handler is registered.
   - IPU_CTRL.CBP is not written (never read).
   - CSC rounding differs from PCSX2 by at most 1 LSB.
   - IDEC SGN/DTE, PACK, RGB16 alpha and D-picture MBType are absent; all unused.
   - FIFO depth is unbounded (fine because ch4 is pulled lazily).

Reference implementations (verify paths against current upstream):
- Play! (BSD-2, already the source of `tables.hpp`): https://github.com/jpd002/Play-/blob/master/Source/ee/IPU.cpp. See `CIPU::CBDECCommand`, `CVDECCommand`, `CFDECCommand`, `CCSCCommand`, `CSETIQCommand`, `CINFIFO`, `GetBusyBit`, the IPU_BP/IPU_TOP read paths, and `Source/idct/IEEE1180.cpp`.
- PCSX2 (GPL; for semantics only, do not copy): https://github.com/PCSX2/pcsx2/tree/master/pcsx2/IPU. See `IPU.cpp` (`ipuRead32/64`, `IPUCMD_WRITE`, `ipuBCLR`, `ipuVDEC`, `ipuFDEC`, `ipuSETIQ`, `ipuCSC`), `IPU_MultiISA.cpp` / `mpeg2lib/Mpeg.cpp` (`mpeg2sliceIDEC`, `mpeg2_slice`, `slice_intra_DCT`, `slice_non_intra_DCT`), `mpeg2lib/Idct.cpp`, `yuv2rgb.cpp`, `IPUdma.cpp` (`IPU1dma`, `IPU0dma`).

## (d) Fallback: HLE Sofdec instead of emulating the IPU

The game-side player is small. All addresses are in the main ELF; mwPly names come from their error strings.

| Game fn | Calls |
|---|---|
| 0x26f918 create+start | mwPlyCalcWorkCprmSfd 0x43a7e0, **mwPlyCreateSofdec 0x43b670**, mwPlySetFrmSync 0x43bf68, 0x43e910, 0x43a0d8, 0x43e980, mwPlySetAudioCh 0x43df10, mwPlySetOutVol 0x43e120, 0x43a080, **mwPlyStartFname 0x43d4f8 (-> 0x43d510)** |
| 0x26fbf0 per frame | **mwPlyGetCurFrm 0x43bfc0**, **mwPlyRelCurFrm 0x43c6a8**, **mwPlyGetStat 0x43e058** |
| 0x26fd8c movie loop | mwPlyInitSfdFx 0x43cb40, 0x26f918, 0x26fbf0, stop 0x43a0f0 (-> 0x43a170), destroy 0x43bbf0 (-> mwSfdStop 0x43d630), mwPlyFinishSfdFx? 0x43ce78 |
| 0x2701e8 / 0x2702d8 / 0x2702f8 | InitSfdFx / FinishSfdFx / stop+destroy |
| filename table | `.data 0x4d3a10` (8 ptrs: MIDWAY, OPENING, FINAL, END006, END011, ESRB, BLITZ, GAUNTLET); read at 0x211258, 0x2113e8, 0x211414, 0x2114a0, 0x2f7fa0 |

Other MWSFD anchors: mwPlySfdInit 0x43cfe8, mwPlyExecSvrHndl 0x43fbcc, MWSFSVR thread setup 0x43cd00, mwPlyPause 0x43d758, MWSFD version string xref 0x43cb8c, SFD core version 0x443f48, M2V version 0x45cc20/0x45cd2c, MwsfdCrePrm buffmt check 0x43a648 (buffmt at cprm+0x24; the game leaves it 0 -> internal fmt 2 -> sceMpegGetPicture/CSC path).

Fallback levels, cheapest first:
1. **Skip movies.** Make 0x26fd8c return immediately, or make mwPlyGetStat 0x43e058 return PLAYEND. This unblocks boot and attract mode in about an hour.
2. **HLE at the mwPly boundary.** Hook CreateSofdec/StartFname/GetCurFrm/RelCurFrm/GetStat/Stop/Destroy. Decode the SFD on the host with FFmpeg: libavformat's mpeg demuxer detects "SofdecStream" and maps 0xC0-0xCF to ADX, and mpeg2video does the video. Write each frame into the frame object GetCurFrm returns; its layout comes from 0x26fbf0's field use. Audio goes to the host mixer, honouring SetAudioCh (language track 0xC0-0xC4) and SetOutVol.
3. **HLE libmpeg.** Replace sceMpegGetPicture 0x4688b0 / core 0x468048 with a host MPEG-2 decoder fed by the same CbNodata ring buffer. This keeps CRI timing and ADX intact but is the most invasive.

Recommendation: keep the IPU path, since every command already exists, and fix items 1-3. Keep option 1 behind a flag as a safety net.
