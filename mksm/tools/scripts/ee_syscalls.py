#!/usr/bin/env python3
"""EE syscall census + runtime gap check (stdlib only; run with python3 -I).

Usage:
  python3 -I ee_syscalls.py ELF [--runtime-kernel kernel.cpp] [--names names.json]
                                 [--md OUT.md] [--json OUT.json]

1. Scans every executable PROGBITS section of the EE ELF except .vutext for the
   MIPS `syscall` instruction (opcode 0 / funct 0x0C) and walks back <= 6
   instructions to the nearest write of $v1 (r3). Recognised immediates:
     addiu $v1,$zero,N (0x2403xxxx, sign-extended)   daddiu $v1,$zero,N (0x6403xxxx)
     ori   $v1,$zero,N (0x3403xxxx, zero-extended)
   Negative numbers are the interrupt-context ("i"-) variants and are kept
   signed. Any other nearest write of $v1 (or none in the window) is "unknown".
2. Counts `jal`/`j` callers of every syscall stub (stub start = the li $v1 insn).
3. Parses ps2-web-recomp runtime/src/kernel.cpp: the `case 0xNN:` labels of the
   `switch (n)` inside handle_syscall(). The runtime folds a negative number to
   its magnitude before the switch, so -N is handled iff N is.
"""
import json
import os
import re
import struct
import sys

HERE = os.path.dirname(os.path.abspath(__file__))

# Manual findings for SLUS_210.87 (verified by disassembly, 2026-10-15). Keyed by |syscall|.
ANALYSIS = {
    0x80: 'BOOT PATH. sceGsResetGraph-side helper 0x382F40 opens rom0:ROMVER, and if the ROM date '
          '> 20010608 (runtime io.cpp serves 20060210) calls _GetGsDxDyOffset(mode,&dx,&dy,&dw,&dh) '
          '(a0..t0). Unhandled -> 4 stack outputs left uninitialised -> garbage DISPLAY offsets. '
          'Fix: write 0 to the 4 pointers, return 0.',
    0x56: 'BOOT PATH. crt0 0x11C2B0 -> 0x4865B8 -> 0x487950: GetMemorySize()==32MB -> 0x487990 '
          'calls _SetTLBEntry 4x. Flat memory needs no TLB: no-op returning 0 (silences 4 log lines).',
    0x82: 'Only when GetMemorySize()!=32MB (0x487950 else-branch); runtime returns 32MB -> unreachable. '
          'No-op returning 0.',
    0x5A: 'Copy (kCopy). crt0 _InitSys (0x486228) installs SetSyscall(0x5A, guest memcpy) before use; '
          'calls then run recompiled guest code. 0x486350 copies a 1960-byte patch to 0x80074000.',
    0x83: 'FindAddress. _InitSys installs SetSyscall(0x83, 0x4860C0) then 0x486118 loops until two '
          'FindAddress results agree on the syscall-table base (kSyscallTable 0x1800 lies inside the '
          'searched 0x80000000-0x80080000, so it terminates). If the table ever moved above 0x80000 '
          'this loop would spin forever.',
    0x5B: 'SetSyscall(0x5B, 0x80074000) points at kernel-RAM code copied by Copy -> not recompiled -> '
          'falls through to the native case 0x5B (returns 0).',
}


def load_elf_exec_sections(path):
    data = open(path, 'rb').read()
    if data[:4] != b'\x7fELF':
        raise SystemExit('%s: not an ELF' % path)
    e_shoff = struct.unpack_from('<I', data, 32)[0]
    e_shentsize, e_shnum, e_shstrndx = struct.unpack_from('<HHH', data, 46)
    secs = []
    for i in range(e_shnum):
        secs.append(struct.unpack_from('<10I', data, e_shoff + i * e_shentsize))
    stroff = secs[e_shstrndx][4]
    out = []
    for s in secs:
        name = data[stroff + s[0]:].split(b'\0', 1)[0].decode()
        typ, flags, addr, off, size = s[1], s[2], s[3], s[4], s[5]
        if typ == 1 and (flags & 4) and name != '.vutext':
            out.append((name, addr, data[off:off + size]))
    return out


def load_elf_data(path):
    """All allocated PROGBITS sections as (name, vaddr, bytes) for pointer/table reads."""
    data = open(path, 'rb').read()
    e_shoff = struct.unpack_from('<I', data, 32)[0]
    e_shentsize, e_shnum, e_shstrndx = struct.unpack_from('<HHH', data, 46)
    secs = [struct.unpack_from('<10I', data, e_shoff + i * e_shentsize) for i in range(e_shnum)]
    stroff = secs[e_shstrndx][4]
    out = []
    for s in secs:
        if s[1] == 1 and (s[2] & 2):
            out.append((data[stroff + s[0]:].split(b'\0', 1)[0].decode(), s[3], data[s[4]:s[4] + s[5]]))
    return out


def read32(allsecs, va):
    for _, base, blob in allsecs:
        if base <= va and va + 4 <= base + len(blob):
            return struct.unpack_from('<I', blob, va - base)[0]
    return None


def find_setsyscall_tables(sections, allsecs, setsyscall_callers):
    """Heuristic: SCE libkernel installs its own handlers with SetSyscall(n, fn) driven by
    {n, fn} tables in .data. Around each SetSyscall caller, rebuild lui/addiu|lw address
    pairs and read up to 4 {n<0x100, ptr} pairs at each address (stride 8)."""
    text = {n: (b, d) for n, b, d in sections}
    found = {}
    for call in setsyscall_callers:
        for name, (base, blob) in text.items():
            if not (base <= call < base + len(blob)):
                continue
            lo_i = max(0, (call - base) // 4 - 64)
            hi_i = min(len(blob) // 4, (call - base) // 4 + 24)
            words = struct.unpack_from('<%dI' % (hi_i - lo_i), blob, lo_i * 4)
            for i, w in enumerate(words):
                if (w >> 26) != 0x0F:
                    continue
                rt, hi = (w >> 16) & 31, (w & 0xFFFF) << 16
                for w2 in words[i + 1:i + 17]:
                    op2 = w2 >> 26
                    if op2 in (0x09, 0x23) and ((w2 >> 21) & 31) == rt:
                        lo = w2 & 0xFFFF
                        addr = (hi + (lo - 0x10000 if lo & 0x8000 else lo)) & 0xFFFFFFFF
                        for k in range(4):
                            n = read32(allsecs, addr + 8 * k)
                            ptr = read32(allsecs, addr + 8 * k + 4)
                            if n is None or ptr is None or n >= 0x100 or not ptr:
                                break
                            in_text = any(b <= ptr < b + len(d) for b, d in text.values())
                            in_kseg0 = 0x80000000 <= ptr < 0x80080000
                            if not (in_text or in_kseg0):
                                break
                            found.setdefault(n, set()).add((addr + 8 * k, ptr, 'text' if in_text else 'kseg0'))
    return found


def writes_reg(w):
    """Return the GPR written by instruction w (best effort), or None."""
    op = w >> 26
    rs, rt, rd = (w >> 21) & 31, (w >> 16) & 31, (w >> 11) & 31
    if op == 0:
        funct = w & 0x3F
        if funct in (0x08, 0x0C, 0x0D, 0x0F, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F,
                     0x11, 0x13):
            return None  # jr, syscall, break, sync, mult/div (HI/LO), mthi/mtlo
        return rd
    if op == 3:
        return 31  # jal
    if op in (0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F, 0x18, 0x19):
        return rt  # ALU immediates, lui, daddi(u)
    if op in (0x1A, 0x1B, 0x1E, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x37):
        return rt  # ldl/ldr/lq/lb..lwr/ld
    if op == 0x10 and rs in (0, 1):
        return rt  # mfc0 / dmfc0
    if op == 0x12 and rs in (0, 1, 2):
        return rt  # cfc2/qmfc2/mfc2-ish
    if op == 0x11 and rs in (0, 2):
        return rt  # mfc1/cfc1
    if op == 0x1C:
        return rd  # MMI: most write rd
    return None


def decode_li_v1(w):
    if (w & 0xFFFF0000) == 0x24030000 or (w & 0xFFFF0000) == 0x64030000:
        v = w & 0xFFFF
        return v - 0x10000 if v & 0x8000 else v
    if (w & 0xFFFF0000) == 0x34030000:
        return w & 0xFFFF
    return None


def scan(sections):
    sites = []  # (addr, number or None, li_addr or None, note)
    jal_targets = {}
    for name, base, blob in sections:
        n = len(blob) // 4
        words = struct.unpack_from('<%dI' % n, blob, 0)
        for i, w in enumerate(words):
            if (w >> 26) in (2, 3):  # j (tail call) / jal
                tgt = ((base + 4 * i + 4) & 0xF0000000) | ((w & 0x03FFFFFF) << 2)
                jal_targets.setdefault(tgt, []).append(base + 4 * i)
            if (w & 0xFC00003F) != 0x0000000C:
                continue
            addr = base + 4 * i
            num, li_addr, note = None, None, 'no $v1 write within 6 insns'
            for k in range(1, 7):
                if i - k < 0:
                    break
                p = words[i - k]
                if writes_reg(p) == 3:
                    v = decode_li_v1(p)
                    if v is None:
                        note = 'v1 set by non-immediate insn 0x%08x at 0x%08x' % (p, addr - 4 * k)
                    else:
                        num, li_addr, note = v, addr - 4 * k, ''
                    break
            sites.append((addr, num, li_addr, note))
    return sites, jal_targets


def parse_runtime(path):
    src = open(path).read()
    m = re.search(r'void\s+handle_syscall\s*\(', src)
    if not m:
        raise SystemExit('handle_syscall() not found in %s' % path)
    body_start = src.index('switch (n)', m.end())
    # Walk braces from the switch's '{' to its matching '}'.
    i = src.index('{', body_start)
    depth, j = 0, i
    while True:
        if src[j] == '{':
            depth += 1
        elif src[j] == '}':
            depth -= 1
            if depth == 0:
                break
        j += 1
    body = src[i:j]
    handled = set(int(x, 16) for x in re.findall(r'case\s+0x([0-9A-Fa-f]+)\s*:', body))
    # Runtime display names (syscall_name()).
    rnames = {}
    m2 = re.search(r'const char \*syscall_name\(std::uint32_t n\)\s*\{', src)
    if m2:
        for num, nm in re.findall(r'case\s+0x([0-9A-Fa-f]+):\s*return\s+"([^"]+)"', src[m2.end():]):
            rnames.setdefault(int(num, 16), nm)
    custom = 'kSyscallTable' in body or 'kSyscallTable' in src[m.end():i]
    return handled, rnames, custom


def main(argv):
    opts = {'--runtime-kernel': None, '--names': os.path.join(HERE, 'ee_syscall_names.json'),
            '--md': None, '--json': None}
    pos = []
    k = 0
    while k < len(argv):
        if argv[k] in opts:
            opts[argv[k]] = argv[k + 1]
            k += 2
        else:
            pos.append(argv[k])
            k += 1
    if len(pos) != 1:
        print(__doc__)
        return 2
    elf_path = pos[0]
    sections = load_elf_exec_sections(elf_path)
    sites, jal_targets = scan(sections)
    allsecs = load_elf_data(elf_path)

    names = {}
    if opts['--names'] and os.path.exists(opts['--names']):
        names = {int(k): v for k, v in json.load(open(opts['--names'])).items()}
    handled, rnames, custom = (set(), {}, False)
    if opts['--runtime-kernel']:
        handled, rnames, custom = parse_runtime(opts['--runtime-kernel'])

    def name_of(n):
        a = abs(n)
        nm = names.get(a) or rnames.get(a) or '?'
        return nm

    per = {}
    unknown = []
    for addr, num, li_addr, note in sites:
        if num is None:
            unknown.append((addr, note))
            continue
        e = per.setdefault(num, {'sites': [], 'callers': []})
        e['sites'].append(addr)
        if li_addr is not None:
            e['callers'] += jal_targets.get(li_addr, [])

    installed = find_setsyscall_tables(sections, allsecs, per.get(0x74, {}).get('callers', []))

    rows = []
    for num in sorted(per, key=lambda x: (abs(x), x < 0)):
        e = per[num]
        is_handled = abs(num) in handled if opts['--runtime-kernel'] else None
        inst = sorted(installed.get(abs(num), ()))
        # handle_syscall runs a SetSyscall-installed handler only if it is recompiled code
        # (has_code); a kseg0 pointer (code copied into kernel RAM) falls through to the switch.
        guest = any(kind == 'text' for _, _, kind in inst)
        status = None if is_handled is None else ('native' if is_handled else ('guest' if guest else 'MISSING'))
        rows.append({'number': num, 'hex': ('-' if num < 0 else '') + '0x%02X' % abs(num),
                     'name': name_of(num), 'sites': len(e['sites']), 'jal_callers': len(e['callers']),
                     'caller_addrs': ['0x%08X' % a for a in sorted(e['callers'])],
                     'site_addrs': ['0x%08X' % a for a in e['sites']], 'handled': is_handled,
                     'status': status, 'analysis': ANALYSIS.get(abs(num)),
                     'setsyscall': ['%s@0x%08X->0x%08X' % (kind, t, ptr) for t, ptr, kind in inst]})

    print('%d syscall instructions, %d resolved, %d unknown; %d distinct numbers' % (
        len(sites), len(sites) - len(unknown), len(unknown), len(per)))
    for r in rows:
        print('%6s %-28s sites=%-2d callers=%-4d %s %s' % (
            r['hex'], r['name'], r['sites'], r['jal_callers'],
            r['status'] or '', ' '.join(r['setsyscall'])))
    for addr, note in unknown:
        print('unknown syscall at 0x%08X: %s' % (addr, note))

    if opts['--json']:
        json.dump({'rows': rows, 'unknown': [{'addr': '0x%08X' % a, 'note': n} for a, n in unknown],
                   'runtime_handled': sorted(handled)}, open(opts['--json'], 'w'), indent=1)

    if opts['--md']:
        gaps = [r for r in rows if r['status'] == 'MISSING' and r['jal_callers'] > 0]
        dead = [r for r in rows if r['status'] == 'MISSING' and r['jal_callers'] == 0]
        guest = [r for r in rows if r['status'] == 'guest']
        L = []
        L.append('# EE syscall gaps — SLUS_210.87 vs ps2-web-recomp runtime')
        L.append('')
        L.append('Generated by `tools/scripts/ee_syscalls.py` (python3 -I, stdlib only).')
        L.append('')
        L.append('- ELF: `%s`, scanned sections: %s' % (os.path.basename(elf_path), ', '.join(
            '%s @0x%08X+0x%X' % (n, b, len(d)) for n, b, d in sections)))
        L.append('- `syscall` instructions: **%d** (%d resolved via `li $v1,N` within 6 insns, %d unknown)'
                 % (len(sites), len(sites) - len(unknown), len(unknown)))
        L.append('- Distinct syscall numbers: **%d** (native in runtime: %d, game-installed via SetSyscall -> '
                 'recompiled guest code: %d, **missing with static callers: %d**, missing but no static '
                 'caller (dead libkernel stubs): %d)' % (
                     len(per), sum(r['status'] == 'native' for r in rows), len(guest), len(gaps), len(dead)))
        if opts['--runtime-kernel']:
            L.append('- Runtime: `%s` `handle_syscall()` handles %d numbers: %s' % (
                os.path.relpath(opts['--runtime-kernel'], os.path.dirname(os.path.dirname(HERE))),
                len(handled), ' '.join('0x%02X' % h for h in sorted(handled))))
            L.append('- Runtime semantics: negative N is folded to |N| before dispatch; numbers <0x100 first '
                     'check a guest table filled by SetSyscall (0x74)%s; unhandled numbers log '
                     '`[sys] unhandled syscall 0xNN` and return 0.' % (' (present)' if custom else ''))
        L.append('- `sites` = number of syscall stubs (usually 1 per number); `callers` = static `jal`/`j` '
                 'references to the stub (a proxy for how hot it is).')
        L.append('')
        L.append('## Gaps: called by the game, not handled by the runtime')
        L.append('')
        if gaps:
            L.append('| # | name | stub site(s) | jal/j callers | caller addrs (first 6) | analysis |')
            L.append('|---|------|--------------|---------------|------------------------|----------|')
            for r in sorted(gaps, key=lambda r: (-r['jal_callers'], abs(r['number']))):
                L.append('| %s | %s | %s | %d | %s | %s |' % (
                    r['hex'], r['name'], ', '.join(r['site_addrs']), r['jal_callers'],
                    ', '.join(r['caller_addrs'][:6]), r['analysis'] or ''))
        else:
            L.append('None.')
        L.append('')
        L.append('Implement in `ps2-web-recomp/runtime/src/kernel.cpp` `handle_syscall()` switch '
                 '(and add the name to `syscall_name()`).')
        L.append('')
        L.append('## Not gaps: installed by the game\'s own libkernel via SetSyscall')
        L.append('')
        L.append('`handle_syscall()` first looks up `kSyscallTable[n]` (filled by SetSyscall 0x74) and runs '
                 'the handler as recompiled guest code when it points into .text. Tables found next to '
                 'SetSyscall callers (heuristic: lui/addiu pairs -> {n, fn} pairs):')
        L.append('')
        for r in rows:
            if r['setsyscall']:
                L.append('- %s %s: %s -> **%s**%s' % (r['hex'], r['name'], ', '.join(r['setsyscall']),
                                                     r['status'], (' — ' + r['analysis']) if r['analysis'] else ''))
        L.append('')
        L.append('## Missing but no static caller (libkernel stub table; low priority)')
        L.append('')
        L.append(', '.join('%s %s' % (r['hex'], r['name']) for r in dead) or 'None.')
        L.append('')
        L.append('## Full histogram')
        L.append('')
        L.append('| # | name | sites | jal callers | runtime |')
        L.append('|---|------|-------|-------------|---------|')
        for r in rows:
            L.append('| %s | %s | %d | %d | %s |' % (
                r['hex'], r['name'], r['sites'], r['jal_callers'],
                '?' if r['status'] is None else ('**MISSING**' if r['status'] == 'MISSING' else r['status'])))
        if unknown:
            L.append('')
            L.append('## Unresolved syscall sites')
            L.append('')
            for addr, note in unknown:
                L.append('- 0x%08X: %s' % (addr, note))
        L.append('')
        with open(opts['--md'], 'w') as f:
            f.write('\n'.join(L))
    return 0


if __name__ == '__main__':
    sys.exit(main(sys.argv[1:]))
