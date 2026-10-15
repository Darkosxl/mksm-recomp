# Audio stack: predicted gaps for MK: Shaolin Monks (SLUS_210.87) on ps2-web-recomp

Static analysis only: no audio has been run yet. Sources:
- The IRXs in `analysis/elf/IOP/`, decoded with `tools/scripts/irx_audio_scan.py` (stdlib MIPS decoder with constant propagation). Run it with `--hw`, `--calls` or `--func HEX`.
- The EE ELF (strings and SID constants).
- `ps2-web-recomp/runtime/src` as of 2026-10-15.

Generic import-ordinal gaps are covered in `notes/iop-gaps.md` and are not repeated here. Two items from that file matter for audio: CDVDSTM self-unloads because AddDrv returns -1, and the PADMAN timer line 14 never fires.

Unless stated otherwise:
- IRX addresses are module-relative.
- SPU2 RAM addresses are in halfwords, matching the runtime's convention.

---

## (a) The stack

```
EE (recompiled, runs natively)                    IOP (R3000 interpreter, LLE IRXs)                  SPU2 (spu2.cpp)
───────────────────────────────────────────────   ─────────────────────────────────────────────────  ─────────────────────
Paradox SFX_Cntl.cpp ──RPC 'SNDF' 0x534E4446 ───▶ SNDFI.IRX "SNDF Driver 2.24b" (MW C 2.4) ─┐
                     ──RPC 'SFSV' 0x53465356 ───▶   voices, banks, reverb, 200 Hz tick       │
                                                    (timrman hard timer)                     │
libsdr sceSdRemote ────RPC 0x80000701 ──────────▶ SDRDRV.IRX "SDR 4.0.1" (generic remote     ├─▶ LIBSD.IRX ──▶ SPU2 regs
   EE callback server 0x80000704 ◀── SifCallRpc ──  libsd); used only if the EE calls it     │   (3.3, sole   DMA ch4 / ch7
                                                                                             │   HW toucher)  IOP INTC 9/36/40
CRI ADXT/PS2EE 9.52a: ADX decoded ON THE EE       CRI_ADXI.IRX "ADXI 9.52"                   │
  ADXF ─▶ CVFS ─▶ DVCI/SRD ─▶ libcdvd sceCdRead     DTX RPC server SID 0x90000200            │
  (disc reads land in EE RAM; no sceCdSt*,          IOPRNA ─▶ RCV (rate-convert ─▶ 48 kHz)   │
   no cdrom_stm)                                    ─▶ PSMMIX (software mix)                 │
  PL2ENC (Dolby PL-II on EE)                        ─▶ PSMOUT ─ sceSdBlockTrans(core,        │
  PS2RNA ── PCM into IOP RAM (sceSifAllocIopHeap      WRITE|LOOP, 0x1000 B) ────────────────┘
            + SIF DMA, SJ "remote" rings) ─────────▶ SJRMT/SJRBF rings
         ── DTX RPC 0x90000200 ────────────────────▶ main thread: vblank-driven
                                                    (WaitVblankEnd loop at 0x88)
CDVDSTM.IRX: loaded but idle for audio (EE sceCdSt* is served by HLE cdvdfsv; see iop-gaps.md).
```

### Module roles

**LIBSD** (Sony libsd 3.3)
- It is the only module that touches hardware: 215 SPU2 accesses and 40 DMA/DPCR accesses. CRI_ADXI, SNDFI, SDRDRV and CDVDSTM have none, and no audio IRX touches the root counters or INTC directly.
- `sceSdInit` (export #4, 0x45BC) registers handlers with mode 1:
  - 0x27E8 on line 0x24 (DMA4, arg 0x5328);
  - 0x27E8 on line 0x28 (DMA7, arg 0x5330);
  - 0x3F10 on line 9 (SPU2 IRQ).
- The export table follows the ps2sdk numbering: 2 Quit, 4 Init, 5 SetParam … 18 BlockTrans … 33 SetEffectModeParams.

**CRI_ADXI**
- It is a PCM sink. It has **no ADX decoder**: ADXB/ADXSJD strings exist only on the EE.
- Pipeline: EE-decoded PCM → IOPRNA → RCV resamples to 48 kHz → PSMMIX mixes in software on the IOP → PSMOUT feeds SPU2 AutoDMA.

**SNDFI**
- The game's SFX/voice driver: 48 hardware voices (2×24), sample banks uploaded with `sceSdVoiceTrans`, reverb on both cores.
- Its tick comes from a timrman hard timer, so it is thread-woken.

**SDRDRV**
- Sony's remote-libsd RPC server, SID 0x80000701 (registered at 0x538).
- On callback init it binds the EE server 0x80000704 (0x1014).
- The EE links libsdr: `sceSdRemoteInit` builds SID 0x80000701 at EE 0x3829E8, and "SceSdrCallbackThread" exists. Which sceSd calls the game actually remotes is unknown until runtime.

**Boot arguments** (from EE strings at 0x485AF8): `CRI_ADXI sdinit=0 spucore=2`.
- `sdinit=0`: CRI skips `sceSdInit`. It still sets MVOLL/R = 0x3FFF on both cores (CRI_ADXI 0x0–0x84).
- `spucore` accepts 0, 1 or 2 (`sltiu 3` at 0x2B4).
- With 2, `PSM init` (0x1F58) creates PSMOUT objects for **both** cores (loop at 0x1FB0) and **starts both** (0x1FF8 loop: when `spucore==2` or mixer field3 == 1). Static reading: AutoDMA runs on ch4 **and** ch7 at once. This must be confirmed at runtime (section d).

---

## (b) Features the audio IRXs use

| Feature | Used? | Evidence |
|---|---|---|
| **AutoDMA (ADMA) loop** | **YES, core-critical** | See [AutoDMA details](#autodma-details) below. |
| VoiceTrans DMA (block mode, one-shot) | YES | SNDFI uploads banks (`sceSdVoiceTrans(ch, mode 0, …)` at 0xE158, channel = cfg field +0xF64). `SetEffectAttr`'s work-area clear also uses DMA. CRI clears 0x4000 bytes at SPU 0x2000 on stop (0x5C28). CHCR 0x01000201 (to SPU) or 0x01000200, BCR 0x10, 64-byte blocks. |
| **VoiceTrans vs ADMA exclusivity** | YES | See [exclusivity details](#voicetrans-vs-adma-exclusivity) below. |
| PIO transfer (DATA 0x1AC) | YES (init) | `sceSdInit` 0x4034 writes at TSA 0x2800 and polls `STATX & 0x400 == 0` (0x4118). The other PIO path (0x264C) polls the same bit. |
| **STATX** | YES | See [STATX polling](#statx-polling) below. |
| **Reverb** | **YES, both cores** | SNDFI: `SetCoreAttr(2/3 = EFFECT_ENABLE, 0/1)`; `SetAddr(SD_A_EEA)` core0 = 0x1FFFFF, core1 = 0x1FFFF bytes (0xD4AC/0xD4BC); `SetEffectAttr(0/1, &attr)` with mode = preset \| 0x100 or 0x300 (0xD510/0xD534, 0xA190/0xA278/0xA334/0xA364); EVOLL/R via `SetParam(0xB80/0xC80)`. LIBSD writes ESA (0x2E0/0x2E2), the address regs 0x2E4–0x33A and coefficients 0x774–0x786 (+0x28 per core) in sub_13C, plus ATTR bit7. Presets come from EE data, so the modes are dynamic. |
| **VMIXL/VMIXR/VMIXEL/VMIXER per voice** | YES | SNDFI read-modify-writes switches 0x18/0x1A/0x19/0x1B (0x9DAC–0x9EB0). libsd init sets all to 0xFFFFFF. |
| **MMIX** | YES | libsd init: C0 = 0x0FF0, C1 = 0x0FFC. SNDFI toggles C1 MMIX bits 0–1 (core0 output into core1 wet) per preset (`Get/SetParam(0x801)` at 0xA08C/0xA0B4). Bit meaning, low to high: Ext wetR/wetL/dryR/dryL; ADMA-in wetR/wetL/dryR/dryL; voices wetR/wetL/dryR/dryL. |
| Core0 → core1 chaining (AVOL) | YES | libsd init: C1 AVOLL/R = 0x7FFF, C0 = 0. CRI zeroes C1 AVOL only in Dolby-bitstream mode (0x5D6C). |
| BVOL (ADMA input volume) | YES | CRI `SetParam(core\|0xF80/0x1080, 0x7FFF)` after BlockTrans (0x5B78/0x5B94). |
| MVOL | YES | 0x3FFF on both cores (CRI and SNDFI). |
| **Noise** | likely | SNDFI read-modify-writes NON (switch 0x14, 0x9EBC); noise clock = 0x3F on both cores (`SetCoreAttr(8/9, 0x3F)` at 0xB790/0xB79C). |
| Pitch modulation (PMON) | **no** | No switch 0x13 in SNDFI. libsd init clears it. SDRDRV is the only other path. |
| ENDX | no (SNDFI) | SNDFI polls **ENVX** (`GetParam(voice\|0x500)` at 0xA7DC) and never reads ENDX. SDRDRV or EE could. |
| **IRQA / SPU2 IRQ** | **no** | No caller of `sceSdSetIRQCallback` or `SetSpu2IntrHandler` in CRI or SNDFI. SDRDRV only clears them at unload. LIBSD's line-9 handler (0x3F10) reads 0x7C2 and dispatches. IRQ enable (ATTR bit6, `SetCoreAttr(4/5)`) is never set by these modules. |
| SPDIF | init only | libsd writes 0x7C0 = 0xC032, 0x7C6 = 0x900, 0x7C8 = 0x200, 0x7CA = 8. CRI sets `SPDIF_MODE` to 0x881 only in Dolby-bitstream mode. |
| Hardware timers | via timrman only | SNDFI: `AllocHardTimer(SYSCLOCK=1, 32-bit, prescale 256)`, `SetupHardTimer(id, 1, 0, 256)`, `SetTimerHandler(id, 0x2D0, 0xA3F4, 0)`, `StartHardTimer`. Ticks at 144 kHz with compare 720, so **5.000 ms (200 Hz)**, i.e. 184,320 IOP cycles. The handler `iWakeupThread`s and returns 0x2D0 to re-arm. CDVDSTM uses `thbase iSetAlarm` only. CRI paces itself on vblank. |
| Voice usage | SNDFI ≤ 48, CRI 0 | CRI plays every ADX stream through software PSMMIX, so only 1 ADMA stereo pair per core. |
| Sample rates | ADMA: fixed 48 kHz; voices: arbitrary pitch | CRI's RCV converts the stream sfreq to 48k on the IOP. SNDFI computes pitch itself (no `Note2Pitch` import). |
| SSBUS / DPCR setup | YES | LIBSD sub_1550 writes 0x1F801404 = 0xBF900000, 0x1F80140C = 0xBF900800, DPCR/DPCR2 (ch4/ch7 enable), 0x1F801014/0x1F801414 = 0x200B31E1. sub_209C/20C4 read-modify-write 0x1F801014 around DMAs. |

### AutoDMA details

**Setup**
- PSMOUT_Start (0x5A18) calls `sceSdBlockTrans(core, SD_TRANS_MODE_WRITE|SD_BLOCK_LOOP = 0x10, buf, nblk<<9)`.
- Each core gets a 0x1000-byte buffer at CRI_ADXI + 0xEBC0 + core·0x1000 (`PSMOUT_Create` at 0x1E00).
- LIBSD splits it into two 0x800-byte halves. Each half is 512 stereo frames, laid out L 0x200 B / R 0x200 B per 1 KB.
- LIBSD sub_2C3C writes ADMAS = 1<<core, TSA = 0, then MADR, BCR = 0x00200010 and CHCR = 0x01000201.

**Per-half interrupt (LIBSD ISR 0x27E8, block-trans branch at 0x29E4)**
- Toggles the half and rewrites MADR, BCRh and CHCR = 0x01000201. Each half is a separate DMA start.
- Calls `FlushDcache`, then the CRI handler 0x59E0, which does `iSignalSema` so the PSMOUT thread refills.
- Cadence: **one ch4/ch7 completion per 512 samples = 10.667 ms = 393,216 IOP cycles, per active core**.

**Status and stop**
- CRI calls `BlockTransStatus(core, 0)` (0x52D0) and uses only bit 24, the half index. It never uses MADR.
- Stop: `BlockTrans(core, 2)` (0x5BE8). LIBSD clears CHCR bit24 and ATTR DMA bits, and writes ADMAS = 0.

### VoiceTrans vs ADMA exclusivity

- LIBSD busy-check op 4 (sub_2198 → 0x222C) returns busy when ATTR & 0x30, CHCR bit24, or **ADMAS ≠ 0** for that core.
- In that case `VoiceTrans` returns **−210** (0xFFFFFF2E).
- SNDFI expects this: it prints `"ERR : sceSdSetEffectAttr(%d), DMA %D"`.
- The runtime must preserve this exactly.

### STATX polling

- `sceSdInit` cold reset (0x1F7C–0x1FD0): writes ATTR = 0 then 0x8000, then waits for `(STATX & 0x7FF) == 0` on both cores. The wait is up to 0xF00 iterations of a roughly 1.9k-instruction delay (sub_2150 → 0x20F4).
- DMA ISR (0x2864) and stop path (0x2498): wait for `STATX & 0x80`.
- PIO paths: wait for `STATX & 0x400 == 0`.

---

## (c) What the runtime implements vs what this game needs

Runtime facts below come from reading `iop/spu2.cpp`, `iop/hw.cpp`, `iop/libs.cpp` and `iop/kernel.cpp`.

### Already OK for this game (no work expected)

- **ADMA consumption and pacing.**
  - `spu2.cpp dma()` (:532) queues the transfer when `ADMAS & (1<<core)`.
  - `feed_input()` (:207) splits 1 KB chunks into L/R into a 512-frame ring at SPU 0x2000/0x2400. That matches CRI's buffer layout.
  - DMA-done fires once a transfer's last chunk enters the ring, so with 0x800-byte halves the cadence is about 512 frames.
  - The ring is mixed with BVOL (`render_input` :235).
- **DMA plumbing.**
  - The CHCR write with bit24 starts the transfer (`hw.cpp`:261 → `start_dma` :104).
  - `dma_done` (:183) sets DICR/DICR2 flag 24+ch.
  - `next_pending_interrupt` delivers ch4 as line 36 and ch7 as line 40, which matches LIBSD's `RegisterIntrHandler(0x24/0x28)`. The ISR returns 1.
  - ATTR DMA bits are stored raw, so LIBSD's "clear bits 4–5 then poll" loops pass.
- **The SNDFI timer.**
  - `libs.cpp install_timrman()` implements 4/6/20/22/23.
  - `timer_cycles()` gives 256 cycles per tick for source = 1, so compare 720 → 5 ms.
  - `fire_hard_timer` re-arms with the handler's return value.
- **Other paths:**
  - vblank `WaitVblankEnd` drives the CRI main loop.
  - `thsemap iSignalSema` and `thevent i*` work.
  - STATX bit 0x400 is never set, so the PIO waits exit immediately.
- **gp:** the runtime's interrupt-gp issue is moot here. None of LIBSD, SDRDRV, CRI_ADXI, SNDFI or CDVDSTM use gp-relative addressing (0 `(gp)` operands).

### Gaps, in priority order

| # | Gap | Effect on MK:SM | Where to implement | Reference |
|---|---|---|---|---|
| **G1** | **Core routing and mix gates are ignored.** VMIXL/R and VMIXEL/R (0x188–0x196), MMIX (0x198), AVOL and EVOL are stored but unused. Output is `core0·MVOL0 + core1·MVOL1`; on hardware it is `MVOL1·(core1 + AVOL1·MVOL0·core0)`. | Core0 content is about 6 dB too loud (0.5 vs 0.25 with MVOL 0x3FFF). SNDFI voices with VMIX bits cleared (wet-only or one-sided) play dry and centred. If spucore=2 really feeds the same PCM to both cores, music is roughly doubled. | `spu2.cpp tick()` (:262) and `render_voice()` (:177): apply per-voice VMIX/VMIXE gates into dry/wet sums, MMIX gates for voices/ADMA-in/Ext, core0 → core1 Ext × AVOL, and final = core1 only. Writes already land in `Core::regs[]` (:422). | PCSX2 `pcsx2/SPU2/Mixer.cpp` (`MixCore`, DryGate/WetGate; `RegWrite_Core` MMIX/VMIX in `spu2sys.cpp`). Play! `Source/iop/Iop_SpuBase.cpp` / `Iop_Spu2_Core.cpp` (BSD-2, portable). |
| **G2** | **No reverb.** ESA/EEA and 0x2E4–0x33A are raw-stored only. Coefficients 0x774–0x786 and 0x79C–0x7AE are **discarded** (`master_reg()` :455 returns nullptr, so reads give 0). The ATTR bit7 effect enable is ignored, and the wet rings are written as zeros (:278). | All arena and menu ambience is dry. SNDFI reprograms presets on scene change. | Add storage for the master coefficients in `master_reg()`, then a per-core reverb in `tick()` that runs at 24 kHz (every 2nd sample) over [ESA, EEA] in `g_ram`. Input = voices·VMIXE + ADMA-in/Ext per MMIX wet gates; output × EVOL. | PCSX2 `SPU2/Reverb.cpp` + `ReverbResample.cpp` (GPL-3.0+, behavioural reference only, since the runtime is MIT); psx-spx SPU reverb formulas https://psx-spx.consoledev.net/soundprocessingunitspu/ (same algorithm, SPU2 uses per-core regs and halfword addresses); Play! `Iop_SpuBase.cpp`. |
| **G3** | **ADMA stop does not cancel the queued transfer.** An ADMAS = 0 write resets the ring (:443) but not `k.transfers`. A CHCR write without bit24 (`hw.cpp`:261) does not cancel either. | After `BlockTrans(STOP)` the stale half (up to 10 ms) still plays and later raises a spurious DMA-done. LIBSD's ISR ignores it. A subsequent `VoiceTrans` / `SetEffectAttr` races with an in-flight fake ADMA. | `spu2.cpp write_core()` case 0x1B0: on `!(value & 3)`, clear `transfers` and zero 0x2000–0x23FF / 0x2400–0x27FF for that core (PCSX2 behaviour). `hw.cpp` CHCR write: if bit24 is cleared on ch4/7, call a new `spu2::cancel(core)`. | PCSX2 `spu2sys.cpp` `REG_S_ADMAS` (kills `AdmaInProgress`/`InputDataLeft`, zeroes buffers). |
| G4 | **STATX is constant 0x80** (`read_core` :408). | The `sceSdInit` reset wait `(STATX & 0x7FF) == 0` always times out: 0xF00 × delay ≈ 7M IOP cycles, about 0.2 s of emulated IOP time per cold init (SNDFI at boot; SDRDRV if the EE calls `sceSdRemote(Init)`). Not fatal. | `spu2.cpp`: keep a STATX per core. Set 0x80 at reset. On an ATTR write: if the DMA bits are 0 and 0x400 is clear, clear 0x80; if the DMA bits newly become nonzero, set 0x80. At DMA start (block mode): clear 0x80 and set 0x400. At `dma_done` for that core: set 0x80 and clear 0x400. | PCSX2 `spu2sys.cpp` (`V_Core::Init` STATX = 0x80; `REG_C_ATTR` STATX logic), `Dma.cpp` (`PlainDMAWrite`/`DoDMAwrite`: `STATX &= ~0x80; STATX \|= 0x400`). |
| G5 | **Noise generator is missing** (NON bits are ignored). | Any SFX authored as noise voices plays its sample data instead, or silence. | `render_voice()`: if the NON bit is set, use an LFSR noise value clocked by ATTR bits 8–13 (NoiseClk). | PCSX2 `Mixer.cpp` noise (`GetNoiseValues`); psx-spx "Noise Generator". |
| G6 | **DMA MADR/BCR do not advance** (`start_dma`, `feed_input`). | Not used by CRI (only bit 24). LIBSD `BlockTransStatus`/`StopTrans` return MADR to SDRDRV/EE callers, so the position looks stuck at the half start. | `feed_input()`: write the advanced `t.madr` back to `g_dma[ch].madr` (expose a setter from `hw.cpp`). Block DMA: MADR += bytes, BCRh → 0 on done. | Play! `Iop_DmacChannel.cpp`. |
| G7 | **ENDX for one-shot (end without repeat) is never set**, and the voice is muted one block early (decode look-ahead, `decode_block` :123 vs `v.end` :191). | SNDFI uses ENVX, so impact is low. Matters if the EE or SDRDRV polls ENDX. The last ~56 samples of each one-shot SFX are lost (audible clicks or truncation). | `render_voice()`: set `end` and move to kOff when the *current* block with flags&1 && !(flags&2) finishes, not at decode time. | PCSX2 `Mixer.cpp` `GetNextDataBuffered` / `UpdateBlockHeader`. |
| G8 | Linear interpolation instead of the 4-tap Gaussian. | Quality only. | `render_voice()`. | PCSX2 `SPU2/interpolate_table.h`; psx-spx Gaussian table. |
| G9 | **Master and global SPU2 writes are not logged.** `PS2_TRACE_SPU2` skips 0x760–0x7FF, and unknown offsets there are silently dropped. | Reverb coefficient, MVOL/EVOL/AVOL/BVOL and SPDIF writes are invisible in traces. | `spu2.cpp write()` (:517): trace master/global writes and a one-shot "unhandled" print. | (none) |
| G10 | PMON pitch modulation, IRQA-driven audio, raw root counters (0x1F801100/0x1F801480 modes and interrupts). | **Not used** by these IRXs. Leave until a trace shows otherwise; the PADMAN timer line 14 is tracked in iop-gaps.md. | n/a | n/a |

The one ADMA layout detail to keep:
- The runtime ring holds 512 frames and DMA-done is raised when the last 1 KB chunk enters it, so CRI refills a half about 10.7 ms before it is audible. That is safe because the data is already copied.
- **Do not** change completion to fire at the *start* of a half. CRI would then overwrite a half that has not been copied yet.

---

## (d) Detection signals: what to grep for on the first audio-enabled run

Run settings:
- Use `--trace-iop` and `PS2_TRACE_SPU2=1`, plus `PS2_DUMP_AUDIO=out/audio.wav` with `--frames N`. The WAV is only written on a clean stop (`system.cpp`:413).
- Add `--trace-iop-hle` for timrman and intrman calls.
- Compare against a PCSX2 oracle capture of the same frames (`notes/oracle-boot.md`).

1. **ADMA alive.** Lines like
   `[iop-dma] start ch 4 madr 0x000XXXXX bcr 0x00200010 chcr 0x01000201` and `... ch 7 ...`
   should repeat about every 393,216 IOP cycles (93.75/s per core), with `[iop] interrupt 36 -> 0x...` / `[iop] interrupt 40 -> 0x...` at the same rate.
   - Only one channel → spucore=2 is effectively single-core; drop the dual-core concern in G1.
   - Both channels → G1 is mandatory.
   - No restarts after the first → the DMA-done/ISR path is broken.
2. **ADMAS.** `[spu2] core 0 reg 0x1B0 = 0x0001` and/or `[spu2] core 1 reg 0x1B0 = 0x0002`. A later `= 0x0000` means stop; G3 applies.
3. **Reverb in use (G2).** Look for:
   - `[spu2] core N reg 0x19A = 0x..8.` or ATTR with bit7 (0x0080) set;
   - `reg 0x2E0/0x2E2` (ESA) and `reg 0x33C` (EEA);
   - a burst of `reg 0x2E4`…`0x33A`.

   The coefficient writes (0x774+) are **not** traced until G9 is done.
4. **Routing gates (G1).** `reg 0x198 = 0x0FF0` (C0) and `0x0FFC`/`0x0FFF` (C1, SNDFI toggling bits 0–1); `reg 0x188…0x196` with values other than 0xFFFF/0x00FF.
5. **Noise (G5).** `[spu2] core N reg 0x184 = 0x....` or `0x186` nonzero. **PMON:** `reg 0x180/0x182` nonzero is unexpected; check SDRDRV.
6. **IRQA (should be absent).** Any `[spu2] core %d irq at 0x%05X ...` or `[iop] spu2 interrupt -> 0x...` line means something enabled ATTR bit6; find who, probably SDRDRV via the EE.
7. **SNDFI timer.** With `--trace-iop-hle`:
   - `[iop-hle] timrman:AllocHardTimer(00000001, 00000020, 00000100, ...)`
   - `SetupHardTimer(id, 1, 0, 0x100)`
   - `SetTimerHandler(id, 000002D0, <SNDFI+0xA3F4>, 0)`
   - `StartHardTimer`

   No `[iop] missing timrman #N` should appear (SNDFI uses only 4/6/20/22/23).
8. **VoiceTrans conflicts.** Set `PS2_IOP_PROBE=<LIBSD_base+0x1AC0>` (the `VoiceTrans` epilogue). A `v0 FFFFFF2E` result is a busy refusal, because ADMA or DMA is active on that channel. SNDFI also prints `ERR : sceSdSetEffectAttr(%d), DMA %D` from IOP printf when its DMA is refused.
9. **STATX timeout (G4).** Set `PS2_IOP_PROBE=<LIBSD_base+0x1FDC>`. `s0` close to 0xF00 means the reset wait timed out.
10. **CRI/IOP health.** CRI_ADXI printf lines:
    - `CRI ADX Driver Ver.9.52(Jun 16 2005 11:18:42)` (format `CRI ADX Driver Ver.9.52(%s %s)`)
    - `CRI ADX Driver : SPU CORE Number = 2`
    - Bad: `E00101701:sceSdBlockTrans fails.(PSMOUT_Start)`, `CRI ADX Driver : SPU2 CORE Number changed from %d to %d` (EE changed the core via DTX 0x40B), `Multiple streams are output from CORE0(DIGITAL OUT).`, `You use CORE0 now. You must use CORE1 if you output DolbyDigital.`

    EE: `E0092101: DTX_Init bind errr`, `PS2RNA: E01112903: Failed, sceSifAllocIopHeap(%d) in ps2rna_init_psj`, `CRI Error - %s`, `sceSdRemoteInit() RPC bind error!`. SDRDRV: `SDR driver ERROR: unknown command %x`.
11. **Expected one-shot noise.** `[iop-io] write 0x1F801404 ...`, `0x1F80140C`, `0x1F801014`, `0x1F801414`, `0x1F8010F0` (DPCR) and `0x1F801570` (DPCR2) come from LIBSD sub_1550 and are harmless.
12. **Audio content heuristics** (`out/audio.wav` vs PCSX2):
    - Music silent while SFX play → ADMA or BVOL path.
    - Music about 6 dB louder relative to SFX, or phasey → G1.
    - SFX dry in arenas → G2.
    - Clicks at SFX ends → G7.
    - Ticks every 10.7 ms → ADMA underrun; look for `input_count` hitting 0 (add a counter).

---

## (e) Fallbacks if LLE CRI audio cannot be made to work

The IOP never sees ADX, only PCM. That gives three options of increasing cost.

**E1. Keep CRI_ADXI LLE and HLE only the SPU2 side.** This is effectively what the runtime does today.
- If the ADMA cadence is the problem, replace LIBSD BlockTrans pacing with a host-side consumer.
- Every 512 frames per active core, read the current half from IOP RAM at MADR, push it to the host mixer, and raise line 36/40.
- No RPC work is needed.

**E2. HLE CRI_ADXI** (new `runtime/src/iop/cri_adxi.cpp`; register with `register_hle_module("CRI_ADXI")` in `iop/kernel.cpp` so the IRX is not interpreted).

Serve SID **0x90000200**; the EE binds it at `DTX_Init`, and its copy of the SID is at EE 0x53D554. The function numbers come from the IOP dispatcher at CRI_ADXI 0x720:

| fno | Function | Notes |
|---|---|---|
| 2 | `DTX_Create(id<16, eewk, iopwk, wklen)` | Rejects unless eewk is 64-byte aligned, iopwk is 32-byte aligned and wklen is a multiple of 64. Sets up a shared work area; the reply word is result/handle. |
| 3 | `DTX_Destroy(id)` | |
| 0x400–0x403 | SJX (stream-joint transfer) | Registered at 0x924C: handlers 0x90FC/0x91BC/0x91C8/0x91D8. |
| 0x408–0x411 | IOPRNA | Registered at 0x1614: 0x408 create (PSM_Create(maxnch), SJRBF), 0x409 destroy, 0x40A reinit/set-SJ (PSM_ReinitSj), 0x40B set SPU core (calls 0x1798 set-core + PSM re-init), 0x40C get core, 0x40D, 0x40E Dolby/CORE0 digital-out mode, 0x40F–0x411 per-stream params (volume/pan/sfreq; confirm from EE caller args). |
| 0x420–0x42A | SJRMT (remote SJ ring buffers in IOP heap) | Registered at 0x8DB8: handlers 0x8A90…0x8D68. Create/destroy/reset/get-chunk/put-chunk/unget/get-num-data and similar. |

What the HLE has to do:
- Reproduce the SJ chunk semantics over the rings that PS2RNA fills by SIF DMA after `sceSifAllocIopHeap`.
- Resample each stream to 48 kHz (CRI uses RCV), apply volume and pan, and mix.
- Push the result to `spu2` as ADMA input, or straight to the host sink.

How to get the argument layouts:
- Hook the EE `sceSifCallRpc` for cd→server SID 0x90000200 and log `fno` plus the 16-byte argument block.
- The static recomp makes this a one-line trace.

**E3. EE-side bypass**, if E2's SJ semantics prove too costly.
- Override PS2RNA in the recompiled EE: functions near strings `PS2RNA_SetupVoice` (0x4A8670) and `ps2rna_init_psj` (0x4A8710). Pull PCM straight from ADXT's output SJ on the EE and mix on the host.
- Keep a stub server on 0x90000200 answering fno 2/3/0x4xx with success, so `DTX_Init` binds.
- **Host ADX decoding** is only needed if ADXT itself is bypassed (for example, HLE `ADXT_StartAfs`/`StartFname`). Format: CRI ADX 4-bit ADPCM, 18-byte frames, 2-tap predictor from the header cutoff frequency, loop points in the header, AFS archives.
- References: FFmpeg `libavcodec/adxdec.c` (LGPL); vgmstream `src/coding/adx_decoder.c` and `src/meta/adx.c` (permissive vgmstream licence).
- Sofdec movies (SRD/MWSFD) would still need the CRI stack, so E3 is a last resort.

### RPC/SID summary

| SID | Server | Client |
|---|---|---|
| 0x90000200 | CRI_ADXI DTX (IOP) | EE DTX/PS2RNA |
| 0x80000701 | SDRDRV (IOP) | EE libsdr (0x3829E8) |
| 0x80000704 | EE sdr callback | SDRDRV |
| 0x534E4446 'SNDF' | SNDFI (IOP) | EE 0x462780 |
| 0x53465356 'SFSV' | SNDFI (IOP) | EE 0x4627F8 |

- CRI_ADXI also contains an IOP→EE `sceSifCallRpc` client (0x850/0x8C4, fno 2/3). It is **dead code**: never bound, no callers.
- Streaming reads are EE-side (CVFS → DVCI/SRD → libcdvd `sceCdRead`). There are no `cdrom_stm`/`sceCdSt*` strings in the EE, and CDVDSTM is not on the audio path.

---

## Top 3 to implement first

1. **G1, core routing and mix gates** (`spu2.cpp tick()`/`render_voice()`). Every sound passes through it. With spucore=2 it decides whether music is correct, doubled or 6 dB off. Trace signal 1 settles how urgent it is.
2. **G2, reverb.** Store the 0x774–0x7AE coefficients first, then a per-core reverb. SNDFI drives it on both cores constantly; the absence of reverb is the most audible fidelity gap after routing.
3. **G3 + G4, ADMA cancel on stop and real STATX.** Both are small. They remove spurious DMA-done interrupts and stale PCM after CRI stops a stream, avoid VoiceTrans/SetEffectAttr DMA races, and remove the 0xF00-iteration timeout in every cold `sceSdInit`.
