#!/usr/bin/env python3
"""Mutated difftest contexts for the instance draws' paths no reference scene reaches.

Seeds are recorded fn_246cf0 contexts (a fighter: a model with bones, segments and a 3-light rig, in a fully booted
machine). Each output context keeps the seed's RAM and registers and changes the switches the draws branch on:
  fn_249060: the fighter drawn through the world/prop path (instance != 0), with RenderSettings / model / light
             variants (culling modes, skinning copies, anchor transform, glow, falloff branches, sort, limits, exits)
  fn_246cf0: effect pass, program families, sort, effect timer branches
Plus fixed cases from stage seeds (fn_249060 contexts): the global stage list, the pass-1 exits, cull_mode 2 -> 3.
Why: in all reference scenes fn_249060 only draws the stage and fn_246cf0 never runs the effect pass, so the
recorded contexts and the scene gate cover neither; the seeds keep the rest of the machine real.
Seeds: record with PS2_DIFFTEST_RECORD=<dir> PS2_DIFFTEST_FUNCS=00249060,00246CF0 (remaster/run.sh) and keep them.
usage: mutate_instance.py <outdir> <count per function> <fighter seeds (00246CF0_*.ctx)> [-- <stage seeds>]
       then: build/native-mksm/difftest --keep-going <outdir>   (AWS only; ~33 MB per context)"""
import os, random, struct, sys

HDR, CPU = 40, 1440
RAM = 32 << 20
R = 0x4F4B40


class Ctx:
    def __init__(self, path):
        with open(path, 'rb') as f:
            self.hdr = bytearray(f.read(HDR))
            self.cpu = bytearray(f.read(CPU))
            self.ram = bytearray(f.read(RAM))
            self.rest = f.read()

    def reg(self, r): return struct.unpack_from('<I', self.cpu, 16 * r)[0]
    def setreg(self, r, v): struct.pack_into('<Q', self.cpu, 16 * r, v & 0xFFFFFFFF | (0xFFFFFFFF00000000 if v & 0x80000000 else 0))
    def w(self, a): return struct.unpack_from('<I', self.ram, a & 0x1FFFFFF)[0]
    def setw(self, a, v): struct.pack_into('<I', self.ram, a & 0x1FFFFFF, v & 0xFFFFFFFF)
    def setf(self, a, v): struct.pack_into('<f', self.ram, a & 0x1FFFFFF, v)

    def save(self, path, addr, index):
        struct.pack_into('<II', self.hdr, 8, addr, index)
        struct.pack_into('<I', self.cpu, 548, addr)  # pc
        with open(path, 'wb') as f:
            f.write(self.hdr + self.cpu + self.ram + self.rest)


def mutate_249060(c, rng, log):
    o, model = c.reg(4), c.reg(6)
    pas = 1 if rng.random() < 0.2 else 0
    c.setreg(7, pas)
    sets = {}
    def put(name, a, v, f=False):
        (c.setf if f else c.setw)(a, v)
        sets[name] = v
    put('anchor_free', R + 0x108, rng.choice([0, 1]))
    put('glow', 0x4F6E44, rng.choice([0, 1]))
    put('skinning', R + 0x18, rng.choice([0, 1, 1]))
    put('cull', R + 0xC4, rng.choice([0, 1, 1, 1]))
    put('cull_mode', R + 0xA0, rng.choice([1, 1, 1, 0, 2]))
    put('crossing', model + 0xDC8, rng.choice([0, 1]))
    put('sort', model + 0x1018, rng.choice([0, 2]))
    put('max', 0x4F507C, rng.choice([10000, 10000, 3, 1]))
    put('nopass1', R + 0x44, rng.choice([0, 0, 1]))
    put('areaoff', R + 0x48, rng.choice([0, 1]))
    put('glow_scale', R + 0xD8, rng.choice([0.0, 0.75]), True)
    put('specular', R + 0xDC, rng.choice([0.0, 0.5, 1.0]), True)
    rig = c.w(model + 0x2C)
    lights = c.w(rig + 0x3C)
    r = rng.random()
    if r < 0.1:
        put('unlit', rig + 0x3C, 0)
    elif r < 0.6:
        put('l0_near', lights + 0x20, 1e9, True)    # inside near: falloff 1
        put('l1_far', lights + 0x30 + 0x24, 1.0, True)  # beyond far: falloff 0
    if rng.random() < 0.15:  # the whole model off screen: visibility 0
        bones = c.w(model + 0x18)
        for k in range(3):
            put(f'b0s{k}', bones + 0xA0 + 4 * k, 1e7, True)
        put('radius', model + 0xF68, 1.0, True)
    r = rng.random()
    if r < 0.05:
        put('hidden', o + 0x70, 1)
    elif r < 0.1 and pas:
        put('nosecond', 0x6618E0, 1)
    elif r < 0.15 and pas:
        put('stageonly', 0x65E384, 1)
    log.append(f'pass={pas} ' + ' '.join(f'{k}={v}' for k, v in sets.items()))


def mutate_246cf0(c, rng, log):
    o, model = c.reg(4), c.reg(6)
    three, effect = rng.choice([0, 1]), rng.choice([0, 1, 1])
    c.setreg(8, three)
    c.setreg(9, effect)
    sets = {}
    def put(name, a, v, f=False):
        (c.setf if f else c.setw)(a, v)
        sets[name] = v
    put('effprog', 0x4F4B2C, rng.choice([0, 1]))
    put('alt', 0x6660C0, rng.choice([0, 0, 1]))
    put('sort', model + 0x1018, rng.choice([0, 2]))
    if effect:
        put('effect_now', o + 0x84, rng.choice([0.0, 50.0, 1e6]), True)
        put('effect_end', o + 0xF4, rng.choice([0.0, 100.0, 200.0]), True)
        put('scale', 0x66608C, rng.choice([1.0, 0.3]), True)
    log.append(f'three={three} effect={effect} ' + ' '.join(f'{k}={v}' for k, v in sets.items()))


def targeted(out, stage, fighter):
    cases = [  # (seed list, pass, {addr: value}, label)
        (stage, 0, {R + 0x14: 0}, 'stage global list'),
        (stage, 0, {R + 0x14: 0, R + 0x18: 0}, 'stage global list, no skinning'),
        (stage, 1, {R + 0xA0: 2}, 'stage pass1 cull_mode 2->3'),
        (stage, 1, {R + 0xA0: 2, 0x4F50CC: 1}, 'stage pass1 no deferred'),
        (stage, 1, {0x6618E0: 1}, 'pass1 no second pass'),
        (stage, 1, {0x65E384: 1}, 'stage pass1 stage-only (draws)'),
        (stage, 0, {0x65E384: 1, 0x6618E0: 1}, 'stage pass0 with both flags'),
        (stage, 1, {R + 0x44: 1}, 'stage pass1 no pass-1 segments'),
        (stage, 0, {R + 0x48: 1, 0x4F507C: 2}, 'stage area mask off, cap 2'),
        (fighter, 1, {0x65E384: 1}, 'instance pass1 stage-only (exits)'),
        (fighter, 1, {0x6618E0: 1}, 'instance pass1 no second pass'),
        (fighter, 1, {R + 0xA0: 2}, 'instance pass1 cull_mode 2->3'),
    ]
    n = 0
    with open(os.path.join(out, 'cases.txt'), 'w') as log:
        for seeds, pas, sets, label in cases:
            for s in seeds[:2]:
                c = Ctx(s)
                c.setreg(7, pas)
                for a, v in sets.items():
                    c.setw(a, v)
                c.save(os.path.join(out, f'00249060_t{n:03d}.ctx'), 0x249060, 2000 + n)
                log.write(f't{n:03d} {label} ({os.path.basename(s)})\n')
                n += 1
    print(f'{n} targeted contexts in {out}')


def main():
    out, count, rest = sys.argv[1], int(sys.argv[2]), sys.argv[3:]
    seeds, stage = (rest[:rest.index('--')], rest[rest.index('--') + 1:]) if '--' in rest else (rest, [])
    os.makedirs(out, exist_ok=True)
    rng = random.Random(7)
    for addr, fn in ((0x249060, mutate_249060), (0x246CF0, mutate_246cf0)):
        log = []
        for n in range(count):
            c = Ctx(seeds[n % len(seeds)])
            fn(c, rng, log)
            c.save(os.path.join(out, f'{addr:08X}_m{n:03d}.ctx'), addr, 1000 + n)
        with open(os.path.join(out, f'{addr:08X}.txt'), 'w') as f:
            f.write('\n'.join(f'm{n:03d} {line}' for n, line in enumerate(log)) + '\n')
    print(f'{2 * count} mutated contexts in {out}')
    if stage:
        targeted(out, stage, seeds)


if __name__ == '__main__':
    main()
