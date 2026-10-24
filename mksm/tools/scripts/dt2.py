#!/usr/bin/env python3
"""Decoder for a fighter's move files in Mortal Kombat: Shaolin Monks: *ERG.DT2 (frame events + command tree) and the
cancel windows in *ERG.DAT. Reads the disc through wad.py; writes nothing.

Container (both files): u32 n = 3, u32 off[4], sections at 0x14 + off[k] .. 0x14 + off[k+1] (the last one up to
off[3]). Loaders: FUN_00320328 / FUN_00320740 (DT2), FUN_003205e0 / FUN_003219f0 (DAT), unit_0088.cpp.

ERG.DT2
  section 0  frame events, 16 bytes {s16 frame, s16 event, u32 condition, u64 param}. A state's list starts at
             section 1's index and ends at the record whose event is 0. frame -2 = last frame, < -2 relative to a
             timestamp. Walked by FUN_002e6f98 / FUN_002e7240 (unit_0079.cpp:3884), which runs the condition through
             FUN_002e7f30 and sends the event to the listeners at 0x723AB0 (FUN_0034DA00). These are NOT move
             transitions: they are effects/sounds/flags keyed to animation frames.
  section 1  u32 per state of the fighter's group: first event index. Copied into the state DB at 0x6B3000 (+0xC).
  section 2  the command tree ("S56"), 56-byte nodes, copied to a heap block (DAT_00624280) whose index fields
             FUN_002f8640 turns into pointers (index * 0x38 + block). Node 0 is a list marker; a node whose s16 at +0
             is < -1 marks the start of command list -2 - s (the list head is the next node; 0x5CCF88 + group * 0x6C
             holds 27 heads per group, chosen by stance in FUN_0016A750); -999 ends the table.
             +0x00 s16  target state, GLOBAL id (state DB index)
             +0x02 s8, +0x03 s8   blend in / out frames (FUN_0016AC90 -> FUN_002BA9E0, FUN_002F25F8)
             +0x04 u8   facing/turn code (FUN_002E6A88), +0x05 u8  link frame: the queued node runs once the current
                        state reaches it (FUN_0016B138)
             +0x06 s16  -> actor +0x27B4
             +0x08 u64  requirement bits (FUN_0016B950: held directions/buttons, meter, ...; 0x80000000000 and
                        0x100000000000 select the charge/hold matcher in FUN_0016C788)
             +0x10 s16  input window (frames since the previous link, actor +0x218); 5000 = no limit
             +0x12 s16  queue look-ahead (FUN_0016AF80)
             +0x14 u16  buttons that must be newly pressed, +0x16 u16 buttons that must be held, +0x18 u16 buttons
                        that must not be held, +0x1A u16 buttons ignored (FUN_0016C788)
             +0x1C u16  0x40, +0x1E s16 parent node index
             +0x20 u32  first child node index (the next command in the string), +0x24 u32 next sibling index
             +0x28 s16, +0x2A s16  -> actor +0x1E08/+0x1E0A, +0x1E0C
             +0x2C u16  gate condition (FUN_002E7F30; 12660-12679 special levels, 12680-12685 combos, 12686-12689
                        team), checked when the queued node runs (FUN_0016F1F8; on failure another node queued for
                        the same input is tried, else the string is dropped)
             The matcher is FUN_0016CE20 (walks siblings from actor +0x24C, on a match queues the node with
             FUN_0016C968 and descends to its children).

ERG.DAT
  section 0  0x70-byte state records, one per state of the group (state DB +8). +0x2C s16 first cancel window,
             +0x2E s16 window count.
  section 1  u32 + u32, then 18-byte cancel windows {s16 from frame, s16 to frame, s16 target state, ...}
             (actor +0x258 = section 1 + 8). FUN_002E1150 enters a buffered state only inside such a window.
  section 2  per-player table for FUN_002A4448.

Usage:
  dt2.py summary FIGHTER          sizes, gate counts per kind
  dt2.py tree FIGHTER [--gated]   command tree per list as input strings; --gated: only branches with a gate
  dt2.py events FIGHTER [STATE]   frame events (all states or one local index)
  dt2.py windows FIGHTER [STATE]  cancel windows
FIGHTER: a name from FIGHTERS or a DT2 file id.
"""
import os
import struct
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from wad import Wad  # noqa: E402

# name: (group, DT2 file id, first global state, end global state); DAT = DT2 + 1, anim bank = DT2 + 2
FIGHTERS = {
    'liukang': (0, 5918, 194, 375),
    'kunglao': (1, 5930, 375, 539),
    'scorpion': (82, 6742, 1994, 2161),
    'baraka': (83, 6752, 2161, 2299),
    'reptile': (84, 6762, 2299, 2443),
    'subzero': (88, 6802, 2515, 2684),
    'kitana': (89, 6812, 2684, 2831),
    'cage': (90, 6822, 2831, 2978),
}
COMMON = (0, 194)  # group 92: states shared by everyone

COND_NAMES = {}
for _m in range(4):
    for _l in range(5):
        COND_NAMES[12660 + _m * 5 + _l] = 'S%dL%d' % (_m, _l + 1)
for _c in range(6):
    COND_NAMES[12680 + _c] = 'C%d' % _c
for _k in range(4):
    COND_NAMES[12686 + _k] = 'T%d' % _k


def cond_name(c):
    return COND_NAMES.get(c, str(c)) if c else ''


def sections(d):
    n = struct.unpack_from('<I', d, 0)[0]
    off = struct.unpack_from('<%dI' % (n + 1), d, 4)
    base = 4 + 4 * (n + 1)
    return [(base + off[k], base + off[k + 1] if k < n else len(d)) for k in range(n + 1)]


class Node:
    SIZE = 56

    def __init__(self, idx, raw):
        self.idx, self.raw = idx, raw
        (self.state, self.blend_in, self.blend_out, self.turn, self.link, self.f06, self.req, self.window,
         self.lookahead, self.press, self.hold, self.nothold, self.ignore, self.f1c, self.parent, self.child,
         self.sibling, self.f28, self.f2a, self.cond) = struct.unpack_from('<hbbBBhQhhHHHHHhIIhhH', raw, 0)
        self.tail = raw[0x2E:]

    def pack(self):
        head = struct.pack('<hbbBBhQhhHHHHHhIIhhH', self.state, self.blend_in, self.blend_out, self.turn, self.link,
                           self.f06, self.req, self.window, self.lookahead, self.press, self.hold, self.nothold,
                           self.ignore, self.f1c, self.parent, self.child, self.sibling, self.f28, self.f2a,
                           self.cond)
        return head + self.tail

    def input(self):
        s = '%x' % self.press
        if self.hold:
            s += '+h%x' % self.hold
        if self.nothold:
            s += '-h%x' % self.nothold
        if self.req:
            s += '/r%x' % self.req
        return s


class Fighter:
    def __init__(self, name, wad=None):
        self.wad = wad or Wad()
        if name.isdigit():
            fid = int(name)
            name = next(k for k, v in FIGHTERS.items() if v[1] == fid)
        self.name = name
        self.group, self.dt2_id, self.first, self.end = FIGHTERS[name]
        self.dt2 = self.wad.get(self.dt2_id)
        self.dat = self.wad.get(self.dt2_id + 1)
        s = sections(self.dt2)
        ev0, ev1 = s[0]
        self.events = [struct.unpack_from('<hhIQ', self.dt2, o) for o in range(ev0, ev1, 16)]
        self.event_start = list(struct.unpack_from('<%dI' % ((s[1][1] - s[1][0]) // 4), self.dt2, s[1][0]))
        n0, n1 = s[2]
        self.nodes = [Node(i, self.dt2[o:o + 56]) for i, o in enumerate(range(n0, n1, 56))]
        self.lists = {}
        for i, nd in enumerate(self.nodes):
            if nd.state < -1 and nd.state != -999:
                self.lists[-2 - nd.state] = i + 1
        d = sections(self.dat)
        self.state_recs = [self.dat[o:o + 0x70] for o in range(d[0][0], d[0][1], 0x70)]
        w0, w1 = d[1]
        self.windows_raw = self.dat[w0 + 8:w1]

    def nstates(self):
        return self.end - self.first

    def local(self, g):
        """'L<k>' for the fighter's own states, 'c<g>' for a common state, else the global id"""
        if self.first <= g < self.end:
            return 'L%d' % (g - self.first)
        if COMMON[0] <= g < COMMON[1]:
            return 'c%d' % g
        return 'g%d' % g

    def state_events(self, k):
        out, i = [], self.event_start[k]
        while i < len(self.events):
            e = self.events[i]
            out.append(e)
            if e[1] == 0:
                break
            i += 1
        return out

    def state_windows(self, k):
        r = self.state_recs[k]
        start, count = struct.unpack_from('<hh', r, 0x2C)
        return [struct.unpack_from('<hhh', self.windows_raw, (start + j) * 18) + (self.windows_raw[(start + j) * 18 + 6:
                                                                                                  (start + j + 1) * 18],)
                for j in range(count)]

    def children(self, idx):
        out, c = [], self.nodes[idx].child
        while c:
            out.append(c)
            c = self.nodes[c].sibling
        return out

    def walk(self, head):
        """yield (path of node indices) for every node reachable from list head `head` (depth first)"""
        def rec(idx, path):
            while idx:
                p = path + [idx]
                yield p
                if self.nodes[idx].child:
                    yield from rec(self.nodes[idx].child, p)
                idx = self.nodes[idx].sibling
        yield from rec(head, [])

    def path_str(self, path):
        return ' > '.join('%s:%s%s' % (self.nodes[i].input(), self.local(self.nodes[i].state),
                                       ('[' + cond_name(self.nodes[i].cond) + ']') if self.nodes[i].cond else '')
                          for i in path)


def main(argv):
    if len(argv) < 2:
        print(__doc__)
        return 2
    cmd, f = argv[0], Fighter(argv[1])
    if cmd == 'summary':
        from collections import Counter
        ev = Counter(cond_name(e[2]) for e in f.events if e[2])
        nd = Counter(cond_name(n.cond) for n in f.nodes if n.cond and n.state >= 0)
        print('%s group %d states %d (global %d..%d) events %d nodes %d lists %d windows %d' % (
            f.name, f.group, f.nstates(), f.first, f.end - 1, len(f.events), len(f.nodes), len(f.lists),
            len(f.windows_raw) // 18))
        print('  gated events:', dict(sorted(ev.items())))
        print('  gated nodes: ', dict(sorted(nd.items())))
    elif cmd == 'tree':
        gated = '--gated' in argv
        for k, head in sorted(f.lists.items()):
            for p in f.walk(head):
                if gated and not any(f.nodes[i].cond for i in p):
                    continue
                if not gated and f.nodes[p[-1]].child:
                    continue
                print('list %2d  %s' % (k, f.path_str(p)))
    elif cmd == 'events':
        ks = [int(argv[2])] if len(argv) > 2 else range(f.nstates())
        for k in ks:
            print('L%d' % k, ' '.join('%d:%d%s/%x' % (e[0], e[1], ('[' + cond_name(e[2]) + ']') if e[2] else '', e[3])
                                      for e in f.state_events(k)))
    elif cmd == 'windows':
        ks = [int(argv[2])] if len(argv) > 2 else range(f.nstates())
        for k in ks:
            print('L%d' % k, ' '.join('%d-%d:%s' % (a, b, f.local(t)) for a, b, t, _ in f.state_windows(k)))
    else:
        print(__doc__)
        return 2
    return 0


if __name__ == '__main__':
    sys.exit(main(sys.argv[1:]))
