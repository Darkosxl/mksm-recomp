#!/usr/bin/env python3
"""Chameleon's select-screen picture: the converted MKA model (chammodel.py's cham.pme2 / cham.pwf) rendered in the pose
his bones have in a savestate, framed like Reptile's pre-rendered image (file 78 entry 4, 128x256 PSMT8), as a P2N the
chameleon mod swaps into cell 7's texture slot (PS2_MOD_DATA/cham_select.p2n), and the red highlight behind it made from
his silhouette (cham_glow.p2n, like entry 5). Disc-derived: written outside git.

The highlight (entry 5, 128x128, 16 grays the game tints red) is the picture's silhouette scaled by 0.66 x 0.49 into
its texels at (22, 1), blurred and brightened (GLOW_*: fitted to Reptile's pair).

The pose: a skinned model's Bone array (0x1C0 bytes per bone; +0x50 the world matrix, rows for row vectors; +0x90 the
bind pivot) is found in EE RAM by its pivots, which are the PME2 bone positions. A vertex goes to
(p - pivot) @ R + t per bone, blended by its weights; the result is taken into the root bone's frame, so yaw 0 is his
front whatever way he faced in the game.

Usage:
  chamselect.py STATE MODEL_DIR OUT [YAW_DEG]
      STATE: a .state with Reptile or Chameleon on screen (the first matching bone array is used; a Versus fight start
      gives the fight stance); MODEL_DIR: cham.pme2 + cham.pwf; OUT: cham_select.p2n, cham_glow.p2n, cham_select.png
      (RGBA, PS2 alpha scaled to 255) and cham_select_4x.png (the 4x render, for a texture pack)
"""
import os
import struct
import sys

import numpy as np
from PIL import Image, ImageFilter

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import chammodel as cm  # noqa: E402
from chameleon import SELECT, entries, p2n  # noqa: E402
from pme2 import Model  # noqa: E402
from wad import Wad  # noqa: E402

RAM = 0x5B4                     # EE RAM's offset in a .state
BONE, PIVOT, WORLD = 0x1C0, 0x90, 0x50
X = 4                           # supersampling
LAYERED = (0, 5)                # cham.pme2's blended pages (chammodel.previews)
GLOW = (78, 5)                  # the select highlight
GLOW_MAP = (0.66, 0.49, 22, 1)  # picture -> highlight texels: scale x, y, offset x, y
GLOW_BLUR, GLOW_GAIN, GLOW_GAMMA = 3.0, 1.5, 0.7


def bone_matrices(state, piv):
    """the world matrices (n x 4 x 4) of the first Bone array in the state whose pivots are piv"""
    ram = open(state, 'rb').read()[RAM:RAM + (32 << 20)]
    f = np.frombuffer(ram[:len(ram) // 4 * 4], '<f4')
    with np.errstate(invalid='ignore'):
        hits = np.nonzero(np.abs(f - piv[1][1]) < 0.01)[0] * 4
    for h in hits:
        b0 = int(h) - 4 - PIVOT - BONE
        if b0 < 0:
            continue
        pv = np.array([struct.unpack_from('<3f', ram, b0 + i * BONE + PIVOT) for i in range(len(piv))])
        W = np.array([struct.unpack_from('<16f', ram, b0 + i * BONE + WORLD) for i in range(len(piv))]).reshape(-1, 4, 4)
        if np.abs(pv - piv).max() < 0.01 and np.abs(W[:, 3, 3] - 1).max() < 1e-3:
            return W
    raise SystemExit('%s: no bone array with these pivots' % state)


def rgba(P, N, UV, tris, pages, yaw, S):
    """S x S float RGBA (alpha 0-1): two renders (the shell blended), on black and on white"""
    k = cm.render(P, N, UV, tris, pages, yaw, S, LAYERED, bg=0)[0]
    w = cm.render(P, N, UV, tris, pages, yaw, S, LAYERED, bg=255)[0]
    a = np.clip(1 - (w - k).mean(2) / 255.0, 0, 1)
    c = np.where(a[..., None] > 1e-3, k / np.maximum(a[..., None], 1e-3), 0)
    return np.dstack([np.clip(c, 0, 255), a])


def bbox(alpha):
    ys, xs = np.nonzero(alpha > 0)
    return xs.min(), ys.min(), xs.max() + 1, ys.max() + 1


def frame(img, ref_alpha, scale):
    """img (float RGBA, any size) scaled and placed so its figure's height and feet match the reference figure's (the
    image is ref size * scale)"""
    rx0, ry0, rx1, ry1 = bbox(ref_alpha)
    x0, y0, x1, y1 = bbox(img[..., 3])
    h, w = ref_alpha.shape
    f = (ry1 - ry0) * scale / (y1 - y0)
    crop = Image.fromarray((img[y0:y1, x0:x1] * [1, 1, 1, 255]).round().astype(np.uint8), 'RGBA')
    pm = np.asarray(crop).astype(float)
    pm[..., :3] *= pm[..., 3:] / 255.0          # premultiplied, so the edges resample cleanly
    big = np.dstack([np.asarray(Image.fromarray(pm[..., i].astype(np.float32), 'F').resize(
        (max(1, round((x1 - x0) * f)), max(1, round((y1 - y0) * f))), Image.LANCZOS)) for i in range(4)])
    out = np.zeros((h * scale, w * scale, 4))
    bh, bw = big.shape[:2]
    cx = (rx0 + rx1) * scale // 2
    ox, oy = int(cx - bw // 2), int(ry1 * scale - bh)
    sx0, sy0 = max(0, -ox), max(0, -oy)
    ex, ey = min(bw, w * scale - ox), min(bh, h * scale - oy)
    out[oy + sy0:oy + ey, ox + sx0:ox + ex] = big[sy0:ey, sx0:ex]
    out[..., 3] = np.clip(out[..., 3], 0, 255)
    a = out[..., 3:] / 255.0
    out[..., :3] = np.where(a > 1e-3, out[..., :3] / np.maximum(a, 1e-3), 0)
    return np.clip(out, 0, 255)


def quantize(img):
    """8-bit RGBA image (alpha 0-255) -> CLUT (256 x RGBA, PS2 alpha 0-128; entry 0 clear) + indices"""
    a = img[..., 3]
    q = Image.fromarray(img, 'RGBA').quantize(255, method=Image.Quantize.FASTOCTREE, dither=Image.Dither.NONE)
    idx = np.asarray(q).astype(np.uint16) + 1
    pal = np.array(q.getpalette('RGBA')[:255 * 4], np.uint8).reshape(-1, 4)
    idx[a < 8] = 0
    clut = np.zeros((256, 4), np.uint8)
    clut[1:1 + len(pal)] = pal
    clut[1:, 3] = (clut[1:, 3].astype(int) * 128 + 127) // 255
    return clut, idx.astype(np.uint8)


def glow(mask):
    """the highlight for a 128x256 silhouette (bool), as Reptile's is made from his: 128x128 indices 0-15"""
    sx, sy, ox, oy = GLOW_MAP
    im = Image.fromarray(mask.astype(np.uint8) * 255).resize((round(128 * sx), round(256 * sy)), Image.BOX)
    can = Image.new('L', (128, 128), 0)
    can.paste(im, (ox, oy))
    b = np.asarray(can.filter(ImageFilter.GaussianBlur(GLOW_BLUR))) / 255.0
    return np.rint(np.minimum(b ** GLOW_GAMMA * GLOW_GAIN, 1) * 15).astype(np.uint8)


def p2n_file(disc_entry, clut, idx):
    """a P2N like the disc's: its 0x80-byte header, the CLUT in CSM1 order, the indices"""
    i = np.arange(256)
    csm1 = (i & ~0x18) | ((i & 0x8) << 1) | ((i & 0x10) >> 1)      # its own inverse
    return disc_entry[:0x80] + clut[csm1].tobytes() + idx.tobytes()


def main(argv):
    if len(argv) not in (3, 4):
        raise SystemExit(__doc__)
    state, model_dir, out = argv[:3]
    yaw = np.radians(float(argv[3]) if len(argv) == 4 else 25.0)
    pme = open(os.path.join(model_dir, 'cham.pme2'), 'rb').read()
    pwf = open(os.path.join(model_dir, 'cham.pwf'), 'rb').read()
    piv = np.array([b.pos for b in Model.from_bytes(pme).skeleton()], float)
    W = bone_matrices(state, piv)
    R0, t0 = W[0, :3, :3], W[0, 3, :3]
    P, N, UV, tris, pages, _ = cm.scene(pme, pwf, (piv, [w[3, :3] for w in W], [w[:3, :3].T for w in W]))
    P, N = (P - t0) @ R0.T, N @ R0.T

    wad = Wad()
    b = wad.get(SELECT[0])
    o, s = entries(b)[SELECT[1]]
    ref = p2n(wad, *SELECT)
    big = rgba(P, N, UV, tris, pages, yaw, 256 * X * 2)
    four = frame(big, ref[..., 3], X).round().astype(np.uint8)
    one = frame(big, ref[..., 3], 1).round().astype(np.uint8)
    clut, idx = quantize(one)
    os.makedirs(out, exist_ok=True)
    open(os.path.join(out, 'cham_select.p2n'), 'wb').write(p2n_file(b[o:o + s], clut, idx))
    go, gs = entries(wad.get(GLOW[0]))[GLOW[1]]
    disc_glow = wad.get(GLOW[0])[go:go + gs]
    mine = np.frombuffer(disc_glow[0x480:], np.uint8).reshape(128, 128)
    d = np.abs(glow(ref[..., 3] > 0).astype(int) - mine).mean()
    assert d < 0.5, 'the highlight recipe no longer makes Reptile\'s (mean |d| %.2f levels)' % d
    open(os.path.join(out, 'cham_glow.p2n'), 'wb').write(disc_glow[:0x480] + glow(idx > 0).tobytes())
    shown = clut[idx].copy()
    shown[..., 3] = np.minimum(255, shown[..., 3].astype(int) * 255 // 128)
    Image.fromarray(shown, 'RGBA').save(os.path.join(out, 'cham_select.png'))
    Image.fromarray(four, 'RGBA').save(os.path.join(out, 'cham_select_4x.png'))
    print(os.path.join(out, 'cham_select.p2n'))


if __name__ == '__main__':
    main(sys.argv[1:])
