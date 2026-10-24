#!/usr/bin/env python3
"""The story boss Baraka's attacks (baraka_npc, group 56: GAMEDATA.WAD 6481 PS2.bin, 6482 ERG.DT2, 6483 ERG.DAT,
6484 nim.rtt, states 1465-1511) on Versus Baraka, as command-tree changes next to the combo ports (vsfallback.build
calls add() after vsboss.add). The states stay group 56's global ids; decomp/src/mod/versus_boss_moves.cpp gives them
clips, records and events on Versus Baraka. Group 56 is on his skeleton: 25 of its 47 clips are byte-identical to his.

Inputs: hold Special (R1) and L1, then tap a button, as on Reptile (vsboss.py): L1 does nothing else in Versus (his
only L1 nodes need requirement 0x200000000000, never met there), so R1 + L1 is a free layer over his own specials
(R1 + button = his special, R1 + L1 + button = the boss's):
  R1 + L1 + square      t02_misc (1507): blade slash, 46 frames   (his R1 + square: s00_sp_n, the blade spark)
  R1 + L1 + triangle    d30_cntr (1480): the boss's leaping blade counter, played as an attack (his own counter
                        d30_cntr 2194 is a different clip and stays as it was)   (his R1 + triangle: h10_sp_n)
  R1 + L1 + circle, R1 + L1 + R2: free (no other boss state plays as an attack on him, see DROPPED)
Each input is a copy of the non-directional list-0 nodes of one of his specials (TEMPLATE), so that special's level and
upgrade requirements gate it, plus L1 held (hold 0x04; ignore 0x04: L1 may go down in the same frame as the button).
The new nodes go in front of list 0 (vscombos.Tree.front), because his own R1 + button nodes come first on disc and do
not look at L1. Each input reaches one state, and no two share an input: the matcher keeps the first matched node's
children. See DROPPED for the states left out.
Usage: vsboss_baraka.py report
"""
import sys

import dt2
import fstates

DIRS = 0xF000                 # direction bits in press / hold
L1 = 0x04                     # pad bit (press / hold / ignore)
GROUP, FIRST, END = 56, 1465, 1512
S00, H10, S20 = 135, 54, 137  # his specials (local states): R1 + square, R1 + triangle, R1 + circle
# (button tapped with R1 + L1 held, TEMPLATE: his special whose list-0 nodes are copied, boss global state)
T02, D30 = 1507, 1480
MOVES = ((0x80, S00, T02), (0x10, H10, D30))
DROPPED = """
Survey: every group-56 state his bank lacks, played on Versus Baraka from R1 + square (test build, 2026-10-24; frames,
P1 travel inside the state, position jump on the exit frame, P2 damage).
Root motion (the body travels in the clip's root bone; the fighter stays put and snaps on the last frame, through
or past the opponent): s30_sp_n, s31_sp_n, s32_sp_n (exit jumps 4871 / 4741 / 4792 units: leaps across the arena),
s35_sp_n, s36_sp_n, s37_sp_n (2149 / 3781 / 1590 units of travel; s35 and s37 end early in a fall), s60_sp_n (8754,
the camera ends inside his body), s70_sp_n (4473), s71_sp_n (8820, 650 frames), s80_sp_n (9157), s51_sp_n (the body
rises above the opponent and comes back, 250 frames, no hit).
No hit on Versus Baraka: s50_sp_n (250 frames) and s40_sp_n (198 frames) play in place and return to stance, but their
hit windows (event 171, type 0x16, the projectile kind his own blade spark uses) spawn nothing: no effect drawn, P2
untouched. The boss AI's spark volley does not carry over; as plain animations they are 4-8 s of no attack.
Grab pairs: t05_misc / t05_reac (480 frames) and t06_misc / t06_reac: the opponent would have to play the boss's
reaction state (partner +0x2A), which no Versus fighter has; alone, t05_misc / t06_misc whiff.
Not attacks: sg80_sst (458-frame stance, snaps 952 units at its end), a20_srun (run cycle)."""


def add(tree, wad):
    f = tree.f
    st = fstates.states(f.name, wad)
    assert [st[i]['name'] for i in (S00, H10, S20)] == ['s00_sp_n', 'h10_sp_n', 's20_sp_n']
    assert len({b for b, _, _ in MOVES}) == len({s for _, _, s in MOVES}) == len(MOVES)
    assert all(FIRST <= s < END for _, _, s in MOVES)
    top = [tree.nodes[i] for i in tree.top(0)]
    roots = []
    for button, local, state in MOVES:
        tpls = [t for t in top if t.state == f.first + local and not (t.press | t.hold) & DIRS]
        assert len(tpls) == 5, (local, len(tpls))   # one per special level
        roots += [(t, state) for t in tpls]
    for i in tree.front(0, roots):
        n = tree.nodes[i]
        n.press, n.hold, n.ignore = [b for b, _, s in MOVES if s == n.state][0], L1, L1
    return len(roots)


def main(argv):
    if argv[:1] != ['report']:
        print(__doc__)
        return 2
    import vscombos
    from wad import Wad
    wad = Wad()
    tree = vscombos.Tree(dt2.Fighter('baraka', wad))
    n = add(tree, wad)
    for i in tree.added:
        nd = tree.nodes[i]
        print('%4d parent %4d sibling %4d %s ignore %x -> %d' % (i, nd.parent, nd.sibling, nd.input(), nd.ignore,
                                                                  nd.state))
    print('%d roots in front of list 0 (head %d), %d nodes' % (n, tree.top(0)[0], len(tree.added)))
    return 0


if __name__ == '__main__':
    sys.exit(main(sys.argv[1:]))
