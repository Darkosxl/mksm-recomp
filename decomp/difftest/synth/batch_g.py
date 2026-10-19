#!/usr/bin/env python3
"""Synthetic difftest contexts for the batch-g functions that no recorded scene reaches (decomp/README.md):
SetNodeLights (0x0023D2F0, only called by fn_242ff8 under a flag none of the reference scenes sets) and
SetNodeLightMatrices (0x0023D128, only called by it).

Takes one recorded context as the machine snapshot (a gameplay frame, so the callees see a running game), scrambles
the registers (all 128 bits of every GPR but zero/sp/ra, HI/LO, the FPRs) and sets up what the function reads: a node
with a world matrix at +0x50 and a position at +0xa0, the default and node light sets, and for SetNodeLights
a point-light table that fn_23cf90 searches, so all three cases (no, one, two or more point lights) and every
fade branch (inside the full radius, beyond the zero radius, in between, equal radii) come up.

  decomp/difftest/synth/batch_g.py <base.ctx> <out dir> <hex addr>[,<hex addr>...] [--count N] [--seed S]

Each context is a full snapshot (~32 MB): generate, replay and delete in batches (AWS box only).
"""
import argparse
import os
import random
import struct

HEADER = struct.Struct("<8sIIQIIII")  # magic, addr, index, frame, cpu_size, ram_size, spr_size, vu0_size
GPR, HI, LO, FPR = 0, 512, 528, 560
SCRATCH = 0x01F00000  # RAM the synthetic node goes to

DEFAULT_LIGHTS, AMBIENT, NODE_LIGHTS = 0x00663560, 0x006635C0, 0x006635E0
ROW3_IN, ROW3_OUT = 0x00661A20, 0x00661950
POINT_COUNT, POINT_TABLE, NEAREST = 0x00678920, 0x00678940, 0x007800A0


class Ctx:
    def __init__(self, path):
        with open(path, "rb") as f:
            data = f.read()
        h = HEADER.unpack_from(data)
        if h[0] != b"PS2DIFF1":
            raise SystemExit(f"{path}: not a difftest context")
        self.cpu_size, self.ram_size = h[4], h[5]
        self.data = bytearray(data)
        self.cpu = HEADER.size
        self.ram = self.cpu + self.cpu_size

    def set_header(self, addr, index):
        magic, _, _, frame, *sizes = HEADER.unpack_from(self.data)
        HEADER.pack_into(self.data, 0, magic, addr, index, frame, *sizes)

    def gpr(self, r, lo64):
        struct.pack_into("<Q", self.data, self.cpu + GPR + 16 * r, lo64 & (2**64 - 1))

    def reg128(self, off, rng):
        self.data[self.cpu + off:self.cpu + off + 16] = rng.randbytes(16)

    def fpr(self, n, bits):
        struct.pack_into("<I", self.data, self.cpu + FPR + 4 * n, bits)

    def mem(self, addr, fmt, value):
        assert addr + struct.calcsize(fmt) <= self.ram_size
        struct.pack_into("<" + fmt, self.data, self.ram + addr, value)

    def floats(self, addr, values):
        for i, v in enumerate(values):
            self.mem(addr + 4 * i, "I", v)


def fbits(x):
    return struct.unpack("<I", struct.pack("<f", x))[0]


def odd_float(rng):
    """EE corner cases: zeros, denormals, exponent 255, huge"""
    sign = rng.getrandbits(1) << 31
    return sign | rng.choice([0, rng.getrandbits(23), 0x7F800000 | rng.getrandbits(23), rng.randrange(0x7C000000, 0x7F800000)])


def some_float(rng, lo=-50.0, hi=50.0):
    return odd_float(rng) if rng.random() < 0.08 else fbits(rng.uniform(lo, hi))


def vec(rng, lo=-50.0, hi=50.0):
    return [some_float(rng, lo, hi) for _ in range(4)]


def sext32(v):
    v &= 0xFFFFFFFF
    return v - (1 << 32) if v & 0x80000000 else v


def arg(rng, low32):
    """a pointer register: sign-extended, sometimes with junk in bits 32-63 (only the low word is used)"""
    v = sext32(low32) & (2**64 - 1)
    return v ^ (rng.getrandbits(32) << 32) if rng.random() < 0.3 else v


def scramble(ctx, rng):
    for r in range(1, 32):
        if r not in (29, 31):
            ctx.reg128(GPR + 16 * r, rng)
    ctx.reg128(HI, rng)
    ctx.reg128(LO, rng)
    for n in range(32):
        if n not in (20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31):  # callee-saved FPRs stay the snapshot's
            ctx.fpr(n, rng.getrandbits(32))


def rotation(rng):
    """a 4x4 world matrix: mostly a real rotation (rows unit length) with a translation, sometimes random words"""
    if rng.random() < 0.2:
        return [some_float(rng, -2.0, 2.0) for _ in range(16)]
    import math
    a, b = rng.uniform(-math.pi, math.pi), rng.uniform(-math.pi, math.pi)
    ca, sa, cb, sb = math.cos(a), math.sin(a), math.cos(b), math.sin(b)
    rows = [[cb, 0.0, -sb], [sa * sb, ca, sa * cb], [ca * sb, -sa, ca * cb]]
    m = []
    for r in rows:
        m += [fbits(x) for x in r] + [fbits(0.0)]
    m += [fbits(rng.uniform(-500, 500)) for _ in range(3)] + [fbits(1.0)]
    return m


def node(ctx, rng, position):
    n = SCRATCH + 16 * rng.randrange(0x100)
    ctx.floats(n + 0x50, rotation(rng))
    ctx.floats(n + 0xA0, position)
    ctx.gpr(4, arg(rng, n))
    return n


def light_sets(ctx, rng):
    for i in range(6):
        ctx.floats(DEFAULT_LIGHTS + 16 * i, vec(rng, -1.0, 1.0))
        ctx.floats(NODE_LIGHTS + 16 * i, vec(rng, -1.0, 1.0))
    ctx.floats(AMBIENT, vec(rng, 0.0, 1.0))
    ctx.floats(ROW3_IN, vec(rng, -1.0, 1.0))
    ctx.floats(ROW3_OUT, vec(rng, -1.0, 1.0))


def set_node_light_matrices(ctx, rng):
    node(ctx, rng, vec(rng, -100.0, 100.0))
    light_sets(ctx, rng)


def set_node_lights(ctx, rng):
    pos = [rng.uniform(-100.0, 100.0) for _ in range(3)]
    node(ctx, rng, [fbits(x) for x in pos] + [fbits(1.0)])
    light_sets(ctx, rng)
    count = rng.choice([0, 1, 1, 2, 2, 3, 4, 6])
    ctx.mem(POINT_COUNT, "i", count)
    for i in range(count):
        rec = POINT_TABLE + 0x40 * i
        d = [rng.uniform(-30.0, 30.0) for _ in range(3)]
        dist = sum(x * x for x in d) ** 0.5
        full = rng.choice([rng.uniform(0.0, dist), rng.uniform(dist, 2 * dist + 1), dist])
        zero = rng.choice([rng.uniform(full, full + 40.0), full, rng.uniform(0.0, dist), rng.uniform(dist, dist + 40.0)])
        ctx.floats(rec, [fbits(p + x) for p, x in zip(pos, d)] + [fbits(rng.uniform(-2.0, 2.0))])
        ctx.floats(rec + 0x10, vec(rng, 0.0, 2.0))
        ctx.floats(rec + 0x20, [fbits(full), fbits(zero), fbits(rng.choice([dist * dist * 2 + 1, dist * dist / 2]))])
        ctx.floats(rec + 0x34, [fbits(rng.uniform(0.1, 3.0))])
    # the indices fn_23cf90 leaves alone when no light is bright enough: keep them inside the table
    for k in range(2):
        ctx.mem(NEAREST + 4 * k, "I", rng.randrange(max(count, 1)))


SETUPS = {
    0x0023D128: set_node_light_matrices,
    0x0023D2F0: set_node_lights,
}


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("base")
    ap.add_argument("out")
    ap.add_argument("funcs")
    ap.add_argument("--count", type=int, default=16)
    ap.add_argument("--seed", type=int, default=1)
    a = ap.parse_args()
    os.makedirs(a.out, exist_ok=True)
    for addr in (int(x, 16) for x in a.funcs.split(",")):
        if addr not in SETUPS:
            raise SystemExit(f"no synthetic setup for {addr:08X}")
        for i in range(a.count):
            rng = random.Random(a.seed * 1000003 + addr * 131 + i)
            ctx = Ctx(a.base)
            ctx.set_header(addr, 1000 + i)
            scramble(ctx, rng)
            SETUPS[addr](ctx, rng)
            with open(os.path.join(a.out, f"{addr:08X}_s{i:03d}.ctx"), "wb") as f:
                f.write(ctx.data)
    print(f"wrote {a.count} contexts per function to {a.out}")


if __name__ == "__main__":
    main()
