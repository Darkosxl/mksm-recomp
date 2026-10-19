"""Batch E (zero machine): the fighters' GS state packers and the TextureManager uploads, with every branch covered
(shadow pass, fade alpha, draw modes, the pause menu light including a zero distance, CLUT/texel uploads with early
outs, swizzled 4/8-bit slots and the zero-size message)."""
from synth import A0, A1, A2, SLOT, TEX_SLOTS, fbits, float_bits, gen, ram_addr

CHAIN = 0x0065E300
PACKET = 0x006783E0


def chain(c, rng):
    """The chain builder: a write pointer into free RAM, stale open-code fields."""
    c.w32(CHAIN, ram_addr(rng, 0x200))
    for off in (4, 8, 0xc, 0x10):
        c.w32(CHAIN + off, rng.getrandbits(32))


def instance(c, rng):
    inst = ram_addr(rng, 0x1040)
    c.set_ptr(A0, inst)
    c.w32(inst + 0x1018, rng.choice([0, 0, 1, 2, rng.getrandbits(32)]))
    c.w32(inst + 0x1028, rng.choice([0xFFFFFFFF, 0xFFFFFFFF, 0, 64, 128, 255, rng.getrandbits(32)]))
    return inst


@gen(0x002478F0)
def pack_base_state(c, rng):  # pass-1 state into the packet at a0
    c.set_ptr(A0, ram_addr(rng, 0x80, 4))
    c.w32(0x004F4B2C, rng.choice([0, 0, 1, rng.getrandbits(32)]))
    c.w32(0x0066608C, fbits(rng.uniform(0.0, 1.0)) if rng.randrange(2) else float_bits(rng))


@gen(0x00247BD8)
def chain_base_state(c, rng):  # pass-1 state of instance a0 through the chain
    chain(c, rng)
    instance(c, rng)


@gen(0x00248058)
def chain_highlight_state(c, rng):  # pass-2 state of instance a0, TEX0 a1, through the chain
    chain(c, rng)
    inst = instance(c, rng)
    obj = ram_addr(rng, 0x100)
    c.w32(inst + 0x18, obj)
    c.set_reg(A1, rng.getrandbits(128))
    c.w32(0x004F50E4, rng.choice([0, 1]))
    pos = [rng.uniform(-500.0, 500.0) for _ in range(3)]
    light = pos if rng.randrange(6) == 0 else [v + rng.uniform(-300.0, 300.0) for v in pos]  # sometimes d2 = 0
    for i in range(3):
        c.w32(obj + 0xa0 + 4 * i, fbits(pos[i]) if rng.randrange(8) else float_bits(rng))
        c.w32(0x006CBAD0 + 4 * i, fbits(light[i]))
    c.w32(obj + 0xac, fbits(1.0))
    for i in range(4):  # 2^23-biased colour, sometimes anything
        c.w32(0x006635D0 + 4 * i, 0x4B000000 | rng.randrange(256) if rng.randrange(6) else float_bits(rng))
    c.w32(0x004F4C38, rng.choice([0, 1]))
    c.w32(0x004F4C3C, rng.choice([0, 32, 128, rng.getrandbits(32)]))


def upload(c, rng):
    """A TextureManager, slot a1 and the library's packet pointing into free RAM; returns the slot address."""
    mgr = ram_addr(rng, 0x40)
    slots = ram_addr(rng, SLOT * TEX_SLOTS)
    c.set_ptr(A0, mgr)
    c.w32(mgr + 0x20, slots)
    i = rng.choice([0, 1, 320, rng.randrange(TEX_SLOTS)])
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


@gen(0x00268AE0)
def upload_clut(c, rng):  # CLUT upload of slot a1
    upload(c, rng)


@gen(0x00268EC0)
def upload_image(c, rng):  # texel upload of slot a1
    upload(c, rng)
    c.w32(0x006728A8, rng.randrange(400))
