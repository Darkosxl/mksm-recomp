# Texture pack from a dump with Real-ESRGAN (ncnn-vulkan, GPU): RGB through the model at 4x, alpha (PS2 range 0-128)
# with Lanczos so alpha tests keep their edges. Fixes from the in-game review of pack v2:
# - transparent texels take their opaque neighbours' colour first, so leaves get no dark fringe from the black under them;
# - padding wraps only along axes that tile (edge-to-edge step like the inner steps), else mirrors: no seams drawn into
#   character atlases or one-texel lines on panoramas;
# - the result's low frequencies are matched back to the original (box-downscaled difference, upscaled bilinear and
#   added), so the model keeps its detail but not its darker, cooler colours;
# - smooth textures (smoke, glows, fire, skin, skies: little detail for their contrast) skip the model, which drew
#   strands, rings and lines into them, and get Lanczos.
# Glyph textures (fonts: one colour, shape in alpha) are left out: the model turns letters into blobs, and the original
# keeps their shape.
# usage: upscale.py <dump dir> <pack dir> [--model realesrgan-x4plus] [--min 16] [--only key,key]
import argparse, os, pathlib, shutil, subprocess, sys, tempfile
import numpy as np
from PIL import Image

ap = argparse.ArgumentParser()
ap.add_argument('dump'); ap.add_argument('pack')
ap.add_argument('--model', default='realesrgan-x4plus')
ap.add_argument('--min', type=int, default=16, help='skip textures smaller than this on either side')
ap.add_argument('--only', default='', help='comma-separated keys')
a = ap.parse_args()
TOOL = pathlib.Path(__file__).resolve().parents[3] / 'tools-remaster/realesrgan'
S, PAD = 4, 8


def read_pam(p):
    head, _, body = p.read_bytes().partition(b'ENDHDR\n')
    f = dict(l.split(b' ', 1) for l in head.split(b'\n')[1:] if b' ' in l)
    w, h = int(f[b'WIDTH']), int(f[b'HEIGHT'])
    return np.frombuffer(body, np.uint8)[:w * h * 4].reshape(h, w, 4)


def fill_transparent(px):  # RGB with transparent texels filled from their opaque neighbours, outward
    rgb, known = px[..., :3].astype(np.float32), px[..., 3] >= 8
    if known.all() or not known.any():
        return px[..., :3]
    rgb[~known] = 0
    while not known.all():
        acc, cnt = np.zeros_like(rgb), np.zeros(known.shape, np.float32)
        for d in ((1, 0), (-1, 0), (0, 1), (0, -1)):
            acc += np.roll(rgb * known[..., None], d, (0, 1))
            cnt += np.roll(known, d, (0, 1))
        new = ~known & (cnt > 0)
        rgb[new] = acc[new] / cnt[new, None]
        known |= new
    return rgb.round().astype(np.uint8)


def tiles(rgb, axis):  # does the texture repeat along this axis?
    a = rgb.astype(np.float32)
    return np.abs(np.take(a, 0, axis) - np.take(a, -1, axis)).mean() < 3 * (np.abs(np.diff(a, axis=axis)).mean() + 1)


def smooth(rgb):  # little detail for its contrast: |Laplacian| / std of luma
    y = rgb.astype(np.float32) @ np.float32([0.299, 0.587, 0.114])
    lap = np.abs(4 * y[1:-1, 1:-1] - y[:-2, 1:-1] - y[2:, 1:-1] - y[1:-1, :-2] - y[1:-1, 2:]).mean()
    return lap / (y.std() + 1) < 0.75


def resize(rgb, w, h, f):  # float RGB resize, channel by channel
    return np.dstack([np.asarray(Image.fromarray(np.ascontiguousarray(rgb[..., c], np.float32), 'F').resize((w, h), f)) for c in range(3)])


def glyphs(px):  # greyscale sheet of white shapes on black (fonts, masks)
    rgb = px[..., :3].astype(int)
    return (rgb.max(2) - rgb.min(2) < 24).mean() >= 0.95 and (rgb.max(2) < 40).mean() >= 0.4 and (rgb.min(2) > 150).mean() >= 0.1


only = set(a.only.split(',')) - {''}
src = [p for p in sorted(pathlib.Path(a.dump).glob('*.pam')) if not only or p.stem in only]
out = pathlib.Path(a.pack)
out.mkdir(parents=True, exist_ok=True)
with tempfile.TemporaryDirectory() as tmp:
    tin, tout = pathlib.Path(tmp, 'in'), pathlib.Path(tmp, 'out')
    tin.mkdir(); tout.mkdir()
    textures = {}
    for p in src:
        px = read_pam(p)
        h, w = px.shape[:2]
        if w < a.min or h < a.min or glyphs(px): continue
        rgb = fill_transparent(px)
        textures[p.stem] = px, rgb
        if smooth(rgb): continue
        for axis in (0, 1):
            pad = [(0, 0)] * 3
            pad[axis] = (PAD, PAD)
            rgb = np.pad(rgb, pad, mode='wrap' if tiles(rgb, axis) else 'symmetric')
        Image.fromarray(np.ascontiguousarray(rgb)).save(tin / f'{p.stem}.png')
    env = dict(os.environ, __NV_PRIME_RENDER_OFFLOAD='1', __VK_LAYER_NV_optimus='NVIDIA_only')
    if any(tin.iterdir()):
        r = subprocess.run([str(TOOL / 'realesrgan-ncnn-vulkan'), '-i', str(tin), '-o', str(tout), '-n', a.model, '-s', str(S), '-f', 'png',
                            '-m', str(TOOL / 'models')], env=env, capture_output=True, text=True)
        if r.returncode: sys.exit(f'upscaler failed ({r.returncode}): {r.stderr[-2000:]}')
    n = 0
    for key, (px, base) in textures.items():
        h, w = px.shape[:2]
        if (tout / f'{key}.png').exists():
            up = np.asarray(Image.open(tout / f'{key}.png').convert('RGB'))[PAD * S:PAD * S + h * S, PAD * S:PAD * S + w * S].astype(np.float32)
            low = resize(up, w, h, Image.BOX) - base  # how far the model moved each texel's average
            rgb = np.clip(up - resize(low, w * S, h * S, Image.BILINEAR), 0, 255).round().astype(np.uint8)
        else:  # smooth: Lanczos
            rgb = np.clip(resize(base, w * S, h * S, Image.LANCZOS), 0, 255).round().astype(np.uint8)
        alpha = np.asarray(Image.fromarray(np.ascontiguousarray(px[..., 3])).resize((w * S, h * S), Image.LANCZOS))
        alpha = np.clip(alpha, px[..., 3].min(), px[..., 3].max())  # no Lanczos overshoot past the original range (0x80 = opaque)
        hdr = f'P7\nWIDTH {w * S}\nHEIGHT {h * S}\nDEPTH 4\nMAXVAL 255\nTUPLTYPE RGB_ALPHA\nENDHDR\n'.encode()
        (out / f'{key}.pam').write_bytes(hdr + np.dstack([rgb, alpha]).astype(np.uint8).tobytes())
        n += 1
print(f'{n} textures -> {out} ({a.model}, {S}x)')
