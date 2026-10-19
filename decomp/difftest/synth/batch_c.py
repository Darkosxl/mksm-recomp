"""Batch C (base snapshot): the TextureManager texture links (0x0026DDD0-0x0026DF80), cri_set_vsync_callback,
static_init_678920 and the screen pages, with the arguments and the memory each reads set up to cover every branch
(both outcomes of every getter, the three static-init paths, the three screen-page paths). Registers: random 128 bits
in every GPR but zero/sp/ra, HI/LO and f12-f15 (the link C parameters). The structures go to 0x01F00000, over the
snapshot's bytes there."""
from synth import A0, A1, A2, SLOT, TEX_SLOTS, gen, scramble

SCRATCH = 0x01F00000


def texture(c, rng, get):
    scramble(c, rng, range(12, 16))
    manager, slots = SCRATCH, SCRATCH + 0x100
    c.w32(manager + 0x20, slots)
    owner = rng.randrange(TEX_SLOTS)
    linked = owner if rng.random() < 0.15 else rng.randrange(TEX_SLOTS)
    for s in {owner, linked}:
        for off in (0x16, 0x246, 0x248):
            c.w16(slots + s * SLOT + off, rng.getrandbits(16))
    if get and rng.random() < 0.5:  # the flag the getter tests: both outcomes
        c.w16(slots + owner * SLOT + 0x16, rng.choice([0, 0xFFFF, 0x0008, 0x0020, 0x0080, rng.getrandbits(16)]))
    c.set_arg(A0, manager)
    c.set_arg(A1, owner)
    c.set_arg(A2, linked)


@gen(0x0026DDD0, 0x0026DE10, 0x0026DF80, base=True)
def texture_set_link(c, rng):  # set link C / link B / link C's four floats (f12-f15)
    texture(c, rng, False)


@gen(0x0026DE50, 0x0026DE88, 0x0026DEC0, base=True)
def texture_get_link(c, rng):  # linked slot of link A / B / C, or -1
    texture(c, rng, True)


@gen(0x0026F068, base=True)
def cri_callback(c, rng):
    scramble(c, rng, range(12, 16))
    c.set_arg(A0, rng.getrandbits(32))
    c.set_arg(A1, rng.choice([0, 0x00272B50, rng.getrandbits(32)]))


@gen(0x00273C38, base=True, count=72)
def static_init(c, rng):  # (1, 0xFFFF) clears the state block, anything else leaves it; both compares 64-bit
    scramble(c, rng, range(12, 16))
    c.set_low(A0, rng.choice([0, 1, 1, 1 << 32, rng.getrandbits(64)]))
    c.set_low(A1, rng.choice([0xFFFF, 0xFFFF, 0xFFFF | (1 << 32), 0xFFFFFFFFFFFFFFFF, 0, rng.getrandbits(64)]))
    for off in range(0, 0x48, 4):  # the state block it clears, and its neighbours: nonzero, so the stores show
        c.w32(0x00678920 + off, rng.getrandbits(32) | 1)


@gen(0x00275260, 0x002752B0, base=True)
def screen_page(c, rng):  # field double-buffering (+0, +4 both zero) swaps with odev (0x004F4D68), else +0x2c/+0x2a
    scramble(c, rng, range(12, 16))
    s = SCRATCH + 0x200
    words = [0, 0, 1, 0x80000000, rng.getrandbits(32)]
    c.w32(s + 0, rng.choice(words))
    c.w32(s + 4, rng.choice(words))
    c.w16(s + 0x2A, rng.getrandbits(16))
    c.w16(s + 0x2C, rng.getrandbits(16))
    c.w32(0x004F4D68, rng.choice([0, 1, 0x80000000, rng.getrandbits(32)]))
    c.set_arg(A0, s)
