# Print the ordered draw list of one framedbg scene (classification frame) with category and render-target links.
# usage: python3 -I gs_chain.py <framedbg dir> <categories.json> <scene> [skip-cats,comma-separated]
import json, sys, importlib.util
from collections import defaultdict
from pathlib import Path
here = Path(__file__).resolve().parent
spec = importlib.util.spec_from_file_location('gf', here / 'gs_features.py')
root, rules_p, scene = Path(sys.argv[1]), sys.argv[2], sys.argv[3]
skip = set(sys.argv[4].split(',')) if len(sys.argv) > 4 else set()
sys.argv = [sys.argv[0], str(root), rules_p, '--none']
import io, contextlib
gf = importlib.util.module_from_spec(spec)
with contextlib.redirect_stdout(io.StringIO()): spec.loader.exec_module(gf)
d = root / scene
frame = json.load(open(d / 'summary.json'))['frame']
draws = [json.loads(l) for l in open(d / 'draws.ndjson')]
draws = [r for r in draws if r['after_vblank'] == frame - 1]
fbp = defaultdict(int)
for r in draws: fbp[int(r['frame'], 16) & 0x1FF] += r['prims']
main = {max(fbp, key=fbp.get)}
groups = defaultdict(list)
for r in draws: groups[r['group']].append(r)
rules = json.load(open(rules_p))
gcat = {g: next((ru['category'] for ru in rules if gf.match(ru, gf.features(rs, main))), '?') for g, rs in groups.items()}
prev = None
run = 0
for r in draws:
    cat = gcat[r['group']]
    x = gf.decode(r)
    if cat in skip:
        if prev != cat: print(f'   ... {cat}'); prev = cat
        continue
    prev = cat
    t = f"tex {x['tpsm']} tbp={x['tbp']:#x}(fbp {x['tbp']/32:.1f}) tbw={x['tbw']} {x['tw']}x{x['th']} {x['tfx']} mag{x['mmag']}" if x['tme'] else 'notex'
    print(f"{r['id']:4d} {cat:19s} {x['prim']:8s} p{r['prims']:4d} bbox={r['bbox']} F fbp={x['fbp']:#x} {x['fpsm']} fbw={x['fbw']} msk={x['fbmsk']:#x} fba{x['fba']} Z zbp={x['zbp']:#x} {x['ztest']} zm{x['zmsk']} | {x.get('blend','ABE0')} fix={x.get('fix')} | at={x['atest']} {x['date']} | {t} sc={x['scissor']}")
