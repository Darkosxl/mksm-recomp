"""Batch D, the draw path (zero machine): culling, lighting, TEX1, small accessors. Random VU0 state (vf0 kept),
frusta, spheres, boxes, light tables, segments and mesh lists. fn_22c308 is only reached when [0x4f41b0] is 0, and the
ELF has it at 1 with no code writing it, so it has synthetic contexts only."""
import struct

from synth import (A0, A1, A2, A3, OFF_VU0, SLOT, T0, T1, TEX_SLOTS, fbits, float_bits, gen, manager, ram_addr,
                   slot_index)


def vu0_random(c, rng):
    """Random VU0 registers (vf0 stays (0, 0, 0, 1)), so a decompiled function that leaves a VF, ACC, Q, MAC,
    status or clip flag different from the original fails."""
    for i in range(1, 32):
        lanes = [float_bits(rng) for _ in range(4)]
        c.cpu[OFF_VU0 + 16 * i:OFF_VU0 + 16 * i + 16] = struct.pack('<4I', *lanes)
    c.cpu[OFF_VU0:OFF_VU0 + 16] = struct.pack('<4I', 0, 0, 0, fbits(1.0))
    c.cpu[OFF_VU0 + 512:OFF_VU0 + 528] = struct.pack('<4I', *[float_bits(rng) for _ in range(4)])
    struct.pack_into('<I', c.cpu, OFF_VU0 + 560, float_bits(rng))
    struct.pack_into('<I', c.cpu, OFF_VU0 + 576, rng.getrandbits(16))
    struct.pack_into('<I', c.cpu, OFF_VU0 + 580, rng.getrandbits(12))
    struct.pack_into('<I', c.cpu, OFF_VU0 + 584, rng.getrandbits(24))


def set_vec(c, r, xyzw):
    """A 128-bit register holding four floats (qmtc2 operands)."""
    v = 0
    for i, bits in enumerate(xyzw):
        v |= (bits & 0xFFFFFFFF) << (32 * i)
    c.set_reg(r, v)


def world(rng, scale):
    """A float for positions and plane distances: mostly ordinary values, sometimes an EE corner case."""
    return float_bits(rng) if rng.randrange(10) == 0 else fbits(rng.uniform(-scale, scale))


def frustum(c, rng):
    """A frustum object: six planes at +0x00, two plane matrices at +0x80, the box margin at +0x100."""
    f = ram_addr(rng, 0x110)
    for i in range(6):
        c.words(f + 16 * i, [world(rng, 1), world(rng, 1), world(rng, 1), world(rng, 40)])
    for i in range(8):
        c.words(f + 0x80 + 16 * i, [world(rng, 1 if i % 4 < 3 else 40) for _ in range(4)])
    c.w32(f + 0x100, rng.choice([0, fbits(300.0), world(rng, 50)]))
    return f


def sphere(c, rng):
    set_vec(c, A1, [world(rng, 50), world(rng, 50), world(rng, 50), rng.getrandbits(32)])
    c.set_f(12, rng.choice([0, fbits(rng.uniform(0, 30)), fbits(rng.uniform(0, 3)), float_bits(rng)]))


@gen(0x0022C308)
def frustum_sphere_planes(c, rng):  # sphere a1 (radius f12) against the six planes of frustum a0
    vu0_random(c, rng)
    c.set_ptr(A0, frustum(c, rng))
    sphere(c, rng)


@gen(0x0022C620)
def frustum_box_margin(c, rng):  # frustum a0's box margin = f12
    c.set_ptr(A0, ram_addr(rng, 0x110))
    c.set_f(12, float_bits(rng))


@gen(0x0022C630)
def frustum_box(c, rng):  # box a2 (8 corners at +0x60) moved by matrix a1, against frustum a0
    vu0_random(c, rng)
    c.set_ptr(A0, frustum(c, rng))
    m = ram_addr(rng, 64)
    c.set_ptr(A1, m)
    for i in range(4):
        c.words(m + 16 * i, [world(rng, 1 if i < 3 else 40) for _ in range(3)] + [fbits(1.0) if i == 3 else 0])
    box = ram_addr(rng, 0xe0)
    c.set_ptr(A2, box)
    for i in range(8):
        c.words(box + 0x60 + 16 * i, [world(rng, 20), world(rng, 20), world(rng, 20),
                                      rng.choice([fbits(1.0), world(rng, 2)])])


@gen(0x0022C838)
def frustum_sphere(c, rng):  # sphere a1 (radius f12) against frustum a0, on VU0 or through fn_22c308
    vu0_random(c, rng)
    c.set_ptr(A0, frustum(c, rng))
    sphere(c, rng)
    c.w32(0x004F41B0, rng.choice([1, 1, 0, rng.getrandbits(32)]))


@gen(0x00236DB0)
def texture_filter(c, rng):  # TEX1_1 A+D for mesh a0 with draw flags a1
    mesh = ram_addr(rng, 0x160, 8)
    c.set_ptr(A0, mesh)
    if rng.randrange(3):
        c.w32(mesh + 0x158, rng.choice([0, 1, 2, 3, rng.getrandbits(32)]))
        c.w32(mesh + 0x15c, rng.choice([0, 1, 0x7f0, -0x7f0, rng.getrandbits(32)]))
    flags = rng.getrandbits(128)
    c.set_reg(A1, flags | 0x10000 if rng.randrange(2) else flags & ~0x10000)
    g = 0x004F4FE0
    for off, choices in ((0x00, [0, 1]), (0x04, [0, 1, 3, 6]), (0x08, [0, 1]), (0x0c, [0, 1, 4, 5]),
                         (0x10, [0, 1]), (0x14, [0, 1, 3]), (0x18, [0, 0x10, -0x7f0]), (0x24, [0, 0, 1])):
        c.w32(g + off, rng.choice(choices + [rng.getrandbits(32)]) if rng.randrange(8) else rng.getrandbits(32))
    c.w32(0x004E59DC, rng.choice([0, 1]))
    c.w32(0x006427B0, rng.choice([0xc2, 3, 0, rng.getrandbits(32)]))
    c.w32(0x0065E300, ram_addr(rng, 16, 16))


@gen(0x0023CF90)
def pick_point_lights(c, rng):  # the two strongest point lights for position a0
    vu0_random(c, rng)
    n = rng.choice([0, 1, 2, 3, 5, 8, rng.randrange(16), -1])
    c.w32(0x00678920, n)
    for i in range(max(n, 0)):
        rec = 0x00678940 + 0x40 * i
        inner = rng.uniform(0, 10)
        outer = inner if rng.randrange(8) == 0 else inner + rng.uniform(0, 20)
        c.words(rec, [world(rng, 30), world(rng, 30), world(rng, 30), fbits(1.0)])
        c.words(rec + 0x20, [fbits(inner), fbits(outer), rng.choice([fbits(rng.uniform(0, 900)), float_bits(rng)])])
        c.w32(rec + 0x34, rng.choice([fbits(rng.uniform(0, 2)), float_bits(rng)]))
    set_vec(c, A0, [world(rng, 30), world(rng, 30), world(rng, 30), rng.getrandbits(32)])


@gen(0x0023DB48)
def highlight_matrix(c, rng):  # highlight matrix of instance a0 for position *a1 and light a2
    vu0_random(c, rng)
    inst = ram_addr(rng, 0x10a0)
    c.set_ptr(A0, inst)
    pos = ram_addr(rng, 16, 4)
    c.set_ptr(A1, pos)
    c.words(pos, [world(rng, 30), world(rng, 30), world(rng, 30), fbits(1.0)])
    set_vec(c, A2, [world(rng, 1), world(rng, 1), world(rng, 1), 0])
    c.words(0x006CBAD0, [world(rng, 30), world(rng, 30), world(rng, 30)])
    c.w32(0x00663640, rng.choice([0, 1]))


@gen(0x00240438)
def scroll_uv(c, rng):  # one scrolling-UV step of segment a0
    seg = ram_addr(rng, 0x180)
    c.set_ptr(A0, seg)
    c.w32(seg + 0x10, rng.choice([2, 0, 1, 3, rng.getrandbits(32)]))
    for off in (0x164, 0x168):  # moderate offsets: the wrap loops run once per whole turn
        c.w32(off + seg, rng.choice([0, fbits(1.0), fbits(-1.0), fbits(rng.uniform(-6, 6)), fbits(rng.uniform(-1, 1))]))
    for off in (0x16c, 0x170):
        c.w32(off + seg, rng.choice([0, 0x80000000, rng.getrandbits(23), fbits(rng.uniform(-0.1, 0.1)),
                                     fbits(rng.uniform(-2, 2))]))


@gen(0x0024CFF8)
def sort_meshes(c, rng):  # qsort the a0 meshes at a1 by their textures' link A
    n = rng.choice([0, 1, 2, 3, 5, 9, -1, rng.randrange(16)])
    c.set_sext(A0, n)
    mgr, slots = ram_addr(rng, 0x40), ram_addr(rng, SLOT * TEX_SLOTS)
    c.w32(0x004EFE94, mgr)
    c.w32(mgr + 0x20, slots)
    arr = ram_addr(rng, 4 * 16, 4)
    c.set_ptr(A1, arr)
    for i in range(max(n, 0)):
        mesh = ram_addr(rng, 0x20, 4)
        c.w32(arr + 4 * i, mesh)
        s = rng.randrange(8) if rng.randrange(2) else slot_index(rng)
        c.w32(mesh + 0x1c, s)
        c.w16(slots + SLOT * s + 0x16, rng.choice([0, 0x08, rng.getrandbits(16)]))
        c.w16(slots + SLOT * s + 0x246, rng.randrange(6))


@gen(0x0026DF48)
def link_params(c, rng):  # the four link C parameters of slot a1 into *a2, *a3, *t0, *t1
    slots = manager(c, rng)
    i = slot_index(rng)
    c.set_sext(A1, i)
    c.write(slots + SLOT * i + 0x180, rng.getrandbits(128).to_bytes(16, 'little'))
    for r in (A2, A3, T0, T1):
        c.set_ptr(r, ram_addr(rng, 4, 4))


@gen(0x00275300)
def zbuffer_page(c, rng):  # Z buffer page
    c.w16(0x0067B786, rng.getrandbits(16))


@gen(0x002753A0)
def zbuffer_format(c, rng):  # Z buffer format
    c.w16(0x0067B780, rng.getrandbits(16))


@gen(0x00326140)
def ground_y(c, rng):  # object a0's ground height
    o = ram_addr(rng, 0x100, 4)
    c.set_ptr(A0, o)
    c.w32(o + 0xf4, float_bits(rng))


@gen(0x00379988)
def point_light_on(c, rng):  # point light on flag of a1, else of a0
    a = ram_addr(rng, 4, 4)
    c.set_ptr(A0, a)
    c.w32(a, rng.choice([0, 1, rng.getrandbits(32)]))
    if rng.randrange(2):
        b = ram_addr(rng, 4, 4)
        c.set_ptr(A1, b)
        c.w32(b, rng.choice([0, 1, rng.getrandbits(32)]))
    else:
        c.set_reg(A1, rng.getrandbits(64) << 64)  # NULL in the low 64 bits
