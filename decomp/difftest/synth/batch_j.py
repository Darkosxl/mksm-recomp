#!/usr/bin/env python3
"""Synthetic difftest contexts for batch j.

The character culls (decomp/src/render/character_cull.cpp): the paths the recorded scenes do not reach (the
per-segment box tests, the culled and straddling sphere results, the texture split) and
CullCharacterSegmentsProjected, which no reference scene calls. Base: a recorded CullCharacterSegments context.

DrawModelSegments (decomp/src/render/draw_segments.cpp): the RAM and scratchpad record paths, the chain built in the
scratchpad, every segment kind, the near test, the light sets, the packet dedupe and the pass arguments. Base: a
recorded DrawModelSegments context.

For the culls it takes a recorded CullCharacterSegments context (a0 = the instance, a1 = a real model with its skeleton and segments)
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


R = 0x004F4B40


def segments(ctx, rng, profile, args):
    """DrawModelSegments (0x242FF8) from a recorded call of its own, in three profiles (fn_23a280 and fn_23d2f0 run
    recompiled in both runs and must get records they can pack, so the record contents change only where they do
    not reach them):
      state: a1 = 0 (no packing): every segment kind, the record flags, lights, near test, brightness, settings
      chain: a1 = 1 with the records as recorded: passes, packet dedupe, the chain modes, LOD, lights, near test
      spr:   the scratchpad double buffer on (the records come in by toSPR DMA), otherwise as recorded"""
    model = args[4] & 0xFFFFFFFF
    ctx.gpr(4, args[4], rng.getrandbits(64))
    first = ctx.rd(0x004F50D0)
    end = sext32(args[7])
    if end > first + 1 and rng.random() < 0.3:
        end = rng.randrange(first + 1, end + 1)
    ctx.gpr(7, arg(rng, end), rng.getrandbits(64))
    main_pass = {"state": 0, "chain": 1, "spr": args[5]}[profile]
    ctx.gpr(5, arg(rng, main_pass), rng.getrandbits(64))
    ctx.gpr(6, arg(rng, rng.choice([0, 1, 1, 2]) if profile == "chain" else args[6]), rng.getrandbits(64))
    if profile == "spr":
        ctx.mem(0x004F4D5C, "I", rng.choice([1, 2, 2]))
        ctx.mem(0x004F50D8, "I", rng.choice([0, 1]))
        return

    ctx.mem(0x00663450, "I", rng.choice([0, 0, 1]))                 # uncached states
    ctx.mem(0x00661594, "I", rng.choice([0, 0, 1]))
    ctx.mem(0x004F4C98, "I", rng.choice([0, 1, 1]))                 # near test
    ctx.mem(0x00756C90, "I", rng.choice([0, 1, 1]))                 # the setting fn_379988 returns
    ctx.mem(0x004F4C74, "I", f2i(rng.choice([0.0, 10.0, 1e3, 1e5])))
    for off, choices in ((0xB4, [0, 1]), (0xC8, [0, 1, 2]), (0xA0, [0, 3, 3])):
        if rng.random() < 0.5:
            ctx.mem(R + off, "I", rng.choice(choices))
    if rng.random() < 0.3:
        ctx.mem(model + 0x1048, "I", f2i(rng.choice([128.0, 64.0, 255.0])))
    if profile == "chain":
        ctx.mem(0x0066609C, "I", rng.choice([0, 0, 1]))             # chain in the scratchpad
        ctx.mem(0x006634E0, "I", rng.choice([0, 0, 1]))
        ctx.mem(0x006634E4, "I", rng.choice([0, 0, 1]))
        ctx.mem(0x00666098, "I", rng.choice([first, first + 1, 0, 0xFFFFFFFF]))
        for off, choices in ((0x24, [0, 1, 1]), (0x20, [0, 1, 1]), (0xD4, [0, 2, 2])):
            if rng.random() < 0.4:
                ctx.mem(R + off, "I", rng.choice(choices))
    else:
        for off in (0x104, 0x108):
            ctx.mem(R + off, "I", rng.choice([0, 0, 1]))
        if rng.random() < 0.5:
            ctx.mem(model + 0xE18, "I", rng.getrandbits(32))

    table = ctx.rd(0x0062AC24)
    for i in range(max(0, first), max(0, min(end, first + 64))):
        s = ctx.rd(0x0065E460 + 4 * i)
        if not s or s + SEGMENT > ctx.ram_size:
            continue
        if profile == "state":
            if rng.random() < 0.6:
                ctx.mem(s + 0x10, "I", rng.choice([0, 1, 1, 2, 2, 3, 4, 5, 6, 15, 16, 0xFFFFFFFF]))
            if rng.random() < 0.3:
                ctx.mem(s + 0x14, "I", rng.getrandbits(32))
            if rng.random() < 0.3:
                ctx.mem(s + 0x20, "I", rng.choice([0, 1, 2]))
            flags = ctx.rd(s + 0x130, "Q")
            for bit in (41, 42, 43, 46, 47, 54, 57):
                if rng.random() < 0.25:
                    flags ^= 1 << bit
            ctx.mem(s + 0x130, "Q", flags)
            flags2 = ctx.rd(s + 0x138, "Q")
            for bit in (2, 10):
                if rng.random() < 0.3:
                    flags2 ^= 1 << bit
            ctx.mem(s + 0x138, "Q", flags2)
            if rng.random() < 0.2:  # the record's bounding box: small or huge for the near test
                k = rng.choice([0.01, 1e4])
                for j in range(3):
                    lo = i2f(ctx.rd(s + 0x60 + 4 * j))
                    ctx.mem(s + 0x6C + 4 * j, "I", f2i(lo + k))
        else:
            if rng.random() < 0.3:
                ctx.mem(s + 0x1A0, "I", f2i(rng.choice([0.0, 1.0])))
            subs, n = ctx.rd(s + 0x1BC), sext32(ctx.rd(s + 0x12C))
            for j in range(max(0, min(n, 16))):
                if subs and subs + 32 * j + 4 <= ctx.ram_size and rng.random() < 0.5:
                    sent = (0x006615B8 + 4 * ctx.rd(subs + 32 * j)) & 0xFFFFFFFF
                    if sent + 4 <= ctx.ram_size:
                        ctx.mem(sent, "I", rng.getrandbits(7))
        if rng.random() < 0.3:
            ctx.mem(s + 0x18, "I", rng.choice([0, 2, 2]))
        if rng.random() < 0.3:
            ctx.mem(s + 0x1C4, "I", rng.choice([0, 1, 2, 3]))
        state = ctx.rd(s)
        if table and rng.random() < 0.3 and table + state < ctx.ram_size:
            ctx.mem(table + state, "b", rng.choice([0, 1, -5, 100]))

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
        if addr not in (0x002459F8, 0x00245D48, 0x00242FF8):
            raise SystemExit(f"no synthetic setup for {addr:08X}")
        for i in range(a.count):
            rng = random.Random(a.seed * 1000003 + addr * 131 + i)
            ctx = Ctx(a.base)
            ctx.set_header(addr, 1000 + i)
            args = {r: ctx.reg_lo(r) for r in (4, 5, 6, 7)}  # before scramble() overwrites a2/a3
            scramble(ctx, rng)
            if addr == 0x00242FF8:
                segments(ctx, rng, ("state", "chain", "spr")[i % 3], args)
            else:
                cull(ctx, rng)
            with open(os.path.join(a.out, f"{addr:08X}_s{i:03d}.ctx"), "wb") as f:
                f.write(ctx.data)
    print(f"wrote {a.count} contexts per function to {a.out}")


if __name__ == "__main__":
    main()
