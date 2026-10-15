#!/usr/bin/env python3
"""IOP import gap analysis: disc IRX imports vs ps2-web-recomp IOP HLE (stdlib only; python3 -I).

Usage:
  python3 -I iop_gaps.py --runtime RUNTIME_SRC_IOP_DIR --modules DIR [--modules DIR ...]
                         [--boot SIO2MAN,PADMAN,...] [--names iop_ordinal_names.json]
                         [--md OUT.md] [--json OUT.json]

Model of the runtime (ps2-web-recomp runtime/src/iop/kernel.cpp: link_imports()):
  * When an LLE module is loaded, each import stub (lib, ordinal) is linked
      1. to a guest export table if some earlier LLE module called
         loadcore RegisterLibraryEntries for `lib` (g_libraries)  -> "LLE export"
      2. else to the HLE function registered with register_hle(lib, ordinal)
         (the `def("lib", N, "Name", body)` calls in runtime/src/iop/*.cpp)  -> "HLE"
      3. else to a generated stub that prints `[iop] missing lib #N` once and
         returns 0                                                  -> "MISSING"
  * HLE functions whose whole body is `c.r[2] = <constant>;` are reported as
    "HLE const stub" (they exist but do nothing), because a constant return can
    still break the caller (e.g. ioman AddDrv -> -1).
Uses irx_imports.py (same directory) to extract import/export tables.
"""
import importlib.util
import json
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.dont_write_bytecode = True
_spec = importlib.util.spec_from_file_location('irx_imports', os.path.join(HERE, 'irx_imports.py'))
irx = importlib.util.module_from_spec(_spec)
_spec.loader.exec_module(irx)

# Manual findings (verified by disassembly of the disc IRXs + reading runtime/src/iop, 2026-10-15).
FINDINGS = '''## How the runtime resolves modules (read from runtime/src/iop)

- **IOPRP300.IMG is never loaded.** The EE's `sceSifRebootIop("rom0:UDNL cdrom0:\\IOP\\IOPRP300.IMG")` arrives as a SIF DMA
  to IOP address 0 -> `sif.cpp reboot()`, which only (a) flips `g_fileio_async` (new FILEIO RPC protocol) because the path
  contains "IOPRP"/the ROMDIR has a FILEIO entry and (b) copies the "PsIIloadfile" version tag. No IOP reset, no module load.
  Every IOPRP member library (sysmem, loadcore, sifcmd, sifman, thbase/thsemap/thevent/thmsgbx/thfpool, ioman, modload,
  cdvdman, timrman, sysclib, stdio) is HLE in `libs.cpp`/`sif.cpp`/`io.cpp`/`cdvd.cpp`; CDVDFSV, FILEIO, LOADFILE, iopheap
  are HLE **RPC servers** (`cdvdfsv.cpp` 0x80000592/3/5/6/7/9A/9C, `sif.cpp` 0x80000001/3/6). thvpool, thrdman, eesync and
  romdrv have no HLE — nothing on this disc imports them.
- **rom0:** `cdvd.cpp load_module()` only reads `cdrom*` paths; a `rom0:X` load reaches `load_module_buffer()` with no data and
  fails (-1) unless `register_hle_module("X", ...)` was called — and nothing calls it (the hook exists, unused). The game only
  uses `rom0:UDNL` (reboot, above) and `rom0:ROMVER` (served by `io.cpp`: "0220EC20060210"). All 9 IRXs are loaded from
  `cdrom0:\\IOP\\*.IRX` and run **LLE** on the R3000 interpreter.
- **Linking** (`kernel.cpp link_imports()` at load time): guest export table registered via loadcore#6 (earlier LLE module)
  first, else `register_hle(lib, ord)`, else a stub that prints `[iop] missing <lib> #<n>` once and returns 0. Import/export
  versions are not checked. Module exit code 1 (NO_RESIDENT_END) frees the module but leaves its `g_libraries` entry.
- EE strings also name `SNPROFIL.IRX`, `SULPHACOMM.IRX`, `SULPHASOUND.IRX` (dev/debug; not on the disc). MTAPMAN.IRX is in
  `MODULES/` only and is never referenced by the EE.

## Behavioural gaps hidden behind "implemented" (const) HLE stubs — read these first

1. **ioman#20 AddDrv / #21 DelDrv return -1** (`io.cpp:169`, loop `for (i : {9..15,17,20,21,25,27,31}) -> -1`).
   - **CDVDSTM** `_start` (0x15DC): RegisterLibraryEntries -> DelDrv -> AddDrv; on non-zero it prints and **returns 1
     (NO_RESIDENT_END)** -> runtime frees it. So today the 7 MISSING cdvdman imports below are never reached. If AddDrv is
     fixed, `sceCdSC(-11,&x)` (cdvdman#50) runs immediately in `_start` (0x163C) and later stream ops reach #48/#49
     (sceCdstm0Cb/1Cb at 0x5A0/0x1978/0x2B14), #61 and #114.
     EE-side streaming (`sceCdSt*`) is served natively by the HLE cdvdfsv server 0x80000595 method 9, and no other disc
     module imports `cdvdstm` or IOP `sceCdSt*` — so the cheapest correct fix is `register_hle_module("CDVDSTM", {})`
     (kernel.cpp), not implementing #40/46/48/49/50/61/114.
   - **MCMAN** device-init 0xFECC: AddDrv != 0 -> skips `CreateSema` (thsemap#4) whose id is stored at 0x25228; later
     mc calls use sema id 0 -> `WaitSema/SignalSema` return -408 (no lock; harmless while MCSERV's single RPC thread is the
     only caller). `_start` still returns 2 (resident). Fix: AddDrv/DelDrv return 0 (store the device pointer if an `mc:`
     ioman device is ever needed).
2. **PADMAN hard timer** (fn 0x3180): AllocHardTimer(sysclock) -> GetHardTimerIntrCode (=14, const) ->
   `RegisterIntrHandler(14, 1, 0x8E0, ...)` -> SetTimerMode / SetTimerCompare (**const no-ops**, `libs.cpp:972/979`).
   The runtime only fires hard timers armed through timrman#20 SetTimerHandler; nothing raises IOP interrupt line 14 from
   SetTimerMode/SetTimerCompare and `iop/hw.cpp` timers only return a counter. PADMAN's timer handler 0x8E0 will never run.
   Verify at first boot whether pad polling depends on it (vblank#8 RegisterVblankHandler is also imported and works).
   Fix site: `libs.cpp install_timrman()` — make SetTimerMode(#7)/SetTimerCompare(#11) arm a compare job that
   `hw::raise_interrupt(14)`, or route through the existing `arm_hard_timer()`.
3. sifman#8 sceSifDmaStat always -1 (= finished) and dmacman#33-35 always 1: correct for the instant-copy model.
'''

DEFAULT_BOOT = ['SIO2MAN', 'PADMAN', 'LIBSD', 'SDRDRV', 'MCMAN', 'MCSERV', 'CDVDSTM', 'CRI_ADXI',
                'SNDFI']


def match_paren(src, i):
    """src[i] == '(' -> index of matching ')'. Skips string/char literals."""
    depth = 0
    j = i
    n = len(src)
    while j < n:
        ch = src[j]
        if ch in '"\'':
            q = ch
            j += 1
            while j < n and src[j] != q:
                j += 2 if src[j] == '\\' else 1
        elif ch == '(':
            depth += 1
        elif ch == ')':
            depth -= 1
            if depth == 0:
                return j
        j += 1
    return n


CONST_RE = re.compile(r'^\s*c\.r\[2\]\s*=\s*(static_cast<std::uint32_t>\(\s*-?\d+\s*\)|-?(0x)?[0-9A-Fa-f]+u?)\s*;\s*$')


def classify(body):
    """body = text of the def() call after the name argument."""
    m = re.search(r'\]\s*\((?:iop::)?Cpu\s*&\s*c?\)\s*\{', body)
    if not m:
        return 'impl', None  # named lambda / helper
    inner = body[m.end():]
    k = inner.rfind('}')
    inner = inner[:k] if k >= 0 else inner
    cm = CONST_RE.match(inner)
    if cm:
        v = cm.group(1)
        v = re.sub(r'static_cast<std::uint32_t>\(\s*(-?\d+)\s*\)', r'\1', v).rstrip('u')
        return 'const', v
    return 'impl', None


def parse_hle(root):
    """Return (hle_libs {lib: version}, hle {(lib, ord): {'name','kind','ret','file','line'}})."""
    libs, hle = {}, {}
    for fn in sorted(os.listdir(root)):
        if not fn.endswith('.cpp'):
            continue
        path = os.path.join(root, fn)
        src = open(path).read()
        for m in re.finditer(r'register_hle_library\(\s*"([^"]+)"\s*,\s*(0x[0-9A-Fa-f]+|\d+)\s*\)', src):
            libs[m.group(1)] = int(m.group(2), 0)
        # Single registrations: def("lib", N, "Name", body)
        for m in re.finditer(r'\bdef\(\s*"([^"]+)"\s*,\s*(\d+)\s*,\s*"([^"]*)"\s*,', src):
            close = match_paren(src, m.start() + 3)
            kind, ret = classify(src[m.end():close])
            line = src.count('\n', 0, m.start()) + 1
            hle[(m.group(1), int(m.group(2)))] = dict(name=m.group(3), kind=kind, ret=ret,
                                                      file=fn, line=line)
        # Loop registrations: for (std::uint32_t i : {a, b, ...}) def("lib", i, "Name", body)
        for m in re.finditer(r'for\s*\(\s*std::uint32_t\s+(\w+)\s*:\s*\{([^}]*)\}\s*\)\s*'
                             r'def\(\s*"([^"]+)"\s*,\s*\1\s*,\s*"([^"]*)"\s*,', src):
            close = match_paren(src, src.index('def(', m.start()) + 3)
            kind, ret = classify(src[m.end():close])
            line = src.count('\n', 0, m.start()) + 1
            for tok in m.group(2).split(','):
                tok = tok.strip().rstrip('u')
                if tok:
                    hle[(m.group(3), int(tok, 0))] = dict(name=m.group(4), kind=kind, ret=ret,
                                                          file=fn, line=line, loop=True)
    return libs, hle


def lib_file(lib, hle_libs, hle):
    files = sorted({v['file'] for (l, _), v in hle.items() if l == lib})
    return files[0] if files else None


def main(argv):
    opts = {'--runtime': None, '--boot': ','.join(DEFAULT_BOOT),
            '--names': os.path.join(HERE, 'iop_ordinal_names.json'), '--md': None, '--json': None}
    mods = []
    k = 0
    while k < len(argv):
        a = argv[k]
        if a == '--modules':
            mods.append(argv[k + 1])
        elif a in opts:
            opts[a] = argv[k + 1]
        else:
            print(__doc__)
            return 2
        k += 2
    if not opts['--runtime'] or not mods:
        print(__doc__)
        return 2

    names = {}
    if opts['--names'] and os.path.exists(opts['--names']):
        names = {lib: {int(o): n for o, n in d.items()}
                 for lib, d in json.load(open(opts['--names'])).items()}

    hle_libs, hle = parse_hle(opts['--runtime'])
    res = irx.collect(mods)
    disc = {}
    ioprp = None
    for r in res:
        if r.get('kind') == 'romdir_image':
            ioprp = r
        else:
            disc[r['name'].upper()] = r
    boot = [b.strip().upper() for b in opts['--boot'].split(',') if b.strip()]
    extra = [n for n in sorted(disc) if n not in boot]
    order = boot + extra

    def fname(lib, o):
        n = None
        # Disc SIO2MAN exports sio2man v2.4 (64 slots) = rsio2man numbering, which
        # diverges from xsio2man from ordinal 49 up.
        if lib == 'sio2man' and o >= 49:
            n = names.get('rsio2man', {}).get(o)
        n = n or names.get(lib, {}).get(o)
        if not n:
            h = hle.get((lib, o))
            if h and h['name'] != lib:
                n = h['name']
        return n or '?'

    lle_exports = {}  # lib -> (module, count)
    report = []
    for mod in order:
        r = disc.get(mod)
        if not r:
            report.append({'module': mod, 'absent': True})
            continue
        rows = []
        for lib, e in sorted(r['imports'].items()):
            for o in e['ordinals']:
                if lib in lle_exports:
                    src_mod, cnt = lle_exports[lib]
                    status = 'lle' if o < cnt else 'lle-out-of-range'
                    rows.append(dict(lib=lib, ord=o, name=fname(lib, o), status=status, via=src_mod))
                elif (lib, o) in hle:
                    h = hle[(lib, o)]
                    st = 'hle-const' if h['kind'] == 'const' else 'hle'
                    rows.append(dict(lib=lib, ord=o, name=fname(lib, o), status=st, ret=h['ret'],
                                     where='%s:%d' % (h['file'], h['line']), hle_name=h['name']))
                else:
                    rows.append(dict(lib=lib, ord=o, name=fname(lib, o), status='missing',
                                     lib_hle=lib in hle_libs, lib_file=lib_file(lib, hle_libs, hle)))
        report.append({'module': mod, 'iopmod': r.get('iopmod_name'), 'version': r.get('iopmod_version'),
                       'in_boot_order': mod in boot, 'exports': {l: e['count'] for l, e in r['exports'].items()},
                       'rows': rows})
        # Module start registers its export tables (loadcore #6 is HLE -> register_library()).
        for lib, e in r['exports'].items():
            lle_exports[lib] = (mod, e['count'])

    for m in report:
        if m.get('absent'):
            print('%s: not found on disc' % m['module'])
            continue
        miss = [x for x in m['rows'] if x['status'] in ('missing', 'lle-out-of-range')]
        const = [x for x in m['rows'] if x['status'] == 'hle-const']
        print('%-9s imports=%d lle=%d hle=%d const=%d MISSING=%d' % (
            m['module'], len(m['rows']), sum(x['status'] == 'lle' for x in m['rows']),
            sum(x['status'] == 'hle' for x in m['rows']), len(const), len(miss)))
        for x in miss:
            print('    MISSING %s#%d %s' % (x['lib'], x['ord'], x['name']))
        for x in const:
            print('    const   %s#%d %s -> %s' % (x['lib'], x['ord'], x['name'], x['ret']))

    if opts['--json']:
        json.dump({'hle_libs': hle_libs, 'report': report}, open(opts['--json'], 'w'), indent=1)
    if opts['--md']:
        write_md(opts['--md'], report, hle_libs, hle, ioprp, boot, names)
    return 0


def write_md(path, report, hle_libs, hle, ioprp, boot, names):
    L = []
    A = L.append
    A('# IOP import gaps — MK: Shaolin Monks (SLUS_210.87) vs ps2-web-recomp IOP HLE')
    A('')
    A('Generated by `tools/scripts/iop_gaps.py` (uses `irx_imports.py`; python3 -I, stdlib only). '
      'Raw tables: `notes/irx_imports.json`, `notes/iop_gaps.json`.')
    A('')
    A('Status legend: **MISSING** = no HLE function and no earlier LLE exporter -> runtime links a stub that '
      'logs `[iop] missing <lib> #<n>` once and returns 0. **const** = HLE exists but body is only '
      '`c.r[2] = K` (no side effects). Imports resolved by an LLE export or a real HLE body are only counted.')
    A('')
    A(FINDINGS)
    A('## Gap summary (boot order: %s)' % ' -> '.join(boot))
    A('')
    A('| module | imports | via LLE export | HLE | HLE const stub | MISSING |')
    A('|---|---|---|---|---|---|')
    for m in report:
        if m.get('absent'):
            continue
        rows = m['rows']
        A('| %s%s | %d | %d | %d | %d | **%d** |' % (
            m['module'], '' if m['in_boot_order'] else ' (not in boot order)', len(rows),
            sum(x['status'] == 'lle' for x in rows), sum(x['status'] == 'hle' for x in rows),
            sum(x['status'] == 'hle-const' for x in rows),
            sum(x['status'] in ('missing', 'lle-out-of-range') for x in rows)))
    A('')
    A('## Per-module gaps')
    for m in report:
        if m.get('absent'):
            continue
        A('')
        A('### %s — iopmod "%s" v%s%s' % (m['module'], m['iopmod'], m['version'],
                                          '' if m['in_boot_order'] else ' (NOT in observed boot order)'))
        if m['exports']:
            A('')
            A('Exports: ' + ', '.join('`%s` (%d entries)' % (l, c) for l, c in sorted(m['exports'].items())))
        miss = [x for x in m['rows'] if x['status'] in ('missing', 'lle-out-of-range')]
        const = [x for x in m['rows'] if x['status'] == 'hle-const']
        A('')
        if miss:
            A('| import | ps2sdk name | status | where to implement |')
            A('|---|---|---|---|')
            for x in miss:
                where = ('runtime/src/iop/%s (lib already HLE)' % x['lib_file']) if x.get('lib_file') else \
                    ('runtime/src/iop/libs.cpp (new HLE lib)' if not x.get('lib_hle') else 'runtime/src/iop/')
                A('| %s#%d | %s | %s | %s |' % (x['lib'], x['ord'], x['name'],
                                               'MISSING' if x['status'] == 'missing' else 'LLE ordinal out of range',
                                               where))
        else:
            A('No missing imports.')
        if const:
            A('')
            A('HLE const stubs hit by this module: ' + ', '.join(
                '%s#%d %s -> `%s` (%s)' % (x['lib'], x['ord'], x['name'], x['ret'], x['where']) for x in const))
        lle = sorted({x['via'] for x in m['rows'] if x['status'] == 'lle'})
        if lle:
            A('')
            A('Resolved against LLE exports of: ' + ', '.join(lle))
    A('')
    A('## IOPRP300.IMG members (replaced wholesale by HLE)')
    A('')
    if ioprp:
        A('| member | iopmod | exports | runtime replacement |')
        A('|---|---|---|---|')
        for mem in ioprp['members']:
            if mem.get('skipped'):
                continue
            ex = ', '.join('%s(%d)' % (l, e['count']) for l, e in sorted(mem.get('exports', {}).items()))
            repl = []
            for l in sorted(mem.get('exports', {})):
                n_impl = sum(1 for (ll, _), v in hle.items() if ll == l)
                repl.append('%s: %s' % (l, ('HLE, %d ordinals' % n_impl) if l in hle_libs else '**no HLE lib**'))
            A('| %s | %s v%s | %s | %s |' % (mem['name'], mem.get('iopmod_name'), mem.get('iopmod_version'),
                                            ex or '-', '; '.join(repl) or 'n/a (no exports; RPC served natively?)'))
    A('')
    A('## HLE coverage per library (runtime/src/iop)')
    A('')
    A('| lib | HLE version | ordinals registered (const stubs in parentheses) |')
    A('|---|---|---|')
    for lib in sorted(hle_libs):
        ords = sorted(o for (l, o) in hle if l == lib)
        A('| %s | 0x%04X | %s |' % (lib, hle_libs[lib], ' '.join(
            ('(%d)' % o) if hle[(lib, o)]['kind'] == 'const' else str(o) for o in ords)))
    A('')
    with open(path, 'w') as f:
        f.write('\n'.join(L))


if __name__ == '__main__':
    sys.exit(main(sys.argv[1:]))
