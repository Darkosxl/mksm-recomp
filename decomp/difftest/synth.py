#!/usr/bin/env python3
"""Synthetic difftest contexts for decompiled functions that the recorded scenes reach rarely or never.

Writes context files in the format of runtime/src/decomp/difftest.cpp (header, Cpu, RAM, scratchpad, VU0 code and
data) that difftest replays like recorded ones. This file is the shared core (Ctx, helpers, writer, CLI); the
generators live in decomp/difftest/synth/*.py, one module per batch, each registering one generator per function
address with @gen. decomp/synth.sh writes and replays all of them on a box.

Two kinds of machine:
- zero (default): memory all zero except what the generator writes, so a file is sparse (32 MB of RAM costs a few KB
  of disk). Every GPR gets random 128 bits (pointers keep a RAM address in their low word only), and HI/LO, the
  FPRs, FACC and FCR31 are random too, so a decompiled function that leaves a register different from the original,
  upper halves included, fails.
- base (@gen(..., base=True)): a recorded context (--base) is the machine snapshot, so callees see a running game.
  The generator scrambles the registers itself (scramble()) and writes the memory it needs. Each file is a full
  ~33 MB snapshot.

usage: decomp/difftest/synth.py <outdir> [hexaddr[,hexaddr]...] [--count N] [--first K] [--seed S] [--base ctx]
         (default: every generator; base ones only with --base)
       decomp/difftest/synth.py --list     (per generator: address, zero|base, default count, module, name)
"""
import argparse
import collections
import importlib.util
import os
import random
import struct
import sys

RAM_SIZE = 32 << 20
SPR_SIZE = 16 << 10
VU0_SIZE = 4096
HEADER = struct.Struct('<8sIIQIIII')  # magic, addr, index, frame, cpu_size, ram_size, spr_size, vu0_size
CPU_SIZE = 1440  # sizeof(ps2::Cpu): r[32] at 0, hi 512, lo 528, sa 544, pc 548, budget 552, base 556, f[32] 560,
OFF_HI, OFF_LO, OFF_PC, OFF_F, OFF_FACC, OFF_FCR31 = 512, 528, 548, 560, 688, 692  # facc 688, fcr31 692
OFF_VU0 = 704  # Cpu::vu0: vf[32] +0, acc +512, vi[16] +528, q +560, p, i, r, mac +576, status +580, clip +584

ZERO, AT, V0, V1, A0, A1, A2, A3, T0, T1 = range(10)
SP, RA = 29, 31


def sext64(v):
    """a 32-bit value sign-extended to 64 bits"""
    v &= 0xFFFFFFFF
    return v | 0xFFFFFFFF00000000 if v & 0x80000000 else v


class Base:
    """A recorded context: the machine snapshot of base generators."""

    def __init__(self, path):
        with open(path, 'rb') as f:
            data = f.read()
        magic, _, _, self.frame, *sizes = HEADER.unpack_from(data)
        if magic != b'PS2DIFF1' or sizes != [CPU_SIZE, RAM_SIZE, SPR_SIZE, VU0_SIZE]:
            raise SystemExit(f'{path}: not a difftest context with this Cpu layout and memory sizes')
        ram0 = HEADER.size + CPU_SIZE
        self.cpu, self.ram, self.rest = data[HEADER.size:ram0], data[ram0:ram0 + RAM_SIZE], data[ram0 + RAM_SIZE:]


class Ctx:
    def __init__(self, rng, addr, base=None):
        self.rng, self.addr, self.base = rng, addr, base
        self.dirty = []  # (address, size) of every write: a zero-machine file stores only these
        if base:
            self.frame, self.cpu, self.ram = base.frame, bytearray(base.cpu), bytearray(base.ram)
            return
        self.frame, self.cpu, self.ram = 0, bytearray(CPU_SIZE), bytearray(RAM_SIZE)
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

    # ---- registers ----

    def reg(self, r):
        return int.from_bytes(self.cpu[16 * r:16 * r + 16], 'little')

    def set_reg(self, r, v):
        self.cpu[16 * r:16 * r + 16] = (v & (1 << 128) - 1).to_bytes(16, 'little')

    def set_low(self, r, v, bits=64):
        """the low `bits` bits of GPR r, the bits above unchanged"""
        m = (1 << bits) - 1
        self.set_reg(r, self.reg(r) & ~m | v & m)

    def set_ptr(self, r, a):
        # a RAM address in the low word, random bits above it (addresses only use the low word)
        self.set_reg(r, self.rng.getrandbits(96) << 32 | a)

    def set_sext(self, r, v):
        # a 32-bit value sign-extended to 64 bits, as lw/addiu leave it; random upper 64 bits
        self.set_reg(r, self.rng.getrandbits(64) << 64 | sext64(v))

    def set_arg(self, r, v):
        """v sign-extended to 64 bits, 30% of the time with junk in bits 32-63 (only the low word is used); the
        upper 64 bits unchanged"""
        v = sext64(v)
        self.set_low(r, v ^ self.rng.getrandbits(32) << 32 if self.rng.random() < 0.3 else v)

    def set_f(self, i, bits):
        struct.pack_into('<I', self.cpu, OFF_F + 4 * i, bits & 0xFFFFFFFF)

    # ---- memory ----

    def write(self, a, data):
        assert 0 <= a and a + len(data) <= RAM_SIZE, hex(a)
        self.ram[a:a + len(data)] = data
        self.dirty.append((a, len(data)))

    def w16(self, a, v):
        self.write(a, struct.pack('<H', v & 0xFFFF))

    def w32(self, a, v):
        self.write(a, struct.pack('<I', v & 0xFFFFFFFF))

    def w64(self, a, v):
        self.write(a, struct.pack('<Q', v & 0xFFFFFFFFFFFFFFFF))

    def words(self, a, values):
        """consecutive 32-bit words (float bits)"""
        self.write(a, struct.pack(f'<{len(values)}I', *[v & 0xFFFFFFFF for v in values]))

    def r64(self, a):
        return struct.unpack_from('<Q', self.ram, a)[0]

    def save(self, path, index):
        struct.pack_into('<I', self.cpu, OFF_PC, self.addr)
        with open(path, 'wb') as f:
            f.write(HEADER.pack(b'PS2DIFF1', self.addr, index, self.frame, CPU_SIZE, RAM_SIZE, SPR_SIZE, VU0_SIZE))
            f.write(self.cpu)
            if self.base:
                f.write(self.ram)
                f.write(self.base.rest)
                return
            ram0 = f.tell()
            f.truncate(ram0 + RAM_SIZE + SPR_SIZE + 2 * VU0_SIZE)
            for a, n in self.dirty:
                f.seek(ram0 + a)
                f.write(self.ram[a:a + n])


# ---- helpers ----

def ram_addr(rng, size, align=16):
    return rng.randrange(0x00200000, 0x01E00000 - size) // align * align


def fbits(x):
    return struct.unpack('<I', struct.pack('<f', x))[0]


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
    return fbits(rng.uniform(-50.0, 50.0))


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


def scramble(c, rng, fprs):
    """Base machine: random 128 bits in every GPR but zero, sp and ra (the snapshot's stack and return address stay),
    in HI/LO and in the FPRs `fprs`."""
    for r in range(1, 32):
        if r not in (SP, RA):
            c.set_reg(r, rng.getrandbits(128))
    for off in (OFF_HI, OFF_LO):
        c.cpu[off:off + 16] = rng.randbytes(16)
    for n in fprs:
        c.set_f(n, rng.getrandbits(32))


# the TextureManager: 321 slots of 0x430 bytes, the slot array at manager +0x20
SLOT, TEX_SLOTS = 0x430, 321


def manager(c, rng):
    """a TextureManager in a0; returns its slot array"""
    mgr = ram_addr(rng, 0x40)
    slots = ram_addr(rng, SLOT * TEX_SLOTS)
    c.set_ptr(A0, mgr)
    c.w32(mgr + 0x20, slots)
    return slots


def slot_index(rng):
    return rng.choice([0, 1, 320, rng.randrange(TEX_SLOTS), rng.randrange(TEX_SLOTS)])


# ---- registry ----

Gen = collections.namedtuple('Gen', 'fn base count module')
GENERATORS = {}


def gen(*addrs, base=False, count=None):
    """Registers fn(c, rng) as the generator of these function addresses. It fills a fresh Ctx (the zero machine, or
    with base=True the recorded snapshot) with the arguments and the memory the function reads. count: contexts per
    function (default 64 zero, 32 base: those are 33 MB each)."""
    def register(fn):
        for a in addrs:
            assert a not in GENERATORS, f'{a:08X} has two generators'
            GENERATORS[a] = Gen(fn, base, count or (32 if base else 64), fn.__module__)
        return fn
    return register


def load():
    """imports every decomp/difftest/synth/*.py, which register their generators"""
    sys.modules.setdefault('synth', sys.modules[__name__])  # `from synth import ...` there gets this module
    d = os.path.join(os.path.dirname(os.path.abspath(__file__)), 'synth')
    for name in sorted(os.listdir(d)):
        if name.endswith('.py'):
            spec = importlib.util.spec_from_file_location(name[:-3], os.path.join(d, name))
            spec.loader.exec_module(importlib.util.module_from_spec(spec))


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument('outdir', nargs='?')
    ap.add_argument('addrs', nargs='*')
    ap.add_argument('--count', type=int, help="contexts per function (default: the generator's)")
    ap.add_argument('--first', type=int, default=0, help='index of the first context (to write in batches)')
    ap.add_argument('--seed', type=int, default=1)
    ap.add_argument('--base', help='a recorded context: the machine snapshot of base generators')
    ap.add_argument('--list', action='store_true')
    a = ap.parse_args()
    load()
    if a.list:
        for addr, g in sorted(GENERATORS.items()):
            print(f'{addr:08X} {"base" if g.base else "zero"} {g.count} {g.module} {g.fn.__name__}')
        return
    if not a.outdir:
        ap.error('outdir is required')
    addrs = [int(x, 16) for s in a.addrs for x in s.split(',') if x]
    for x in addrs:
        if x not in GENERATORS:
            raise SystemExit(f'no synthetic generator for {x:08X}')
        if GENERATORS[x].base and not a.base:
            raise SystemExit(f'{x:08X} needs a recorded snapshot: --base <ctx>')
    if not addrs:
        addrs = sorted(x for x, g in GENERATORS.items() if a.base or not g.base)
        if len(addrs) < len(GENERATORS):
            print(f'skipped {len(GENERATORS) - len(addrs)} base-snapshot generators (no --base)', file=sys.stderr)
    base = Base(a.base) if a.base else None
    os.makedirs(a.outdir, exist_ok=True)
    n = 0
    for addr in addrs:
        g = GENERATORS[addr]
        for i in range(a.first, a.first + (a.count or g.count)):
            rng = random.Random(f'{a.seed}:{addr:08X}:{i}')
            c = Ctx(rng, addr, base if g.base else None)
            g.fn(c, rng)
            c.save(os.path.join(a.outdir, f'{addr:08X}_s{i:03d}.ctx'), i)
            n += 1
    print(f'{n} synthetic contexts in {a.outdir}')


if __name__ == '__main__':
    main()
