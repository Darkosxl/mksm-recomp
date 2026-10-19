#!/usr/bin/env python3
"""Map recorded VU1 microprogram bins to the drawdbg 8-hex code hash and to the framedbg draw categories.

bin name  = <program_key 64-bit>_<entry byte address>.bin, a full 16 KB VU1 micro-memory snapshot
            (runtime/src/vu_micro.cpp lookup(): program_key over every reachable (pc, lo, hi) from the entry).
drawdbg   = FNV-1a-32 over the 32 instruction words (256 bytes) starting at the entry
            (runtime/src/gs/drawdbg.cpp vu1_start()).

usage: python3 -I decomp/notes/tools/vu1_map.py <vu1 bin dir> <framedbg dir> [categories.json]
Light: reads 53 x 16 KB bins and streams the draws.ndjson files line by line.
"""
import json, os, sys, collections

def fnv32(h, v):
    for i in range(8):
        h = ((h ^ ((v >> (i * 8)) & 0xFF)) * 16777619) & 0xFFFFFFFF
    return h

def drawdbg_hash(code, entry):
    h = 2166136261
    for i in range(0, 256, 8):
        a = (entry + i) & 16383
        h = fnv32(h, int.from_bytes(code[a:a + 8], 'little'))
    return h

PRIM = ['point', 'line', 'lstrip', 'tri', 'tstrip', 'tfan', 'sprite', 'x']

def main():
    bdir, fdir = sys.argv[1], sys.argv[2]
    cats = json.load(open(sys.argv[3])) if len(sys.argv) > 3 else None
    bins = {}
    for n in sorted(os.listdir(bdir)):
        if not n.endswith('.bin'): continue
        key, ent = n[:-4].split('_')
        code = open(os.path.join(bdir, n), 'rb').read()
        bins[n] = (int(ent, 16), '%08x' % drawdbg_hash(code, int(ent, 16)))
    agg = collections.defaultdict(lambda: {'draws': 0, 'prims': 0, 'scenes': set(), 'prim': collections.Counter(),
                                           'blend': collections.Counter(), 'tme': collections.Counter(),
                                           'fge': collections.Counter(), 'abe': collections.Counter(),
                                           'iip': collections.Counter(), 'fst': collections.Counter()})
    for s in sorted(os.listdir(fdir)):
        p = os.path.join(fdir, s, 'draws.ndjson')
        if not os.path.exists(p): continue
        with open(p) as f:
            for line in f:
                r = json.loads(line)
                if r['vu1'] < 0: continue
                k = (r['vu1'], r['vu1_hash'])
                a = agg[k]
                a['draws'] += 1
                a['prims'] += r['prims']
                a['scenes'].add(s)
                pr = int(r['prim'], 16)
                a['prim'][PRIM[pr & 7]] += r['prims']
                a['tme'][(pr >> 4) & 1] += 1
                a['fge'][(pr >> 5) & 1] += 1
                a['abe'][(pr >> 6) & 1] += 1
                a['iip'][(pr >> 3) & 1] += 1
                a['fst'][(pr >> 8) & 1] += 1
                al = int(r['alpha'], 16)
                a['blend']['%d%d%d%d' % (al & 3, (al >> 2) & 3, (al >> 4) & 3, (al >> 6) & 3)] += 1
    byhash = collections.defaultdict(list)
    for n, (e, h) in bins.items(): byhash[(e, h)].append(n)
    print('# bins -> drawdbg hash')
    for n, (e, h) in sorted(bins.items(), key=lambda x: x[1]):
        a = agg.get((e, h))
        print(f"{n}  entry {e:04x}  #{h}  draws {a['draws'] if a else 0}  prims {a['prims'] if a else 0}")
    print('\n# framedbg (entry, hash) -> bin')
    for (e, h), a in sorted(agg.items(), key=lambda x: -x[1]['prims']):
        print(f"@{e:04x} #{h}  bin {','.join(byhash.get((e, h), ['-']))}  draws {a['draws']} prims {a['prims']} "
              f"scenes {len(a['scenes'])} prim {dict(a['prim'])} tme {dict(a['tme'])} fge {dict(a['fge'])} "
              f"abe {dict(a['abe'])} iip {dict(a['iip'])} fst {dict(a['fst'])} blend {dict(a['blend'].most_common(5))}")

main()
