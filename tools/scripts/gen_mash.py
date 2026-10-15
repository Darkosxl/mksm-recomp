# gen_mash.py <first_frame> <frames> <seed> > out.args
# Seeded random gameplay mashing for ps2run --press: walking in all 8 directions, attacks (square/triangle/circle),
# jumps (cross, double jumps), specials (L1/R1 held + face button), L2/R2, and a START,+30 TRIANGLE,+50 TRIANGLE triple every
# ~300-450 frames (exercises the START game menu; TRIANGLE is its Exit button). In-engine cutscenes are unskippable (START, SELECT, X tested).
import random, sys

first, count, seed = int(sys.argv[1]), int(sys.argv[2]), int(sys.argv[3])
rng = random.Random(seed)
end = first + count
out = []
press = lambda f, b, n=6: out.append('--press %d:%s:%d' % (f, b, n)) if f < end else None

dirs = ['up', 'down', 'left', 'right', 'up+left', 'up+right', 'down+left', 'down+right']
attacks = ['square', 'triangle', 'circle', 'square', 'triangle', 'circle', 'square+triangle', 'circle+cross']
specials = ['l1+square', 'l1+triangle', 'l1+circle', 'l1+cross', 'r1+square', 'r1+triangle', 'r1+circle', 'r1+cross',
            'l1+r1', 'r2', 'l2', 'r2+square']

# dialog / cutscene dismissal right after the warp
for k in range(4):
    press(first + 40 + k * 60, 'cross', 4)
f = first + 20
next_start = first + 300
while f < end:
    d = rng.choice(dirs)
    hold = rng.randint(30, 120)
    press(f, d, hold)
    t = f + rng.randint(2, 10)
    while t < f + hold:
        r = rng.random()
        if r < 0.55: press(t, rng.choice(attacks), rng.randint(4, 10))
        elif r < 0.75:
            press(t, 'cross', 6)
            if rng.random() < 0.5: press(t + 14, 'cross', 6)  # double jump
        else:
            # special: hold the modifier a bit, tap the face button inside it
            sp = rng.choice(specials)
            mod, _, btn = sp.partition('+')
            press(t, mod, 14)
            if btn: press(t + 4, btn, 6)
        t += rng.randint(12, 28)
    f += hold + rng.randint(0, 12)
    if f >= next_start:
        press(f, 'start', 4)
        press(f + 30, 'triangle', 4)
        press(f + 50, 'triangle', 4)
        f += 50
        next_start = f + rng.randint(300, 450)
print('\n'.join(out))
