#!/usr/bin/env python3
"""Story NPC moves on Versus Kitana, as command-tree changes next to the combo ports (vsfallback.build calls add()),
the way vsboss.py gives Versus Reptile the story boss's. The states stay their group's global ids;
decomp/src/mod/versus_boss_moves.cpp gives them clips, records and events on Versus Kitana.

Source groups: kitana_npc (group 65, ERG.DT2 6572, states 1701..), her story NPC, and her story sisters mileena
(group 66, 6582, 1747..) and jade (group 67, 6592, 1782..). Inputs: hold Special (R1) and L1, then tap a button, the
same free "boss" layer as Reptile's (see vsboss.py; on her tree L1 too only reaches the lock-on roll g11_rt_l):
  R1 + L1 + square      mileena d20_cntr (1762): low sweep that launches, 3 damage    (her R1 + square: p10_sp_p)
Each input is a copy of the non-directional list-0 nodes of one of her specials (TEMPLATE), so that special's level and
upgrade requirements gate it, plus L1 held. Not ported: see DROPPED.
Usage: vsboss_kitana.py report
"""
import sys

import dt2
import fstates
from wad import Wad

SWEEP = 1762                  # mileena d20_cntr
DIRS = 0xF000                 # direction bits in press / hold
L1 = 0x04                     # pad bit (press / hold / ignore)
P10, L10, M10 = 138, 128, 132  # her specials (local states): R1 + square, R1 + circle, R1 + triangle
# (button tapped with R1 + L1 held, TEMPLATE: her special whose list-0 nodes are copied, donor global state)
MOVES = ((0x80, P10, SWEEP),)
DROPPED = """
Measured on Versus Kitana (P1 x/z, state and hp per frame, every candidate state entered on her by set-state):
kitana_npc: her attacks that match her own Versus moves (g02_st_q, i00, l10_sp_q, p10_sp_p, ...) keep their travel in
the clip's root bone (records +0x04): she stays put for the whole move, then snaps (g02 3299 units, i00 1413, p10
4255), as Reptile's g10 / g20 (vsboss.py DROPPED); most also hit for 0. m10_sp_q plays and moves as her own m10_sp_q,
nothing new. f20, f21, f31, f33, f36 play in place but are story poses and cinematics with no hit; f22, f40-f42 snap,
f32 teleports mid-state. j00_trap / j01_trap snap 3508 / 6051. d10_cntr hits for 3 but snaps and ends airborne
(common fall / land 11 / 7). d20_cntr and l20_sp_q play in place and return to stance but whiff: counters.
mileena: l10_sp_q and p11 play in place with no hit; the rest snap or end in 11 / 7.
jade: g60_flip hits 9 (3 hits) but snaps 2646; g20_supr (5), l10_sp_q (4) and k00 (3) end stuck in 11 / 7;
g20_test whiffs."""


def add(tree, wad):
    f = tree.f
    st = fstates.states(f.name, wad)
    assert [st[i]['name'] for i in (P10, L10, M10)] == ['p10_sp_p', 'l10_sp_q', 'm10_sp_q']
    top = [tree.nodes[i] for i in tree.top(0)]
    roots, press = [], []
    for button, local, state in MOVES:
        tpls = [t for t in top if t.state == f.first + local and not (t.press | t.hold) & DIRS]
        assert len(tpls) == 5, (local, len(tpls))   # one per special level
        roots += [(t, state) for t in tpls]
        press += [button] * len(tpls)
    for i, b in zip(tree.front(0, roots), press):
        n = tree.nodes[i]
        n.press, n.hold, n.ignore = b, L1, L1
    return len(roots)


def main(argv):
    if argv[:1] != ['report']:
        print(__doc__)
        return 2
    import vscombos
    wad = Wad()
    tree = vscombos.Tree(dt2.Fighter('kitana', wad))
    n = add(tree, wad)
    for i in tree.added:
        nd = tree.nodes[i]
        print('%4d parent %4d sibling %4d %s ignore %x -> %d' % (i, nd.parent, nd.sibling, nd.input(), nd.ignore,
                                                                  nd.state))
    print('%d roots in front of list 0 (head %d), %d nodes' % (n, tree.top(0)[0], len(tree.added)))
    return 0


if __name__ == '__main__':
    sys.exit(main(sys.argv[1:]))
