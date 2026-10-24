#!/usr/bin/env python3
"""The story boss Reptile's attacks (reptile_npc, group 59) on Versus Reptile, as command-tree changes next to the
combo ports (vsfallback.build calls add()). The states stay group 59's global ids;
decomp/src/mod/versus_boss_moves.cpp gives them clips, records and events on Versus Reptile.

Inputs: hold Special (R1) and L1, then tap a button. L1 does nothing else in Versus, so R1 + L1 is a free "boss" layer
over his own specials (R1 + button = his special, R1 + L1 + button = the boss's):
  R1 + L1 + square      s50_sp_n (1588): the acid volley           (his R1 + square: s00_sp_n, the acid spit)
  R1 + L1 + triangle    s30_sp_n (1586)                            (his R1 + triangle: s20_sp_n)
  R1 + L1 + circle      s40_sp_n (1587)                            (his R1 + circle: s10_sp_n)
  R1 + L1 + R2          t20_sung (1593): vanish, then t10_sung (1592): reappear behind the opponent (set by
                        versus_boss_moves.cpp when t20 plays out)   (his R1 + R2: q00_st_d)
  his counter d30_cntr  the boss's d30_cntr (1578): his own nodes retargeted (links on field 0x00)
Each input is a copy of the non-directional list-0 nodes of one of his specials (TEMPLATE), so that special's level and
upgrade requirements gate it, plus L1 held (hold 0x04; ignore 0x04: L1 may go down in the same frame as the button).
The new nodes go in front of list 0 (vscombos.Tree.front), because his own R1 + button nodes come first on disc and do
not look at L1. The only free inputs: without a lock-on target (Versus) FUN_001BFA68 strips the direction bits from the
input word, so directional nodes are dead from neutral; cross is the engine's jump; L2 is his c00_stnd stance and a
press-L2 node never matches; L3, R3 and select never reach the command input word; R1 + L1 alone would fire as soon as
L1 goes down and take the layer. So four.
Not ported (see DROPPED): s11_sp_s (1584), g20_st_q (1581), g10_st_q (1580).
Usage: vsboss.py report
"""
import sys

import dt2
import fstates
from wad import Wad

VOLLEY, S30, S40, VANISH, COUNTER = 1588, 1586, 1587, 1593, 1578
DIRS = 0xF000                 # direction bits in press / hold
L1 = 0x04                     # pad bit (press / hold / ignore)
S00, S10, S20 = 136, 138, 141   # his specials (local states)
# (button tapped with R1 + L1 held, TEMPLATE: his special whose list-0 nodes are copied, boss global state)
MOVES = ((0x80, S00, VOLLEY), (0x10, S20, S30), (0x20, S10, S40), (0x02, S00, VANISH))
RETARGET = ((31, COUNTER),)   # (his local state, boss global state): every node of his d30_cntr
DROPPED = """
g20_st_q (1504 units), g10_st_q (2684) and s11_sp_s (212) keep their travel in the clip's root bone. Their records
have +0x04 set, so set-state (FUN_00303340 -> FUN_003025D0) moves the fighter to the root bone only when the state
ends: for the whole move his position (collision, walls, camera, hits) stays where he started while the body flies,
then jumps. g20 passes through the opponent without a hit and lands 1504 units on regardless of walls; g10 ends on
the arena railing (y +404) and stays there. Actor +0x50 (FUN_002A6188's per-frame root extraction) only pins the
body in place. Versus Reptile's own g10_st_q / g20_st_q (2332 / 2333: same frames, hit frames and travel) move
frame by frame by a mechanism not found yet; g10_st_q 2332 already ends his triangle, circle string. With four free
inputs, these three are the ones left out."""


def add(tree, wad):
    f = tree.f
    st = fstates.states(f.name, wad)
    assert [st[i]['name'] for i in (S00, S10, S20)] == ['s00_sp_n', 's10_sp_n', 's20_sp_n']
    top = [tree.nodes[i] for i in tree.top(0)]
    roots = []
    for button, local, state in MOVES:
        tpls = [t for t in top if t.state == f.first + local and not (t.press | t.hold) & DIRS]
        assert len(tpls) == 5, (local, len(tpls))   # one per special level
        roots += [(t, state) for t in tpls]
    for i in tree.front(0, roots):
        n = tree.nodes[i]
        n.press, n.hold, n.ignore = [b for b, _, s in MOVES if s == n.state][0], L1, L1
    for local, new in RETARGET:
        for i in range(tree.n_disc - 1):
            n = tree.nodes[i]
            if n.state == f.first + local:
                n.state = new
                tree.links.append((i, 0x00, new))
                if n.child:
                    n.child = 0
                    tree.links.append((i, 0x20, 0))
    return len(roots)


def main(argv):
    if argv[:1] != ['report']:
        print(__doc__)
        return 2
    import vscombos
    wad = Wad()
    tree = vscombos.Tree(dt2.Fighter('reptile', wad))
    n = add(tree, wad)
    for i in tree.added:
        nd = tree.nodes[i]
        print('%4d parent %4d sibling %4d %s ignore %x -> %d' % (i, nd.parent, nd.sibling, nd.input(), nd.ignore,
                                                                  nd.state))
    print('%d roots in front of list 0 (head %d), %d nodes' % (n, tree.top(0)[0], len(tree.added)))
    for i, off, v in tree.links:
        if off == 0:
            print('retarget %4d %s %s -> %d' % (i, tree.nodes[i].input(), tree.f.local(tree.f.nodes[i].state), v))
    return 0


if __name__ == '__main__':
    sys.exit(main(sys.argv[1:]))
