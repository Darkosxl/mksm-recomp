#!/usr/bin/env python3
"""Damage audit of the Versus combo ports: every ported input string a player can start in Versus, played on the mod
build and on a build without the ports, at several press gaps (remaster/vsaudit.sh runs them on a box).

Reachable = the string's first input has no direction: in Versus the matcher sees no directions from neutral
(0x1BFA68 keeps them only while the fighter has a target, +0x332C, which stays -1), so a string that starts with a
direction never runs, ported or not. Press-0 nodes (outcomes, auto follow-ups) are not inputs and end a string.

Usage:
  vsaudit.py jobs                 one line per string: fighter name button... (button: l2 r2 l1 r1 triangle circle cross
                                  square, '+'-joined when one node needs several)
  vsaudit.py report DIR           DIR/<build>/<fighter>/<name>-g<gap>/summary.txt for builds mod and base: per string
                                  the best damage over the gaps on each build; WORSE where the ports lose damage
"""
import glob
import os
import re
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import vscombos  # noqa: E402
import vsfallback  # noqa: E402
from wad import Wad  # noqa: E402

DIRS = 0xF000
buttons = vsfallback.buttons


def strings(tree):
    """input strings (lists of node indices from list 0) that pass through an added node"""
    added, out = set(tree.added), set()

    def rec(i, p):
        n = tree.nodes[i]
        if not n.press & 0xFF:
            return
        p = p + [i]
        if added & set(p):
            out.add(tuple(p))
        for c in tree.children(i):
            rec(c, p)
    for h in tree.top(0):
        if not (tree.nodes[h].press | tree.nodes[h].hold) & DIRS:
            rec(h, [])
    return sorted(out)


def jobs(wad):
    for t in vscombos.PORTS:
        tree = vsfallback.build(t, wad)
        seen = set()
        for p in strings(tree):
            bs = tuple(buttons(tree.nodes[i].press) for i in p)
            if bs not in seen:
                seen.add(bs)
                yield t, '_'.join(b.replace('+', '') for b in bs), bs


def damage(path):
    m = re.search(r'damage (\d+)', open(path).read())
    return int(m[1]) if m else None


def report(d):
    rows = {}
    for f in glob.glob(d + '/*/*/*-g*/summary.txt'):
        build, fighter, run = f.split('/')[-4:-1]
        name, gap = run.rsplit('-g', 1)
        rows.setdefault((fighter, name), {}).setdefault(build, {})[int(gap)] = damage(f)
    worse = 0
    for (fighter, name), b in sorted(rows.items()):
        best = {k: max((v for v in g.values() if v is not None), default=None) for k, g in b.items()}
        flag = ''
        if None not in (best.get('mod'), best.get('base')) and best['mod'] < best['base']:
            flag, worse = 'WORSE', worse + 1
        print('%-8s %-40s mod %4s base %4s  %s   %s' % (fighter, name, best.get('mod'), best.get('base'), flag, ' '.join(
            '%s:%s' % (k, ','.join('%d=%s' % (g, v) for g, v in sorted(b[k].items()))) for k in sorted(b))))
    print('%d strings, %d worse with the ports' % (len(rows), worse))


def main(argv):
    if argv[:1] == ['jobs']:
        for t, name, bs in jobs(Wad()):
            print(t, name, *bs)
    elif argv[:1] == ['report'] and len(argv) == 2:
        report(argv[1])
    else:
        print(__doc__)
        return 2
    return 0


if __name__ == '__main__':
    sys.exit(main(sys.argv[1:]))
