#pragma once

// The frame's VIF1 chain as the character renderer (Ps2/Renderer/Character/ps2render.cpp) appends to it
// (decomp/notes/native-renderer.md §1.5): typed encoders for the DMA tags, VIFcodes, GIF tags and GS A+D registers
// it writes, the chain's globals at 0x65e300, the two packet templates it copies from the game's data, and the inlined
// packet-library sequences it repeats (pad with NOPs, close a GIF tag, close a counted VIFcode).
//
// The chain is EE RAM, so every byte of it is in the state hash; the encoders only name what the original stores.
// The inlined sequences differ per call site in the registers they use, so the helpers that reproduce one take the
// registers as parameters and leave them as the original leaves them.
#include "ps2/decomp.hpp"

#include "../texture/texture_manager.hpp"  // Field

#include <cstdint>

namespace decomp::chain {

using texture::Field;

// ---- DMA source-chain tags (word 0; word 1 = ADDR) ----
namespace dma {
// CNT: the qwc qwords after the tag are transferred, the next tag follows them
constexpr std::uint32_t cnt(std::uint32_t qwc = 0) { return 1u << 28 | qwc; }
}

// ---- VIFcodes: CMD << 24 | NUM << 16 | IMMEDIATE ----
namespace vif {
inline constexpr std::uint32_t kNop = 0x00000000u;
inline constexpr std::uint32_t kFlush = 0x11000000u;  // wait for VU1 to end and the GIF paths 1/2 to finish
constexpr std::uint32_t stcycl(std::uint32_t cl, std::uint32_t wl) { return 0x01000000u | wl << 8 | cl; }
constexpr std::uint32_t offset(std::uint32_t qw) { return 0x02000000u | qw; }  // second VU1 input buffer
constexpr std::uint32_t base(std::uint32_t qw) { return 0x03000000u | qw; }    // first VU1 input buffer
constexpr std::uint32_t direct(std::uint32_t qwc) { return 0x50000000u | qwc; }  // qwc qwords of GIF data, PATH2
// num qwords of V4-32 to VU1 data memory at addr (in qwords)
constexpr std::uint32_t unpack_v4_32(std::uint32_t addr, std::uint32_t num = 0) { return 0x6c000000u | num << 16 | addr; }
}

// ---- GS registers, as the address half of a GIF A+D qword ----
namespace gs {
enum Reg : std::uint32_t {
    CLAMP_1 = 0x08,
    TEX1_1 = 0x14,
    TEXFLUSH = 0x3f,
    ALPHA_1 = 0x42,
    TEST_1 = 0x47,
    FBA_1 = 0x4a,
    FRAME_1 = 0x4c,
};
// CLAMP: WMS, WMT (0 repeat, 1 clamp)
constexpr std::uint64_t clamp(std::uint32_t wms, std::uint32_t wmt) { return wmt << 2 | wms; }
// TEX1: LCM, MXL, MMAG (0 nearest, 1 linear), MMIN
constexpr std::uint64_t tex1(std::uint32_t mmag, std::uint32_t mmin) { return mmin << 6 | mmag << 5; }
}

// ---- GIF tags ----
namespace gif {
// low dword: NLOOP 0-14, EOP 15, PRE 46, PRIM 47-57, FLG 58-59 (0 PACKED, 1 REGLIST, 2 IMAGE), NREG 60-63 (0 = 16)
constexpr std::uint32_t flg(std::uint64_t tag) { return static_cast<std::uint32_t>(tag >> 58) & 3u; }
constexpr std::uint32_t nreg(std::uint64_t tag) { return static_cast<std::uint32_t>(tag >> 60); }
}

// ---- data ----

// The GIF tag the A+D blocks start from (ps2render data): NLOOP 0 (filled in at the close), EOP, PACKED, NREG 1,
// REGS = A+D.
inline constexpr std::uint32_t kAdGifTag = 0x00585280u;
// The header of a 4-qword UNPACK (ps2render data): NOP, NOP, STCYCL 4/4, UNPACK V4-32 NUM 4 to VU address 0. The
// writers OR the VU1 address into the last word and append the four qwords (one matrix).
inline constexpr std::uint32_t kUnpack4Header = 0x004f4d90u;

// ---- the chain's globals ----

// At 0x65e300: the write pointer and the open DMA tag, VIFcode and GIF tag whose counts are patched when closed.
// The writers address them as 0x660000 - 0x1d00 + offset.
struct Chain {
    static constexpr std::uint32_t kAddr = 0x0065e300u;

    std::uint32_t addr = kAddr;
    Field<std::uint32_t> ptr{addr + 0x00};       // next free word
    Field<std::uint32_t> start{addr + 0x04};     // the chain's first tag (D1_TADR at the kick)
    Field<std::uint32_t> dma_tag{addr + 0x08};   // the open DMA CNT tag (QWC patched when the next opens), 0 = none
    Field<std::uint32_t> vif_code{addr + 0x0c};  // the open DIRECT/UNPACK code (size patched on close), 0 = none
    // how the open UNPACK counts its size: the step of the NUM field (0x10000) in the high half, the bits of one
    // element (0x80 for V4-32) in the low half
    Field<std::uint32_t> unpack_unit{addr + 0x10};
    Field<std::uint32_t> gif_tag{addr + 0x14};   // the open GIF tag (NLOOP patched on close), 0 = none
};

// ---- the inlined sequences ----

// A vector from four GPR words, as the original builds one for QMTC2: PEXTLW t0, y, x; PEXTLW t1, w, z;
// PCPYLD t0, t1, t0. t0 = (x, y, z, w); t1 keeps (z, w, z.hi, w.hi) as the original leaves it.
inline void pack_vector(ps2::Cpu &c, unsigned x, unsigned y, unsigned z, unsigned w) {
    using namespace ps2::gpr;
    ps2::mmi::pextlw(c.r[t0], c.r[y], c.r[x]);
    ps2::mmi::pextlw(c.r[t1], c.r[w], c.r[z]);
    ps2::mmi::pcpyld(c.r[t0], c.r[t1], c.r[t0]);
}

// One 4-qword UNPACK block (kUnpack4Header with the VU address, then the 16-byte-aligned matrix at src) at dst, as
// the writers inline it: a1 = header, a2-t1 = the rows, a0 = the address lane (PEXTLW twice), a1 |= a0 (POR), five sq.
// The caller charges the cycles.
inline void unpack_matrix(ps2::Cpu &c, std::uint32_t dst, std::uint32_t src, std::uint32_t vu_addr) {
    using namespace ps2::gpr;
    ps2::ld128(kUnpack4Header & ~15u, c.r[a1]);
    for (unsigned i = 0; i < 4; ++i) ps2::ld128((src + 16 * i) & ~15u, c.r[a2 + i]);
    c.r[a0].d[0] = 0;
    c.r[a0].d[1] = static_cast<std::uint64_t>(vu_addr) << 32;
    c.r[a1].d[0] |= c.r[a0].d[0];
    c.r[a1].d[1] |= c.r[a0].d[1];
    for (unsigned i = 0; i < 5; ++i) ps2::st128((dst + 16 * i) & ~15u, c.r[a1 + i]);
}

// The inlined "pad with VIF NOPs up to the target" loop that keeps the pointer in memory: each word re-reads the chain
// pointer into v0, stores a NOP there, advances it and writes it back; v1 = v0 < target (the register target_reg,
// compared as the original's SLTU does). 7 cycles a word; the loop polls at its head (loop_pc). The caller has made
// the entry check and set the registers the loop reads. False if the machine unwound (return at once).
inline bool pad_through_pointer(ps2::Cpu &c, std::uint32_t loop_pc, unsigned target_reg) {
    using namespace ps2;
    using namespace ps2::gpr;
    const Chain ch;
    do {
        set32(c.r[v0], ch.ptr);
        st32(c.r[v0].w[0], vif::kNop);
        set32(c.r[v0], c.r[v0].w[0] + 4);
        c.r[v1].d[0] = c.r[v0].d[0] < c.r[target_reg].d[0] ? 1 : 0;
        ch.ptr = c.r[v0].w[0];
        tick(c, 7);
        if (c.r[v1].d[0] == 0) return true;
    } while (!poll(c, loop_pc));
    return false;
}

// The other inlined NOP padding: the pointer in a register (ptr_reg) up to the next qword, v0 = ptr & 12. 6 cycles a
// word, polled at loop_pc. The caller has made the entry check (ptr & 12 nonzero). False if the machine unwound.
inline bool pad_register_to_qword(ps2::Cpu &c, std::uint32_t loop_pc, unsigned ptr_reg) {
    using namespace ps2;
    using namespace ps2::gpr;
    do {
        st32(c.r[ptr_reg].w[0], vif::kNop);
        set32(c.r[ptr_reg], c.r[ptr_reg].w[0] + 4);
        c.r[v0].d[0] = c.r[ptr_reg].d[0] & 12u;
        tick(c, 6);
        if (c.r[v0].d[0] == 0) return true;
    } while (!poll(c, loop_pc));
    return false;
}

// The size a DIRECT code gets at its close, with the chain pointer at end: the qwords after the code (the original
// computes ((end - 4 - code) >> 2) >> 2, arithmetic then logical shift).
constexpr std::uint32_t direct_size(std::uint32_t end, std::uint32_t code) {
    return static_cast<std::uint32_t>(static_cast<std::int32_t>(end - 4 - code) >> 2) >> 2;
}

// The NLOOP a GIF tag gets when closed with the chain pointer at end: the bytes after the tag in qwords (PACKED,
// IMAGE) or doublewords (REGLIST), divided by NREG unless IMAGE. The original's registers: v1 = FLG (then the
// rounded-up count in the non-IMAGE case), a0 = the halved count (then 16), v0 = FLG ^ 1 (then NREG, then the new
// tag); `count` holds the result. HI/LO keep the DIVU. Returns the cycles of the conditional part (the caller charges
// the straight-line part around it).
inline std::int32_t close_gif_tag_regs(ps2::Cpu &c, std::uint32_t tag_addr, std::uint32_t end, unsigned tag_reg,
                                       unsigned count_reg) {
    using namespace ps2;
    using namespace ps2::gpr;
    const std::uint64_t tag = ld64(tag_addr);
    c.r[tag_reg].d[0] = tag;
    set32(c.r[count_reg], static_cast<std::uint32_t>(static_cast<std::int32_t>(end - tag_addr) >> 3) - 2u);
    c.r[v1].d[0] = gif::flg(tag);
    set32(c.r[a0], c.r[count_reg].w[0] >> 1);
    c.r[v0].d[0] = c.r[v1].d[0] ^ 1u;
    if (c.r[v0].d[0] != 0) c.r[count_reg].d[0] = c.r[a0].d[0];
    std::int32_t cycles = 0;
    if (c.r[v1].d[0] != 2) {
        c.r[v0].d[0] = tag >> 60;
        set32(c.r[a0], 16);
        if (c.r[v0].d[0] == 0) c.r[v0].d[0] = c.r[a0].d[0];
        set32(c.r[v1], c.r[count_reg].w[0] + c.r[v0].w[0] - 1u);
        mmi::divu(c, 0, c.r[v1].w[0], c.r[v0].w[0]);
        c.r[v1].d[0] = c.lo.d[0];
        c.r[count_reg].d[0] = c.r[v1].d[0];
        cycles = 6 + 4;
    }
    c.r[v0].d[0] = tag + (c.r[count_reg].d[0] & 0xffffffffu);
    st64(tag_addr, c.r[v0].d[0]);
    return cycles;
}

}
