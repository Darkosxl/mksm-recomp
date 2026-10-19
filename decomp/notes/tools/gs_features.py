# GS feature census per draw category (native-renderer design, research only).
# Reads remaster-data/framedbg/<scene>/draws.ndjson + summary.json and remaster/categories.json, assigns each draw
# group to a category exactly as remaster/classify.py does (first matching rule, features of the group's first draw,
# frame = summary.frame - 1), then tallies the decoded GS state of every draw in the group.
# usage: python3 -I gs_features.py <framedbg dir> <categories.json> [--all-frames] > out.txt
import json, sys
from collections import defaultdict
from pathlib import Path

root, rules = Path(sys.argv[1]), json.load(open(sys.argv[2]))
all_frames = '--all-frames' in sys.argv
PSM = {0x00: 'CT32', 0x01: 'CT24', 0x02: 'CT16', 0x0A: 'CT16S', 0x13: 'T8', 0x14: 'T4', 0x1B: 'T8H', 0x24: 'T4HL',
       0x2C: 'T4HH', 0x30: 'Z32', 0x31: 'Z24', 0x32: 'Z16', 0x3A: 'Z16S'}
ZPSM = {0: 'Z32', 1: 'Z24', 2: 'Z16', 0xA: 'Z16S'}
PRIM = ['point', 'line', 'linestrip', 'tri', 'tristrip', 'trifan', 'sprite', '?']
ATST = ['NEVER', 'ALWAYS', 'LESS', 'LEQUAL', 'EQUAL', 'GEQUAL', 'GREATER', 'NOTEQUAL']
AFAIL = ['KEEP', 'FB_ONLY', 'ZB_ONLY', 'RGB_ONLY']
ZTST = ['NEVER', 'ALWAYS', 'GEQUAL', 'GREATER']
TFX = ['MODULATE', 'DECAL', 'HIGHLIGHT', 'HIGHLIGHT2']
MMIN = ['NEAREST', 'LINEAR', 'N_MIP_N', 'N_MIP_L', 'L_MIP_N', 'L_MIP_L', '?6', '?7']
WM = ['REPEAT', 'CLAMP', 'REGION_CLAMP', 'REGION_REPEAT']
ABD = ['Cs', 'Cd', '0', '?']
C = ['As', 'Ad', 'FIX', '?']


def bits(v, lo, n): return (v >> lo) & ((1 << n) - 1)


def features(rs, main_fbp):  # copy of classify.py features()
    r = rs[0]
    p, t0, fr, al = (int(r[k], 16) for k in ('prim', 'tex0', 'frame', 'alpha'))
    x0, y0 = min(x['bbox'][0] for x in rs), min(x['bbox'][1] for x in rs)
    x1, y1 = max(x['bbox'][2] for x in rs), max(x['bbox'][3] for x in rs)
    full = (min(x1, 640) - max(x0, 0)) * (min(y1, 224) - max(y0, 0)) >= 0.9 * 640 * 224
    return {'path': r['path'], 'vu1': r['vu1_hash'] if r['vu1'] >= 0 else '', 'ra': r['ra'].lstrip('0'), 'prim': PRIM[p & 7],
            'tme': bool(p >> 4 & 1), 'abe': bool(p >> 6 & 1), 'fge': bool(p >> 5 & 1), 'blend': f'{al & 3}{al >> 2 & 3}{al >> 4 & 3}{al >> 6 & 3}',
            'psm': PSM.get(t0 >> 20 & 63, '?') if p >> 4 & 1 else '', 'texw': 1 << (t0 >> 26 & 15), 'texh': 1 << (t0 >> 30 & 15),
            'target': 'main' if (fr & 0x1FF) in main_fbp else 'offscreen', 'fullscreen': full,
            'prims': sum(x['prims'] for x in rs)}


def match(rule, f):
    for k, v in rule.get('match', {}).items():
        if k == 'vu1':
            if not any(f['vu1'].startswith(h) for h in v): return False
        elif k in ('texw', 'texh'):
            if not (f['psm'] and f[k] <= v): return False
        elif isinstance(v, list):
            if f[k] not in v: return False
        elif f[k] != v: return False
    return True


def decode(r):
    p = int(r['prim'], 16); t0 = int(r['tex0'], 16); t1 = int(r['tex1'], 16); cl = int(r['clamp'], 16)
    al = int(r['alpha'], 16); te = int(r['test'], 16); fr = int(r['frame'], 16); zb = int(r['zbuf'], 16)
    tme, abe, fge = bits(p, 4, 1), bits(p, 6, 1), bits(p, 5, 1)
    d = {'prim': PRIM[p & 7], 'iip': bits(p, 3, 1), 'tme': tme, 'fge': fge, 'abe': abe, 'aa1': bits(p, 7, 1), 'fst': bits(p, 8, 1)}
    if abe:
        a, b, c, dd = bits(al, 0, 2), bits(al, 2, 2), bits(al, 4, 2), bits(al, 6, 2)
        d['blend'] = f'({ABD[a]}-{ABD[b]})*{C[c]}+{ABD[dd]}'
        d['abcd'] = f'{a}{b}{c}{dd}'
        d['fix'] = bits(al, 32, 8) if c == 2 else None
    ate = bits(te, 0, 1)
    d['atest'] = f'{ATST[bits(te, 1, 3)]} {bits(te, 4, 8):#x} {AFAIL[bits(te, 12, 2)]}' if ate else 'off'
    d['date'] = f'DATE datm{bits(te, 15, 1)}' if bits(te, 14, 1) else ''
    zte = bits(te, 16, 1)
    d['ztest'] = ZTST[bits(te, 17, 2)] if zte else 'ZTE0'
    d['zmsk'] = bits(zb, 32, 1)
    d['zpsm'] = ZPSM.get(bits(zb, 24, 4), '?')
    d['zbp'] = bits(zb, 0, 9)
    d['fbp'] = bits(fr, 0, 9); d['fbw'] = bits(fr, 16, 6); d['fpsm'] = PSM.get(bits(fr, 24, 6), '?'); d['fbmsk'] = bits(fr, 32, 32)
    d['fba'] = int(r['fba'], 16) & 1
    sc = int(r['scissor'], 16)
    d['scissor'] = f'{bits(sc,0,11)}-{bits(sc,16,11)},{bits(sc,32,11)}-{bits(sc,48,11)}'
    if tme:
        tpsm = bits(t0, 20, 6)
        d['tpsm'] = PSM.get(tpsm, hex(tpsm)); d['tw'] = 1 << bits(t0, 26, 4); d['th'] = 1 << bits(t0, 30, 4)
        d['tcc'] = bits(t0, 34, 1); d['tfx'] = TFX[bits(t0, 35, 2)]
        d['cpsm'] = PSM.get(bits(t0, 51, 4), '?') if tpsm in (0x13, 0x14, 0x1B, 0x24, 0x2C) else ''
        d['csm'] = bits(t0, 55, 1); d['csa'] = bits(t0, 56, 5); d['cld'] = bits(t0, 61, 3)
        d['tbp'] = bits(t0, 0, 14); d['tbw'] = bits(t0, 14, 6); d['cbp'] = bits(t0, 37, 14)
        d['lcm'] = bits(t1, 0, 1); d['mxl'] = bits(t1, 2, 3); d['mmag'] = 'L' if bits(t1, 5, 1) else 'N'
        d['mmin'] = MMIN[bits(t1, 6, 3)]; d['mtba'] = bits(t1, 9, 1); d['l'] = bits(t1, 19, 2)
        k = bits(t1, 32, 12); k = k - 4096 if k & 0x800 else k; d['k'] = k / 16.0
        d['wms'] = WM[bits(cl, 0, 2)]; d['wmt'] = WM[bits(cl, 2, 2)]
        d['clampv'] = cl
        texa = int(r['texa'], 16)
        d['texa'] = f'ta0={bits(texa,0,8):#x} aem={bits(texa,15,1)} ta1={bits(texa,32,8):#x}'
    return d


cats = defaultdict(lambda: defaultdict(lambda: {'draws': 0, 'prims': 0, 'scenes': set(), 'fbp': set(), 'zbp': set(), 'k': set(),
                                                 'fix': set(), 'sc': set(), 'csa': set(), 'tex': set(), 'clamp': set(), 'texa': set(),
                                                 'cld': set(), 'csm': set()}))
blends = defaultdict(lambda: {'draws': 0, 'prims': 0, 'cats': set(), 'fix': set()})
catprims = defaultdict(int)
scenes = sorted(p.parent.name for p in root.glob('*/summary.json'))
for scene in scenes:
    d = root / scene
    summ = json.load(open(d / 'summary.json'))
    frame = summ['frame']
    draws = [json.loads(l) for l in open(d / 'draws.ndjson')]
    cls_draws = [r for r in draws if r['after_vblank'] == frame - 1]
    fbp = defaultdict(int)
    for r in cls_draws: fbp[int(r['frame'], 16) & 0x1FF] += r['prims']
    main_fbp = {max(fbp, key=fbp.get)}
    groups = defaultdict(list)
    for r in cls_draws: groups[r['group']].append(r)
    gcat = {g: next((rule['category'] for rule in rules if match(rule, features(rs, main_fbp))), 'unclassified') for g, rs in groups.items()}
    use = draws if all_frames else cls_draws
    for r in use:
        cat = gcat.get(r['group'], 'NEW-GROUP')
        x = decode(r)
        catprims[cat] += r['prims']
        key = (x['prim'], f"iip{x['iip']} fst{x['fst']} aa1{x['aa1']}", 'FGE' if x['fge'] else '-',
               x.get('blend', 'ABE0'), x['atest'], x['date'], f"Z {x['ztest']} zmsk{x['zmsk']} {x['zpsm']}",
               f"F {x['fpsm']} fbw{x['fbw']} fbmsk{x['fbmsk']:#x} fba{x['fba']}",
               (f"T {x['tpsm']}{'/' + x['cpsm'] if x['cpsm'] else ''} {x['tfx']} tcc{x['tcc']} mag{x['mmag']} min{x['mmin']} "
                f"mxl{x['mxl']} lcm{x['lcm']} L{x['l']} mtba{x['mtba']} {x['wms']}/{x['wmt']}") if x['tme'] else 'T-')
        c = cats[cat][key]
        c['draws'] += 1; c['prims'] += r['prims']; c['scenes'].add(scene); c['fbp'].add(x['fbp']); c['zbp'].add(x['zbp'])
        c['sc'].add(x['scissor'])
        if x.get('fix') is not None: c['fix'].add(x['fix'])
        if x['tme']:
            c['k'].add(x['k']); c['csa'].add(x['csa']); c['tex'].add(f"{x['tw']}x{x['th']}"); c['texa'].add(x['texa'])
            c['cld'].add(x['cld']); c['csm'].add(x['csm'])
            if x['wms'].startswith('REGION') or x['wmt'].startswith('REGION'): c['clamp'].add(x['clampv'])
        if x['abe']:
            b = blends[(x['abcd'], x['blend'])]
            b['draws'] += 1; b['prims'] += r['prims']; b['cats'].add(cat)
            if x['fix'] is not None: b['fix'].add(x['fix'])


def rng(s):
    s = sorted(s)
    return f'{s[0]}..{s[-1]} ({len(s)})' if len(s) > 4 else ','.join(map(str, s))


for cat in sorted(cats, key=lambda c: -catprims[c]):
    print(f'\n=== {cat}: {catprims[cat]} prims, {len(cats[cat])} state combos')
    for key, c in sorted(cats[cat].items(), key=lambda kv: -kv[1]['prims']):
        print(f"  [{c['draws']:4d} draws {c['prims']:6d} prims] " + ' | '.join(key))
        extra = f"      scenes={','.join(sorted(c['scenes']))} fbp={rng({hex(v) for v in c['fbp']})} zbp={rng({hex(v) for v in c['zbp']})}"
        if c['fix']: extra += f" FIX={rng(c['fix'])}"
        if c['k']: extra += f" K={rng(c['k'])} tex={rng(c['tex'])} csa={rng(c['csa'])} cld={rng(c['cld'])} csm={rng(c['csm'])} texa={rng(c['texa'])}"
        if c['clamp']: extra += f" region_clamp={rng({hex(v) for v in c['clamp']})}"
        extra += f" scissor={rng(c['sc'])}"
        print(extra)
print('\n=== blend equations (ABCD, Cv = (A-B)*C>>7 + D)')
for (abcd, eq), b in sorted(blends.items(), key=lambda kv: -kv[1]['prims']):
    print(f"  {abcd} {eq:22s} draws={b['draws']:5d} prims={b['prims']:6d} FIX={rng(b['fix']) if b['fix'] else '-'} cats={','.join(sorted(b['cats']))}")
print('\n=== distinct (ABCD,FIX) pairs:', sum(max(1, len(b['fix'])) for b in blends.values()))
