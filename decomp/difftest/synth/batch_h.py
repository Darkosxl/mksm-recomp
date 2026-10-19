#!/usr/bin/env python3
"""Synthetic difftest contexts for the batch-h character-renderer functions that the reference scenes reach rarely or
never (decomp/README.md): fn_246918 and fn_246258 (no scene calls them) and fn_246120's queue mode (mode 2).

Each context starts from a recorded call of fn_244368 (the 3-pass fighter constants), which is a real machine in the
middle of building the frame's VIF1 chain with a real character instance in a0: fn_246918, fn_246258 and their
callees read the same instance fields, the chain globals at 0x65e300, the TextureManager and the light and projector
globals. The context is retargeted to the function, every GPR but zero/sp/ra and HI/LO get random 128 bits, and the
arguments and the globals the function branches on are varied.

  decomp/difftest/synth/batch_h.py <out dir> <hex addr>[,<hex addr>...] <base.ctx>... [--count N] [--seed S]

The bases are recorded contexts of 00244368 (e.g. ~/w/logs/<run>/<scene>/00244368_*.ctx); context i uses base
i mod len(bases). Each context is a full snapshot (~32 MB): generate, replay and delete in batches.
"""
import argparse
import os
import random
import struct

HEADER = struct.Struct("<8sIIQIIII")  # magic, addr, index, frame, cpu_size, ram_size, spr_size, vu0_size
GPR = 0                               # Cpu::r[32], 16 bytes each, at the start of the Cpu
HI, LO = 512, 528
FPR = 560
BASE_FUNC = 0x00244368

CHAIN = 0x0065E300           # write pointer, start, open DMA tag, open VIFcode, unpack unit, open GIF tag
RENDER = 0x004F4B40          # render state block
SEND_PROJECTIONS = RENDER + 0x108
TEXTURE_MODE = 0x004F4C4C    # 1: upload at once, 2: queue
RENDER_BUFFER = 0x004F4D68
LAST_TEXTURE = 0x006618EC
QUEUE_COUNTS = 0x006633C8


class Ctx:
    def __init__(self, path):
        with open(path, "rb") as f:
            data = f.read()
        h = HEADER.unpack_from(data)
        if h[0] != b"PS2DIFF1":
            raise SystemExit(f"{path}: not a difftest context")
        if h[1] != BASE_FUNC:
            raise SystemExit(f"{path}: a context of {h[1]:08X}, not of {BASE_FUNC:08X}")
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

    def gpr_lo32(self, r):
        return struct.unpack_from("<I", self.data, self.cpu + GPR + 16 * r)[0]

    def reg128(self, off, rng):
        self.data[self.cpu + off:self.cpu + off + 16] = rng.randbytes(16)

    def mem(self, addr, fmt, value):
        assert addr + struct.calcsize(fmt) <= self.ram_size
        struct.pack_into("<" + fmt, self.data, self.ram + addr, value)

    def rd(self, addr, fmt):
        return struct.unpack_from("<" + fmt, self.data, self.ram + addr)[0]


def sext32(v):
    v &= 0xFFFFFFFF
    return v - (1 << 32) if v & 0x80000000 else v


def arg(rng, low32):
    """a register holding low32: usually sign-extended, sometimes with junk in bits 32-63 (only the low word is used)"""
    v = sext32(low32) & (2**64 - 1)
    return v ^ (rng.getrandbits(32) << 32) if rng.random() < 0.3 else v


def scramble(ctx, rng):
    """random GPRs (all 128 bits) but zero/sp/ra, random HI/LO; returns the base call's a0 (the instance)"""
    inst = ctx.gpr_lo32(4)
    for r in range(1, 32):
        if r not in (29, 31):
            ctx.reg128(GPR + 16 * r, rng)
    ctx.reg128(HI, rng)
    ctx.reg128(LO, rng)
    return inst


def chain_alignment(ctx, rng):
    """move the chain pointer by 0-3 words, so every NOP padding length is taken"""
    ctx.mem(CHAIN, "I", ctx.rd(CHAIN, "I") + 4 * rng.randrange(4))


# ---- per-function setups ----

def instance_constants(ctx, rng):  # fn_246918(inst)
    inst = scramble(ctx, rng)
    ctx.gpr(4, arg(rng, inst))
    ctx.mem(SEND_PROJECTIONS, "I", rng.choice([0, 1, 1, rng.getrandbits(32)]))
    if rng.random() < 0.5:
        ctx.mem(inst + 0x1018, "I", rng.choice([2, 0, 1, 3]))
    chain_alignment(ctx, rng)


def segment_constants(ctx, rng):  # fn_246258(inst, bone, &bone_index, flags) as fn_23a280 calls it
    sp = ctx.gpr_lo32(29)
    inst = scramble(ctx, rng)
    ctx.gpr(4, arg(rng, inst))
    # the segment record's first word is its bone index (real records sit in the scratchpad); a word in the free stack
    # below the frames stands in for it, a1 is that bone's record as fn_23a280 computes it
    bones, count = ctx.rd(inst + 0x18, "I"), ctx.rd(inst + 0x30, "I")
    index = rng.randrange(count) if 0 < count <= 120 else 0
    segment = sp - 0x4000
    ctx.mem(segment, "I", index)
    ctx.gpr(6, arg(rng, segment))
    ctx.gpr(5, arg(rng, bones + 0x1C0 * index))
    # draw flag 2 (the caller's condition), bits 12/13 = the CLAMP_1 modes, other bits random
    flags = 2 | rng.getrandbits(16) & ~0x3000 | rng.choice([0, 0x1000, 0x2000, 0x3000])
    ctx.gpr(7, arg(rng, flags))
    chain_alignment(ctx, rng)


def texture_request(ctx, rng):  # fn_246120(inst), mostly the queue mode the scenes never use
    inst = scramble(ctx, rng)
    ctx.gpr(4, arg(rng, inst))
    ctx.mem(TEXTURE_MODE, "I", rng.choice([2, 2, 2, 1, 0, 3]))
    ctx.mem(inst + 0x101C, "I", rng.choice([1, 1, 1, 0]))
    want = ctx.rd(inst + 0x100C, "I")
    ctx.mem(LAST_TEXTURE, "I", want if rng.random() < 0.15 else want ^ (1 + rng.getrandbits(8)))
    half = rng.randrange(2)
    ctx.mem(RENDER_BUFFER, "I", half)
    ctx.mem(QUEUE_COUNTS + 4 * (1 - half), "I", rng.choice([0, 1, 50, 98, 99, 100, 101, rng.randrange(100)]))


SETUPS = {
    0x00246918: instance_constants,
    0x00246258: segment_constants,
    0x00246120: texture_request,
}


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("out")
    ap.add_argument("funcs")
    ap.add_argument("bases", nargs="+")
    ap.add_argument("--count", type=int, default=16)
    ap.add_argument("--seed", type=int, default=1)
    a = ap.parse_args()
    os.makedirs(a.out, exist_ok=True)
    for addr in (int(x, 16) for x in a.funcs.split(",")):
        if addr not in SETUPS:
            raise SystemExit(f"no synthetic setup for {addr:08X}")
        for i in range(a.count):
            rng = random.Random(a.seed * 1000003 + addr * 131 + i)
            ctx = Ctx(a.bases[i % len(a.bases)])
            ctx.set_header(addr, 1000 + i)
            SETUPS[addr](ctx, rng)
            with open(os.path.join(a.out, f"{addr:08X}_s{i:03d}.ctx"), "wb") as f:
                f.write(ctx.data)
    print(f"wrote {a.count} contexts per function to {a.out}")


if __name__ == "__main__":
    main()
