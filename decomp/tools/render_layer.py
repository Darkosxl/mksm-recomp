#!/usr/bin/env python3
"""Render-layer report for the MK:SM decomp (stdlib only). Run build_map.py first.

usage: python3 -I decomp/tools/render_layer.py [--elf games/mksm/disc/SLUS_210.87] [--map decomp/map]

Reads <map>/functions.tsv and <map>/callgraph.tsv, scans the ELF for VIFcode/DMAtag/DMAC-register constants in
0x211000-0x276000 and writes <map>/render-layer.tsv (one row per function, bottom-up order, with the features)
and <map>/render-layer.md (the report; hand-written commentary lives in this file's TEXT_* blocks).
"""
import argparse
import collections
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
import build_map as B  # noqa: E402  (same directory; -I drops the script directory from sys.path)

LO, HI = 0x211000, 0x276000
DRAW_SITE = 0x241C88
VIF = {0x14: "MSCAL", 0x15: "MSCALF", 0x17: "MSCNT", 0x11: "FLUSH", 0x13: "FLUSHA", 0x4A: "MPG",
       0x50: "DIRECT", 0x51: "DIRECTHL", 0x20: "STMASK", 0x30: "STROW", 0x31: "STCOL"}
VIF_SMALL = {0x01: "STCYCL", 0x02: "OFFSET", 0x03: "BASE", 0x04: "ITOP", 0x05: "STMOD", 0x06: "MSKPATH3",
             0x07: "MARK"}
DMAC = [(0x8000, 0x8100, "D0(VIF0)"), (0x9000, 0x9100, "D1(VIF1)"), (0xA000, 0xA100, "D2(GIF)"),
        (0xB000, 0xB100, "D3(fromIPU)"), (0xB400, 0xB500, "D4(toIPU)"), (0xD000, 0xD100, "D8(fromSPR)"),
        (0xD400, 0xD500, "D9(toSPR)"), (0xE000, 0xE100, "D_CTRL/STAT/PCR"), (0x3800, 0x3900, "VIF0 regs"),
        (0x3C00, 0x3D00, "VIF1 regs"), (0x3000, 0x3100, "GIF regs"), (0x4000, 0x5000, "VIF0 FIFO"),
        (0x5000, 0x6000, "VIF1 FIFO"), (0x6000, 0x7000, "GIF FIFO")]
DATA_LO, DATA_HI = 0x4A6180, 0x780898


def features(elf, s, e):
    """Constants and instruction classes in [s, e)."""
    f = collections.Counter()
    tags = collections.Counter()
    regs = set()
    for pc in range(s, e, 4):
        w = elf.w(pc)
        op, rs, rt, imm = w >> 26, (w >> 21) & 31, (w >> 16) & 31, w & 0xFFFF
        if op == 0x1F:
            f["sq"] += 1
        elif op == 0x1E:
            f["lq"] += 1
        elif op == 0x12 and rs >= 0x10:
            f["vu0"] += 1
        elif op == 0x36 or op == 0x3E:
            f["vu0"] += 1  # lqc2 / sqc2
        elif op == 0x2B and rt == 0 or op == 0x3F:
            pass
        if op != 0x0F:
            continue
        hi8 = imm >> 8
        if imm in (0x6000, 0x7000):
            pass  # num=0 UNPACK is 256 qwords; read these as DMA ret/end tags below
        elif 0x60 <= hi8 <= 0x7F:
            tags["UNPACK"] += 1
        elif hi8 in VIF:
            tags[VIF[hi8]] += 1
        elif hi8 in VIF_SMALL and imm & 0xFF == 0 and hi8 != 0:
            tags["vif:" + VIF_SMALL[hi8]] += 1
        if imm in (0x3000, 0x2000, 0x7000, 0x4000, 0x6000):
            tags["dmatag:" + {0x2000: "next", 0x3000: "ref", 0x4000: "refs", 0x6000: "ret", 0x7000: "end"}[imm]] += 1
        if imm == 0x1000 or imm == 0x1200:
            for k in range(1, 8):
                if pc + 4 * k >= e:
                    break
                v = elf.w(pc + 4 * k)
                if (v >> 26) in (0x0D, 0x09) and (v >> 21) & 31 == rt:
                    lo = v & 0xFFFF
                    if imm == 0x1200:
                        regs.add("GS priv %04x" % lo)
                    else:
                        for a, b, n in DMAC:
                            if a <= lo < b:
                                regs.add(n)
                    break
        if 0x004A <= imm <= 0x0078:
            f["global_refs"] += 1
    return f, tags, regs


def sccs(nodes, succ):
    """Tarjan, iterative. Returns list of SCCs (each a list), in reverse topological order (sinks first)."""
    index, low, on, stack, out = {}, {}, set(), [], []
    counter = [0]
    for root in nodes:
        if root in index:
            continue
        work = [(root, iter(succ[root]))]
        index[root] = low[root] = counter[0]
        counter[0] += 1
        stack.append(root)
        on.add(root)
        while work:
            v, it = work[-1]
            pushed = False
            for w in it:
                if w not in index:
                    index[w] = low[w] = counter[0]
                    counter[0] += 1
                    stack.append(w)
                    on.add(w)
                    work.append((w, iter(succ[w])))
                    pushed = True
                    break
                if w in on:
                    low[v] = min(low[v], index[w])
            if pushed:
                continue
            work.pop()
            if work:
                low[work[-1][0]] = min(low[work[-1][0]], low[v])
            if low[v] == index[v]:
                comp = []
                while True:
                    x = stack.pop()
                    on.discard(x)
                    comp.append(x)
                    if x == v:
                        break
                out.append(comp)
    return out


def io_shape(elf, s, e):
    """Which argument registers are read before written, and whether v0/f0 is set: a rough signature."""
    written, args, ret = set(), set(), False
    for pc in range(s, e, 4):
        w = elf.w(pc)
        op, rs, rt, rd = w >> 26, (w >> 21) & 31, (w >> 16) & 31, (w >> 11) & 31
        reads = {rs}
        if op in (0, 0x1C) or op in (4, 5) or op >= 0x28:
            reads.add(rt)
        for r in reads:
            if 4 <= r <= 7 and r not in written:
                args.add("a%d" % (r - 4))
        if op == 0x11:  # cop1: fs/ft reads
            fs, ft = (w >> 11) & 31, (w >> 16) & 31
            for r in (fs, ft):
                if r in (12, 13, 14, 15) and ("f%d" % r) not in written:
                    args.add("f%d" % r)
            if rs in (0x10, 0x14) and (w >> 6) & 31 == 0:
                ret = True
            written.add("f%d" % ((w >> 6) & 31))
        dst = rd if op in (0, 0x1C) else rt if op not in (0x28, 0x29, 0x2B, 0x3F, 0x1F, 0x2C, 0x2D, 0x2E, 0x39,
                                                           0x3D, 0x04, 0x05, 0x01, 0x06, 0x07, 0x02, 0x03) else None
        if dst is not None:
            written.add(dst)
            if dst in (2, 3):
                ret = True
    return sorted(args), ret


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--elf", default=os.path.join(B.ROOT, "games/mksm/disc/SLUS_210.87"))
    ap.add_argument("--map", default=os.path.join(B.ROOT, "decomp/map"))
    args = ap.parse_args()
    elf = B.Elf(args.elf)
    F = {int(r["addr"], 16): r for r in B.read_tsv(os.path.join(args.map, "functions.tsv"))}
    starts = sorted(F)
    calls = collections.defaultdict(list)
    callers = collections.defaultdict(list)
    for r in B.read_tsv(os.path.join(args.map, "callgraph.tsv")):
        a, b = int(r["caller"], 16), int(r["callee"], 16)
        calls[a].append((b, r["kind"], int(r["count"])))
        callers[b].append((a, r["kind"], int(r["count"])))
    layer = [s for s in starts if LO <= s < HI]
    inl = set(layer)
    succ = {s: sorted({b for b, _, _ in calls[s] if b in inl and b != s}) for s in layer}
    comps = sccs(layer, succ)
    comp_of = {x: k for k, c in enumerate(comps) for x in c}
    level = {}
    for k, c in enumerate(comps):  # sinks first, so every callee's component is already levelled
        lv = 0
        for x in c:
            for b in succ[x]:
                if comp_of[b] != k:
                    lv = max(lv, level[comp_of[b]] + 1)
        level[k] = lv
    order = sorted(layer, key=lambda s: (level[comp_of[s]], s))

    feat = {}
    for s in layer:
        e = int(F[s]["end"], 16)
        feat[s] = features(elf, s, e)

    def nm(a):
        return F[a]["name"] if a in F else "%x" % a

    # ---- tsv
    with open(os.path.join(args.map, "render-layer.tsv"), "w") as f:
        f.write("order\tlevel\taddr\tsize\tname\tleaf\tn_callers\tcallees_in_layer\tcallees_outside\tsource_file"
                "\tvif_gif_dma\tdmac_regs\tsq\tvu0\tglobal_refs\tscc\n")
        for k, s in enumerate(order):
            r = F[s]
            fc, tags, regs = feat[s]
            out = sorted({b for b, _, _ in calls[s] if b not in inl})
            f.write("%d\t%d\t%06x\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%d\t%d\t%d\t%s\n" % (
                k, level[comp_of[s]], s, r["size"], r["name"], r["leaf"], r["n_callers"],
                ",".join("%06x" % b for b in succ[s]), ",".join(nm(b) for b in out), r["source_file"],
                ",".join("%s=%d" % kv for kv in sorted(tags.items())), ",".join(sorted(regs)), fc["sq"], fc["vu0"],
                fc["global_refs"], len(comps[comp_of[s]]) if len(comps[comp_of[s]]) > 1 else ""))

    # ---- report
    md = []
    w = md.append
    w(TEXT_HEAD.format(n=len(layer), lo=LO, hi=HI, levels=max(level.values()) + 1,
                       leaves=sum(1 for s in layer if not succ[s]),
                       cyc=sum(1 for c in comps if len(c) > 1)))
    # draw chain
    site_fn = max(s for s in starts if s <= DRAW_SITE)
    r = F[site_fn]
    w("## 1. The VU1 draw site 0x241c88\n")
    w(TEXT_DRAW.format(fn="%06x" % site_fn, name=r["name"], end=r["end"], size=r["size"], src=r["source_file"]))
    for src in (0x1D73C8,):  # GameLoop (MKSMHook name, see inputs/notes-names.tsv)
        prev, queue = {src: None}, collections.deque([src])
        while queue:
            x = queue.popleft()
            for b, _, _ in calls[x]:
                if b not in prev:
                    prev[b] = x
                    queue.append(b)
        if site_fn in prev:
            chain = [site_fn]
            while prev[chain[-1]] is not None:
                chain.append(prev[chain[-1]])
            w("Shortest direct-call path from the game loop: " +
              " → ".join("`%06x` %s" % (x, nm(x)) for x in reversed(chain)) + "\n")
    w("Callees of %s (%d distinct; kind, call count):\n" % (r["name"], len(calls[site_fn])))
    w("| callee | name | module | size | kind | calls |\n|---|---|---|---|---|---|")
    for b, kind, n in sorted(calls[site_fn]):
        w("| %06x | %s | %s | %s | %s | %d |" % (b, nm(b), F[b]["module"], F[b]["size"], kind, n))
    w("\nCallers of %s (%d):\n" % (r["name"], len(callers[site_fn])))
    w("| caller | name | module | callers of the caller |\n|---|---|---|---|")
    for a, kind, n in sorted(callers[site_fn]):
        up = sorted({x for x, _, _ in callers[a]})
        w("| %06x | %s | %s | %s |" % (a, nm(a), F[a]["module"],
                                       ", ".join("%06x %s" % (x, nm(x)) for x in up[:4]) + (" …" if len(up) > 4 else "")))
    w("")
    # other render entry points from the notes
    w(TEXT_OTHER_SITES)
    w("| site | in function | name | size | module | source |\n|---|---|---|---|---|---|")
    for site, what in OTHER_SITES:
        fn = max(s for s in starts if s <= site)
        rr = F[fn]
        w("| %06x %s | %06x | %s | %s | %s | %s |" % (site, what, fn, rr["name"], rr["size"], rr["module"],
                                                    rr["source_file"]))
    w("")
    # DMA chain builders
    w("## 2. Functions that build VIF/GIF/DMA chains\n")
    w(TEXT_DMA)
    scored = []
    for s in layer:
        fc, tags, regs = feat[s]
        vif = sum(n for t, n in tags.items() if not t.startswith(("dmatag", "vif:")))
        dtag = sum(n for t, n in tags.items() if t.startswith("dmatag"))
        pk = [nm(b) for b, _, _ in calls[s] if nm(b).startswith(("sceVif1Pk", "sceGifPk", "sceDmaSend", "sceGsExec",
                                                               "sceGsPut", "sceDmaSync"))]
        score = vif * 2 + dtag + 3 * len(regs) + 2 * len(pk) + (1 if fc["sq"] >= 8 else 0)
        if score >= 3:
            scored.append((score, s, tags, regs, pk, fc))
    scored.sort(key=lambda x: (-x[0], x[1]))
    w("| addr | name | size | level | VIF/DMA-tag constants | DMAC/GS registers | packet-lib calls | sq | src |")
    w("|---|---|---|---|---|---|---|---|---|")
    for score, s, tags, regs, pk, fc in scored:
        w("| %06x | %s | %s | %d | %s | %s | %s | %d | %s |" % (
            s, F[s]["name"], F[s]["size"], level[comp_of[s]], " ".join("%s×%d" % kv for kv in sorted(tags.items())),
            ", ".join(sorted(regs)), ", ".join(sorted(set(pk))), fc["sq"],
            os.path.basename(F[s]["source_file"]) if F[s]["source_file"] else ""))
    w("")
    # first batch
    w("## 3. Suggested first batch (leaf functions)\n")
    w(TEXT_BATCH)
    cands = []
    for s in layer:
        r = F[s]
        size = int(r["size"])
        fc, tags, regs = feat[s]
        if r["leaf"] != "1" or not 16 <= size <= 192 or regs or tags:
            continue
        ncall = int(r["n_callers"])
        if ncall < 2 or fc["global_refs"] > 1:
            continue
        a, ret = io_shape(elf, s, int(r["end"], 16))
        if not a:
            continue
        stores_out = sum(1 for pc in range(s, int(r["end"], 16), 4)
                         if (elf.w(pc) >> 26) in (0x2B, 0x3F, 0x1F, 0x39, 0x29, 0x28) and 4 <= (elf.w(pc) >> 21) & 31 <= 7)
        if not ret and not stores_out:
            continue
        score = ncall * 8 / (size ** 0.5) - 4 * fc["global_refs"]
        cands.append((score, s, a, ret, stores_out, fc))
    cands.sort(key=lambda x: (-x[0], x[1]))
    batch = sorted(cands[:30], key=lambda x: x[1])
    w("| # | addr | name | size | callers | inputs | output | VU0 ops | source | first look |")
    w("|---|---|---|---|---|---|---|---|---|---|")
    for k, (score, s, a, ret, so, fc) in enumerate(batch, 1):
        out = []
        if ret:
            out.append("return value")
        if so:
            out.append("%d store(s) through args" % so)
        w("| %d | %06x | %s | %s | %s | %s | %s | %d | %s | %s |" % (
            k, s, F[s]["name"], F[s]["size"], F[s]["n_callers"], " ".join(a), ", ".join(out), fc["vu0"],
            os.path.basename(F[s]["source_file"]) if F[s]["source_file"] else "", BATCH_DESC.get(s, "")))
    w("")
    w(TEXT_BATCH_NOTES)
    # full order
    w("## 4. All %d functions, leaves first\n" % len(layer))
    w(TEXT_ORDER)
    w("```")
    w("ord  lvl  addr    size  name                          callers  in-layer callees")
    for k, s in enumerate(order):
        r = F[s]
        cs = " ".join("%06x" % b for b in succ[s][:6]) + (" …" if len(succ[s]) > 6 else "")
        scc = " [cycle of %d]" % len(comps[comp_of[s]]) if len(comps[comp_of[s]]) > 1 else ""
        w("%4d %4d  %06x %5s  %-30s %5s  %s%s" % (k, level[comp_of[s]], s, r["size"], r["name"][:30], r["n_callers"],
                                                cs, scc))
    w("```\n")
    open(os.path.join(args.map, "render-layer.md"), "w").write("\n".join(md) + "\n")
    print("layer functions %d, levels %d, dma builders %d, batch %d" % (len(layer), max(level.values()) + 1,
                                                                          len(scored), len(batch)))


# one-line readings of the disassembly, written by hand for the current batch (unverified: confirm when decompiling)
BATCH_DESC = {
    0x2124C0: "FileIODrv: entry a1 of file table a0 (packed 64-bit or plain form) -> start in *a2, size in *a3",
    0x213C78: "matrix a0 translation row (+0x30) = vec3 a1",
    0x213C98: "vec3 a0 = matrix a1 translation row (+0x30)",
    0x213E08: "sceVu0InnerProduct: xyz dot product of two vec4, returns float",
    0x213E88: "sceVu0TransposeMatrix: 4x4 transpose with MMI",
    0x214058: "inverse of a rigid 4x4: transposed 3x3, translation -R^T t (as sceVu0InversMatrix)",
    0x214658: "a0 = matrix a1 with translation + vec a2 (as sceVu0TransMatrix)",
    0x214688: "128-bit copy *a0 = *a1 (as sceVu0CopyVector)",
    0x21F618: "SyncMemCard: a0->+8 = 1, returns 1",
    0x225FC0: "setter: global 0x4f4c58 = a0",
    0x226B70: "global 0x4f4c54 = (int)(f12 * 32)",
    0x226DF0: "setter: global 0x4f4d60 = a0",
    0x24C238: "radians f12 -> 12-bit angle (4096 per turn) wrapped to [-2048, 2048)",
    0x260B40: "field +4 of 12-byte record (a0 & 0xffff) in the table at 0x66b8d0",
    0x2655C0: "4-bit outcode of a point against a rectangle (clip test)",
    0x26CD50: "TextureManager: size/format class of texture record a1, kept in +0x10 and returned",
    0x26D2E8: "texture slot a1 (0x430-byte records at a0->+0x20): returns field +0x230",
    0x26D308: "texture slot a1: returns field +0x238",
    0x26D590: "texture slot a1 of a0, NULL when a1 >= 321",
    0x26DD90: "texture slot a1: flag bits in +0x16, a2 into +0x246",
    0x26DDD0: "texture slot a1: flag bits in +0x16, a2 into +0x246 (variant)",
    0x26DE10: "texture slot a1: flag bits in +0x16, a2 into +0x246 (variant)",
    0x26DE50: "texture slot a1: +0x246 if flag 0x8 of +0x16 is set, else -1",
    0x26DE88: "texture slot a1: field read guarded by a +0x16 flag, else -1",
    0x26DEC0: "texture slot a1: field read guarded by a +0x16 flag, else -1",
    0x26DF80: "texture slot a1: float4 f12-f15 into +0x180",
    0x26F068: "File.cpp: global 0x4fadf0 = a1",
    0x273C38: "clears the state block at 0x678920 when a0 != 0 and a1 != 0xffff",
    0x275260: "a0->+0x2a or +0x2c, chosen by a0->+0, a0->+4 and global 0x4f4d68",
    0x2752B0: "a0->+0x2a or +0x2c, the opposite choice of 0x275260",
}

OTHER_SITES = [(0x37E578, "HUD, GIF path 3"), (0x275194, "clear"), (0x272CCC, "movie sprite"),
               (0x236AE0, "frustum test"), (0x249E38, "projection")]

TEXT_HEAD = """# Render layer: 0x{lo:06x}-0x{hi:06x}

Generated by `decomp/tools/render_layer.py` from `functions.tsv` and `callgraph.tsv`. The same data, one row per
function with every column, is in `render-layer.tsv`.

The range holds {n} functions: the Ps2 platform layer and renderer (ps2render.cpp, ps2Setup.cpp, meshdraw.cpp,
TextureManager.cpp, BoneDetach.cpp, ScreenCopy.cpp, the Cri wrappers, Sony's shellPad.c, util memory/file I/O
at the low end). Bottom-up order has {levels} levels; {leaves} functions call nothing else inside the range, and
{cyc} groups of functions call each other in a cycle (they share a level).
"""

TEXT_DRAW = """`0x241c88` is inside **{name}** (`0x{fn}`-`0x{end}`, {size} bytes, {src}). It is not a `jal`: it is the
instruction right after `jal FlushCache(0)` at `0x241c80`, i.e. the return address the runtime records as the
"EE call site" for the VIF1 kick. The kick itself is inline, a few instructions later:

```
241c80  jal   FlushCache            ; a0 = 0: write the D-cache back before DMA
241c88  lui   v0, 0x66              ; <- recorded site; 0x65e300 describes the frame's chain (a1 = its start)
...
241cc4  sw    s0, 0x1000e020        ; D_PCR  = 2 (s0 = 2 was checked at 0x241c50)
241cd8  sw    a0, 0x10009030        ; D1_TADR = chain start & 0x0fffffff
241ce4  sw    s0, 0x1000e010        ; D_STAT = 2 (clears channel 1's interrupt status)
241cf0  sw    0x145, 0x10009000     ; D1_CHCR = 0x145: from memory, chain mode, TTE, STR -> VIF1
```

So this function is the per-frame "submit the VIF1 chain" step, not a per-object draw; every VU1 primitive of the
frame goes out through this one kick. It also flips the GS fields (`Gs_FlipFields`) and runs the post-FX pass
(`anti_alias_or_blur`), and is reached from the front end, pause/save menus and the in-game frame code.
"""

TEXT_OTHER_SITES = """### Other draw paths named in the notes

The other EE sites from `mksm/notes/remaster.md` and where they sit. A site is an instruction address inside the
function, not the function start:
"""

TEXT_DMA = """Found by scanning each function for immediate values that build VIFcodes (`lui` with the command byte:
UNPACK 0x60-0x7f, MSCAL 0x14, DIRECT 0x50, MPG 0x4a, FLUSH/FLUSHA 0x11/0x13, STROW/STCOL/STMASK, and the small
STCYCL/BASE/OFFSET/ITOP/STMOD codes), DMAtag ids (`lui 0x2000/0x3000/0x4000/0x7000` = next/ref/refs/end), writes
to DMAC or GS registers (`lui 0x1000/0x1200` + offset), calls into Sony's packet library (sceVif1Pk*, sceGifPk*,
sceDmaSend) and heavy `sq` use. Each hit is a hint, not a proof: `lui 0x5000` is both DIRECT and a DMA `call`
tag, and some constants are floats. Sorted by score (2 per VIF constant, 1 per DMA tag, 3 per register block,
2 per packet-lib call).
"""

TEXT_BATCH = """Picked automatically, then sorted by address: leaf functions (no calls at all) in the range, 16-192 bytes, called
from at least two places, no DMAC/GS register access and no VIF constants, at most one global reference, that read
at least one argument register and either return a value or store through an argument pointer. Ranked by
callers / sqrt(size). These can be rewritten as plain C++ and checked against their recompiled twins with
argument fuzzing, without any GS or DMA state.
"""

TEXT_BATCH_NOTES = """"inputs" are the argument registers read before being written (a0-a3 integer, f12-f15 float); VU0 ops counts
COP2 macro instructions and lqc2/sqc2, which mean 128-bit vector math (sceVu0-style) and need the vector types
in the decomp headers first.
"""

TEXT_ORDER = """Level 0 calls nothing inside the range (it may still call libc/Sony/Paradox functions outside it); level n
calls only functions of lower levels. Within a level, by address. Decompiling in this order means every in-layer
callee already has clean C++ when its caller is done.
"""

if __name__ == "__main__":
    main()
