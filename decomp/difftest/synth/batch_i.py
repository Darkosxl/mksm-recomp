"""Batch I: PackSegment (fn_23a280, the segment packer), on its own recorded calls (seed generator).

The recorded calls (real segments, real chain, real texture manager) take few of the packer's branches. Each variant
changes the flags, the segment record's option bits or the globals the packer tests, so that every pass and every
constant block runs: the linked-texture pass, the additive pass, fog and its mode-3 override, the point light, the
lights with both [0x67b724] bits, the UV scroll, the PRIM fog/AA choices, the GS-state cache hit and the fn_246258
path. The temporaries and the upper halves of the argument registers are scrambled, so a register the decompiled code
leaves different from the original fails. The segment record (a0) is often in the scratchpad.

  python3 -I decomp/difftest/synth/batch_i.py --classify <dir>

prints, per 0023A280_*.ctx under <dir> (recorded or synthetic), the branches it takes, without writing anything.
"""
import os
import struct
import sys

if __name__ == '__main__':
    sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
from synth import A0, A3, OFF_HI, OFF_LO, Ctx, Snapshot, gen, sext64  # noqa: E402

# globals the packer tests
G_SCROLL_ON, G_WRITER_ON, G_ADDITIVE_ON = 0x4F5030, 0x4F5034, 0x4F5018
G_RENDER_MODE, G_FOG_MODE, G_AA_MODE = 0x4F4BE0, 0x4F4C08, 0x4F6E94
G_OPTIONS = 0x67B724  # bit 0: clear the colour matrix [0].w, bit 1: send PRIM
G_LAST_FLAGS, G_LAST_MATERIAL = 0x65E458, 0x661900


def args(c):
    return c.low(A0, 32), c.low(A3, 32)  # the segment record, the flags


def set_flags(c, flags):
    c.set_low(A3, sext64(flags))


def branches(c):
    """the packer's branch decisions for this context (mirrors segment_packer.cpp's tests)"""
    seg, flags = args(c)
    opts = c.rd(seg + 0x138, 'Q')
    out = []
    if c.rd(G_WRITER_ON) and flags & 2 and not opts & 4:
        out.append('writer')
        if c.rd(G_OPTIONS) & 2:
            out.append('prim')
        return out
    if c.rd(G_SCROLL_ON) and (c.rd(seg + 0x16C) & 0x7FFFFFFF or c.rd(seg + 0x170) & 0x7FFFFFFF):
        out.append('scroll')
    if not flags & 0x41C:
        out.append('node')
    if flags & 0x80:
        out.append('fog')
    if c.rd(G_RENDER_MODE) == 3 and c.rd(seg + 0x20) in (0, 2):
        out.append('fog3')
    if flags & 2:
        out.append('lights%d' % (c.rd(G_OPTIONS) & 1))
    if flags & 0x8000000:
        out.append('point')
    if flags & 1:
        out.append('product')
    if c.rd(G_OPTIONS) & 2:
        out.append('prim')
    if opts & 0x100:
        out.append('linked')
    if opts & 4 and c.rd(G_ADDITIVE_ON) and c.rd(seg + 0x10) == 2:
        out.append('additive')
    return out


def float_bits(rng):
    return rng.choice([0, 0x80000000, struct.unpack('<I', struct.pack('<f', rng.uniform(-2.0, 2.0)))[0]])


# ---- the variants: each edits a fresh copy of a recorded call ----

def path2(c, rng):
    c.w32(G_WRITER_ON, 0)


def v_linked(c, rng):
    path2(c, rng)
    seg, _ = args(c)
    c.w64(seg + 0x138, c.rd(seg + 0x138, 'Q') | 0x100)


def v_additive(c, rng):
    path2(c, rng)
    seg, _ = args(c)
    c.w64(seg + 0x138, c.rd(seg + 0x138, 'Q') | 4 | (0x100 if rng.random() < 0.5 else 0))
    c.w32(seg + 0x10, 2)
    c.w32(G_ADDITIVE_ON, rng.choice([1, 2]))
    c.w32(0x4F501C, rng.choice([0, 50, 128]))


def v_fog(c, rng):
    path2(c, rng)
    seg, flags = args(c)
    set_flags(c, flags ^ 0x80)
    c.w32(G_FOG_MODE, rng.choice([0, 1, 2]))
    if rng.random() < 0.5:
        c.w32(G_RENDER_MODE, 3)
        c.w32(seg + 0x20, rng.choice([0, 1, 2]))


def v_point(c, rng):
    path2(c, rng)
    _, flags = args(c)
    set_flags(c, flags | 0x8000000)


def v_lights(c, rng):
    path2(c, rng)
    _, flags = args(c)
    set_flags(c, flags | 2 | (1 if rng.random() < 0.5 else 0))
    c.w32(G_OPTIONS, rng.randrange(4))


def v_writer(c, rng):
    seg, flags = args(c)
    c.w32(G_WRITER_ON, 1)
    set_flags(c, flags | 2)
    c.w64(seg + 0x138, c.rd(seg + 0x138, 'Q') & ~4)
    c.w32(G_OPTIONS, rng.randrange(4))
    c.w32(G_FOG_MODE, rng.choice([0, 1, 2]))
    c.w32(G_AA_MODE, rng.choice([0, 1, 2, 3]))


def v_scroll(c, rng):
    path2(c, rng)
    seg, _ = args(c)
    c.w32(G_SCROLL_ON, 1)
    for off in (0x16C, 0x170, 0x164, 0x168):
        c.w32(seg + off, float_bits(rng))


def v_prim(c, rng):
    path2(c, rng)
    seg, flags = args(c)
    c.w32(G_OPTIONS, 2 | rng.randrange(2))
    c.w32(G_FOG_MODE, rng.choice([0, 1, 2]))
    c.w32(G_AA_MODE, rng.choice([0, 1, 2, 3, 0xFFFFFFFF]))
    if rng.random() < 0.5:
        set_flags(c, flags ^ 0x100)
    c.w64(seg + 0x138, c.rd(seg + 0x138, 'Q') ^ (2 if rng.random() < 0.5 else 0))
    if rng.random() < 0.5:
        bit = rng.choice([37, 38, 39, 42, 43, 56, 61, 62])
        c.w64(seg + 0x130, c.rd(seg + 0x130, 'Q') ^ (1 << bit))


def v_cached(c, rng):
    path2(c, rng)
    seg, flags = args(c)
    c.w32(G_RENDER_MODE, 0)
    c.w32(G_LAST_FLAGS, flags)
    c.w32(G_LAST_MATERIAL, c.rd(seg + 0x158))
    c.w32(G_LAST_MATERIAL + 4, c.rd(seg + 0x15C) ^ (1 if rng.random() < 0.3 else 0))


def v_skin(c, rng):
    path2(c, rng)
    _, flags = args(c)
    set_flags(c, flags ^ rng.choice([0x4, 0x8, 0x10, 0x400, 1]))


def v_mix(c, rng):
    mix = rng.sample(VARIANTS[:-1], rng.randrange(2, 5))
    for v in mix:
        v(c, rng)
    return '+'.join(v.__name__[2:] for v in mix)


VARIANTS = [v_linked, v_additive, v_fog, v_point, v_lights, v_writer, v_scroll, v_prim, v_cached, v_skin, v_mix]


def scramble(c, rng):
    """random temporaries and upper halves: the original's register writes must all be reproduced"""
    for r in (1, 2, 3, 9, 10, 11, 12, 13, 14, 15, 24, 25):
        c.set_reg(r, rng.getrandbits(128))
    for r in (4, 5, 6, 7, 8):  # arguments: keep the low dword
        c.set_reg(r, rng.getrandbits(64) << 64 | c.low(r))
    for off in (OFF_HI, OFF_LO):
        c.cpu[off:off + 16] = rng.randbytes(16)


@gen(0x0023A280, seed=0x0023A280, count=462)
def pack_segment(c, rng):  # 11 variants: with count >= 11 x seeds every recorded call gets each
    v = VARIANTS[c.variant(len(VARIANTS))]
    c.label = v(c, rng) or v.__name__[2:]
    scramble(c, rng)


def classify(d):
    for root, _, files in sorted(os.walk(d)):
        for name in sorted(files):
            if name.startswith('0023A280_') and name.endswith('.ctx'):
                path = os.path.join(root, name)
                print(os.path.relpath(path, d), ' '.join(branches(Ctx(None, 0x0023A280, Snapshot(path)))))


if __name__ == '__main__':
    if len(sys.argv) != 3 or sys.argv[1] != '--classify':
        raise SystemExit(__doc__)
    classify(sys.argv[2])
