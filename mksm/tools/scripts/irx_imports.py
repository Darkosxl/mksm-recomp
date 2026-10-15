#!/usr/bin/env python3
"""IOP IRX import/export table extractor (stdlib only; run with python3 -I).

Usage:
  python3 -I irx_imports.py [--json OUT.json] PATH [PATH ...]

PATH may be an .IRX file, an IOPRP/ROM image (ROMDIR/ROMFS: members are
extracted and parsed as IRX), or a directory (scanned for *.IRX / *.IMG).
Duplicate inputs (same SHA1) are reported once.

For each module prints:
  imports {lib: [ordinals]}   from import tables  (magic 0x41e00000)
  exports {lib: count}        from export tables  (magic 0x41c00000)

Import table layout (IOP loadcore):
  u32 magic=0x41e00000; u32 next=0; u16 version; u16 mode; char name[8];
  { u32 0x03e00008 (jr $ra); u32 0x2400NNNN (addiu $zero,$zero,N) }*  ; u32 0; u32 0
Export table layout:
  u32 magic=0x41c00000; u32 next=0; u16 version; u16 mode; char name[8];
  u32 fptr[]  (terminated by an unrelocated 0 word)
"""
import hashlib
import json
import os
import struct
import sys

IMP_MAGIC = 0x41E00000
EXP_MAGIC = 0x41C00000
JR_RA = 0x03E00008
SHT_REL = 9
R_MIPS_32 = 2


def u32(b, o):
    return struct.unpack_from('<I', b, o)[0]


def cstr(b):
    return b.split(b'\0', 1)[0].decode('ascii', 'replace')


class Elf:
    """Minimal ELF32-LE reader: section table, vaddr<->file mapping, R_MIPS_32 reloc set."""

    def __init__(self, data):
        if data[:4] != b'\x7fELF':
            raise ValueError('not ELF')
        self.data = data
        (self.e_type, self.e_machine, _, self.e_entry, self.e_phoff, self.e_shoff, _,
         _, self.e_phentsize, self.e_phnum, self.e_shentsize, self.e_shnum,
         self.e_shstrndx) = struct.unpack_from('<HHIIIIIHHHHHH', data, 16)
        self.sections = []
        for i in range(self.e_shnum):
            o = self.e_shoff + i * self.e_shentsize
            (name, typ, flags, addr, off, size, link, info, align, entsz) = struct.unpack_from(
                '<10I', data, o)
            self.sections.append(dict(name_off=name, type=typ, flags=flags, addr=addr, off=off,
                                      size=size, link=link, info=info))
        if self.sections and self.e_shstrndx < len(self.sections):
            st = self.sections[self.e_shstrndx]
            for s in self.sections:
                s['name'] = cstr(data[st['off'] + s['name_off']:st['off'] + st['size']])
        # Set of vaddrs that receive an R_MIPS_32 relocation (pointer fields).
        self.reloc32 = set()
        for s in self.sections:
            if s['type'] != SHT_REL:
                continue
            for k in range(s['size'] // 8):
                r_off, r_info = struct.unpack_from('<II', data, s['off'] + 8 * k)
                if r_info & 0xFF == R_MIPS_32:
                    self.reloc32.add(r_off)

    def progbits(self):
        """Yield (name, file_off, vaddr, size) for allocated PROGBITS sections."""
        for s in self.sections:
            if s['type'] == 1 and (s['flags'] & 2):
                yield s.get('name', '?'), s['off'], s['addr'], s['size']

    def iopmod(self):
        for s in self.sections:
            if s['type'] == 0x70000080:
                b = self.data[s['off']:s['off'] + s['size']]
                if len(b) >= 26:
                    ver = struct.unpack_from('<H', b, 24)[0]
                    return cstr(b[26:]), ver
        return None, None


def scan_tables(elf):
    """Return (imports, exports) dicts. imports: lib -> {'version':..,'ordinals':[...]}"""
    data = elf.data
    imports, exports = {}, {}
    for sname, foff, vaddr, size in elf.progbits():
        end = foff + size
        o = foff
        while o + 20 <= end:
            w = u32(data, o)
            if w == IMP_MAGIC and u32(data, o + 4) == 0:
                ver = struct.unpack_from('<H', data, o + 8)[0]
                lib = cstr(data[o + 12:o + 20])
                p = o + 20
                ords = []
                while p + 8 <= end and u32(data, p) == JR_RA:
                    w2 = u32(data, p + 4)
                    if (w2 & 0xFFFF0000) != 0x24000000:
                        break
                    ords.append(w2 & 0xFFFF)
                    p += 8
                if lib and ords:
                    ent = imports.setdefault(lib, {'version': '%d.%d' % (ver >> 8, ver & 0xFF),
                                                   'ordinals': []})
                    ent['ordinals'].extend(ords)
                    o = p
                    continue
            elif w == EXP_MAGIC and u32(data, o + 4) == 0:
                ver = struct.unpack_from('<H', data, o + 8)[0]
                lib = cstr(data[o + 12:o + 20])
                p = o + 20
                n = 0
                while p + 4 <= end:
                    va = vaddr + (p - foff)
                    if u32(data, p) == 0 and va not in elf.reloc32:
                        break
                    n += 1
                    p += 4
                if lib:
                    exports[lib] = {'version': '%d.%d' % (ver >> 8, ver & 0xFF), 'count': n}
                o = p + 4
                continue
            o += 4
    for v in imports.values():
        v['ordinals'] = sorted(set(v['ordinals']))
    return imports, exports


def parse_romdir(data):
    """Parse a ROMDIR/ROMFS image (IOPRP*.IMG). Returns list of (name, bytes)."""
    if data[:5] != b'RESET':
        return None
    members = []
    off = 0
    ent = 0
    while ent + 16 <= len(data):
        name = cstr(data[ent:ent + 10])
        if not name:
            break
        ext, size = struct.unpack_from('<HI', data, ent + 10)
        members.append((name, data[off:off + size], off, size, ext))
        off = (off + size + 15) & ~15
        ent += 16
    return members


def analyze_blob(name, data, origin):
    rec = {'name': name, 'origin': origin, 'size': len(data),
           'sha1': hashlib.sha1(data).hexdigest()}
    try:
        elf = Elf(data)
    except ValueError:
        rec['error'] = 'not an ELF'
        return rec
    rec['elf_type'] = '0x%04x' % elf.e_type
    modname, modver = elf.iopmod()
    rec['iopmod_name'] = modname
    rec['iopmod_version'] = None if modver is None else '%d.%d' % (modver >> 8, modver & 0xFF)
    imps, exps = scan_tables(elf)
    rec['imports'] = imps
    rec['exports'] = exps
    return rec


def collect(paths):
    files = []
    for p in paths:
        if os.path.isdir(p):
            for fn in sorted(os.listdir(p)):
                if fn.upper().endswith(('.IRX', '.IMG')):
                    files.append(os.path.join(p, fn))
        else:
            files.append(p)
    out, seen = [], {}
    for f in files:
        data = open(f, 'rb').read()
        h = hashlib.sha1(data).hexdigest()
        if h in seen:
            seen[h]['duplicates'].append(f)
            continue
        base = os.path.basename(f)
        members = parse_romdir(data)
        if members is not None:
            img = {'name': base, 'origin': f, 'kind': 'romdir_image', 'sha1': h,
                   'duplicates': [], 'members': []}
            for mname, mdata, moff, msize, ext in members:
                if mname in ('RESET', 'ROMDIR', 'EXTINFO') or msize == 0:
                    img['members'].append({'name': mname, 'offset': moff, 'size': msize,
                                           'skipped': True})
                    continue
                r = analyze_blob(mname, mdata, '%s:%s' % (base, mname))
                r['offset'] = moff
                img['members'].append(r)
            seen[h] = img
            out.append(img)
        else:
            r = analyze_blob(os.path.splitext(base)[0], data, f)
            r['duplicates'] = []
            seen[h] = r
            out.append(r)
    return out


def fmt_module(r, indent=''):
    lines = []
    head = '%s%s' % (indent, r['name'])
    if r.get('iopmod_name'):
        head += '  [iopmod "%s" v%s, ELF type %s]' % (r['iopmod_name'], r['iopmod_version'],
                                                     r.get('elf_type'))
    elif r.get('error'):
        head += '  [%s]' % r['error']
    lines.append(head)
    for lib, e in sorted(r.get('exports', {}).items()):
        lines.append('%s  EXPORT %-8s v%-5s %d entries' % (indent, lib, e['version'], e['count']))
    for lib, e in sorted(r.get('imports', {}).items()):
        lines.append('%s  import %-8s v%-5s %s' % (indent, lib, e['version'],
                                                    ','.join(str(x) for x in e['ordinals'])))
    return lines


def main(argv):
    out_json = None
    if '--json' in argv:
        i = argv.index('--json')
        out_json = argv[i + 1]
        del argv[i:i + 2]
    if not argv:
        print(__doc__)
        return 2
    res = collect(argv)
    for r in res:
        if r.get('kind') == 'romdir_image':
            print('%s  [ROMDIR image, %d members]' % (r['name'], len(r['members'])))
            for m in r['members']:
                if m.get('skipped'):
                    print('  %s (skipped, %d bytes)' % (m['name'], m['size']))
                else:
                    print('\n'.join(fmt_module(m, '  ')))
        else:
            print('\n'.join(fmt_module(r)))
        if r.get('duplicates'):
            print('  (duplicates: %s)' % ', '.join(r['duplicates']))
        print()
    if out_json:
        with open(out_json, 'w') as f:
            json.dump(res, f, indent=1)
    return 0


if __name__ == '__main__':
    sys.exit(main(sys.argv[1:]))
