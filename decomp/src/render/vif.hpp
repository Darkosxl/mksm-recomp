#pragma once

// The words the render code appends to the frame's VIF1 chain (decomp/notes/native-renderer.md §1.5): VIFcodes, GIF
// tags, GS register numbers and values, and DMA tags, as typed constexpr helpers, so a decompiled packer reads as the
// packet it builds. Each helper returns the exact bits the original stores; none of them touches the machine.
//
//   wr<std::uint32_t>(p, Stcycl(4, 4));                                    // STCYCL 4,4
//   wr<std::uint32_t>(p + 4, Unpack(UnpackFormat::V4_32, 0x21, 1));       // UNPACK V4-32, 1 qword to VU1 0x21
//   const Qword q = Ad(GsReg::ALPHA_1, gs::Alpha(gs::Cs, gs::Cd, gs::As, gs::Cd));
//
// This header lives in decomp/src so it counts towards the lockstep build id (cmake/build_id.cmake).
#include "ps2/decomp.hpp"

#include <cstdint>

namespace decomp::render {

// ---- VIFcodes: CMD << 24 | NUM << 16 | IMMEDIATE (bit 31 of CMD = interrupt) ----

enum class VifCmd : std::uint8_t {
    Nop = 0x00,
    Stcycl = 0x01,
    Offset = 0x02,
    Base = 0x03,
    Itop = 0x04,
    Stmod = 0x05,
    Mskpath3 = 0x06,
    Mark = 0x07,
    Flushe = 0x10,
    Flush = 0x11,
    Flusha = 0x13,
    Mscal = 0x14,
    Mscalf = 0x15,
    Mscnt = 0x17,
    Stmask = 0x20,
    Strow = 0x30,
    Stcol = 0x31,
    Mpg = 0x4a,
    Direct = 0x50,
    Directhl = 0x51,
    Unpack = 0x60,  // | mask << 4 | UnpackFormat
};

constexpr std::uint32_t VifCode(VifCmd cmd, std::uint32_t num = 0, std::uint32_t imm = 0) {
    return static_cast<std::uint32_t>(cmd) << 24 | (num & 0xffu) << 16 | (imm & 0xffffu);
}

constexpr std::uint32_t Nop() { return VifCode(VifCmd::Nop); }
// write cycle: cl qwords of every wl are written by the following UNPACKs (4,4 = contiguous)
constexpr std::uint32_t Stcycl(std::uint32_t cl, std::uint32_t wl) { return VifCode(VifCmd::Stcycl, 0, wl << 8 | cl); }
// double buffering: VU1 data addresses of the two input buffers (in qwords)
constexpr std::uint32_t Offset(std::uint32_t qwords) { return VifCode(VifCmd::Offset, 0, qwords & 0x3ffu); }
constexpr std::uint32_t Base(std::uint32_t qwords) { return VifCode(VifCmd::Base, 0, qwords & 0x3ffu); }
constexpr std::uint32_t Itop(std::uint32_t value) { return VifCode(VifCmd::Itop, 0, value & 0x3ffu); }
constexpr std::uint32_t Stmod(std::uint32_t mode) { return VifCode(VifCmd::Stmod, 0, mode & 3u); }
constexpr std::uint32_t Mark(std::uint32_t value) { return VifCode(VifCmd::Mark, 0, value); }
constexpr std::uint32_t Flushe() { return VifCode(VifCmd::Flushe); }
constexpr std::uint32_t Flush() { return VifCode(VifCmd::Flush); }
constexpr std::uint32_t Flusha() { return VifCode(VifCmd::Flusha); }
// start a VU1 program at `pc` (in doublewords of the micro memory); MSCALF waits for GIF path 1/2 first
constexpr std::uint32_t Mscal(std::uint32_t pc) { return VifCode(VifCmd::Mscal, 0, pc); }
constexpr std::uint32_t Mscalf(std::uint32_t pc) { return VifCode(VifCmd::Mscalf, 0, pc); }
// continue the VU1 program where it stopped
constexpr std::uint32_t Mscnt() { return VifCode(VifCmd::Mscnt); }
constexpr std::uint32_t Stmask() { return VifCode(VifCmd::Stmask); }
constexpr std::uint32_t Strow() { return VifCode(VifCmd::Strow); }
constexpr std::uint32_t Stcol() { return VifCode(VifCmd::Stcol); }
// load `num` doublewords of micro code at `addr` (doublewords; num 0 = 256)
constexpr std::uint32_t Mpg(std::uint32_t num, std::uint32_t addr) { return VifCode(VifCmd::Mpg, num, addr); }
// `qwc` qwords of GIF data follow for PATH2 (0 = 65536)
constexpr std::uint32_t Direct(std::uint32_t qwc) { return VifCode(VifCmd::Direct, 0, qwc); }
constexpr std::uint32_t Directhl(std::uint32_t qwc) { return VifCode(VifCmd::Directhl, 0, qwc); }

// UNPACK element formats (vn << 2 | vl)
enum class UnpackFormat : std::uint8_t {
    S_32 = 0x0, S_16 = 0x1, S_8 = 0x2,
    V2_32 = 0x4, V2_16 = 0x5, V2_8 = 0x6,
    V3_32 = 0x8, V3_16 = 0x9, V3_8 = 0xa,
    V4_32 = 0xc, V4_16 = 0xd, V4_8 = 0xe, V4_5 = 0xf,
};

// bits per element of an UNPACK format (what the game's packers divide the payload size by)
constexpr std::uint32_t UnpackElementBits(UnpackFormat f) {
    const std::uint32_t v = static_cast<std::uint32_t>(f);
    if (f == UnpackFormat::V4_5) return 16;
    return ((v >> 2) + 1) * (32u >> (v & 3u));
}

// UNPACK `num` elements to VU1 data address `vu_addr` (qwords). usn: zero-extend; flg: add TOPS (double buffer);
// mask: apply STMASK.
constexpr std::uint32_t Unpack(UnpackFormat fmt, std::uint32_t vu_addr, std::uint32_t num = 0, bool usn = false,
                               bool flg = false, bool mask = false) {
    const std::uint32_t cmd = static_cast<std::uint32_t>(VifCmd::Unpack) | (mask ? 0x10u : 0u) | static_cast<std::uint32_t>(fmt);
    return cmd << 24 | (num & 0xffu) << 16 | (flg ? 0x8000u : 0u) | (usn ? 0x4000u : 0u) | (vu_addr & 0x3ffu);
}

// ---- GS registers (the A+D address of each) ----

enum class GsReg : std::uint8_t {
    PRIM = 0x00, RGBAQ = 0x01, ST = 0x02, UV = 0x03, XYZF2 = 0x04, XYZ2 = 0x05,
    TEX0_1 = 0x06, TEX0_2 = 0x07, CLAMP_1 = 0x08, CLAMP_2 = 0x09, FOG = 0x0a, XYZF3 = 0x0c, XYZ3 = 0x0d,
    AD = 0x0e, NOP = 0x0f,
    TEX1_1 = 0x14, TEX1_2 = 0x15, TEX2_1 = 0x16, TEX2_2 = 0x17, XYOFFSET_1 = 0x18, XYOFFSET_2 = 0x19,
    PRMODECONT = 0x1a, PRMODE = 0x1b, TEXCLUT = 0x1c, SCANMSK = 0x22,
    MIPTBP1_1 = 0x34, MIPTBP1_2 = 0x35, MIPTBP2_1 = 0x36, MIPTBP2_2 = 0x37, TEXA = 0x3b, FOGCOL = 0x3d,
    TEXFLUSH = 0x3f, SCISSOR_1 = 0x40, SCISSOR_2 = 0x41, ALPHA_1 = 0x42, ALPHA_2 = 0x43, DIMX = 0x44,
    DTHE = 0x45, COLCLAMP = 0x46, TEST_1 = 0x47, TEST_2 = 0x48, PABE = 0x49, FBA_1 = 0x4a, FBA_2 = 0x4b,
    FRAME_1 = 0x4c, FRAME_2 = 0x4d, ZBUF_1 = 0x4e, ZBUF_2 = 0x4f,
    BITBLTBUF = 0x50, TRXPOS = 0x51, TRXREG = 0x52, TRXDIR = 0x53, HWREG = 0x54,
    SIGNAL = 0x60, FINISH = 0x61, LABEL = 0x62,
};

// one qword as four words in memory order
struct Qword {
    std::uint32_t w[4];
};

// one A+D qword: data low, data high, register, 0
constexpr Qword Ad(GsReg reg, std::uint64_t data) {
    return {{static_cast<std::uint32_t>(data), static_cast<std::uint32_t>(data >> 32), static_cast<std::uint32_t>(reg), 0u}};
}

// ---- GIF tags (128 bits) ----

enum class GifFlg : std::uint8_t { Packed = 0, Reglist = 1, Image = 2, Disable = 3 };

struct GifTag {
    std::uint64_t lo, hi;  // hi: the register descriptors, 4 bits each

    constexpr Qword words() const {
        return {{static_cast<std::uint32_t>(lo), static_cast<std::uint32_t>(lo >> 32), static_cast<std::uint32_t>(hi),
                 static_cast<std::uint32_t>(hi >> 32)}};
    }
};

constexpr GifTag MakeGifTag(std::uint32_t nloop, bool eop, GifFlg flg, std::uint32_t nreg, std::uint64_t regs,
                            bool pre = false, std::uint32_t prim = 0) {
    return {(nloop & 0x7fffu) | (eop ? 1ull << 15 : 0) | (pre ? 1ull << 46 : 0) | static_cast<std::uint64_t>(prim & 0x7ffu) << 47 |
                static_cast<std::uint64_t>(flg) << 58 | static_cast<std::uint64_t>(nreg & 15u) << 60,
            regs};
}
// PACKED, one A+D register per loop: `nloop` A+D qwords follow
constexpr GifTag GifTagAd(std::uint32_t nloop, bool eop = false) {
    return MakeGifTag(nloop, eop, GifFlg::Packed, 1, static_cast<std::uint64_t>(GsReg::AD));
}
// IMAGE: `qwc` qwords of a host-to-local transfer follow
constexpr GifTag GifTagImage(std::uint32_t qwc, bool eop = false) { return MakeGifTag(qwc, eop, GifFlg::Image, 0, 0); }

// ---- GS register values ----

namespace gs {

// ALPHA: Cv = (A - B) * C + D, with A, B, D one of Cs/Cd/0 and C one of As/Ad/FIX
enum AlphaColor : std::uint32_t { Cs = 0, Cd = 1, Zero = 2 };
enum AlphaFactor : std::uint32_t { As = 0, Ad = 1, Fix = 2 };
// `fix` is stored as the whole upper word, as the game does (the GS reads bits 32-39)
constexpr std::uint64_t Alpha(AlphaColor a, AlphaColor b, AlphaFactor c, AlphaColor d, std::uint32_t fix = 0) {
    return static_cast<std::uint64_t>(fix) << 32 | d << 6 | c << 4 | b << 2 | a;
}

// TEST: alpha test, destination alpha test, depth test
enum class Atst : std::uint32_t { Never, Always, Less, Lequal, Equal, Gequal, Greater, Notequal };
enum class Afail : std::uint32_t { Keep, FbOnly, ZbOnly, RgbOnly };
enum class Ztst : std::uint32_t { Never, Always, Gequal, Greater };
struct TestBits {
    bool ate = false;
    Atst atst = Atst::Never;
    std::uint32_t aref = 0;
    Afail afail = Afail::Keep;
    bool date = false;
    bool datm = false;  // destination alpha must be 1 (else 0)
    bool zte = false;
    Ztst ztst = Ztst::Never;
};
constexpr std::uint64_t Test(const TestBits &t) {
    return static_cast<std::uint64_t>(t.ate) | static_cast<std::uint64_t>(t.atst) << 1 | static_cast<std::uint64_t>(t.aref & 0xffu) << 4 |
           static_cast<std::uint64_t>(t.afail) << 12 | static_cast<std::uint64_t>(t.date) << 14 |
           static_cast<std::uint64_t>(t.datm) << 15 | static_cast<std::uint64_t>(t.zte) << 16 | static_cast<std::uint64_t>(t.ztst) << 17;
}

// FBA: force the alpha MSB of every written pixel (1) or not (0)
constexpr std::uint64_t Fba(bool on) { return on ? 1u : 0u; }

// Host-local transfers. Like the game, these OR the fields together without masking them, so a caller passes each
// field as the 64-bit value the original shifts (a sign-extended register stays sign-extended).
enum class TrxDirection : std::uint32_t { HostToLocal = 0, LocalToHost = 1, LocalToLocal = 2, Off = 3 };
constexpr std::uint64_t TrxDir(TrxDirection d) { return static_cast<std::uint32_t>(d); }
// BITBLTBUF: base pointer (64-word units), buffer width (64-pixel units) and pixel format of source and destination
constexpr std::uint64_t BitBltBuf(std::uint64_t sbp, std::uint64_t sbw, std::uint64_t spsm, std::uint64_t dbp,
                                  std::uint64_t dbw, std::uint64_t dpsm) {
    return sbp | sbw << 16 | spsm << 24 | dbp << 32 | dbw << 48 | dpsm << 56;
}
// TRXPOS: upper-left corners of the source and destination rectangles, pixel order
constexpr std::uint64_t TrxPos(std::uint64_t ssax, std::uint64_t ssay, std::uint64_t dsax, std::uint64_t dsay, std::uint64_t dir = 0) {
    return ssax | ssay << 16 | dsax << 32 | dsay << 48 | dir << 59;
}
// TRXREG: transfer width and height in pixels
constexpr std::uint64_t TrxReg(std::uint64_t w, std::uint64_t h) { return h << 32 | w; }

}

// ---- DMA tags (64 bits; in a VIF chain the upper word carries two VIFcodes) ----

enum class DmaId : std::uint32_t { Refe = 0, Cnt = 1, Next = 2, Ref = 3, Refs = 4, Call = 5, Ret = 6, End = 7 };

constexpr std::uint64_t DmaTag(DmaId id, std::uint32_t qwc, std::uint32_t addr = 0, bool irq = false, bool spr = false) {
    return (qwc & 0xffffu) | static_cast<std::uint64_t>(id) << 28 | (irq ? 1ull << 31 : 0) |
           static_cast<std::uint64_t>(addr & 0x7ffffff0u) << 32 | (spr ? 1ull << 63 : 0);
}

// ---- the frame's VIF1 chain ----

// The chain builder at 0x65E300 that 98 render functions append to inline (native-renderer.md §1.5). A packer opens
// a VIFcode with a zero size, writes the payload, then closes it: the size is computed from the write pointer and
// added into the open code.
struct Chain {
    static constexpr std::uint32_t kAddr = 0x0065E300u;

    ps2::gptr<std::uint32_t> ptr{kAddr};              // write pointer
    ps2::gptr<std::uint32_t> start{kAddr + 0x04};     // first tag: D1_TADR when fn_241410 kicks the chain
    ps2::gptr<std::uint32_t> open_tag{kAddr + 0x08};  // DMA tag whose QWC is patched when it is closed
    ps2::gptr<std::uint32_t> open_code{kAddr + 0x0c}; // VIFcode whose NUM is patched when it is closed (0: none)
    ps2::gptr<std::uint32_t> open_unit{kAddr + 0x10}; // of the open UNPACK: NUM step (1 << 16) | bits per element

    // appends one word, returns where it went
    std::uint32_t put(std::uint32_t word) const {
        const std::uint32_t p = ptr.get();
        ps2::wr<std::uint32_t>(p, word);
        ptr.set(p + 4);
        return p;
    }
    void put(const Qword &q) const {
        for (const std::uint32_t w : q.w) put(w);
    }

    // UNPACK with NUM 0, to be closed by close_unpack
    void open_unpack(UnpackFormat fmt, std::uint32_t vu_addr) const {
        open_code.set(put(Unpack(fmt, vu_addr)));
        open_unit.set(1u << 16 | UnpackElementBits(fmt));
    }

    // What closing an UNPACK computed, for the registers the original leaves behind.
    struct Closed {
        std::uint32_t code_addr;     // where the UNPACK is
        std::uint32_t element_bits;  // open_unit's low half (the DIVU divisor)
        std::uint32_t num;           // elements written (the DIVU quotient)
        std::uint32_t num_field;     // num << 16 (the MULT product)
        std::uint32_t code;          // the UNPACK with its NUM
    };
    // NUM = payload bits / bits per element by DIVU, times the NUM step by MULT (HI/LO end as the original's)
    Closed close_unpack(ps2::Cpu &c) const {
        Closed r{};
        r.code_addr = open_code.get();
        const std::uint32_t unit = open_unit.get();
        const std::uint32_t words = static_cast<std::uint32_t>(static_cast<std::int32_t>(ptr.get() - r.code_addr - 4u) >> 2);
        r.element_bits = unit & 0xffffu;
        ps2::mmi::divu(c, 0, words << 5, r.element_bits);
        r.num = c.lo.w[0];
        ps2::mmi::mult(c, 0, unit & 0xffff0000u, r.num);
        r.num_field = c.lo.w[0];
        r.code = ps2::rd<std::uint32_t>(r.code_addr) + r.num_field;
        ps2::wr<std::uint32_t>(r.code_addr, r.code);
        open_code.set(0);
        return r;
    }

    // STCYCL 4,4 and an UNPACK V4-32 of one qword to VU1 data address `vu_addr`: how the packers set one constant
    // (a matrix row, a colour, a GIF tag or an A+D register for the microcode to kick) in VU1 memory
    Closed unpack_qword(ps2::Cpu &c, std::uint32_t vu_addr, const Qword &q) const {
        put(Stcycl(4, 4));
        open_unpack(UnpackFormat::V4_32, vu_addr);
        put(q);
        return close_unpack(c);
    }
};

}
