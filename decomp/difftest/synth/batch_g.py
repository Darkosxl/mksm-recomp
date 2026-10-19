"""Batch G (base snapshot): SetNodeLights (0x0023D2F0, only called by fn_242ff8 under a flag none of the reference
scenes sets) and SetNodeLightMatrices (0x0023D128, only called by it). A recorded gameplay frame is the machine, so
the callees see a running game. Registers: random 128 bits in every GPR but zero/sp/ra, HI/LO, f0-f19 (the
callee-saved f20-f31 stay the snapshot's). Set up: a node with a world matrix at +0x50 and a position at +0xa0, the
default and node light sets, and for SetNodeLights a point-light table that fn_23cf90 searches, so all three cases
(no, one, two or more point lights) and every fade branch (inside the full radius, beyond the zero radius, in
between, equal radii) come up."""
import math

from synth import A0, fbits, gen, scramble

SCRATCH = 0x01F00000  # RAM the synthetic node goes to
DEFAULT_LIGHTS, AMBIENT, NODE_LIGHTS = 0x00663560, 0x006635C0, 0x006635E0
ROW3_IN, ROW3_OUT = 0x00661A20, 0x00661950
POINT_COUNT, POINT_TABLE, NEAREST = 0x00678920, 0x00678940, 0x007800A0


def odd_float(rng):
    """EE corner cases: zeros, denormals, exponent 255, huge"""
    sign = rng.getrandbits(1) << 31
    return sign | rng.choice([0, rng.getrandbits(23), 0x7F800000 | rng.getrandbits(23), rng.randrange(0x7C000000, 0x7F800000)])


def some_float(rng, lo=-50.0, hi=50.0):
    return odd_float(rng) if rng.random() < 0.08 else fbits(rng.uniform(lo, hi))


def vec(rng, lo=-50.0, hi=50.0):
    return [some_float(rng, lo, hi) for _ in range(4)]


def rotation(rng):
    """a 4x4 world matrix: mostly a real rotation (rows unit length) with a translation, sometimes random words"""
    if rng.random() < 0.2:
        return [some_float(rng, -2.0, 2.0) for _ in range(16)]
    a, b = rng.uniform(-math.pi, math.pi), rng.uniform(-math.pi, math.pi)
    ca, sa, cb, sb = math.cos(a), math.sin(a), math.cos(b), math.sin(b)
    m = []
    for r in ([cb, 0.0, -sb], [sa * sb, ca, sa * cb], [ca * sb, -sa, ca * cb]):
        m += [fbits(x) for x in r] + [fbits(0.0)]
    return m + [fbits(rng.uniform(-500, 500)) for _ in range(3)] + [fbits(1.0)]


def node(c, rng, position):
    n = SCRATCH + 16 * rng.randrange(0x100)
    c.words(n + 0x50, rotation(rng))
    c.words(n + 0xA0, position)
    c.set_arg(A0, n)


def light_sets(c, rng):
    for i in range(6):
        c.words(DEFAULT_LIGHTS + 16 * i, vec(rng, -1.0, 1.0))
        c.words(NODE_LIGHTS + 16 * i, vec(rng, -1.0, 1.0))
    c.words(AMBIENT, vec(rng, 0.0, 1.0))
    c.words(ROW3_IN, vec(rng, -1.0, 1.0))
    c.words(ROW3_OUT, vec(rng, -1.0, 1.0))


@gen(0x0023D128, base=True, count=64)
def set_node_light_matrices(c, rng):
    scramble(c, rng, range(20))
    node(c, rng, vec(rng, -100.0, 100.0))
    light_sets(c, rng)


@gen(0x0023D2F0, base=True, count=64)
def set_node_lights(c, rng):
    scramble(c, rng, range(20))
    pos = [rng.uniform(-100.0, 100.0) for _ in range(3)]
    node(c, rng, [fbits(x) for x in pos] + [fbits(1.0)])
    light_sets(c, rng)
    count = rng.choice([0, 1, 1, 2, 2, 3, 4, 6])
    c.w32(POINT_COUNT, count)
    for i in range(count):
        rec = POINT_TABLE + 0x40 * i
        d = [rng.uniform(-30.0, 30.0) for _ in range(3)]
        dist = sum(x * x for x in d) ** 0.5
        full = rng.choice([rng.uniform(0.0, dist), rng.uniform(dist, 2 * dist + 1), dist])
        zero = rng.choice([rng.uniform(full, full + 40.0), full, rng.uniform(0.0, dist), rng.uniform(dist, dist + 40.0)])
        c.words(rec, [fbits(p + x) for p, x in zip(pos, d)] + [fbits(rng.uniform(-2.0, 2.0))])
        c.words(rec + 0x10, vec(rng, 0.0, 2.0))
        c.words(rec + 0x20, [fbits(full), fbits(zero), fbits(rng.choice([dist * dist * 2 + 1, dist * dist / 2]))])
        c.w32(rec + 0x34, fbits(rng.uniform(0.1, 3.0)))
    # the indices fn_23cf90 leaves alone when no light is bright enough: keep them inside the table
    for k in range(2):
        c.w32(NEAREST + 4 * k, rng.randrange(max(count, 1)))
