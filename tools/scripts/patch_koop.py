#!/usr/bin/env python3
"""Fix Ko-op on the modded SLUS_210.87 (PCSX2 CRC 5C8A2D7F; retail is 455DD546).

The mod overwrote the Ko-op character-select code at 0x13b730..0x13b888 with a preload routine that ends in
`jr $11` with $11 = 0, so picking Ko-op jumps to 0x0. The branch at 0x13b728 (`beqz $v0, 0x13b8b0`) guards that
block; making it unconditional (`b 0x13b8b0`) skips the mod's routine like retail does.

usage: python3 -I patch_koop.py <in.elf> <out.elf>
"""
import sys

VADDR, FILE_OFF_OF_TEXT, TEXT_VADDR = 0x13b728, 0x1000, 0x100000
OLD, NEW = bytes.fromhex("61004010"), bytes.fromhex("61000010")  # beqz $2,+0x61 -> beq $0,$0,+0x61

src, dst = sys.argv[1], sys.argv[2]
data = bytearray(open(src, "rb").read())
off = VADDR - TEXT_VADDR + FILE_OFF_OF_TEXT
cur = bytes(data[off:off + 4])
if cur == NEW:
    print("already patched")
elif cur != OLD:
    sys.exit(f"unexpected bytes at 0x{VADDR:x}: {cur.hex()} (not the modded SLUS_210.87?)")
data[off:off + 4] = NEW
open(dst, "wb").write(data)
print(f"patched 0x{VADDR:x}: {OLD.hex()} -> {NEW.hex()} -> {dst}")
