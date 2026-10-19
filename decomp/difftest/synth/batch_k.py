"""Batch K: the instance draws' paths no reference scene reaches, on recorded calls (seed generators).

In all reference scenes fn_249060 only draws the stage and fn_246cf0 never runs the effect pass, so the recorded
contexts and the scene gate cover neither; the seeds keep the rest of the machine real. Fighter seeds are recorded
fn_246cf0 calls (a model with bones, segments and a 3-light rig, in a fully booted machine), stage seeds recorded
fn_249060 calls. Each context keeps its seed's RAM and registers and changes the switches the draws branch on:
  fn_249060: fixed cases first, each on two seeds: the stage's global list, the pass-1 exits, cull_mode 2 -> 3 (stage
             seeds) and the instance pass-1 exits (fighter seeds); then the fighter drawn through the world/prop path
             (instance != 0), with RenderSettings / model / light variants (culling modes, skinning copies, anchor
             transform, glow, falloff branches, sort, limits, exits)
  fn_246cf0: effect pass, program families, sort, effect timer branches
"""
import os

from synth import A0, A2, A3, T0, T1, gen, real, sext64

FIGHTER, STAGE = 0x00246CF0, 0x00249060
R = 0x4F4B40

real(0x0024CF08)  # DrawInstance: its recorded calls replay as real contexts

CASES = [  # (seed function, pass, {addr: value}, label)
    (STAGE, 0, {R + 0x14: 0}, 'stage global list'),
    (STAGE, 0, {R + 0x14: 0, R + 0x18: 0}, 'stage global list, no skinning'),
    (STAGE, 1, {R + 0xA0: 2}, 'stage pass1 cull_mode 2->3'),
    (STAGE, 1, {R + 0xA0: 2, 0x4F50CC: 1}, 'stage pass1 no deferred'),
    (STAGE, 1, {0x6618E0: 1}, 'pass1 no second pass'),
    (STAGE, 1, {0x65E384: 1}, 'stage pass1 stage-only (draws)'),
    (STAGE, 0, {0x65E384: 1, 0x6618E0: 1}, 'stage pass0 with both flags'),
    (STAGE, 1, {R + 0x44: 1}, 'stage pass1 no pass-1 segments'),
    (STAGE, 0, {R + 0x48: 1, 0x4F507C: 2}, 'stage area mask off, cap 2'),
    (FIGHTER, 1, {0x65E384: 1}, 'instance pass1 stage-only (exits)'),
    (FIGHTER, 1, {0x6618E0: 1}, 'instance pass1 no second pass'),
    (FIGHTER, 1, {R + 0xA0: 2}, 'instance pass1 cull_mode 2->3'),
]
TARGETED = 2 * len(CASES)


def pick_249060(i, sizes):
    """contexts 0..23: case i / 2 on its seed kind's seed i mod 2; then fighter seeds in turn"""
    if i < TARGETED:
        fn = CASES[i // 2][0]
        return fn, i % 2 % sizes[fn]
    return FIGHTER, (i - TARGETED) % sizes[FIGHTER]


class Sets:
    """the switches a mutation writes, for the context's label"""

    def __init__(self, c):
        self.c, self.items = c, []

    def put(self, name, a, v, f=False):
        self.c.wr(a, 'f' if f else 'I', v)
        self.items.append(f'{name}={v}')


@gen(STAGE, seed=(FIGHTER, STAGE), pick=pick_249060, count=TARGETED + 48)
def draw_instance_segments(c, rng):
    if c.i < TARGETED:
        _, pas, sets, label = CASES[c.i // 2]
        c.set_low(A3, pas)
        for a, v in sets.items():
            c.w32(a, v)
        c.label = f'{label} ({os.path.basename(c.seed_path)})'
        return
    o, model = c.low(A0, 32), c.low(A2, 32)
    pas = 1 if rng.random() < 0.2 else 0
    c.set_low(A3, pas)
    s = Sets(c)
    s.put('anchor_free', R + 0x108, rng.choice([0, 1]))
    s.put('glow', 0x4F6E44, rng.choice([0, 1]))
    s.put('skinning', R + 0x18, rng.choice([0, 1, 1]))
    s.put('cull', R + 0xC4, rng.choice([0, 1, 1, 1]))
    s.put('cull_mode', R + 0xA0, rng.choice([1, 1, 1, 0, 2]))
    s.put('crossing', model + 0xDC8, rng.choice([0, 1]))
    s.put('sort', model + 0x1018, rng.choice([0, 2]))
    s.put('max', 0x4F507C, rng.choice([10000, 10000, 3, 1]))
    s.put('nopass1', R + 0x44, rng.choice([0, 0, 1]))
    s.put('areaoff', R + 0x48, rng.choice([0, 1]))
    s.put('glow_scale', R + 0xD8, rng.choice([0.0, 0.75]), True)
    s.put('specular', R + 0xDC, rng.choice([0.0, 0.5, 1.0]), True)
    rig = c.rd(model + 0x2C)
    lights = c.rd(rig + 0x3C)
    r = rng.random()
    if r < 0.1:
        s.put('unlit', rig + 0x3C, 0)
    elif r < 0.6:
        s.put('l0_near', lights + 0x20, 1e9, True)    # inside near: falloff 1
        s.put('l1_far', lights + 0x30 + 0x24, 1.0, True)  # beyond far: falloff 0
    if rng.random() < 0.15:  # the whole model off screen: visibility 0
        bones = c.rd(model + 0x18)
        for k in range(3):
            s.put(f'b0s{k}', bones + 0xA0 + 4 * k, 1e7, True)
        s.put('radius', model + 0xF68, 1.0, True)
    r = rng.random()
    if r < 0.05:
        s.put('hidden', o + 0x70, 1)
    elif r < 0.1 and pas:
        s.put('nosecond', 0x6618E0, 1)
    elif r < 0.15 and pas:
        s.put('stageonly', 0x65E384, 1)
    c.label = f'pass={pas} ' + ' '.join(s.items)


@gen(FIGHTER, seed=FIGHTER, count=64)
def draw_fighter_instance(c, rng):
    o, model = c.low(A0, 32), c.low(A2, 32)
    three, effect = rng.choice([0, 1]), rng.choice([0, 1, 1])
    c.set_low(T0, sext64(three))
    c.set_low(T1, sext64(effect))
    s = Sets(c)
    s.put('effprog', 0x4F4B2C, rng.choice([0, 1]))
    s.put('alt', 0x6660C0, rng.choice([0, 0, 1]))
    s.put('sort', model + 0x1018, rng.choice([0, 2]))
    if effect:
        s.put('effect_now', o + 0x84, rng.choice([0.0, 50.0, 1e6]), True)
        s.put('effect_end', o + 0xF4, rng.choice([0.0, 100.0, 200.0]), True)
        s.put('scale', 0x66608C, rng.choice([1.0, 0.3]), True)
    c.label = f'three={three} effect={effect} ' + ' '.join(s.items)
