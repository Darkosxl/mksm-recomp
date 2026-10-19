#!/usr/bin/env python3
"""Callee closure of EE functions (direct calls from decomp/map/callgraph.tsv), with sizes, and which members write
the VIF1 chain (reference the chain write pointer 0x65e300). Used for the native-renderer seam estimate.

usage: python3 -I decomp/notes/tools/closure.py [--stop <hex,...>] <entry hex> [...]
  Library code (module sony/libc/utility, havok, cri) is listed separately and not walked into.
  --stop: functions to treat as leaves (already counted elsewhere).
"""
import os, struct, sys, bisect
from collections import defaultdict
sys.path.insert(0, os.path.dirname(__file__))
from xref import text_segment

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), '..', '..', '..'))
fi = {}
for line in list(open(os.path.join(ROOT, 'decomp/map/functions.tsv')))[1:]:
    p = line.rstrip('\n').split('\t'); fi[int(p[0], 16)] = p
callees = defaultdict(set)
for line in list(open(os.path.join(ROOT, 'decomp/map/callgraph.tsv')))[1:]:
    p = line.split('\t'); callees[int(p[0], 16)].add(int(p[1], 16))
LIB = ('sony', 'libc', 'utility', 'havok', 'cri')

def chain_writers():
    """Functions with a lui 0x66 + imm 0xe300 (-0x1d00) access, i.e. that touch the chain pointer 0x65e300."""
    starts = sorted(fi)
    out = set()
    for va, data in text_segment():
        W = struct.unpack_from(f'<{len(data)//4}I', data)
        for i, w in enumerate(W):
            if (w & 0xffff) == 0xe300 and (w >> 26) in (0x23, 0x2b, 0x09):
                for j in range(i - 1, max(-1, i - 64), -1):
                    if W[j] >> 26 == 0x0f and (W[j] & 0xffff) == 0x66:
                        a = va + 4 * i
                        out.add(starts[bisect.bisect_right(starts, a) - 1]); break
    return out

def main():
    args = sys.argv[1:]
    stop = set()
    if '--stop' in args:
        k = args.index('--stop'); stop = {int(x, 16) for x in args[k + 1].split(',')}; del args[k:k + 2]
    cw = chain_writers()
    seen, libs, order = set(), set(), []
    todo = [int(a, 16) for a in args]
    while todo:
        a = todo.pop()
        if a in seen: continue
        seen.add(a)
        if fi[a][5] in LIB: libs.add(a); continue
        order.append(a)
        if a in stop: continue
        todo.extend(callees[a])
    tot = sum(int(fi[a][2]) for a in order)
    inset = set(order)
    level = {}
    def lvl(a, stack=()):
        if a in level: return level[a]
        if a in stack: return 0
        sub = [b for b in callees[a] if b in inset and b != a] if a not in stop else []
        level[a] = 1 + max((lvl(b, stack + (a,)) for b in sub), default=-1)
        return level[a]
    for a in order: lvl(a)
    print('# level size name module chain source   (leaves first: level 0 calls nothing in this set)')
    for a in sorted(order, key=lambda a: (level[a], a)):
        p = fi[a]
        print(f"{level[a]:2d} {a:06x} {int(p[2]):6d} {p[3]:28s} {p[5]:16s} {'CHAIN' if a in cw else '     '} {p[6].replace('c:/Projects/','')}")
    print(f'# {len(order)} functions, {tot} bytes (non-library); chain writers: {sum(1 for a in order if a in cw)} '
          f'({sum(int(fi[a][2]) for a in order if a in cw)} bytes)')
    print('# library callees (not counted):', ' '.join(f'{fi[a][3]}' for a in sorted(libs)))

if __name__ == '__main__':
    main()
