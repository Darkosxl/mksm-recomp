#!/usr/bin/env python3
"""Scan a PS2 EE ELF for IPU register / FIFO / IPU-DMA accesses (stdlib only).

usage: python3 -I ipu_scan.py <SLUS_210.87> [--window N] [--json out.json]

Finds `lui rX,0x1000|0x1001|0xb000|0xb001` (+ addiu/ori/daddiu derivations) and the
loads/stores (lb..ld, lq/sq, lwc1/swc1) that hit:
  IPU_CMD 0x10002000  IPU_CTRL 0x10002010  IPU_BP 0x10002020  IPU_TOP 0x10002030
  IPU_out_FIFO 0x10007000  IPU_in_FIFO 0x10007010
  D3 (IPU_FROM) 0x1000b000..0x1000b030   D4 (IPU_TO) 0x1000b400..0x1000b430
  D_CTRL/D_STAT/D_PCR 0x1000e000..0x1000e020, INTC 0x1000f000/0x1000f010
For every store to IPU_CMD / IPU_CTRL it walks backwards to recover the stored
value (lui/ori/addiu/or/sll chains) and decodes it as an IPU command.
Also reports 32-bit words in .data/.rodata equal to those addresses (libdma tables).
"""
import json
import struct
import sys

REGS = {
    0x10002000: "IPU_CMD", 0x10002010: "IPU_CTRL", 0x10002020: "IPU_BP", 0x10002030: "IPU_TOP",
    0x10007000: "IPU_OUT_FIFO", 0x10007010: "IPU_IN_FIFO",
    0x1000b000: "D3_CHCR", 0x1000b010: "D3_MADR", 0x1000b020: "D3_QWC",
    0x1000b400: "D4_CHCR", 0x1000b410: "D4_MADR", 0x1000b420: "D4_QWC", 0x1000b430: "D4_TADR",
    0x1000e000: "D_CTRL", 0x1000e010: "D_STAT", 0x1000e020: "D_PCR",
    0x1000f000: "INTC_STAT", 0x1000f010: "INTC_MASK",
}
CMDS = ["BCLR", "IDEC", "BDEC", "VDEC", "FDEC", "SETIQ", "SETVQ", "CSC", "PACK", "SETTH",
        "?A", "?B", "?C", "?D", "?E", "?F"]
LOADS = {0x20: "lb", 0x21: "lh", 0x23: "lw", 0x24: "lbu", 0x25: "lhu", 0x27: "lwu", 0x37: "ld",
         0x1e: "lq", 0x31: "lwc1"}
STORES = {0x28: "sb", 0x29: "sh", 0x2b: "sw", 0x3f: "sd", 0x1f: "sq", 0x39: "swc1"}
RN = ["zero", "at", "v0", "v1", "a0", "a1", "a2", "a3", "t0", "t1", "t2", "t3", "t4", "t5", "t6",
      "t7", "s0", "s1", "s2", "s3", "s4", "s5", "s6", "s7", "t8", "t9", "k0", "k1", "gp", "sp",
      "fp", "ra"]


def sx16(v):
    return v - 0x10000 if v & 0x8000 else v


def decode_cmd(v):
    c = (v >> 28) & 0xF
    n = CMDS[c]
    o = []
    if c == 1:  # IDEC
        o = ["FB=%d" % (v & 0x3f), "QSC=%d" % ((v >> 16) & 0x1f), "DTD=%d" % ((v >> 24) & 1),
             "SGN=%d" % ((v >> 25) & 1), "DTE=%d" % ((v >> 26) & 1), "OFM=%d" % ((v >> 27) & 1)]
    elif c == 2:  # BDEC
        o = ["FB=%d" % (v & 0x3f), "QSC=%d" % ((v >> 16) & 0x1f), "DT=%d" % ((v >> 25) & 1),
             "DCR=%d" % ((v >> 26) & 1), "MBI=%d" % ((v >> 27) & 1)]
    elif c == 3:  # VDEC
        o = ["FB=%d" % (v & 0x3f), "TBL=%d" % ((v >> 26) & 3)]
    elif c == 4:  # FDEC
        o = ["FB=%d" % (v & 0x3f)]
    elif c in (5,):
        o = ["FB=%d" % (v & 0x3f), "IQM=%d" % ((v >> 27) & 1)]
    elif c == 7:  # CSC
        o = ["MBC=%d" % (v & 0x7ff), "DTE=%d" % ((v >> 26) & 1), "OFM=%d(%s)" % ((v >> 27) & 1, "RGB16" if (v >> 27) & 1 else "RGB32")]
    elif c == 8:  # PACK
        o = ["MBC=%d" % (v & 0x7ff), "DTE=%d" % ((v >> 26) & 1), "OFM=%d(%s)" % ((v >> 27) & 1, "RGB16" if (v >> 27) & 1 else "INDX4")]
    elif c == 9:
        o = ["TH0=%#x" % (v & 0x1ff), "TH1=%#x" % ((v >> 16) & 0x1ff)]
    elif c == 0:
        o = ["FB=%d" % (v & 0x3f)]
    return n + "(" + ",".join(o) + ")"


def decode_ctrl(v):
    return ("IDP=%d AS=%d IVF=%d QST=%d MP1=%d PCT=%d RST=%d" %
            ((v >> 16) & 3, (v >> 20) & 1, (v >> 21) & 1, (v >> 22) & 1, (v >> 23) & 1,
             (v >> 24) & 7, (v >> 30) & 1))


def main():
    path = sys.argv[1]
    window = 96
    jout = None
    if "--window" in sys.argv:
        window = int(sys.argv[sys.argv.index("--window") + 1])
    if "--json" in sys.argv:
        jout = sys.argv[sys.argv.index("--json") + 1]
    d = open(path, "rb").read()
    shoff, = struct.unpack_from("<I", d, 0x20)
    shnum, shstrndx = struct.unpack_from("<HH", d, 0x30)
    sh = [struct.unpack_from("<10I", d, shoff + i * 40) for i in range(shnum)]
    st = d[sh[shstrndx][4]:sh[shstrndx][4] + sh[shstrndx][5]]
    secs = {st[s[0]:st.index(b"\0", s[0])].decode(): s for s in sh}
    t = secs[".text"]
    T0, TOFF, TSZ = t[3], t[4], t[5]
    W = struct.unpack_from("<%dI" % (TSZ // 4), d, TOFF)
    N = len(W)

    def f(w):
        return w >> 26, (w >> 21) & 31, (w >> 16) & 31, (w >> 11) & 31, (w >> 6) & 31, w & 63, w & 0xffff

    hits = []
    # ---- forward propagation from each hardware-base lui
    for i, w in enumerate(W):
        op, rs, rt, rd, sa, fn, imm = f(w)
        if op != 0x0f or imm not in (0x1000, 0x1001, 0xb000, 0xb001):
            continue
        base = (imm << 16) & 0x1fffffff  # strip kseg1
        known = {rt: base}
        for j in range(i + 1, min(N, i + window)):
            w2 = W[j]
            op2, rs2, rt2, rd2, sa2, fn2, imm2 = f(w2)
            addr = T0 + 4 * j
            if op2 in LOADS or op2 in STORES:
                if rs2 in known:
                    ea = (known[rs2] + sx16(imm2)) & 0xffffffff
                    if ea in REGS or 0x10002000 <= ea < 0x10002040 or 0x10007000 <= ea < 0x10007020 \
                            or 0x1000b000 <= ea < 0x1000b440:
                        kind = LOADS.get(op2) or STORES.get(op2)
                        hits.append(dict(pc=addr, lui=T0 + 4 * i, ea=ea, reg=REGS.get(ea, hex(ea)),
                                         op=kind, rt=RN[rt2], store=op2 in STORES))
                if op2 in LOADS and rt2 in known:
                    del known[rt2]
                continue
            # derivations
            if op2 in (0x09, 0x19) and rs2 in known:  # addiu/daddiu
                known[rt2] = (known[rs2] + sx16(imm2)) & 0xffffffff
                continue
            if op2 == 0x0d and rs2 in known:  # ori
                known[rt2] = known[rs2] | imm2
                continue
            if op2 == 0 and fn2 in (0x21, 0x2d, 0x25) and (rs2 in known) and rt2 == 0:  # move
                known[rd2] = known[rs2]
                continue
            # kill on any write
            if op2 == 0:
                if fn2 not in (0x08, 0x09, 0x0c, 0x0d, 0x0f) and rd2 in known:  # not jr/jalr/syscall
                    del known[rd2]
                if fn2 == 0x08 and rs2 == 31:  # jr ra: stop after delay slot
                    break
            elif op2 in (0x02, 0x03):
                if op2 == 0x03:
                    for r in (2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 24, 25, 31):
                        known.pop(r, None)
            elif op2 in (0x04, 0x05, 0x06, 0x07, 0x14, 0x15, 0x16, 0x17, 0x01):
                pass
            elif op2 in (0x1c,):  # MMI
                known.pop(rd2, None)
            elif op2 in (0x10, 0x11, 0x12):
                if op2 == 0x10 and rs2 in (0, 1):
                    known.pop(rt2, None)
                if op2 == 0x11 and rs2 in (0, 1, 2):  # mfc1 etc
                    known.pop(rt2, None)
            else:
                known.pop(rt2, None)
            if not known:
                break

    # ---- backward value recovery for stores
    def recover(j, reg, depth=0):
        """Best-effort: value of `reg` just before instruction j (scan back <= 40)."""
        if reg == 0:
            return 0, "zero"
        if depth > 4:
            return None, "?"
        for k in range(j - 1, max(-1, j - 40), -1):
            op, rs, rt, rd, sa, fn, imm = f(W[k])
            if op == 0x0f and rt == reg:
                return imm << 16, "lui"
            if op == 0x0d and rt == reg:
                v, how = recover(k, rs, depth + 1)
                return (None if v is None else v | imm), how + "|ori"
            if op in (0x09, 0x19) and rt == reg:
                v, how = recover(k, rs, depth + 1)
                return (None if v is None else (v + sx16(imm)) & 0xffffffff), how + "+addiu"
            if op == 0 and rd == reg and fn in (0x25, 0x21, 0x2d, 0x00, 0x3c, 0x24):
                if fn == 0x25:  # or
                    a, ha = recover(k, rs, depth + 1)
                    b, hb = recover(k, rt, depth + 1)
                    if a is not None and b is not None:
                        return a | b, "or(%s,%s)" % (ha, hb)
                    return (a if a is not None else b), "or(%s:%s, %s:%s)" % (
                        RN[rs], "?" if a is None else hex(a), RN[rt], "?" if b is None else hex(b))
                if fn in (0x21, 0x2d) and rt == 0:
                    v, how = recover(k, rs, depth + 1)
                    return v, how + "(move)"
                if fn == 0x00:
                    v, how = recover(k, rt, depth + 1)
                    return (None if v is None else (v << sa) & 0xffffffff), "%s<<%d" % (how, sa)
                return None, "dyn(%s)" % ["?", ][0]
            if (op not in (0x2b, 0x3f, 0x28, 0x29, 0x1f, 0x04, 0x05, 0x02, 0x03, 0x01)) and \
                    ((op != 0 and rt == reg) or (op == 0 and rd == reg)):
                return None, "dyn@%x" % (T0 + 4 * k)
        return None, "?"

    for h in hits:
        if h["store"] and h["reg"] in ("IPU_CMD", "IPU_CTRL", "D3_CHCR", "D4_CHCR", "IPU_IN_FIFO"):
            j = (h["pc"] - T0) // 4
            rt = (W[j] >> 16) & 31
            v, how = recover(j, rt)
            h["value"] = v
            h["how"] = how
            if v is not None and h["reg"] == "IPU_CMD":
                h["decoded"] = decode_cmd(v)
            if v is not None and h["reg"] == "IPU_CTRL":
                h["decoded"] = decode_ctrl(v)

    # ---- data tables
    data_hits = []
    for nm in (".data", ".rodata", ".sdata"):
        if nm not in secs:
            continue
        s = secs[nm]
        a0, off, sz = s[3], s[4], s[5]
        for k in range(0, sz - 3, 4):
            v, = struct.unpack_from("<I", d, off + k)
            if (v & 0x1fffffff) in REGS and (v >> 29) in (0, 5):
                data_hits.append(dict(sec=nm, addr=a0 + k, value=v, reg=REGS.get(v & 0x1fffffff, hex(v))))

    hits.sort(key=lambda h: h["pc"])
    for h in hits:
        extra = ""
        if "value" in h:
            extra = "  val=%s via %s" % ("?" if h["value"] is None else "%#010x" % h["value"], h["how"])
            if h.get("decoded"):
                extra += "  => " + h["decoded"]
        print("%08x  %-4s %-5s %-13s %08x  (lui@%08x)%s" % (h["pc"], h["op"], h["rt"], h["reg"], h["ea"], h["lui"], extra))
    print("--- data words equal to IPU/DMA regs:")
    for x in data_hits:
        print("%s %08x = %08x %s" % (x["sec"], x["addr"], x["value"], x["reg"]))
    if jout:
        json.dump(dict(hits=hits, data=data_hits), open(jout, "w"), indent=1)


if __name__ == "__main__":
    main()
