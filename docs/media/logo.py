#!/usr/bin/env python3
"""Render the README title logo to docs/media/logo.png.

Original artwork, text only: Noto Serif Display and Noto Sans (SIL Open Font
License 1.1, Arch package noto-fonts), with fire / jade / steel fills, bevel,
outlines, glow and drawn flames, all done with ImageMagick 7 (`magick`). No game
imagery and no fonts taken from the game.

    python3 docs/media/logo.py            # writes docs/media/logo.png
    python3 docs/media/logo.py out.png    # writes elsewhere
"""

import os
import random
import re
import subprocess
import sys
import tempfile

FONTS = "/usr/share/fonts/noto"
TITLE_FONT = f"{FONTS}/NotoSerifDisplay-CondensedBlack.ttf"
SERIF_FONT = f"{FONTS}/NotoSerifDisplay-Black.ttf"
SANS_FONT = f"{FONTS}/NotoSans-SemiCondensedBlack.ttf"

S = 2                       # supersampling: draw at 2x, downscale at the end
W, H = 1300 * S, 500 * S    # working canvas, trimmed afterwards
OUT_W, OUT_H = 1200, 400    # final PNG size
PAD = 8                     # final transparent margin in px
CAP = 0.714                 # cap height / em for Noto Serif Display

# fills, top to bottom
FIRE = ["#ff7400", "#ffaa00", "#ffe04a", "#ffcc10", "#ff7a00", "#e02800", "#9a0a00"]
FLAME = ["#d82200", "#ff5a00", "#ff9a00", "#ffbe1a"]
FLAME_CORE = ["#fffbe0", "#fff09a", "#ffd23a", "#ffb000"]
JADE = ["#eafff4", "#9ff5c8", "#3fd98f", "#13a866", "#07683e"]
STEEL = ["#ffffff", "#dfe4ea", "#a9b2bc", "#7b8590"]
PLATE = ["#5a626c", "#30353c", "#16191d", "#0b0c0f"]
BONE = ["#fff7e6", "#f0d9a8", "#c9a060"]


def magick(*args):
    subprocess.run(["magick", *map(str, args)], check=True)


def advance(font, size, text, kerning=0):
    """Horizontal advance of `text` in pixels."""
    if not text.strip():  # magick reports no metrics for blank strings
        return advance(font, size, "I" + text + "I", kerning) - advance(font, size, "II", kerning)
    r = subprocess.run(
        ["magick", "-debug", "annotate", "xc:", "-font", font, "-pointsize", str(size),
         "-kerning", str(kerning), "-annotate", "0", text, "null:"],
        capture_output=True, text=True, check=True)
    return float(re.findall(r"origin: ([-\d.]+),", r.stderr)[-1])


def hex_rgb(c):
    c = c.lstrip("#")
    return tuple(int(c[i:i + 2], 16) for i in (0, 2, 4))


def gradient(path, top, bottom, stops):
    """Full-canvas vertical gradient: stops spread evenly over [top, bottom]."""
    cols = [hex_rgb(c) for c in stops]
    rows = bytearray()
    for y in range(H):
        t = min(max((y - top) / max(bottom - top, 1), 0.0), 1.0) * (len(cols) - 1)
        i = min(int(t), len(cols) - 2)
        f = t - i
        rows += bytes(round(a + (b - a) * f) for a, b in zip(cols[i], cols[i + 1]))
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


def layer(d, name, m, stops, top, bottom, outline=(1, 3), lines=("#0b0000", "#6a0700"),
          glow=0.0, glow_color="#ff4a00", glow_blur=14, bevel=0, lift=(0.30, 0.90),
          texture=False, core=None):
    """Filled, bevelled, outlined layer from mask `m`; returns RGBA png path."""
    p = lambda s: os.path.join(d, f"{name}_{s}.png")
    gradient(p("grad"), top, bottom, stops)
    fill = p("grad")
    if texture:
        # vertical flame streaks inside the letters
        magick("-size", f"{W // 4}x{H // 4}", "-seed", 1987, "plasma:fractal",
               "-colorspace", "gray", "-resize", f"{W}x{H}!",
               "-motion-blur", f"0x{18 * S}+90", "-auto-level",
               "+level", "22%,78%", p("tex"))
        magick(fill, p("tex"), "-compose", "overlay", "-composite", p("fill"))
        fill = p("fill")
    if bevel:
        # emboss from the blurred mask, hard-lighted onto the fill
        magick(m, "-blur", f"0x{bevel * S}", "-shade", "135x40", "-auto-level",
               "-level", "8%,92%", "+level", f"{lift[0]:.0%},{lift[1]:.0%}", p("shade"))
        magick(fill, p("shade"), "-compose", "hardlight", "-composite", p("bev"))
        fill = p("bev")
    if core:
        # brighter inner shapes (flame cores), soft-edged, kept inside the mask
        cm, cstops = core
        gradient(p("core_g"), top, bottom, cstops)
        magick(p("core_g"), "(", cm, "-blur", f"0x{1 * S}", m, "-compose", "multiply",
               "-composite", ")", "-alpha", "off", "-compose", "CopyOpacity", "-composite",
               p("core"))
        stack(p("fill2"), fill, p("core"))
        fill = p("fill2")
    magick(fill, m, "-alpha", "off", "-compose", "CopyOpacity", "-composite", p("top"))

    inner_r, outer_r = outline
    magick(m, "-morphology", "Dilate", f"Disk:{outer_r * S}", p("outer_m"))
    magick(m, "-morphology", "Dilate", f"Disk:{inner_r * S}", p("inner_m"))

    parts = []
    if glow:
        solid(glow_color, p("outer_m"), p("glow"), glow, blur=glow_blur * S)
        parts.append(p("glow"))
    solid(lines[0], p("outer_m"), p("line_o"))
    solid(lines[1], p("inner_m"), p("line_i"))
    parts += [p("line_o"), p("line_i"), p("top")]
    stack(p("final"), *parts)
    return p("final")


def tongue(xc, yb, ym, w, v, lean):
    """One flame tongue as an ImageMagick -draw path: a straight body from yb up
    to ym (hidden behind the letters), then a flame of height v whose tip leans."""
    x0, x1 = xc - w / 2, xc + w / 2
    xt, yt = xc + lean, ym - v
    return (f"path 'M {x0:.1f},{yb:.1f} L {x0:.1f},{ym:.1f} "
            f"C {x0 - w * 0.10:.1f},{ym - v * 0.50:.1f} {xt - w * 0.35:.1f},{yt + v * 0.45:.1f} "
            f"{xt:.1f},{yt:.1f} "
            f"C {xt + w * 0.05:.1f},{yt + v * 0.35:.1f} {x1 + w * 0.10:.1f},{ym - v * 0.35:.1f} "
            f"{x1:.1f},{ym:.1f} L {x1:.1f},{yb:.1f} Z'")


class _Keep:
    def __init__(self, path):
        self.path = path

    def __enter__(self):
        os.makedirs(self.path, exist_ok=True)
        return self.path

    def __exit__(self, *exc):
        return False


def main():
    out = sys.argv[1] if len(sys.argv) > 1 else os.path.join(
        os.path.dirname(os.path.abspath(__file__)), "logo.png")
    cx = W / 2
    rnd = random.Random(87)  # SLUS_210.87

    keep = os.environ.get("LOGO_TMP")  # set to a dir to keep intermediate layers
    with (tempfile.TemporaryDirectory() if not keep else _Keep(keep)) as d:
        # --- SHAOLIN MONKS: fire, big initials -----------------------------
        big, small, kern = 200 * S, 156 * S, 2 * S
        pieces = [(big, "S"), (small, "HAOLIN"), (small, " "), (big, "M"), (small, "ONKS")]
        widths = [advance(TITLE_FONT, sz, t, kern) for sz, t in pieces]
        left = x = cx - sum(widths) / 2
        right = cx + sum(widths) / 2
        base = 300 * S
        top = base - CAP * big
        top_small = base - CAP * small
        runs = []
        for (sz, t), w in zip(pieces, widths):
            if t.strip():
                runs.append((TITLE_FONT, sz, kern, x, base, t))
            x += w
        mask(f"{d}/title_m.png", runs)
        title = layer(d, "title", f"{d}/title_m.png", FIRE, top, base,
                      outline=(5, 10), glow=0.5, bevel=5, texture=True)

        # --- "MORTAL KOMBAT:" top left, over HAOLIN --------------------------
        sz, kern = 30 * S, 9 * S
        b_mk = top_small - 22 * S
        x_mk = left + advance(TITLE_FONT, big, "S", kern) + 4 * S
        t = "MORTAL KOMBAT:"
        w_mk = advance(SERIF_FONT, sz, t, kern)
        mask(f"{d}/mk_m.png", [(SERIF_FONT, sz, kern, x_mk, b_mk, t)])
        mk = layer(d, "mk", f"{d}/mk_m.png", BONE, b_mk - CAP * sz, b_mk,
                   outline=(1, 3), bevel=2)

        # --- flame crown rising behind the title, right of MORTAL KOMBAT: ----
        fx0, fx1 = x_mk + w_mk + 60 * S, right - 14 * S
        yb, ym = top_small + 18 * S, top_small + 8 * S  # feet tucked behind the caps
        rows = {"back": ([], []), "front": ([], [])}  # each row outlined on its own
        n = int((fx1 - fx0) / (30 * S))
        for i in range(n + 1):
            u = i / n
            env = 0.35 + 0.65 * min(1.0, u * 2.0) * (1 - 0.3 * max(0.0, u - 0.75) / 0.25)
            back = i % 2 == 0
            xc = fx0 + u * (fx1 - fx0) + rnd.uniform(-6, 6) * S
            w = (rnd.uniform(60, 74) if back else rnd.uniform(40, 50)) * S
            v = ((40 + 70 * env * rnd.uniform(0.6, 1.0)) if back
                 else (22 + 30 * env * rnd.uniform(0.6, 1.0))) * S
            lean = rnd.choice((-1, 1)) * rnd.uniform(0.15, 0.35) * w
            body, core = rows["back" if back else "front"]
            body.append(tongue(xc, yb, ym, w, v, lean))
            core.append(tongue(xc + lean * 0.1, yb, ym, w * 0.42, v * 0.62, lean * 0.6))
        flames = []
        for row, (body, core) in rows.items():
            mask(f"{d}/{row}_m.png", draws=body)
            mask(f"{d}/{row}_core_m.png", draws=core)
            flames.append(layer(d, row, f"{d}/{row}_m.png", FLAME, top_small - 110 * S,
                                top_small + 14 * S, outline=(2, 5), glow=0.4 if row == "back" else 0,
                                glow_blur=12, bevel=3, core=(f"{d}/{row}_core_m.png", FLAME_CORE)))

        # fade the flames' feet out where no letter covers them (the word gap)
        stack(f"{d}/flames.png", *flames)
        gradient(f"{d}/feet.png", top_small - 2 * S, top_small + 16 * S, ["#ffffff", "#000000"])
        magick(f"{d}/flames.png", "(", f"{d}/feet.png", "-alpha", "copy", ")",
               "-compose", "DstIn", "-composite", f"{d}/flames_f.png")

        # --- REMASTERED: jade on a steel blade, tilted, overlapping title ---
        sz, kern = 54 * S, 12 * S
        t = "REMASTERED"
        w = advance(SERIF_FONT, sz, t, kern) - kern
        pad_x, pad_y = 40 * S, 16 * S
        px1 = right - 34 * S
        px0 = px1 - w - 2 * pad_x
        b_rm = base + 62 * S
        py0, py1 = b_rm - CAP * sz - pad_y, b_rm + pad_y
        pm = (py0 + py1) / 2
        sl = 18 * S  # blade tips
        blade = (f"polygon {px0 - sl:.0f},{pm:.0f} {px0 + sl:.0f},{py0:.0f} "
                 f"{px1 + sl:.0f},{py0:.0f} {px1 - sl:.0f},{py1:.0f} {px0 - sl:.0f},{py1:.0f} "
                 f"{px0 - sl:.0f},{pm:.0f}")
        mask(f"{d}/plate_m.png", draws=[blade])
        plate = layer(d, "plate", f"{d}/plate_m.png", PLATE, py0, py1,
                      outline=(2, 4), lines=("#000000", "#9aa3ad"), bevel=3,
                      lift=(0.05, 0.85))
        mask(f"{d}/rm_m.png", [(SERIF_FONT, sz, kern, px0 + pad_x, b_rm, t)])
        rm = layer(d, "rm", f"{d}/rm_m.png", JADE, b_rm - CAP * sz, b_rm,
                   outline=(1, 3), lines=("#00140b", "#04402a"), glow=0.6,
                   glow_color="#22ff99", glow_blur=8, bevel=2)
        stack(f"{d}/badge.png", plate, rm)
        magick(f"{d}/badge.png", "-virtual-pixel", "transparent", "-distort", "SRT",
               f"{(px0 + px1) / 2:.0f},{pm:.0f} 1 -3", f"{d}/badge_r.png")

        # --- tag line, steel sans, bottom left, beside the blade -------------
        t = "PS2  \u00b7  NATIVE + BROWSER  \u00b7  3x6  \u00b7  ONLINE CO-OP"
        avail0, avail1 = left + 22 * S, px0 - sl - 22 * S
        sz, kern = 24 * S, 3 * S
        while (w := advance(SANS_FONT, sz, t, kern) - kern) > avail1 - avail0:
            sz -= S  # largest size that fits beside the blade
        b_tag = base + 44 * S
        mask(f"{d}/tag_m.png", [(SANS_FONT, sz, kern, avail0 + (avail1 - avail0 - w) / 2, b_tag, t)])
        tag = layer(d, "tag", f"{d}/tag_m.png", STEEL, b_tag - 0.72 * sz, b_tag,
                    outline=(1, 3), lines=("#07090c", "#2a3038"))

        # --- stack, trim, downscale, centre --------------------------------
        stack(f"{d}/all.png", f"{d}/flames_f.png", title, mk, tag, f"{d}/badge_r.png")
        magick(f"{d}/all.png", "-trim", "+repage",
               "-filter", "Lanczos", "-resize", f"{OUT_W - 2 * PAD}x{OUT_H - 2 * PAD}",
               "-background", "none", "-gravity", "center", "-extent", f"{OUT_W}x{OUT_H}",
               "-strip", "-depth", 6, "-depth", 8,  # 6-bit levels: invisible, ~30% smaller
               "-define", "png:compression-level=9", out)
    print(out)


if __name__ == "__main__":
    main()
