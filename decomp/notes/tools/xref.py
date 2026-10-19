#!/usr/bin/env python3
"""Find EE code that addresses a global by lui/imm16 pairs (loose: any lui of the high half earlier in the same
function, any load/store/addiu/ori using the low half). Prints function, site, instruction kind.

usage: python3 -I decomp/notes/tools/xref.py <hex addr> [<hex addr> ...]
"""
import bisect, os, struct, sys

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), '..', '..', '..'))
ELF = os.path.join(ROOT, 'games/mksm/disc/SLUS_210.87')
FUNCS = os.path.join(ROOT, 'decomp/map/functions.tsv')

def text_segment():
    d = open(ELF, 'rb').read()
    phoff, = struct.unpack_from('<I', d, 0x1c)
    phnum, = struct.unpack_from('<H', d, 0x2c)
    segs = []
    for i in range(phnum):
        t, off, va, pa, fsz, msz, fl, al = struct.unpack_from('<8I', d, phoff + i * 32)
        if t == 1 and fsz:
            segs.append((va, d[off:off + fsz]))
    return segs

def main():
    starts, info = [], []
    with open(FUNCS) as f:
        next(f)
        for line in f:
            p = line.split('\t')
            starts.append(int(p[0], 16)); info.append((p[3], int(p[1], 16), p[5], p[6]))
    targets = [int(a, 16) for a in sys.argv[1:]]
    names = {0x23: 'lw', 0x2b: 'sw', 0x09: 'addiu', 0x0d: 'ori', 0x20: 'lb', 0x24: 'lbu', 0x21: 'lh', 0x25: 'lhu',
             0x28: 'sb', 0x29: 'sh', 0x37: 'ld', 0x3f: 'sd', 0x1e: 'lq', 0x1f: 'sq', 0x31: 'lwc1', 0x39: 'swc1',
             0x36: 'lqc2', 0x3e: 'sqc2'}
    for va, data in text_segment():
        words = struct.unpack_from(f'<{len(data)//4}I', data)
        for tgt in targets:
            lo = tgt & 0xffff
            hi = ((tgt + 0x8000) >> 16) & 0xffff
            hi_ori = (tgt >> 16) & 0xffff
            for i, w in enumerate(words):
                op = w >> 26
                if op not in names or (w & 0xffff) != lo:
                    continue
                addr = va + i * 4
                k = bisect.bisect_right(starts, addr) - 1
                if k < 0: continue
                fstart = starts[k]
                want = hi_ori if op == 0x0d else hi
                ok = False
                for j in range(i - 1, max(-1, i - 1 - (addr - fstart) // 4) - 1, -1):
                    ww = words[j]
                    if ww >> 26 == 0x0f and (ww & 0xffff) == want:
                        ok = True; break
                if ok:
                    n, e, mod, src = info[k]
                    print(f'{tgt:08x}  {addr:06x}  {names[op]:5s} in {fstart:06x} {n} ({e-fstart} B, {mod}, {src})')

if __name__ == '__main__':
    main()
