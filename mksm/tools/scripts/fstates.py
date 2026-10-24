#!/usr/bin/env python3
"""Fighter move states of Mortal Kombat: Shaolin Monks (SLUS-210.87): which animation a state plays, the 0x70-byte
state records, and cross-fighter state equivalence. Reads the disc through wad.py; writes nothing.

Per-fighter files in GAMEDATA.WAD (consecutive ids): *PS2.bin (model + skeleton), *ERG.DT2, *ERG.DAT, *nim.rtt.

State -> animation (from the ELF):
- A fighter "group" g owns global states [0x4E94C8[g], 0x4E9648[g]) (FUN_002B19C0). State k of the group (local
  index k = global - first) plays animation k of the fighter's nim.rtt; there is no anim id or name in the state
  record. Chain:
  - FUN_001D1068 (Gameload.cpp, unit_0034.cpp:1725), the player's anim-bank load step: anim base
    DAT_006A98F0 = slot * 200, then DAT_006C8A28[first + k] = base + k for every state of the group, then
    FUN_0025EF68 -> FUN_002AE290 parses the bank.
  - FUN_002AE290 (bank parser, unit_006B.cpp:2895): table A at file + u32[0] (offsets relative to the table,
    0-terminated): clip k -> FUN_002AF908(base + k, ...) fills anim descriptor base + k in the state DB
    (0x6B3000 +4, 8 bytes: u8 = clip u16[0], u8 = clip u16[2], u16 = clip u16[1] = frame count, u32 = clip + 6).
    Table B at file + u32[1] (same form): name string k -> FUN_002B1960 stores it at 0x6B3000 +0x10 [base + k]
    (lower-cased and hashed by FUN_002AE128 for an optional lookup).
  - FUN_002ADAC0 (unit_006B.cpp:2297) / FUN_002AF650 redo the same per actor (actor +0x28 group, actor +0xE04 =
    slot * 200, set in FUN_002556B0 ps2Setup.cpp, unit_0055.cpp:2394); groups without a loaded bank get the
    identity map (FUN_002AF580).
  - At run time: FUN_002E6098(s) = DAT_006C8A28[s]; FUN_002AECB0(s) (unit_006B.cpp:3607) = frame count of
    descriptor DAT_006C8A28[s].
  Hence clips == states for every fighter (Liu Kang 181, Kung Lao 164, Scorpion 167, Baraka 138, Reptile 144,
  Sub-Zero 169, Kitana 147, Cage 147), and ERG.DAT section 0 has the same count.

nim.rtt: u32 off_clips (0x10), u32 off_names, then at off_clips a 0-terminated u32 table of clip offsets (relative to
  the table); clip k spans table[k] .. table[k + 1] (the last ends at off_names). Clip header: u16 format (11, or 6
  for short pose clips), u16 frames, u16 channel count (?), then data. At off_names a 0-terminated u32 table of
  name offsets (relative to that table), NUL-terminated names like 'i00_st_s'. Names follow one scheme across
  fighters (a/b/c stance+walk, d block/counter, g..k attack strings by button, j grabs, r fatality/stub, s/l/m/n/p
  specials, v versus-only, ...): letter + 2 digits, direction st/rt/bk/lf/jp/rn, and a one-letter set.

ERG.DAT section 0, state record (0x70 bytes). [v] = checked in code, [d] = seen in the data only:
  +0x00 s16  own global state id [d: equals first + k for every record of the 8 fighters]
  +0x11 u8   group id [d: all 8 fighters]; +0x0E u8 = 18 and +0x56 u16 = 600 in every record [d]
  +0x14 s16  frame (blend/cancel start?) [d]
  +0x16 u16  state length override: frame event -2 ("last frame") fires at +0x16 - 1 if nonzero, else at the clip's
             last frame [v: FUN_002E6F98]
  +0x1C s16, +0x1E u8, +0x1F u8  attack frames? (+0x1E <= +0x1F, inside the clip) [d]
  +0x2A s16  partner state, global id, on grab/throw pairs (the attacker's own follow-up) [d]
  +0x2C u16, +0x2E u16  first / count of this state's cancel windows in section 1 [d, dt2.py]
  +0x46 u8   1 on jump states [d];  +0x66 u16  10/20/30/40 by move set (damage class?) [d]
  Two states with byte-identical clips have near-identical records: +0x11 always differs, the window count +0x2E
  often, +0x14/+0x16/+0x1E/+0x5A/+0x62 in a few, besides the global ids (+0x00, +0x2A, windows).
ERG.DAT section 1: u32, u32 n, then n 18-byte cancel windows {s16 from, s16 to, s16 target GLOBAL state (or a
  common state < 194), s16, u16, s16, s16, s16 direction (+-1024 / 2048 = +-90 / 180 degrees), s16}.

Equivalence (equiv): donor local state -> target local state, by animation:
  exact        byte-identical clip (if several target clips are identical, the one with the same name)
  exact?       byte-identical clip, several candidates, none with the same name (first taken)
  stub         identical 1-frame placeholder clip (r*_f_l* fatality stubs): no motion, mapping is by name or arbitrary
  name+frames  same anim name (case-insensitive) and frame count, different bytes
  name         same anim name, different frame count
Donor states with none of these are left out. Every non-stub byte-identical clip found so far also has the same
name, so 'name' is the useful weak key; frame count alone is not (most counts are shared by many clips).

Usage:
  fstates.py [--iso PATH] states FIGHTER          one line per state: local, global, name, frames, +0x16, partner,
                                                  cancel windows, clip md5
  fstates.py [--iso PATH] equiv DONOR TARGET      the equivalence table and its counts
  fstates.py [--iso PATH] counts                  counts per kind for every donor x target pair of DONORS x TARGETS
As a module: FIGHTERS, states(name, wad=None), clips(name, wad=None), equiv(donor, target, wad=None).
"""
import collections
import hashlib
import os
import struct
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from wad import Wad  # noqa: E402

# name: (group, first global state, end global state (exclusive), first file id = *PS2.bin);
# DT2 = id + 1, DAT = id + 2, nim.rtt = id + 3. Ranges from the ELF tables 0x4E94C8 / 0x4E9648.
FIGHTERS = {
    'liukang': (0, 194, 375, 5917),
    'kunglao': (1, 375, 539, 5929),
    'scorpion': (82, 1994, 2161, 6741),
    'baraka': (83, 2161, 2299, 6751),
    'reptile': (84, 2299, 2443, 6761),
    'subzero': (88, 2515, 2684, 6801),
    'kitana': (89, 2684, 2831, 6811),
    'cage': (90, 2831, 2978, 6821),
    'big_snake': (50, 1338, 1345, 6421),      # story boss (Reptile fight, map 0x90): the serpent
    'reptile_npc': (59, 1564, 1595, 6511),    # story boss (Reptile fight, map 0x90): Reptile himself
    'cage_npc': (71, 1902, 1936, 6631),       # story Johnny Cage (model 'Cage', Versus Cage's 50-bone skeleton)
    'cage_stone': (86, 2479, 2513, 6781),     # the same moves on the 'stonecage' model
}
DONORS = ('subzero', 'scorpion', 'liukang', 'kunglao')
TARGETS = ('reptile', 'baraka', 'kitana', 'cage')
KINDS = ('exact', 'exact?', 'stub', 'name+frames', 'name')
REC = 0x70

_wad = None


def _w(wad):
    global _wad
    if wad is not None:
        return wad
    if _wad is None:
        _wad = Wad()
    return _wad


def sections(d):
    """[(start, end)] of a u32 n, u32 off[n + 1] container (ERG.DAT / ERG.DT2)"""
    n = struct.unpack_from('<I', d, 0)[0]
    off = struct.unpack_from('<%dI' % (n + 1), d, 4)
    base = 4 + 4 * (n + 1)
    return [(base + off[k], base + off[k + 1] if k < n else len(d)) for k in range(n + 1)]


def _table(d, at):
    """0-terminated u32 offset table at `at`, offsets relative to the table"""
    out = []
    while True:
        v = struct.unpack_from('<I', d, at + 4 * len(out))[0]
        if not v:
            return [at + x for x in out]
        out.append(v)


def clips(name, wad=None):
    """[{'name', 'format', 'frames', 'channels', 'size', 'md5'}] of the fighter's nim.rtt, in bank order"""
    d = _w(wad).get(FIGHTERS[name][3] + 3)
    o_clips, o_names = struct.unpack_from('<II', d, 0)
    starts = _table(d, o_clips)
    names = [d[o:d.index(b'\0', o)].decode('latin1') for o in _table(d, o_names)]
    if len(names) != len(starts):
        raise ValueError('%s: %d clips, %d names' % (name, len(starts), len(names)))
    out = []
    for k, (s, e) in enumerate(zip(starts, starts[1:] + [o_names])):
        c = d[s:e]
        fmt, frames, chans = struct.unpack_from('<3H', c, 0)
        out.append({'name': names[k], 'format': fmt, 'frames': frames, 'channels': chans, 'size': len(c),
                    'md5': hashlib.md5(c).hexdigest()})
    return out


def states(name, wad=None):
    """[{'local', 'global', 'name', 'frames', 'md5', 'size', 'id', 'f14', 'length', 'f1c', 'hit', 'partner',
    'win_first', 'win_count', 'windows', 'airborne', 'f66', 'rec'}], one per state of the fighter's group.
    State k plays clip k ('name', 'frames', 'md5' are that clip's). 'windows' = the state's cancel windows from
    ERG.DAT section 1 as 9-tuples of s16; 'rec' = the raw 0x70-byte record."""
    w = _w(wad)
    group, first, end, fid = FIGHTERS[name]
    cl = clips(name, w)
    dat = w.get(fid + 2)
    sec = sections(dat)
    s0, s1 = sec[0], sec[1]
    n = (s0[1] - s0[0]) // REC
    if n != end - first or n != len(cl):
        raise ValueError('%s: %d records, %d states, %d clips' % (name, n, end - first, len(cl)))
    win_n = struct.unpack_from('<I', dat, s1[0] + 4)[0]
    out = []
    for k in range(n):
        r = dat[s0[0] + k * REC:s0[0] + (k + 1) * REC]
        sid = struct.unpack_from('<h', r, 0x00)[0]
        f14, length = struct.unpack_from('<hH', r, 0x14)
        f1c, h0, h1 = struct.unpack_from('<hBB', r, 0x1C)
        partner = struct.unpack_from('<h', r, 0x2A)[0]
        wf, wc = struct.unpack_from('<HH', r, 0x2C)
        if sid != first + k or r[0x11] != group:
            raise ValueError('%s: record %d has id %d group %d, expected %d %d' % (name, k, sid, r[0x11], first + k,
                                                                                     group))
        wins = []
        if wc and wf + wc <= win_n:
            for i in range(wf, wf + wc):
                wins.append(struct.unpack_from('<9h', dat, s1[0] + 8 + 18 * i))
        c = cl[k]
        out.append({'local': k, 'global': first + k, 'name': c['name'], 'frames': c['frames'], 'md5': c['md5'],
                    'size': c['size'], 'id': sid, 'f14': f14, 'length': length, 'f1c': f1c, 'hit': (h0, h1),
                    'partner': partner, 'win_first': wf, 'win_count': wc, 'windows': wins, 'airborne': r[0x46],
                    'f66': struct.unpack_from('<H', r, 0x66)[0], 'rec': r})
    return out


def equiv(donor, target, wad=None):
    """{donor_local: (target_local, how)}, how in KINDS (see the module docstring)"""
    w = _w(wad)
    D, T = states(donor, w), states(target, w)
    by_md5 = collections.defaultdict(list)
    by_name = {}
    for t in T:
        by_md5[t['md5']].append(t['local'])
        by_name.setdefault(t['name'].lower(), t['local'])
    out = {}
    for d in D:
        same = by_name.get(d['name'].lower())
        cand = by_md5.get(d['md5'], [])
        if cand and d['frames'] <= 1:
            out[d['local']] = (same if same is not None else cand[0], 'stub')
        elif cand:
            if same in cand:
                out[d['local']] = (same, 'exact')
            else:
                out[d['local']] = (cand[0], 'exact' if len(cand) == 1 else 'exact?')
        elif same is not None:
            out[d['local']] = (same, 'name+frames' if T[same]['frames'] == d['frames'] else 'name')
    return out


def counts(m):
    c = collections.Counter(how for _, how in m.values())
    return [c.get(k, 0) for k in KINDS]


def main(argv):
    iso = None
    if argv[:1] == ['--iso']:
        iso, argv = argv[1], argv[2:]
    if not argv or argv[0] not in ('states', 'equiv', 'counts'):
        print(__doc__)
        return 2
    w = Wad(iso)
    cmd = argv[0]
    if cmd == 'states':
        for s in states(argv[1], w):
            print('%3d %4d %-9s f%3d len%3d hit%3d-%-3d partner%5d win%3d %s' % (
                s['local'], s['global'], s['name'], s['frames'], s['length'], s['hit'][0], s['hit'][1], s['partner'],
                s['win_count'], s['md5'][:12]))
    elif cmd == 'equiv':
        donor, target = argv[1], argv[2]
        D, T = states(donor, w), states(target, w)
        m = equiv(donor, target, w)
        for d in D:
            if d['local'] in m:
                t, how = m[d['local']]
                tt = T[t]
                print('%3d %4d %-9s f%3d -> %3d %4d %-9s f%3d  %s' % (d['local'], d['global'], d['name'], d['frames'],
                                                                       t, tt['global'], tt['name'], tt['frames'], how))
            else:
                print('%3d %4d %-9s f%3d -> -' % (d['local'], d['global'], d['name'], d['frames']))
        print('%s -> %s: %d donor states; %s' % (donor, target, len(D),
                                                  ', '.join('%s %d' % kv for kv in zip(KINDS, counts(m)))))
    else:
        print('%-9s %-8s %5s  %s' % ('donor', 'target', 'n', '  '.join('%11s' % k for k in KINDS)))
        cache = {}
        for t in TARGETS:
            for d in DONORS:
                m = equiv(d, t, w)
                cache[d] = cache.get(d) or len(states(d, w))
                print('%-9s %-8s %5d  %s' % (d, t, cache[d], '  '.join('%11d' % v for v in counts(m))))
    return 0


if __name__ == '__main__':
    sys.exit(main(sys.argv[1:]))
