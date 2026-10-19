"""Batch B (zero machine): screen brightness, model-skip flag, radians to angle, asset records, the guard-band
outcode, and the TextureManager accessors. Floats include the EE corner cases, integers sit near the compared
boundaries, and register upper words stay random so 64-bit compares see arbitrary upper halves."""
from synth import A0, A1, A2, A3, RAM_SIZE, SLOT, T0, fbits, float_bits, gen, int_edge, manager, ram_addr, slot_index


@gen(0x00226B70)
def screen_brightness(c, rng):  # global 0x4F4C54 = (int)(f12 * 0.25 * 128)
    c.set_f(12, float_bits(rng))


@gen(0x00226DF0)
def skip_model_render(c, rng):  # global 0x4F4D60 = a0
    pass


@gen(0x0024C238)
def radians_to_angle(c, rng):  # radians -> 12-bit angle
    if rng.randrange(3):
        x = rng.uniform(-7.0, 7.0) if rng.randrange(2) else rng.choice([3.14159265, -3.14159265, 0.0, 6.2831855, -6.2831855])
        c.set_f(12, fbits(x))
    else:
        c.set_f(12, float_bits(rng))


@gen(0x00260B40)
def asset_object(c, rng):  # word +4 of the 12-byte record (a0 & 0xffff) at 0x66B8D0
    i = rng.choice([0, 1, 2, rng.randrange(64), rng.randrange(0x10000)])
    c.set_reg(A0, rng.getrandbits(112) << 16 | i)
    rec = 0x0066B8D0 + 12 * i
    if rec + 12 <= RAM_SIZE:
        c.write(rec, rng.getrandbits(96).to_bytes(12, 'little'))


@gen(0x002655C0)
def guard_band_outcode(c, rng):  # outcode of the point *t0 against the box (a0, a1)-(a2, a3)
    p = ram_addr(rng, 8, 4)
    c.set_ptr(T0, p)
    px, py = rng.randrange(-640, 640), rng.randrange(-480, 480)
    c.w32(p, px)
    c.w32(p + 4, py)
    for r, around in ((A0, px), (A1, py), (A2, px), (A3, py)):
        if rng.randrange(8):
            c.set_sext(r, int_edge(rng, around))
        # else: keep the random 128 bits (64-bit compares with arbitrary upper words)


@gen(0x0026CD50)
def buffer_width(c, rng):  # TBW of texture record a1
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


@gen(0x0026D2E8, 0x0026D308)
def tex0(c, rng):  # TEX0 / MIPTBP1 of slot a1
    slots = manager(c, rng)
    i = slot_index(rng)
    c.set_sext(A1, i)
    c.w64(slots + SLOT * i + 0x230, rng.getrandbits(64))
    c.w64(slots + SLOT * i + 0x238, rng.getrandbits(64))


@gen(0x0026D590)
def get_slot(c, rng):  # slot a1 or NULL
    manager(c, rng)
    k = rng.randrange(4)
    if k == 0:
        c.set_reg(A1, rng.getrandbits(128))  # anything
    elif k == 1:
        c.set_sext(A1, rng.choice([321, 322, -1, -321, 0x7FFFFFFF]))
    else:
        c.set_sext(A1, slot_index(rng))


@gen(0x0026DD90)
def set_linked_texture(c, rng):  # link slot a1 to slot a2
    slots = manager(c, rng)
    a = slot_index(rng)
    b = a if rng.randrange(4) == 0 else slot_index(rng)
    c.set_sext(A1, a)
    c.set_sext(A2, b)
    for i in {a, b}:
        c.w16(slots + SLOT * i + 0x16, rng.getrandbits(16))
        c.w16(slots + SLOT * i + 0x246, rng.getrandbits(16))
