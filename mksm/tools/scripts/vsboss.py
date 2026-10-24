#!/usr/bin/env python3
"""Two of the story boss Reptile's moves (reptile_npc, group 59) as Versus Reptile specials: command-tree nodes
appended to his tree next to the combo ports (vsfallback.build calls add()). The states stay group 59's global ids;
decomp/src/mod/versus_boss_moves.cpp gives them clips, records and events on Versus Reptile.

  Special + 0x40, no direction        s50_sp_n (1588): the volley throw
  Special + 0x40 + a direction        t20_sung (1593): vanish, then t10_sung (1592): reappear (press-0 child at
                                      t20's last frame)

The nodes are copies of his s00_sp_n special's top-level nodes in list 0 (one per special level and direction
variant, same requirement bits, so the move-0 level gates them like s00), with the face button 0x80 swapped for
0x40, which no special of his uses (0x40 + requirement 0x80000 is the dash).
Usage: vsboss.py report
"""
import sys

import dt2
import fstates
from wad import Wad

VOLLEY, VANISH, REAPPEAR = 1588, 1593, 1592
DIRS = 0xF000                 # direction bits in press / hold
S00, S12 = 136, 140           # Reptile's s00_sp_n (template), s12_sp_n (its press-0 child is the child template)


def add(tree, wad):
    f = tree.f
    assert fstates.states(f.name, wad)[S00]['name'] == 's00_sp_n'
    vanish_len = fstates.states('reptile_npc', wad)[VANISH - 1564]['frames']
    child_tpl = next(n for n in f.nodes if n.state == f.first + S12 and n.press == 0)
    top = tree.top(0)
    tpls = [tree.nodes[i] for i in top if tree.nodes[i].state == f.first + S00]
    for t in tpls:
        teleport = bool((t.press | t.hold) & DIRS)
        j = tree.add(t, VANISH if teleport else VOLLEY, t.parent, tree.top(0))
        tree.nodes[j].press = (t.press & ~0xFF) | 0x40
        if teleport:
            k = tree.add(child_tpl, REAPPEAR, j, [])
            n = tree.nodes[k]
            n.press = n.hold = n.nothold = n.ignore = n.cond = 0
            n.req, n.window, n.link = 0, 5000, vanish_len - 1
    return len(tpls)


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
        print('%4d parent %4d %s -> %d' % (i, nd.parent, nd.input(), nd.state))
    print('%d templates, %d nodes' % (n, len(tree.added)))
    return 0


if __name__ == '__main__':
    sys.exit(main(sys.argv[1:]))
