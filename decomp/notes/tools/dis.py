#!/usr/bin/env python3
"""Disassemble an EE function range of SLUS_210.87 with llvm-objdump (mipsel) and patch in the R5900-only
opcodes llvm does not know (lq/sq, lqc2/sqc2, MMI, COP2 macro ops), plus jal-target names from functions.tsv.

usage: python3 -I decomp/notes/tools/dis.py <addr|name> [<end>]
   e.g. dis.py 241410          (whole function, end from functions.tsv)
        dis.py 241c80 241d00
Run from the repo root. Light: one llvm-objdump call over the given range.
"""
import os, re, subprocess, sys

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), '..', '..', '..'))
ELF = os.path.join(ROOT, 'games/mksm/disc/SLUS_210.87')
FUNCS = os.path.join(ROOT, 'decomp/map/functions.tsv')

def load_funcs():
    by_addr, by_name = {}, {}
    with open(FUNCS) as f:
        next(f)
        for line in f:
            p = line.rstrip('\n').split('\t')
            a, e = int(p[0], 16), int(p[1], 16)
            by_addr[a] = (p[3], e)
            by_name[p[3]] = a
    return by_addr, by_name

GPR = ['zero','at','v0','v1','a0','a1','a2','a3','t0','t1','t2','t3','t4','t5','t6','t7',
       's0','s1','s2','s3','s4','s5','s6','s7','t8','t9','k0','k1','gp','sp','fp','ra']

def r5900(w):
    op = w >> 26
    rs, rt, imm = (w >> 21) & 31, (w >> 16) & 31, w & 0xffff
    simm = imm - 0x10000 if imm & 0x8000 else imm
    if op == 0x1e: return f'lq\t{GPR[rt]}, {simm:#x}({GPR[rs]})'
    if op == 0x1f: return f'sq\t{GPR[rt]}, {simm:#x}({GPR[rs]})'
    if op == 0x36: return f'lqc2\tvf{rt}, {simm:#x}({GPR[rs]})'
    if op == 0x3e: return f'sqc2\tvf{rt}, {simm:#x}({GPR[rs]})'
    if op == 0x1c: return f'mmi\t{w:#010x}  (rs={GPR[rs]} rt={GPR[rt]} rd={GPR[(w>>11)&31]} fn={w&63:#x} sa={(w>>6)&31:#x})'
    if op == 0x12:
        fmt = rs
        if fmt == 1: return f'qmfc2\t{GPR[rt]}, vf{(w>>11)&31}'
        if fmt == 2: return f'cfc2\t{GPR[rt]}, vi{(w>>11)&31}'
        if fmt == 5: return f'qmtc2\t{GPR[rt]}, vf{(w>>11)&31}'
        if fmt == 6: return f'ctc2\t{GPR[rt]}, vi{(w>>11)&31}'
        if fmt == 8: return f'bc2\t{w:#010x}'
        if fmt >= 16: return f'vu0macro\t{w:#010x}'
    return None

def main():
    by_addr, by_name = load_funcs()
    a = sys.argv[1]
    start = by_name[a] if a in by_name else int(a, 16)
    end = int(sys.argv[2], 16) if len(sys.argv) > 2 else by_addr[start][1]
    out = subprocess.run(['llvm-objdump', '-d', '--triple=mipsel', '--mcpu=mips3',
                          f'--start-address={start:#x}', f'--stop-address={end:#x}', ELF],
                         capture_output=True, text=True, check=True).stdout
    for line in out.splitlines():
        m = re.match(r'\s+([0-9a-f]+):\s+((?:[0-9a-f]{2} ){4})\s*(.*)', line)
        if not m:
            continue
        addr = int(m.group(1), 16)
        w = int.from_bytes(bytes.fromhex(m.group(2).replace(' ', '')), 'little')
        txt = m.group(3)
        fix = r5900(w)
        if fix and (w >> 26) in (0x1e, 0x1f, 0x36, 0x3e, 0x1c, 0x12):
            txt = fix
        if (w >> 26) in (2, 3):
            tgt = ((addr + 4) & 0xf0000000) | ((w & 0x3ffffff) << 2)
            nm = by_addr.get(tgt, ('?',))[0]
            txt = f"{'jal' if (w>>26)==3 else 'j'}\t{tgt:#x} <{nm}>"
        print(f'{addr:06x}  {txt}')

if __name__ == '__main__':
    main()
