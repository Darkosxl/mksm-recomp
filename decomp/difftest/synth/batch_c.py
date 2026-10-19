#!/usr/bin/env python3
"""Synthetic difftest contexts for decompiled functions that real runs reach rarely or never (decomp/README.md).

Takes one recorded context as the machine snapshot, then for each requested function writes contexts with random
register contents (all 128 bits of every GPR but zero/sp/ra, HI/LO, f12-f15) and with the arguments and the memory
the function reads set up to cover its branches. Replay them with build/native-mksm/difftest like recorded ones.

  decomp/difftest/synth/batch_c.py <base.ctx> <out dir> <hex addr>[,<hex addr>...] [--count N] [--seed S]

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
SCRATCH = 0x01F00000                  # RAM the synthetic structures go to (the snapshot's bytes there are overwritten)


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

    def gpr(self, r, lo64, hi64=None):
        o = self.cpu + GPR + 16 * r
        struct.pack_into("<Q", self.data, o, lo64 & (2**64 - 1))
        if hi64 is not None:
            struct.pack_into("<Q", self.data, o + 8, hi64 & (2**64 - 1))

    def reg128(self, off, rng):
        self.data[self.cpu + off:self.cpu + off + 16] = rng.randbytes(16)

    def fpr(self, n, bits):
        struct.pack_into("<I", self.data, self.cpu + FPR + 4 * n, bits)

    def mem(self, addr, fmt, value):
        assert addr + struct.calcsize(fmt) <= self.ram_size
        struct.pack_into("<" + fmt, self.data, self.ram + addr, value)


def sext32(v):
    v &= 0xFFFFFFFF
    return v - (1 << 32) if v & 0x80000000 else v


def arg(rng, low32):
    """a register holding low32: usually sign-extended, sometimes with junk in bits 32-63 (only the low word is used)"""
    v = sext32(low32) & (2**64 - 1)
    return v ^ (rng.getrandbits(32) << 32) if rng.random() < 0.3 else v


def scramble(ctx, rng):
    for r in range(1, 32):
        if r not in (29, 31):
            ctx.reg128(GPR + 16 * r, rng)
    ctx.reg128(HI, rng)
    ctx.reg128(LO, rng)
    for n in range(12, 16):
        ctx.fpr(n, rng.getrandbits(32))


# ---- per-function setups ----

SLOT, SLOTS = 0x430, 321


def texture(ctx, rng, kind):
    manager, slots = SCRATCH, SCRATCH + 0x100
    ctx.mem(manager + 0x20, "I", slots)
    owner = rng.randrange(SLOTS)
    linked = owner if rng.random() < 0.15 else rng.randrange(SLOTS)
    for s in {owner, linked}:
        ctx.mem(slots + s * SLOT + 0x16, "H", rng.getrandbits(16))
        ctx.mem(slots + s * SLOT + 0x246, "H", rng.getrandbits(16))
        ctx.mem(slots + s * SLOT + 0x248, "H", rng.getrandbits(16))
    if kind == "get" and rng.random() < 0.5:  # the flag the getter tests: both outcomes
        a = slots + owner * SLOT + 0x16
        ctx.mem(a, "H", rng.choice([0, 0xFFFF, 0x0008, 0x0020, 0x0080, rng.getrandbits(16)]))
    ctx.gpr(4, arg(rng, manager))
    ctx.gpr(5, arg(rng, owner))
    ctx.gpr(6, arg(rng, linked))


def cri_callback(ctx, rng):
    ctx.gpr(4, arg(rng, rng.getrandbits(32)))
    ctx.gpr(5, arg(rng, rng.choice([0, 0x00272B50, rng.getrandbits(32)])))


def static_init(ctx, rng):
    init = rng.choice([0, 1, 1, 1 << 32, rng.getrandbits(64)])
    prio = rng.choice([0xFFFF, 0xFFFF, 0xFFFF | (1 << 32), 0xFFFFFFFFFFFFFFFF, 0, rng.getrandbits(64)])
    ctx.gpr(4, init)
    ctx.gpr(5, prio)
    for off in range(0, 0x48, 4):  # the state block it clears, and its neighbours: nonzero, so the stores show
        ctx.mem(0x00678920 + off, "I", rng.getrandbits(32) | 1)


def screen(ctx, rng):
    s = SCRATCH + 0x200
    words = [0, 0, 1, 0x80000000, rng.getrandbits(32)]
    ctx.mem(s + 0, "I", rng.choice(words))
    ctx.mem(s + 4, "I", rng.choice(words))
    ctx.mem(s + 0x2A, "H", rng.getrandbits(16))
    ctx.mem(s + 0x2C, "H", rng.getrandbits(16))
    ctx.mem(0x004F4D68, "I", rng.choice([0, 1, 0x80000000, rng.getrandbits(32)]))
    ctx.gpr(4, arg(rng, s))


SETUPS = {
    0x0026DDD0: lambda c, r: texture(c, r, "set"),
    0x0026DE10: lambda c, r: texture(c, r, "set"),
    0x0026DE50: lambda c, r: texture(c, r, "get"),
    0x0026DE88: lambda c, r: texture(c, r, "get"),
    0x0026DEC0: lambda c, r: texture(c, r, "get"),
    0x0026DF80: lambda c, r: texture(c, r, "set"),
    0x0026F068: cri_callback,
    0x00273C38: static_init,
    0x00275260: screen,
    0x002752B0: screen,
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
