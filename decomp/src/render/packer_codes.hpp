#pragma once

// The tags and codes the VU1 packers write into the frame's VIF1 chain (ps2render.cpp), as typed constants, so the
// decompiled packers read as the packets they build. Only what the decompiled packers use; each one is checked
// against the immediates of the original code.
//
//   DMA tag (64 bits, then two VIF codes in the same qword):  QWC 0-15, ID 28-30, ADDR 32-62
//   VIF code (32 bits):                                       IMMEDIATE 0-15, NUM 16-23, CMD 24-30
//   GIF tag (128 bits):                                       NLOOP 0-14, EOP 15, FLG 58-59, NREG 60-63, REGS 64-127
#include <cstdint>

namespace decomp::render {

namespace dma {

enum Id : std::uint32_t { refe = 0, cnt = 1, next = 2, ref = 3, refs = 4, call = 5, ret = 6, end = 7 };

// the low word of a DMA tag; QWC is filled in when the tag is closed
constexpr std::uint32_t tag(Id id, std::uint32_t qwc = 0) { return id << 28 | qwc; }
// ADDR as the packers store it: the uncached/accelerated segment bits (29-30) cleared
constexpr std::uint32_t addr(std::uint32_t a) { return a & 0x9FFFFFFFu; }

}

namespace vif {

constexpr std::uint32_t code(std::uint32_t cmd, std::uint32_t num, std::uint32_t imm) { return cmd << 24 | num << 16 | imm; }
// write cycle: cl qwords written, wl qwords skipped per block (here always 4/4: contiguous)
constexpr std::uint32_t stcycl(std::uint32_t cl, std::uint32_t wl) { return code(0x01, 0, wl << 8 | cl); }
// VU1 double buffering: OFFSET is the size of one buffer, BASE where the first starts (qwords)
constexpr std::uint32_t offset(std::uint32_t qw) { return code(0x02, 0, qw); }
constexpr std::uint32_t base(std::uint32_t qw) { return code(0x03, 0, qw); }
constexpr std::uint32_t flush() { return code(0x11, 0, 0); }   // wait for VU1 and the GIF path 1/2 transfer
constexpr std::uint32_t flusha() { return code(0x13, 0, 0); }  // ... and path 3
// start the VU1 microprogram at a doubleword address (MSCALF waits for the GIF first)
constexpr std::uint32_t mscal(std::uint32_t pc) { return code(0x14, 0, pc); }
constexpr std::uint32_t mscalf(std::uint32_t pc) { return code(0x15, 0, pc); }
// DIRECT: the next imm qwords go to the GIF (path 2); imm is filled in when the packet is closed
constexpr std::uint32_t direct(std::uint32_t qwc = 0) { return code(0x50, 0, qwc); }
// UNPACK V4-32 (cmd 0x6c) of num qwords to VU1 data memory at vu_addr (qwords); num filled in when closed
constexpr std::uint32_t unpack_v4_32(std::uint32_t vu_addr, std::uint32_t num = 0) { return code(0x6c, num, vu_addr); }

// The unit an open UNPACK is closed with ([chain + 0x10]): NUM grows by one per 128 bits written
constexpr std::uint32_t kUnpackV4_32Unit = 1u << 16 | 128u;

// The microprograms are labels in the VU1 images (decomp/notes/native-renderer.md §1.5): MSCAL takes the label's
// offset in the image, in doublewords.
constexpr std::uint32_t kImageWorld = 0x4A20B0;  // image C: world, props, sky, shadows
constexpr std::uint32_t program(std::uint32_t image, std::uint32_t label) { return (label - image) / 8; }

}

namespace gif {

// GIF tag (low 64 bits)
constexpr std::uint64_t kEop = 1u << 15;
enum Flg : std::uint32_t { packed = 0, reglist = 1, image = 2 };

}

namespace gs {

// GS registers addressed by A+D (the address dword of each pair)
enum Reg : std::uint32_t {
    PRIM = 0x00,
    TEX0_1 = 0x06,
    CLAMP_1 = 0x08,
    TEX1_1 = 0x14,
    TEXFLUSH = 0x3F,
    ALPHA_1 = 0x42,
    TEST_1 = 0x47,
    FBA_1 = 0x4A,
};

// PRIM: primitive type and the shading switches the packers set
enum Prim : std::uint32_t {
    kTriStrip = 4,
    kIip = 1u << 3,  // Gouraud
    kTme = 1u << 4,  // textured
    kFge = 1u << 5,  // fogged
    kAbe = 1u << 6,  // alpha blended
    kAa1 = 1u << 7,  // antialiased edges
};

}

}
