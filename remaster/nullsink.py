# Compares remaster/nullsink.sh hash logs (PS2_HASH_SPLIT=2): for each scene and each pair of modes, the frames both
# cover, and per section the first frame it differs and on how many frames. The R8 claim (native-renderer.md §6.2) is
# that with PS2_VU1_NULL=1 every section except "vu" (its VU1 half "vu1x") and "vifvu" is equal on every frame.
# usage: python3 -I remaster/nullsink.py <outdir> [--json file]
import json
import os
import sys

EXPECTED = {'vu', 'vu1x', 'vifvu'}  # render-internal: allowed to differ with the null sink
PAIRS = [('stn', 'st'), ('thn', 'th'), ('thn', 'st'), ('th', 'st'), ('thj', 'st'), ('thnj', 'st'), ('thnj', 'thn')]


def load(path):
    rows = {}
    try:
        with open(path) as f:
            for line in f:
                p = line.split()
                if len(p) >= 2 and p[0].isdigit():
                    rows[int(p[0])] = dict([('total', p[1])] + [kv.split('=', 1) for kv in p[2:]])
    except OSError:
        pass
    return rows


def compare(a, b):
    frames = sorted(set(a) & set(b))
    sections = {}
    for f in frames:
        for k in set(a[f]) | set(b[f]):
            if a[f].get(k) != b[f].get(k):
                s = sections.setdefault(k, [f, 0])
                s[1] += 1
    return frames, sections


def main():
    outdir = sys.argv[1]
    modes = sorted(m for m in os.listdir(outdir) if os.path.isdir(os.path.join(outdir, m)))
    scenes = sorted({s for m in modes for s in os.listdir(os.path.join(outdir, m))})
    report, bad = [], 0
    for scene in scenes:
        logs = {m: load(os.path.join(outdir, m, scene, 'hash.log')) for m in modes}
        for x, y in PAIRS:
            if not logs.get(x) or not logs.get(y):
                continue
            frames, diff = compare(logs[x], logs[y])
            unexpected = {k: v for k, v in diff.items() if k not in EXPECTED and k != 'total'}
            null = x.startswith(('stn', 'thn')) and not y.startswith(('stn', 'thn'))
            ok = bool(frames) and not unexpected and (null or not diff)
            bad += not ok
            span = f'{frames[0]}-{frames[-1]}' if frames else '-'
            secs = ' '.join(f'{k}@{v[0]}x{v[1]}' for k, v in sorted(diff.items(), key=lambda kv: kv[1][0])) or 'all equal'
            print(f'{scene:8} {x:>4} vs {y:<3} frames {span:11} ({len(frames):4}): {"ok " if ok else "BAD"} {secs}')
            report.append({'scene': scene, 'a': x, 'b': y, 'frames': [frames[0], frames[-1]] if frames else None, 'count': len(frames),
                           'differ': {k: {'first': v[0], 'frames': v[1]} for k, v in diff.items()}, 'ok': ok})
    print('PASS' if not bad else f'FAIL: {bad} comparison(s)')
    if '--json' in sys.argv:
        json.dump(report, open(sys.argv[sys.argv.index('--json') + 1], 'w'), indent=1)
    return 1 if bad else 0


sys.exit(main())
