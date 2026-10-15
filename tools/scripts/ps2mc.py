#!/usr/bin/env python3
"""ps2mc.py - read-only validator / lister for PS2 memory card images in PCSX2's raw
".ps2" format (stdlib only).

Raw layout: N pages x 528 bytes (512 data + 16 spare). Spare = 12 bytes ECC
(3 bytes per 128-byte chunk: column parity, line parity 0, line parity 1 -- Sony's
Hamming code as used by MCMAN, PCSX2 FolderMemoryCard and mymc) + 4 pad bytes.
A standard 8 MB card is 0x4000 pages = 8,650,752 bytes.

usage:
  ps2mc.py card.ps2                 validate + list
  ps2mc.py card.ps2 -v              also print each chain's cluster ranges
  ps2mc.py card.ps2 --extract DIR   also dump all files/dirs to DIR on the host
  ps2mc.py --selftest               cross-check fast ECC against the reference loop

exit codes: 0 ok (warnings allowed), 1 structural errors, 2 unformatted card,
            64 usage error.
The card image is only ever opened for reading.
"""

import argparse
import os
import struct
import sys
import unicodedata

RAW_PAGE = 528
STD_PAGES = 0x4000
STD_SIZE = STD_PAGES * RAW_PAGE  # 8,650,752
MAGIC = b"Sony PS2 Memory Card Format "

FAT_ALLOCATED = 0x80000000
FAT_CHAIN_END = 0xFFFFFFFF

# Directory entry mode bits (mymc / ps2sdk naming).
DF_READ, DF_WRITE, DF_EXECUTE, DF_PROTECTED = 0x0001, 0x0002, 0x0004, 0x0008
DF_FILE, DF_DIR = 0x0010, 0x0020
DF_POCKETSTN, DF_PSX, DF_HIDDEN, DF_EXISTS = 0x0800, 0x1000, 0x2000, 0x8000

# Standard values for a Sony-formatted 8 MB card (used only to flag deviations).
STD_SB = dict(page_len=512, pages_per_cluster=2, pages_per_block=16,
              clusters_per_card=8192, alloc_offset=41, alloc_end=8135,
              rootdir_cluster=0, backup_block1=1023, backup_block2=1022, card_type=2)

# --------------------------------------------------------------------------- ECC


def _parity(x):
    return bin(x).count("1") & 1


# Sony's 256-entry ECC table (MCMAN McDataChecksum / PCSX2 FolderMemoryCard::CalculateECC
# "Table[]"): bit 7 = parity of the byte, bits 0-6 = column-parity bits for the masks
# below (bit 3 unused). Starts 00 87 96 11 a5 22 33 b4 ...
_CP_MASKS = (0x55, 0x33, 0x0F, 0x00, 0xAA, 0xCC, 0xF0)
ECC_TABLE = bytes((_parity(b) << 7) | sum(_parity(b & m) << i for i, m in enumerate(_CP_MASKS))
                  for b in range(256))


def ecc_chunk_ref(chunk):
    """Reference implementation: straight port of MCMAN McDataChecksum / mymc
    ecc_calculate for one 128-byte chunk -> bytes([cp, lp0, lp1])."""
    cp = lp0 = lp1 = 0
    for i, b in enumerate(chunk):
        v = ECC_TABLE[b]
        cp ^= v
        if v & 0x80:
            lp0 ^= ~i
            lp1 ^= i
    return bytes((~cp & 0x77, ~lp0 & 0x7F, ~lp1 & 0x7F))


# Fast path. The table is linear over GF(2), so XOR of table entries == table entry of the
# XOR of all bytes; line parity bit k = parity of the count of odd-parity bytes whose index
# has bit k set (lp1) / clear (lp0).
_PARITY_TR = bytes(_parity(b) for b in range(256))
_IDX_MASKS = [int.from_bytes(bytes((i >> k) & 1 for i in range(128)), "little") for k in range(7)]
_popcount = int.bit_count if hasattr(int, "bit_count") else (lambda x: bin(x).count("1"))


def ecc_chunk(chunk):
    x = int.from_bytes(chunk, "little")
    width = 512
    while width >= 8:
        x = (x >> width) ^ (x & ((1 << width) - 1))
        width >>= 1
    cp = ECC_TABLE[x]
    p = int.from_bytes(chunk.translate(_PARITY_TR), "little")
    total = _popcount(p)
    lp0 = lp1 = 0
    for k, m in enumerate(_IDX_MASKS):
        n = _popcount(p & m)
        lp1 |= (n & 1) << k
        lp0 |= ((total - n) & 1) << k
    return bytes((~cp & 0x77, ~lp0 & 0x7F, ~lp1 & 0x7F))


def ecc_page(data, fn=ecc_chunk):
    return b"".join(fn(data[i:i + 128]) for i in range(0, len(data), 128))


def selftest():
    import random
    rng = random.Random(0x5032)
    cases = [bytes(128), b"\xff" * 128, bytes(range(128)), bytes(range(128, 256))]
    cases += [bytes([0] * i + [1 << (i % 8)] + [0] * (127 - i)) for i in range(128)]
    cases += [bytes(rng.getrandbits(8) for _ in range(128)) for _ in range(3000)]
    bad = sum(ecc_chunk(c) != ecc_chunk_ref(c) for c in cases)
    known = ecc_chunk(bytes(128)) == b"\x77\x7f\x7f" and ecc_chunk(b"\xff" * 128) == b"\x77\x7f\x7f"
    tbl = ECC_TABLE[:8] == bytes.fromhex("00879611a52233b4")
    print("selftest: %d chunks, fast-vs-reference mismatches: %d; zero/FF vector %s; table head %s"
          % (len(cases), bad, "ok" if known else "BAD", "ok" if tbl else "BAD"))
    return 0 if (bad == 0 and known and tbl) else 1

# --------------------------------------------------------------------------- helpers


class Report:
    def __init__(self):
        self.errors = []
        self.warnings = []

    def err(self, msg):
        self.errors.append(msg)
        print("  ERROR: " + msg)

    def warn(self, msg):
        self.warnings.append(msg)
        print("  WARN:  " + msg)


def u32(b, off):
    return struct.unpack_from("<I", b, off)[0]


def ranges(seq):
    out, start, prev = [], None, None
    for c in seq:
        if start is None:
            start = prev = c
        elif c == prev + 1:
            prev = c
        else:
            out.append((start, prev))
            start = prev = c
    if start is not None:
        out.append((start, prev))
    return ",".join(str(a) if a == b else "%d-%d" % (a, b) for a, b in out)


def fmt_time(t):
    if t == bytes(8):
        return "-"
    _, sec, mn, hr, day, mon, yr = struct.unpack("<BBBBBBH", t)
    return "%04d-%02d-%02d %02d:%02d:%02d" % (yr, mon, day, hr, mn, sec)


def fmt_mode(mode):
    kind = "d" if mode & DF_DIR else ("f" if mode & DF_FILE else "?")
    s = kind + "".join(c if mode & bit else "-" for c, bit in (("r", DF_READ), ("w", DF_WRITE), ("x", DF_EXECUTE)))
    extra = "".join(c for c, bit in (("P", DF_PROTECTED), ("H", DF_HIDDEN), ("1", DF_PSX), ("K", DF_POCKETSTN))
                    if mode & bit)
    return "%s%s 0x%04x" % (s, ("[" + extra + "]") if extra else "", mode)


def cstr(b):
    return b.split(b"\0", 1)[0]


def decode_sjis(b):
    for enc in ("shift_jis", "cp932"):
        try:
            return b.decode(enc)
        except UnicodeDecodeError:
            pass
    return b.decode("cp932", errors="replace")

# --------------------------------------------------------------------------- card


class Card:
    def __init__(self, raw):
        self.raw = raw
        self.npages = len(raw) // RAW_PAGE
        self.ppc = 2
        self.alloc_offset = 0

    def page(self, n):
        o = n * RAW_PAGE
        return self.raw[o:o + 512]

    def cluster(self, abs_c):
        p = abs_c * self.ppc
        return b"".join(self.page(p + i) for i in range(self.ppc))


def check_ecc(card):
    erased = match = no_ecc = 0
    mism = []
    pad = {}
    ff_raw = b"\xff" * RAW_PAGE
    for n in range(card.npages):
        o = n * RAW_PAGE
        rawp = card.raw[o:o + RAW_PAGE]
        if rawp == ff_raw:
            erased += 1
            continue
        data, stored = rawp[:512], rawp[512:524]
        p = rawp[524:528]
        pad[p] = pad.get(p, 0) + 1
        calc = ecc_page(data)
        if stored == calc:
            match += 1
        elif stored == b"\xff" * 12:
            no_ecc += 1
            mism.append((n, stored, calc))
        else:
            mism.append((n, stored, calc))
    return erased, match, no_ecc, mism, pad


SB_STRUCT = struct.Struct("<28s12sHHHHIIIIII8x128s128sBB")
SB_FIELDS = ("magic", "version", "page_len", "pages_per_cluster", "pages_per_block", "unknown",
             "clusters_per_card", "alloc_offset", "alloc_end", "rootdir_cluster",
             "backup_block1", "backup_block2", "ifc_raw", "bad_raw", "card_type", "card_flags")


def parse_superblock(page0):
    sb = dict(zip(SB_FIELDS, SB_STRUCT.unpack_from(page0)))
    sb["ifc_list"] = list(struct.unpack("<32I", sb.pop("ifc_raw")))
    sb["bad_block_list"] = list(struct.unpack("<32I", sb.pop("bad_raw")))
    return sb


def region_of(card, sb, page, ifcs, fatcs):
    if not sb:
        return ""
    c = page // sb["pages_per_cluster"]
    blk = page // sb["pages_per_block"]
    if blk in (sb["backup_block1"], sb["backup_block2"]):
        return "backup block %d" % blk
    if c == 0:
        return "superblock"
    if c in ifcs:
        return "indirect FAT cluster %d" % c
    if c in fatcs:
        return "FAT cluster %d" % c
    if sb["alloc_offset"] <= c < sb["alloc_offset"] + sb["alloc_end"]:
        return "data cluster rel %d" % (c - sb["alloc_offset"])
    return "cluster %d (reserved area)" % c

# --------------------------------------------------------------------------- main logic


def validate(path, args):
    rep = Report()
    with open(path, "rb") as f:  # read-only
        raw = f.read()
    size = len(raw)

    print("== file: %s" % path)
    if size == STD_SIZE:
        print("size: %d bytes = 0x%x pages x %d (standard 8 MB) OK" % (size, STD_PAGES, RAW_PAGE))
    elif size and size % RAW_PAGE == 0 and (size // RAW_PAGE) & (size // RAW_PAGE - 1) == 0:
        print("size: %d bytes = 0x%x pages x %d (non-8MB raw card)" % (size, size // RAW_PAGE, RAW_PAGE))
        rep.warn("card is not the standard 8 MB size")
    else:
        print("size: %d bytes" % size)
        hint = " (multiple of 512: image has no spare/ECC area)" if size % 512 == 0 else ""
        rep.err("size is not a power-of-two number of 528-byte raw pages%s" % hint)
        return rep, None

    card = Card(raw)

    # ---- superblock / unformatted detection
    page0 = card.page(0)
    sb = None
    print("\n== superblock")
    if page0[:len(MAGIC)] != MAGIC:
        if raw == b"\xff" * size:
            print("unformatted: every page is erased (all 0xFF)")
            return rep, "unformatted"
        if page0 in (b"\xff" * 512, bytes(512)):
            print("unformatted: superblock page is blank but other pages contain data")
            return rep, "unformatted"
        rep.err("bad superblock magic: %r" % page0[:28])
        return rep, None
    sb = parse_superblock(page0)
    std = {k: v for k, v in STD_SB.items()} if size == STD_SIZE else {}

    def show(name, value, fmt="%d"):
        note = ""
        if name in std and std[name] != value:
            note = "   (standard: %d)" % std[name]
        print("  %-18s %s%s" % (name, fmt % value, note))

    print("  %-18s %r" % ("magic", sb["magic"].decode("latin-1")))
    print("  %-18s %r" % ("version", cstr(sb["version"]).decode("latin-1")))
    for k in ("page_len", "pages_per_cluster", "pages_per_block"):
        show(k, sb[k])
    show("unknown(0x2e)", sb["unknown"], "0x%04x")
    for k in ("clusters_per_card", "alloc_offset", "alloc_end", "rootdir_cluster",
              "backup_block1", "backup_block2"):
        show(k, sb[k])
    nifc = sum(1 for x in sb["ifc_list"] if x not in (0, 0xFFFFFFFF))
    print("  %-18s %s" % ("ifc_list", [x for x in sb["ifc_list"][:max(nifc, 1)]]))
    bad = [x for x in sb["bad_block_list"] if x != 0xFFFFFFFF]
    print("  %-18s %s" % ("bad_block_list", bad if bad else "none (all 0xFFFFFFFF)"))
    show("card_type", sb["card_type"])
    print("  %-18s 0x%02x" % ("card_flags", sb["card_flags"]))

    # structural sanity of superblock fields
    if sb["page_len"] != 512:
        rep.err("page_len %d unsupported (raw stride assumes 512 + 16)" % sb["page_len"])
        return rep, None
    if sb["pages_per_cluster"] not in (1, 2, 4, 8) or sb["pages_per_block"] == 0 \
            or sb["pages_per_block"] % sb["pages_per_cluster"]:
        rep.err("bad pages_per_cluster/pages_per_block")
        return rep, None
    ppc = sb["pages_per_cluster"]
    card.ppc = ppc
    cpc = card.npages // ppc
    if sb["clusters_per_card"] != cpc:
        rep.err("clusters_per_card %d != %d implied by file size" % (sb["clusters_per_card"], cpc))
    if sb["alloc_offset"] + sb["alloc_end"] > cpc or sb["alloc_end"] == 0:
        rep.err("alloc_offset+alloc_end (%d) exceeds card (%d clusters)"
                % (sb["alloc_offset"] + sb["alloc_end"], cpc))
        return rep, None
    if sb["rootdir_cluster"] >= sb["alloc_end"]:
        rep.err("rootdir_cluster %d out of range" % sb["rootdir_cluster"])
    nblocks = card.npages // sb["pages_per_block"]
    for k in ("backup_block1", "backup_block2"):
        if sb[k] >= nblocks:
            rep.err("%s %d out of range (%d blocks)" % (k, sb[k], nblocks))
    if sb["card_type"] != 2:
        rep.warn("card_type %d is not 2 (PS2)" % sb["card_type"])
    if sb["version"][:4] != b"1.2." and sb["version"][:4] != b"1.1.":
        rep.warn("unusual version string")

    # ---- FAT layout (needed for ECC region names, so resolve indirection first)
    cs = 512 * ppc
    epc = cs // 4
    alloc_end, alloc_off = sb["alloc_end"], sb["alloc_offset"]
    card.alloc_offset = alloc_off
    n_fatc = -(-alloc_end // epc)
    n_ifc = -(-n_fatc // epc)
    ifcs = sb["ifc_list"][:n_ifc]
    fatcs = []
    layout_ok = True
    for i, ic in enumerate(ifcs):
        if ic >= alloc_off:
            rep.err("ifc_list[%d] = %d not in reserved area (< alloc_offset %d)" % (i, ic, alloc_off))
            layout_ok = False
            continue
        ind = card.cluster(ic)
        need = min(epc, n_fatc - i * epc)
        for j in range(need):
            fc = u32(ind, j * 4)
            if fc >= alloc_off:
                rep.err("indirect FAT cluster %d slot %d -> FAT cluster %d not in reserved area" % (ic, j, fc))
                layout_ok = False
            fatcs.append(fc)

    # ---- ECC
    print("\n== ECC (12 bytes per 512-byte page, 3 per 128-byte chunk)")
    erased, match, no_ecc, mism, pad = check_ecc(card)
    written = card.npages - erased
    real_mism = len(mism) - no_ecc
    print("  pages: %d total, %d erased (all 0xFF incl. spare), %d written" % (card.npages, erased, written))
    print("  written pages: %d ECC match, %d ECC mismatch, %d with no ECC (spare ECC bytes all 0xFF)"
          % (match, real_mism, no_ecc))
    if pad:
        print("  spare pad bytes [12:16] on written pages: " +
              ", ".join("%s x%d" % (k.hex(), v) for k, v in sorted(pad.items(), key=lambda kv: -kv[1])[:4]))
    if mism:
        sfat = set(fatcs)
        sifc = set(ifcs)
        for n, stored, calc in mism[:8]:
            print("    page 0x%04x [%s]: stored %s computed %s"
                  % (n, region_of(card, sb, n, sifc, sfat), stored.hex(" "), calc.hex(" ")))
        if len(mism) > 8:
            print("    ... %d more" % (len(mism) - 8))
        rep.err("%d written page(s) fail ECC (%d mismatched, %d missing ECC)" % (len(mism), real_mism, no_ecc))

    if not layout_ok:
        return rep, None

    # ---- FAT
    print("\n== FAT (indirect: ifc_list -> indirect clusters -> FAT clusters)")
    print("  cluster size %d, %d entries/cluster; %d FAT entries -> %d FAT cluster(s) via %d indirect cluster(s)"
          % (cs, epc, alloc_end, n_fatc, n_ifc))
    print("  indirect FAT clusters: %s   FAT clusters: %s" % (ranges(ifcs), ranges(fatcs)))
    fat = []
    fat_bytes = b"".join(card.cluster(fc) for fc in fatcs)
    fat = list(struct.unpack_from("<%dI" % alloc_end, fat_bytes))
    n_alloc = sum(1 for e in fat if e & FAT_ALLOCATED)
    n_end = sum(1 for e in fat if e == FAT_CHAIN_END)
    n_free = alloc_end - n_alloc
    free_vals = {}
    for e in fat:
        if not e & FAT_ALLOCATED:
            free_vals[e] = free_vals.get(e, 0) + 1
    print("  entries: %d allocated (%d chain ends), %d free (%d KB free)" % (n_alloc, n_end, n_free, n_free * cs // 1024))
    if free_vals and (len(free_vals) > 1 or 0x7FFFFFFF not in free_vals):
        top = sorted(free_vals.items(), key=lambda kv: -kv[1])[:3]
        print("  free entry values: " + ", ".join("0x%08x x%d" % kv for kv in top))
    for i, e in enumerate(fat):
        if e & FAT_ALLOCATED and e != FAT_CHAIN_END and (e & 0x7FFFFFFF) >= alloc_end:
            rep.err("FAT[%d] = 0x%08x points outside allocatable range" % (i, e))

    owner = {}

    def walk(start, who):
        """Follow a FAT chain from relative cluster `start`; returns list of clusters."""
        chain, seen, c = [], set(), start
        while True:
            if c >= alloc_end:
                rep.err("%s: chain reaches cluster %d (out of range)" % (who, c))
                break
            if c in seen:
                rep.err("%s: FAT chain loop at cluster %d" % (who, c))
                break
            e = fat[c]
            if not e & FAT_ALLOCATED:
                rep.err("%s: chain enters free cluster %d (FAT 0x%08x)" % (who, c, e))
                break
            seen.add(c)
            chain.append(c)
            if c in owner:
                rep.err("%s: cluster %d cross-linked with %s" % (who, c, owner[c]))
            else:
                owner[c] = who
            if e == FAT_CHAIN_END:
                break
            c = e & 0x7FFFFFFF
        return chain

    def chain_data(chain):
        return b"".join(card.cluster(alloc_off + c) for c in chain)

    # ---- directory tree
    print("\n== directory tree")
    stats = {"dirs": 0, "files": 0, "bytes": 0}
    root_c = sb["rootdir_cluster"]
    root_first = card.cluster(alloc_off + root_c)
    dot = root_first[:512]
    root_len = u32(dot, 4)
    if cstr(dot[0x40:0x60]) != b"." or not u16(dot, 0) & DF_DIR:
        rep.err("root directory first entry is not '.' directory (mode 0x%04x name %r)"
                % (u16(dot, 0), cstr(dot[0x40:0x60])))
    if args.extract:
        os.makedirs(args.extract, exist_ok=True)
    walk_dir(root_c, root_len, "/", 0, rep, walk, chain_data, cs, args, stats, args.extract, None)

    alloc_set = {i for i, e in enumerate(fat) if e & FAT_ALLOCATED}
    lost = sorted(alloc_set - set(owner))
    print("\n== summary")
    print("  %d dir(s), %d file(s), %d bytes in files; %d clusters in use by tree, %d allocated in FAT"
          % (stats["dirs"], stats["files"], stats["bytes"], len(owner), len(alloc_set)))
    if lost:
        rep.warn("%d allocated cluster(s) not reachable from the tree (lost): %s"
                 % (len(lost), ranges(lost)[:200]))
    return rep, None


def u16(b, off):
    return struct.unpack_from("<H", b, off)[0]


DIRENT = struct.Struct("<HHI8sII8sI28x32s")


def parse_dirent(b):
    mode, _, length, created, cluster, dir_entry, modified, attr, name = DIRENT.unpack_from(b)
    return dict(mode=mode, length=length, created=created, cluster=cluster, dir_entry=dir_entry,
                modified=modified, attr=attr, name=cstr(name))


def safe_name(name):
    s = name.decode("latin-1").replace("/", "_").replace("\\", "_")
    return "_" + s if s in ("", ".", "..") else s


def walk_dir(cluster, nentries, path, depth, rep, walk, chain_data, cs, args, stats, host_dir, parent):
    """List one directory (first cluster `cluster`, `nentries` 512-byte entries)."""
    stats["dirs"] += 1
    ind = "  " * (depth + 1)
    chain = walk(cluster, path)
    need = -(-nentries * 512 // cs)
    data = chain_data(chain)
    ok = len(chain) == need
    print("%s%s  (%d entries, cluster %d, chain %d/%d%s)%s"
          % (ind, path, nentries, cluster, len(chain), need, "" if ok else " MISMATCH",
             ("  clusters " + ranges(chain)) if args.verbose else ""))
    if len(chain) < need:
        rep.err("%s: directory needs %d cluster(s) for %d entries, chain has %d" % (path, need, nentries, len(chain)))
    elif len(chain) > need:
        rep.warn("%s: directory chain has %d cluster(s), %d needed" % (path, len(chain), need))
    if nentries < 2:
        rep.err("%s: directory has %d entries (< 2, missing '.'/'..')" % (path, nentries))
    navail = min(nentries, len(data) // 512)
    ents = [parse_dirent(data[i * 512:(i + 1) * 512]) for i in range(navail)]
    if len(ents) >= 2:
        if ents[0]["name"] != b"." or ents[1]["name"] != b"..":
            rep.warn("%s: first entries are %r/%r, expected '.'/'..'" % (path, ents[0]["name"], ents[1]["name"]))
        if parent is not None and (ents[0]["cluster"], ents[0]["dir_entry"]) != parent:
            rep.warn("%s: '.' back-pointer (cluster %d, entry %d) != parent (cluster %d, entry %d)"
                     % ((path, ents[0]["cluster"], ents[0]["dir_entry"]) + parent))
    deleted = 0
    files = {}
    for idx, e in enumerate(ents[2:], start=2):
        if not e["mode"] & DF_EXISTS:
            deleted += 1
            continue
        files[e["name"]] = e
    for idx, e in enumerate(ents[2:], start=2):
        if not e["mode"] & DF_EXISTS:
            continue
        name = e["name"]
        full = path.rstrip("/") + "/" + name.decode("latin-1")
        times = "c %s  m %s" % (fmt_time(e["created"]), fmt_time(e["modified"]))
        if e["mode"] & DF_DIR:
            print("%s  [dir]  %-32s %s  %s" % (ind, name.decode("latin-1") + "/", fmt_mode(e["mode"]), times))
            sub_host = os.path.join(host_dir, safe_name(name)) if host_dir else None
            if sub_host:
                os.makedirs(sub_host, exist_ok=True)
            walk_dir(e["cluster"], e["length"], full + "/", depth + 2, rep, walk, chain_data, cs, args, stats,
                     sub_host, (cluster, idx))
        elif e["mode"] & DF_FILE:
            stats["files"] += 1
            stats["bytes"] += e["length"]
            if e["length"] == 0 and e["cluster"] == FAT_CHAIN_END:
                fchain = []
            else:
                fchain = walk(e["cluster"], full)
            fneed = -(-e["length"] // cs)
            fok = len(fchain) == fneed
            print("%s  [file] %-32s %s  %8d B  %s  cluster %d chain %d/%d%s%s"
                  % (ind, name.decode("latin-1"), fmt_mode(e["mode"]), e["length"], times,
                     e["cluster"] if e["cluster"] != FAT_CHAIN_END else -1, len(fchain), fneed,
                     "" if fok else " MISMATCH", ("  clusters " + ranges(fchain)) if args.verbose else ""))
            if len(fchain) < fneed:
                rep.err("%s: length %d needs %d cluster(s), chain has %d" % (full, e["length"], fneed, len(fchain)))
            elif len(fchain) > fneed:
                rep.warn("%s: chain has %d cluster(s), length %d needs %d" % (full, len(fchain), e["length"], fneed))
            content = chain_data(fchain)[:e["length"]]
            if name == b"icon.sys":
                show_icon_sys(content, files, ind + "         ", full, rep, cs)
            if host_dir:
                with open(os.path.join(host_dir, safe_name(name)), "wb") as out:
                    out.write(content)
        else:
            rep.warn("%s: entry mode 0x%04x is neither file nor dir" % (full, e["mode"]))
    if deleted:
        print("%s  (%d deleted entr%s)" % (ind, deleted, "y" if deleted == 1 else "ies"))


def show_icon_sys(b, siblings, ind, full, rep, cs):
    if len(b) < 0x1C4 or b[:4] != b"PS2D":
        rep.warn("%s: not a valid icon.sys (len %d, magic %r)" % (full, len(b), b[:4]))
        return
    brk = u16(b, 0x06)
    title_raw = cstr(b[0xC0:0xC0 + 68]) if b"\0" in b[0xC0:0xC0 + 68] else b[0xC0:0xC0 + 68]
    l1, l2 = decode_sjis(title_raw[:brk]), decode_sjis(title_raw[brk:])
    norm = unicodedata.normalize("NFKC", l1 + " / " + l2)
    print("%sicon.sys: title %r / %r   (line break @%d)" % (ind, l1, l2, brk))
    if norm != l1 + " / " + l2:
        print("%s          ascii: %s" % (ind, norm))
    for label, off in (("list", 0x104), ("copy", 0x144), ("delete", 0x184)):
        fn = cstr(b[off:off + 64])
        if not fn:
            print("%s  %-6s icon: (none)" % (ind, label))
            continue
        e = siblings.get(fn)
        if e is None:
            ci = [k for k in siblings if k.lower() == fn.lower()]
            hint = " (case-insensitive match: %s)" % ci[0].decode("latin-1") if ci else ""
            print("%s  %-6s icon: %s  MISSING%s" % (ind, label, fn.decode("latin-1"), hint))
            rep.warn("%s references missing icon file %r" % (full, fn.decode("latin-1")))
        else:
            print("%s  %-6s icon: %s  present, %d B" % (ind, label, fn.decode("latin-1"), e["length"]))


class _Parser(argparse.ArgumentParser):
    def error(self, message):
        self.print_usage(sys.stderr)
        sys.stderr.write("%s: error: %s\n" % (self.prog, message))
        sys.exit(64)


def main(argv=None):
    ap = _Parser(description="Validate and list a PCSX2 raw PS2 memory card image (.ps2). Read-only.")
    ap.add_argument("card", nargs="?", help="card image (.ps2, 528-byte raw pages)")
    ap.add_argument("--extract", metavar="DIR", help="dump all files/dirs to DIR on the host")
    ap.add_argument("-v", "--verbose", action="store_true", help="print cluster ranges of every chain")
    ap.add_argument("--selftest", action="store_true", help="cross-check fast ECC vs reference and exit")
    args = ap.parse_args(argv)
    if args.selftest:
        return selftest()
    if not args.card:
        ap.error("card image required")
    try:
        rep, state = validate(args.card, args)
    except OSError as e:
        print("ERROR: %s" % e)
        return 1
    if state == "unformatted":
        print("\nresult: unformatted")
        return 2
    print("\nresult: %s (%d error(s), %d warning(s))"
          % ("OK" if not rep.errors else "INVALID", len(rep.errors), len(rep.warnings)))
    return 1 if rep.errors else 0


if __name__ == "__main__":
    sys.exit(main())
