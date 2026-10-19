#pragma once

// The VIF1 DMA chain the renderer builds every frame (decomp/notes/native-renderer.md §1.5) and the GS packets in it.
// [kChainPtr] is the one write pointer: ps2render.cpp, meshdraw.cpp, TextureManager.cpp and ScreenCopy.cpp append to
// it inline, and fn_241410 kicks the chain from [kChainStart] at the end of the frame. The chain is EE RAM, so every
// byte a decompiled writer emits must be the original's.
//
// This header lives in decomp/src so it counts towards the lockstep build id (cmake/build_id.cmake).
#include "ps2/decomp.hpp"

#include <cstdint>

namespace decomp::render {

inline constexpr std::uint32_t kChainPtr = 0x0065E300u;      // next free byte of the chain
inline constexpr std::uint32_t kChainStart = 0x0065E304u;    // where fn_241410 starts the DMA (D1_TADR)
inline constexpr std::uint32_t kChainDmaTag = 0x0065E308u;   // the open DMA tag, its QWC patched when closed
inline constexpr std::uint32_t kChainVifCode = 0x0065E30Cu;  // the open VIF code, its size patched when closed

// GS registers by their A+D address (GS User's Manual, register list)
enum class GsReg : std::uint32_t {
    PRIM = 0x00,
    RGBAQ = 0x01,
    ST = 0x02,
    UV = 0x03,
    XYZF2 = 0x04,
    XYZ2 = 0x05,
    TEX0_1 = 0x06,
    TEX0_2 = 0x07,
    CLAMP_1 = 0x08,
    CLAMP_2 = 0x09,
    FOG = 0x0a,
    XYZF3 = 0x0c,
    XYZ3 = 0x0d,
    TEX1_1 = 0x14,
    TEX1_2 = 0x15,
    TEX2_1 = 0x16,
    TEX2_2 = 0x17,
    XYOFFSET_1 = 0x18,
    XYOFFSET_2 = 0x19,
    PRMODECONT = 0x1a,
    PRMODE = 0x1b,
    TEXCLUT = 0x1c,
    SCANMSK = 0x22,
    MIPTBP1_1 = 0x34,
    MIPTBP1_2 = 0x35,
    MIPTBP2_1 = 0x36,
    MIPTBP2_2 = 0x37,
    TEXA = 0x3b,
    FOGCOL = 0x3d,
    TEXFLUSH = 0x3f,
    SCISSOR_1 = 0x40,
    SCISSOR_2 = 0x41,
    ALPHA_1 = 0x42,
    ALPHA_2 = 0x43,
    DIMX = 0x44,
    DTHE = 0x45,
    COLCLAMP = 0x46,
    TEST_1 = 0x47,
    TEST_2 = 0x48,
    PABE = 0x49,
    FBA_1 = 0x4a,
    FBA_2 = 0x4b,
    FRAME_1 = 0x4c,
    FRAME_2 = 0x4d,
    ZBUF_1 = 0x4e,
    ZBUF_2 = 0x4f,
    BITBLTBUF = 0x50,
    TRXPOS = 0x51,
    TRXREG = 0x52,
    TRXDIR = 0x53,
};

// One A+D qword of a GIF PACKED A+D list: the 64-bit register value, then the register address. The game stores it
// as four words (sw, sw, sw, sw: value low, value high, address, 0), so this does too.
inline void put_ad(std::uint32_t at, std::uint64_t value, GsReg reg) {
    ps2::wr<std::uint32_t>(at, static_cast<std::uint32_t>(value));
    ps2::wr<std::uint32_t>(at + 4, static_cast<std::uint32_t>(value >> 32));
    ps2::wr<std::uint32_t>(at + 8, static_cast<std::uint32_t>(reg));
    ps2::wr<std::uint32_t>(at + 12, 0);
}

// GS TEX1: texture filtering and mipmap LOD. The game ORs its fields together unmasked (each one a sign-extended
// word), with K negated as a whole word in the upper half; bits() does the same, so stray high bits stay as the
// original leaves them.
struct Tex1 {
    enum Filter : std::uint64_t {
        kNearest = 0,
        kLinear = 1,
        kNearestMipNearest = 2,
        kNearestMipLinear = 3,
        kLinearMipNearest = 4,
        kLinearMipLinear = 5,
    };

    std::uint64_t lcm = 0;   // LOD from K only (1) or from Q and K (0)
    std::uint64_t mxl = 0;   // highest mip level
    std::uint64_t mmag = 0;  // Filter when magnified (kNearest or kLinear)
    std::uint64_t mmin = 0;  // Filter when minified
    std::uint64_t mtba = 0;  // mip base addresses from MIPTBP1 automatically
    std::uint64_t l = 0;     // LOD parameter L
    std::uint32_t k = 0;     // LOD parameter K (signed 7.4), as the word the game stores

    constexpr std::uint64_t bits() const {
        return lcm | mxl << 2 | mmag << 5 | mmin << 6 | mtba << 9 | l << 19 | std::uint64_t{k} << 32;
    }
};

}
