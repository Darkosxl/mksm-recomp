#!/usr/bin/env python3
"""Disassemble a recorded VU1 microprogram (games/mksm/vu1/<key>_<entry>.bin, a 16 KB micro-memory snapshot).

Follows the same reachability walk as runtime/include/ps2/vu_ops.hpp reachable(): from the entry, along
fall-through and branch targets, stopping one instruction after an E bit or an unconditional jump.

usage: python3 -I decomp/notes/tools/vu1_dis.py <bin> [entry_hex] [--all]
   --all   linear dump of every non-NOP pair in the image instead of the reachable set
Byte addresses are printed (the runtime's labels L_xxxx in mksm/generated/vu1_*.cpp use the same numbers);
data-memory operands are qword addresses (x16 = byte offset).
"""
import struct, sys

MASK = 16383
XYZW = 'xyzw'

def dest(d):
    return ''.join(c for i, c in enumerate(XYZW) if d & (8 >> i))

def f32(w):
    return struct.unpack('<f', struct.pack('<I', w))[0]

def upper(hi):
    d, ft, fs, fd, bc, fn = (hi >> 21) & 15, (hi >> 16) & 31, (hi >> 11) & 31, (hi >> 6) & 31, hi & 3, hi & 63
    D = '.' + dest(d)
    if fn < 0x3C:
        bcs = XYZW[bc]
        grp = {0x00: 'ADD', 0x04: 'SUB', 0x08: 'MADD', 0x0C: 'MSUB', 0x10: 'MAX', 0x14: 'MINI', 0x18: 'MUL'}
        if fn < 0x1C:
            return f"{grp[fn & ~3]}{bcs}{D} vf{fd}, vf{fs}, vf{ft}{bcs}"
        names = {0x1C: ('MULq', 'Q'), 0x1D: ('MAXi', 'I'), 0x1E: ('MULi', 'I'), 0x1F: ('MINIi', 'I'),
                 0x20: ('ADDq', 'Q'), 0x21: ('MADDq', 'Q'), 0x22: ('ADDi', 'I'), 0x23: ('MADDi', 'I'),
                 0x24: ('SUBq', 'Q'), 0x25: ('MSUBq', 'Q'), 0x26: ('SUBi', 'I'), 0x27: ('MSUBi', 'I')}
        if fn in names:
            n, s = names[fn]
            return f"{n}{D} vf{fd}, vf{fs}, {s}"
        full = {0x28: 'ADD', 0x29: 'MADD', 0x2A: 'MUL', 0x2B: 'MAX', 0x2C: 'SUB', 0x2D: 'MSUB', 0x2E: 'OPMSUB', 0x2F: 'MINI'}
        if fn in full:
            return f"{full[fn]}{D} vf{fd}, vf{fs}, vf{ft}"
        return f"?upper {hi:08x}"
    idx = ((hi >> 6) & 31) * 4 + (fn & 3)
    bcs = XYZW[bc]
    if idx < 0x10:
        n = ['ADDA', 'SUBA', 'MADDA', 'MSUBA'][idx >> 2]
        return f"{n}{bcs}{D} ACC, vf{fs}, vf{ft}{bcs}"
    if idx < 0x14: return f"ITOF{[0, 4, 12, 15][idx & 3]}{D} vf{ft}, vf{fs}"
    if idx < 0x18: return f"FTOI{[0, 4, 12, 15][idx & 3]}{D} vf{ft}, vf{fs}"
    if idx < 0x1C: return f"MULA{bcs}{D} ACC, vf{fs}, vf{ft}{bcs}"
    sp = {0x1C: 'MULAq{D} ACC, vf{fs}, Q', 0x1D: 'ABS{D} vf{ft}, vf{fs}', 0x1E: 'MULAi{D} ACC, vf{fs}, I',
          0x1F: 'CLIPw.xyz vf{fs}, vf{ft}w', 0x20: 'ADDAq{D} ACC, vf{fs}, Q', 0x21: 'MADDAq{D} ACC, vf{fs}, Q',
          0x22: 'ADDAi{D} ACC, vf{fs}, I', 0x23: 'MADDAi{D} ACC, vf{fs}, I', 0x24: 'SUBAq{D} ACC, vf{fs}, Q',
          0x25: 'MSUBAq{D} ACC, vf{fs}, Q', 0x26: 'SUBAi{D} ACC, vf{fs}, I', 0x27: 'MSUBAi{D} ACC, vf{fs}, I',
          0x28: 'ADDA{D} ACC, vf{fs}, vf{ft}', 0x29: 'MADDA{D} ACC, vf{fs}, vf{ft}', 0x2A: 'MULA{D} ACC, vf{fs}, vf{ft}',
          0x2C: 'SUBA{D} ACC, vf{fs}, vf{ft}', 0x2D: 'MSUBA{D} ACC, vf{fs}, vf{ft}', 0x2E: 'OPMULA.xyz ACC, vf{fs}, vf{ft}',
          0x2F: 'NOP'}
    if idx in sp:
        return sp[idx].format(D=D, fs=fs, ft=ft)
    return f"?upperS {hi:08x}"

def lower(lo, pc):
    op = lo >> 25
    d, it, is_, id_ = (lo >> 21) & 15, (lo >> 16) & 15, (lo >> 11) & 15, (lo >> 6) & 15
    ft, fs = (lo >> 16) & 31, (lo >> 11) & 31
    D = '.' + dest(d)
    imm11 = ((lo & 0x7FF) ^ 0x400) - 0x400
    tgt = (pc + 8 + imm11 * 8) & MASK
    fsf, ftf = XYZW[(lo >> 21) & 3], XYZW[(lo >> 23) & 3]
    if op == 0x40:
        fn = lo & 63
        if fn < 0x3C:
            if fn == 0x30: return f"IADD vi{id_}, vi{is_}, vi{it}"
            if fn == 0x31: return f"ISUB vi{id_}, vi{is_}, vi{it}"
            if fn == 0x32:
                imm5 = (((lo >> 6) & 31) ^ 16) - 16
                return f"IADDI vi{it}, vi{is_}, {imm5}"
            if fn == 0x34: return f"IAND vi{id_}, vi{is_}, vi{it}"
            if fn == 0x35: return f"IOR vi{id_}, vi{is_}, vi{it}"
            return f"?lower {lo:08x}"
        idx = ((lo >> 6) & 31) * 4 + (fn & 3)
        m = {0x30: f"MOVE{D} vf{ft}, vf{fs}", 0x31: f"MR32{D} vf{ft}, vf{fs}", 0x34: f"LQI{D} vf{ft}, (vi{is_}++)",
             0x35: f"SQI{D} vf{fs}, (vi{it}++)", 0x36: f"LQD{D} vf{ft}, (--vi{is_})", 0x37: f"SQD{D} vf{fs}, (--vi{it})",
             0x38: f"DIV Q, vf{fs}{fsf}, vf{ft}{ftf}", 0x39: f"SQRT Q, vf{ft}{ftf}", 0x3A: f"RSQRT Q, vf{fs}{fsf}, vf{ft}{ftf}",
             0x3B: "WAITQ", 0x3C: f"MTIR vi{it}, vf{fs}{fsf}", 0x3D: f"MFIR{D} vf{ft}, vi{is_}", 0x3E: f"ILWR{D} vi{it}, (vi{is_})",
             0x3F: f"ISWR{D} vi{it}, (vi{is_})", 0x40: f"RNEXT{D} vf{ft}, R", 0x41: f"RGET{D} vf{ft}, R", 0x42: f"RINIT R, vf{fs}{fsf}",
             0x43: f"RXOR R, vf{fs}{fsf}", 0x64: f"MFP{D} vf{ft}, P", 0x68: f"XTOP vi{it}", 0x69: f"XITOP vi{it}",
             0x6C: f"XGKICK vi{is_}", 0x70: f"ESADD P, vf{fs}", 0x71: f"ERSADD P, vf{fs}", 0x72: f"ELENG P, vf{fs}",
             0x73: f"ERLENG P, vf{fs}", 0x74: f"EATANxy P, vf{fs}", 0x75: f"EATANxz P, vf{fs}", 0x76: f"ESUM P, vf{fs}",
             0x78: f"ESQRT P, vf{fs}{fsf}", 0x79: f"ERSQRT P, vf{fs}{fsf}", 0x7A: f"ERCPR P, vf{fs}{fsf}", 0x7B: "WAITP",
             0x7C: f"ESIN P, vf{fs}{fsf}", 0x7D: f"EATAN P, vf{fs}{fsf}", 0x7E: f"EEXP P, vf{fs}{fsf}"}
        if idx == 0x2F or (idx == 0x30 and ft == 0 and fs == 0 and d == 0): return 'NOP'
        return m.get(idx, f"?lowerS {lo:08x}")
    if op == 0x00: return f"LQ{D} vf{ft}, {imm11}(vi{is_})"
    if op == 0x01: return f"SQ{D} vf{fs}, {imm11}(vi{it})"
    if op == 0x04: return f"ILW{D} vi{it}, {imm11}(vi{is_})"
    if op == 0x05: return f"ISW{D} vi{it}, {imm11}(vi{is_})"
    if op in (0x08, 0x09):
        imm15 = ((lo >> 10) & 0x7800) | (lo & 0x7FF)
        return f"{'IADDIU' if op == 8 else 'ISUBIU'} vi{it}, vi{is_}, 0x{imm15:x}"
    if 0x10 <= op <= 0x13: return f"{['FCEQ', 'FCSET', 'FCAND', 'FCOR'][op - 0x10]} vi1, 0x{lo & 0xFFFFFF:06x}"
    if 0x14 <= op <= 0x17:
        imm12 = ((lo >> 10) & 0x800) | (lo & 0x7FF)
        return f"{['FSEQ', 'FSSET', 'FSAND', 'FSOR'][op - 0x14]} vi{it}, 0x{imm12:03x}"
    if op == 0x18: return f"FMEQ vi{it}, vi{is_}"
    if op == 0x1A: return f"FMAND vi{it}, vi{is_}"
    if op == 0x1B: return f"FMOR vi{it}, vi{is_}"
    if op == 0x1C: return f"FCGET vi{it}"
    if op == 0x20: return f"B L_{tgt:04X}"
    if op == 0x21: return f"BAL vi{it}, L_{tgt:04X}"
    if op == 0x24: return f"JR vi{is_}"
    if op == 0x25: return f"JALR vi{it}, vi{is_}"
    b = {0x28: f"IBEQ vi{it}, vi{is_}", 0x29: f"IBNE vi{it}, vi{is_}", 0x2C: f"IBLTZ vi{is_}", 0x2D: f"IBGTZ vi{is_}",
         0x2E: f"IBLEZ vi{is_}", 0x2F: f"IBGEZ vi{is_}"}
    if op in b: return f"{b[op]}, L_{tgt:04X}"
    return f"?op{op:02x} {lo:08x}"

def is_branch(lo):
    op = lo >> 25
    return op in (0x20, 0x21, 0x24, 0x25) or (0x28 <= op <= 0x2F and op not in (0x2A, 0x2B))

def reachable(code, entry):
    seen, out, work = set(), [], [entry & MASK]
    while work:
        pc = work.pop()
        stop = -1
        for _ in range(4096):
            if pc in seen: break
            seen.add(pc)
            out.append(pc)
            if stop == 0: break
            if stop > 0: stop -= 1
            lo, hi = struct.unpack_from('<II', code, pc)
            if hi & 0x40000000: stop = 0
            if not (hi & 0x80000000) and is_branch(lo):
                op = lo >> 25
                if op not in (0x24, 0x25):
                    imm11 = ((lo & 0x7FF) ^ 0x400) - 0x400
                    work.append((pc + 8 + imm11 * 8) & MASK)
                if op in (0x21, 0x25): work.append((pc + 16) & MASK)
                if op in (0x20, 0x21, 0x24, 0x25): stop = 0
            pc = (pc + 8) & MASK
    return sorted(out)

def line(code, pc):
    lo, hi = struct.unpack_from('<II', code, pc)
    flags = ''.join(c for b, c in ((30, 'E'), (29, 'M'), (28, 'D'), (27, 'T')) if hi & (1 << b))
    u = upper(hi)
    l = f"LOI {f32(lo):.9g}  (0x{lo:08x})" if hi & 0x80000000 else lower(lo, pc)
    if hi & 0x80000000: flags = 'I' + flags
    return lo, hi, f"{pc:04X}: {flags:3} {u:34} | {l}"

def main():
    path = sys.argv[1]
    code = open(path, 'rb').read()
    args = [a for a in sys.argv[2:] if not a.startswith('--')]
    entry = int(args[0], 16) if args else int(path.rsplit('_', 1)[1].split('.')[0], 16)
    if '--all' in sys.argv:
        pcs = [pc for pc in range(0, 16384, 8) if code[pc:pc + 8] != b'\x00' * 8]
    else:
        pcs = reachable(code, entry)
    targets = set()
    for pc in pcs:
        lo, hi = struct.unpack_from('<II', code, pc)
        if not (hi & 0x80000000) and is_branch(lo) and (lo >> 25) not in (0x24, 0x25):
            targets.add((pc + 8 + ((((lo & 0x7FF) ^ 0x400) - 0x400) * 8)) & MASK)
    print(f"; {path} entry {entry:04X}: {len(pcs)} instructions")
    prev = None
    for pc in pcs:
        if prev is not None and pc != prev + 8: print('        ...')
        if pc in targets or pc == entry: print(f"L_{pc:04X}:")
        print('  ' + line(code, pc)[2])
        prev = pc

if __name__ == '__main__':
    main()
