#!/usr/bin/env python3
"""Find every EE access to hardware registers that observe the render path (stdlib only, read-only, seconds).

usage: python3 -I decomp/notes/tools/io_access_scan.py [--all] [--ptr] [--data] [--fn <hex>]
  default : memory ops (lb/lh/lw/ld/lq/sb/sh/sw/sd/sq/...) whose effective address is in the ranges below
  --all   : also SIO/IPU/other 0x1000xxxx regs (default shows only the render-relevant ones + timers + INTC)
  --ptr   : also report in-range constants passed as call args (a0-a3 at jal/jalr), stored to memory, or returned
  --data  : also report .data/.rodata words that hold in-range addresses (pointer tables)
  --fn    : only functions starting at <hex>
Run from anywhere; paths are relative to the repo root.

Constant tracking: one linear pass per function (functions.tsv); lui/addiu/daddiu/ori/addu/daddu/or/move build
32-bit values; any other GPR write kills the register; jal/jalr kill caller-saved regs after the delay slot;
after an unconditional transfer (j/jr/b) the state restarts from what forward branches recorded for that address
(intersection of all recorded states). kseg0/kseg1 aliases (0x9xxx/0xbxxx) are folded to physical addresses.
A load is marked POLL when a branch within the next 16 instructions jumps back to an address <= the load.
"""
import argparse, bisect, os, struct, sys

ROOT = os.path.abspath(os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', '..', '..'))
sys.path.insert(0, os.path.join(ROOT, 'decomp', 'tools'))
import build_map as B  # noqa: E402

ELF = os.path.join(ROOT, 'games/mksm/disc/SLUS_210.87')
MAP = os.path.join(ROOT, 'decomp/map')
GPR = ['zero', 'at', 'v0', 'v1', 'a0', 'a1', 'a2', 'a3', 't0', 't1', 't2', 't3', 't4', 't5', 't6', 't7',
       's0', 's1', 's2', 's3', 's4', 's5', 's6', 's7', 't8', 't9', 'k0', 'k1', 'gp', 'sp', 'fp', 'ra']
CALLER_SAVED = (1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 24, 25, 31)

# (lo, hi, label, render_relevant)
REGS = [
    (0x10000000, 0x10000040, 'T0', True), (0x10000800, 0x10000840, 'T1', True),
    (0x10001000, 0x10001040, 'T2', True), (0x10001800, 0x10001840, 'T3', True),
    (0x10002000, 0x10002040, 'IPU', False),
    (0x10003000, 0x10003100, 'GIF', True), (0x10003800, 0x10003a00, 'VIF0', True),
    (0x10003c00, 0x10003e00, 'VIF1', True), (0x10004000, 0x10005000, 'VIF0_FIFO', True),
    (0x10005000, 0x10006000, 'VIF1_FIFO', True), (0x10006000, 0x10007000, 'GIF_FIFO', True),
    (0x10007000, 0x10008000, 'IPU_FIFO', False),
    (0x10008000, 0x10008100, 'D0', True), (0x10009000, 0x10009100, 'D1', True),
    (0x1000a000, 0x1000a100, 'D2', True), (0x1000b000, 0x1000b100, 'D3', False),
    (0x1000b400, 0x1000b500, 'D4', False), (0x1000c000, 0x1000c100, 'D5', False),
    (0x1000c400, 0x1000c500, 'D6', False), (0x1000c800, 0x1000c900, 'D7', False),
    (0x1000d000, 0x1000d100, 'D8', False), (0x1000d400, 0x1000d500, 'D9', False),
    (0x1000e000, 0x1000e100, 'DMAC', True),
    (0x1000f000, 0x1000f020, 'INTC', True), (0x1000f500, 0x1000f600, 'D_ENABLE', True),
    (0x1000f000, 0x10010000, 'misc_f', False),
    (0x11000000, 0x11001000, 'VU0_MICRO', True), (0x11004000, 0x11005000, 'VU0_MEM', True),
    (0x11008000, 0x1100c000, 'VU1_MICRO', True), (0x1100c000, 0x11010000, 'VU1_MEM', True),
    (0x12000000, 0x12002000, 'GS_PRIV', True),
]
NAMES = {
    0x10000000: 'T0_COUNT', 0x10000010: 'T0_MODE', 0x10000020: 'T0_COMP', 0x10000030: 'T0_HOLD',
    0x10000800: 'T1_COUNT', 0x10000810: 'T1_MODE', 0x10000820: 'T1_COMP', 0x10000830: 'T1_HOLD',
    0x10001000: 'T2_COUNT', 0x10001010: 'T2_MODE', 0x10001020: 'T2_COMP',
    0x10001800: 'T3_COUNT', 0x10001810: 'T3_MODE', 0x10001820: 'T3_COMP',
    0x10003000: 'GIF_CTRL', 0x10003010: 'GIF_MODE', 0x10003020: 'GIF_STAT', 0x10003040: 'GIF_TAG0',
    0x10003080: 'GIF_CNT', 0x10003090: 'GIF_P3CNT', 0x100030a0: 'GIF_P3TAG',
    0x10003800: 'VIF0_STAT', 0x10003810: 'VIF0_FBRST', 0x10003820: 'VIF0_ERR', 0x10003830: 'VIF0_MARK',
    0x10003c00: 'VIF1_STAT', 0x10003c10: 'VIF1_FBRST', 0x10003c20: 'VIF1_ERR', 0x10003c30: 'VIF1_MARK',
    0x10003c40: 'VIF1_CYCLE', 0x10003c50: 'VIF1_MODE', 0x10003c60: 'VIF1_NUM', 0x10003c70: 'VIF1_MASK',
    0x10003c80: 'VIF1_CODE', 0x10003c90: 'VIF1_ITOPS', 0x10003ca0: 'VIF1_BASE', 0x10003cb0: 'VIF1_OFST',
    0x10003cc0: 'VIF1_TOPS', 0x10003cd0: 'VIF1_ITOP', 0x10003ce0: 'VIF1_TOP',
    0x1000e000: 'D_CTRL', 0x1000e010: 'D_STAT', 0x1000e020: 'D_PCR', 0x1000e030: 'D_SQWC',
    0x1000e040: 'D_RBSR', 0x1000e050: 'D_RBOR', 0x1000e060: 'D_STADR',
    0x1000f000: 'INTC_STAT', 0x1000f010: 'INTC_MASK', 0x1000f520: 'D_ENABLER', 0x1000f590: 'D_ENABLEW',
    0x12000000: 'GS_PMODE', 0x12000070: 'GS_DISPFB1', 0x12000080: 'GS_DISPLAY1', 0x12000090: 'GS_DISPFB2',
    0x120000a0: 'GS_DISPLAY2', 0x120000e0: 'GS_BGCOLOR', 0x12000010: 'GS_SMODE1', 0x12000020: 'GS_SMODE2',
    0x12000060: 'GS_SYNCV', 0x12000030: 'GS_SRFSH', 0x12000040: 'GS_SYNCH1', 0x12000050: 'GS_SYNCH2',
    0x120000b0: 'GS_EXTBUF', 0x120000c0: 'GS_EXTDATA', 0x120000d0: 'GS_EXTWRITE',
    0x12001000: 'GS_CSR', 0x12001010: 'GS_IMR', 0x12001040: 'GS_BUSDIR', 0x12001080: 'GS_SIGLBLID',
}
CHREG = {0x00: 'CHCR', 0x10: 'MADR', 0x20: 'QWC', 0x30: 'TADR', 0x40: 'ASR0', 0x50: 'ASR1', 0x80: 'SADR'}


def phys(a):
    if 0x80000000 <= a < 0xc0000000:
        return a & 0x1fffffff
    return a


def region(a):
    p = phys(a)
    for lo, hi, lab, rel in REGS:
        if lo <= p < hi:
            return lab, rel
    return None, False


def regname(a):
    p = phys(a)
    n = NAMES.get(p) or NAMES.get(p & ~0xf)
    if n:
        return n + ('' if p == (p & ~0xf) or p in NAMES else '+%x' % (p & 0xf))
    lab, _ = region(p)
    if lab and lab[0] == 'D' and lab[1:].isdigit():
        r = CHREG.get(p & 0xf0)
        return '%s_%s' % (lab, r) if r and not p & 0xf else '%s+%x' % (lab, p & 0xff)
    if lab:
        base = [lo for lo, hi, l2, _ in REGS if l2 == lab][0]
        return '%s+%x' % (lab, p - base)
    return '%08x' % p


LOADS = {0x1a: ('ldl', 8), 0x1b: ('ldr', 8), 0x1e: ('lq', 16), 0x20: ('lb', 1), 0x21: ('lh', 2), 0x22: ('lwl', 4),
         0x23: ('lw', 4), 0x24: ('lbu', 1), 0x25: ('lhu', 2), 0x26: ('lwr', 4), 0x27: ('lwu', 4), 0x37: ('ld', 8),
         0x31: ('lwc1', 4), 0x36: ('lqc2', 16)}
STORES = {0x1f: ('sq', 16), 0x28: ('sb', 1), 0x29: ('sh', 2), 0x2a: ('swl', 4), 0x2b: ('sw', 4), 0x2c: ('sdl', 8),
          0x2d: ('sdr', 8), 0x2e: ('swr', 4), 0x3f: ('sd', 8), 0x39: ('swc1', 4), 0x3e: ('sqc2', 16)}
BR_I = {4: 'beq', 5: 'bne', 6: 'blez', 7: 'bgtz', 0x14: 'beql', 0x15: 'bnel', 0x16: 'blezl', 0x17: 'bgtzl'}
BR_RI = {0: 'bltz', 1: 'bgez', 2: 'bltzl', 3: 'bgezl', 0x10: 'bltzal', 0x11: 'bgezal'}
ALU_I = {8: 'addi', 9: 'addiu', 0xa: 'slti', 0xb: 'sltiu', 0xc: 'andi', 0xd: 'ori', 0xe: 'xori', 0x18: 'daddi',
         0x19: 'daddiu'}
SPEC = {0x00: 'sll', 0x02: 'srl', 0x03: 'sra', 0x04: 'sllv', 0x06: 'srlv', 0x07: 'srav', 0x08: 'jr', 0x09: 'jalr',
        0x0a: 'movz', 0x0b: 'movn', 0x0c: 'syscall', 0x0f: 'sync', 0x10: 'mfhi', 0x12: 'mflo', 0x14: 'dsllv',
        0x16: 'dsrlv', 0x18: 'mult', 0x19: 'multu', 0x1a: 'div', 0x1b: 'divu', 0x20: 'add', 0x21: 'addu',
        0x22: 'sub', 0x23: 'subu', 0x24: 'and', 0x25: 'or', 0x26: 'xor', 0x27: 'nor', 0x2a: 'slt', 0x2b: 'sltu',
        0x2d: 'daddu', 0x2f: 'dsubu', 0x38: 'dsll', 0x3a: 'dsrl', 0x3b: 'dsra', 0x3c: 'dsll32', 0x3e: 'dsrl32',
        0x3f: 'dsra32'}


def sx(i):
    return i - 0x10000 if i & 0x8000 else i


def branch_target(pc, w):
    """(target, conditional, is_call) for branches/jumps with a static target, else None."""
    op = w >> 26
    if op in BR_I:
        rs, rt = (w >> 21) & 31, (w >> 16) & 31
        uncond = op == 4 and rs == 0 and rt == 0
        return (pc + 4 + (sx(w & 0xffff) << 2)) & 0xffffffff, not uncond, False
    if op == 1 and ((w >> 16) & 31) in BR_RI:
        rt = (w >> 16) & 31
        return (pc + 4 + (sx(w & 0xffff) << 2)) & 0xffffffff, True, rt >= 0x10
    if op == 0x10 or op == 0x11 or op == 0x12:  # bc0/bc1/bc2
        if ((w >> 21) & 31) == 8:
            return (pc + 4 + (sx(w & 0xffff) << 2)) & 0xffffffff, True, False
    if op in (2, 3):
        return ((pc + 4) & 0xf0000000) | ((w & 0x3ffffff) << 2), False, op == 3
    return None


def dis(pc, w, fname=None):
    """Compact R5900 disassembly for the window printout."""
    op, rs, rt, rd = w >> 26, (w >> 21) & 31, (w >> 16) & 31, (w >> 11) & 31
    imm, sa, fn = w & 0xffff, (w >> 6) & 31, w & 63
    if w == 0:
        return 'nop'
    if op == 0:
        m = SPEC.get(fn, 'spec_%x' % fn)
        if fn in (0, 2, 3, 0x38, 0x3a, 0x3b, 0x3c, 0x3e, 0x3f):
            return '%s %s,%s,%d' % (m, GPR[rd], GPR[rt], sa)
        if fn == 8:
            return 'jr %s' % GPR[rs]
        if fn == 9:
            return 'jalr %s' % GPR[rs]
        if fn in (0xc, 0xf):
            return m
        if fn in (0x10, 0x12):
            return '%s %s' % (m, GPR[rd])
        return '%s %s,%s,%s' % (m, GPR[rd], GPR[rs], GPR[rt])
    if op == 0xf:
        return 'lui %s,0x%x' % (GPR[rt], imm)
    if op in ALU_I:
        v = ('0x%x' % imm) if op in (0xc, 0xd, 0xe) else str(sx(imm))
        return '%s %s,%s,%s' % (ALU_I[op], GPR[rt], GPR[rs], v)
    if op in LOADS or op in STORES:
        m = (LOADS.get(op) or STORES.get(op))[0]
        r = ('$f%d' % rt) if op in (0x31, 0x39) else ('vf%d' % rt) if op in (0x36, 0x3e) else GPR[rt]
        return '%s %s,%d(%s)' % (m, r, sx(imm), GPR[rs])
    bt = branch_target(pc, w)
    if bt:
        t = '%x' % bt[0]
        if op in BR_I:
            return '%s %s,%s,%s' % (BR_I[op], GPR[rs], GPR[rt], t)
        if op == 1:
            return '%s %s,%s' % (BR_RI[rt], GPR[rs], t)
        if op in (2, 3):
            return '%s %s' % ('jal' if op == 3 else 'j', t + (' <%s>' % fname(bt[0]) if fname else ''))
        return 'bc%d%s %s' % (op - 0x10, 'tf'[rt & 1], t)
    if op == 0x10:
        if rs == 0:
            return 'mfc0 %s,$%d' % (GPR[rt], rd)
        if rs == 4:
            return 'mtc0 %s,$%d' % (GPR[rt], rd)
        if rs == 0x10:
            return {0x38: 'ei', 0x39: 'di', 0x18: 'eret'}.get(fn, 'cop0 %08x' % w)
    return '.word 0x%08x' % w


def writes_gpr(w):
    """GPR index written by w (approximate; None if none)."""
    op, rs, rt, rd = w >> 26, (w >> 21) & 31, (w >> 16) & 31, (w >> 11) & 31
    if op == 0:
        fn = w & 63
        if fn in (0x08, 0x0c, 0x0d, 0x0f, 0x11, 0x13):
            return None
        return rd
    if op == 0x1c:
        return rd
    if op == 3:
        return 31
    if op == 1:
        return 31 if rt >= 0x10 else None
    if 8 <= op <= 0xf or op in (0x18, 0x19):
        return rt
    if op in LOADS and op not in (0x31, 0x36):
        return rt
    if op == 0x10 and rs == 0:
        return rt
    if op == 0x11 and rs in (0, 1, 2):
        return rt
    if op == 0x12 and rs in (1, 2):
        return rt
    return None


def load_funcs():
    out = []
    with open(os.path.join(MAP, 'functions.tsv')) as f:
        next(f)
        for line in f:
            p = line.rstrip('\n').split('\t')
            out.append((int(p[0], 16), int(p[1], 16), p[3], p[5]))
    out.sort()
    names = {}
    try:
        with open(os.path.join(MAP, 'names.tsv')) as f:
            next(f)
            for line in f:
                p = line.rstrip('\n').split('\t')
                a = int(p[0], 16)
                if a not in names or p[2] in ('sce-db', 'syscall'):
                    names[a] = p[1]
    except OSError:
        pass
    return out, names


def scan_fn(elf, s, e, opts, emit):
    st = {0: 0}
    pending = {}   # forward branch target -> state (intersection of all recorded states)
    dead = False   # previous instruction ended with an unconditional transfer (after its delay slot)
    after = None   # (target, conditional, call, is_return) of the branch whose delay slot is being processed
    pc = s
    while pc < e:
        if pc in pending:
            ps = pending.pop(pc)
            st = dict(ps) if dead else {k: v for k, v in st.items() if ps.get(k) == v}
            dead = False
        elif dead:
            st = {}
            dead = False
        st[0] = 0
        w = elf.w(pc)
        op, rs, rt = w >> 26, (w >> 21) & 31, (w >> 16) & 31
        imm = w & 0xffff
        if (op in LOADS or op in STORES) and rs in st:
            ea = (st[rs] + sx(imm)) & 0xffffffff
            lab, rel = region(ea)
            if lab and (rel or opts.all):
                emit('mem', pc, ea, w, rs, rt, op in LOADS)
        if opts.ptr and op in STORES and rt in st and rt != 0:
            lab, rel = region(st[rt])
            if lab and (rel or opts.all) and st[rt] & 0xffff:
                emit('ptr-store', pc, st[rt], w, rs, rt, False)
        bt = branch_target(pc, w)
        is_jr = op == 0 and (w & 63) == 8
        is_jalr = op == 0 and (w & 63) == 9
        if opts.ptr and (op == 3 or is_jalr):
            for a in (4, 5, 6, 7):
                if a in st:
                    lab, rel = region(st[a])
                    if lab and (rel or opts.all) and (st[a] & 0xffff or a == 4):
                        emit('ptr-arg', pc, st[a], w, a, a, False)
        # value tracking
        wr = writes_gpr(w)
        nv = None
        if op == 0xf:
            nv = (imm << 16) & 0xffffffff
        elif op in (9, 0x19) and rs in st:
            nv = (st[rs] + sx(imm)) & 0xffffffff
        elif op == 0xd and rs in st:
            nv = st[rs] | imm
        elif op == 0 and (w & 63) in (0x21, 0x2d, 0x25) and rs in st and rt in st:
            nv = ((st[rs] | st[rt]) if (w & 63) == 0x25 else (st[rs] + st[rt])) & 0xffffffff
        if wr:
            if nv is None:
                st.pop(wr, None)
            else:
                st[wr] = nv
        if after is not None:          # this was the delay slot of `after`
            tgt, cond, call, ret = after
            after = None
            if opts.ptr and ret and 2 in st:
                lab, rel = region(st[2])
                if lab and (rel or opts.all):
                    emit('ptr-ret', pc - 4, st[2], elf.w(pc - 4), 2, 2, False)
            if call:
                for r in CALLER_SAVED:
                    st.pop(r, None)
            else:
                if tgt is not None and tgt > pc and s <= tgt < e:
                    snap = dict(st)
                    if tgt in pending:
                        snap = {k: v for k, v in pending[tgt].items() if snap.get(k) == v}
                    pending[tgt] = snap
                if not cond:
                    dead = True
        elif bt:
            after = (bt[0], bt[1], bt[2], False)
        elif is_jalr:
            after = (None, True, True, False)
        elif is_jr:
            after = (None, False, False, rs == 31)
        pc += 4


def poll_info(elf, pc, e, fname):
    """Is the access at pc inside a short loop? Return (is_poll, window lines)."""
    lines, poll = [], None
    for k in range(1, 17):
        q = pc + 4 * k
        if q >= e:
            break
        w = elf.w(q)
        bt = branch_target(q, w)
        lines.append('%x: %s' % (q, dis(q, w, fname)))
        if bt and not bt[2] and bt[0] <= pc and bt[0] >= pc - 0x80:
            poll = (q, bt[0], bt[1])
            lines.append('%x: %s   (delay)' % (q + 4, dis(q + 4, elf.w(q + 4), fname)))
            break
        if (w >> 26) == 0 and (w & 63) == 8:
            lines.append('%x: %s   (delay)' % (q + 4, dis(q + 4, elf.w(q + 4), fname)))
            break
    return poll, lines


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--all', action='store_true')
    ap.add_argument('--ptr', action='store_true')
    ap.add_argument('--data', action='store_true')
    ap.add_argument('--fn')
    ap.add_argument('--window', action='store_true', help='print the instruction window after each read')
    opts = ap.parse_args()
    elf = B.Elf(ELF)
    funcs, names = load_funcs()
    starts = [f[0] for f in funcs]

    def fname(a):
        i = bisect.bisect_right(starts, a) - 1
        if i < 0:
            return '?'
        s, e, n, _ = funcs[i]
        base = names.get(s, n)
        return base if a == s else '%s+%x' % (base, a - s)

    rows = []
    for s, e, n, mod in funcs:
        if opts.fn and s != int(opts.fn, 16):
            continue
        if not (elf.T0 <= s < elf.T1):
            continue

        def emit(kind, pc, ea, w, base, rt, is_load, s=s, e=e, n=n, mod=mod):
            rows.append((kind, pc, ea, w, is_load, s, e, names.get(s, n), mod))
        scan_fn(elf, s, min(e, elf.T1), opts, emit)

    rows.sort(key=lambda r: (r[1], r[0]))
    print('# kind\tpc\tfunction\tmodule\tea\treg\tR/W\tinsn\tpoll(branch->target)')
    for kind, pc, ea, w, is_load, s, e, n, mod in rows:
        rw = 'R' if is_load else 'W'
        poll, lines = (None, [])
        if kind == 'mem' and is_load:
            poll, lines = poll_info(elf, pc, e, fname)
        ps = ('POLL %x->%x' % (poll[0], poll[1])) if poll else ''
        if kind != 'mem':
            rw = kind
        print('%s\t%x\t%s\t%s\t%08x\t%s\t%s\t%s\t%s' % (kind, pc, n, mod, ea, regname(ea), rw, dis(pc, w, fname), ps))
        if opts.window and lines and kind == 'mem' and is_load:
            for ln in lines:
                print('\t\t' + ln)

    if opts.data:
        print('\n# data words holding in-range addresses')
        for sec in ('.data', '.rodata', '.sdata', '.vudata'):
            for a, v in elf.section_words(sec):
                lab, rel = region(v)
                if lab and (rel or opts.all) and v & 0xff00:
                    print('data\t%x\t%s\t%08x\t%s' % (a, sec, v, regname(v)))


if __name__ == '__main__':
    main()
