# Build a texture pack from a dump: every <key>.pam scaled up 2x (Lanczos, alpha kept) into <pack>/<key>.pam.
# --tint marks replaced textures (red cast) to check which ones the pack covers in game.
# usage: makepack.py <dump dir> <pack dir> [--scale 2|4|8] [--tint] [--min 16]
import argparse, pathlib
import numpy as np
from PIL import Image

ap = argparse.ArgumentParser()
ap.add_argument('dump'); ap.add_argument('pack')
ap.add_argument('--scale', type=int, default=2, choices=(2, 4, 8))
ap.add_argument('--tint', action='store_true')
ap.add_argument('--min', type=int, default=16, help='skip textures smaller than this on either side')
a = ap.parse_args()


def read_pam(p):
    raw = p.read_bytes()
    head, _, body = raw.partition(b'ENDHDR\n')
    f = dict(l.split(b' ', 1) for l in head.split(b'\n')[1:] if b' ' in l)
    w, h = int(f[b'WIDTH']), int(f[b'HEIGHT'])
    return np.frombuffer(body, np.uint8)[:w * h * 4].reshape(h, w, 4)


out = pathlib.Path(a.pack)
out.mkdir(parents=True, exist_ok=True)
n = 0
for p in sorted(pathlib.Path(a.dump).glob('*.pam')):
    px = read_pam(p)
    h, w = px.shape[:2]
    if w < a.min or h < a.min: continue
    # PS2 alpha is 0-128: scale RGB and A as separate 8-bit planes so filtering never mixes them
    rgb = Image.fromarray(np.ascontiguousarray(px[..., :3])).resize((w * a.scale, h * a.scale), Image.LANCZOS)
    alpha = Image.fromarray(np.ascontiguousarray(px[..., 3])).resize((w * a.scale, h * a.scale), Image.LANCZOS)
    big = np.dstack([np.asarray(rgb), np.asarray(alpha)])
    if a.tint: big[..., 1:3] //= 2
    hdr = f'P7\nWIDTH {w * a.scale}\nHEIGHT {h * a.scale}\nDEPTH 4\nMAXVAL 255\nTUPLTYPE RGB_ALPHA\nENDHDR\n'.encode()
    (out / p.name).write_bytes(hdr + big.astype(np.uint8).tobytes())
    n += 1
print(f'{n} textures -> {out}')
