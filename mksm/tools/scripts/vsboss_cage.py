#!/usr/bin/env python3
"""The story Johnny Cage's moves (cage_npc, group 71) on Versus Cage, as command-tree changes next to the combo ports
(vsfallback.build calls add() after vsboss.add). The states stay group 71's global ids;
decomp/src/mod/versus_boss_moves.cpp gives them clips, records and events on Versus Cage.

The source: Cage has no story version of his own fighter, but group 71 (files 6631-6634: model 'Cage', the same 50
bones by name and order as Versus Cage's) is the story Johnny Cage, and group 86 (6781-6784, model 'stonecage') the
same moves again (d10_cntr without hit frames). 27 of group 71's 34 clips are byte-identical to Versus Cage's; the
other 7 are d10_cntr, sn40_ger, t00_deth, t10_sung, t20_sung and two walk/stance variants (a10_walk, b00_stnd).
t10_sung and t20_sung are byte-identical to the story boss Reptile's (vsboss.py): vanish, then reappear.

Inputs: hold Special (R1) and L1, then tap a button, as Reptile's boss layer (vsboss.py): L1 does nothing else in
Versus (his only L1 nodes need requirement bit 0x200000000000), so R1 + L1 + button is free over his own specials:
  R1 + L1 + square      d10_cntr (1916): the story Cage's counter, a flip kick that hits on frame 5 (10 damage), lands
                        (common state 7) and returns to stance; it moves him frame by frame (record +0x04 clear)
                                                                                                 (his R1 + square: l00_sp_q)
  R1 + L1 + R2          t20_sung (1935): vanish, then t10_sung (1934): reappear behind the opponent (set by
                        versus_boss_moves.cpp when t20 plays out; the story Cage's own tree has R2 -> t20_sung)
                                                                                                 (his R1 + R2: n00_sp_t)
Each input is a copy of the non-directional list-0 nodes of his l00_sp_q (TEMPLATE, one per special level), so that
special's level and upgrade requirements gate it, plus L1 held (hold 0x04; ignore 0x04: L1 may go down in the same
frame as the button). The new nodes go in front of list 0 (vscombos.Tree.front), because his own R1 + button nodes
come first on disc and do not look at L1. Not ported: see DROPPED.
Usage: vsboss_cage.py report
"""
import sys

import dt2
import fstates
from wad import Wad

COUNTER, VANISH = 1916, 1935  # d10_cntr; t20_sung (versus_boss_moves.cpp goes on into t10_sung 1934)
DIRS = 0xF000                 # direction bits in press / hold
L1 = 0x04                     # pad bit (press / hold / ignore)
TEMPLATE = 130                # his l00_sp_q (local state): R1 + square, five nodes, one per special level
# (button tapped with R1 + L1 held, story Cage's global state)
MOVES = ((0x80, COUNTER), (0x02, VANISH))
DROPPED = """
t00_deth (1933) is his death (45 frames, then a 344-unit snap back into stance). sn40_ger (1932) is a 130-frame
standing taunt: no hit frames, no hit events. a10_walk and b00_stnd are walk / stance variants, not moves.
Group 74 (files 6661-6664, the only other group on his skeleton: a grenade + revolver soldier) has only root-motion
attacks (record +0x04 set: the fighter does not move until the state ends, see vsboss.DROPPED) that need its props.
Groups whose skeleton starts with his 50 bones but has more (Kano 54, Shao Kahn 64, Sub-Zero 69, ...) are not his
skeleton and were not used."""


def add(tree, wad):
    f = tree.f
    st = fstates.states(f.name, wad)
    assert st[TEMPLATE]['name'] == 'l00_sp_q'
    top = [tree.nodes[i] for i in tree.top(0)]
    tpls = [t for t in top if t.state == f.first + TEMPLATE and not (t.press | t.hold) & DIRS]
    assert len(tpls) == 5, len(tpls)   # one per special level
    roots = [(t, state) for _, state in MOVES for t in tpls]
    for i in tree.front(0, roots):
        n = tree.nodes[i]
        n.press, n.hold, n.ignore = [b for b, s in MOVES if s == n.state][0], L1, L1
    return len(roots)


def main(argv):
    if argv[:1] != ['report']:
        print(__doc__)
        return 2
    import vscombos
    wad = Wad()
    tree = vscombos.Tree(dt2.Fighter('cage', wad))
    n = add(tree, wad)
    for i in tree.added:
        nd = tree.nodes[i]
        print('%4d parent %4d sibling %4d %s ignore %x -> %d' % (i, nd.parent, nd.sibling, nd.input(), nd.ignore,
                                                                  nd.state))
    print('%d roots in front of list 0 (head %d), %d nodes' % (n, tree.top(0)[0], len(tree.added)))
    return 0


if __name__ == '__main__':
    sys.exit(main(sys.argv[1:]))
