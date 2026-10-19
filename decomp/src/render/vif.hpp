#pragma once

// The frame's VIF1 DMA chain and the packets the render code appends to it (decomp/notes/native-renderer.md §1.5):
// DMA tags, VIFcodes (STCYCL, UNPACK, DIRECT, BASE/OFFSET, MSCAL...), GIF tags, GS registers as A+D qwords, the
// sceVif1Packet that holds the write pointer, and the game's inlined sceVif1PkOpenUnpack/CloseUnpack.
//
// The game builds one chain per frame in EE RAM through the sceVif1Packet at 0x65e300 and fn_241410 kicks it from its
// start at the end of the frame. Its 98 writers (ps2render.cpp, meshdraw.cpp, TextureManager.cpp, ScreenCopy.cpp)
// append inline, mostly without calling Sony's packet library. The chain is EE RAM, so every byte of it is in the
// state hash: the encoders here are constexpr and return the exact bits the original stores, and the writers only name
// the original's stores, in its order.
//
//   const Chain chain;                            // the sceVif1Packet at 0x65e300
//   Packet pk{chain.ptr};                         // a cursor at the write pointer
//   pk.w32(vif::Stcycl(4, 4));
//   chain.open_unpack(pk, vif::V4_32, 0x28);      // UNPACK with NUM 0, left open
//   pk.ad(gs::ALPHA_1, alpha);                    // one A+D qword as VU1 data
//   chain.ptr = pk.p;
//   const Chain::Closed closed = chain.close_unpack(c, pk.p);
//
// Register values are composed as the game composes them: fields are not masked, because the game puts some values in
// wider than the field (ZBUF's PSM is the full PSMZ number, 0x30-0x3a, whose high bits land above the 4-bit field,
// where the GS ignores them; TEX1's K is a negated word) and every bit of the chain is hashed.
//
// This header lives in decomp/src so it counts towards the lockstep build id (cmake/build_id.cmake).
#include "ps2/decomp.hpp"

#include <cstdint>

namespace decomp::render {

// ---- one qword as four words in memory order ----

struct Qword {
    std::uint32_t w[4];
};

constexpr Qword MakeQword(std::uint64_t lo, std::uint64_t hi) {
    return {{static_cast<std::uint32_t>(lo), static_cast<std::uint32_t>(lo >> 32), static_cast<std::uint32_t>(hi),
             static_cast<std::uint32_t>(hi >> 32)}};
}

// ---- VIFcodes (one 32-bit word: CMD in bits 24-31, NUM in 16-23, IMMEDIATE in 0-15) ----

namespace vif {

enum Cmd : std::uint32_t {
    NOP = 0x00,
    STCYCL = 0x01,
    OFFSET = 0x02,
    BASE = 0x03,
    ITOP = 0x04,
    STMOD = 0x05,
    MSKPATH3 = 0x06,
    MARK = 0x07,
    FLUSHE = 0x10,
    FLUSH = 0x11,
    FLUSHA = 0x13,
    MSCAL = 0x14,
    MSCALF = 0x15,
    MSCNT = 0x17,
    STMASK = 0x20,
    STROW = 0x30,
    STCOL = 0x31,
    MPG = 0x4a,
    DIRECT = 0x50,
    DIRECTHL = 0x51,
    UNPACK = 0x60,  // | Format, | 0x10 for the masked form
};

inline constexpr std::uint32_t kIrq = 0x80000000u;  // interrupt bit: stall after this code

constexpr std::uint32_t Code(std::uint32_t cmd, std::uint32_t num, std::uint32_t imm) {
    return cmd << 24 | (num & 0xffu) << 16 | (imm & 0xffffu);
}

constexpr std::uint32_t Nop() { return Code(NOP, 0, 0); }
// write cycle: cl qwords per cycle are skipped over, wl written (cl = wl: plain consecutive)
constexpr std::uint32_t Stcycl(std::uint32_t cl, std::uint32_t wl) { return Code(STCYCL, 0, wl << 8 | cl); }
// double buffering: VU1 data addresses of the two input buffers (in qwords)
constexpr std::uint32_t Offset(std::uint32_t qw) { return Code(OFFSET, 0, qw); }
constexpr std::uint32_t Base(std::uint32_t qw) { return Code(BASE, 0, qw); }
constexpr std::uint32_t Itop(std::uint32_t v) { return Code(ITOP, 0, v); }
constexpr std::uint32_t Stmod(std::uint32_t mode) { return Code(STMOD, 0, mode); }
constexpr std::uint32_t Mskpath3(bool masked) { return Code(MSKPATH3, 0, masked ? 0x8000u : 0u); }
constexpr std::uint32_t Mark(std::uint32_t v) { return Code(MARK, 0, v); }
constexpr std::uint32_t Flushe() { return Code(FLUSHE, 0, 0); }
constexpr std::uint32_t Flush() { return Code(FLUSH, 0, 0); }
constexpr std::uint32_t Flusha() { return Code(FLUSHA, 0, 0); }
// start the VU1 program at addr (in doublewords, as MSCAL counts); MSCALF waits for GIF paths 1/2 first
constexpr std::uint32_t Mscal(std::uint32_t addr) { return Code(MSCAL, 0, addr); }
constexpr std::uint32_t Mscalf(std::uint32_t addr) { return Code(MSCALF, 0, addr); }
// continue the VU1 program where it stopped
constexpr std::uint32_t Mscnt() { return Code(MSCNT, 0, 0); }
constexpr std::uint32_t Stmask() { return Code(STMASK, 0, 0); }  // followed by the mask word
constexpr std::uint32_t Strow() { return Code(STROW, 0, 0); }    // followed by 4 words
constexpr std::uint32_t Stcol() { return Code(STCOL, 0, 0); }    // followed by 4 words
// num doublewords of microcode to VU1 address addr (in doublewords); num 0 means 256
constexpr std::uint32_t Mpg(std::uint32_t num, std::uint32_t addr) { return Code(MPG, num, addr); }
// qwc qwords of GIF data to PATH2; qwc 0 means 65536
constexpr std::uint32_t Direct(std::uint32_t qwc) { return Code(DIRECT, 0, qwc); }
constexpr std::uint32_t Directhl(std::uint32_t qwc) { return Code(DIRECTHL, 0, qwc); }

// UNPACK element formats: (components - 1) << 2 | (0 = 32, 1 = 16, 2 = 8 bits); V4-5 is 16-bit RGBA5551
enum Format : std::uint32_t {
    S_32 = 0x0,
    S_16 = 0x1,
    S_8 = 0x2,
    V2_32 = 0x4,
    V2_16 = 0x5,
    V2_8 = 0x6,
    V3_32 = 0x8,
    V3_16 = 0x9,
    V3_8 = 0xa,
    V4_32 = 0xc,
    V4_16 = 0xd,
    V4_8 = 0xe,
    V4_5 = 0xf,
};

// bits of one element in the VIF stream (what the game's packers divide the payload size by)
constexpr std::uint32_t element_bits(Format f) {
    if (f == V4_5) return 16;
    return (32u >> (f & 3u)) * ((f >> 2) + 1u);
}

// UNPACK flags (IMMEDIATE bits 14-15, and the masked form of CMD)
enum UnpackFlag : std::uint32_t {
    kUnsigned = 0x4000,  // USN: zero-extend 8/16-bit elements
    kAddTops = 0x8000,   // FLG: VU address relative to TOPS (double buffering)
};

// num elements of format f to VU1 data memory at addr (qwords); num 0 means 256
constexpr std::uint32_t Unpack(Format f, std::uint32_t addr, std::uint32_t num = 0, std::uint32_t flags = 0,
                               bool masked = false) {
    return Code(UNPACK | (masked ? 0x10u : 0u) | f, num, addr | flags);
}

// the NUM field of a code as a number to add to the code word
constexpr std::uint32_t num_field(std::uint32_t num) { return num << 16; }

}

// ---- DMA tags (source chain mode: 64 bits, then 64 bits the VIF sees as two VIFcodes) ----

namespace dma {

enum Id : std::uint32_t {
    REFE = 0,  // transfer qwc at addr, then end
    CNT = 1,   // transfer the qwc qwords after the tag, the next tag follows them
    NEXT = 2,  // transfer the qwc qwords after the tag, the next tag is at addr
    REF = 3,   // transfer qwc at addr, the next tag follows this one
    REFS = 4,  // REF with stall control
    CALL = 5,  // CNT, then push and continue at addr
    RET = 6,   // CNT, then pop
    END = 7,   // CNT, then end
};

inline constexpr std::uint64_t kIrq = 1ull << 31;

constexpr std::uint64_t Tag(Id id, std::uint32_t qwc, std::uint32_t addr = 0, std::uint64_t flags = 0) {
    return static_cast<std::uint64_t>(addr) << 32 | flags | static_cast<std::uint64_t>(id) << 28 | (qwc & 0xffffu);
}

constexpr std::uint32_t tag_id(std::uint64_t tag) { return static_cast<std::uint32_t>(tag >> 28) & 7u; }
constexpr std::uint32_t tag_qwc(std::uint64_t tag) { return static_cast<std::uint32_t>(tag) & 0xffffu; }

}

// ---- GS registers (as GIF A+D addresses) and register values ----

namespace gs {

enum Reg : std::uint32_t {
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
    AD = 0x0e,  // GIFtag REGS nibble: A+D
    NOP = 0x0f,
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
    HWREG = 0x54,
    SIGNAL = 0x60,
    FINISH = 0x61,
    LABEL = 0x62,
};

// RGBAQ: RGBA in bits 0-31, Q (a float's bits) in 32-63
constexpr std::uint64_t Rgbaq(std::uint32_t rgba, std::uint32_t q_bits) {
    return std::uint64_t{rgba} | std::uint64_t{q_bits} << 32;
}

// ZBUF: z buffer base (in 8 KB pages), format, write mask
constexpr std::uint64_t Zbuf(std::uint64_t zbp, std::uint64_t psm, bool zmsk) {
    return zbp | psm << 24 | static_cast<std::uint64_t>(zmsk) << 32;
}

// FRAME: frame buffer base (8 KB pages), width (64 pixels), format, write mask
constexpr std::uint64_t Frame(std::uint64_t fbp, std::uint64_t fbw, std::uint64_t psm = 0, std::uint64_t fbmsk = 0) {
    return fbp | fbw << 16 | psm << 24 | fbmsk << 32;
}

// TEST: alpha test (ATE, ATST, AREF, AFAIL), destination alpha test (DATE, DATM: destination alpha must be 1, else
// 0), depth test (ZTE, ZTST)
enum Atst : std::uint32_t { A_NEVER, A_ALWAYS, A_LESS, A_LEQUAL, A_EQUAL, A_GEQUAL, A_GREATER, A_NOTEQUAL };
enum Afail : std::uint32_t { KEEP, FB_ONLY, ZB_ONLY, RGB_ONLY };
enum Ztst : std::uint32_t { Z_NEVER, Z_ALWAYS, Z_GEQUAL, Z_GREATER };
constexpr std::uint64_t Test(bool ate, Atst atst, std::uint32_t aref, Afail afail, bool zte, Ztst ztst,
                             bool date = false, bool datm = false) {
    return static_cast<std::uint64_t>(ate) | atst << 1 | aref << 4 | afail << 12 | static_cast<std::uint32_t>(date) << 14 |
           static_cast<std::uint32_t>(datm) << 15 | static_cast<std::uint32_t>(zte) << 16 | ztst << 17;
}

// ALPHA: Cv = (A - B) * C / 128 + D. A, B, D select Cs / Cd / 0; C selects As / Ad / FIX. FIX is stored as the whole
// upper word, as the game does (the GS reads bits 32-39).
enum BlendColor : std::uint32_t { Cs, Cd, Zero };
enum BlendAlpha : std::uint32_t { As, Ad, Fix };
constexpr std::uint64_t Alpha(BlendColor a, BlendColor b, BlendAlpha c, BlendColor d, std::uint64_t fix = 0) {
    return fix << 32 | d << 6 | c << 4 | b << 2 | a;
}

// FBA: force the alpha MSB of every written pixel (1) or not (0)
constexpr std::uint64_t Fba(bool on) { return on ? 1u : 0u; }

// TEXA: alpha of 24/16-bit texels (TA0, AEM, TA1)
constexpr std::uint64_t Texa(std::uint32_t ta0, bool aem, std::uint32_t ta1) {
    return std::uint64_t{ta0} | std::uint64_t{aem} << 15 | std::uint64_t{ta1} << 32;
}

// CLAMP: wrap mode per axis (no region: the MINU/MAXU fields stay 0)
enum Wrap : std::uint32_t { REPEAT, CLAMP, REGION_CLAMP, REGION_REPEAT };
constexpr std::uint64_t Clamp(Wrap wms, Wrap wmt) { return wmt << 2 | wms; }

// TEX1: texture filtering and mipmap LOD. The game ORs its fields together unmasked (each one a sign-extended word),
// with K negated as a whole word in the upper half; bits() does the same, so stray high bits stay as the original
// leaves them.
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

// Host-local transfers. Like the game, these OR the fields together without masking them, so a caller passes each
// field as the 64-bit value the original shifts (a sign-extended register stays sign-extended).
enum TrxDirection : std::uint32_t { HOST_TO_LOCAL = 0, LOCAL_TO_HOST = 1, LOCAL_TO_LOCAL = 2, TRX_OFF = 3 };
constexpr std::uint64_t TrxDir(TrxDirection d) { return d; }
// BITBLTBUF: base pointer (64-word units), buffer width (64-pixel units) and pixel format of source and destination
constexpr std::uint64_t BitBltBuf(std::uint64_t sbp, std::uint64_t sbw, std::uint64_t spsm, std::uint64_t dbp,
                                  std::uint64_t dbw, std::uint64_t dpsm) {
    return sbp | sbw << 16 | spsm << 24 | dbp << 32 | dbw << 48 | dpsm << 56;
}
// TRXPOS: upper-left corners of the source and destination rectangles, pixel order
constexpr std::uint64_t TrxPos(std::uint64_t ssax, std::uint64_t ssay, std::uint64_t dsax, std::uint64_t dsay,
                               std::uint64_t dir = 0) {
    return ssax | ssay << 16 | dsax << 32 | dsay << 48 | dir << 59;
}
// TRXREG: transfer width and height in pixels
constexpr std::uint64_t TrxReg(std::uint64_t w, std::uint64_t h) { return h << 32 | w; }

}

// ---- GIFtags ----

namespace gif {

enum Flg : std::uint32_t { PACKED = 0, REGLIST = 1, IMAGE = 2, DISABLE = 3 };

// NLOOP, EOP, PRE/PRIM, FLG and NREG (0 means 16) in the low 64 bits; the register list is the high 64
constexpr std::uint64_t Tag(std::uint32_t nloop, bool eop, Flg flg, std::uint32_t nreg, bool pre = false,
                            std::uint32_t prim = 0) {
    return static_cast<std::uint64_t>(nreg & 0xfu) << 60 | static_cast<std::uint64_t>(flg) << 58 |
           static_cast<std::uint64_t>(prim & 0x7ffu) << 47 | static_cast<std::uint64_t>(pre) << 46 |
           static_cast<std::uint64_t>(eop) << 15 | (nloop & 0x7fffu);
}
constexpr Flg flg(std::uint64_t tag) { return static_cast<Flg>(tag >> 58 & 3); }
constexpr std::uint32_t nreg(std::uint64_t tag) { return static_cast<std::uint32_t>(tag >> 60); }  // 0 means 16

// A whole 128-bit tag: the low 64 bits (Tag) and the register list, 4 bits per register.
struct Tag128 {
    std::uint64_t lo, hi;

    constexpr Qword words() const { return MakeQword(lo, hi); }
};
// PACKED, one A+D register per loop: nloop A+D qwords follow
constexpr Tag128 AdTag(std::uint32_t nloop, bool eop = false) { return {Tag(nloop, eop, PACKED, 1), gs::AD}; }
// IMAGE: qwc qwords of a host-to-local transfer follow
constexpr Tag128 ImageTag(std::uint32_t qwc, bool eop = false) { return {Tag(qwc, eop, IMAGE, 0), 0}; }

}

// ---- A+D qwords: the 64-bit register value, then the register address in the next 64 bits ----

constexpr Qword Ad(gs::Reg reg, std::uint64_t value) { return MakeQword(value, reg); }

// One A+D qword at `at`, stored as the game stores it: four words (value low, value high, address, 0).
inline void put_ad(std::uint32_t at, gs::Reg reg, std::uint64_t value) {
    ps2::wr<std::uint32_t>(at, static_cast<std::uint32_t>(value));
    ps2::wr<std::uint32_t>(at + 4, static_cast<std::uint32_t>(value >> 32));
    ps2::wr<std::uint32_t>(at + 8, reg);
    ps2::wr<std::uint32_t>(at + 12, 0);
}

// ---- a write cursor ----

// Appends words to a packet in guest memory without touching its write pointer (the original keeps the pointer in a
// register and stores it once). p is the guest address of the next word.
struct Packet {
    std::uint32_t p;

    void w32(std::uint32_t v) {
        ps2::st32(p, v);
        p += 4;
    }
    // two words, low first (the original's sw pairs; the cursor need not be 8-aligned)
    void w64(std::uint64_t v) {
        w32(static_cast<std::uint32_t>(v));
        w32(static_cast<std::uint32_t>(v >> 32));
    }
    void ad(gs::Reg reg, std::uint64_t value) {
        put_ad(p, reg, value);
        p += 16;
    }
};

// ---- the frame chain: a sceVif1Packet ----

// The game's packets are libvifpk's sceVif1Packet: the frame chain at 0x65e300 (its writers address it as
// 0x660000 - 0x1d00 and pass it to the library, e.g. sceVif1PkAddGsAD(0x65e300, ...)), and TextureManager's upload
// packet at 0x6783e0 (Chain{0x006783E0u}).
struct Chain {
    static constexpr std::uint32_t kAddr = 0x0065E300u;

    std::uint32_t addr = kAddr;
    ps2::Field<std::uint32_t> ptr{addr + 0x00};    // pCurrent: where the next word goes
    ps2::Field<std::uint32_t> start{addr + 0x04};  // pBase: the chain's first tag (D1_TADR at the kick)
    ps2::Field<std::uint32_t> tag{addr + 0x08};    // pDmaTag: the open DMA tag, QWC patched at its close (0: none)
    ps2::Field<std::uint32_t> code{addr + 0x0c};   // pVifCode: the open UNPACK/DIRECT, size patched at its close
    // numlen: how the open code counts its size, the step of its size field (1: NUM, bit 16) << 16 | bits per element
    // (0x80 for V4-32): the close adds (data bits / element bits) * (code_unit & 0xffff0000) to the code
    ps2::Field<std::uint32_t> code_unit{addr + 0x10};
    ps2::Field<std::uint32_t> gif_tag{addr + 0x14};  // pGifTag: the open GIF tag, NLOOP patched at its close

    // Appends one word through the write pointer (loaded, stored to, advanced and stored back for each word, as the
    // inlined sceVif1PkAddCode does). Returns where it went.
    std::uint32_t put(std::uint32_t word) const {
        const std::uint32_t p = ptr;
        ps2::wr<std::uint32_t>(p, word);
        ptr = p + 4;
        return p;
    }
    void put(const Qword &q) const {
        for (const std::uint32_t w : q.w) put(w);
    }

    // ---- sceVif1PkOpenUnpack / sceVif1PkCloseUnpack, as the game inlines them ----

    // An UNPACK with NUM 0, left open (code, code_unit): through the write pointer ...
    void open_unpack(vif::Format format, std::uint32_t vu_addr) const {
        code = put(vif::Unpack(format, vu_addr));
        code_unit = vif::num_field(1) | vif::element_bits(format);
    }
    // ... or at a cursor
    void open_unpack(Packet &pk, vif::Format format, std::uint32_t vu_addr) const {
        code = pk.p;
        pk.w32(vif::Unpack(format, vu_addr));
        code_unit = vif::num_field(1) | vif::element_bits(format);
    }

    // What a close leaves in the original's registers.
    struct Closed {
        std::uint32_t at;            // the code's address
        std::uint32_t code;          // the code with its NUM
        std::uint32_t element_bits;  // code_unit & 0xffff (the DIVU divisor)
        std::uint32_t num;           // the elements written (the DIVU quotient)
        std::uint32_t num_field;     // num * the NUM step (the MULT product)
    };

    // Closes the open code at end (the address after its data): NUM = (words after the code) * 32 / element bits,
    // added in units of the NUM step, with the original's DIVU then MULT (HI/LO end as the MULT leaves them).
    // break_pc: the address of the zero-divisor BREAK where the original has one (the game has one only on some of
    // its closes), 0 for none.
    Closed close_unpack(ps2::Cpu &c, std::uint32_t end, std::uint32_t break_pc = 0) const {
        const std::uint32_t unit = code_unit, at = code;
        const std::uint32_t elem_bits = unit & 0xffffu, step = unit & 0xffff0000u;
        const std::uint32_t bits = static_cast<std::uint32_t>(static_cast<std::int32_t>(end - 4u - at) >> 2) << 5;
        if (break_pc && elem_bits == 0) ps2::breakpoint(c, break_pc);
        ps2::mmi::divu(c, 0, bits, elem_bits);
        const std::uint32_t num = c.lo.w[0];
        ps2::mmi::mult(c, 0, step, num);
        const std::uint32_t word = ps2::rd<std::uint32_t>(at) + c.lo.w[0];
        ps2::wr<std::uint32_t>(at, word);
        code = 0;
        return {at, word, elem_bits, num, c.lo.w[0]};
    }
    // ... at the write pointer, without a BREAK
    Closed close_unpack(ps2::Cpu &c) const { return close_unpack(c, ptr); }

    // STCYCL 4,4 and an UNPACK V4-32 of one qword to VU1 data address vu_addr, all through the write pointer: how the
    // packers set one constant (a matrix row, a colour, a GIF tag or an A+D register for the microcode to kick) in
    // VU1 memory
    Closed unpack_qword(ps2::Cpu &c, std::uint32_t vu_addr, const Qword &q) const {
        put(vif::Stcycl(4, 4));
        open_unpack(vif::V4_32, vu_addr);
        put(q);
        return close_unpack(c);
    }
};

}
