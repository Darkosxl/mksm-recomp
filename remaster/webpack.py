# Web texture pack from a PS2_TEX_PACK dir (upscale.py): each <key>.pam becomes obj/<key>.<sha12>.tex, gzip -9 of its
# RGBA rows with the PNG Up filter (each byte minus the byte one row above: 2.8:1 on 1024x1024, and the browser inflates it
# with its own DecompressionStream, web/pack-worker.js). The name hashes the pixels, so a texture that didn't change keeps
# its URL (and its place in players' caches) across pack versions. The index <id>.txt (id = sha256 of it, 16 hex) has a
# line per texture, "key origW origH scale rawBytes file [maps]", under "#mksm-pack 1 gzip-up"; current.json points each
# scale at its index ({"2": id, "4": id}). --scale 2 halves the 4x pack (2:1 box average): the variant for PS2_SCALE 1-2,
# where 4x textures would shimmer (replacements have no mips).
# --maps dir: per-map dumps (harvest.sh, dir/<map>/*.pam); the maps column lists the maps each texture was seen in.
# usage: webpack.py <pack dir> <out dir> [--scale 4|2] [--maps dir] [--jobs 4]
import argparse, gzip, hashlib, json, multiprocessing, os, pathlib, sys
import numpy as np

ap = argparse.ArgumentParser()
ap.add_argument('pack'); ap.add_argument('out')
ap.add_argument('--scale', type=int, default=4, choices=(2, 4))
ap.add_argument('--maps')
ap.add_argument('--jobs', type=int, default=4)
a = ap.parse_args()
src, out = pathlib.Path(a.pack), pathlib.Path(a.out)


def read_pam(p):
    raw = p.read_bytes()
    head, _, body = raw.partition(b'ENDHDR\n')
    f = dict(l.split(b' ', 1) for l in head.split(b'\n')[1:] if b' ' in l)
    w, h = int(f[b'WIDTH']), int(f[b'HEIGHT'])
    return np.frombuffer(body, np.uint8)[:w * h * 4].reshape(h, w, 4)


def reduce(px, n):  # n:1 box average, rounded
    h, w = px.shape[:2]
    s = px.reshape(h // n, n, w // n, n, 4).astype(np.uint32).sum((1, 3))
    return ((s + n * n // 2) // (n * n)).astype(np.uint8)


def target(key, ow, oh):
    px = read_pam(src / f'{key}.pam')
    h, w = px.shape[:2]
    have = w // ow
    if w != ow * have or h != oh * have or have < a.scale or have % a.scale: sys.exit(f'{key}: {w}x{h} is not a multiple of {a.scale} x {ow}x{oh}')
    return reduce(px, have // a.scale) if have != a.scale else px


def up(px):  # PNG Up filter over RGBA rows
    rows = px.reshape(px.shape[0], -1)
    f = rows.copy()
    f[1:] -= rows[:-1]
    return f


def unup(data, h):
    return np.cumsum(np.frombuffer(data, np.uint8).reshape(h, -1), 0, dtype=np.uint8)


def convert(job):
    key, ow, oh = job
    px = target(key, ow, oh)
    h, w = px.shape[:2]
    name = key + '.' + hashlib.sha256(b'gzip-up %d %d\n' % (w, h) + px.tobytes()).hexdigest()[:12] + '.tex'
    path = out / 'obj' / name
    if not path.exists():
        tmp = path.with_suffix('.tmp')
        tmp.write_bytes(gzip.compress(up(px).tobytes(), 9, mtime=0))
        os.replace(tmp, path)
    return key, ow, oh, px.nbytes, name, path.stat().st_size


sizes = {k: (int(w), int(h)) for k, w, h in (l.split() for l in (src / 'sizes.txt').read_text().split('\n') if l.strip())}
keys = sorted(p.stem for p in src.glob('*.pam'))
if missing := [k for k in keys if k not in sizes]: sys.exit(f'{len(missing)} textures not in sizes.txt, e.g. {missing[0]}')
maps = {}
if a.maps:
    for d in sorted(p for p in pathlib.Path(a.maps).iterdir() if p.is_dir()):
        for p in d.glob('*.pam'): maps.setdefault(p.stem, []).append(d.name)
(out / 'obj').mkdir(parents=True, exist_ok=True)
with multiprocessing.get_context('fork').Pool(a.jobs) as pool:  # workers see the globals above
    done = []
    for i, r in enumerate(pool.imap(convert, [(k, *sizes[k]) for k in keys], 8)):
        done.append(r)
        if (i + 1) % 100 == 0: print(f'{i + 1}/{len(keys)}', flush=True)
lines = ['#mksm-pack 1 gzip-up'] + [f'{k} {ow} {oh} {a.scale} {n} {name}' + (' ' + ','.join(maps[k]) if k in maps else '') for k, ow, oh, n, name, _ in done]
text = '\n'.join(lines) + '\n'
pid = hashlib.sha256(text.encode()).hexdigest()[:16]
(out / f'{pid}.txt').write_text(text)
cur = out / 'current.json'
pointers = json.loads(cur.read_text()) if cur.exists() else {}
pointers[str(a.scale)] = pid
cur.with_suffix('.tmp').write_text(json.dumps(pointers, sort_keys=True) + '\n')
os.replace(cur.with_suffix('.tmp'), cur)

# Self-check: a texture decoded the way pack-worker.js does it is byte-exact with the source (or its box reduction, also
# checked against a few pixels averaged by hand).
k, ow, oh, n, name, _ = max(done, key=lambda r: r[3])
px, back = target(k, ow, oh), unup(gzip.decompress((out / 'obj' / name).read_bytes()), oh * a.scale)
if back.nbytes != n or not np.array_equal(back.reshape(px.shape), px): sys.exit(f'self-check failed: {name} does not decode to {k}.pam')
if a.scale == 2:
    s = read_pam(src / f'{k}.pam').astype(int)
    for y, x in ((0, 0), (oh, ow), (2 * oh - 1, 2 * ow - 1)):
        if list(px[y, x]) != [(s[2 * y:2 * y + 2, 2 * x:2 * x + 2, c].sum() + 2) // 4 for c in range(4)]: sys.exit(f'self-check failed: box average at {x},{y}')
total, raw = sum(r[5] for r in done), sum(r[3] for r in done)
print(f'{len(done)} textures, {raw / 2**20:.0f} MB raw -> {total / 2**20:.0f} MB ({raw / total:.2f}:1); index {pid}.txt, scale {a.scale}; self-check ok ({name})')
