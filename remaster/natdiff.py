# Per-category diff of the native renderer against the emulated one (decomp/notes/native-renderer.md §5.2, stage 0 tool;
# remaster/natdiff.sh runs the scene). Two steps:
#   natdiff.py groups <draw dump dir> <category>   the PS2_DRAW_SKIP list that isolates the category: every draw group of
#       the dumped frames that classify.py's first-match rules (remaster/categories.json) put elsewhere, and the category's
#       groups whose VU1 program the native path does not draw; the clear is kept, and so are the native groups of the
#       category a pass blends over (UNDER: the character highlight and shading passes read the base pass's Ad and Cd).
#       Writes groups.json next to the dump.
#   natdiff.py compare <PS2_NATIVE_DUMP dir> [--scene s --category c --out file]   reads the run the runtime dumped (the
#       emulated frame and Z buffer before the run of native draws, after it, and the native target after it, all at the
#       output resolution) and compares them inside the category's mask: the pixels the category's draws changed in either
#       path (colour or Z), as framedbg's isolation masks do. Writes heatmap.png (max |delta| over R, G, B: black 0, then
#       blue 1-2, yellow 3-8, red above; outside the mask the emulated frame, dimmed), emu.png, nat.png, and prints one JSON
#       line: max |delta| per channel, % of mask pixels with any channel |delta| > 2, PSNR over the mask, depth mismatches.
# usage: python3 -I remaster/natdiff.py groups|compare ...
import importlib.util
import json
import math
import sys
from collections import defaultdict
from pathlib import Path

import numpy as np
from PIL import Image

HERE = Path(__file__).resolve().parent
# VU1 programs each category's native path draws (runtime/src/native.hpp)
CHARACTER = ('672fef39', 'ad5f3626', '51bdaf8f', 'c77204b7', '2f9dff01', '95a24514')
NATIVE = {'world': ('567ce7d8', '002c80ed', '50bda0e2'), 'character': CHARACTER, 'character_highlight': CHARACTER, 'character_shading': CHARACTER}
KEEP = {'clear'}
# categories drawn over another one they read (Ad, Cd): its native groups stay in, so the difference is the category's own
# on top of a base the native path draws exactly (character: 0 differences)
UNDER = {'character_highlight': ('character',), 'character_shading': ('character',)}


def classify_module():
    spec = importlib.util.spec_from_file_location('classify', HERE / 'classify.py')
    mod = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(mod)
    return mod


def groups(dump, category):
    cls = classify_module()
    rules = json.load(open(HERE / 'categories.json'))
    draws = [json.loads(l) for l in open(Path(dump) / 'draws.ndjson')]
    per_frame = defaultdict(lambda: defaultdict(int))
    for r in draws: per_frame[r['after_vblank']][int(r['frame'], 16) & 0x1FF] += r['prims']
    main_fbp = {max(f, key=f.get) for f in per_frame.values()}
    by_group = defaultdict(list)
    for r in draws: by_group[r['group']].append(r)
    native = NATIVE.get(category, ())
    skip, kept, report = [], [], defaultdict(lambda: [0, 0])
    for g, rs in by_group.items():
        f = cls.features(rs, main_fbp)
        cat = next((rule['category'] for rule in rules if cls.match(rule, f)), 'unclassified')
        ours = cat == category or cat in UNDER.get(category, ())
        mine = ours and any(f['vu1'].startswith(h) for h in native)
        why = ('native' if cat == category else f'native {cat}') if mine else 'kept' if cat in KEEP else f'{cat} (not native)' if ours else cat
        report[why][0] += 1
        report[why][1] += f['prims']
        (kept if mine or cat in KEEP else skip).append(g)
    if not any(r[0] for k, r in report.items() if k == 'native'):
        sys.exit(f'no {category} groups with a native program in {dump}')
    json.dump({'category': category, 'skip': sorted(skip), 'kept': sorted(kept), 'groups': {k: {'groups': v[0], 'prims': v[1]} for k, v in report.items()}},
              open(Path(dump) / 'groups.json', 'w'), indent=1)
    print(','.join(sorted(skip)))


def heat(d):
    out = np.zeros(d.shape + (3,), np.uint8)
    out[(d >= 1) & (d <= 2)] = (40, 90, 255)
    out[(d >= 3) & (d <= 8)] = (255, 220, 0)
    out[d > 8] = (255, 40, 40)
    return out


def compare(dump, scene='', category='', out_file=None):
    dump = Path(dump)
    meta = json.load(open(dump / 'meta.json'))
    w, h = meta['width'], meta['height']

    def rgba(name):
        return np.fromfile(dump / f'{name}.rgba', np.uint8).reshape(h, w, 4)

    def zbuf(name):
        return np.fromfile(dump / f'{name}.z', np.uint32).reshape(h, w)

    pre, emu, nat = rgba('pre'), rgba('emu'), rgba('nat')
    pz, ez, nz = zbuf('pre'), zbuf('emu'), zbuf('nat')
    rgb = lambda a: a[..., :3].astype(np.int32)
    emu_changed = (rgb(emu) != rgb(pre)).any(2) | (ez != pz)
    nat_changed = (rgb(nat) != rgb(pre)).any(2) | (nz != pz)
    mask = emu_changed | nat_changed
    d = np.abs(rgb(emu) - rgb(nat))
    dmax = d.max(2)
    px = int(mask.sum())
    md = d[mask]
    mse = float((md.astype(np.float64) ** 2).mean()) if px else 0.0
    zmis = mask & (ez != nz)
    zdelta = np.abs(ez.astype(np.int64) - nz.astype(np.int64))[zmis]
    result = {
        'scene': scene, 'category': category, 'frame': meta['frame'], 'size': [w, h], 'scale': [meta['sx'], meta['sy']], 'mask_px': px,
        'max_abs': [int(md[:, c].max()) if px else 0 for c in range(3)],
        'pct_gt2': round(100.0 * float((dmax[mask] > 2).mean()), 3) if px else 0.0,
        'pct_nonzero': round(100.0 * float((dmax[mask] > 0).mean()), 3) if px else 0.0,
        'psnr': round(10 * math.log10(255 ** 2 / mse), 2) if mse > 0 else math.inf,
        'depth_mismatch_px': int(zmis.sum()), 'depth_mismatch_pct': round(100.0 * float(zmis.sum()) / px, 3) if px else 0.0,
        'depth_mismatch_median': int(np.median(zdelta)) if zdelta.size else 0,
        'only_emulated_px': int((emu_changed & ~nat_changed).sum()), 'only_native_px': int((nat_changed & ~emu_changed).sum()),
        'native': {k: meta[k] for k in ('runs', 'batches', 'drawn', 'draws', 'triangles', 'isolated', 'unsupported')},
    }
    c = meta.get('checks', [])
    if c and c[13]:
        result['oracle'] = {'batches': c[13], 'vertices': c[0], 'x': c[1], 'y': c[2], 'z': c[3], 'f': c[4], 'adc_window': c[5:8], 's': c[8], 't': c[9], 'q': c[10],
                            'rgba': c[11], 'any': c[12], 'prim_count_batches': meta['prim_mismatch'], 'oracle_batches': meta['oracle_batches'],
                            'cross_batch_kicks': meta['cross_batch']}
    view = (rgb(emu) * 0.35).astype(np.uint8)
    hm = heat(dmax)
    view[mask] = hm[mask]
    view[mask & (dmax == 0)] = (0, 0, 0)
    Image.fromarray(view).save(dump / 'heatmap.png')
    Image.fromarray(emu[..., :3].copy()).save(dump / 'emu.png')
    Image.fromarray(nat[..., :3].copy()).save(dump / 'nat.png')
    zm = np.zeros((h, w, 3), np.uint8)
    zm[mask] = (60, 60, 60)
    zm[zmis] = (255, 40, 40)
    Image.fromarray(zm).save(dump / 'depth.png')
    line = json.dumps(result)
    print(line)
    if out_file:
        with open(out_file, 'a') as f:
            f.write(line + '\n')
    return result


def main():
    if len(sys.argv) < 3:
        sys.exit(__doc__ or 'usage: natdiff.py groups|compare ...')
    if sys.argv[1] == 'groups':
        groups(sys.argv[2], sys.argv[3])
    elif sys.argv[1] == 'compare':
        a = sys.argv[3:]
        opt = lambda k: a[a.index(k) + 1] if k in a else ''
        compare(sys.argv[2], opt('--scene'), opt('--category'), opt('--out') or None)
    else:
        sys.exit('usage: natdiff.py groups|compare ...')


if __name__ == '__main__':
    main()
