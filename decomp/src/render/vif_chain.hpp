#pragma once

// The render layer's VIF1 DMA chain (decomp/notes/native-renderer.md §1.5): one write pointer that 98 functions
// append to inline, without Sony's packet library. These helpers name the DMA tags and VIF codes they build, and
// the chain-control block at 0x65E300.
//
// A DMA source-chain tag is one doubleword (QWC, PCE, ID, IRQ | ADDR, SPR); the VIF reads the tag's upper
// doubleword as two VIF codes (transfer with TTE on). Chain-mode IDs per the EE manual.
#include "ps2/decomp.hpp"

#include <cstdint>

namespace decomp::render {

namespace dma {

enum Id : std::uint32_t { refe = 0, cnt = 1, next = 2, ref = 3, refs = 4, call = 5, ret = 6, end = 7 };

// DMA tag word 0: QWC (bits 0-15), ID (bits 28-30)
constexpr std::uint32_t tag(Id id, std::uint32_t qwc = 0) { return static_cast<std::uint32_t>(id) << 28 | qwc; }
// DMA tag word 1: the address with bits 29-30 cleared (the original's `and 0x9fffffff`: KSEG/uncached views of RAM
// map to the physical address, the scratchpad bit 31 stays)
constexpr std::uint32_t tag_addr(std::uint32_t addr) { return addr & 0x9FFFFFFFu; }

}

namespace vif {

enum Cmd : std::uint32_t {
    NOP = 0x00, STCYCL = 0x01, OFFSET = 0x02, BASE = 0x03, ITOP = 0x04, STMOD = 0x05, MSKPATH3 = 0x06, MARK = 0x07,
    FLUSHE = 0x10, FLUSH = 0x11, FLUSHA = 0x13, MSCAL = 0x14, MSCALF = 0x15, MSCNT = 0x17,
    STMASK = 0x20, STROW = 0x30, STCOL = 0x31, MPG = 0x4A, DIRECT = 0x50, DIRECTHL = 0x51, UNPACK = 0x60,
};

// VIFcode: CMD (bits 24-31), NUM (16-23), IMMEDIATE (0-15)
constexpr std::uint32_t code(Cmd cmd, std::uint32_t num = 0, std::uint32_t imm = 0) {
    return static_cast<std::uint32_t>(cmd) << 24 | num << 16 | imm;
}

}

// The chain-control block: write pointer, chain start, the open DMA tag (its QWC is patched when the next tag is
// opened) and the open VIF code (e.g. a DIRECT whose size is patched when it is closed); 0 = none open.
struct Chain {
    static constexpr std::uint32_t kAddr = 0x0065E300u;
    static constexpr std::uint32_t kPtr = kAddr + 0x0, kStart = kAddr + 0x4, kOpenTag = kAddr + 0x8,
                                   kOpenVif = kAddr + 0xC;
};

// The registers the compiler picked for one inlined copy of open_flush_tag, and its loop heads.
struct FlushTagRegs {
    unsigned base;           // `lui 0x66` for the first load of the write pointer
    unsigned pad_test;       // the first `andi ptr, 0xc` (the loop's own test is v0)
    unsigned base2;          // `lui 0x66` for the second load
    std::int32_t pad_extra;  // cycles of the nop some copies have before the pad loop
    std::uint32_t pad_loop;  // loop heads: where a preempted loop resumes in the recompiled code
    std::uint32_t fill_loop;
};

// Opens a new DMA `cnt` tag whose upper half is VIF FLUSH | VIF NOP (wait for VU1 and the GIF before what follows):
// pads the chain to a qword with zero words, closes the open tag (QWC += qwords written after it), writes the tag,
// makes it the open tag, clears the open VIF code and pads again. Inlined in the per-instance draws (fn_249060 at
// 0x249c64, fn_246cf0 at 0x246e08); this reproduces the inlined code's registers (a0-a3, v0, v1 and r's) and
// cycles. False when a loop poll unwound: the caller returns at once.
inline bool open_flush_tag(ps2::Cpu &c, const FlushTagRegs &r) {
    using namespace ps2;
    using namespace ps2::gpr;
    set32(c.r[r.base], 0x00660000u);
    std::uint32_t ptr = ld32(Chain::kPtr);
    set32(c.r[a2], ptr);
    set32(c.r[a3], Chain::kPtr);
    c.r[r.pad_test].d[0] = c.r[a2].d[0] & 12u;
    tick(c, 6);
    if (ptr & 12u) {
        tick(c, r.pad_extra);
        for (;;) {
            st32(ptr, 0);
            ptr += 4;
            set32(c.r[a2], ptr);
            c.r[v0].d[0] = c.r[a2].d[0] & 12u;
            tick(c, 6);
            if (!(ptr & 12u)) break;
            if (poll(c, r.pad_loop)) return false;
        }
    }

    const std::uint32_t open = ld32(Chain::kOpenTag);
    set32(c.r[a0], open);
    tick(c, 3);
    if (open) {
        set32(c.r[v0], ptr - open);
        set32(c.r[v0], static_cast<std::uint32_t>(c.r[v0].sw[0] >> 4) - 1u);  // qwords after the tag
        set32(c.r[v1], ld32(open) + c.r[v0].w[0]);
        st32(open, c.r[v1].w[0]);
        tick(c, 6);
    }

    st32(ptr, dma::tag(dma::cnt));
    st32(ptr + 4, 0);
    st32(Chain::kOpenTag, ptr);
    st32(Chain::kOpenVif, 0);
    st32(ptr + 8, vif::code(vif::FLUSH));
    st32(Chain::kPtr, ptr + 12);
    set32(c.r[v0], ptr + 12);
    set32(c.r[r.base2], 0x00660000u);
    set32(c.r[a2], Chain::kPtr);
    // the pad target: ptr rounded up to a qword, through `and -16`, `sltu`, `movn`
    set32(c.r[v1], 0xFFFFFFF0u);
    c.r[a1].d[0] = c.r[v0].d[0] & c.r[v1].d[0];
    c.r[a0].d[0] = c.r[a1].d[0] < c.r[v0].d[0];
    set32(c.r[v1], c.r[a1].w[0] + 16u);
    if (c.r[a0].d[0]) c.r[a1].d[0] = c.r[v1].d[0];
    c.r[v0].d[0] = c.r[v0].d[0] < c.r[a1].d[0];
    tick(c, 25);
    if (c.r[v0].d[0]) {
        for (;;) {
            set32(c.r[v0], ld32(Chain::kPtr));
            st32(c.r[v0].w[0], 0);
            set32(c.r[v0], c.r[v0].w[0] + 4u);
            c.r[v1].d[0] = c.r[v0].d[0] < c.r[a1].d[0];
            st32(Chain::kPtr, c.r[v0].w[0]);
            tick(c, 7);
            if (!c.r[v1].d[0]) break;
            if (poll(c, r.fill_loop)) return false;
        }
    }
    return true;
}

}
