#!/usr/bin/env python3
"""Synthetic difftest contexts for the character culls (decomp/src/render/character_cull.cpp): the paths the
recorded scenes do not reach (the per-segment box tests, the culled and straddling sphere results, the texture
split) and CullCharacterSegmentsProjected, which no reference scene calls.

Takes a recorded CullCharacterSegments context (a0 = the instance, a1 = a real model with its skeleton and segments)
as the machine snapshot, then edits that model in place: its class, the per-segment flag, the bounding sphere (moved
far away or grown, so the sphere tests return 0, 1 and 2), the segments' box flags and texture tags, the two globals
the functions read (0x4F4B58, 0x4F4B2C), and random register contents (all 128 bits of every GPR but zero/sp/ra,
HI/LO, the FPRs the functions touch). Replay them with build/native-mksm/difftest like recorded ones.

  decomp/difftest/synth/batch_j.py <base.ctx> <out dir> <hex addr>[,<hex addr>...] [--count N] [--seed S]

Each context is a full snapshot (~32 MB): generate, replay and delete in batches.
"""
import argparse
import os
import random
import struct

HEADER = struct.Struct("<8sIIQIIII")  # magic, addr, index, frame, cpu_size, ram_size, spr_size, vu0_size
GPR = 0                               # Cpu::r[32], 16 bytes each, at the start of the Cpu
HI, LO = 512, 528
FPR = 560                             # Cpu::f[32] after hi, lo, sa, pc, budget, base

CLASSES = [0x20036, 0x20038, 0x2003B, 0x20044, 0x20056, 0x2004C]
SEGMENT = 0x1D0


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

    def reg_lo(self, r):
        return struct.unpack_from("<Q", self.data, self.cpu + GPR + 16 * r)[0]

    def gpr(self, r, lo64, hi64=None):
        o = self.cpu + GPR + 16 * r
        struct.pack_into("<Q", self.data, o, lo64 & (2**64 - 1))
        if hi64 is not None:
            struct.pack_into("<Q", self.data, o + 8, hi64 & (2**64 - 1))

    def reg128(self, off, rng):
        self.data[self.cpu + off:self.cpu + off + 16] = rng.randbytes(16)

    def fpr(self, n, bits):
        struct.pack_into("<I", self.data, self.cpu + FPR + 4 * n, bits)

    def rd(self, addr, fmt="I"):
        return struct.unpack_from("<" + fmt, self.data, self.ram + addr)[0]

    def mem(self, addr, fmt, value):
        assert addr + struct.calcsize(fmt) <= self.ram_size
        struct.pack_into("<" + fmt, self.data, self.ram + addr, value)


def f2i(x):
    return struct.unpack("<I", struct.pack("<f", x))[0]


def i2f(b):
    return struct.unpack("<f", struct.pack("<I", b))[0]


def sext32(v):
    v &= 0xFFFFFFFF
    return v - (1 << 32) if v & 0x80000000 else v


def arg(rng, low32):
    """a register holding low32: usually sign-extended, sometimes with junk in bits 32-63 (only the low word is used)"""
    v = sext32(low32) & (2**64 - 1)
    return v ^ (rng.getrandbits(32) << 32) if rng.random() < 0.3 else v


def scramble(ctx, rng):
    for r in range(1, 32):
        if r not in (4, 5, 29, 31):
            ctx.reg128(GPR + 16 * r, rng)
    ctx.reg128(HI, rng)
    ctx.reg128(LO, rng)
    for n in (0, 1, 2, 3, 12, 13, 14, 15, 20):
        ctx.fpr(n, rng.getrandbits(32))


def cull(ctx, rng):
    model = ctx.reg_lo(5) & 0xFFFFFFFF
    ctx.gpr(5, arg(rng, model), rng.getrandbits(64))
    ctx.gpr(4, ctx.reg_lo(4), rng.getrandbits(64))

    # class: the per-segment ones, the base's own, or another
    cls = ctx.rd(model + 0x3C)
    ctx.mem(model + 0x3C, "I", rng.choice(CLASSES + [cls, cls, cls, 0x20037, 0x2004D]))
    ctx.mem(model + 0xDC8, "I", rng.choice([0, 0, 0, 1, rng.getrandbits(32)]))

    # the bounding sphere: as recorded, far away (culled), huge (straddling), tiny
    k = rng.randrange(6)
    if k == 1:
        for i in range(3):
            ctx.mem(model + 0xF40 + 4 * i, "I", f2i(rng.choice([-1, 1]) * rng.uniform(1e4, 1e6)))
    elif k == 2:
        ctx.mem(model + 0xF6C, "I", f2i(rng.uniform(1e3, 1e6)))
    elif k == 3:
        ctx.mem(model + 0xF6C, "I", f2i(rng.uniform(0.0, 5.0)))
    elif k == 4:
        r = i2f(ctx.rd(model + 0xF6C))
        ctx.mem(model + 0xF6C, "I", f2i(r * rng.uniform(0.5, 20.0)))
    elif k == 5:
        ctx.mem(model + 0xF40 + 4 * rng.randrange(4), "I", f2i(rng.uniform(-300.0, 300.0)))

    ctx.mem(0x004F4B58, "I", rng.choice([0, 1, 1]))
    ctx.mem(0x004F4B2C, "I", rng.choice([0, 1, 1]))
    if rng.random() < 0.1:
        root = ctx.rd(model + 0x18)
        ctx.mem(root + 0x40, "I", 0)  # no placement node

    # segments: box flags, texture tags against the model's streamed texture, bone radius
    segs, count = ctx.rd(model + 0x20), sext32(ctx.rd(model + 0x38))
    if rng.random() < 0.05:
        ctx.mem(model + 0x38, "I", rng.choice([0, 0xFFFFFFFF]))
    streamed = ctx.rd(model + 0x1008)
    for i in range(max(0, min(count, 64))):
        s = segs + SEGMENT * i
        if rng.random() < 0.3:
            ctx.mem(s + 0x14, "I", rng.choice([0, 1, rng.getrandbits(32)]))
        if rng.random() < 0.5:
            ctx.mem(s + 0x1C, "I", rng.choice([streamed, streamed, streamed ^ 1, rng.getrandbits(32)]))
        if rng.random() < 0.3:
            ctx.mem(s + 0x78, "I", f2i(rng.choice([0.0, 1.0, 50.0, 1e4, 1e6])))


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
        if addr not in (0x002459F8, 0x00245D48):
            raise SystemExit(f"no synthetic setup for {addr:08X}")
        for i in range(a.count):
            rng = random.Random(a.seed * 1000003 + addr * 131 + i)
            ctx = Ctx(a.base)
            ctx.set_header(addr, 1000 + i)
            scramble(ctx, rng)
            cull(ctx, rng)
            with open(os.path.join(a.out, f"{addr:08X}_s{i:03d}.ctx"), "wb") as f:
                f.write(ctx.data)
    print(f"wrote {a.count} contexts per function to {a.out}")


if __name__ == "__main__":
    main()
