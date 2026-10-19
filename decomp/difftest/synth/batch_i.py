#!/usr/bin/env python3
"""Variant difftest contexts for PackSegment (fn_23a280, the segment packer): covers the branches the recorded scenes
take rarely or never.

Takes recorded contexts of 0x0023A280 (real segments, real chain, real texture manager) and writes variants. Each
variant changes the flags, the segment record's option bits or the globals the packer tests, so that every pass and
every constant block runs: the linked-texture pass, the additive pass, fog and its mode-3 override, the point light,
the lights with both [0x67b724] bits, the UV scroll, the PRIM fog/AA choices, the GS-state cache hit and the
fn_246258 path. The temporaries and the upper halves of the argument registers are scrambled, so a register the
decompiled code leaves different from the original fails.

  decomp/difftest/synth/batch_i.py <dir of recorded 0023A280_*.ctx> <out dir> [--per N] [--seed S] [--classify]

--classify prints, per recorded context, the branches it takes, without writing anything. Each variant is a full
snapshot (~32 MB): write, replay and delete in batches.
"""
import argparse
import glob
import os
import random
import struct

HEADER = struct.Struct("<8sIIQIIII")  # magic, addr, index, frame, cpu_size, ram_size, spr_size, vu0_size
HI, LO = 512, 528
SPR_BASE = 0x70000000

# globals the packer tests
G_SCROLL_ON, G_WRITER_ON, G_ADDITIVE_ON = 0x4F5030, 0x4F5034, 0x4F5018
G_RENDER_MODE, G_FOG_MODE, G_AA_MODE = 0x4F4BE0, 0x4F4C08, 0x4F6E94
G_OPTIONS = 0x67B724  # bit 0: clear the colour matrix [0].w, bit 1: send PRIM
G_LAST_FLAGS, G_LAST_MATERIAL = 0x65E458, 0x661900


class Ctx:
    def __init__(self, path):
        with open(path, "rb") as f:
            self.data = bytearray(f.read())
        h = HEADER.unpack_from(self.data)
        if h[0] != b"PS2DIFF1" or h[1] != 0x0023A280:
            raise SystemExit(f"{path}: not a context of 0x0023A280")
        self.cpu = HEADER.size
        self.ram = self.cpu + h[4]
        self.ram_size, self.spr = h[5], self.ram + h[5]

    def off(self, a):
        if SPR_BASE <= a < SPR_BASE + 0x4000:
            return self.spr + (a - SPR_BASE)
        a &= 0x01FFFFFF
        return self.ram + a

    def rd(self, a, fmt):
        return struct.unpack_from("<" + fmt, self.data, self.off(a))[0]

    def wr(self, a, fmt, v):
        struct.pack_into("<" + fmt, self.data, self.off(a), v)

    def reg(self, r):
        return struct.unpack_from("<Q", self.data, self.cpu + 16 * r)[0]

    def set_reg(self, r, lo64):
        struct.pack_into("<Q", self.data, self.cpu + 16 * r, lo64 & (2**64 - 1))

    def set_index(self, index):
        h = list(HEADER.unpack_from(self.data))
        h[2] = index
        HEADER.pack_into(self.data, 0, *h)

    def save(self, path):
        with open(path, "wb") as f:
            f.write(self.data)


def sext32(v):
    v &= 0xFFFFFFFF
    return (v - (1 << 32) if v & 0x80000000 else v) & (2**64 - 1)


def args(ctx):
    seg = ctx.reg(4) & 0xFFFFFFFF
    flags = ctx.reg(7) & 0xFFFFFFFF
    return seg, flags


def set_flags(ctx, flags):
    ctx.set_reg(7, sext32(flags))


def branches(ctx):
    """the packer's branch decisions for this context (mirrors segment_packer.cpp's tests)"""
    seg, flags = args(ctx)
    opts = ctx.rd(seg + 0x138, "Q")
    out = []
    if ctx.rd(G_WRITER_ON, "I") and flags & 2 and not opts & 4:
        out.append("writer")
        if ctx.rd(G_OPTIONS, "I") & 2:
            out.append("prim")
        return out
    if ctx.rd(G_SCROLL_ON, "I") and (ctx.rd(seg + 0x16C, "I") & 0x7FFFFFFF or ctx.rd(seg + 0x170, "I") & 0x7FFFFFFF):
        out.append("scroll")
    if not flags & 0x41C:
        out.append("node")
    if flags & 0x80:
        out.append("fog")
    if ctx.rd(G_RENDER_MODE, "I") == 3 and ctx.rd(seg + 0x20, "I") in (0, 2):
        out.append("fog3")
    if flags & 2:
        out.append("lights%d" % (ctx.rd(G_OPTIONS, "I") & 1))
    if flags & 0x8000000:
        out.append("point")
    if flags & 1:
        out.append("product")
    if ctx.rd(G_OPTIONS, "I") & 2:
        out.append("prim")
    if opts & 0x100:
        out.append("linked")
    if opts & 4 and ctx.rd(G_ADDITIVE_ON, "I") and ctx.rd(seg + 0x10, "I") == 2:
        out.append("additive")
    return out


def float_bits(rng):
    return rng.choice([0, 0x80000000, struct.unpack("<I", struct.pack("<f", rng.uniform(-2.0, 2.0)))[0]])


# ---- the variants: each takes a fresh copy of a recorded context ----

def path2(ctx, rng):
    ctx.wr(G_WRITER_ON, "I", 0)


def v_linked(ctx, rng):
    path2(ctx, rng)
    seg, _ = args(ctx)
    ctx.wr(seg + 0x138, "Q", ctx.rd(seg + 0x138, "Q") | 0x100)


def v_additive(ctx, rng):
    path2(ctx, rng)
    seg, _ = args(ctx)
    ctx.wr(seg + 0x138, "Q", ctx.rd(seg + 0x138, "Q") | 4 | (0x100 if rng.random() < 0.5 else 0))
    ctx.wr(seg + 0x10, "I", 2)
    ctx.wr(G_ADDITIVE_ON, "I", rng.choice([1, 2]))
    ctx.wr(0x4F501C, "I", rng.choice([0, 50, 128]))


def v_fog(ctx, rng):
    path2(ctx, rng)
    seg, flags = args(ctx)
    set_flags(ctx, flags ^ 0x80)
    ctx.wr(G_FOG_MODE, "I", rng.choice([0, 1, 2]))
    if rng.random() < 0.5:
        ctx.wr(G_RENDER_MODE, "I", 3)
        ctx.wr(seg + 0x20, "I", rng.choice([0, 1, 2]))


def v_point(ctx, rng):
    path2(ctx, rng)
    _, flags = args(ctx)
    set_flags(ctx, flags | 0x8000000)


def v_lights(ctx, rng):
    path2(ctx, rng)
    _, flags = args(ctx)
    set_flags(ctx, flags | 2 | (1 if rng.random() < 0.5 else 0))
    ctx.wr(G_OPTIONS, "I", rng.randrange(4))


def v_writer(ctx, rng):
    seg, flags = args(ctx)
    ctx.wr(G_WRITER_ON, "I", 1)
    set_flags(ctx, flags | 2)
    ctx.wr(seg + 0x138, "Q", ctx.rd(seg + 0x138, "Q") & ~4)
    ctx.wr(G_OPTIONS, "I", rng.randrange(4))
    ctx.wr(G_FOG_MODE, "I", rng.choice([0, 1, 2]))
    ctx.wr(G_AA_MODE, "I", rng.choice([0, 1, 2, 3]))


def v_scroll(ctx, rng):
    path2(ctx, rng)
    seg, _ = args(ctx)
    ctx.wr(G_SCROLL_ON, "I", 1)
    ctx.wr(seg + 0x16C, "I", float_bits(rng))
    ctx.wr(seg + 0x170, "I", float_bits(rng))
    ctx.wr(seg + 0x164, "I", float_bits(rng))
    ctx.wr(seg + 0x168, "I", float_bits(rng))


def v_prim(ctx, rng):
    path2(ctx, rng)
    seg, flags = args(ctx)
    ctx.wr(G_OPTIONS, "I", 2 | rng.randrange(2))
    ctx.wr(G_FOG_MODE, "I", rng.choice([0, 1, 2]))
    ctx.wr(G_AA_MODE, "I", rng.choice([0, 1, 2, 3, 0xFFFFFFFF]))
    if rng.random() < 0.5:
        set_flags(ctx, flags ^ 0x100)
    opts = ctx.rd(seg + 0x138, "Q") ^ (2 if rng.random() < 0.5 else 0)
    ctx.wr(seg + 0x138, "Q", opts)
    if rng.random() < 0.5:
        bit = rng.choice([37, 38, 39, 42, 43, 56, 61, 62])
        ctx.wr(seg + 0x130, "Q", ctx.rd(seg + 0x130, "Q") ^ (1 << bit))


def v_cached(ctx, rng):
    path2(ctx, rng)
    seg, flags = args(ctx)
    ctx.wr(G_RENDER_MODE, "I", 0)
    ctx.wr(G_LAST_FLAGS, "I", flags)
    ctx.wr(G_LAST_MATERIAL, "I", ctx.rd(seg + 0x158, "I"))
    ctx.wr(G_LAST_MATERIAL + 4, "I", ctx.rd(seg + 0x15C, "I") ^ (1 if rng.random() < 0.3 else 0))


def v_skin(ctx, rng):
    path2(ctx, rng)
    _, flags = args(ctx)
    set_flags(ctx, flags ^ rng.choice([0x4, 0x8, 0x10, 0x400, 1]))


def v_mix(ctx, rng):
    for v in rng.sample(VARIANTS[:-1], rng.randrange(2, 5)):
        v(ctx, rng)


VARIANTS = [v_linked, v_additive, v_fog, v_point, v_lights, v_writer, v_scroll, v_prim, v_cached, v_skin, v_mix]


def scramble(ctx, rng):
    """random temporaries and upper halves: the original's register writes must all be reproduced"""
    for r in (1, 2, 3, 9, 10, 11, 12, 13, 14, 15, 24, 25):
        ctx.data[ctx.cpu + 16 * r:ctx.cpu + 16 * r + 16] = rng.randbytes(16)
    for r in (4, 5, 6, 7, 8):  # arguments: keep the low dword
        o = ctx.cpu + 16 * r + 8
        ctx.data[o:o + 8] = rng.randbytes(8)
    for off in (HI, LO):
        ctx.data[ctx.cpu + off:ctx.cpu + off + 16] = rng.randbytes(16)


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("recorded")
    ap.add_argument("out", nargs="?")
    ap.add_argument("--per", type=int, default=1, help="variants of each kind per recorded context")
    ap.add_argument("--seed", type=int, default=1)
    ap.add_argument("--classify", action="store_true")
    a = ap.parse_args()
    files = sorted(glob.glob(os.path.join(a.recorded, "**", "0023A280_*.ctx"), recursive=True))
    if a.classify:
        for f in files:
            print(os.path.relpath(f, a.recorded), " ".join(branches(Ctx(f))))
        return
    rng = random.Random(a.seed)
    os.makedirs(a.out, exist_ok=True)
    n = 0
    for f in files:
        for v in VARIANTS:
            for _ in range(a.per):
                ctx = Ctx(f)
                v(ctx, rng)
                scramble(ctx, rng)
                ctx.set_index(n)
                ctx.save(os.path.join(a.out, f"0023A280_{n}.ctx"))
                n += 1
    print(f"{n} variant contexts from {len(files)} recorded")


if __name__ == "__main__":
    main()
