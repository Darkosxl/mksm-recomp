#!/usr/bin/env python3
"""Render the README title logo to docs/media/logo.png.

    python3 docs/media/logo.py                 # writes docs/media/logo.png
    python3 docs/media/logo.py --out x.png     # writes elsewhere
    python3 docs/media/logo.py --font mk4      # MK4-style lettering instead
    python3 docs/media/logo.py --font-file F   # any local .ttf

Needs ImageMagick 7 (`magick`). Text only: gold metal letters with a chisel
bevel, black and blood-red rims, and a few embers. No game imagery, and
nothing extracted from the game disc.

Font: the fan-made "Mortal Kombat" font pack by MuRdOiNk and ]{0MBAT (2002;
MK4.TTF is from The Realm of Mortal Kombat, 1997), from
https://www.dafont.com/mortal-kombat.font. The pack ships no license text
and dafont lists none, so it is NOT committed here: the script downloads the
zip into a cache directory, checks the font's SHA-256 and reads only the .ttf
it needs. Default is mkda.ttf (the Deadly Alliance era lettering, the era
of Shaolin Monks); --font mk4 uses MK4.TTF.
"""

import argparse
import hashlib
import io
import os
import re
import subprocess
import tempfile
import urllib.request
import zipfile

FONT_ZIP = "https://dl.dafont.com/dl/?f=mortal_kombat"
FONT_SHA256 = {
    "mkda.ttf": "fac046540b69a150dbd9c1af7a70808076d063a5677a6a4aea68e70f44c7cfd7",
    "MK4.TTF": "f4e07fc9988b149171579117e253005e4c5a6c56934d646a7cfa8eb9bb57246b",
}
FONT_NAMES = {"mkda": "mkda.ttf", "mk4": "MK4.TTF"}

S = 2                       # supersampling: draw at 2x, downscale at the end
W, H = 1300 * S, 460 * S    # working canvas, trimmed afterwards
OUT_W = 1200                # final width; height follows the artwork
PAD = 10                    # final transparent margin in px

# vertical fills as (position 0..1, colour), top to bottom
GOLD = [(0.00, "#fff7d6"), (0.20, "#f9d77e"), (0.44, "#c48d2c"), (0.50, "#5a3508"),
        (0.55, "#d29a3c"), (0.78, "#ffe7a0"), (1.00, "#a2681a")]
BLOOD = [(0.00, "#ff8a70"), (0.45, "#e41a12"), (0.52, "#7a0000"), (0.60, "#c80c08"),
         (1.00, "#6a0000")]


def magick(*args):
    subprocess.run(["magick", *map(str, args)], check=True)


def font_file(name):
    """Path of a font from the dafont pack, downloading it once into the cache."""
    member = FONT_NAMES[name]
    cache = os.path.join(os.environ.get("XDG_CACHE_HOME", os.path.expanduser("~/.cache")),
                         "mksm-logo")
    path = os.path.join(cache, member)
    if not os.path.exists(path):
        os.makedirs(cache, exist_ok=True)
        req = urllib.request.Request(FONT_ZIP, headers={"User-Agent": "Mozilla/5.0"})
        with urllib.request.urlopen(req, timeout=60) as r:
            data = r.read()
        with zipfile.ZipFile(io.BytesIO(data)) as z:
            ttf = z.read(member)
        with open(path, "wb") as fh:
            fh.write(ttf)
    with open(path, "rb") as fh:
        digest = hashlib.sha256(fh.read()).hexdigest()
    if digest != FONT_SHA256[member]:
        raise SystemExit(f"{path}: unexpected SHA-256 {digest}; delete it and retry")
    return path


def advance(font, size, text, kerning=0):
    """Horizontal advance of `text` in pixels."""
    if not text.strip():  # magick reports no metrics for blank strings
        return advance(font, size, "I" + text + "I", kerning) - advance(font, size, "II", kerning)
    r = subprocess.run(
        ["magick", "-debug", "annotate", "xc:", "-font", font, "-pointsize", str(size),
         "-kerning", str(kerning), "-annotate", "0", text, "null:"],
        capture_output=True, text=True, check=True)
    return float(re.findall(r"origin: ([-\d.]+),", r.stderr)[-1])


def ink_box(m):
    """(x0, y0, x1, y1) of the white pixels of mask `m`."""
    r = subprocess.run(["magick", m, "-format", "%@", "info:"],
                       capture_output=True, text=True, check=True)
    w, h, x, y = map(int, re.match(r"(\d+)x(\d+)\+(\d+)\+(\d+)", r.stdout).groups())
    return x, y, x + w, y + h


def hex_rgb(c):
    c = c.lstrip("#")
    return tuple(int(c[i:i + 2], 16) for i in (0, 2, 4))


def gradient(path, top, bottom, stops):
    """Full-canvas vertical gradient, stops = [(pos, colour)] over [top, bottom]."""
    pos = [p for p, _ in stops]
    cols = [hex_rgb(c) for _, c in stops]
    rows = bytearray()
    for y in range(H):
        t = min(max((y - top) / max(bottom - top, 1), 0.0), 1.0)
        i = max(k for k in range(len(pos) - 1) if pos[k] <= t) if t > 0 else 0
        f = (t - pos[i]) / max(pos[i + 1] - pos[i], 1e-9)
        rows += bytes(round(a + (b - a) * min(f, 1.0)) for a, b in zip(cols[i], cols[i + 1]))
    with open(path + ".ppm", "wb") as fh:
        fh.write(b"P6 1 %d 255\n" % H + bytes(rows))
    magick(path + ".ppm", "-scale", f"{W}x{H}!", path)


def mask(path, runs=(), draws=()):
    """White-on-black mask. runs = [(font, size, kerning, x, baseline, text)]."""
    args = ["-size", f"{W}x{H}", "xc:black", "-fill", "white", "+gravity"]  # y = baseline
    for font, size, kern, x, base, text in runs:
        args += ["-font", font, "-pointsize", size, "-kerning", kern,
                 "-annotate", f"+{x:.1f}+{base:.1f}", text]
    for d in draws:
        args += ["-draw", d]
    magick(*args, path)


def solid(color, m, out, opacity=1.0, blur=0):
    """Flat `color` with alpha from mask `m` (optionally blurred / faded)."""
    args = [m]
    if blur:
        args += ["-blur", f"0x{blur}"]
    if opacity != 1.0:
        args += ["-evaluate", "multiply", opacity]
    magick("-size", f"{W}x{H}", f"xc:{color}", "(", *args, ")",
           "-alpha", "off", "-compose", "CopyOpacity", "-composite", out)


def stack(out, *layers):
    args = ["-size", f"{W}x{H}", "xc:none"]  # sRGB base: a gray first layer would grey all
    for q in layers:
        args += [q, "-compose", "over", "-composite"]
    magick(*args, out)


def metal(d, name, m, stops, top, bottom, bevel, rims, glow=0.0, glow_color="#9a0000",
          glow_blur=12):
    """Metal letters from mask `m`: gradient fill, chisel bevel, rims (outermost first)
    as [(radius, colour)], optional soft glow. Returns an RGBA png path."""
    p = lambda s: os.path.join(d, f"{name}_{s}.png")
    gradient(p("grad"), top, bottom, stops)
    # chisel: distance from the edge, flat after `bevel` px, lit from the top left
    magick(m, "-morphology", "Distance", f"Euclidean:4,{65535 // (bevel * S)}",
           "-blur", f"0x{0.6 * S}", "-shade", "135x32", "-auto-level",
           "+level", "18%,96%", p("shade"))
    magick(p("grad"), p("shade"), "-compose", "hardlight", "-composite",
           m, "-alpha", "off", "-compose", "CopyOpacity", "-composite", p("top"))
    parts = []
    for i, (r, color) in enumerate(rims):
        magick(m, "-morphology", "Dilate", f"Disk:{r * S}", p(f"rim{i}_m"))
        if i == 0 and glow:
            solid(glow_color, p("rim0_m"), p("glow"), glow, blur=glow_blur * S)
            parts.append(p("glow"))
        solid(color, p(f"rim{i}_m"), p(f"rim{i}"))
        parts.append(p(f"rim{i}"))
    parts.append(p("top"))
    stack(p("final"), *parts)
    return p("final")


class _Keep:
    def __init__(self, path):
        self.path = path

    def __enter__(self):
        os.makedirs(self.path, exist_ok=True)
        return self.path

    def __exit__(self, *exc):
        return False


def main():
    here = os.path.dirname(os.path.abspath(__file__))
    ap = argparse.ArgumentParser()
    ap.add_argument("--out", default=os.path.join(here, "logo.png"))
    ap.add_argument("--font", choices=sorted(FONT_NAMES), default="mkda")
    ap.add_argument("--font-file", help="use this .ttf instead of the dafont pack")
    a = ap.parse_args()
    font = a.font_file or font_file(a.font)
    cx = W / 2

    keep = os.environ.get("LOGO_TMP")  # set to a dir to keep intermediate layers
    with (tempfile.TemporaryDirectory() if not keep else _Keep(keep)) as d:
        # --- MORTAL KOMBAT: gold, as wide as the canvas allows --------------
        t, kern = "MORTAL KOMBAT", 3 * S
        size = 100 * S
        size = size * (1120 * S) / advance(font, size, t, kern)
        w = advance(font, size, t, kern) - kern
        base_mk = 200 * S
        mask(f"{d}/mk_m.png", [(font, size, kern, cx - w / 2, base_mk, t)])
        x0, top_mk, x1, bot_mk = ink_box(f"{d}/mk_m.png")
        mk = metal(d, "mk", f"{d}/mk_m.png", GOLD, top_mk, bot_mk, bevel=7,
                   rims=[(9, "#7a0000"), (6, "#000000"), (2, "#3a1c00")],
                   glow=0.55, glow_blur=14)

        # --- Shaolin Monks: smaller gold, small caps -------------------------
        t, kern = "Shaolin Monks", 2 * S
        size2 = size * 0.66
        w = advance(font, size2, t, kern) - kern
        base_sm = bot_mk + (size2 * 0.73) + 30 * S
        mask(f"{d}/sm_m.png", [(font, size2, kern, cx - w / 2, base_sm, t)])
        sx0, top_sm, sx1, bot_sm = ink_box(f"{d}/sm_m.png")
        sm = metal(d, "sm", f"{d}/sm_m.png", GOLD, top_sm, bot_sm, bevel=5,
                   rims=[(7, "#7a0000"), (5, "#000000"), (2, "#3a1c00")],
                   glow=0.45, glow_blur=10)

        # --- REMASTERED: blood red, spaced, between two blades ----------------
        t, kern = "REMASTERED", 16 * S
        size3 = size * 0.34
        w = advance(font, size3, t, kern) - kern
        base_rm = bot_sm + size3 * 0.73 + 34 * S
        run = (font, size3, kern, cx - w / 2, base_rm, t)
        mask(f"{d}/rm_m.png", [run])
        tx0, ty0, tx1, ty1 = ink_box(f"{d}/rm_m.png")
        mid = (ty0 + ty1) / 2
        gap, th = 24 * S, 3 * S
        bl0, bl1 = tx0 - gap, tx1 + gap

        def blade(xa, xb):  # thin double-pointed blade from xa to xb
            m = (xa + xb) / 2
            return (f"polygon {xa:.0f},{mid:.0f} {m:.0f},{mid - th:.0f} "
                    f"{xb:.0f},{mid:.0f} {m:.0f},{mid + th:.0f}")

        mask(f"{d}/rm_m.png", [run], [blade(sx0 + 20 * S, bl0), blade(bl1, sx1 - 20 * S)])
        _, top_rm, _, bot_rm = ink_box(f"{d}/rm_m.png")
        rm = metal(d, "rm", f"{d}/rm_m.png", BLOOD, top_rm, bot_rm, bevel=2,
                   rims=[(5, "#000000"), (3, "#d9a443"), (1, "#1a0000")], glow=0.45,
                   glow_color="#ff2a00", glow_blur=8)

        # --- stack, trim, downscale ------------------------------------------
        stack(f"{d}/all.png", mk, sm, rm)
        magick(f"{d}/all.png", "-trim", "+repage",
               "-filter", "Lanczos", "-resize", f"{OUT_W - 2 * PAD}x",
               "-bordercolor", "none", "-border", PAD,
               "-strip", "-depth", 6, "-depth", 8,  # 6-bit levels: invisible, ~30% smaller
               "-define", "png:compression-level=9", a.out)
    print(a.out)


if __name__ == "__main__":
    main()
