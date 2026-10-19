"""Batch J: the character culls and DrawModelSegments, on recorded calls (seed generators).

The character culls (decomp/src/render/character_cull.cpp): the paths the recorded scenes do not reach (the
per-segment box tests, the culled and straddling sphere results, the texture split) and CullCharacterSegmentsProjected,
which no reference scene calls. Seeds: recorded CullCharacterSegments calls (a0 = the instance, a1 = a real model with
its skeleton and segments). The generator edits that model in place: its class, the per-segment flag, the bounding
sphere (moved far away or grown, so the sphere tests return 0, 1 and 2), the segments' box flags and texture tags, the
two globals the functions read (0x4F4B58, 0x4F4B2C).

DrawModelSegments (decomp/src/render/draw_segments.cpp): the RAM and scratchpad record paths, the chain built in the
scratchpad, every segment kind, the near test, the light sets, the packet dedupe and the pass arguments, in three
profiles. Seeds: its own recorded calls.

Both: random 128 bits in every GPR but zero/sp/ra, HI/LO and the FPRs the functions touch. Synthetic data can make a
recompiled callee loop (decomp/synth.sh's replay time limit catches it).
"""
import struct

from synth import A0, A1, A2, A3, RAM_SIZE, fbits, gen, scramble

CLASSES = [0x20036, 0x20038, 0x2003B, 0x20044, 0x20056, 0x2004C]
SEGMENT = 0x1D0
FPRS = (0, 1, 2, 3, 12, 13, 14, 15, 20)
R = 0x004F4B40
PROFILES = ('state', 'chain', 'spr')


def i2f(b):
    return struct.unpack('<f', struct.pack('<I', b & 0xFFFFFFFF))[0]


def sext32(v):
    v &= 0xFFFFFFFF
    return v - (1 << 32) if v & 0x80000000 else v


@gen(0x002459F8, 0x00245D48, seed=0x002459F8, count=64)
def cull(c, rng):  # CullCharacterSegments(inst, model) and CullCharacterSegmentsProjected(inst, model)
    inst, model = c.low(A0), c.low(A1, 32)
    scramble(c, rng, FPRS)
    c.set_arg(A1, model)
    c.set_low(A0, inst)

    # class: the per-segment ones, the seed's own, or another
    cls = c.rd(model + 0x3C)
    c.w32(model + 0x3C, rng.choice(CLASSES + [cls, cls, cls, 0x20037, 0x2004D]))
    c.w32(model + 0xDC8, rng.choice([0, 0, 0, 1, rng.getrandbits(32)]))

    # the bounding sphere: as recorded, far away (culled), huge (straddling), tiny
    k = rng.randrange(6)
    if k == 1:
        for i in range(3):
            c.w32(model + 0xF40 + 4 * i, fbits(rng.choice([-1, 1]) * rng.uniform(1e4, 1e6)))
    elif k == 2:
        c.w32(model + 0xF6C, fbits(rng.uniform(1e3, 1e6)))
    elif k == 3:
        c.w32(model + 0xF6C, fbits(rng.uniform(0.0, 5.0)))
    elif k == 4:
        c.w32(model + 0xF6C, fbits(i2f(c.rd(model + 0xF6C)) * rng.uniform(0.5, 20.0)))
    elif k == 5:
        c.w32(model + 0xF40 + 4 * rng.randrange(4), fbits(rng.uniform(-300.0, 300.0)))

    c.w32(0x004F4B58, rng.choice([0, 1, 1]))
    c.w32(0x004F4B2C, rng.choice([0, 1, 1]))
    if rng.random() < 0.1:
        c.w32(c.rd(model + 0x18) + 0x40, 0)  # no placement node

    # segments: box flags, texture tags against the model's streamed texture, bone radius
    segs, count = c.rd(model + 0x20), sext32(c.rd(model + 0x38))
    if rng.random() < 0.05:
        c.w32(model + 0x38, rng.choice([0, 0xFFFFFFFF]))
    streamed = c.rd(model + 0x1008)
    for i in range(max(0, min(count, 64))):
        s = segs + SEGMENT * i
        if rng.random() < 0.3:
            c.w32(s + 0x14, rng.choice([0, 1, rng.getrandbits(32)]))
        if rng.random() < 0.5:
            c.w32(s + 0x1C, rng.choice([streamed, streamed, streamed ^ 1, rng.getrandbits(32)]))
        if rng.random() < 0.3:
            c.w32(s + 0x78, fbits(rng.choice([0.0, 1.0, 50.0, 1e4, 1e6])))


@gen(0x00242FF8, seed=0x00242FF8, count=120)
def draw_model_segments(c, rng):
    """DrawModelSegments (0x242FF8) from a recorded call of its own, in three profiles (fn_23a280 and fn_23d2f0 run
    recompiled in both runs and must get records they can pack, so the record contents change only where they do
    not reach them):
      state: a1 = 0 (no packing): every segment kind, the record flags, lights, near test, brightness, settings
      chain: a1 = 1 with the records as recorded: passes, packet dedupe, the chain modes, LOD, lights, near test
      spr:   the scratchpad double buffer on (the records come in by toSPR DMA), otherwise as recorded"""
    profile = PROFILES[c.variant(len(PROFILES))]
    c.label = profile
    args = {r: c.low(r) for r in (A0, A1, A2, A3)}  # as recorded
    scramble(c, rng, FPRS)
    model = args[A0] & 0xFFFFFFFF
    c.set_low(A0, args[A0])
    first = c.rd(0x004F50D0)
    end = sext32(args[A3])
    if end > first + 1 and rng.random() < 0.3:
        end = rng.randrange(first + 1, end + 1)
    c.set_arg(A3, end)
    c.set_arg(A1, {'state': 0, 'chain': 1, 'spr': args[A1]}[profile])
    c.set_arg(A2, rng.choice([0, 1, 1, 2]) if profile == 'chain' else args[A2])
    if profile == 'spr':
        c.w32(0x004F4D5C, rng.choice([1, 2, 2]))
        c.w32(0x004F50D8, rng.choice([0, 1]))
        return

    c.w32(0x00663450, rng.choice([0, 0, 1]))                 # uncached states
    c.w32(0x00661594, rng.choice([0, 0, 1]))
    c.w32(0x004F4C98, rng.choice([0, 1, 1]))                 # near test
    c.w32(0x00756C90, rng.choice([0, 1, 1]))                 # the setting fn_379988 returns
    c.w32(0x004F4C74, fbits(rng.choice([0.0, 10.0, 1e3, 1e5])))
    for off, choices in ((0xB4, [0, 1]), (0xC8, [0, 1, 2]), (0xA0, [0, 3, 3])):
        if rng.random() < 0.5:
            c.w32(R + off, rng.choice(choices))
    if rng.random() < 0.3:
        c.w32(model + 0x1048, fbits(rng.choice([128.0, 64.0, 255.0])))
    if profile == 'chain':
        c.w32(0x0066609C, rng.choice([0, 0, 1]))             # chain in the scratchpad
        c.w32(0x006634E0, rng.choice([0, 0, 1]))
        c.w32(0x006634E4, rng.choice([0, 0, 1]))
        c.w32(0x00666098, rng.choice([first, first + 1, 0, 0xFFFFFFFF]))
        for off, choices in ((0x24, [0, 1, 1]), (0x20, [0, 1, 1]), (0xD4, [0, 2, 2])):
            if rng.random() < 0.4:
                c.w32(R + off, rng.choice(choices))
    else:
        for off in (0x104, 0x108):
            c.w32(R + off, rng.choice([0, 0, 1]))
        if rng.random() < 0.5:
            c.w32(model + 0xE18, rng.getrandbits(32))

    table = c.rd(0x0062AC24)
    for i in range(max(0, first), max(0, min(end, first + 64))):
        s = c.rd(0x0065E460 + 4 * i)
        if not s or s + SEGMENT > RAM_SIZE:
            continue
        if profile == 'state':
            if rng.random() < 0.6:
                c.w32(s + 0x10, rng.choice([0, 1, 1, 2, 2, 3, 4, 5, 6, 15, 16, 0xFFFFFFFF]))
            if rng.random() < 0.3:
                c.w32(s + 0x14, rng.getrandbits(32))
            if rng.random() < 0.3:
                c.w32(s + 0x20, rng.choice([0, 1, 2]))
            flags = c.rd(s + 0x130, 'Q')
            for bit in (41, 42, 43, 46, 47, 54, 57):
                if rng.random() < 0.25:
                    flags ^= 1 << bit
            c.w64(s + 0x130, flags)
            flags2 = c.rd(s + 0x138, 'Q')
            for bit in (2, 10):
                if rng.random() < 0.3:
                    flags2 ^= 1 << bit
            c.w64(s + 0x138, flags2)
            if rng.random() < 0.2:  # the record's bounding box: small or huge for the near test
                k = rng.choice([0.01, 1e4])
                for j in range(3):
                    c.w32(s + 0x6C + 4 * j, fbits(i2f(c.rd(s + 0x60 + 4 * j)) + k))
        else:
            if rng.random() < 0.3:
                c.w32(s + 0x1A0, fbits(rng.choice([0.0, 1.0])))
            subs, n = c.rd(s + 0x1BC), sext32(c.rd(s + 0x12C))
            for j in range(max(0, min(n, 16))):
                if subs and subs + 32 * j + 4 <= RAM_SIZE and rng.random() < 0.5:
                    sent = (0x006615B8 + 4 * c.rd(subs + 32 * j)) & 0xFFFFFFFF
                    if sent + 4 <= RAM_SIZE:
                        c.w32(sent, rng.getrandbits(7))
        if rng.random() < 0.3:
            c.w32(s + 0x18, rng.choice([0, 2, 2]))
        if rng.random() < 0.3:
            c.w32(s + 0x1C4, rng.choice([0, 1, 2, 3]))
        state = c.rd(s)
        if table and rng.random() < 0.3 and table + state < RAM_SIZE:
            c.wr(table + state, 'b', rng.choice([0, 1, -5, 100]))
