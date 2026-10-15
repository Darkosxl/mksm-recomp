#!/usr/bin/env python3
"""Ghidra-independent entry-point seeds for eerecomp (bare lowercase hex, one per line).

usage: python3 -I seed_scan.py <SLUS_210.87> <outdir>
writes: jal_targets.txt, linear_prologues.txt, ehtargets.txt, dataptrs_py.txt
"""
import struct, sys, os

elf_path, out = sys.argv[1], sys.argv[2]
d = open(elf_path, "rb").read()

shoff, = struct.unpack_from("<I", d, 0x20)
shnum, shstrndx = struct.unpack_from("<HH", d, 0x30)
sh = [struct.unpack_from("<10I", d, shoff + i * 40) for i in range(shnum)]
strtab = d[sh[shstrndx][4]:sh[shstrndx][4] + sh[shstrndx][5]]
secs = {strtab[s[0]:strtab.index(b"\0", s[0])].decode(): s for s in sh}

text = secs[".text"]
T0, TSZ, TOFF = text[3], text[5], text[4]
T1 = T0 + TSZ
words = struct.unpack_from("<%dI" % (TSZ // 4), d, TOFF)
NOP = 0
JR_RA = 0x03E00008


def in_text(a):
    return T0 <= a < T1 and a % 4 == 0


def is_prologue(w):  # addiu sp,sp,-N  /  daddiu sp,sp,-N
    return (w >> 16) in (0x27BD, 0x67BD) and (w & 0x8000)


jal, linear = set(), set()
for i, w in enumerate(words):
    pc = T0 + i * 4
    if w >> 26 == 3:  # jal
        jal.add(((pc + 4) & 0xF0000000) | ((w & 0x3FFFFFF) << 2))
    if w == JR_RA:
        # next real instruction after the delay slot, skipping nop padding
        j = i + 2
        while j < len(words) and words[j] == NOP:
            j += 1
        if j < len(words):
            linear.add(T0 + j * 4)
    if is_prologue(w):
        # prologue preceded by an unconditional end (jr/j) or padding = function start
        prev = words[i - 1] if i else NOP
        prev2 = words[i - 2] if i > 1 else NOP
        if prev == NOP or prev2 == JR_RA or prev2 >> 26 == 2 or (prev2 & 0xFC00003F) == 0x8:
            linear.add(pc)
linear.add(T0)
jal = {a for a in jal if in_text(a)}
linear = {a for a in linear if in_text(a)}


def words_in(name):
    s = secs.get(name)
    if not s or s[1] == 8:  # missing or NOBITS
        return []
    n = s[5] // 4
    return [(s[3] + k * 4, v) for k, v in enumerate(struct.unpack_from("<%dI" % n, d, s[4]))]


eh = {v for _, v in words_in(".gcc_except_table") if in_text(v)}
dataptrs = set()
for name in (".data", ".rodata", ".sdata", ".gcc_except_table"):
    dataptrs |= {v for _, v in words_in(name) if in_text(v)}

os.makedirs(out, exist_ok=True)
for fname, s in (("jal_targets.txt", jal), ("linear_prologues.txt", linear),
                 ("ehtargets.txt", eh), ("dataptrs_py.txt", dataptrs)):
    with open(os.path.join(out, fname), "w") as f:
        f.writelines("%x\n" % a for a in sorted(s))
    print(f"{fname:22} {len(s):6}")

allseeds = jal | linear | eh | dataptrs
print(f"{'union':22} {len(allseeds):6}")
# self-check: entry point must be covered, all seeds aligned + inside .text
entry, = struct.unpack_from("<I", d, 0x18)
assert entry in allseeds, hex(entry)
assert all(in_text(a) for a in allseeds)
