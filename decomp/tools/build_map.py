#!/usr/bin/env python3
"""Function map for the MK:SM decomp (stdlib only, read-only on the ELF).

usage: python3 -I decomp/tools/build_map.py [--elf games/mksm/disc/SLUS_210.87] [--out decomp/map]
                                            [--exports ../../analysis/exports] [--sce-db FILE]

Writes <out>/functions.tsv, <out>/callgraph.tsv, <out>/boundaries.tsv (every start candidate and how it was
resolved) and <out>/stats.json. Inputs it reads besides the ELF live in <out>/inputs/ (see README there).
"""
import argparse
import bisect
import collections
import hashlib
import json
import os
import re
import struct
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
UNIT_BASE, UNIT_SIZE = 0x100000, 0x4000


# ----------------------------------------------------------------------------------------------- ELF


class Elf:
    def __init__(self, path):
        d = self.data = open(path, "rb").read()
        shoff, = struct.unpack_from("<I", d, 0x20)
        shnum, shstrndx = struct.unpack_from("<HH", d, 0x30)
        sh = [struct.unpack_from("<10I", d, shoff + i * 40) for i in range(shnum)]
        st = d[sh[shstrndx][4]:sh[shstrndx][4] + sh[shstrndx][5]]
        self.secs = {}
        for s in sh:
            name = st[s[0]:st.index(b"\0", s[0])].decode()
            self.secs[name] = dict(type=s[1], addr=s[3], off=s[4], size=s[5])
        self.entry, = struct.unpack_from("<I", d, 0x18)
        t = self.secs[".text"]
        self.T0, self.T1 = t["addr"], t["addr"] + t["size"]
        self.W = struct.unpack_from("<%dI" % (t["size"] // 4), d, t["off"])
        self.loaded = sorted((s["addr"], s["addr"] + s["size"], s["off"]) for n, s in self.secs.items()
                             if s["addr"] and s["type"] == 1 and s["size"])

    def in_text(self, a):
        return self.T0 <= a < self.T1 and not a & 3

    def w(self, a):
        return self.W[(a - self.T0) >> 2]

    def u32(self, a):
        for lo, hi, off in self.loaded:
            if lo <= a and a + 4 <= hi:
                return struct.unpack_from("<I", self.data, off + a - lo)[0]
        return None

    def section_words(self, name):
        s = self.secs.get(name)
        if not s or s["type"] != 1:
            return []
        n = s["size"] // 4
        return [(s["addr"] + 4 * k, v) for k, v in enumerate(struct.unpack_from("<%dI" % n, self.data, s["off"]))]

    def cstr(self, a, limit=256):
        for lo, hi, off in self.loaded:
            if lo <= a < hi:
                raw = self.data[off + a - lo:off + min(hi - lo, a - lo + limit)]
                return raw.split(b"\0", 1)[0].decode("latin1")
        return None


# ------------------------------------------------------------------------------------- MIPS decoding
# Only what control flow and call discovery need. Kinds:
#   call(jal) bal(bgezal/bltzal) callr(jalr) jump(j) jr branch ubranch(b / bgez $0) eret None(straight-line)

def decode(w, pc):
    op = w >> 26
    rs, rt = (w >> 21) & 31, (w >> 16) & 31
    tgt = (((pc + 4) & 0xF0000000) | ((w & 0x3FFFFFF) << 2))
    off = pc + 4 + (((w & 0xFFFF) ^ 0x8000) - 0x8000) * 4
    if op == 3:
        return "call", tgt, rs
    if op == 2:
        return "jump", tgt, rs
    if op == 0:
        f = w & 63
        if f == 8:
            return "jr", None, rs
        if f == 9:
            return "callr", None, rs
        return None
    if op == 1:
        if rt in (0, 2):        # bltz bltzl
            return "branch", off, rs
        if rt in (1, 3):        # bgez bgezl
            return ("ubranch" if rs == 0 else "branch"), off, rs
        if rt in (16, 17, 18, 19):  # bltzal bgezal ...
            return "bal", off, rs
        return None
    if op in (4, 20):           # beq beql
        return ("ubranch" if rs == 0 and rt == 0 else "branch"), off, rs
    if op in (5, 6, 7, 21, 22, 23):
        return "branch", off, rs
    if op in (16, 17, 18) and rs == 8:  # bc0x bc1x bc2x
        return "branch", off, rs
    if op == 16 and (w & 0x3F) == 0x18 and rs == 16:  # eret
        return "eret", None, rs
    return None


def is_prologue(w):  # addiu/daddiu sp,sp,-N
    return (w >> 16) in (0x27BD, 0x67BD) and (w & 0x8000)


# ------------------------------------------------------------------------------------- jump tables

def jump_tables(elf, code_ok):
    """jr rX (rX != ra) whose target comes from a table: lui/addiu base + lw. Returns {jr_pc: [targets]}."""
    W, T0 = elf.W, elf.T0
    out = {}
    for i, w in enumerate(W):
        if w & 0xFC1FFFFF != 0x00000008 or ((w >> 21) & 31) == 31:
            continue
        pc = T0 + 4 * i
        rx = (w >> 21) & 31
        base = count = None
        hi = {}
        # walk back at most 24 instructions collecting the lw, the addu and the lui/addiu pairs
        lw_base, lw_off = None, 0
        for k in range(1, 25):
            if i - k < 0:
                break
            v = W[i - k]
            op, rs, rt = v >> 26, (v >> 21) & 31, (v >> 16) & 31
            imm = ((v & 0xFFFF) ^ 0x8000) - 0x8000
            if lw_base is None:
                if op == 0x23 and rt == rx:
                    lw_base, lw_off = rs, imm
                continue
            if op == 0x0B and count is None:  # sltiu
                count = v & 0xFFFF
            st = hi.setdefault(rt, [None, None])
            if st[0] is not None:
                continue  # first lui met going backwards wins; earlier code is another use of the register
            if op == 0x0F:
                st[0] = (v & 0xFFFF) << 16
            elif op == 0x09 and rs == rt and st[1] is None:
                st[1] = imm
        if lw_base is None:
            continue
        for r, (h, lo) in hi.items():
            if h is None:
                continue
            cand = (h + (lo or 0) + lw_off) & 0xFFFFFFFF
            if elf.u32(cand) is None or elf.in_text(cand):
                continue
            first = elf.u32(cand)
            if not elf.in_text(first) or abs(first - pc) > 0x10000:
                continue
            base = cand
            break
        if base is None:
            continue
        n = count if count and count <= 1024 else 1024
        tg = []
        for j in range(n):
            t = elf.u32(base + 4 * j)
            if t is None or not elf.in_text(t) or abs(t - pc) > 0x10000:
                break
            tg.append(t)
        if tg:
            out[pc] = tg
    return out


# ----------------------------------------------------------------------------------------- walking

class Walker:
    def __init__(self, elf, jt):
        self.elf, self.jt = elf, jt
        self.dec = {}
        for i, w in enumerate(elf.W):
            k = decode(w, elf.T0 + 4 * i)
            if k:
                self.dec[elf.T0 + 4 * i] = k

    def body(self, start, limit):
        """Instructions reachable from start without leaving [start, limit) and without following calls."""
        seen, stack = set(), [start]
        dec = self.dec
        while stack:
            pc = stack.pop()
            while start <= pc < limit and pc not in seen:
                seen.add(pc)
                k = dec.get(pc)
                if k is None:
                    pc += 4
                    continue
                kind, tgt, rs = k
                if kind == "eret":
                    break
                seen.add(pc + 4)
                if kind == "branch":
                    stack.append(tgt)
                    pc += 8
                elif kind in ("call", "bal", "callr"):
                    pc += 8
                elif kind in ("jump", "ubranch"):
                    pc = tgt
                elif kind == "jr":
                    if rs != 31 and pc in self.jt:
                        stack.extend(self.jt[pc])
                    break
        return seen


# ------------------------------------------------------------------------------------------ inputs

def read_hex_list(path):
    out = []
    for line in open(path):
        line = line.split("#", 1)[0].strip()
        if line:
            out.append(int(line.split()[0], 16))
    return out


def recomp_functions(elf, seeds):
    """Replicates eerecomp's function set: ELF entry + seeds + every jal target met while walking from them."""
    fn = set(seeds) | {elf.entry}
    code = bytearray(len(elf.W))
    queue = [a for a in fn if elf.in_text(a)]
    while queue:
        pc = queue.pop()
        while elf.in_text(pc) and not code[(pc - elf.T0) >> 2]:
            code[(pc - elf.T0) >> 2] = 1
            k = decode(elf.w(pc), pc)
            if k is None:
                pc += 4
                continue
            kind, tgt, rs = k
            if kind == "eret":
                break
            if elf.in_text(pc + 4):
                code[(pc + 4 - elf.T0) >> 2] = 1
            if kind in ("branch", "bal"):
                if elf.in_text(tgt):
                    queue.append(tgt)
                pc += 8
            elif kind == "call":
                if elf.in_text(tgt):
                    fn.add(tgt)
                    queue.append(tgt)
                pc += 8
            elif kind == "callr":
                pc += 8
            elif kind in ("jump", "ubranch"):
                if elf.in_text(tgt):
                    queue.append(tgt)
                break
            else:
                break
    return {a for a in fn if elf.in_text(a)}, code


# ------------------------------------------------------------------------------------- SCE library

RELOC_MASK = {"NONE": 0xFFFFFFFF, "MIPS_26": 0xFC000000, "MIPS_LO16": 0xFFFF0000, "MIPS_HI16": 0xFFFF0000,
              "MIPS_GPREL16": 0xFFFF0000, "MIPS_LITERAL": 0xFFFF0000, "MIPS_32": 0}


def sce_scan(elf, db_path):
    """Exact masked-hash matches of the public sce-symbol-scanner database (the .h that OGmidway/mksm-recomp
    ships in ps2xAnalyzer) at every word of .text. Same acceptance rule as their scanner: >= 256 static bits
    and a single library+name identity per address. Returns {addr: (library, name, size)}."""
    text = open(db_path).read()
    i = text.index("kTreeJsonChunks")
    chunks = lambda t: "".join(re.findall(r'R"PS2SDB\((.*?)\)PS2SDB"', t, re.S))
    sym, tree = json.loads(chunks(text[:i])), json.loads(chunks(text[i:]))
    recs = {}
    for lib, names in sym.items():
        for name, hashes in names.items():
            for h, variants in hashes.items():
                for v, rec in variants.items():
                    rel = [(int(o, 0), RELOC_MASK.get(r.get("type", "none").upper(), 0xFFFFFFFF))
                           for o, r in rec.get("relocations", {}).items()]
                    static = rec["size"] * 8 - sum(32 - bin(m).count("1") for _, m in rel)
                    recs[(lib, name, h, int(v, 16))] = (rec["size"], rel, static, rec.get("type"))

    def index(node):
        edges = collections.defaultdict(lambda: collections.defaultdict(list))
        for e in node.get("next", []):
            m = RELOC_MASK.get(e["match"].get("relocation", {}).get("type", "none").upper(), 0xFFFFFFFF)
            edges[m][e["match"]["value"] & m].append(index(e["child"]))
        syms = [(s["library"], s["name"], s["hash"], s.get("variant", 0)) for s in node.get("symbols", [])]
        return node.get("offset", 0), {m: dict(v) for m, v in edges.items()}, syms

    root = index(tree)
    W, T0, n = elf.W, elf.T0, len(elf.W)
    out = {}
    for i0 in range(n):
        cands, stack = [], [root]
        while stack:
            off, edges, _ = stack.pop()
            j = i0 + (off >> 2)
            if j >= n:
                continue
            v = W[j]
            for m, table in edges.items():
                for child in table.get(v & m, ()):
                    cands.extend(child[2])
                    if child[1]:
                        stack.append(child)
        if not cands:
            continue
        hits = set()
        for key in cands:
            r = recs.get(key)
            if not r or r[2] < 256 or r[3] != "FUNCTION" or i0 + r[0] // 4 > n:
                continue
            size, rel = r[0], r[1]
            ws = list(W[i0:i0 + size // 4])
            for o, m in rel:
                if o + 4 <= size:
                    ws[o >> 2] &= m
            if hashlib.sha1(struct.pack("<%dI" % len(ws), *ws)).hexdigest() == key[2]:
                hits.add((key[0], key[1], size))
        if len({(l, nm) for l, nm, _ in hits}) == 1:
            out[T0 + 4 * i0] = max(hits, key=lambda h: h[2])
    return out


# ------------------------------------------------------------------------------------ boundaries

def resolve_starts(elf, walker, ghidra, recomp, jal, linear, eh, dataptrs, caselabels, lib, fde):
    """Decide the function starts.

    Strong starts: eh_frame FDE starts, Ghidra's starts, direct jal targets, `j` targets outside the jumping
    function's window (tail calls), exact library matches and the ELF entry. Every strong start keeps a window up to the next
    strong start; its body is what local control flow (branches, b, in-window j, resolved jump tables) reaches.
    Every other candidate (recompiler seeds, linear prologues) becomes a start only if it is not an EH landing
    pad, not a jump-table case label, not inside an FDE's range, not padding, not reached by an earlier
    function's body, and no earlier function's body continues past it. Returns (starts, decision{addr: (accepted, reason)}, owner{pc: start})."""
    strong = {a for a in set(ghidra) | set(jal) | set(lib) | set(fde) | {elf.entry} if elf.in_text(a)}
    fstarts = sorted(fde)
    order = sorted(strong)
    tailj = set()
    for pc, (kind, tgt, rs) in walker.dec.items():
        if kind != "jump" or not elf.in_text(tgt) or tgt in strong:
            continue
        k = bisect.bisect_right(order, pc) - 1
        lo = order[k] if k >= 0 else elf.T0
        hi = order[k + 1] if k + 1 < len(order) else elf.T1
        if not lo <= tgt < hi:
            tailj.add(tgt)
    strong |= tailj
    order = sorted(strong)

    owner = {}

    def claim(s, limit):
        body = walker.body(s, limit)
        for pc in body:
            owner.setdefault(pc, s)
        return body

    for k, s in enumerate(order):
        claim(s, order[k + 1] if k + 1 < len(order) else elf.T1)

    decision = {}
    for a in strong:
        src = [n for n, st in (("fde", fde), ("ghidra", ghidra), ("jal", jal), ("tail-j", tailj), ("lib", lib))
               if a in st]
        if a == elf.entry:
            src.append("entry")
        decision[a] = (True, "strong:" + "+".join(src))
    starts = set(strong)
    for c in sorted((set(recomp) | set(linear)) - strong):
        tags = "+".join(n for n, st in (("recomp", recomp), ("linear", linear), ("dataptr", dataptrs), ("eh", eh),
                                        ("case", caselabels)) if c in st)
        k = bisect.bisect_right(order, c)
        limit = order[k] if k < len(order) else elf.T1
        f = bisect.bisect_right(fstarts, c) - 1
        if f >= 0 and c < fstarts[f] + fde[fstarts[f]]:
            decision[c] = (False, "inside-fde(%x):" % fstarts[f] + tags)
        elif c in eh:
            decision[c] = (False, "eh-landing-pad:" + tags)
        elif c in caselabels:
            decision[c] = (False, "case-label:" + tags)
        elif c in owner:
            decision[c] = (False, "internal(reached-from-%x):" % owner[c] + tags)
        elif all(elf.w(c + 4 * i) == 0 for i in range(min(4, (limit - c) // 4))):
            decision[c] = (False, "padding:" + tags)
        else:
            later = [owner[pc] for pc in range(c + 4, limit, 4) if pc in owner and owner[pc] < c]
            if later:
                decision[c] = (False, "inside(body-of-%x-continues-past-it):" % later[0] + tags)
            else:
                claim(c, limit)
                starts.add(c)
                decision[c] = (True, "unreached-by-ghidra:" + tags)
    return sorted(starts), decision, owner, tailj


def function_ends(elf, starts, owner, fde):
    """End = start + FDE size when the function has an eh_frame FDE that stops before the next start; otherwise
    the next start, minus trailing zero words that no flow from this function reaches (alignment)."""
    ends, how = [], []
    for k, s in enumerate(starts):
        nxt = starts[k + 1] if k + 1 < len(starts) else elf.T1
        if s in fde and s + fde[s] <= nxt:
            ends.append(s + fde[s])
            how.append("fde")
            continue
        e = nxt
        while e - 4 > s and elf.w(e - 4) == 0 and owner.get(e - 4) != s:
            e -= 4
        ends.append(e)
        how.append("next-start" if s not in fde else "next-start(fde-overlaps)")
    return ends, how


# ------------------------------------------------------------------------------------ call graph

def reg_constant(elf, at, reg, lo_limit):
    """Value of `reg` at `at` if it is built by lui (+addiu/ori) in the preceding straight-line code."""
    low = None
    pc = at - 4
    while pc >= max(lo_limit, at - 64):
        v = elf.w(pc)
        op, rs, rt = v >> 26, (v >> 21) & 31, (v >> 16) & 31
        if decode(v, pc) and decode(v, pc)[0] in ("jump", "jr", "eret"):
            return None
        if op in (0x09, 0x0D) and rt == reg and rs == reg and low is None:
            low = (op, v & 0xFFFF)
        elif op == 0x0F and rt == reg:
            hi = (v & 0xFFFF) << 16
            if low is None:
                return hi
            return (hi + (((low[1]) ^ 0x8000) - 0x8000)) & 0xFFFFFFFF if low[0] == 0x09 else hi | low[1]
        elif rt == reg and op not in (0x2B, 0x28, 0x29, 0x3F, 0x1F, 0x04, 0x05, 0x14, 0x15) and op != 0:
            return None
        elif op == 0 and ((v >> 11) & 31) == reg:
            return None
        pc -= 4
    return None


def call_edges(elf, walker, starts, ends):
    """Per function: list of (callee, kind, site) and the count of unresolved jalr."""
    startset = set(starts)
    edges, unresolved = {}, {}
    for s, e in zip(starts, ends):
        out, nj = [], 0
        for pc in range(s, e, 4):
            k = walker.dec.get(pc)
            if not k:
                continue
            kind, tgt, rs = k
            if kind == "call":
                out.append((tgt, "jal", pc))
            elif kind == "bal" and not s <= tgt < e:
                out.append((tgt, "jal", pc))
            elif kind == "callr":
                t = reg_constant(elf, pc, rs, s)
                if t is not None and t in startset:
                    out.append((t, "jalr-resolved", pc))
                else:
                    nj += 1
            elif kind in ("jump", "ubranch", "branch") and elf.in_text(tgt) and not s <= tgt < e:
                if kind == "jump" or tgt in startset:
                    out.append((tgt, "tail", pc))
        edges[s], unresolved[s] = out, nj
    return edges, unresolved


# ------------------------------------------------------------------------------------ strings

def string_xrefs(elf, starts, ends):
    """lui/addiu-style references from code to NUL-terminated strings in .data/.rodata. {fn_start: [(pc, str)]}"""
    strs = {}
    for name in (".data", ".rodata"):
        sec = elf.secs[name]
        blob = elf.data[sec["off"]:sec["off"] + sec["size"]]
        for m in re.finditer(rb"[\x20-\x7e\t\n]{4,}\x00", blob):
            strs[sec["addr"] + m.start()] = m.group()[:-1].decode("latin1")
    W, T0 = elf.W, elf.T0
    out = collections.defaultdict(list)
    for k, (s, e) in enumerate(zip(starts, ends)):
        i0, i1 = (s - T0) >> 2, (e - T0) >> 2
        for i in range(i0, i1):
            w = W[i]
            if w >> 26 != 0x0F:
                continue
            rt, hi = (w >> 16) & 31, (w & 0xFFFF) << 16
            for j in range(i + 1, min(i1, i + 24)):
                w2 = W[j]
                op2, rs2, rt2 = w2 >> 26, (w2 >> 21) & 31, (w2 >> 16) & 31
                if rs2 == rt and op2 in (0x09, 0x0D, 0x19, 0x23, 0x2B, 0x24, 0x20):
                    lo = w2 & 0xFFFF
                    a = (hi + (lo if op2 == 0x0D else ((lo ^ 0x8000) - 0x8000))) & 0xFFFFFFFF
                    if a in strs:
                        out[s].append((T0 + 4 * j, strs[a]))
                if (rt2 == rt and op2 not in (0x2B, 0x28, 0x29, 0x3F, 0x1F, 0x04, 0x05)) or \
                        (op2 == 0 and ((w2 >> 11) & 31) == rt):
                    break
    return out


# ------------------------------------------------------------------------------------ eh_frame

def eh_frames(elf):
    """GCC eh_frame blocks the linker left in .data: one CIE per object file followed by its FDEs.
    Returns a list of objects, each a list of (start, size, fde_addr), in .data order."""
    out = []
    for name in (".data", ".rodata"):
        sec = elf.secs[name]
        D, A0 = elf.data[sec["off"]:sec["off"] + sec["size"]], sec["addr"]
        o = 0
        while o + 12 <= len(D):
            L, cid = struct.unpack_from("<II", D, o)
            if not (cid == 0 and 8 <= L < 64 and D[o + 8] == 1):
                o += 4
                continue
            aug = D[o + 9:o + 17].split(b"\0")[0]
            if not all(32 <= c < 127 for c in aug):
                o += 4
                continue
            p, fdes = o + 4 + L, []
            while p + 16 <= len(D):
                L2, cid2 = struct.unpack_from("<II", D, p)
                if L2 < 12 or L2 > 0x1000 or L2 & 3 or cid2 != p + 4 - o:
                    break
                loc, rng = struct.unpack_from("<II", D, p + 8)
                if not (elf.in_text(loc) and rng and not rng & 3 and loc + rng <= elf.T1):
                    break
                fdes.append((loc, rng, A0 + p))
                p += 4 + L2
            if fdes:
                out.append(fdes)
            o = max(p, o + 4)
    return out


# ------------------------------------------------------------------------------------ attribution

LIB_MODULE = {"libc": "libc", "libm": "libc", "libgcc": "libc"}  # everything else from the SCE database: sony


def module_from_path(path):
    p = path.replace("\\", "/")
    m = re.match(r"c:/Projects/(.*)", p, re.I)
    rest = m.group(1) if m else p
    parts = [x for x in rest.split("/") if x and x != ".."]
    top = parts[0].lower() if parts else ""
    if top == "mka":
        return "gamecode"
    if top == "ps2":
        return "ps2render"
    if top == "paradox":
        return "paradox:" + (parts[1].lower() if len(parts) > 2 else "core")
    if top == "havoksdk":
        return "havok"
    if top == "utility":
        return "utility"
    if top == "platform":
        return "platform"
    return "unknown"


ASSERT_PATH = re.compile(r"^c:[/\\]projects[/\\].*\.(cpp|c|h|hpp|inl)$", re.I)
IDENT = r"[A-Za-z_][A-Za-z0-9_]*"


def looks_like_function_name(n):
    return len(n) >= 5 and re.search(r"[a-z]", n) and ("_" in n.strip("_") or re.search(r"[a-z][A-Z]", n)) \
        and not re.match(r"^[A-Z][a-z]+$", n)


def names_from_string(s):
    """Function names a string literal gives for the function that uses it (conservative, see README)."""
    out = []
    s1 = s.strip()
    m = re.search(r"(" + IDENT + r"::~?" + IDENT + r")", s1)
    if m:
        out.append(m.group(1))
    m = re.search(r"\((" + IDENT + r")\)\.?$", s1)                    # CRI: "...(adxf_GetPtStat)"
    if m and looks_like_function_name(m.group(1)):
        out.append(m.group(1))
    m = re.search(r"\bin (" + IDENT + r")\.?$", s1)                     # "... failed in PS2RNA_Init."
    if m and looks_like_function_name(m.group(1)):
        out.append(m.group(1))
    body = re.sub(r"^(?:[A-Z0-9]+:\s*)?(?:E\d+\s*:\s*)?", "", s1)
    m = re.match(r"(" + IDENT + r")\s*(\(\))?\s*:", body)              # "PS2RNA_SetupVoice:..." "fn() : ..."
    if m and looks_like_function_name(m.group(1)) and (m.group(2) or "_" in m.group(1).strip("_")):
        out.append(m.group(1))
    return out


# ------------------------------------------------------------------------------------ main

def rel(path):
    return os.path.relpath(path, ROOT)


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--elf", default=os.path.join(ROOT, "games/mksm/disc/SLUS_210.87"))
    ap.add_argument("--entries", default=os.path.join(ROOT, "mksm/entries.txt"))
    ap.add_argument("--out", default=os.path.join(ROOT, "decomp/map"))
    ap.add_argument("--sce-db", help="sce_symbol_database_data.h from OGmidway/mksm-recomp; rewrites inputs/sce-matches.tsv")
    args = ap.parse_args()
    inp = os.path.join(args.out, "inputs")
    elf = Elf(args.elf)
    stats = collections.OrderedDict()

    # ---- start candidates
    seeds = read_hex_list(args.entries)
    ghidra = set(read_hex_list(os.path.join(inp, "ghidra-functions.txt")))
    jal = set()
    linear = {elf.T0}
    W = elf.W
    for i, w in enumerate(W):
        pc = elf.T0 + 4 * i
        if w >> 26 == 3:
            t = ((pc + 4) & 0xF0000000) | ((w & 0x3FFFFFF) << 2)
            if elf.in_text(t):
                jal.add(t)
        if w == 0x03E00008:
            j = i + 2
            while j < len(W) and W[j] == 0:
                j += 1
            if j < len(W):
                linear.add(elf.T0 + 4 * j)
        if is_prologue(w):
            prev = W[i - 1] if i else 0
            prev2 = W[i - 2] if i > 1 else 0
            if prev == 0 or prev2 == 0x03E00008 or prev2 >> 26 == 2 or (prev2 & 0xFC00003F) == 0x8:
                linear.add(pc)
    recomp, _ = recomp_functions(elf, seeds)
    recomp |= jal
    eh = {v for _, v in elf.section_words(".gcc_except_table") if elf.in_text(v)}
    dataptrs = set()
    for name in (".data", ".rodata", ".gcc_except_table"):
        dataptrs |= {v for _, v in elf.section_words(name) if elf.in_text(v)}
    jt = jump_tables(elf, None)
    caselabels = {t for v in jt.values() for t in v}
    stats["seeds(entries.txt)"] = len(seeds)
    stats["recomp_functions(entry+seeds+jal)"] = len(recomp)
    stats["ghidra_functions"] = len(ghidra)
    stats["jump_tables"] = len(jt)

    # ---- library matches
    sce_path = os.path.join(inp, "sce-matches.tsv")
    if args.sce_db:
        found = sce_scan(elf, args.sce_db)
        with open(sce_path, "w") as f:
            f.write("addr\tsize\tlibrary\tname\n")
            for a, (lib, name, size) in sorted(found.items()):
                f.write("%x\t%d\t%s\t%s\n" % (a, size, lib, name))
    sce_all = {}
    for row in read_tsv(sce_path):
        sce_all[int(row["addr"], 16)] = (row["library"], row["name"], int(row["size"]))
    # a match is trusted when another match of the same library with a different name sits within 8 KB,
    # or its name is unique (identical small bodies, e.g. eh_context_free, recur in unrelated code)
    by_lib = collections.defaultdict(list)
    for a, (lib, name, size) in sce_all.items():
        by_lib[lib].append(a)
    name_count = collections.Counter((lib, name) for lib, name, _ in sce_all.values())
    sce, sce_dropped = {}, {}
    for a, (lib, name, size) in sce_all.items():
        near = any(b != a and abs(b - a) < 0x2000 and sce_all[b][1] != name for b in by_lib[lib])
        if near or name_count[(lib, name)] == 1 and len(by_lib[lib]) > 1:
            sce[a] = (lib, name, size)
        else:
            sce_dropped[a] = (lib, name, size)
    stats["sce_matches"] = len(sce_all)
    stats["sce_matches_dropped_isolated"] = len(sce_dropped)

    # ---- eh_frame objects
    objs = eh_frames(elf)
    fde, fde_obj = {}, {}
    for k, ob in enumerate(objs):
        for loc, size, _ in ob:
            fde[loc] = size
            fde_obj[loc] = k
    stats["eh_frame_objects"] = len(objs)
    stats["eh_frame_fdes"] = len(fde)

    # ---- boundaries
    walker = Walker(elf, jt)
    starts, decision, owner, tailj = resolve_starts(elf, walker, ghidra, recomp, jal, linear, eh, dataptrs,
                                                    caselabels, set(sce), fde)
    ends, end_how = function_ends(elf, starts, owner, fde)
    idx = {s: k for k, s in enumerate(starts)}
    stats["functions"] = len(starts)
    stats["functions_with_fde"] = sum(1 for s in starts if s in fde)
    stats["ends_from_fde"] = end_how.count("fde")

    def containing(a):
        k = bisect.bisect_right(starts, a) - 1
        return starts[k] if k >= 0 and a < ends[k] else None

    # ---- call graph
    edges, nj = call_edges(elf, walker, starts, ends)
    callees = {s: set() for s in starts}
    callers = {s: set() for s in starts}
    cg = collections.OrderedDict()
    mid_targets = 0
    for s in starts:
        for tgt, kind, site in edges[s]:
            c = tgt if tgt in idx else containing(tgt)
            if c is None:
                continue
            if c != tgt:
                mid_targets += 1
            key = (s, c, kind)
            if key not in cg:
                cg[key] = [0, site, tgt if c != tgt else None]
            cg[key][0] += 1
            callees[s].add(c)
            callers[c].add(s)
    stats["call_edges(distinct caller,callee,kind)"] = len(cg)
    stats["call_targets_not_at_a_start"] = mid_targets
    stats["jalr_unresolved_sites"] = sum(nj.values())

    # ---- strings, source files, objects
    xrefs = string_xrefs(elf, starts, ends)
    obj_span = []
    for ob in objs:
        obj_span.append((min(l for l, _, _ in ob), max(l + z for l, z, _ in ob)))
    span_lo = [lo for lo, _ in obj_span]

    def obj_of(s):
        if s in fde_obj:
            return fde_obj[s]
        k = bisect.bisect_right(span_lo, s) - 1
        return k if k >= 0 and s < obj_span[k][1] else None

    fobj = {s: obj_of(s) for s in starts}
    anchors = {}
    headers = collections.defaultdict(set)
    for s in starts:
        paths = [p for _, p in xrefs.get(s, ()) if ASSERT_PATH.match(p)]
        impl = [p for p in paths if re.search(r"\.(cpp|c)$", p, re.I)]
        for p in paths:
            if p not in impl:
                headers[s].add(p)
        if impl:
            anchors[s] = collections.Counter(impl).most_common(1)[0][0]
    obj_src = {}
    for s, p in anchors.items():
        if fobj[s] is not None:
            obj_src.setdefault(fobj[s], collections.Counter())[p] += 1
    obj_source = {k: c.most_common(1)[0][0] for k, c in obj_src.items()}
    obj_conflicts = {k: c for k, c in obj_src.items() if len(c) > 1}

    source, module, module_how = {}, {}, {}
    for s in starts:
        if s in sce:
            lib = sce[s][0]
            module[s], module_how[s] = LIB_MODULE.get(lib, "sony"), "sce-db"
        o = fobj[s]
        if o is not None and o in obj_source:
            source[s] = obj_source[o]
        elif s in anchors:
            source[s] = anchors[s]
        if s not in module and s in source:
            module[s], module_how[s] = module_from_path(source[s]), "assert-path"

    def votes(fns, allowed=None):
        """Modules of the callers and callees of fns. Library callees say nothing (everyone calls memcpy)."""
        v = collections.Counter()
        for s in fns:
            for c in callees[s]:
                m = module.get(c)
                if m and m not in ("unknown", "libc", "sony") and (allowed is None or m in allowed):
                    v[m] += 1
            for c in callers[s]:
                m = module.get(c)
                if m and m != "unknown" and (allowed is None or m in allowed):
                    v[m] += 1
        return v

    # objects (eh_frame groups, i.e. translation units) without an assert path: link order puts them between
    # two attributed objects; same module on both sides -> that module, else the side the call graph favours
    obj_mod = {k: module_from_path(p) for k, p in obj_source.items()}
    obj_how = {}
    known = sorted(obj_mod)
    obj_fns = collections.defaultdict(list)
    for s in starts:
        if fobj[s] is not None:
            obj_fns[fobj[s]].append(s)
    for k in range(len(objs)):
        if k in obj_mod:
            continue
        lo = max((x for x in known if x < k), default=None)
        hi = min((x for x in known if x > k), default=None)
        sides = {obj_mod[x] for x in (lo, hi) if x is not None}
        if len(sides) == 1 and lo is not None and hi is not None:
            obj_mod[k], obj_how[k] = sides.pop(), "object-neighbours"
            continue
        v = votes(obj_fns[k], sides)
        best = v.most_common()
        if best and (len(best) == 1 or best[0][1] >= 2 * best[1][1]):
            obj_mod[k], obj_how[k] = best[0][0], "object-callgraph"
        elif len(sides) == 2 and all(m.startswith("paradox:") for m in sides):
            obj_mod[k], obj_how[k] = "paradox:unknown", "object-between-paradox"
    for s in starts:
        o = fobj[s]
        if s not in module and o is not None and o in obj_mod:
            module[s], module_how[s] = obj_mod[o], obj_how.get(o, "object")
    # functions outside eh_frame objects: library address ranges (inputs/module-ranges.json, with the evidence)
    ranges = json.load(open(os.path.join(inp, "module-ranges.json")))["ranges"]
    for s in starts:
        if s in module:
            continue
        for r in ranges:
            if int(r["from"], 16) <= s < int(r["to"], 16):
                module[s], module_how[s] = r["module"], "range"
                break
    # then call-graph majority (>= 2 votes, >= 2/3), a few rounds so it can spread
    eh_end = max(hi for _, hi in obj_span)
    for _ in range(3):
        add = {}
        for s in starts:
            if s in module:
                continue
            # past the last eh_frame object only the libraries built without eh_frame can live
            v = votes([s], None if s < eh_end else {"havok", "cri", "sony", "libc"})
            n = sum(v.values())
            if n >= 2 and v.most_common(1)[0][1] * 3 >= 2 * n:
                add[s] = v.most_common(1)[0][0]
        if not add:
            break
        for s, m in add.items():
            module[s], module_how[s] = m, "callgraph"
    # last: a short run (< 2 KB) of unattributed functions between two functions of the same module
    known_starts = [s for s in starts if s in module]
    for s in starts:
        if s in module:
            continue
        k = bisect.bisect_left(known_starts, s)
        a = known_starts[k - 1] if k > 0 else None
        b = known_starts[k] if k < len(known_starts) else None
        if a is not None and b is not None and module[a] == module[b] and b - ends[idx[a]] < 0x800:
            module[s], module_how[s] = module[a], "neighbours"
    for s in starts:
        if s not in module:
            module[s], module_how[s] = "unknown", "none"

    # ---- names
    claims = []  # (addr, name, source, confidence, detail)
    vs_hash = {}
    rs_path = os.path.join(inp, "public", "retail-symbols.json")
    if os.path.exists(rs_path):
        for e in json.load(open(rs_path))["symbols"]:
            if e.get("kind") == "function":
                vs_hash[e["retail"]] = (e["size"], e.get("retail_body_sha256"))
    for row in read_tsv(os.path.join(inp, "public", "verified-symbols.tsv")):
        if row["kind"] != "function":
            continue
        a = int(row["retail"], 16)
        size, h = vs_hash.get(a, (int(row["size"]), None))
        ok = h is None or hashlib.sha256(bytes(elf.data[a - elf.T0 + elf.secs[".text"]["off"]:
                                                        a - elf.T0 + elf.secs[".text"]["off"] + size])).hexdigest() == h
        claims.append((a, row["name"], "verified-symbols", "exact" if ok else "exact(body-differs-from-retail)", ""))
    for a, (lib, name, size) in sce.items():
        claims.append((a, name, "sce-db", "exact", lib))
    for row in read_tsv(os.path.join(inp, "notes-names.tsv")):
        if row["kind"] == "func":
            claims.append((int(row["addr"], 16), row["name"], "notes", row["confidence"], row["source"]))
    for fname in ("reversing-symbol-candidates.json", "bloom-candidates.json"):
        path = os.path.join(inp, "public", fname)
        if not os.path.exists(path):
            continue
        data = json.load(open(path))
        rows = data["candidates"] if isinstance(data, dict) else data
        for e in rows:
            cands = e.get("retail_candidates") or ([int(e["retail_candidate"], 16)] if "retail_candidate" in e else [])
            if len(cands) == 1 and cands[0] in idx and ends[idx[cands[0]]] - cands[0] == e["size"]:
                claims.append((cands[0], e["name"].split("(")[0], "proto-candidate", "candidate", fname))
    sysnames = json.load(open(os.path.join(ROOT, "mksm/tools/scripts/ee_syscall_names.json")))
    for s, e in zip(starts, ends):
        if e - s <= 16:
            ws = [elf.w(a) for a in range(s, e, 4)]
            if len(ws) >= 3 and ws[0] >> 16 == 0x2403 and ws[1] == 0x0000000C and ws[2] == 0x03E00008:
                num = ((ws[0] & 0xFFFF) ^ 0x8000) - 0x8000
                n = sysnames.get(str(abs(num)))  # negative numbers are the interrupt-context entry points
                if n:
                    claims.append((s, n, "syscall", "exact", "syscall %d" % num))
    derived = collections.defaultdict(collections.Counter)
    for s in starts:
        for _, text in xrefs.get(s, ()):
            for n in names_from_string(text):
                derived[s][n] += 1
    owners_of = collections.defaultdict(set)
    for s, c in derived.items():
        for n in c:
            owners_of[n].add(s)
    for s, c in derived.items():
        best = c.most_common()
        if len(best) > 1 and best[0][1] == best[1][1]:
            continue
        n = best[0][0]
        if len(owners_of[n]) == 1:
            claims.append((s, n, "string-xref", "derived", ""))

    rank = {"verified-symbols": 0, "sce-db": 1, "notes": 2, "syscall": 3, "proto-candidate": 4, "string-xref": 5}
    conf_rank = {"named": 0, "exact": 0, "role": 1}
    chosen = {}
    for c in sorted(claims, key=lambda c: (c[0], rank[c[2]], conf_rank.get(c[3], 2))):
        if c[0] in idx and c[0] not in chosen:
            chosen[c[0]] = c
    dup = collections.Counter(c[1] for c in chosen.values())
    final_name = {}
    for s in starts:
        if s in chosen:
            n = re.sub(r"[^A-Za-z0-9_:~$.]", "_", chosen[s][1])
            final_name[s] = n + "_%x" % s if dup[chosen[s][1]] > 1 else n
        else:
            final_name[s] = "fn_%06x" % s

    # ---- write
    os.makedirs(args.out, exist_ok=True)
    with open(os.path.join(args.out, "functions.tsv"), "w") as f:
        f.write("addr\tend\tsize\tname\tname_source\tmodule\tsource_file\tleaf\tn_callees\tn_callers\trecomp_unit"
                "\tname_confidence\tstart_evidence\tend_source\tobject\tmodule_source\tn_jalr_unresolved\n")
        for s, e, how in zip(starts, ends, end_how):
            c = chosen.get(s)
            leaf = int(not edges[s] and not nj[s])
            src = source.get(s, "")
            src = re.sub(r"^c:[/\\]Projects[/\\]", "", src, flags=re.I)
            f.write("%06x\t%06x\t%d\t%s\t%s\t%s\t%s\t%d\t%d\t%d\tunit_%04X\t%s\t%s\t%s\t%s\t%s\t%d\n" % (
                s, e, e - s, final_name[s], c[2] if c else "none", module[s], src, leaf, len(callees[s]),
                len(callers[s]), (s - UNIT_BASE) // UNIT_SIZE, c[3] if c else "", decision[s][1].split(":", 1)[1],
                how, fobj[s] if fobj[s] is not None else "", module_how[s], nj[s]))
    with open(os.path.join(args.out, "callgraph.tsv"), "w") as f:
        f.write("caller\tcallee\tkind\tcount\tfirst_site\ttarget_if_not_start\n")
        for (a, b, kind), (n, site, tgt) in sorted(cg.items()):
            f.write("%06x\t%06x\t%s\t%d\t%06x\t%s\n" % (a, b, kind, n, site, "%06x" % tgt if tgt else ""))
    with open(os.path.join(args.out, "boundaries.tsv"), "w") as f:
        f.write("addr\taccepted\treason\tevidence\n")
        for a in sorted(decision):
            ok, why = decision[a]
            kind, ev = why.split(":", 1)
            f.write("%06x\t%d\t%s\t%s\n" % (a, ok, kind, ev))
    with open(os.path.join(args.out, "names.tsv"), "w") as f:
        f.write("addr\tname\tsource\tconfidence\tused\tdetail\n")
        for c in sorted(claims, key=lambda c: (c[0], rank[c[2]])):
            used = "yes" if chosen.get(c[0]) == c else ("not-a-start" if c[0] not in idx else "no")
            f.write("%06x\t%s\t%s\t%s\t%s\t%s\n" % (c[0], c[1], c[2], c[3], used, c[4]))

    # ---- stats
    stats["functions_named"] = sum(1 for s in starts if s in chosen)
    stats["named_by_source"] = dict(collections.Counter(chosen[s][2] for s in starts if s in chosen))
    stats["module_counts"] = dict(sorted(collections.Counter(module.values()).items()))
    stats["module_source_counts"] = dict(collections.Counter(h.split(":")[0] for h in module_how.values()))
    stats["functions_with_source_file"] = len(source)
    stats["assert_anchored_functions"] = len(anchors)
    stats["objects_with_source"] = len(obj_source)
    stats["objects_with_conflicting_sources"] = {str(k): dict(v) for k, v in obj_conflicts.items()}
    stats["start_decisions"] = dict(collections.Counter(
        ("accepted:" if ok else "rejected:") + why.split(":")[0].split("(")[0] for ok, why in decision.values()))
    stats["leaf_functions"] = sum(1 for s in starts if not edges[s] and not nj[s])
    stats["sce_dropped"] = {"%x" % a: "%s:%s" % (l, n) for a, (l, n, _) in sorted(sce_dropped.items())}
    stats["fde_overlaps_next_start"] = ["%x" % s for s, h in zip(starts, end_how) if h != "fde" and s in fde]
    stats["starts_inside_fde_range"] = ["%x" % a for a in starts
                                        if (lambda k: k >= 0 and a < starts[k] + fde.get(starts[k], 0))(idx[a] - 1)]
    json.dump(stats, open(os.path.join(args.out, "stats.json"), "w"), indent=1)
    for k, v in stats.items():
        if not isinstance(v, (dict, list)) or len(v) < 20:
            print("%-42s %s" % (k, v))


def read_tsv(path):
    with open(path) as f:
        head = f.readline().rstrip("\n").split("\t")
        return [dict(zip(head, line.rstrip("\n").split("\t"))) for line in f if line.strip()]


if __name__ == "__main__":
    main()
