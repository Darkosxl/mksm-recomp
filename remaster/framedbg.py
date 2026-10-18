# Frame debugger page: turns a PS2_DRAW_DUMP directory (framedbg.sh) into dir/index.html.
# usage: framedbg.py <dir> <scene> <frame>
# dir: draws.ndjson, frames.ndjson, batches.ndjson, gpu.txt (GPU run), frame.png, soft/draws.ndjson + soft/tex/*.pam
# (CPU-renderer run, for textures), iso/<group>.png (the frame with that group left out).
import html, json, sys
from collections import defaultdict
from pathlib import Path

import numpy as np
from PIL import Image

d, scene, frame = Path(sys.argv[1]), sys.argv[2], int(sys.argv[3])
out = d / 'html'
(out / 'tex').mkdir(parents=True, exist_ok=True)
(out / 'iso').mkdir(parents=True, exist_ok=True)

def ndjson(p):
    return [json.loads(l) for l in open(p)] if p.exists() else []

PSM = {0x00: 'CT32', 0x01: 'CT24', 0x02: 'CT16', 0x0A: 'CT16S', 0x13: 'T8', 0x14: 'T4', 0x1B: 'T8H', 0x24: 'T4HL', 0x2C: 'T4HH',
       0x30: 'Z32', 0x31: 'Z24', 0x32: 'Z16', 0x3A: 'Z16S'}
PRIM = ['point', 'line', 'linestrip', 'tri', 'tristrip', 'trifan', 'sprite', '?']
bits = lambda v, lo, n: (v >> lo) & ((1 << n) - 1)

def decode(r):
    p, t0, fr, zb, al, te = (int(r[k], 16) for k in ('prim', 'tex0', 'frame', 'zbuf', 'alpha', 'test'))
    flags = [n for i, n in ((3, 'IIP'), (4, 'TME'), (5, 'FGE'), (6, 'ABE'), (7, 'AA1'), (8, 'FST'), (10, 'FIX')) if p >> i & 1]
    out = {'prim': PRIM[p & 7] + (' ' + ' '.join(flags) if flags else ''),
           'fb': f"FBP {bits(fr, 0, 9):x} FBW {bits(fr, 16, 6)} {PSM.get(bits(fr, 24, 6), '?')} MSK {bits(fr, 32, 32):08x}",
           'z': f"ZBP {bits(zb, 0, 9):x} {PSM.get(0x30 | bits(zb, 24, 4), '?')}{' ZMSK' if bits(zb, 32, 1) else ''}",
           'alpha': f"({'Cs Cd 0 0'.split()[bits(al, 0, 2)]}-{'Cs Cd 0 0'.split()[bits(al, 2, 2)]})*{'As Ad FIX FIX'.split()[bits(al, 4, 2)]}+{'Cs Cd 0 0'.split()[bits(al, 6, 2)]} fix {bits(al, 32, 8)}",
           'test': ' '.join(x for x in (f"ATE {'NEVER ALWAYS LESS LEQUAL EQUAL GEQUAL GREATER NOTEQUAL'.split()[bits(te, 1, 3)]} {bits(te, 4, 8)}" if te & 1 else '',
                                        'DATE' if te >> 14 & 1 else '',
                                        f"Z {'NEVER ALWAYS GEQUAL GREATER'.split()[bits(te, 17, 2)]}" if te >> 16 & 1 else 'no Z') if x)}
    if p >> 4 & 1:
        out['tex'] = (f"TBP {bits(t0, 0, 14):x} TBW {bits(t0, 14, 6)} {PSM.get(bits(t0, 20, 6), '?')} {1 << bits(t0, 26, 4)}x{1 << bits(t0, 30, 4)}"
                      f"{' TCC' if bits(t0, 34, 1) else ''} {'MODULATE DECAL HIGHLIGHT HIGHLIGHT2'.split()[bits(t0, 35, 2)]}"
                      + (f" CBP {bits(t0, 37, 14):x} {PSM.get(bits(t0, 51, 4), '?')} CSA {bits(t0, 56, 5)}" if bits(t0, 20, 6) in (0x13, 0x14, 0x1B, 0x24, 0x2C) else ''))
    return out

def source(r):
    where = {1: 'VU1 XGKICK', 2: 'VIF1 DIRECT', 3: 'GIF DMA'}.get(r['path'], f"path {r['path']}")
    s = f"{where} · EE ra {r['ra']}"
    if r['vu1'] >= 0: s += f" · VU1 prog @{r['vu1']:04x} #{r['vu1_hash']}"
    if r['path'] == 3: s += f" · madr {r['madr']}"
    return s

# Draws on screen in the captured frame: issued after vblank frame-1 (checked against the isolation images below).
draws = [r for r in ndjson(d / 'draws.ndjson') if r['after_vblank'] == frame - 1]
frames = {f['after_vblank']: f for f in ndjson(d / 'frames.ndjson')}
fstat = frames.get(frame - 1, {})

# Textures come from the CPU-renderer run; the draw sequence is identical, so match by id and check the group.
soft = {r['id']: r for r in ndjson(d / 'soft' / 'draws.ndjson')}
tex_png = {}
for r in draws:
    s = soft.get(r['id'])
    key = s['tex'] if s and s['group'] == r['group'] else None
    if key and key not in tex_png:
        pam = d / 'soft' / 'tex' / f'{key}.pam'
        if pam.exists():
            raw = pam.read_bytes()
            hdr, body = raw.split(b'ENDHDR\n', 1)
            w = int(hdr.split(b'WIDTH ')[1].split()[0]); h = int(hdr.split(b'HEIGHT ')[1].split()[0])
            a = np.frombuffer(body, np.uint8).reshape(h, w, 4).astype(np.uint16)
            a[..., 3] = np.minimum(a[..., 3] * 2, 255)  # PS2 alpha: 0x80 = opaque
            img = Image.fromarray(a.astype(np.uint8), 'RGBA')
            check = Image.new('RGBA', img.size, (60, 60, 60, 255))
            check.alpha_composite(img)
            check.convert('RGB').save(out / 'tex' / f'{key}.png')
            tex_png[key] = (w, h)
    r['texkey'] = key if key in tex_png else None

# GPU time: each raster dispatch's time is shared among its draws by primitive count; other dispatches are totals.
batches = {b['seq']: b['draws'] for b in ndjson(d / 'batches.ndjson')}
gpu_draw, gpu_other = defaultdict(float), defaultdict(float)
if (d / 'gpu.txt').exists():
    for line in open(d / 'gpu.txt'):
        f = line.split()
        name, ns = f[2], int(f[3])
        seq = int(f[14]) if name == 'raster' and len(f) > 14 else None
        if seq in batches:
            total = sum(n for _, n in batches[seq]) or 1
            for i, n in batches[seq]:
                gpu_draw[i] += ns * n / total
        elif name != 'raster':
            gpu_other[name] += ns
ids = {r['id'] for r in draws}
for r in draws:
    r['gpu_us'] = gpu_draw.get(r['id'], 0) / 1e3
gpu_this = sum(v for k, v in gpu_draw.items() if k in ids) / 1e6

# Isolation: what each group draws = pixels that change when it is left out.
base = np.asarray(Image.open(d / 'frame.png').convert('RGB'), np.int16)
iso = {}
for p in sorted((d / 'iso').glob('*.png')):
    g = p.stem
    diff = np.abs(np.asarray(Image.open(p).convert('RGB'), np.int16) - base).sum(2) > 6
    view = (base * 0.35).astype(np.uint8)
    view[diff] = [255, 40, 40]
    Image.fromarray(view).resize((base.shape[1] // 2, base.shape[0] // 2)).save(out / 'iso' / f'{g}.png')
    iso[g] = int(diff.sum())

groups = defaultdict(lambda: {'draws': 0, 'prims': 0, 'cpu': 0, 'gpu': 0.0, 'tex': [], 'src': '', 'ids': [], 'kind': ''})
for r in draws:
    g = groups[r['group']]
    g['draws'] += 1; g['prims'] += r['prims']; g['cpu'] += r['cpu_ns'] / 1e3; g['gpu'] += r['gpu_us']; g['ids'].append(r['id'])
    g['src'] = source(r); g['kind'] = decode(r)['prim']
    if r['texkey'] and r['texkey'] not in g['tex']: g['tex'].append(r['texkey'])
order = sorted(groups, key=lambda k: -(groups[k]['gpu'] + groups[k]['cpu']))

Image.open(d / 'frame.png').convert('RGB').save(out / 'frame.png')
W, H = base.shape[1], base.shape[0]
e = html.escape
rows_g = []
for k in order:
    g = groups[k]
    texs = ''.join(f'<img class=t src="tex/{t}.png" title="{t} {tex_png[t][0]}x{tex_png[t][1]}">' for t in g['tex'][:6])
    isoimg = f'<img class=i src="iso/{k}.png" title="{iso[k]} px change">' if k in iso else '<span class=dim>—</span>'
    rows_g.append(f"<tr data-ids='{json.dumps(g['ids'])}'><td><code>{k}</code></td><td>{e(g['src'])}</td><td>{e(g['kind'])}</td><td class=n>{g['draws']}</td>"
                  f"<td class=n>{g['prims']}</td><td class=n>{g['cpu']:.0f}</td><td class=n>{g['gpu']:.0f}</td><td>{texs}</td><td>{isoimg}</td></tr>")
rows_d = []
for r in draws:
    x = decode(r)
    tex = f'<img class=t src="tex/{r["texkey"]}.png">' if r['texkey'] else ''
    rows_d.append(f"<tr data-ids='[{r['id']}]'><td class=n>{r['id']}</td><td><code>{r['group']}</code></td><td>{e(source(r))}</td><td>{e(x['prim'])}</td>"
                  f"<td class=n>{r['prims']}</td><td>{r['bbox']}</td><td class=n>{r['cpu_ns'] / 1e3:.0f}</td><td class=n>{r['gpu_us']:.0f}</td>"
                  f"<td>{e(x.get('tex', ''))}</td><td>{e(x['fb'])}<br>{e(x['z'])}</td><td>{e(x['alpha'])}<br>{e(x['test'])}</td><td>{tex}</td></tr>")
boxes = {r['id']: r['bbox'] for r in draws}
other = ', '.join(f'{k} {v / 1e6:.2f}' for k, v in sorted(gpu_other.items(), key=lambda kv: -kv[1]))
page = f'''<!doctype html><html lang="en"><head><meta charset="utf-8"><meta name="viewport" content="width=device-width, initial-scale=1">
<title>Frame debugger: {e(scene)} f{frame}</title><style>
:root {{ color-scheme: dark; --bg: #101114; --fg: #e6e4df; --dim: #8d8a84; --line: #2a2b31; --hl: #ffcf3f; }}
body {{ margin: 0; padding: 16px; background: var(--bg); color: var(--fg); font: 13px/1.4 system-ui, sans-serif; }}
h1 {{ font-size: 18px; margin: 0 0 4px; }} h2 {{ font-size: 15px; margin: 22px 0 6px; }}
.dim {{ color: var(--dim); }} code {{ font: 12px ui-monospace, monospace; }}
#view {{ position: relative; width: {W}px; max-width: 100%; }} #view img {{ width: 100%; display: block; }}
#view canvas {{ position: absolute; inset: 0; width: 100%; height: 100%; pointer-events: none; }}
.wrap {{ overflow-x: auto; }} table {{ border-collapse: collapse; }} td, th {{ border-bottom: 1px solid var(--line); padding: 3px 6px; text-align: left; vertical-align: top; }}
th {{ position: sticky; top: 0; background: var(--bg); cursor: pointer; }} td.n {{ text-align: right; font-variant-numeric: tabular-nums; }}
tr:hover, tr.on {{ background: #23242b; }} img.t {{ height: 40px; margin-right: 3px; image-rendering: pixelated; }} img.i {{ height: 112px; }}
</style></head><body>
<h1>{e(scene)} · frame {frame}</h1>
<div class=dim>{len(draws)} draws · {sum(r['prims'] for r in draws)} primitives · {len(groups)} groups ·
render-thread CPU: GIF parsing + drawing {fstat.get('gif_ns', 0) / 1e6:.2f} ms, of which drawing {fstat.get('draw_ns', 0) / 1e6:.2f} ms ·
GPU raster for these draws {gpu_this:.2f} ms · other GPU work in the profiled window (ms): {e(other) or '—'}</div>
<p class=dim>Hover a row to outline its draws on the frame. Times are µs in a single-threaded debug run (relative, not absolute).
Isolation = the frame with that group left out, changed pixels in red.</p>
<div id=view><img src="frame.png" alt="captured frame"><canvas id=c width={W} height={H}></canvas></div>
<h2>Groups (same source, texture, target and primitive kind), by cost</h2>
<div class=wrap><table id=g><tr><th>group</th><th>source</th><th>kind</th><th>draws</th><th>prims</th><th>CPU µs</th><th>GPU µs</th><th>textures</th><th>isolation</th></tr>{''.join(rows_g)}</table></div>
<h2>Draws in order</h2>
<div class=wrap><table id=d><tr><th>id</th><th>group</th><th>source</th><th>kind</th><th>prims</th><th>bbox</th><th>CPU µs</th><th>GPU µs</th><th>texture</th><th>target</th><th>blend / test</th><th></th></tr>{''.join(rows_d)}</table></div>
<script>
const boxes = {json.dumps(boxes)}, c = document.getElementById('c'), x = c.getContext('2d');
function show(ids) {{ x.clearRect(0, 0, c.width, c.height); x.lineWidth = 2; x.strokeStyle = '#ffcf3f';
  for (const i of ids) {{ const b = boxes[i]; if (b) x.strokeRect(b[0], b[1], Math.max(1, b[2] - b[0]), Math.max(1, b[3] - b[1])); }} }}
for (const tr of document.querySelectorAll('tr[data-ids]')) {{
  tr.addEventListener('mouseenter', () => {{ tr.classList.add('on'); show(JSON.parse(tr.dataset.ids)); }});
  tr.addEventListener('mouseleave', () => {{ tr.classList.remove('on'); show([]); }}); }}
for (const t of document.querySelectorAll('table')) t.querySelectorAll('th').forEach((th, col) => th.addEventListener('click', () => {{
  const rows = [...t.querySelectorAll('tr[data-ids]')], num = rows.every((r) => !isNaN(parseFloat(r.children[col].textContent)));
  rows.sort((a, b) => num ? parseFloat(b.children[col].textContent) - parseFloat(a.children[col].textContent) : a.children[col].textContent.localeCompare(b.children[col].textContent));
  rows.forEach((r) => t.appendChild(r)); }}));
</script></body></html>'''
(out / 'index.html').write_text(page)
summary = {'scene': scene, 'frame': frame, 'draws': len(draws), 'prims': sum(r['prims'] for r in draws), 'groups': len(groups),
           'gif_ms': fstat.get('gif_ns', 0) / 1e6, 'draw_ms': fstat.get('draw_ns', 0) / 1e6, 'gpu_raster_ms': gpu_this,
           'top_groups': [{'group': k, **{f: groups[k][f] for f in ('src', 'kind', 'draws', 'prims', 'cpu', 'gpu')}, 'iso_px': iso.get(k)} for k in order[:15]]}
json.dump(summary, open(d / 'summary.json', 'w'), indent=1)
print(out / 'index.html', json.dumps({k: summary[k] for k in ('draws', 'prims', 'groups', 'gif_ms', 'draw_ms', 'gpu_raster_ms')}))
