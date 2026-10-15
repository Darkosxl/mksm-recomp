#!/usr/bin/env python3
"""String cross-references for a PS2 EE ELF (stdlib only).

usage: python3 -I str_xref.py <elf> <regex> [--funcs]

Finds printable strings in .data/.rodata matching <regex>, then every
`lui rX,hi` + `addiu/ori/lw/sw ...(rX)` pair in .text that materialises the string's
address (hi/lo with sign-extended lo, within 24 instructions, same register).
With --funcs, also prints the containing function start (heuristic: nearest
preceding `addiu sp,sp,-N`; leaf functions without a frame are misattributed).
"""
import re
import struct
import sys


def main():
    path, rx = sys.argv[1], re.compile(sys.argv[2].encode(), re.I)
    want_funcs = "--funcs" in sys.argv
    d = open(path, "rb").read()
    shoff, = struct.unpack_from("<I", d, 0x20)
    shnum, shstrndx = struct.unpack_from("<HH", d, 0x30)
    sh = [struct.unpack_from("<10I", d, shoff + i * 40) for i in range(shnum)]
    st = d[sh[shstrndx][4]:sh[shstrndx][4] + sh[shstrndx][5]]
    secs = {st[s[0]:st.index(b"\0", s[0])].decode(): s for s in sh}
    strs = {}
    for nm in (".data", ".rodata"):
        s = secs[nm]
        blob = d[s[4]:s[4] + s[5]]
        for m in re.finditer(rb"[\x20-\x7e\t\n]{4,}", blob):
            if rx.search(m.group()):
                strs[s[3] + m.start()] = m.group().decode("latin1")
    t = secs[".text"]
    T0, TOFF, TSZ = t[3], t[4], t[5]
    W = struct.unpack_from("<%dI" % (TSZ // 4), d, TOFF)

    starts = []
    if want_funcs:  # heuristic: every `addiu sp,sp,-N` is a function prologue
        for i, w in enumerate(W):
            if w >> 26 == 0x09 and ((w >> 21) & 31) == 29 and ((w >> 16) & 31) == 29 and (w & 0x8000):
                starts.append(T0 + 4 * i)

    import bisect
    out = []
    for i, w in enumerate(W):
        if w >> 26 != 0x0f:
            continue
        rt, hi = (w >> 16) & 31, w & 0xffff
        for j in range(i + 1, min(len(W), i + 24)):
            w2 = W[j]
            op2, rs2, rt2 = w2 >> 26, (w2 >> 21) & 31, (w2 >> 16) & 31
            lo = w2 & 0xffff
            if rs2 == rt and op2 in (0x09, 0x0d, 0x19, 0x23, 0x2b, 0x24, 0x20):
                a = ((hi << 16) + (lo - 0x10000 if (lo & 0x8000 and op2 != 0x0d) else lo)) & 0xffffffff
                if a in strs:
                    pc = T0 + 4 * j
                    fs = ""
                    if starts:
                        k = bisect.bisect_right(starts, pc) - 1
                        fs = " fn=%08x" % starts[k] if k >= 0 else ""
                    out.append((a, pc, fs))
            if rt2 == rt and op2 not in (0x2b, 0x28, 0x29, 0x3f, 0x1f, 0x04, 0x05) or \
                    (op2 == 0 and ((w2 >> 11) & 31) == rt):
                break
    seen = set()
    for a, pc, fs in sorted(out, key=lambda x: (x[0], x[1])):
        print("%08x  xref@%08x%s  %r" % (a, pc, fs, strs[a][:90]))
        seen.add(a)
    for a in sorted(set(strs) - seen):
        print("%08x  (no direct xref)  %r" % (a, strs[a][:90]))


if __name__ == "__main__":
    main()
