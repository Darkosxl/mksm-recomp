#!/usr/bin/env python3
"""Synthetic difftest contexts for batch e (decomp/README.md): the fighters' GS state packers and the TextureManager
uploads, with every branch covered (shadow pass, fade alpha, draw modes, the pause menu light including a zero
distance, CLUT/texel uploads with early outs, swizzled 4/8-bit slots and the zero-size message).

Builds on decomp/difftest/synth.py (zero machine, random registers, sparse files):

  python3 -I decomp/difftest/synth/batch_e.py <outdir> [--count N] [--seed S] [hexaddr...]
"""
import argparse
import os
import random
import struct
import sys

sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
import synth  # noqa: E402
from synth import A0, A1, A2, Ctx, float_bits, ram_addr  # noqa: E402

CHAIN = 0x0065E300


def f32(x):
    return struct.unpack('<I', struct.pack('<f', x))[0]


def chain(c, rng):
    """The chain builder: a write pointer into free RAM, stale open-code fields."""
    p = ram_addr(rng, 0x200)
    c.w32(CHAIN, p)
    c.w32(CHAIN + 4, rng.getrandbits(32))
    c.w32(CHAIN + 8, rng.getrandbits(32))
    c.w32(CHAIN + 0xc, rng.getrandbits(32))
    c.w32(CHAIN + 0x10, rng.getrandbits(32))


def instance(c, rng):
    inst = ram_addr(rng, 0x1040)
    c.set_ptr(A0, inst)
    c.w32(inst + 0x1018, rng.choice([0, 0, 1, 2, rng.getrandbits(32)]))
    c.w32(inst + 0x1028, rng.choice([0xFFFFFFFF, 0xFFFFFFFF, 0, 64, 128, 255, rng.getrandbits(32)]))
    return inst


def gen_2478f0(c, rng):  # pass-1 state into the packet at a0
    c.set_ptr(A0, ram_addr(rng, 0x80, 4))
    c.w32(0x004F4B2C, rng.choice([0, 0, 1, rng.getrandbits(32)]))
    c.w32(0x0066608C, f32(rng.uniform(0.0, 1.0)) if rng.randrange(2) else float_bits(rng))


def gen_247bd8(c, rng):  # pass-1 state of instance a0 through the chain
    chain(c, rng)
    instance(c, rng)


def gen_248058(c, rng):  # pass-2 state of instance a0, TEX0 a1, through the chain
    chain(c, rng)
    inst = instance(c, rng)
    obj = ram_addr(rng, 0x100)
    c.w32(inst + 0x18, obj)
    c.set_reg(A1, rng.getrandbits(128))
    c.w32(0x004F50E4, rng.choice([0, 1]))
    pos = [rng.uniform(-500.0, 500.0) for _ in range(3)]
    light = pos if rng.randrange(6) == 0 else [v + rng.uniform(-300.0, 300.0) for v in pos]  # sometimes d2 = 0
    for i in range(3):
        c.w32(obj + 0xa0 + 4 * i, f32(pos[i]) if rng.randrange(8) else float_bits(rng))
        c.w32(0x006CBAD0 + 4 * i, f32(light[i]))
    c.w32(obj + 0xac, f32(1.0))
    for i in range(4):  # 2^23-biased colour, sometimes anything
        c.w32(0x006635D0 + 4 * i, 0x4B000000 | rng.randrange(256) if rng.randrange(6) else float_bits(rng))
    c.w32(0x004F4C38, rng.choice([0, 1]))
    c.w32(0x004F4C3C, rng.choice([0, 32, 128, rng.getrandbits(32)]))


SLOT = 0x430
PACKET = 0x006783E0


def upload(c, rng):
    """A TextureManager, slot a1 and the library's packet pointing into free RAM; returns the slot address."""
    mgr = ram_addr(rng, 0x40)
    slots = ram_addr(rng, SLOT * 321)
    c.set_ptr(A0, mgr)
    c.w32(mgr + 0x20, slots)
    i = rng.choice([0, 1, 320, rng.randrange(321)])
    c.set_sext(A1, i)
    c.set_sext(A2, 0 if rng.randrange(5) else rng.choice([1, rng.getrandbits(32)]))
    buf = ram_addr(rng, 0x400)
    for k in range(8):
        c.w32(PACKET + 4 * k, buf + 0x10 * k)
    s = slots + SLOT * i
    c.w32(s, ram_addr(rng, 0x1000))                                      # texels
    c.w16(s + 0x08, rng.choice([0, 1, 8, 16, 64, 128, 256, rng.randrange(0x10000)]))
    c.w16(s + 0x0a, rng.choice([0, 1, 8, 16, 64, 128, 256, rng.randrange(0x10000)]))
    c.w16(s + 0x0c, rng.choice([0x00, 0x13, 0x14, rng.getrandbits(16)]))
    c.w16(s + 0x0e, rng.choice([0x00, 0x02, rng.getrandbits(16)]))
    c.w16(s + 0x10, rng.choice([1, 2, 4, rng.getrandbits(16)]))
    c.w16(s + 0x12, rng.getrandbits(16))
    c.w32(s + 0x1c, rng.choice([0, 0, 1, rng.getrandbits(32)]))
    c.w32(s + 0x20, rng.getrandbits(32))
    c.w32(s + 0x38, ram_addr(rng, 0x400))                                # palette
    c.w32(s + 0x160, rng.choice([4, 8, 16, 24, 32, 0, rng.getrandbits(32)]))
    return s


def gen_268ae0(c, rng):  # CLUT upload of slot a1
    upload(c, rng)


def gen_268ec0(c, rng):  # texel upload of slot a1
    upload(c, rng)
    c.w32(0x006728A8, rng.randrange(400))


GENERATORS = {name[4:].upper().zfill(8): fn for name, fn in globals().items() if name.startswith('gen_')}


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('outdir')
    ap.add_argument('addrs', nargs='*')
    ap.add_argument('--count', type=int, default=60)
    ap.add_argument('--seed', type=int, default=1)
    args = ap.parse_args()
    addrs = [a.upper().zfill(8) for a in args.addrs] or sorted(GENERATORS)
    os.makedirs(args.outdir, exist_ok=True)
    for a in addrs:
        rng = random.Random(f'{args.seed}:{a}')
        for n in range(args.count):
            c = Ctx(rng, int(a, 16))
            GENERATORS[a](c, rng)
            c.save(os.path.join(args.outdir, f'{a}_e{n:03d}.ctx'), n)
    print(f'{len(addrs) * args.count} synthetic contexts in {args.outdir} (synth.py {synth.__name__})')


if __name__ == '__main__':
    main()
