# Texture pack from a dump with Real-ESRGAN (ncnn-vulkan, GPU): RGB through the model at 4x, alpha (PS2 range 0-128)
# with Lanczos so alpha tests keep their edges. Textures are padded by wrapping their own edges first (most tile), then
# cropped, so repeats stay seamless.
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
        textures[p.stem] = px
        Image.fromarray(np.ascontiguousarray(np.pad(px[..., :3], ((PAD, PAD), (PAD, PAD), (0, 0)), mode='wrap'))).save(tin / f'{p.stem}.png')
    env = dict(os.environ, __NV_PRIME_RENDER_OFFLOAD='1', __VK_LAYER_NV_optimus='NVIDIA_only')
    r = subprocess.run([str(TOOL / 'realesrgan-ncnn-vulkan'), '-i', str(tin), '-o', str(tout), '-n', a.model, '-s', str(S), '-f', 'png',
                        '-m', str(TOOL / 'models')], env=env, capture_output=True, text=True)
    if r.returncode: sys.exit(f'upscaler failed ({r.returncode}): {r.stderr[-2000:]}')
    n = 0
    for key, px in textures.items():
        h, w = px.shape[:2]
        rgb = np.asarray(Image.open(tout / f'{key}.png').convert('RGB'))[PAD * S:PAD * S + h * S, PAD * S:PAD * S + w * S]
        alpha = np.asarray(Image.fromarray(np.ascontiguousarray(px[..., 3])).resize((w * S, h * S), Image.LANCZOS))
        alpha = np.clip(alpha, px[..., 3].min(), px[..., 3].max())  # no Lanczos overshoot past the original range (0x80 = opaque)
        hdr = f'P7\nWIDTH {w * S}\nHEIGHT {h * S}\nDEPTH 4\nMAXVAL 255\nTUPLTYPE RGB_ALPHA\nENDHDR\n'.encode()
        (out / f'{key}.pam').write_bytes(hdr + np.dstack([rgb, alpha]).astype(np.uint8).tobytes())
        n += 1
print(f'{n} textures -> {out} ({a.model}, {S}x)')
