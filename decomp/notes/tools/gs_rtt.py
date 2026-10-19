# Render-to-texture links per framedbg scene: draws that sample a buffer drawn (FRAME/ZBUF) earlier in the same
# classification frame, plus draws whose texture is their own target. usage: python3 -I gs_rtt.py <framedbg dir> <categories.json>
import json, sys, importlib.util, io, contextlib
from collections import defaultdict, Counter
from pathlib import Path
here = Path(__file__).resolve().parent
spec = importlib.util.spec_from_file_location('gf', here / 'gs_features.py')
root, rules_p = Path(sys.argv[1]), sys.argv[2]
sys.argv = [sys.argv[0], str(root), rules_p]
gf = importlib.util.module_from_spec(spec)
with contextlib.redirect_stdout(io.StringIO()): spec.loader.exec_module(gf)
rules = json.load(open(rules_p))
links = Counter()
for sd in sorted(root.glob('*/summary.json')):
    scene = sd.parent.name
    frame = json.load(open(sd))['frame']
    draws = [json.loads(l) for l in open(sd.parent / 'draws.ndjson')]
    draws = [r for r in draws if r['after_vblank'] == frame - 1]
    fbp = defaultdict(int)
    for r in draws: fbp[int(r['frame'], 16) & 0x1FF] += r['prims']
    main = {max(fbp, key=fbp.get)}
    groups = defaultdict(list)
    for r in draws: groups[r['group']].append(r)
    gcat = {g: next((ru['category'] for ru in rules if gf.match(ru, gf.features(rs, main))), '?') for g, rs in groups.items()}
    written = {}  # base page -> (fmt, width) of last write
    for r in draws:
        x = gf.decode(r)
        cat = gcat[r['group']]
        if x['tme'] and x['tbp'] % 32 == 0 and x['tbp'] // 32 in written:
            src = written[x['tbp'] // 32]
            own = x['tbp'] // 32 == x['fbp']
            links[(scene, cat, f"read {x['tpsm']} tbw{x['tbw']} @fbp{x['tbp']//32:#x} (last written as {src[0]} w{src[1]} by {src[2]})",
                   f"-> {x['fpsm']} fbw{x['fbw']} @fbp{x['fbp']:#x}{' SELF' if own else ''} mag{x['mmag']}")] += 1
        elif x['tme'] and any(x['tbp'] // 32 <= b < x['tbp'] // 32 + 1 for b in written):
            links[(scene, cat, f"read unaligned tbp {x['tbp']:#x}", '')] += 1
        written[x['fbp']] = (x['fpsm'], x['fbw'], cat)
        if not x['zmsk'] and x['ztest'] != 'ZTE0': written[x['zbp']] = (x['zpsm'], x['fbw'], cat + '(Z)')
for k, n in sorted(links.items()): print(f'{n:3d}x', *k)
