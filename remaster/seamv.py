#!/usr/bin/env python3
# Reader for Seam V record files (PS2_TRACE_SEAMV, runtime/src/seamv.cpp): what VU1 was given at every program start.
# Default: per frame batch/dropped/byte counts, then one row per draw (image, MSCAL entry) and its UNPACK formats.
# usage: python3 -I remaster/seamv.py <file> [--elf games/mksm/disc/SLUS_210.87] [--frame N] [--consts] [--gs]
#                                            [--batches N] [--json]
#   --elf       label code images D/A/B/C by matching them against the ELF (else by the first 8 hex digits of the key)
#   --consts    VU1 mem[0..45] at the first batch of each draw per frame, and which qwords vary within the frame
#   --gs        GS registers (set through GIF paths 2/3) in force at the first batch of each draw per frame
#   --batches N dump the first N batches of each draw: header, unpacks, batch qwords (GIF tags and A+D decoded)
#   --json      machine-readable summary instead of the tables
import argparse, json, struct, sys
from collections import Counter, defaultdict

BATCH = struct.Struct('<IBBH6HQ5I2H')  # 52 bytes, seamv.cpp Batch
UNPACK = struct.Struct('<IIHHIHHBxH')  # 24 bytes, seamv.cpp Unpack (last: packed data words kept)
NONE = 0xFFFFFFFF
KINDS = ('MSCAL', 'MSCALF', 'MSCNT')
IMAGES = {0x49b8b0: 'D', 0x49e430: 'A', 0x49f900: 'B', 0x4a20b0: 'C'}
GS = {0x00: 'PRIM', 0x01: 'RGBAQ', 0x02: 'ST', 0x03: 'UV', 0x04: 'XYZF2', 0x05: 'XYZ2', 0x06: 'TEX0_1', 0x07: 'TEX0_2',
      0x08: 'CLAMP_1', 0x09: 'CLAMP_2', 0x0A: 'FOG', 0x0C: 'XYZF3', 0x0D: 'XYZ3', 0x14: 'TEX1_1', 0x15: 'TEX1_2',
      0x16: 'TEX2_1', 0x17: 'TEX2_2', 0x18: 'XYOFFSET_1', 0x19: 'XYOFFSET_2', 0x1A: 'PRMODECONT', 0x1B: 'PRMODE',
      0x1C: 'TEXCLUT', 0x22: 'SCANMSK', 0x34: 'MIPTBP1_1', 0x35: 'MIPTBP1_2', 0x36: 'MIPTBP2_1', 0x37: 'MIPTBP2_2',
      0x3B: 'TEXA', 0x3D: 'FOGCOL', 0x3F: 'TEXFLUSH', 0x40: 'SCISSOR_1', 0x41: 'SCISSOR_2', 0x42: 'ALPHA_1',
      0x43: 'ALPHA_2', 0x44: 'DIMX', 0x45: 'DTHE', 0x46: 'COLCLAMP', 0x47: 'TEST_1', 0x48: 'TEST_2', 0x49: 'PABE',
      0x4A: 'FBA_1', 0x4B: 'FBA_2', 0x4C: 'FRAME_1', 0x4D: 'FRAME_2', 0x4E: 'ZBUF_1', 0x4F: 'ZBUF_2',
      0x50: 'BITBLTBUF', 0x51: 'TRXPOS', 0x52: 'TRXREG', 0x53: 'TRXDIR', 0x54: 'HWREG', 0x60: 'SIGNAL', 0x61: 'FINISH',
      0x62: 'LABEL'}
GIF_REGS = ('PRIM', 'RGBAQ', 'ST', 'UV', 'XYZF2', 'XYZ2', 'TEX0_1', 'TEX0_2', 'CLAMP_1', 'CLAMP_2', 'FOG', 'B?', 'XYZF3',
            'XYZ3', 'A+D', 'NOP')
BATCH_FIELDS = ('seq', 'kind', 'dbf', 'pc', 'top', 'itop', 'base', 'ofst', 'tops', 'nunpack', 'image', 'hash', 'draw_pc',
                'draw_hash', 'cseq', 'gseq', 'qwords', 'spare')


def parse(path):
    buf = memoryview(open(path, 'rb').read())
    if bytes(buf[:8]) != b'SEAMVREC':
        sys.exit(f'{path}: not a Seam V record file')
    version, flags = struct.unpack_from('<II', buf, 8)
    d = dict(buf=buf, version=version, flags=flags, frames={}, images={}, consts={}, gs={}, batches=[], truncated=None)
    pos, frame = 16, None
    while pos < len(buf):
        if pos + 8 > len(buf):
            d['truncated'] = f'{len(buf) - pos} stray bytes at offset {pos}'
            break
        t, n = struct.unpack_from('<II', buf, pos)
        body, c = pos + 8, chr(t) if 32 <= t < 127 else f'0x{t:x}'
        if body + n > len(buf):
            d['truncated'] = f"record '{c}' at offset {pos} wants {n} bytes, {len(buf) - body} left"
            break
        if c == 'F':
            frame = struct.unpack_from('<I', buf, body)[0]
            d['frames'].setdefault(frame, {})
        elif c == 'E':
            f, nb, dropped, size = struct.unpack_from('<4I', buf, body)
            d['frames'].setdefault(f, {}).update(batches=nb, dropped=dropped, bytes=size)
        elif c == 'K':
            d['images'][struct.unpack_from('<Q', buf, body)[0]] = body + 8
        elif c == 'C':
            d['consts'][struct.unpack_from('<I', buf, body)[0]] = body + 4
        elif c == 'G':
            seq, cnt = struct.unpack_from('<II', buf, body)
            d['gs'][seq] = {struct.unpack_from('<I', buf, body + 8 + 16 * i)[0]: struct.unpack_from('<Q', buf, body + 16 + 16 * i)[0]
                            for i in range(cnt)}
        elif c == 'B':
            b = dict(zip(BATCH_FIELDS, BATCH.unpack_from(buf, body)), frame=frame)
            at = body + BATCH.size
            b['unpacks'] = [UNPACK.unpack_from(buf, at + UNPACK.size * i) for i in range(b['nunpack'])]
            b['raw'] = at + UNPACK.size * b['nunpack']  # packed data of the unpacks with words > 0, in order
            b['data'] = b['raw'] + 4 * sum(u[8] for u in b['unpacks'])
            d['batches'].append(b)
        elif c == 'R':
            seq = struct.unpack_from('<I', buf, body)[0]
            if d['batches'] and d['batches'][-1]['seq'] == seq:
                d['batches'][-1]['regs'] = body + 4
        else:
            print(f"warning: unknown record '{c}' ({n} bytes) at offset {pos}", file=sys.stderr)
        pos = body + n
    return d


def elf_labels(path, d):
    elf = open(path, 'rb').read()
    phoff, = struct.unpack_from('<I', elf, 0x1C)
    phentsize, phnum = struct.unpack_from('<HH', elf, 0x2A)
    segs = [struct.unpack_from('<8I', elf, phoff + i * phentsize) for i in range(phnum)]

    def at(va, n):
        for typ, off, vaddr, _, filesz, *_ in segs:
            if typ == 1 and vaddr <= va < vaddr + filesz:
                return elf[off + va - vaddr: off + min(va - vaddr + n, filesz)]
        return b''
    labels = {}
    for key, o in d['images'].items():
        code, best = bytes(d['buf'][o:o + 0x2000]), (0.0, None)
        for va, name in IMAGES.items():
            ref = at(va, 0x2000)
            if ref and code[:len(ref)] == ref:
                best = (1.0, name)
                break
            words = len(ref) // 8
            same = sum(code[i * 8:i * 8 + 8] == ref[i * 8:i * 8 + 8] for i in range(words))
            if words and same / words > best[0]:
                best = (same / words, name + '~')
        labels[key] = best[1] if best[0] >= 0.9 else f'{key:016x}'[:8]
    return labels


def fmt_name(cmd):
    vn, vl = (cmd >> 26) & 3, (cmd >> 24) & 3
    if vn == 3 and vl == 3:
        return 'V4-5'
    return ('S', 'V2', 'V3', 'V4')[vn] + ('-32', '-16', '-8', '-?')[vl]


def unpack_info(u):
    cmd, src, addr, cycle, mask, num, tops, mode = u[:8]
    flg = (cmd >> 15) & 1
    return dict(fmt=fmt_name(cmd), m=(cmd >> 28) & 1, usn=(cmd >> 14) & 1, flg=flg, tops=tops,
                addr=f'+{(addr - tops) & 0x3FF:#05x}' if flg else f'@{addr:#05x}', cl=cycle & 0xFF, wl=cycle >> 8,
                mode=mode, mask=mask if (cmd >> 28) & 1 else None, num=num, src=None if src == NONE else src)


def ranges(idx):
    out, idx = [], sorted(idx)
    for i in idx:
        if out and i == out[-1][1] + 1:
            out[-1][1] = i
        else:
            out.append([i, i])
    return ','.join(f'{a}' if a == b else f'{a}-{b}' for a, b in out) or '-'


def mm(v):
    return f'{min(v)}-{max(v)}' if v else '-'


def hx(v):
    return 'none' if v == NONE else str(v)


def qword(buf, o):
    return struct.unpack_from('<4I', buf, o), struct.unpack_from('<4f', buf, o)


def gif_tag(lo, hi):  # a qword that decodes as a plausible GIF tag (bits 16-45 of the low dword pair are unused)
    if (lo >> 16) & ((1 << 30) - 1) or not lo & 0x7FFF:
        return None
    nreg = (lo >> 60) & 15 or 16
    return dict(nloop=lo & 0x7FFF, eop=(lo >> 15) & 1, pre=(lo >> 46) & 1, prim=(lo >> 47) & 0x7FF, flg=(lo >> 58) & 3,
                nreg=nreg, regs=[GIF_REGS[(hi >> (4 * i)) & 15] for i in range(nreg)])


def dump_batch(d, b, label):
    buf = d['buf']
    print(f"  frame {b['frame']} batch {b['seq']} {KINDS[b['kind']] if b['kind'] < 3 else b['kind']} pc {b['pc']:04x} "
          f"hash {b['hash']:08x} draw {label}@{b['draw_pc'] & 0xFFFF:04x}/{b['draw_hash']:08x} top {b['top']:#x} "
          f"itop {b['itop']:#x} base {b['base']:#x} ofst {b['ofst']:#x} tops {b['tops']:#x} dbf {b['dbf']} "
          f"C {hx(b['cseq'])} G {hx(b['gseq'])} qwords {b['qwords']}")
    for u in b['unpacks']:
        i = unpack_info(u)
        print(f"    unpack {u[0]:08x} {i['fmt']}{' m' if i['m'] else ''}{' usn' if i['usn'] else ''} {i['addr']} num {i['num']} "
              f"tops {i['tops']:#x} cl/wl {i['cl']}/{i['wl']} mode {i['mode']}" + (f" mask {i['mask']:08x}" if i['mask'] is not None else '')
              + (f" src {i['src']:08x}" if i['src'] is not None else ' src ?') + (f" data {u[8]} words" if u[8] else ''))
    notes, cand = {}, [0, 1, 2, 3]
    while cand:
        q = cand.pop(0)
        if q >= b['qwords'] or q in notes:
            continue
        lo, hi = struct.unpack_from('<QQ', buf, b['data'] + 16 * q)
        tag = gif_tag(lo, hi)
        if not tag:
            continue
        notes[q] = (f"GIF tag nloop {tag['nloop']} eop {tag['eop']} pre {tag['pre']} prim {tag['prim']:#x} flg {tag['flg']} "
                    f"nreg {tag['nreg']} [{' '.join(tag['regs'])}]")
        if tag['flg'] == 0 and set(tag['regs']) == {'A+D'}:
            n = tag['nloop'] * tag['nreg']
            for k in range(q + 1, min(q + 1 + n, b['qwords'])):
                v, r = struct.unpack_from('<QQ', buf, b['data'] + 16 * k)
                notes[k] = f"A+D {GS.get(r & 0xFF, hex(r & 0xFF))} = {v:#018x}"
            cand.append(q + 1 + n)
    for q in range(b['qwords']):
        w, f = qword(buf, b['data'] + 16 * q)
        print(f"    +{q:03x}: {' '.join(f'{x:08x}' for x in w)} | {' '.join(f'{x:.6g}' for x in f)}"
              + (f'   {notes[q]}' if q in notes else ''))
    if 'regs' in b:
        o = b['regs']
        vi = struct.unpack_from('<16H', buf, o + 528)
        q_, p_, i_, r_, mac, status, clip, tpc = struct.unpack_from('<8I', buf, o + 560)
        print(f"    regs vi {' '.join(f'{x:x}' for x in vi)} q {q_:08x} i {i_:08x} tpc {tpc:04x} status {status:x}")
        for k in range(33):
            w, f = qword(buf, o + 16 * k)
            if any(w):
                print(f"      {'acc ' if k == 32 else f'vf{k:02d}'}: {' '.join(f'{x:.6g}' for x in f)} | {' '.join(f'{x:08x}' for x in w)}")


def main():
    ap = argparse.ArgumentParser(description='Read a Seam V record file (PS2_TRACE_SEAMV).')
    ap.add_argument('file')
    ap.add_argument('--elf')
    ap.add_argument('--frame', type=int)
    ap.add_argument('--consts', action='store_true')
    ap.add_argument('--gs', action='store_true')
    ap.add_argument('--batches', type=int, default=0)
    ap.add_argument('--json', action='store_true')
    a = ap.parse_args()
    d = parse(a.file)
    labels = elf_labels(a.elf, d) if a.elf else {k: f'{k:016x}'[:8] for k in d['images']}
    batches = [b for b in d['batches'] if a.frame is None or b['frame'] == a.frame]
    groups, order = {}, []
    for b in batches:
        g = (labels.get(b['image'], f"{b['image']:016x}"[:8]), b['draw_pc'])
        if g not in groups:
            groups[g] = dict(hash=b['draw_hash'], cal=0, cnt=0, cnt_pcs=Counter(), qcal=[], qcnt=[], bo=Counter(),
                             top=Counter(), c=set(), gs=set(), unpacks={}, batches=[])
            order.append(g)
        s = groups[g]
        cnt = b['kind'] == 2
        s['cnt' if cnt else 'cal'] += 1
        (s['qcnt'] if cnt else s['qcal']).append(b['qwords'])
        if cnt:
            s['cnt_pcs'][b['pc']] += 1
        s['bo'][(b['base'], b['ofst'])] += 1
        s['top'][b['top']] += 1
        s['c'].add(b['cseq'])
        s['gs'].add(b['gseq'])
        s['batches'].append(b)
        for u in b['unpacks']:
            i = unpack_info(u)
            key = (KINDS[b['kind']] if b['kind'] < 3 else str(b['kind']), i['fmt'], i['m'], i['usn'], i['flg'], i['addr'],
                   i['cl'], i['wl'], i['mode'], i['mask'])
            h = s['unpacks'].setdefault(key, dict(count=0, num=[], src=[]))
            h['count'] += 1
            h['num'].append(i['num'])
            if i['src'] is not None:
                h['src'].append(i['src'])

    def name(g):
        return f"{g[0]}@{'????' if g[1] == NONE else f'{g[1]:04x}'}"
    if a.json:
        out = dict(file=a.file, version=d['version'], truncated=d['truncated'],
                   frames={str(f): v for f, v in sorted(d['frames'].items())}, draws=[])
        for g in order:
            s = groups[g]
            out['draws'].append(dict(
                image=g[0], draw_pc=g[1], hash=f"{s['hash']:08x}", mscal=s['cal'], mscnt=s['cnt'],
                mscnt_pcs={f'{k:04x}': v for k, v in s['cnt_pcs'].items()}, qwords_mscal=mm(s['qcal']), qwords_mscnt=mm(s['qcnt']),
                base_offset={f'{b:x}/{o:x}': v for (b, o), v in s['bo'].items()}, top={f'{k:x}': v for k, v in s['top'].items()},
                consts=len(s['c']), gs=len(s['gs']),
                unpacks=[dict(before=k[0], fmt=k[1], m=k[2], usn=k[3], flg=k[4], addr=k[5], cl=k[6], wl=k[7], mode=k[8],
                              mask=None if k[9] is None else f'{k[9]:08x}', count=h['count'], num=mm(h['num']),
                              src_known=len(h['src']), src=None if not h['src'] else f"{min(h['src']):08x}-{max(h['src']):08x}")
                         for k, h in sorted(s['unpacks'].items(), key=lambda kv: -kv[1]['count'])]))
        print(json.dumps(out, indent=1))
        return
    print(f"{a.file}: version {d['version']}, {len(d['batches'])} batch records, {len(d['images'])} code images, "
          f"{len(d['consts'])} constant blocks, {len(d['gs'])} GS states" + (', VU1 registers' if d['flags'] & 1 else ''))
    if d['truncated']:
        print(f"truncated: {d['truncated']} (the run ended mid-write; everything before it is read)")
    for f, v in sorted(d['frames'].items()):
        if a.frame is None or f == a.frame:
            print(f"frame {f}: " + (f"{v['batches']} batches, {v['dropped']} dropped, {v['bytes']} bytes" if 'batches' in v
                                     else 'no end record (truncated)'))
    print(f"\n{'draw':14} {'hash':8} {'MSCAL':>5} {'MSCNT':>6} {'q cal':>7} {'q cnt':>7}  {'C':>4} {'G':>4}  MSCNT pcs; BASE/OFFSET; TOP")
    for g in order:
        s = groups[g]
        print(f"{name(g):14} {s['hash']:08x} {s['cal']:5} {s['cnt']:6} {mm(s['qcal']):>7} {mm(s['qcnt']):>7}  {len(s['c']):4} "
              f"{len(s['gs']):4}  {' '.join(f'{k:04x}:{v}' for k, v in sorted(s['cnt_pcs'].items())) or '-'}; "
              f"{' '.join(f'{b:x}/{o:x}:{v}' for (b, o), v in sorted(s['bo'].items()))}; "
              f"{' '.join(f'{k:x}:{v}' for k, v in sorted(s['top'].items()))}")
    for g in order:
        s = groups[g]
        if not s['unpacks']:
            continue
        print(f"\nunpacks before the program starts of {name(g)} ({s['hash']:08x}):")
        print(f"  {'count':>6} {'before':6} {'format':6} m usn {'addr':7} cl/wl mode {'num':>7} {'mask':8}  source")
        for k, h in sorted(s['unpacks'].items(), key=lambda kv: -kv[1]['count']):
            src = f"{len(h['src'])} known {min(h['src']):08x}-{max(h['src']):08x}" if h['src'] else 'unknown'
            print(f"  {h['count']:6} {k[0]:6} {k[1]:6} {k[2]} {k[3]:3} {k[5]:7} {k[6]}/{k[7]:<3} {k[8]:4} {mm(h['num']):>7} "
                  f"{'' if k[9] is None else f'{k[9]:08x}':8}  {src}")
    buf = d['buf']
    for g in order:
        per_frame = defaultdict(list)
        for b in groups[g]['batches']:
            per_frame[b['frame']].append(b)
        for f, bs in sorted(per_frame.items(), key=lambda kv: (kv[0] is None, kv[0] or 0)):
            first = bs[0]
            if a.consts:
                print(f"\nconstants of {name(g)} frame {f}, batch {first['seq']} (C {hx(first['cseq'])}):")
                if first['cseq'] in d['consts']:
                    for q in range(46):
                        w, fl = qword(buf, d['consts'][first['cseq']] + 16 * q)
                        print(f"  {q:2}: {' '.join(f'{x:12.6g}' for x in fl)} | {' '.join(f'{x:08x}' for x in w)}")
                seqs = sorted({b['cseq'] for b in bs if b['cseq'] in d['consts']})
                vary = set()
                for c in seqs[1:]:
                    for q in range(46):
                        o0, o1 = d['consts'][seqs[0]] + 16 * q, d['consts'][c] + 16 * q
                        if buf[o0:o0 + 16] != buf[o1:o1 + 16]:
                            vary.add(q)
                print(f"  C records in force this frame: {len(seqs)}; qwords that differ between them: {ranges(vary)}")
            if a.gs:
                regs = d['gs'].get(first['gseq'], {})
                print(f"\nGS state of {name(g)} frame {f}, batch {first['seq']} (G {hx(first['gseq'])}, "
                      f"{len({b['gseq'] for b in bs})} G records in force this frame):")
                for r, v in sorted(regs.items()):
                    print(f"  {GS.get(r, '?'):11} {r:#04x} = {v:#018x}")
            if a.batches:
                print(f"\nbatches of {name(g)} frame {f}:")
                for b in bs[:a.batches]:
                    dump_batch(d, b, g[0])


if __name__ == '__main__':
    main()
