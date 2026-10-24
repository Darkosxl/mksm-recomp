#!/usr/bin/env python3
"""Combo ports for donor strings whose clips the target lacks: align instead of matching animations.

A donor combo extension = an ungated string prefix (anc) + a gated node g (+ subtree). The target already has its own
string for most prefixes, just with its own moves. So:
  - anchor: walk the target's tree along anc by input (press, hold, nothold, req); req may differ in bit 0 only
    (r1 differs between fighters' strings). The aligned target node's state is the target's own move for that input.
  - gated node / subtree: the exact clip if the target has it (fstates.equiv), else a FALLBACK: the target state its
    own tree plays for the same button and direction bits, scored by follow-up position, air/ground, frame count and
    hit frames; never a special (s*), stub (r*) or the anchor's own state, and long enough for the donor children's
    link frames.
  - link frame (+0x05): a donor node whose link is past the end of the target anchor state would never run
    (FUN_0016B138); it takes the link of the target's own children at that anchor (or length - 1).
Usage: vsfallback.py report [TARGET...] | json OUT.json [TARGET...] | cpp OUT.inc   (VERBOSE=1: one line per unit)
  cpp writes decomp/src/mod/versus_combos.inc, the table the PS2_MOD versus_combos uses.
As a module: build(target, wad) -> vscombos.Tree, a drop-in for vscombos.build(target, wad)[0].
"""
import collections
import json
import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import dt2  # noqa: E402
import fstates  # noqa: E402
import vsboss  # noqa: E402
import chamspecials  # noqa: E402
import vscombos  # noqa: E402
from wad import Wad  # noqa: E402

DIR = 0xF00  # direction requirement bits (0x100..0x800)
UPGRADE = range(12660, 12690)  # special levels, combos, team (dt2.COND_NAMES)


def isig(n):
    return (n.press, n.hold, n.nothold)


def length(st):
    return st['length'] or st['frames']


class Target:
    def __init__(self, name, wad):
        self.F = dt2.Fighter(name, wad)
        self.st = fstates.states(name, wad)
        # every (press, hold, nothold, dir bits) -> [(state, depth)] the target's own tree plays
        # and every non-upgrade condition (throw outcomes like 6316/6318 on press-0 nodes) -> [(state, depth)]
        self.uses = collections.defaultdict(list)
        self.uses_cond = collections.defaultdict(list)
        for head in self.F.lists.values():
            for p in self.F.walk(head):
                n = self.F.nodes[p[-1]]
                if n.state < self.F.first:
                    continue
                if not n.cond:
                    self.uses[(n.press, n.hold, n.nothold, n.req & DIR)].append((n.state, len(p)))
                elif n.cond not in UPGRADE:
                    self.uses_cond[n.cond].append((n.state, len(p)))

    def rec(self, g):
        return self.st[g - self.F.first] if self.F.first <= g < self.F.end else None


def fallback(T, dn, dst, depth, anchor_state, taken, need_len):
    """target global state for donor node dn (donor state record dst), or None. need_len: the donor children's
    latest link frame (a shorter state is still taken, last, and the links get clamped in port)"""
    best = None
    keys = [(dn.press, dn.hold, dn.nothold, dn.req & DIR), (dn.press, dn.hold, dn.nothold, 0), (dn.press, 0, 0, 0)]
    pools = ([T.uses_cond.get(dn.cond, [])] if dn.cond and dn.cond not in UPGRADE else []) + [T.uses.get(k, []) for k in keys]
    for pool in pools:
        for g, d in pool:
            r = T.rec(g)
            if r['name'][0] in 'sr' or g == anchor_state or g in taken:
                continue
            score = ((length(r) <= need_len) * 200 + abs(min(d, 3) - min(depth, 3)) * 40 + (r['airborne'] != dst['airborne']) * 100
                     + abs(r['frames'] - dst['frames']) + abs(r['hit'][0] - dst['hit'][0]))
            if best is None or score < best[0]:
                best = (score, g)
        if best:
            return best[1]
    return None


def port(tree, T, donor, wad, log, votes, links):
    D = dt2.Fighter(donor, wad)
    Dst = fstates.states(donor, wad)
    eq = fstates.equiv(donor, T.F.name, wad)
    stats = collections.Counter()
    for lst, anc, g in vscombos.units(D):
        path = D.path_str(anc + [g])
        if lst not in T.F.lists:
            stats['no list'] += 1
            continue
        cur, chain = 0, tree.top(lst)
        for a in anc:
            # same input; req may differ only in bit 0 (r1, set on some fighters' later string hits), never in the
            # special-move / meter bits (a special shares the press of a normal attack)
            hit = [c for c in chain if isig(tree.nodes[c]) == isig(D.nodes[a])
                   and (tree.nodes[c].req | 1) == (D.nodes[a].req | 1)]
            if not hit:
                cur = None
                break
            exact = [c for c in hit if tree.nodes[c].req == D.nodes[a].req]
            cur = (exact or hit)[0]
            if D.nodes[a].state >= D.first:
                votes[D.nodes[a].state][tree.nodes[cur].state] += 1
            chain = tree.children(cur)
        if cur is None:
            stats['no prefix'] += 1
            log.append('  skip   %s: target has no string with these inputs' % path)
            continue
        if any(isig(tree.nodes[c]) == isig(D.nodes[g]) for c in chain):
            stats['input taken'] += 1
            log.append('  skip   %s: input taken by the target\'s own move' % path)
            continue
        anchor_state = tree.nodes[cur].state if cur else -1
        taken = {tree.nodes[c].state for c in chain}
        own_links = sorted(tree.nodes[c].link for c in chain) or [None]
        ok, plan, kinds = True, {}, set()

        def choose(i, depth, parent_state):
            nonlocal ok
            dn = D.nodes[i]
            if dn.state < dt2.COMMON[1]:
                plan[i] = dn.state
                kinds.add('common')
            elif dn.state - D.first in eq and eq[dn.state - D.first][1] in ('exact', 'stub'):
                plan[i] = T.F.first + eq[dn.state - D.first][0]
                kinds.add('same anim')
            else:
                if not D.first <= dn.state < D.end:
                    ok = 'state %d outside the donor' % dn.state
                    return
                kids = D.children(i)
                need = max([D.nodes[c].link for c in kids] or [0])
                t = fallback(T, dn, Dst[dn.state - D.first], depth, parent_state, taken, need)
                if t is None:
                    ok = 'no own move for %s' % D.path_str([i])
                    return
                plan[i] = t
                kinds.add('fallback')
            taken.add(plan[i])
            for c in D.children(i):
                choose(c, depth + 1, plan[i])
        choose(g, len(anc) + 1, anchor_state)
        if ok is not True:
            stats['no candidate'] += 1
            log.append('  skip   %s: %s' % (path, ok))
            continue
        for i, t in plan.items():
            if D.first <= D.nodes[i].state < D.end:
                votes[D.nodes[i].state][t] += 1
        tier = 'fallback' if 'fallback' in kinds else 'same anim'
        stats[tier] += 1
        log.append('  port   %-9s %s -> %s > %s' % (tier, path, ' > '.join(
            T.F.local(tree.nodes[c].state) for c in [cur] if cur), ' > '.join(
            '%s' % T.rec(plan[i])['name'] if T.rec(plan[i]) else 'c%d' % plan[i] for i in vscombos.subtree(D, g))))
        # graft so later units see these inputs as taken; a link frame past the end of the (target) state it waits
        # on would never run, so it takes the target's own link at the anchor, or the state's last frame
        def graft(i, parent, parent_state, ch, root):
            j = tree.add(D.nodes[i], plan[i], parent, ch)
            pr = T.rec(parent_state)
            if pr and tree.nodes[j].link >= length(pr):
                own = own_links[len(own_links) // 2] if root else None
                new = own if own is not None and own < length(pr) else length(pr) - 1
                links.append((T.F.name, D.path_str([i]), tree.nodes[j].link, new))
                tree.nodes[j].link = new
            kids = []
            for c in D.children(i):
                kids.append(graft(c, j, plan[i], kids, False))
            return j
        graft(g, cur, anchor_state, chain, True)
    return stats


def build(target, wad, log=None, votes=None, links=None):
    """the target's vscombos.Tree with every donor of vscombos.PORTS[target] ported (for vscombos.emit), plus, for
    Reptile, the story boss's moves (vsboss.py) and Chameleon's mode-gated specials (chamspecials.py)"""
    T = Target(target, wad)
    tree = vscombos.Tree(dt2.Fighter(target, wad))
    for d in vscombos.PORTS[target]:
        port(tree, T, d, wad, log if log is not None else [], votes if votes is not None else
             collections.defaultdict(collections.Counter), links if links is not None else [])
    if target == 'reptile':
        vsboss.add(tree, wad)
        chamspecials.add(tree, wad)
    return tree


def run(targets, wad, verbose):
    out, report = {}, []
    for t in targets:
        T = Target(t, wad)
        tree = vscombos.Tree(dt2.Fighter(t, wad))
        votes = collections.defaultdict(collections.Counter)
        links = []
        report.append('== %s' % t)
        for d in vscombos.PORTS[t]:
            log = []
            st = port(tree, T, d, wad, log, votes, links)
            report.append('  %-9s %s' % (d, dict(st)))
            if verbose:
                report += log
        report.append('  %d nodes added; link frames clamped: %d' % (len(tree.added), len(links)))
        report += ['    link %s: %s %d -> %d' % l for l in links[:8]]
        out[t] = {str(dg): c.most_common(1)[0][0] for dg, c in sorted(votes.items())}
        split = {dg: dict(c) for dg, c in votes.items() if len(c) > 1}
        if split:
            report.append('  donor states mapped two ways (majority kept): %d' % len(split))
    return out, report


def main(argv):
    if argv[:1] == ['cpp']:
        wad = Wad()
        trees = [(t, build(t, wad)) for t in vscombos.PORTS]
        open(argv[1], 'w').write(vscombos.emit(trees, 'vsfallback.py'))
        return 0
    if not argv or argv[0] not in ('report', 'json'):
        print(__doc__)
        return 2
    wad = Wad()
    rest = argv[2:] if argv[0] == 'json' else argv[1:]
    out, report = run(rest or list(fstates.TARGETS), wad, os.environ.get('VERBOSE'))
    print('\n'.join(report))
    if argv[0] == 'json':
        json.dump(out, open(argv[1], 'w'), indent=1, sort_keys=True)
    return 0


if __name__ == '__main__':
    sys.exit(main(sys.argv[1:]))
