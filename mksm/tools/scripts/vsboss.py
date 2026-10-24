#!/usr/bin/env python3
"""The story boss Reptile's attacks (reptile_npc, group 59) on Versus Reptile, as command-tree changes next to the
combo ports (vsfallback.build calls add()). The states stay group 59's global ids;
decomp/src/mod/versus_boss_moves.cpp gives them clips, records and events on Versus Reptile.

New nodes (copies of his s00_sp_n special's list-0 nodes, one per special level and direction variant, so the move-0
level gates them like s00, with the face button 0x80 swapped for 0x40, which no special of his uses; 0x40 +
requirement 0x80000 is the dash):
  Special + 0x40, no direction        s50_sp_n (1588): the acid volley
  Special + 0x40 + a direction        t20_sung (1593): vanish, then t10_sung (1592): reappear (press-0 child at
                                      t20's last frame)
Disc nodes retargeted (every variant of his own move with that direction held or pressed, in every list; their
children dropped, so s10's release follow-up s12 does not run after s40):
  Special + back (0x8000) + 0x80      s11_sp_s (1584), was s00_sp_n: the high leap
  Special + back + 0x10               s30_sp_n (1586), was s20_sp_n
  Special + back + 0x20               s40_sp_n (1587), was s10_sp_n
  Special + back + 0x02               g20_st_q (1581), was q00_st_d: the flying kick
  Special + forward (0x2000) + 0x02   g10_st_q (1580), was q00_st_d: the leaping grab
  his counter d30_cntr                the boss's d30_cntr (1578)
Usage: vsboss.py report
"""
import sys

import dt2
import fstates
from wad import Wad

VOLLEY, VANISH, REAPPEAR = 1588, 1593, 1592
DIRS = 0xF000                 # direction bits in press / hold
S00, S12 = 136, 140           # Reptile's s00_sp_n (template), s12_sp_n (its press-0 child is the child template)
BACK, FWD = 0x8000, 0x2000
# (his local state, direction bit or 0 for every node, boss global state)
RETARGET = ((136, BACK, 1584), (141, BACK, 1586), (138, BACK, 1587), (127, BACK, 1581), (127, FWD, 1580),
            (31, 0, 1578))


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
    for local, d, new in RETARGET:
        for i in range(tree.n_disc - 1):
            n = tree.nodes[i]
            if n.state == f.first + local and (not d or (n.press | n.hold) & d):
                n.state = new
                tree.links.append((i, 0x00, new))
                if n.child:
                    n.child = 0
                    tree.links.append((i, 0x20, 0))
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
    for i, off, v in tree.links:
        if off == 0:
            print('retarget %4d %s %s -> %d' % (i, tree.nodes[i].input(), tree.f.local(tree.f.nodes[i].state), v))
    return 0


if __name__ == '__main__':
    sys.exit(main(sys.argv[1:]))
