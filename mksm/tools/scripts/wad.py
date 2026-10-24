#!/usr/bin/env python3
"""GAMEDATA.WAD reader for Mortal Kombat: Shaolin Monks (SLUS-210.87). Streams the ISO; extracts nothing to disk
unless asked.

Layout (checked against every entry of the disc, see `check`):
- ISO9660 root holds GAMEDATA.WAD, .WAE, .WAF, .WAG, .WAH, .WAI, .WAJ: one logical archive split into volumes of
  0x19000000 bytes; a TOC offset of k*0x19000000 + o is byte o of volume k (WAD = 0, WAE = 1, ...).
- Header at +0 of GAMEDATA.WAD: "PWF ", u32, u32 version 2, u32 entry count (7139), u32 volume size 0x19000000,
  u32 sector size 0x800. TOC of u64 entries at +0x20. File id = TOC index + 30 (GetAsyncFileSize 0x211878).
- TOC entry, bit 63 set ("packed"): offset = bits 0-20 * 0x800, size on disc = bits 22-43, bits 44-62 * 8 = an
  unpacked-size hint. Bit 63 clear: low word = byte offset, high word = size. The same two forms are what
  ArchiveGetFile (0x2124C0) reads from an archive in memory (decomp/src/fileio/fileiodrv.cpp).
- A file on disc is either raw or wrapped "EWDF": u32 magic, u32 unpacked size, u32 header length, u32 hash, then
  the name's tail (NUL-padded) up to the header length, then raw deflate (zlib wbits -15).

Usage:
  wad.py [--iso PATH] list [first [last]]       id, volume, offset, size, packed, EWDF name tail, unpacked size
  wad.py [--iso PATH] get ID [OUT]              unwrapped file bytes (EWDF inflated) to OUT or stdout
  wad.py [--iso PATH] check                     verify every entry lies inside its volume and every EWDF inflates
As a module: Wad(iso).get(fid) -> bytes, .entry(fid), .name(fid).
"""
import os
import struct
import sys
import zlib

DEFAULT_ISO = os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', '..', '..', '..', '..', 'ps2 game rom.iso')
VOLUMES = ['GAMEDATA.WAD', 'GAMEDATA.WAE', 'GAMEDATA.WAF', 'GAMEDATA.WAG', 'GAMEDATA.WAH', 'GAMEDATA.WAI',
           'GAMEDATA.WAJ']
FIRST_ID = 30


def iso_root(f):
    """{NAME: (byte offset, size)} of the ISO9660 root directory."""
    f.seek(16 * 2048)
    pvd = f.read(2048)
    if pvd[1:6] != b'CD001':
        raise ValueError('not an ISO9660 image')
    lba, size = struct.unpack_from('<I', pvd, 156 + 2)[0], struct.unpack_from('<I', pvd, 156 + 10)[0]
    f.seek(lba * 2048)
    d = f.read(size)
    out, o = {}, 0
    while o < len(d):
        n = d[o]
        if n == 0:
            o = (o // 2048 + 1) * 2048
            continue
        e = d[o:o + n]
        name = e[33:33 + e[32]].decode('latin1').split(';')[0]
        out[name] = (struct.unpack_from('<I', e, 2)[0] * 2048, struct.unpack_from('<I', e, 10)[0])
        o += n
    return out


class Wad:
    def __init__(self, iso=None):
        self.f = open(iso or os.environ.get('MKSM_ISO') or DEFAULT_ISO, 'rb')
        root = iso_root(self.f)
        self.vols = [root[v] for v in VOLUMES]
        base = self.vols[0][0]
        self.f.seek(base)
        h = self.f.read(0x20)
        magic, _, self.version, self.count, self.volsize, self.sector = struct.unpack_from('<4sIIIII', h)
        if magic != b'PWF ':
            raise ValueError('GAMEDATA.WAD: bad magic %r' % magic)
        self.f.seek(base + 0x20)
        self.toc = struct.unpack('<%dQ' % self.count, self.f.read(self.count * 8))

    def entry(self, fid):
        """(volume, offset in volume, size on disc, packed flag, size hint)"""
        e = self.toc[fid - FIRST_ID]
        if e >> 63:
            off, size, hint, packed = (e & 0x1FFFFF) * self.sector, (e >> 22) & 0x3FFFFF, ((e >> 44) & 0x7FFFF) << 3, 1
        else:
            off, size, hint, packed = e & 0xFFFFFFFF, e >> 32, e >> 32, 0
        return off // self.volsize, off % self.volsize, size, packed, hint

    def raw(self, fid):
        vol, off, size = self.entry(fid)[:3]
        self.f.seek(self.vols[vol][0] + off)
        return self.f.read(size)

    def header(self, fid, n=64):
        vol, off = self.entry(fid)[:2]
        self.f.seek(self.vols[vol][0] + off)
        return self.f.read(n)

    def name(self, fid):
        """the EWDF name tail, or None for a raw or empty file"""
        if not self.entry(fid)[2]:
            return None
        h = self.header(fid)
        if h[:4] != b'EWDF':
            return None
        hl = struct.unpack_from('<I', h, 8)[0]
        return h[16:hl].split(b'\0')[0].decode('latin1')

    def get(self, fid):
        d = self.raw(fid)
        if d[:4] != b'EWDF':
            return d
        usize, hl = struct.unpack_from('<II', d, 4)
        out = zlib.decompress(d[hl:], -15)
        if len(out) != usize:
            raise ValueError('id %d: inflated %d bytes, header says %d' % (fid, len(out), usize))
        return out

    def ids(self):
        return range(FIRST_ID, FIRST_ID + self.count)


def main(argv):
    iso = None
    if argv[:1] == ['--iso']:
        iso, argv = argv[1], argv[2:]
    w = Wad(iso)
    cmd = argv[0] if argv else 'list'
    if cmd == 'list':
        lo = int(argv[1]) if len(argv) > 1 else FIRST_ID
        hi = int(argv[2]) if len(argv) > 2 else FIRST_ID + w.count - 1
        for fid in range(lo, hi + 1):
            vol, off, size, packed, hint = w.entry(fid)
            h = w.header(fid, 16) if size else b''
            usize = struct.unpack_from('<I', h, 4)[0] if h[:4] == b'EWDF' else size
            print('%5d v%d %08x %8d %s %-24s %8d' % (fid, vol, off, size, 'P' if packed else '-', w.name(fid) or '-',
                                                    usize))
    elif cmd == 'get':
        d = w.get(int(argv[1]))
        if len(argv) > 2:
            open(argv[2], 'wb').write(d)
        else:
            sys.stdout.buffer.write(d)
    elif cmd == 'check':
        bad = 0
        for fid in w.ids():
            vol, off, size, packed, hint = w.entry(fid)
            if vol >= len(w.vols) or off + size > w.vols[vol][1]:
                print('id %d: outside volume %d (%x + %x > %x)' % (fid, vol, off, size,
                                                                   w.vols[vol][1] if vol < len(w.vols) else 0))
                bad += 1
                continue
            if size and w.header(fid, 4) == b'EWDF':
                try:
                    w.get(fid)
                except Exception as ex:  # noqa: BLE001 (report and go on)
                    print('id %d: %s' % (fid, ex))
                    bad += 1
        print('%d entries, %d bad' % (w.count, bad))
        return 1 if bad else 0
    else:
        print(__doc__)
        return 2
    return 0


if __name__ == '__main__':
    sys.exit(main(sys.argv[1:]))
