#!/usr/bin/env python3
"""Chameleon (Mortal Kombat: Armageddon) on MK:SM's Reptile: textures and announcer clips, built from both discs.

Chameleon is Reptile (group 84) in his story alt costume (files 6852/6851, picked by the costume flags 0x4D5E1C /
0x4D5E20) with the PS2_MOD chameleon mod recolouring the costume's green cloth at runtime for his colour mode:
yellow = Scorpion's specials, blue = Sub-Zero's, green = Reptile's, gray = rainbow (the renderer's fx tint cycles
gray texels through MKA's CHAMELEON_004 gradient). This script makes the rest, all disc-derived and written outside
git:
  - the MKA sources: chameleon.ssf textures (MKA rwtex.py) and the announcer's "Chameleon" / "Chameleon wins"
    (MSLASSET.MS2 samples 0x20000028 / 0x2000006b, MKA msl.py) as 24 kHz mono ADX for the mod, and the glow LUT
    (one colour per CHAMELEON_004 row)
  - per mode, the repainted costume pages (6851 entries 0, 2, 3, 4: 128x128) and the select-screen image (file 78
    entry 4, 128x256): Armageddon gold and skin tone and the MKA emblem on MK:SM's own UV layout (MKA's mesh format
    is not decoded), at 1x and as 4x pack pages

Usage:
  chameleon.py sources OUT        MKA textures + clips (ADX) + LUT into OUT
  chameleon.py paint OUT          OUT/paint/<mode>_<page>[_4x].png (RGBA, PS2 alpha 0-128 scaled to 0-255)
  chameleon.py pack OUT KEYS PACKDIR
                                  the 4x pages as PACKDIR/<key>.pam (+ sizes.txt, fx.txt for the rainbow mode);
                                  KEYS: lines "<mode> <page> <key>", the keys the game shows (a PS2_TEX_DUMP run)
  chameleon.py key PNG            the texture-pack key of a 1x page as the game shows it (decoded RGBA, PS2 alpha)
"""
import os
import struct
import subprocess
import sys

import numpy as np
from PIL import Image

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from wad import Wad  # noqa: E402

MKA = '/home/darkwarro/Documents/Twitter/PS2_REA_2'
MKA_ISO = MKA + '/Mortal Kombat Armageddon Premium Edition.iso'
MKA_TOOLS = MKA + '/mk_armageddon_decomp/decomp/tools/assets'
SSF_SECTOR, SSF_SECTORS = 763436, 1650           # \ps2dvd\art\chameleon.ssf in MKDA.PAK (PAK entry #20)
CLIPS = {'vo_name': 0x20000028, 'vo_wins': 0x2000006b}
PACK_V2 = '/home/darkwarro/Documents/Twitter/PS2_REA/remaster-data/textures/pack-v2'
COSTUME = 6851                                   # Reptile's story alt textures (model 6852)
PAGES = (0, 2, 3, 4)                             # 0 head, 1 = shared glow sprite (left alone), 2 apron, 3 suit, 4 trims/arms
SELECT = (78, 4)                                 # the select screen's pre-rendered Reptile
# cloth colour per mode: the mean of each ninja's saturated cloth texels in MK:SM (6740, 6800, 6851); None = gray
MODES = {'rainbow': None, 'scorpion': (170, 128, 38), 'subzero': (39, 101, 124), 'reptile': (80, 113, 34)}
# the select image's lizard claws (hands, feet), 128x256 coordinates: dark gloves and boots, not cloth
CLAWS = ((44, 78, 66, 104), (100, 98, 128, 128), (0, 186, 24, 222), (68, 172, 100, 216))


def entries(b):
    n = struct.unpack_from('<I', b, 12)[0]
    return [(e & 0xFFFFFFFF, e >> 32) for e in struct.unpack_from('<%dQ' % n, b, 0x20)]


def p2n(wad, fid, idx):
    """entry idx of PWF file fid, a P2N texture: RGBA uint8 HxWx4 with PS2 alpha 0-128"""
    b = wad.get(fid)
    o, s = entries(b)[idx]
    t = b[o:o + s]
    assert t[:4] == b'P2N\0', (fid, idx)
    w, h = struct.unpack_from('<2I', t, 0x10)
    clut = np.frombuffer(t[0x80:0x480], np.uint8).reshape(256, 4)
    i = np.arange(256)
    clut = clut[(i & ~0x18) | ((i & 0x8) << 1) | ((i & 0x10) >> 1)]      # CSM1
    return clut[np.frombuffer(t[0x480:0x480 + w * h], np.uint8).reshape(h, w)]


def key(rgba):
    """texpack key_uncounted(): FNV-64 over w, h (8 bytes each) and each texel as a u32 (4 bytes + 4 zero bytes)"""
    m, p = (1 << 64) - 1, 0x100000001B3
    h, w = rgba.shape[:2]
    k = 0xCBF29CE484222325
    for v in (w, h):
        for i in range(8):
            k = ((k ^ ((v >> (i * 8)) & 0xFF)) * p) & m
    for t in rgba.reshape(-1, 4).view('<u4').ravel().tolist():
        for i in range(4):
            k = ((k ^ ((t >> (i * 8)) & 0xFF)) * p) & m
        k = (k * p ** 4) & m
    return k or 1


def hsv(rgb):
    f = rgb.astype(float) / 255
    mx, mn = f.max(-1), f.min(-1)
    s = np.where(mx > 0, (mx - mn) / np.maximum(mx, 1e-9), 0)
    r, g, b = f[..., 0], f[..., 1], f[..., 2]
    d = np.maximum(mx - mn, 1e-9)
    hue = np.select([mx == r, mx == g], [((g - b) / d) % 6, (b - r) / d + 2], (r - g) / d + 4) * 60
    return hue, s, mx


def luma(rgb):
    return rgb[..., :3].astype(float) @ [0.299, 0.587, 0.114]


def rect(shape, x0, y0, x1, y1):
    m = np.zeros(shape[:2], bool)
    m[y0:y1, x0:x1] = True
    return m


def tint(rgb, mask, color, gain=1.0):
    """rgb where mask -> color * (luma / luma of color), so the page keeps its own shading"""
    out = rgb.astype(float)
    c = np.array(color, float)
    l = luma(rgb)[..., None] / max(luma(c[None])[0], 1) * gain
    out[mask] = (c[None] * l[mask]).clip(0, 255)
    return out


def cloth(out, mask, mode):
    """the costume's green cloth in the mode's colour; rainbow = exact gray (r=g=b), which the fx tint cycles"""
    if MODES[mode] is None:
        out[mask] = np.repeat(luma(out)[mask][:, None] * 1.15, 3, 1).clip(0, 255)
        return out
    return tint(out, mask, MODES[mode], 1.0)


def green(rgb):
    hue, sat, val = hsv(rgb)
    return (hue > 55) & (hue < 175) & (sat > 0.2) & (val > 0.08)


def paint_page(src, page, mka, mode):
    """6851 entry `page` (128x128) -> Chameleon in `mode`; any scale (the 4x pack image of the page works too)"""
    s = src.shape[1] // 128
    rgb = src[..., :3]
    hue, sat, val = hsv(rgb)
    g = green(rgb)
    out = rgb.astype(float)
    if page == 2:
        # apron strip: MKA's emblem panel (CHAMELEON_005, the coffin emblem at 0..64 x 0..128) multiplied in
        w, h = 64 * s, 92 * s
        emb = np.asarray(Image.fromarray(mka['005'][0:128, 0:64]).convert('L').resize((w, h), Image.LANCZOS), float)
        sub, m = out[0:h, 2 * s:2 * s + w], g[0:h, 2 * s:2 * s + w]
        e = np.repeat(emb[..., None], 3, 2)
        sub[m] = sub[m] * (0.45 + 0.75 * e[m] / 255)
    out = cloth(out, g, mode)
    if page == 4:
        # trims (bronze/silver shoulder pieces, medallion) -> MKA's gold sash colour
        out = tint(out, rect(rgb.shape, 0, 0, 128 * s, 48 * s) & (sat > 0.12) & (val > 0.15) & ~g, mka['gold'], 1.25)
    if page in (0, 4):
        # bare skin (brown: around the eyes, arms) -> MKA's flat skin tone, MK:SM shading kept
        out = tint(out, (hue < 45) & (sat > 0.2) & (val > 0.12) & ~rect(rgb.shape, 0, 0, 128 * s, 40 * s * (page == 4)),
                   mka['skin'], 1.0)
    rgba = src.copy()
    rgba[..., :3] = out.round().clip(0, 255).astype(np.uint8)
    return rgba


def paint_select(src, mka, mode='rainbow'):
    """file 78 entry 4 (the select screen's pre-rendered Reptile, 128x256, or its 4x pack image) -> Chameleon, colour
    only: green cloth, sleeves and hood -> the mode's cloth, claws -> dark gloves/boots, bronze -> MKA gold"""
    s = src.shape[1] // 128
    rgb = src[..., :3]
    hue, sat, val = hsv(rgb)
    g = green(rgb)
    claws = np.zeros(g.shape, bool)
    for x0, y0, x1, y1 in CLAWS:
        claws |= rect(rgb.shape, x0 * s, y0 * s, x1 * s, y1 * s)
    claws &= g
    out = cloth(rgb.astype(float), g & ~claws, mode)
    out = tint(out, claws, (52, 52, 66), 0.55)
    out = tint(out, (hue >= 15) & (hue <= 55) & (sat > 0.3) & (val > 0.2), mka['gold'], 1.25)
    rgba = src.copy()
    rgba[..., :3] = out.round().clip(0, 255).astype(np.uint8)
    return rgba


def load_mka(out):
    tex = os.path.join(out, 'mka')
    im = lambda n: np.asarray(Image.open(os.path.join(tex, '0_%s.png' % n)).convert('RGBA'))
    sash = im('6_CHAMELEON_003')[0:64, 170:240, :3].reshape(-1, 3).astype(float)
    _, s, _ = hsv(sash)
    return {'005': im('8_CHAMELEON_005'), 'skin': im('3_CHAMELEON_000')[0, 0, :3].astype(float),
            'gold': sash[s > 0.5].mean(0)}


def save(rgba, path):
    a = rgba.copy()
    a[..., 3] = (a[..., 3].astype(int) * 255 // 128).clip(0, 255)
    Image.fromarray(a, 'RGBA').save(path)


def read_pam(path):
    head, _, body = open(path, 'rb').read().partition(b'ENDHDR\n')
    f = dict(l.split(b' ', 1) for l in head.split(b'\n')[1:] if b' ' in l)
    w, h = int(f[b'WIDTH']), int(f[b'HEIGHT'])
    return np.frombuffer(body, np.uint8)[:w * h * 4].reshape(h, w, 4).copy()


def write_pam(rgba, path):
    h, w = rgba.shape[:2]
    with open(path, 'wb') as f:
        f.write(b'P7\nWIDTH %d\nHEIGHT %d\nDEPTH 4\nMAXVAL 255\nTUPLTYPE RGB_ALPHA\nENDHDR\n' % (w, h))
        f.write(rgba.astype(np.uint8).tobytes())


def up4(rgba):
    """4x Lanczos (RGB and the PS2-range alpha)"""
    h, w = rgba.shape[:2]
    return np.asarray(Image.fromarray(rgba, 'RGBA').resize((w * 4, h * 4), Image.LANCZOS)).copy()


def sources(out):
    os.makedirs(out, exist_ok=True)
    ssf = os.path.join(out, 'chameleon.ssf')
    with open(MKA_ISO, 'rb') as f:
        f.seek(SSF_SECTOR * 2048)
        open(ssf, 'wb').write(f.read(SSF_SECTORS * 2048))
    py = [sys.executable, '-I']
    subprocess.run(py + [MKA_TOOLS + '/rwtex.py', 'export', ssf, os.path.join(out, 'mka')], check=True)
    ms2 = os.path.join(out, 'disc/SNDSPS2/MSLASSET.MS2')
    if not os.path.exists(ms2):
        subprocess.run(py + [MKA_TOOLS + '/iso9660.py', 'extract', MKA_ISO, os.path.join(out, 'disc'),
                             'SNDSPS2/MSLASSET.MS2'], check=True)
    for name, k in CLIPS.items():
        wav = os.path.join(out, name + '.wav')
        subprocess.run(py + [MKA_TOOLS + '/msl.py', 'wav', ms2, '0x%08x' % k, wav], check=True)
        subprocess.run(['ffmpeg', '-v', 'error', '-y', '-i', wav, '-ar', '24000', '-ac', '1', '-c:a', 'adpcm_adx',
                        '-f', 'adx', os.path.join(out, name + '.adx')], check=True)
    g = np.asarray(Image.open(os.path.join(out, 'mka/0_7_CHAMELEON_004.png')).convert('RGB')).astype(float)
    with open(os.path.join(out, 'cham_lut.txt'), 'w') as f:
        f.write('# CHAMELEON_004 (MKA chameleon.ssf), mean colour of each of the 128 rows (v), PS2 scale (128 = 1.0); '
                'MKA scrolls v by 0.0005/frame\n')
        f.writelines('%d %d %d\n' % tuple(r) for r in g.mean(1).round().astype(int))


def paint(out):
    """every mode's pages at 1x (no pack) and 4x (the pack): {(mode, page): (1x, 4x)}, page 's' = select image"""
    wad, mka = Wad(), load_mka(out)
    d = os.path.join(out, 'paint')
    os.makedirs(d, exist_ok=True)
    sel1 = p2n(wad, *SELECT)
    sel4 = read_pam(os.path.join(PACK_V2, '%016x.pam' % key(sel1)))      # pack-v2's Real-ESRGAN 4x of the image
    pages = {}
    for mode in MODES:
        for page in PAGES:
            src = p2n(wad, COSTUME, page)
            pages[mode, page] = (paint_page(src, page, mka, mode), up4(paint_page(src, page, mka, mode)))
        pages[mode, 's'] = (paint_select(sel1, mka, mode), paint_select(sel4, mka, mode))
    for (mode, page), (one, four) in pages.items():
        save(one, os.path.join(d, '%s_%s.png' % (mode, page)))
        save(four, os.path.join(d, '%s_%s_4x.png' % (mode, page)))
    return pages


def pack(out, keys, pack_dir):
    pages = paint(out)
    os.makedirs(pack_dir, exist_ok=True)
    sizes, fx = [], []
    for line in open(keys):
        if not line.strip() or line.startswith('#'):
            continue
        mode, page, k = line.split()
        one, four = pages[mode, page if page == 's' else int(page)]
        write_pam(four, os.path.join(pack_dir, k + '.pam'))
        sizes.append('%s %d %d\n' % (k, one.shape[1], one.shape[0]))
        if MODES[mode] is None:
            fx.append('%s %d %d chameleon 0.06\n' % (k, one.shape[1], one.shape[0]))
    with open(os.path.join(pack_dir, 'sizes.txt'), 'a') as f:
        f.writelines(sizes)
    if fx:
        with open(os.path.join(pack_dir, 'fx.txt'), 'a') as f:
            f.write('fx chameleon 2000 2.0 cham_lut.txt\n')
            f.writelines(fx)


def main(argv):
    if len(argv) == 2 and argv[0] == 'sources':
        sources(argv[1])
    elif len(argv) == 2 and argv[0] == 'paint':
        paint(argv[1])
    elif len(argv) == 4 and argv[0] == 'pack':
        pack(*argv[1:])
    elif len(argv) == 2 and argv[0] == 'key':
        a = np.asarray(Image.open(argv[1]).convert('RGBA')).copy()
        a[..., 3] = (a[..., 3].astype(int) * 128 + 127) // 255
        print('%016x' % key(a))
    elif argv == ['check']:
        assert '%016x' % key(p2n(Wad(), *SELECT)) == '0aed83b92ebf5e11'     # pack-v2 holds this key
        print('ok')
    else:
        print(__doc__)
        return 2
    return 0


if __name__ == '__main__':
    sys.exit(main(sys.argv[1:]))
