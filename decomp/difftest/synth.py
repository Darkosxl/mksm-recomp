#!/usr/bin/env python3
"""Synthetic difftest contexts for decompiled functions that the recorded scenes reach rarely or never.

Writes context files in the format of runtime/src/decomp/difftest.cpp (header, Cpu, RAM, scratchpad, VU0 code and
data) that difftest replays like recorded ones. Memory is all zero except what a generator writes; the files are
sparse, so 32 MB of RAM costs a few KB of disk. Every GPR gets random 128 bits (pointers keep a RAM address in
their low word only), and HI/LO, the FPRs, FACC and FCR31 are random too, so a decompiled function that leaves a
register different from the original, upper halves included, fails.

usage: decomp/difftest/synth.py <outdir> [--count N] [--seed S] [hexaddr...]   (default: every generator below)
"""
import argparse
import os
import random
import struct

RAM_SIZE = 32 << 20
SPR_SIZE = 16 << 10
VU0_SIZE = 4096
CPU_SIZE = 1440  # sizeof(ps2::Cpu): r[32] at 0, hi 512, lo 528, sa 544, pc 548, budget 552, base 556, f[32] 560,
OFF_HI, OFF_LO, OFF_PC, OFF_F, OFF_FACC, OFF_FCR31 = 512, 528, 548, 560, 688, 692  # facc 688, fcr31 692

ZERO, AT, V0, V1, A0, A1, A2, A3, T0, T1 = range(10)
SP, RA = 29, 31


class Ctx:
    def __init__(self, rng, addr):
        self.rng = rng
        self.addr = addr
        self.cpu = bytearray(CPU_SIZE)
        self.mem = {}  # address -> bytes
        for r in range(1, 32):
            self.set_reg(r, rng.getrandbits(128))
        self.set_ptr(SP, 0x01F00000 - 16 * rng.randrange(1, 4096))
        self.set_reg(RA, rng.getrandbits(96) << 32 | 0x00100000 + 8 * rng.randrange(0x10000))
        for off in (OFF_HI, OFF_LO):
            self.cpu[off:off + 16] = rng.getrandbits(128).to_bytes(16, 'little')
        for i in range(32):
            self.set_f(i, rng.getrandbits(32))
        struct.pack_into('<I', self.cpu, OFF_FACC, rng.getrandbits(32))
        struct.pack_into('<I', self.cpu, OFF_FCR31, rng.getrandbits(32) & 0x0083F07F)
        struct.pack_into('<I', self.cpu, OFF_PC, addr)

    def set_reg(self, r, v):
        self.cpu[16 * r:16 * r + 16] = (v & (1 << 128) - 1).to_bytes(16, 'little')

    def set_ptr(self, r, a):
        # a RAM address in the low word, random bits above it (addresses only use the low word)
        self.set_reg(r, self.rng.getrandbits(96) << 32 | a)

    def set_sext(self, r, v):
        # a 32-bit value sign-extended to 64 bits, as lw/addiu leave it; random upper 64 bits
        v &= 0xFFFFFFFF
        low = v | (0xFFFFFFFF00000000 if v & 0x80000000 else 0)
        self.set_reg(r, self.rng.getrandbits(64) << 64 | low)

    def set_f(self, i, bits):
        struct.pack_into('<I', self.cpu, OFF_F + 4 * i, bits & 0xFFFFFFFF)

    def write(self, a, data):
        self.mem[a] = bytes(data)

    def w16(self, a, v):
        self.write(a, struct.pack('<H', v & 0xFFFF))

    def w32(self, a, v):
        self.write(a, struct.pack('<I', v & 0xFFFFFFFF))

    def w64(self, a, v):
        self.write(a, struct.pack('<Q', v & 0xFFFFFFFFFFFFFFFF))

    def save(self, path, index):
        header = b'PS2DIFF1' + struct.pack('<IIQIIII', self.addr, index, 0, CPU_SIZE, RAM_SIZE, SPR_SIZE, VU0_SIZE)
        assert len(header) == 40
        ram0 = len(header) + CPU_SIZE
        with open(path, 'wb') as f:
            f.write(header)
            f.write(self.cpu)
            f.truncate(ram0 + RAM_SIZE + SPR_SIZE + 2 * VU0_SIZE)
            for a, data in self.mem.items():
                assert 0 <= a and a + len(data) <= RAM_SIZE, hex(a)
                f.seek(ram0 + a)
                f.write(data)


def ram_addr(rng, size, align=16):
    return rng.randrange(0x00200000, 0x01E00000 - size) // align * align


def float_bits(rng):
    """Floats that exercise the EE's non-IEEE corners: zeros, denormals, huge, max exponent, plus ordinary values."""
    kind = rng.randrange(8)
    sign = rng.getrandbits(1) << 31
    if kind == 0:
        return sign
    if kind == 1:
        return sign | rng.getrandbits(23)  # denormal
    if kind == 2:
        return sign | 0x7F800000 | rng.getrandbits(23)  # exponent 255 (a normal number on the EE)
    if kind == 3:
        return sign | rng.randrange(0x7C000000, 0x7F800000)  # huge
    if kind == 4:
        return sign | rng.randrange(0x00800000, 0x02000000)  # tiny normals
    return struct.unpack('<I', struct.pack('<f', rng.uniform(-50.0, 50.0)))[0]


def int_edge(rng, around):
    """A 32-bit integer near a boundary or random."""
    k = rng.randrange(6)
    if k == 0:
        return around
    if k <= 2:
        return around + rng.randrange(-3, 4)
    if k == 3:
        return rng.choice([0, 1, -1, 0x7FFFFFFF, -0x80000000])
    return rng.randrange(-0x80000000, 0x80000000)


# ---- generators: one per function, filling a fresh Ctx ----

def gen_226b70(c, rng):  # global 0x4F4C54 = (int)(f12 * 0.25 * 128)
    c.set_f(12, float_bits(rng))


def gen_226df0(c, rng):  # global 0x4F4D60 = a0
    pass


def gen_24c238(c, rng):  # radians -> 12-bit angle
    if rng.randrange(3):
        x = rng.uniform(-7.0, 7.0) if rng.randrange(2) else rng.choice([3.14159265, -3.14159265, 0.0, 6.2831855, -6.2831855])
        c.set_f(12, struct.unpack('<I', struct.pack('<f', x))[0])
    else:
        c.set_f(12, float_bits(rng))


def gen_260b40(c, rng):  # word +4 of the 12-byte record (a0 & 0xffff) at 0x66B8D0
    i = rng.choice([0, 1, 2, rng.randrange(64), rng.randrange(0x10000)])
    c.set_reg(A0, rng.getrandbits(112) << 16 | i)
    rec = 0x0066B8D0 + 12 * i
    if rec + 12 <= RAM_SIZE:
        c.write(rec, rng.getrandbits(96).to_bytes(12, 'little'))


def gen_2655c0(c, rng):  # outcode of the point *t0 against the box (a0, a1)-(a2, a3)
    p = ram_addr(rng, 8, 4)
    c.set_ptr(T0, p)
    px, py = rng.randrange(-640, 640), rng.randrange(-480, 480)
    c.w32(p, px)
    c.w32(p + 4, py)
    for r, around in ((A0, px), (A1, py), (A2, px), (A3, py)):
        if rng.randrange(8):
            c.set_sext(r, int_edge(rng, around))
        # else: keep the random 128 bits (64-bit compares with arbitrary upper words)


TEX_SLOTS = 321
SLOT = 0x430


def manager(c, rng):
    mgr = ram_addr(rng, 0x40)
    slots = ram_addr(rng, SLOT * TEX_SLOTS)
    c.set_ptr(A0, mgr)
    c.w32(mgr + 0x20, slots)
    return slots


def slot_index(rng):
    return rng.choice([0, 1, 320, rng.randrange(TEX_SLOTS), rng.randrange(TEX_SLOTS)])


def gen_26cd50(c, rng):  # TBW of texture record a1
    rec = ram_addr(rng, SLOT)
    c.set_ptr(A1, rec)
    w = rng.choice([0, 1, 8, 16, 32, 63, 64, 65, 127, 128, 129, 256, 512, 1024, rng.randrange(0x10000)])
    h = w if rng.randrange(2) else rng.choice([0, 1, 16, 64, 128, 256, rng.randrange(0x10000)])
    psm = rng.choice([0x00, 0x01, 0x02, 0x0a, 0x13, 0x14, 0x1b, 0x24, 0x2c, 0x12, 0x15, 0x1a, 0x1c, 0x2b, 0x2d,
                      rng.randrange(0x10000)])
    c.w16(rec + 0x08, w)
    c.w16(rec + 0x0a, h)
    c.w16(rec + 0x0c, psm)
    c.w16(rec + 0x10, rng.getrandbits(16))


def gen_26d2e8(c, rng):  # TEX0 of slot a1
    slots = manager(c, rng)
    i = slot_index(rng)
    c.set_sext(A1, i)
    c.w64(slots + SLOT * i + 0x230, rng.getrandbits(64))
    c.w64(slots + SLOT * i + 0x238, rng.getrandbits(64))


gen_26d308 = gen_26d2e8  # MIPTBP1 of slot a1


def gen_26d590(c, rng):  # slot a1 or NULL
    manager(c, rng)
    k = rng.randrange(4)
    if k == 0:
        c.set_reg(A1, rng.getrandbits(128))  # anything
    elif k == 1:
        c.set_sext(A1, rng.choice([321, 322, -1, -321, 0x7FFFFFFF]))
    else:
        c.set_sext(A1, slot_index(rng))


def gen_26dd90(c, rng):  # link slot a1 to slot a2
    slots = manager(c, rng)
    a = slot_index(rng)
    b = a if rng.randrange(4) == 0 else slot_index(rng)
    c.set_sext(A1, a)
    c.set_sext(A2, b)
    for i in {a, b}:
        c.w16(slots + SLOT * i + 0x16, rng.getrandbits(16))
        c.w16(slots + SLOT * i + 0x246, rng.getrandbits(16))


GENERATORS = {name[4:].upper().zfill(8): fn for name, fn in globals().items() if name.startswith('gen_')}


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('outdir')
    ap.add_argument('addrs', nargs='*')
    ap.add_argument('--count', type=int, default=40)
    ap.add_argument('--seed', type=int, default=1)
    args = ap.parse_args()
    addrs = [a.upper().zfill(8) for a in args.addrs] or sorted(GENERATORS)
    os.makedirs(args.outdir, exist_ok=True)
    for a in addrs:
        rng = random.Random(f'{args.seed}:{a}')
        for n in range(args.count):
            c = Ctx(rng, int(a, 16))
            GENERATORS[a](c, rng)
            c.save(os.path.join(args.outdir, f'{a}_s{n:03d}.ctx'), n)
    print(f'{len(addrs) * args.count} synthetic contexts in {args.outdir}')


if __name__ == '__main__':
    main()
