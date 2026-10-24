#!/usr/bin/env python3
"""Port the Experience-bought combo extensions (command-tree nodes gated C0-C5, see dt2.py) of the story fighters onto
the Versus-only fighters, by mapping each donor state onto the target state that plays the same animation
(fstates.equiv). Reads the disc through wad.py.

A port unit is a donor "gated root": a node gated C0-C5 whose parent is not. Its ancestors (the ungated start of the
string) are looked up in the target's tree by input + mapped state, and added if missing; then the gated node and its
whole subtree are appended under that anchor. Nothing else changes: no new states, clips, records or cancel windows
(combo links run through the command queue, FUN_0016B138, not through ERG.DAT windows).

A unit is skipped when one of its states has no equivalent in the target (the move would need the donor's clip), or
when the target already has a different node for the same input at that point (it would shadow or be shadowed).

Usage:
  vscombos.py report [TARGET...]     per target and donor: units, how they map, nodes to add
  vscombos.py cpp OUT.inc            the node table for decomp/src/mod/versus_combos.cpp (PORTS below)
"""
import collections
import os
import struct
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import dt2  # noqa: E402
import fstates  # noqa: E402
from wad import Wad  # noqa: E402

COMBO = range(12680, 12686)          # C0..C5
GOOD = ('exact', 'stub', 'common')   # same animation
NAMED = ('name+frames', 'name')      # the target's own move of the same name, different animation
# what the mod ports: target -> donors in priority order (a later donor's unit is skipped where an earlier one
# already put a node for the same input)
PORTS = {
    'reptile': ('subzero', 'liukang', 'kunglao', 'scorpion'),
    'baraka': ('kunglao', 'subzero', 'liukang', 'scorpion'),
    'kitana': ('kunglao', 'scorpion', 'liukang', 'subzero'),
    'cage': ('liukang', 'scorpion', 'kunglao', 'subzero'),
}


def sig(n):
    return (n.press, n.hold, n.nothold, n.ignore, n.req)


def shape(n):
    """everything but the state and the tree links: tells apart same-input variants (e.g. a throw held 20/31/61
    frames: same buttons, different link frame and +0x28)"""
    return sig(n) + (n.blend_in, n.blend_out, n.turn, n.link, n.f06, n.window, n.lookahead, n.f28, n.f2a, n.cond)


class Tree:
    """the target's command tree plus the nodes added to it (raw indices, as on disc)"""

    def __init__(self, f):
        self.f = f
        self.nodes = [dt2.Node(i, n.raw) for i, n in enumerate(f.nodes)]
        self.n_disc = len(self.nodes)
        self.end = self.nodes.pop()          # the -999 terminator moves behind the added nodes
        self.added = []
        self.links = []                      # (node index, field offset, new value) on disc nodes
        self.heads = {}                      # list -> head node, where front() moved it

    def children(self, idx):
        out, c = [], self.nodes[idx].child
        while c:
            out.append(c)
            c = self.nodes[c].sibling
        return out

    def top(self, lst):
        out, c = [], self.heads.get(lst, self.f.lists[lst])
        while c:
            out.append(c)
            c = self.nodes[c].sibling
        return out

    def add(self, donor_node, state, parent, chain):
        """append a copy of donor_node with `state` as the last sibling of `chain` (parent's children / list top)"""
        n = dt2.Node(len(self.nodes), donor_node.raw)
        n.state, n.parent, n.child, n.sibling = state, parent, 0, 0
        self.nodes.append(n)
        self.added.append(n.idx)
        if chain:
            self.set(chain[-1], 'sibling', n.idx)
        else:
            self.set(parent, 'child', n.idx)
        return n.idx

    def front(self, lst, roots):
        """add [(template node, state)] as the first nodes of list lst, in that order, ahead of its disc nodes; returns
        their indices. FUN_002F8640 sets a list's head to the node behind each marker for that list (s16 -2 - list at
        +0), the last marker winning, so an added marker right before them moves the head; no disc node changes."""
        old = self.top(lst)[0]
        m = dt2.Node(len(self.nodes), (-2 - lst).to_bytes(2, 'little', signed=True) + bytes(dt2.Node.SIZE - 2))
        self.nodes.append(m)
        self.added.append(m.idx)
        out = []
        for t, state in roots:
            n = dt2.Node(len(self.nodes), t.raw)
            n.state, n.parent, n.child, n.sibling = state, t.parent, 0, 0
            if out:
                self.nodes[out[-1]].sibling = n.idx
            self.nodes.append(n)
            self.added.append(n.idx)
            out.append(n.idx)
        self.nodes[out[-1]].sibling = old
        self.heads[lst] = out[0]
        return out

    def set(self, idx, field, value):
        setattr(self.nodes[idx], field, value)
        if idx < self.n_disc - 1:
            self.links.append((idx, 0x20 if field == 'child' else 0x24, value))


def mapper(donor, target, wad):
    D, T = dt2.Fighter(donor, wad), dt2.Fighter(target, wad)
    eq = fstates.equiv(donor, target, wad)

    def m(g):
        if g < dt2.COMMON[1]:
            return g, 'common'
        if D.first <= g < D.end and g - D.first in eq:
            t, how = eq[g - D.first]
            return T.first + t, how
        return None, 'missing'
    return D, T, m


def units(D):
    par = {}
    for i, n in enumerate(D.nodes):
        if n.state >= 0:
            for c in D.children(i):
                par[c] = i
    lst = {}
    for k, h in D.lists.items():
        for p in D.walk(h):
            lst.setdefault(p[-1], k)
    for i, n in enumerate(D.nodes):
        if n.cond in COMBO and (i not in par or D.nodes[par[i]].cond not in COMBO):
            anc, j = [], par.get(i)
            while j is not None:
                anc.append(j)
                j = par.get(j)
            yield lst[i], anc[::-1], i


def subtree(D, i):
    out = [i]
    for c in D.children(i):
        out += subtree(D, c)
    return out


def port(tree, donor, wad, log):
    D, T, m = mapper(donor, tree.f.name, wad)
    stats = collections.Counter()
    for lst, anc, g in units(D):
        sub = subtree(D, g)
        maps = {i: m(D.nodes[i].state) for i in anc + sub}
        how = {h for _, h in maps.values()}
        if 'missing' in how:
            stats['missing clip'] += 1
            log.append('  skip  %s: no %s' % (D.path_str(anc + [g]), ', '.join(sorted(
                {fstates.states(donor, wad)[D.nodes[i].state - D.first]['name'] for i in maps
                 if maps[i][1] == 'missing'}))))
            continue
        tier = 'same anim' if how <= set(GOOD) else 'by name'
        # anchor: walk / extend the target tree along the ancestors
        cur, chain = 0, tree.top(lst)
        added_prefix = False
        for a in anc:
            hit = [c for c in chain if sig(tree.nodes[c]) == sig(D.nodes[a])]
            same = [c for c in hit if tree.nodes[c].state == maps[a][0]]
            same.sort(key=lambda c: shape(tree.nodes[c]) != shape(D.nodes[a]))   # the identical variant first
            if same:
                cur = same[0]
            elif hit:
                cur = None
                break
            else:
                cur = tree.add(D.nodes[a], maps[a][0], cur, chain)
                added_prefix = True
            chain = tree.children(cur)
        if cur is None:
            stats['conflict'] += 1
            log.append('  skip  %s: input taken by another move' % D.path_str(anc + [g]))
            continue
        if any(sig(tree.nodes[c]) == sig(D.nodes[g]) for c in chain):
            stats['conflict'] += 1
            log.append('  skip  %s: input taken by another move' % D.path_str(anc + [g]))
            continue

        def graft(i, parent, chain):
            j = tree.add(D.nodes[i], maps[i][0], parent, chain)
            kids = []
            for c in D.children(i):
                kids.append(graft(c, j, kids))
            return j
        graft(g, cur, chain)
        stats[tier + (' +prefix' if added_prefix else '')] += 1
        log.append('  port  %-9s %s -> %s' % (tier, D.path_str(anc + [g]), ' > '.join(
            T.local(maps[i][0]) for i in anc + [g])))
    return stats


def build(target, wad, donors=None, log=None):
    tree = Tree(dt2.Fighter(target, wad))
    out = {}
    for d in donors or PORTS[target]:
        out[d] = port(tree, d, wad, log if log is not None else [])
    return tree, out


def emit(trees, by='vscombos.py'):
    w = ['// Generated by mksm/tools/scripts/%s from the disc (SLUS-210.87): `%s cpp <this file>`.' % (by, by),
         '// Do not edit. Included by versus_combos.cpp. Per Versus fighter: the command-tree nodes appended behind the',
         '// disc ones (raw indices, as FUN_002F8640 gets them) and the links from disc nodes into them.', '']
    for name, t in trees:
        w.append('// %s, group %d: %d disc nodes, %d added, %d links' % (name, t.f.group, t.n_disc, len(t.added),
                                                                         len(t.links)))
        w.append('const std::uint8_t k_%s_nodes[] = {' % name)
        for i in t.added:
            b = t.nodes[i].pack()
            for o in range(0, len(b), 28):
                w.append('    ' + ', '.join('0x%02x' % x for x in b[o:o + 28]) + ',')
        w.append('};')
        w.append('const Link k_%s_links[] = {' % name)
        for idx, off, v in t.links:
            w.append('    {%d, 0x%02x, %d, %d},' % (idx, off, v, t.f.nodes[idx].state))
        w.append('};')
        w.append('')
    w.append('const Port kPorts[] = {')
    for name, t in trees:
        w.append('    {"%s", %d, %d, k_%s_nodes, %d, k_%s_links, %d},' % (
            name, t.f.group, t.n_disc, name, len(t.added), name, len(t.links)))
    w.append('};')
    return '\n'.join(w) + '\n'


def main(argv):
    if not argv:
        print(__doc__)
        return 2
    wad = Wad()
    if argv[0] == 'report':
        for t in argv[1:] or fstates.TARGETS:
            print('== %s' % t)
            for d in fstates.DONORS:
                log = []
                _, st = build(t, wad, [d], log)
                print('  alone %-9s %s' % (d, dict(st[d])))
            log = []
            tree, st = build(t, wad, log=log)
            print('  PORTS %s: %s, %d nodes added' % ('+'.join(PORTS[t]), {d: dict(s) for d, s in st.items()},
                                                       len(tree.added)))
            if os.environ.get('VERBOSE'):
                print('\n'.join(log))
    elif argv[0] == 'cpp':
        trees = [(t, build(t, wad)[0]) for t in PORTS]
        open(argv[1], 'w').write(emit(trees))
    else:
        print(__doc__)
        return 2
    return 0


if __name__ == '__main__':
    sys.exit(main(sys.argv[1:]))
