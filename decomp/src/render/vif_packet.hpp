#pragma once

// The render layer's VIF1 DMA chain (decomp/notes/native-renderer.md §1.5): the packet that the frame's draw
// functions append to, and typed encoders for what goes into it (DMA tags, VIF codes, GIF tags, GS A+D registers).
//
// The game builds the chain with Sony's libvifpk (sceVif1Pk*), mostly inlined: a sceVif1Packet at 0x0065E300 holds the
// write pointer and the open DMA tag, VIF code and GIF tag, whose counts are patched in when they are closed. The
// encoders are constexpr and touch nothing; the code that writes the words keeps the original's store order and its
// scratch registers itself (they differ per call site).
#include "../texture/texture_manager.hpp"  // Field

#include <cstdint>

namespace decomp::render {

using texture::Field;

// sceVif1Packet
struct Vif1Packet {
    static constexpr std::uint32_t kFrameChain = 0x0065E300u;  // the frame's chain (ps2render.cpp and friends)

    std::uint32_t addr;
    Field<std::uint32_t> cur{addr + 0x00};       // pCurrent: next free word
    Field<std::uint32_t> base{addr + 0x04};      // pBase: start of the chain, D1_TADR at the kick
    Field<std::uint32_t> dma_tag{addr + 0x08};   // pDmaTag: open DMA tag (QWC patched on close), 0 = none
    Field<std::uint32_t> vif_code{addr + 0x0c};  // pVifCode: open DIRECT/UNPACK code (size patched on close), 0 = none
    Field<std::uint32_t> gif_tag{addr + 0x14};   // pGifTag: open GIF tag (NLOOP patched on close), 0 = none
};

inline Vif1Packet frame_chain() { return {Vif1Packet::kFrameChain}; }

// ---- DMA source-chain tags (word 0; word 1 = ADDR) ----
namespace dma {
enum Id : std::uint32_t { kRefe = 0, kCnt = 1, kNext = 2, kRef = 3, kRefs = 4, kCall = 5, kRet = 6, kEnd = 7 };
constexpr std::uint32_t tag(Id id, std::uint32_t qwc = 0) { return id << 28 | qwc; }
}

// ---- VIF codes: CMD << 24 | NUM << 16 | IMMEDIATE ----
namespace vif {
enum Cmd : std::uint32_t {
    kNop = 0x00,
    kStcycl = 0x01,
    kOffset = 0x02,
    kBase = 0x03,
    kItop = 0x04,
    kStmod = 0x05,
    kMskpath3 = 0x06,
    kMark = 0x07,
    kFlushe = 0x10,
    kFlush = 0x11,
    kFlusha = 0x13,
    kMscal = 0x14,
    kMscalf = 0x15,
    kMscnt = 0x17,
    kStmask = 0x20,
    kStrow = 0x30,
    kStcol = 0x31,
    kMpg = 0x4a,
    kDirect = 0x50,
    kDirecthl = 0x51,
    kUnpack = 0x60,
};
constexpr std::uint32_t code(Cmd cmd, std::uint32_t num = 0, std::uint32_t imm = 0) { return cmd << 24 | num << 16 | imm; }
}

// ---- GIF tags ----
namespace gif {
enum Flg : std::uint32_t { kPacked = 0, kReglist = 1, kImage = 2 };
// bits 0-63: NLOOP, EOP, PRE, PRIM, FLG, NREG (0 = 16); bits 64-127 (the second dword) list the registers
constexpr std::uint64_t tag(std::uint32_t nloop, bool eop, Flg flg, std::uint32_t nreg, bool pre = false, std::uint32_t prim = 0) {
    return std::uint64_t{nloop} | std::uint64_t{eop} << 15 | std::uint64_t{pre} << 46 | std::uint64_t{prim} << 47 |
           std::uint64_t{flg} << 58 | std::uint64_t{nreg & 15} << 60;
}
constexpr Flg flg(std::uint64_t tag) { return static_cast<Flg>(tag >> 58 & 3); }
constexpr std::uint32_t nreg(std::uint64_t tag) { return static_cast<std::uint32_t>(tag >> 60); }  // 0 means 16
// register descriptor of the second dword: A+D, the packed-mode "address + data" register
inline constexpr std::uint64_t kRegAd = 0xe;
}

// ---- GS registers, as the address of an A+D qword (data in the low dword, the address in the high one) ----
namespace gs {
enum Reg : std::uint32_t {
    kPrim = 0x00,
    kRgbaq = 0x01,
    kSt = 0x02,
    kUv = 0x03,
    kXyzf2 = 0x04,
    kXyz2 = 0x05,
    kTex0_1 = 0x06,
    kTex0_2 = 0x07,
    kClamp_1 = 0x08,
    kClamp_2 = 0x09,
    kFog = 0x0a,
    kXyzf3 = 0x0c,
    kXyz3 = 0x0d,
    kTex1_1 = 0x14,
    kTex1_2 = 0x15,
    kTex2_1 = 0x16,
    kTex2_2 = 0x17,
    kXyoffset_1 = 0x18,
    kXyoffset_2 = 0x19,
    kPrmodecont = 0x1a,
    kPrmode = 0x1b,
    kTexclut = 0x1c,
    kScanmsk = 0x22,
    kMiptbp1_1 = 0x34,
    kMiptbp1_2 = 0x35,
    kMiptbp2_1 = 0x36,
    kMiptbp2_2 = 0x37,
    kTexa = 0x3b,
    kFogcol = 0x3d,
    kTexflush = 0x3f,
    kScissor_1 = 0x40,
    kScissor_2 = 0x41,
    kAlpha_1 = 0x42,
    kAlpha_2 = 0x43,
    kDimx = 0x44,
    kDthe = 0x45,
    kColclamp = 0x46,
    kTest_1 = 0x47,
    kTest_2 = 0x48,
    kPabe = 0x49,
    kFba_1 = 0x4a,
    kFba_2 = 0x4b,
    kFrame_1 = 0x4c,
    kFrame_2 = 0x4d,
    kZbuf_1 = 0x4e,
    kZbuf_2 = 0x4f,
    kBitbltbuf = 0x50,
    kTrxpos = 0x51,
    kTrxreg = 0x52,
    kTrxdir = 0x53,
    kHwreg = 0x54,
    kSignal = 0x60,
    kFinish = 0x61,
    kLabel = 0x62,
};

// ZBUF: ZBP (8 KB pages) | PSM << 24
constexpr std::uint64_t zbuf(std::uint32_t zbp, std::uint32_t psm) { return std::uint64_t{zbp} | std::uint64_t{psm} << 24; }
// RGBAQ: RGBA in bits 0-31, Q (a float's bits) in 32-63
constexpr std::uint64_t rgbaq(std::uint32_t rgba, std::uint32_t q_bits) { return std::uint64_t{rgba} | std::uint64_t{q_bits} << 32; }

// TEST: alpha test (ATE, ATST, AREF, AFAIL), destination alpha test (DATE, DATM), depth test (ZTE, ZTST)
enum Atst : std::uint32_t { kANever = 0, kAAlways = 1, kALess = 2, kALequal = 3, kAEqual = 4, kAGequal = 5, kAGreater = 6, kANotequal = 7 };
enum Afail : std::uint32_t { kKeep = 0, kFbOnly = 1, kZbOnly = 2, kRgbOnly = 3 };
enum Ztst : std::uint32_t { kZNever = 0, kZAlways = 1, kZGequal = 2, kZGreater = 3 };
constexpr std::uint64_t test(bool ate, Atst atst, std::uint32_t aref, Afail afail, bool zte, Ztst ztst, bool date = false, bool datm = false) {
    return std::uint64_t{ate} | std::uint64_t{atst} << 1 | std::uint64_t{aref & 0xff} << 4 | std::uint64_t{afail} << 12 |
           std::uint64_t{date} << 14 | std::uint64_t{datm} << 15 | std::uint64_t{zte} << 16 | std::uint64_t{ztst} << 17;
}
// ALPHA: blend ((A - B) * C >> 7) + D; A/B/D pick Cs (0), Cd (1) or 0 (2), C picks As (0), Ad (1) or FIX (2)
enum Blend : std::uint32_t { kCs = 0, kCd = 1, kZero = 2, kAs = 0, kAd = 1, kFix = 2 };
constexpr std::uint64_t alpha(Blend a, Blend b, Blend c, Blend d, std::uint32_t fix = 0) {
    return std::uint64_t{a} | std::uint64_t{b} << 2 | std::uint64_t{c} << 4 | std::uint64_t{d} << 6 | std::uint64_t{fix & 0xff} << 32;
}
// TEXA: alpha of 24/16-bit texels (TA0, AEM, TA1)
constexpr std::uint64_t texa(std::uint32_t ta0, bool aem, std::uint32_t ta1) {
    return std::uint64_t{ta0 & 0xff} | std::uint64_t{aem} << 15 | std::uint64_t{ta1 & 0xff} << 32;
}
// CLAMP: wrap modes (0 repeat, 1 clamp, 2 region clamp, 3 region repeat) and the region
constexpr std::uint64_t clamp(std::uint32_t wms, std::uint32_t wmt) { return std::uint64_t{wms & 3} | std::uint64_t{wmt & 3} << 2; }
}

}
