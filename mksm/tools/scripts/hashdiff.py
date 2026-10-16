# hashdiff.py a.hash b.hash [...]  compare PS2_HASH_LOG files (lines "frame total [section=hash ...]") against the first.
# Prints the frame range both cover, the first divergent frame, and (with PS2_HASH_SPLIT logs) the sections that differ there
# and the first frame each section diverges.
import sys


def load(path):
    rows = {}
    with open(path) as f:
        for line in f:
            parts = line.split()
            if len(parts) < 2 or not parts[0].isdigit():
                continue
            rows[int(parts[0])] = (parts[1], dict(p.split('=', 1) for p in parts[2:]))
    return rows


base_path = sys.argv[1]
base = load(base_path)
for path in sys.argv[2:]:
    other = load(path)
    common = sorted(set(base) & set(other))
    if not common:
        print(f'{path}: no common frames')
        continue
    first = next((f for f in common if base[f][0] != other[f][0]), None)
    if first is None:
        print(f'{path}: IDENTICAL over {len(common)} frames ({common[0]}-{common[-1]})')
        continue
    same = sum(1 for f in common if base[f][0] == other[f][0])
    print(f'{path}: DIVERGES at frame {first} ({same}/{len(common)} frames equal, range {common[0]}-{common[-1]})')
    secs = base[first][1]
    if secs:
        bad = [k for k in secs if other[first][1].get(k) != secs[k]]
        print(f'  sections differing at {first}: {" ".join(bad)}')
        firsts = {}
        for f in common:
            for k, v in base[f][1].items():
                if k not in firsts and other[f][1].get(k) != v:
                    firsts[k] = f
        print('  first divergence per section: ' + ' '.join(f'{k}@{v}' for k, v in sorted(firsts.items(), key=lambda kv: kv[1])))
