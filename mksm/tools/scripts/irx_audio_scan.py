#!/usr/bin/env python3
"""IRX audio/hardware access scanner (stdlib only; run with python3 -I).

Usage:
  python3 -I irx_audio_scan.py [--calls] [--hw] [--func ADDR] IRX [IRX ...]

For each IOP relocatable module (R3000, linked at 0):
  * finds import stubs (0x41e00000 tables) and names the ordinals we care about
  * splits .text into functions (export entries, jal targets, post-`jr ra` starts)
  * linear-scans each function with a tiny constant propagator
    (lui/addiu/ori/addu/or/sll) and reports
      - loads/stores to IOP hardware: SPU2 (0x1F900000-7FF), IOP DMA ch4/ch7 and
        DPCR/DICR(2), INTC (I_STAT/I_MASK/I_CTRL), root counters 0-5, SSBUS/SPU delay
      - calls to import stubs with any constant a0..a3
  * --func ADDR dumps a raw disassembly of one function (hex addr) for manual reading

Constant propagation is per-function, linear, branch-insensitive: good enough to name
register accesses like `lui v0,0xbf90; sh v1,0x19a(v0)` or `base+core*0x400+0x1b0`
(reported as BF9001B0+? when the addend is unknown).
"""
import struct
import sys

IMP_MAGIC = 0x41E00000
EXP_MAGIC = 0x41C00000
JR_RA = 0x03E00008

REGN = ['zero', 'at', 'v0', 'v1', 'a0', 'a1', 'a2', 'a3', 't0', 't1', 't2', 't3', 't4', 't5',
        't6', 't7', 's0', 's1', 's2', 's3', 's4', 's5', 's6', 's7', 't8', 't9', 'k0', 'k1',
        'gp', 'sp', 'fp', 'ra']

# Import ordinal names (subset; ps2sdk numbering).
NAMES = {
    'intrman': {4: 'RegisterIntrHandler', 5: 'ReleaseIntrHandler', 6: 'EnableIntr',
                7: 'DisableIntr', 8: 'CpuDisableIntr', 9: 'CpuEnableIntr',
                17: 'CpuSuspendIntr', 18: 'CpuResumeIntr', 23: 'QueryIntrContext'},
    'timrman': {4: 'AllocHardTimer', 5: 'ReferHardTimer', 6: 'FreeHardTimer',
                7: 'SetTimerMode', 8: 'GetTimerStatus', 9: 'SetTimerCounter',
                10: 'GetTimerCounter', 11: 'SetTimerCompare', 12: 'GetTimerCompare',
                13: 'SetHoldMode', 14: 'GetHoldMode', 15: 'GetHoldReg',
                16: 'GetHardTimerIntrCode', 20: 'SetTimerHandler', 21: 'SetOverflowHandler',
                22: 'SetupHardTimer', 23: 'StartHardTimer', 24: 'StopHardTimer'},
    'sifcmd': {4: 'sceSifInitCmd', 5: 'sceSifExitCmd', 6: 'sceSifGetSreg', 7: 'sceSifSetSreg',
               8: 'sceSifSetCmdBuffer', 10: 'sceSifAddCmdHandler',
               11: 'sceSifRemoveCmdHandler', 12: 'sceSifSendCmd', 13: 'isceSifSendCmd',
               14: 'sceSifInitRpc', 15: 'sceSifBindRpc', 16: 'sceSifCallRpc',
               17: 'sceSifRegisterRpc', 18: 'sceSifCheckStatRpc', 19: 'sceSifSetRpcQueue',
               20: 'sceSifGetNextRequest', 21: 'sceSifExecRequest', 22: 'sceSifRpcLoop',
               23: 'sceSifGetOtherData', 24: 'sceSifRemoveRpc', 25: 'sceSifRemoveRpcQueue'},
    'sifman': {5: 'sceSifInit', 6: 'sceSifSetDChain', 7: 'sceSifSetDma', 8: 'sceSifDmaStat',
               29: 'sceSifCheckInit'},
    'thbase': {4: 'CreateThread', 5: 'DeleteThread', 6: 'StartThread', 7: 'StartThreadArgs',
               8: 'ExitThread', 9: 'ExitDeleteThread', 10: 'TerminateThread',
               14: 'ChangeThreadPriority', 20: 'GetThreadId', 22: 'ReferThreadStatus',
               24: 'SleepThread', 25: 'WakeupThread', 26: 'iWakeupThread', 33: 'DelayThread',
               34: 'GetSystemTime', 35: 'SetAlarm', 36: 'iSetAlarm', 37: 'CancelAlarm',
               38: 'iCancelAlarm', 39: 'USec2SysClock', 40: 'SysClock2USec',
               42: 'GetThreadCurrentPriority', 43: 'GetSystemTimeLow'},
    'thsemap': {4: 'CreateSema', 5: 'DeleteSema', 6: 'SignalSema', 7: 'iSignalSema',
                8: 'WaitSema', 9: 'PollSema', 11: 'ReferSemaStatus'},
    'thevent': {4: 'CreateEventFlag', 5: 'DeleteEventFlag', 6: 'SetEventFlag',
                7: 'iSetEventFlag', 8: 'ClearEventFlag', 9: 'iClearEventFlag',
                10: 'WaitEventFlag', 11: 'PollEventFlag', 13: 'ReferEventFlagStatus'},
    'vblank': {4: 'WaitVblankStart', 5: 'WaitVblankEnd', 6: 'WaitVblank', 7: 'WaitNonVblank',
               8: 'RegisterVblankHandler', 9: 'ReleaseVblankHandler'},
    'libsd': {2: 'sceSdQuit', 4: 'sceSdInit', 5: 'sceSdSetParam', 6: 'sceSdGetParam',
              7: 'sceSdSetSwitch', 8: 'sceSdGetSwitch', 9: 'sceSdSetAddr', 10: 'sceSdGetAddr',
              11: 'sceSdSetCoreAttr', 12: 'sceSdGetCoreAttr', 13: 'sceSdNote2Pitch',
              14: 'sceSdPitch2Note', 15: 'sceSdProcBatch', 16: 'sceSdProcBatchEx',
              17: 'sceSdVoiceTrans', 18: 'sceSdBlockTrans', 19: 'sceSdVoiceTransStatus',
              20: 'sceSdBlockTransStatus', 21: 'sceSdSetTransCallback',
              22: 'sceSdSetIRQCallback', 23: 'sceSdSetEffectAttr', 24: 'sceSdGetEffectAttr',
              25: 'sceSdClearEffectWorkArea', 26: 'sceSdSetTransIntrHandler',
              27: 'sceSdSetSpu2IntrHandler', 28: 'sceSdGetTransIntrHandlerArgument',
              29: 'sceSdGetSpu2IntrHandlerArgument', 30: 'sceSdStopTrans',
              31: 'sceSdCleanEffectWorkArea', 32: 'sceSdSetEffectMode',
              33: 'sceSdSetEffectModeParams'},
    'cdvdman': {4: 'sceCdInit', 6: 'sceCdRead', 7: 'sceCdSeek', 8: 'sceCdGetError',
                10: 'sceCdSearchFile', 11: 'sceCdSync', 12: 'sceCdGetDiskType',
                13: 'sceCdDiskReady', 15: 'sceCdStop', 16: 'sceCdPosToInt',
                17: 'sceCdIntToPos', 21: 'sceCdCheckCmd', 28: 'sceCdStatus',
                37: 'sceCdCallback', 38: 'sceCdPause', 39: 'sceCdBreak',
                40: 'sceCdReadCDDA', 44: 'sceCdGetReadPos', 47: '_sceGetFsvRbuf',
                48: '_sceCdstm0Cb', 49: '_sceCdstm1Cb', 50: '_sceCdSC', 62: 'sceCdRead0',
                81: '_sceCdSetTimeout'},
    'sysmem': {4: 'AllocSysMemory', 5: 'FreeSysMemory', 6: 'QueryMemSize',
               7: 'QueryMaxFreeMemSize', 8: 'QueryTotalFreeMemSize', 9: 'QueryBlockTopAddress',
               10: 'QueryBlockSize', 14: 'Kprintf'},
    'loadcore': {4: 'FlushIcache', 5: 'FlushDcache', 6: 'RegisterLibraryEntries', 7: 'ReleaseLibraryEntries',
                 12: 'QueryBootMode', 20: 'SetRebootTimeLibraryHandlingMode'},
    'stdio': {4: 'printf'},
    'ioman': {4: 'open', 5: 'close', 6: 'read', 7: 'write', 8: 'lseek', 20: 'AddDrv',
              21: 'DelDrv'},
}


def spu2_name(a):
    """Name an SPU2 register offset (0..0x7FF)."""
    if 0x760 <= a < 0x7B0:
        c, o = divmod(a - 0x760, 0x28)
        n = ['MVOLL', 'MVOLR', 'EVOLL', 'EVOLR', 'AVOLL', 'AVOLR', 'BVOLL', 'BVOLR', 'MVOLXL',
             'MVOLXR', 'IIR_VOL', 'COMB1_VOL', 'COMB2_VOL', 'COMB3_VOL', 'COMB4_VOL',
             'WALL_VOL', 'APF1_VOL', 'APF2_VOL', 'IN_COEF_L', 'IN_COEF_R']
        return 'C%d.%s' % (c, n[o // 2] if o // 2 < len(n) else '+%x' % o)
    if a >= 0x7C0:
        return {0x7C0: 'SPDIF_OUT', 0x7C2: 'SPDIF_IRQINFO', 0x7C6: 'SPDIF_MODE',
                0x7C8: 'SPDIF_MEDIA', 0x7CA: 'SPDIF_COPY'}.get(a, 'SPDIF+%x' % a)
    c, o = divmod(a, 0x400)
    if o < 0x180:
        v, r = divmod(o, 0x10)
        return 'C%d.V%d.%s' % (c, v, ['VOLL', 'VOLR', 'PITCH', 'ADSR1', 'ADSR2', 'ENVX',
                                      'VOLXL', 'VOLXR'][r // 2])
    core = {0x180: 'PMON', 0x182: 'PMONh', 0x184: 'NON', 0x186: 'NONh', 0x188: 'VMIXL',
            0x18A: 'VMIXLh', 0x18C: 'VMIXEL', 0x18E: 'VMIXELh', 0x190: 'VMIXR',
            0x192: 'VMIXRh', 0x194: 'VMIXER', 0x196: 'VMIXERh', 0x198: 'MMIX', 0x19A: 'ATTR',
            0x19C: 'IRQAH', 0x19E: 'IRQAL', 0x1A0: 'KON', 0x1A2: 'KONh', 0x1A4: 'KOFF',
            0x1A6: 'KOFFh', 0x1A8: 'TSAH', 0x1AA: 'TSAL', 0x1AC: 'DATA', 0x1AE: 'CTRL?',
            0x1B0: 'ADMAS', 0x2E0: 'ESAH', 0x2E2: 'ESAL', 0x33C: 'EEA', 0x33E: 'EEA_lo?',
            0x340: 'ENDX', 0x342: 'ENDXh', 0x344: 'STATX', 0x346: '0x346'}
    if o in core:
        return 'C%d.%s' % (c, core[o])
    if 0x1C0 <= o < 0x2E0:
        v, r = divmod(o - 0x1C0, 0xC)
        return 'C%d.V%d.%s' % (c, v, ['SSAH', 'SSAL', 'LSAXH', 'LSAXL', 'NAXH', 'NAXL'][r // 2])
    if 0x2E4 <= o < 0x33C:
        rv = ['APF1_SIZE', 'APF2_SIZE', 'SAME_L_DST', 'SAME_R_DST', 'COMB1_L_SRC',
              'COMB1_R_SRC', 'COMB2_L_SRC', 'COMB2_R_SRC', 'SAME_L_SRC', 'SAME_R_SRC',
              'DIFF_L_DST', 'DIFF_R_DST', 'COMB3_L_SRC', 'COMB3_R_SRC', 'COMB4_L_SRC',
              'COMB4_R_SRC', 'DIFF_L_SRC', 'DIFF_R_SRC', 'APF1_L_DST', 'APF1_R_DST',
              'APF2_L_DST', 'APF2_R_DST']
        k, h = divmod(o - 0x2E4, 4)
        return 'C%d.REV.%s%s' % (c, rv[k], 'H' if h == 0 else 'L')
    return 'C%d.+%03x' % (c, o)


def hw_name(pa):
    """Name an IOP physical address if it is interesting hardware; else None."""
    if 0x1F900000 <= pa < 0x1F900800:
        return 'SPU2.' + spu2_name(pa - 0x1F900000)
    io = {0x1F801070: 'I_STAT', 0x1F801074: 'I_MASK', 0x1F801078: 'I_CTRL',
          0x1F8010C0: 'DMA4.MADR', 0x1F8010C4: 'DMA4.BCR', 0x1F8010C6: 'DMA4.BCRh',
          0x1F8010C8: 'DMA4.CHCR', 0x1F8010CC: 'DMA4.TADR',
          0x1F801500: 'DMA7.MADR', 0x1F801504: 'DMA7.BCR', 0x1F801506: 'DMA7.BCRh',
          0x1F801508: 'DMA7.CHCR', 0x1F80150C: 'DMA7.TADR',
          0x1F8010F0: 'DPCR', 0x1F8010F4: 'DICR', 0x1F801570: 'DPCR2', 0x1F801574: 'DICR2',
          0x1F801578: 'DMACEN', 0x1F80157C: 'DMACINTEN',
          0x1F801014: 'SPU_DELAY(SSBUS spu)', 0x1F801404: 'SSBUS spu2 delay?',
          0x1F801010: 'BIOS_DELAY', 0x1F801450: 'IOP_CONFIG(0x1450)'}
    if pa in io:
        return io[pa]
    if 0x1F801100 <= pa < 0x1F801130:
        t, r = divmod(pa - 0x1F801100, 0x10)
        return 'TMR%d.%s' % (t, ['COUNT', 'MODE', 'TARGET', '?'][r // 4])
    if 0x1F801480 <= pa < 0x1F8014B0:
        t, r = divmod(pa - 0x1F801480, 0x10)
        return 'TMR%d.%s' % (t + 3, ['COUNT', 'MODE', 'TARGET', '?'][r // 4])
    if 0x1F801080 <= pa < 0x1F801100 or 0x1F801500 <= pa < 0x1F801580:
        return 'DMA@%08x' % pa
    if 0x1F801C00 <= pa < 0x1F801E00:
        return 'SPU1@%03x' % (pa - 0x1F801C00)
    if 0x1D000000 <= pa < 0x1D000100:
        return 'SIF@%02x' % (pa - 0x1D000000)
    if 0x1F801000 <= pa < 0x1F803000:
        return 'IO@%08x' % pa
    return None


class Elf:
    def __init__(self, data):
        self.data = data
        shoff = struct.unpack_from('<I', data, 0x20)[0]
        shentsize, shnum, shstrndx = struct.unpack_from('<HHH', data, 0x2E)
        secs = []
        for i in range(shnum):
            secs.append(struct.unpack_from('<10I', data, shoff + i * shentsize))
        st = secs[shstrndx]
        self.sec = {}
        for s in secs:
            nm = data[st[4] + s[0]:].split(b'\0', 1)[0].decode()
            self.sec[nm] = dict(type=s[1], addr=s[3], off=s[4], size=s[5])
        t = self.sec['.text']
        self.text = data[t['off']:t['off'] + t['size']]
        self.tbase = t['addr']
        self.ro = {}
        for nm in ('.rodata', '.data'):
            if nm in self.sec:
                s = self.sec[nm]
                self.ro[nm] = (s['addr'], data[s['off']:s['off'] + s['size']])

    def word(self, a):
        o = a - self.tbase
        if 0 <= o <= len(self.text) - 4:
            return struct.unpack_from('<I', self.text, o)[0]
        return None

    def cstr_at(self, a):
        for nm, (base, b) in self.ro.items():
            if base <= a < base + len(b):
                s = b[a - base:].split(b'\0', 1)[0]
                try:
                    s = s.decode('ascii')
                except UnicodeDecodeError:
                    return None
                if len(s) >= 3 and all(32 <= ord(ch) < 127 or ch in '\n\t' for ch in s):
                    return s
        return None


def tables(elf):
    """Return (stubs: addr->(lib,ord,name), exports: [(lib, [addrs])])."""
    stubs, exps = {}, []
    n = len(elf.text)
    o = 0
    while o + 20 <= n:
        w = struct.unpack_from('<I', elf.text, o)[0]
        if w in (IMP_MAGIC, EXP_MAGIC) and struct.unpack_from('<I', elf.text, o + 4)[0] == 0:
            lib = elf.text[o + 12:o + 20].split(b'\0', 1)[0].decode('ascii', 'replace')
            p = o + 20
            if w == IMP_MAGIC:
                while p + 8 <= n and struct.unpack_from('<I', elf.text, p)[0] == JR_RA:
                    w2 = struct.unpack_from('<I', elf.text, p + 4)[0]
                    if w2 & 0xFFFF0000 != 0x24000000:
                        break
                    ordn = w2 & 0xFFFF
                    stubs[elf.tbase + p] = (lib, ordn, NAMES.get(lib, {}).get(ordn,
                                                                              '#%d' % ordn))
                    p += 8
            else:
                addrs = []
                while p + 4 <= n:
                    v = struct.unpack_from('<I', elf.text, p)[0]
                    if v == 0:
                        break
                    addrs.append(v)
                    p += 4
                exps.append((lib, addrs))
            o = p
            continue
        o += 4
    return stubs, exps


def sx16(v):
    return v - 0x10000 if v & 0x8000 else v


def disasm(w, pc):
    """Return (mnemonic text, info dict) for a MIPS-I word (subset sufficient for reading)."""
    op = w >> 26
    rs, rt, rd = (w >> 21) & 31, (w >> 16) & 31, (w >> 11) & 31
    sa, fn, imm = (w >> 6) & 31, w & 63, w & 0xFFFF
    R = REGN
    if w == 0:
        return 'nop', {}
    if op == 0:
        spec = {0x00: 'sll', 0x02: 'srl', 0x03: 'sra'}
        if fn in spec:
            return '%s %s,%s,%d' % (spec[fn], R[rd], R[rt], sa), {}
        if fn == 0x08:
            return 'jr %s' % R[rs], {'jr': rs}
        if fn == 0x09:
            return 'jalr %s,%s' % (R[rd], R[rs]), {'jalr': rs}
        if fn == 0x0C:
            return 'syscall', {}
        if fn == 0x0D:
            return 'break', {}
        names = {0x04: 'sllv', 0x06: 'srlv', 0x07: 'srav', 0x10: 'mfhi', 0x12: 'mflo',
                 0x11: 'mthi', 0x13: 'mtlo', 0x18: 'mult', 0x19: 'multu', 0x1A: 'div',
                 0x1B: 'divu', 0x20: 'add', 0x21: 'addu', 0x22: 'sub', 0x23: 'subu',
                 0x24: 'and', 0x25: 'or', 0x26: 'xor', 0x27: 'nor', 0x2A: 'slt', 0x2B: 'sltu'}
        return '%s %s,%s,%s' % (names.get(fn, 'spec%02x' % fn), R[rd], R[rs], R[rt]), {}
    if op == 1:
        t = (pc + 4 + (sx16(imm) << 2)) & 0xFFFFFFFF
        return '%s %s,%x' % ({0: 'bltz', 1: 'bgez', 16: 'bltzal', 17: 'bgezal'}.get(rt, 'regimm'),
                             R[rs], t), {'br': t}
    if op in (2, 3):
        t = ((pc + 4) & 0xF0000000) | ((w & 0x3FFFFFF) << 2)
        return '%s %x' % ('j' if op == 2 else 'jal', t), {'j' if op == 2 else 'jal': t}
    if op in (4, 5, 6, 7):
        t = (pc + 4 + (sx16(imm) << 2)) & 0xFFFFFFFF
        nm = ['beq', 'bne', 'blez', 'bgtz'][op - 4]
        return '%s %s,%s,%x' % (nm, R[rs], R[rt], t), {'br': t}
    ii = {8: 'addi', 9: 'addiu', 10: 'slti', 11: 'sltiu', 12: 'andi', 13: 'ori', 14: 'xori'}
    if op in ii:
        v = imm if op >= 12 else sx16(imm)
        return '%s %s,%s,%s' % (ii[op], R[rt], R[rs], hex(v)), {}
    if op == 15:
        return 'lui %s,0x%x' % (R[rt], imm), {}
    if op == 16:
        return 'cop0 %s %s,$%d' % ({0: 'mfc0', 4: 'mtc0', 16: 'rfe'}.get(rs, '?'), R[rt], rd), {}
    mem = {0x20: 'lb', 0x21: 'lh', 0x23: 'lw', 0x24: 'lbu', 0x25: 'lhu', 0x28: 'sb', 0x29: 'sh',
           0x2B: 'sw', 0x22: 'lwl', 0x26: 'lwr', 0x2A: 'swl', 0x2E: 'swr'}
    if op in mem:
        return '%s %s,%d(%s)' % (mem[op], R[rt], sx16(imm), R[rs]), {'mem': (mem[op], rt, rs,
                                                                         sx16(imm))}
    return '.word 0x%08x' % w, {}


def functions(elf, stubs, exps):
    starts = set()
    for _, addrs in exps:
        starts.update(a for a in addrs if elf.word(a) is not None)
    end = elf.tbase + len(elf.text)
    a = elf.tbase
    prev_jr = False
    while a < end:
        w = elf.word(a)
        _, info = disasm(w, a)
        if 'jal' in info and info['jal'] not in stubs:
            starts.add(info['jal'])
        a += 4
    # After `jr ra` + delay slot, next non-nop word starts a function.
    a = elf.tbase
    while a < end:
        if elf.word(a) == JR_RA:
            b = a + 8
            while b < end and elf.word(b) == 0:
                b += 4
            if b < end and b not in stubs and elf.word(b) not in (IMP_MAGIC, EXP_MAGIC):
                starts.add(b)
        a += 4
    starts = sorted(s for s in starts if s not in stubs)
    return starts


class Const:
    """Abstract value: exact int, or base+unknown ('part')."""
    __slots__ = ('v', 'part')

    def __init__(self, v, part=False):
        self.v, self.part = v & 0xFFFFFFFF, part


def scan_function(elf, start, stop, stubs):
    regs = {0: Const(0)}
    hw, calls = [], []
    a = start
    pending_call = None
    while a < stop:
        w = elf.word(a)
        if w is None:
            break
        txt, info = disasm(w, a)
        op = w >> 26
        rs, rt, rd = (w >> 21) & 31, (w >> 16) & 31, (w >> 11) & 31
        imm = w & 0xFFFF
        g = regs.get
        if 'mem' in info:
            mn, vr, br, off = info['mem']
            b = g(br)
            if b is not None:
                ea = (b.v + off) & 0xFFFFFFFF
                nm = hw_name(ea & 0x1FFFFFFF)
                if nm:
                    val = g(vr) if mn[0] == 's' else None
                    hw.append((a, mn, ea, b.part, nm,
                               None if val is None or val.part else val.v))
            if mn[0] == 'l':
                regs.pop(vr, None)
        elif op == 15:
            regs[rt] = Const(imm << 16)
        elif op in (8, 9):
            b = g(rs)
            regs[rt] = Const(b.v + sx16(imm), b.part) if b else None
        elif op == 13:
            b = g(rs)
            regs[rt] = Const(b.v | imm, b.part) if b and not b.part else None
        elif op == 12:
            b = g(rs)
            regs[rt] = Const(b.v & imm) if b and not b.part else None
        elif op == 0 and (w & 63) in (0x21, 0x20, 0x25):
            x, y = g(rs), g(rt)
            fn = w & 63
            if x and y and not x.part and not y.part:
                regs[rd] = Const(x.v + y.v if fn != 0x25 else x.v | y.v)
            elif x and (y is None or rt == 0) and fn != 0x25:
                regs[rd] = Const(x.v, True) if rt != 0 else Const(x.v, x.part)
            elif y and x is None and fn != 0x25:
                regs[rd] = Const(y.v, True)
            elif fn == 0x25 and (rt == 0 or rs == 0):
                regs[rd] = x if rt == 0 else y
            elif x and y:
                regs[rd] = Const(x.v + y.v, True)
            else:
                regs[rd] = None
        elif op == 0 and (w & 63) == 0 and w != 0:
            x = g(rt)
            regs[rd] = Const(x.v << ((w >> 6) & 31)) if x and not x.part else None
        elif op == 0 and (w & 63) in (0x10, 0x12, 0x22, 0x23, 0x24, 0x26, 0x27, 0x2A, 0x2B,
                                      0x02, 0x03, 0x04, 0x06, 0x07):
            regs[rd] = None
        elif op in (10, 11, 14):
            regs[rt] = None
        if pending_call is not None:
            # delay slot executed; capture args then clobber
            tgt = pending_call
            args = []
            for r in (4, 5, 6, 7):
                c = g(r)
                args.append(None if c is None or c.part else c.v)
            calls.append((a - 4, tgt, args))
            for r in list(regs):
                if r in (1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 24, 25, 31):
                    regs.pop(r, None)
            pending_call = None
        if 'jal' in info:
            pending_call = info['jal']
        elif 'jalr' in info:
            pending_call = ('jalr', info['jalr'])
        regs[0] = Const(0)
        a += 4
    return hw, calls


def fmt_args(elf, args):
    out = []
    for v in args:
        if v is None:
            out.append('?')
        else:
            s = elf.cstr_at(v)
            out.append('0x%x%s' % (v, (' "%s"' % s[:40].replace('\n', '\\n')) if s else ''))
    return '(' + ', '.join(out) + ')'


def main(argv):
    show_calls = '--calls' in argv
    show_hw = '--hw' in argv or not show_calls
    func = None
    if '--func' in argv:
        i = argv.index('--func')
        func = int(argv[i + 1], 16)
        argv = argv[:i] + argv[i + 2:]
    files = [x for x in argv if not x.startswith('--')]
    for f in files:
        elf = Elf(open(f, 'rb').read())
        stubs, exps = tables(elf)
        starts = functions(elf, stubs, exps)
        end = elf.tbase + len(elf.text)
        bounds = list(zip(starts, starts[1:] + [end]))
        expmap = {}
        for lib, addrs in exps:
            for i, ad in enumerate(addrs):
                expmap.setdefault(ad, []).append('%s#%d' % (lib, i))
        print('=' * 78)
        print('%s  (%d functions, %d import stubs, exports: %s)' % (
            f.rsplit('/', 1)[-1], len(starts), len(stubs),
            ', '.join('%s[%d]' % (l, len(a)) for l, a in exps)))
        if func is not None:
            for s, e in bounds:
                if s <= func < e:
                    for a in range(s, e, 4):
                        w = elf.word(a)
                        txt, info = disasm(w, a)
                        extra = ''
                        t = info.get('jal')
                        if t in stubs:
                            extra = '  ; %s:%s' % stubs[t][0::2]
                        print('  %06x: %08x  %s%s' % (a, w, txt, extra))
            continue
        for s, e in bounds:
            hw, calls = scan_function(elf, s, e, stubs)
            hwl = [h for h in hw] if show_hw else []
            cl = []
            if show_calls:
                for pc, tgt, args in calls:
                    if isinstance(tgt, tuple):
                        cl.append('    %06x  jalr %s' % (pc, REGN[tgt[1]]))
                    elif tgt in stubs:
                        lib, o, nm = stubs[tgt]
                        cl.append('    %06x  %s:%s%s' % (pc, lib, nm, fmt_args(elf, args)))
                    else:
                        cl.append('    %06x  call sub_%x%s' % (pc, tgt, fmt_args(elf, args)))
            if not hwl and not cl:
                continue
            print('-- sub_%x..%x %s' % (s, e, ' '.join(expmap.get(s, []))))
            for pc, mn, ea, part, nm, val in hwl:
                print('    %06x  %-3s %08x%s  %-24s%s' % (
                    pc, mn, ea, '+?' if part else '  ', nm,
                    '' if val is None else ' <- 0x%x' % val))
            for line in cl:
                print(line)


if __name__ == '__main__':
    main(sys.argv[1:])
