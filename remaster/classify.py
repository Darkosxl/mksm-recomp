# Draw classification (remaster step 3): sorts every draw group of every framedbg scene into a category with the
# first matching rule of remaster/categories.json, then reports coverage and writes, per category, a contact sheet of
# what it draws (union of the isolation masks of its groups) into remaster-data/framedbg/categories/.
# usage: classify.py <framedbg dir> <rules json> [scene...]
# Rule fields (all optional, all must match): path [1,2,3], vu1 [code-hash prefixes], ra [hex], prim [point line
# linestrip tri tristrip trifan sprite], tme/abe/fge (bool), blend ["ABCD" digits of ALPHA], psm [CT32 T8 T4 ...],
# texw/texh (max), target (main|offscreen), fullscreen (bool: covers ≥ 90% of the 640x224 field).
import json, sys
from collections import defaultdict
from pathlib import Path

import numpy as np
from PIL import Image, ImageDraw

root, rules = Path(sys.argv[1]), json.load(open(sys.argv[2]))
scenes = sys.argv[3:] or sorted(p.parent.name for p in root.glob('*/summary.json'))
PSM = {0x00: 'CT32', 0x01: 'CT24', 0x02: 'CT16', 0x0A: 'CT16S', 0x13: 'T8', 0x14: 'T4', 0x1B: 'T8H', 0x24: 'T4HL', 0x2C: 'T4HH'}
PRIM = ['point', 'line', 'linestrip', 'tri', 'tristrip', 'trifan', 'sprite', '?']


def features(rs, main_fbp):
    r = rs[0]
    p, t0, fr, al = (int(r[k], 16) for k in ('prim', 'tex0', 'frame', 'alpha'))
    x0, y0 = min(x['bbox'][0] for x in rs), min(x['bbox'][1] for x in rs)
    x1, y1 = max(x['bbox'][2] for x in rs), max(x['bbox'][3] for x in rs)
    full = (min(x1, 640) - max(x0, 0)) * (min(y1, 224) - max(y0, 0)) >= 0.9 * 640 * 224
    return {'path': r['path'], 'vu1': r['vu1_hash'] if r['vu1'] >= 0 else '', 'ra': r['ra'].lstrip('0'), 'prim': PRIM[p & 7],
            'tme': bool(p >> 4 & 1), 'abe': bool(p >> 6 & 1), 'fge': bool(p >> 5 & 1), 'blend': f'{al & 3}{al >> 2 & 3}{al >> 4 & 3}{al >> 6 & 3}',
            'psm': PSM.get(t0 >> 20 & 63, '?') if p >> 4 & 1 else '', 'texw': 1 << (t0 >> 26 & 15), 'texh': 1 << (t0 >> 30 & 15),
            'target': 'main' if (fr & 0x1FF) in main_fbp else 'offscreen', 'fullscreen': full,
            'prims': sum(x['prims'] for x in rs), 'draws': len(rs), 'bbox': [x0, y0, x1, y1]}


def match(rule, f):
    m = rule.get('match', {})
    for k, v in m.items():
        if k == 'vu1':
            if not any(f['vu1'].startswith(h) for h in v): return False
        elif k in ('texw', 'texh'):
            if not (f['psm'] and f[k] <= v): return False
        elif isinstance(v, list):
            if f[k] not in v: return False
        elif f[k] != v:
            return False
    return True


per_cat = defaultdict(lambda: defaultdict(lambda: {'groups': 0, 'prims': 0, 'masks': []}))
report, unclassified = {}, []
for scene in scenes:
    d = root / scene
    summ = json.load(open(d / 'summary.json'))
    frame = summ['frame']
    draws = [json.loads(l) for l in open(d / 'draws.ndjson')]
    draws = [r for r in draws if r['after_vblank'] == frame - 1]
    if not draws: continue
    fbp = defaultdict(int)
    for r in draws: fbp[int(r['frame'], 16) & 0x1FF] += r['prims']
    main_fbp = {max(fbp, key=fbp.get)}
    groups = defaultdict(list)
    for r in draws: groups[r['group']].append(r)
    cats = defaultdict(lambda: [0, 0])
    for g, rs in groups.items():
        f = features(rs, main_fbp)
        cat = next((rule['category'] for rule in rules if match(rule, f)), 'unclassified')
        cats[cat][0] += 1; cats[cat][1] += f['prims']
        iso = d / 'iso' / f'{g}.png'
        c = per_cat[cat][scene]
        c['groups'] += 1; c['prims'] += f['prims']
        if iso.exists(): c['masks'].append(iso)
        if cat == 'unclassified': unclassified.append((scene, g, f))
    report[scene] = {k: {'groups': v[0], 'prims': v[1]} for k, v in sorted(cats.items(), key=lambda kv: -kv[1][1])}

out = root / 'categories'
out.mkdir(exist_ok=True)
for f in out.glob('*.png'): f.unlink()
overview = []
for cat, sc in sorted(per_cat.items(), key=lambda kv: -sum(c['prims'] for c in kv[1].values())):
    tiles = []
    for scene, c in sorted(sc.items(), key=lambda kv: (not kv[1]['masks'], -kv[1]['prims'])):
        base = np.asarray(Image.open(root / scene / 'frame.png').convert('RGB'), np.int16)
        mask = np.zeros(base.shape[:2], bool)
        for p in c['masks']:
            mask |= np.abs(np.asarray(Image.open(p).convert('RGB'), np.int16) - base).sum(2) > 6
        view = (base * 0.3).astype(np.uint8)
        view[mask] = (base[mask] * 0.5 + np.array([255, 60, 60]) * 0.5).astype(np.uint8)
        im = Image.fromarray(view).resize((320, 224))
        ImageDraw.Draw(im).text((4, 4), f"{scene}: {c['groups']} groups, {c['prims']} prims{'' if c['masks'] else ' (no isolation)'}", fill=(255, 255, 0))
        tiles.append(im)
    best = tiles[0].copy()
    ImageDraw.Draw(best).rectangle((0, 200, 320, 224), fill=(0, 0, 0))
    ImageDraw.Draw(best).text((4, 206), f"{cat}: {sum(c['prims'] for c in sc.values())} prims in {len(sc)} scenes", fill=(255, 255, 255))
    overview.append(best)
    sheet = Image.new('RGB', (320 * min(4, len(tiles)), 224 * ((len(tiles) + 3) // 4)))
    for i, im in enumerate(tiles): sheet.paste(im, ((i % 4) * 320, (i // 4) * 224))
    sheet.save(out / f'{cat}.png')

sheet = Image.new('RGB', (320 * 4, 224 * ((len(overview) + 3) // 4)))
for i, im in enumerate(overview): sheet.paste(im, ((i % 4) * 320, (i // 4) * 224))
sheet.save(out / 'overview.png')
json.dump({'scenes': report, 'unclassified': [{'scene': s, 'group': g, **f} for s, g, f in unclassified]},
          open(out / 'report.json', 'w'), indent=1, default=str)
tot = defaultdict(int)
for sc in report.values():
    for k, v in sc.items(): tot[k] += v['prims']
print('primitives per category (all scenes):', dict(sorted(tot.items(), key=lambda kv: -kv[1])))
print(f'unclassified groups: {len(unclassified)}')
for s, g, f in sorted(unclassified, key=lambda x: -x[2]['prims'])[:25]:
    print(f"  {s:8} {g} p{f['path']} vu1 {f['vu1'][:8] or '-':8} ra {f['ra']:7} {f['prim']:8} T{int(f['tme'])}A{int(f['abe'])}F{int(f['fge'])} "
          f"bl{f['blend']} {f['psm']}{f['texw']}x{f['texh'] if f['psm'] else ''} {f['target']} full{int(f['fullscreen'])} prims {f['prims']} bbox {f['bbox']}")
