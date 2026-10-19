#!/usr/bin/env python3
"""Synthetic difftest contexts for decompiled functions that the recorded scenes reach rarely or never.

Writes context files in the format of runtime/src/decomp/difftest.cpp (header, Cpu, RAM, scratchpad, VU0 code and
data) that difftest replays like recorded ones. This file is the shared core (Ctx, helpers, writer, CLI); the
generators live in decomp/difftest/synth/*.py, one module per batch, each registering one generator per function
address with @gen. decomp/synth.sh writes and replays all of them on a box.

Three kinds of machine:
- zero (default): memory all zero except what the generator writes, so a file is sparse (32 MB of RAM costs a few KB
  of disk). Every GPR gets random 128 bits (pointers keep a RAM address in their low word only), and HI/LO, the
  FPRs, FACC and FCR31 are random too, so a decompiled function that leaves a register different from the original,
  upper halves included, fails.
- base (@gen(..., base=True)): a recorded context (--base) is the machine snapshot, so callees see a running game.
  The generator scrambles the registers itself (scramble()) and writes the memory it needs. Each file is a full
  ~33 MB snapshot.
- seed (@gen(..., seed=0xADDR) or seed=(0xADDR, ...)): a recorded call of the seed function is the machine, Cpu and
  memory, retargeted to the generated function. The recorded contexts are found under --seeds <dir> (recursively,
  grouped by their header address). Context i takes seed i mod the number of seeds; with several seed functions,
  function i mod their number, then its seed (i / that number) mod its seeds; pick=fn(i, {function: seeds}) ->
  (function, seed index) chooses otherwise. The Ctx tells the generator i, seed_fn, seed_index, nseeds and
  seed_path. Full ~33 MB snapshots, like base ones.
Writes may go to RAM, the scratchpad (0x70000000) and VU0 code/data (0x11000000/0x11004000), mapped as the runtime
maps them. A generator may set c.label: it goes to <outdir>/labels.txt next to the file name.

Real functions (real(addr, ...) in a batch module) and the seed functions are recorded in the scenes by
decomp/synth.sh, and their recordings replay as real contexts.

usage: decomp/difftest/synth.py <outdir> [hexaddr[,hexaddr]...] [--count N] [--first K] [--seed S] [--base ctx]
         [--seeds dir]   (default: every generator; base ones only with --base, seed ones only with --seeds)
       decomp/difftest/synth.py --list     (per generator: address, zero|base|seed:<hex>[,<hex>], default count,
         module, name; per real or seed function: address, real, -, module, -)
       decomp/difftest/synth.py --record [hexaddr[,hexaddr]...]   (the functions to record for this selection,
         default all: the seeds of its seed generators and its real functions, comma-separated)
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
MEM_SIZE = RAM_SIZE + SPR_SIZE + 2 * VU0_SIZE  # what follows the Cpu in a file: RAM, scratchpad, VU0 code, VU0 data
SPR_BASE = 0x70000000
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


def physical(a):
    """runtime/src/memory.cpp's physical(): KSEG0/1 and the uncached views map to the low addresses"""
    if 0x80000000 <= a < 0xC0000000:
        return a & 0x1FFFFFFF
    return a & 0x0FFFFFFF if a >> 28 in (2, 3) else a


class Snapshot:
    """A recorded context: the machine of base and seed generators."""

    def __init__(self, path):
        with open(path, 'rb') as f:
            data = f.read()
        magic, self.addr, self.index, self.frame, *sizes = HEADER.unpack_from(data)
        if magic != b'PS2DIFF1' or sizes != [CPU_SIZE, RAM_SIZE, SPR_SIZE, VU0_SIZE] or \
                len(data) != HEADER.size + CPU_SIZE + MEM_SIZE:
            raise SystemExit(f'{path}: not a difftest context with this Cpu layout and memory sizes')
        self.path = path
        view = memoryview(data)
        self.cpu, self.mem = view[HEADER.size:HEADER.size + CPU_SIZE], view[HEADER.size + CPU_SIZE:]


class Ctx:
    def __init__(self, rng, addr, snap=None, i=0):
        self.rng, self.addr, self.snap, self.i = rng, addr, snap, i
        self.seed_fn, self.seed_index, self.nseeds, self.seed_path = None, 0, 0, None  # set for seed generators
        self.label = None
        self.dirty = []  # (offset, size) of every write: a zero-machine file stores only these
        if snap:
            self.frame, self.cpu, self.mem = snap.frame, bytearray(snap.cpu), bytearray(snap.mem)
            return
        self.frame, self.cpu, self.mem = 0, bytearray(CPU_SIZE), bytearray(MEM_SIZE)
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

    def variant(self, k):
        """which of k variants this context is: i mod k, or on seeds (i / seeds + seed index) mod k, so consecutive
        contexts take consecutive variants and with count >= k x seeds every seed gets every variant"""
        return (self.i // self.nseeds + self.seed_index) % k if self.nseeds else self.i % k

    # ---- registers ----

    def reg(self, r):
        return int.from_bytes(self.cpu[16 * r:16 * r + 16], 'little')

    def low(self, r, bits=64):
        """the low `bits` bits of GPR r"""
        return self.reg(r) & (1 << bits) - 1

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

    @staticmethod
    def off(a, n=1):
        """the offset in mem (RAM, scratchpad, VU0 code, VU0 data) of the n bytes at EE address a"""
        if a >> 14 == SPR_BASE >> 14:
            o, end = RAM_SIZE + (a & SPR_SIZE - 1), RAM_SIZE + SPR_SIZE
        else:
            p = physical(a)
            if 0 <= p < RAM_SIZE:
                o, end = p, RAM_SIZE
            elif 0x11000000 <= p < 0x11000000 + VU0_SIZE:
                o, end = RAM_SIZE + SPR_SIZE + p - 0x11000000, MEM_SIZE - VU0_SIZE
            elif 0x11004000 <= p < 0x11004000 + VU0_SIZE:
                o, end = MEM_SIZE - VU0_SIZE + p - 0x11004000, MEM_SIZE
            else:
                raise AssertionError(f'{a:#x}: not RAM, scratchpad or VU0 memory')
        assert o + n <= end, f'{a:#x} + {n}: crosses the end of its memory'
        return o

    def write(self, a, data):
        o = self.off(a, len(data))
        self.mem[o:o + len(data)] = data
        self.dirty.append((o, len(data)))

    def wr(self, a, fmt, *values):
        """struct fmt (little-endian) at a"""
        self.write(a, struct.pack('<' + fmt, *values))

    def w16(self, a, v):
        self.write(a, struct.pack('<H', v & 0xFFFF))

    def w32(self, a, v):
        self.write(a, struct.pack('<I', v & 0xFFFFFFFF))

    def w64(self, a, v):
        self.write(a, struct.pack('<Q', v & 0xFFFFFFFFFFFFFFFF))

    def words(self, a, values):
        """consecutive 32-bit words (float bits)"""
        self.write(a, struct.pack(f'<{len(values)}I', *[v & 0xFFFFFFFF for v in values]))

    def rd(self, a, fmt='I'):
        """struct fmt (little-endian) at a; one value"""
        return struct.unpack_from('<' + fmt, self.mem, self.off(a, struct.calcsize('<' + fmt)))[0]

    def r64(self, a):
        return self.rd(a, 'Q')

    def save(self, path, index):
        struct.pack_into('<I', self.cpu, OFF_PC, self.addr)
        with open(path, 'wb') as f:
            f.write(HEADER.pack(b'PS2DIFF1', self.addr, index, self.frame, CPU_SIZE, RAM_SIZE, SPR_SIZE, VU0_SIZE))
            f.write(self.cpu)
            if self.snap:
                f.write(self.mem)
                return
            mem0 = f.tell()
            f.truncate(mem0 + MEM_SIZE)
            for o, n in self.dirty:
                f.seek(mem0 + o)
                f.write(self.mem[o:o + n])


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
    """Base or seed machine: random 128 bits in every GPR but zero, sp and ra (the snapshot's stack and return address
    stay), in HI/LO and in the FPRs `fprs`."""
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

Gen = collections.namedtuple('Gen', 'fn base seeds pick count module')
GENERATORS = {}
REAL = {}  # function address -> module: recorded with the seeds, replayed as real contexts


def round_robin(seeds):
    def pick(i, sizes):
        fn = seeds[i % len(seeds)]
        return fn, i // len(seeds) % sizes[fn]
    return pick


def gen(*addrs, base=False, seed=None, pick=None, count=None):
    """Registers fn(c, rng) as the generator of these function addresses. It fills a fresh Ctx (the zero machine, with
    base=True the recorded snapshot, with seed=<address or tuple> a recorded call of that function) with the arguments
    and the memory the function reads. count: contexts per function (default 64 zero, 32 base or seed: those are 33 MB
    each)."""
    seeds = (seed,) if isinstance(seed, int) else tuple(seed or ())
    assert not (base and seeds), 'base or seed, not both'

    def register(fn):
        for a in addrs:
            assert a not in GENERATORS, f'{a:08X} has two generators'
            GENERATORS[a] = Gen(fn, base, seeds, pick or round_robin(seeds) if seeds else None,
                                count or (32 if base or seeds else 64), fn.__module__)
        return fn
    return register


def real(*addrs):
    """These functions' recorded calls in the seed scenes replay as real contexts (decomp/synth.sh records them with
    the seed functions). For functions that the batch's seeds stand for but that ci.sh's three runs rarely reach."""
    module = sys._getframe(1).f_globals.get('__name__', '?')
    for a in addrs:
        REAL.setdefault(a, module)


def kind(g):
    return 'seed:' + ','.join(f'{s:08X}' for s in g.seeds) if g.seeds else 'base' if g.base else 'zero'


def to_record(addrs):
    """the functions decomp/synth.sh records for these addresses: their generators' seeds and the real ones"""
    out = {s for a in addrs if a in GENERATORS for s in GENERATORS[a].seeds}
    return sorted(out | {a for a in addrs if a in REAL})


def recorded(d):
    """the recorded contexts under d, recursively: {function address: [paths, sorted]}"""
    pools = collections.defaultdict(list)
    for root, _, files in os.walk(d):
        for name in files:
            if name.endswith('.ctx'):
                path = os.path.join(root, name)
                with open(path, 'rb') as f:
                    h = f.read(HEADER.size)
                if len(h) == HEADER.size and h[:8] == b'PS2DIFF1':
                    pools[HEADER.unpack(h)[1]].append(path)
    return {a: sorted(p) for a, p in pools.items()}


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
    ap.add_argument('--seeds', help='recorded contexts (searched recursively): the seeds of seed generators')
    ap.add_argument('--list', action='store_true')
    ap.add_argument('--record', action='store_true', help='print the functions to record for the selection')
    a = ap.parse_args()
    load()
    if a.list:
        rows = [(addr, f'{addr:08X} {kind(g)} {g.count} {g.module} {g.fn.__name__}') for addr, g in GENERATORS.items()]
        reals = {s: g.module for g in GENERATORS.values() for s in g.seeds} | REAL
        rows += [(addr, f'{addr:08X} real - {m} -') for addr, m in reals.items()]
        print('\n'.join(r for _, r in sorted(rows)))
        return
    if a.record:
        sel = [int(x, 16) for s in [a.outdir or ''] + a.addrs for x in s.split(',') if x]
        print(','.join(f'{x:08X}' for x in to_record(sel or list(GENERATORS) + list(REAL))))
        return
    if not a.outdir:
        ap.error('outdir is required')
    addrs = [int(x, 16) for s in a.addrs for x in s.split(',') if x]
    for x in addrs:
        if x not in GENERATORS:
            raise SystemExit(f'no synthetic generator for {x:08X}')
        if GENERATORS[x].base and not a.base:
            raise SystemExit(f'{x:08X} needs a recorded snapshot: --base <ctx>')
        if GENERATORS[x].seeds and not a.seeds:
            raise SystemExit(f'{x:08X} needs recorded seeds: --seeds <dir>')
    if not addrs:
        addrs = sorted(x for x, g in GENERATORS.items() if (a.base or not g.base) and (a.seeds or not g.seeds))
        if len(addrs) < len(GENERATORS):
            print(f'skipped {len(GENERATORS) - len(addrs)} base or seed generators (no --base or --seeds)',
                  file=sys.stderr)
    base = Snapshot(a.base) if a.base else None
    pools = recorded(a.seeds) if a.seeds else {}
    os.makedirs(a.outdir, exist_ok=True)
    labels = []
    n = 0
    for addr in addrs:
        g = GENERATORS[addr]
        for s in g.seeds:
            if not pools.get(s):
                raise SystemExit(f'{addr:08X}: no recorded contexts of {s:08X} under {a.seeds}')
        sizes = {s: len(pools[s]) for s in g.seeds}
        for i in range(a.first, a.first + (a.count or g.count)):
            rng = random.Random(f'{a.seed}:{addr:08X}:{i}')
            if g.seeds:
                fn, k = g.pick(i, sizes)
                c = Ctx(rng, addr, Snapshot(pools[fn][k]), i)
                c.seed_fn, c.seed_index, c.nseeds, c.seed_path = fn, k, sizes[fn], pools[fn][k]
            else:
                c = Ctx(rng, addr, base if g.base else None, i)
            g.fn(c, rng)
            name = f'{addr:08X}_s{i:03d}.ctx'
            c.save(os.path.join(a.outdir, name), i)
            if c.label:
                labels.append(f'{name} {c.label}\n')
            n += 1
    if labels:
        with open(os.path.join(a.outdir, 'labels.txt'), 'a') as f:
            f.writelines(labels)
    print(f'{n} synthetic contexts in {a.outdir}')


if __name__ == '__main__':
    main()
