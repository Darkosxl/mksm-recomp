#!/usr/bin/env python3
"""Chameleon's colour modes as command-tree changes on Reptile (group 84), after vsboss.py (vsfallback.build calls
add()). Chameleon is a Reptile; his mode picks whose specials the special inputs (R1 + face button, in the ground,
air and list-14 command lists) play: green Reptile's own (and the story boss's, vsboss.py), yellow Scorpion's, blue
Sub-Zero's; rainbow plays green's set.

- Every special root of Scorpion and Sub-Zero (a top node with the special requirement 0x10000 whose state is the
  donor's own) is copied with its whole subtree behind Reptile's; the donor global states stay (versus_boss_moves.cpp
  loads them on group 84, the PORTS below).
- Gates (node +0x2C, decomp/src/mod/chameleon_moves.cpp): BASE + donor * 8 + mask, mask = the modes (bit m - 1 for
  mode m: 1 yellow, 2 blue, 3 green) in which a Chameleon gets the node. A donor root gets its own mode; a Reptile root
  loses the modes whose donor has a special on the same list and button. A fighter who is not Chameleon passes every
  donor-0 gate and no donor-1 gate, so Reptile himself plays as before.
Usage: chamspecials.py report    the grafts, gates and the states to load per donor (the PORTS of
                                  versus_boss_moves.cpp)
"""
import collections
import sys

import dt2
import fstates
from wad import Wad

BASE = 12723                       # 12723..12738, after the game's last id 12722 (FUN_002E7F30)
SPECIAL = 0x10000                  # requirement bit: R1 held
DONORS = (('scorpion', 1), ('subzero', 2))
GREEN = 3


def roots(f, nodes, lists):
    """(list, node index) of every special root whose state is the fighter's own"""
    for k, h in sorted(lists.items()):
        c = h
        while c:
            n = nodes[c]
            if n.req & SPECIAL and f.first <= n.state < f.end:
                yield k, c
            c = n.sibling


def gate(donor, mask):
    return BASE + donor * 8 + mask


def add(tree, wad, load=None):
    """graft the donors' specials into tree (Reptile's vscombos.Tree) and gate the special roots; load (dict) gets
    donor name -> set of donor global states the grafted nodes reach (plus their partners)"""
    load = load if load is not None else {}
    taken = collections.defaultdict(int)     # (list, button) -> modes with a donor special there
    for name, mode in DONORS:
        D = dt2.Fighter(name, wad)
        st = fstates.states(name, wad)
        reach = load.setdefault(name, set())

        def graft(i, parent, chain):
            j = tree.add(D.nodes[i], D.nodes[i].state, parent, chain)
            if D.first <= D.nodes[i].state < D.end:
                reach.add(D.nodes[i].state)
            kids = []
            for c in D.children(i):
                kids.append(graft(c, j, kids))
            return j
        for k, i in roots(D, D.nodes, D.lists):
            if k not in tree.f.lists:
                continue
            assert D.nodes[i].cond == 0, (name, i)
            j = graft(i, 0, tree.top(k))
            tree.nodes[j].cond = gate(1, 1 << (mode - 1))
            taken[(k, D.nodes[i].press & 0xFF)] |= 1 << (mode - 1)
        for s in list(reach):
            p = st[s - D.first]['partner']
            if D.first <= p < D.end:
                reach.add(p)
    f, gated = tree.f, 0
    for k, i in list(roots(f, tree.nodes, f.lists)):
        n = tree.nodes[i]
        mask = 7 & ~taken[(k, n.press & 0xFF)]
        if mask == 7 or i in tree.added:
            continue
        assert n.cond == 0, i
        n.cond = gate(0, mask)
        # versus_combos.cpp writes a u32 at the field: keep the disc's +0x2E
        tree.links.append((i, 0x2C, n.cond | int.from_bytes(n.tail[:2], 'little') << 16))
        gated += 1
    return gated


def main(argv):
    if argv[:1] != ['report']:
        print(__doc__)
        return 2
    import vsfallback
    wad = Wad()
    tree = vsfallback.build('reptile', wad)
    n0 = len(tree.added)
    load = {}
    gated = add(tree, wad, load)
    print('%d nodes added (after %d of vsfallback/vsboss), %d Reptile roots gated' % (len(tree.added) - n0, n0, gated))
    total = 0
    for name, _ in DONORS:
        first = dt2.FIGHTERS[name][2]
        st = fstates.states(name, wad)
        locals_ = sorted(s - first for s in load[name])
        total += len(locals_)
        print('%s: %d states: %s' % (name, len(locals_), ' '.join('%d:%s' % (s + first, st[s]['name']) for s in locals_)))
        print('  constexpr std::uint8_t k%s[] = {%s};' % (name.capitalize(), ', '.join(map(str, locals_))))
    print('clip slots: %d of 47' % total)
    return 0


if __name__ == '__main__':
    sys.exit(main(sys.argv[1:]))
