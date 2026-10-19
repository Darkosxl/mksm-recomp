# Vertex-alpha census from CPU-renderer traces (PS2_RTRACE=frame[,x,y] run.log): per (blend ABCD, TFX, TCC, ATST, FBA,
# FBP) the max/histogram of vertex alpha Av and the C factor values; flags states where the blend factor can exceed 0x80.
# usage: python3 -I gs_valpha.py <run.log>...
import re, sys
from collections import defaultdict, Counter
P = re.compile(r'^\[rt\] prim \d+ type (\d) iip(\d) tme(\d) fge(\d) abe(\d) fst(\d) \| frame fbp (\w+) fbw \d+ psm (\w+) msk (\w+) \| z (\w+) psm \w+ msk (\d) \| '
               r'test (\w+) alpha (\d)(\d)(\d)(\d) fix (\d+) pabe \d fba (\d) clamp \d \| tex0 tbp \w+ tbw \d+ psm (\w+) \S+ tcc (\d) tfx (\d)')
V = re.compile(r'^\[rt\]   v\d .* rgba ([0-9a-f]{8}) ')
TFX = ['MOD', 'DECAL', 'HL', 'HL2']
for f in sys.argv[1:]:
    st = defaultdict(lambda: {'n': 0, 'av': Counter()})
    cur = None
    for l in open(f, errors='replace'):
        m = P.match(l)
        if m:
            g = m.groups()
            typ, tme, abe, fbp, fpsm, msk, test = int(g[0]), int(g[2]), int(g[4]), g[6], g[7], g[8], int(g[11], 16)
            a, b, c, d, fix, fba, tpsm, tcc, tfx = g[12], g[13], g[14], g[15], int(g[16]), g[17], g[18], g[19], int(g[20])
            ate = test & 1
            key = (f'abcd={a}{b}{c}{d}' if abe else 'ABE0', f'{TFX[tfx]} tcc{tcc} tpsm{tpsm}' if tme else 'notex',
                   f'atst{(test >> 1) & 7} aref{(test >> 4) & 0xff:#x} afail{(test >> 12) & 3}' if ate else 'ate0', f'fba{fba} fbp{fbp} msk{msk} type{typ}')
            cur = st[key]; cur['n'] += 1
            continue
        m = V.match(l)
        if m and cur is not None:
            cur['av'][int(m.group(1)[6:8], 16)] += 1
    print(f'== {f}')
    for k, v in sorted(st.items(), key=lambda kv: -kv[1]['n']):
        av = v['av']
        hi = sum(n for a, n in av.items() if a > 0x80)
        print(f"  {v['n']:6d} prims {' | '.join(k)} | Av max {max(av) if av else '-':>3} >0x80 in {hi}/{sum(av.values())} verts | top {[(hex(a), n) for a, n in av.most_common(3)]}")
