// fn_23a280, the VU1 segment packer (Ps2/Renderer/Character/ps2render.cpp). See decomp/notes/segment-packer.md for
// the record it receives, the packets it emits and the native renderer's view of it.
//
// One call packs one mesh segment of one instance into the frame's VIF1 chain ([0x65e300]): a DMA `call` to the
// segment's prebuilt vertex stream, preceded by the inline data that VU1 needs before the stream runs (the segment's
// matrices and lights as UNPACKs, the GS state as a DIRECT GIF packet, BASE/OFFSET and the MSCAL of the init program),
// and, for some materials, a second and a third pass over the same stream with their own GS state.
//
// How this file is written. The original is one 8.9 KB function built from the packet library's inline macros, and
// the exactness contract covers every register it leaves, so each step below does what the original's instructions do,
// in their order, on the original's registers: the register-level code is the specification, the comments and the
// helper names say what each step builds. Ticks are the recompiled blocks' charges, at the same points; every loop
// polls where the original's backward branch does, and every call is made from the original's state at that jal.
#include "packer_codes.hpp"
#include "ps2/decomp.hpp"
#include "ps2/decomp_vu0.hpp"

namespace {

using namespace ps2;
using namespace ps2::gpr;
using namespace decomp::render;

using u32 = std::uint32_t;
using u64 = std::uint64_t;
using s32 = std::int32_t;
using s64 = std::int64_t;

// ---- globals the packer reads and writes ----

// The VIF1 chain writer (ps2render): the frame's one write pointer and the open packets whose sizes are patched when
// they are closed.
constexpr u32 kChain = 0x65E300;         // +0x00 write pointer
constexpr u32 kChainTag = 0x08;          // +0x08 the open DMA tag (its QWC grows when the next one is opened)
constexpr u32 kChainVifCode = 0x0C;      // +0x0c the open DIRECT or UNPACK code (its size is patched when closed)
constexpr u32 kChainUnpackUnit = 0x10;   // +0x10 how an open UNPACK's NUM grows (vif::kUnpackV4_32Unit)
constexpr u32 kChainGifTag = 0x14;       // +0x14 the open GIF tag (its NLOOP is patched when closed)

constexpr u32 kLastFlags = 0x65E458;     // the flags of the last segment whose GS state was sent (-1: none)
constexpr u32 kLastMaterial = 0x661900;  // with +4: the material words (seg+0x158/+0x15c) of that GS state
constexpr u32 kGifTemplate = 0x5850F8;   // GIF tag {NLOOP 0, EOP, PACKED, NREG 1, A+D}
constexpr u32 kUnpackHeader = 0x4F4D90;  // {NOP, NOP, STCYCL 4/4, UNPACK V4-32 NUM 4} | VU address in word 3

constexpr u32 kFrame = 0x1B0;

// $30 (fp) by its other name: `fp` is also the FPU namespace
constexpr unsigned s8 = gpr::fp;

// ---- register-level helpers (one per instruction shape the original uses) ----

inline u32 W(const Cpu &c, unsigned r) { return c.r[r].w[0]; }
inline u64 &D(Cpu &c, unsigned r) { return c.r[r].d[0]; }
inline void li(Cpu &c, unsigned r, u32 v) { set32(c.r[r], v); }          // any 32-bit result (lui, addiu, addu, lw)
inline void mov(Cpu &c, unsigned d, unsigned s) { c.r[d].d[0] = c.r[s].d[0]; }  // move = daddu d, s, zero
inline void lw(Cpu &c, unsigned r, u32 a) { set32(c.r[r], ld32(a)); }
inline void sra(Cpu &c, unsigned d, unsigned s, int n) { set32(c.r[d], static_cast<u32>(static_cast<s32>(W(c, s)) >> n)); }
inline void movn(Cpu &c, unsigned d, unsigned s, unsigned t) { if (D(c, t)) D(c, d) = D(c, s); }
inline void sltu(Cpu &c, unsigned d, unsigned s, unsigned t) { D(c, d) = D(c, s) < D(c, t) ? 1 : 0; }
inline void lo32(Cpu &c, unsigned d, unsigned s) { D(c, d) = static_cast<u64>(static_cast<s64>(D(c, s) << 32) >> 32); }  // dsll32+dsra32
inline void hi32(Cpu &c, unsigned d, unsigned s) { D(c, d) = static_cast<u64>(static_cast<s64>(D(c, s)) >> 32); }        // dsra32
inline u32 sp_at(const Cpu &c, u32 off) { return W(c, sp) + off; }
// mfc1: a GPR gets an FPR's bits
inline void mfc1(Cpu &c, unsigned r, unsigned f) { set32(c.r[r], c.f[f]); }
// the 128-bit value {x, y, z, w} from four GPR words, as pextlw t0, y, x; pextlw t1, w, z; pcpyld t0, t1, t0
inline void pack4(Cpu &c, unsigned x, unsigned y, unsigned z, unsigned w) {
    mmi::pextlw(c.r[t0], c.r[y], c.r[x]);
    mmi::pextlw(c.r[t1], c.r[w], c.r[z]);
    mmi::pcpyld(c.r[t0], c.r[t1], c.r[t0]);
}

// ---- the packet library's inline steps ----

// sceVif1PkAlign-style: zero words until the pointer in register p is qword aligned. On entry `test` = p & 0xc (the
// caller's block computed it); the loop recomputes it in `t` (the same register except in two places); `entry` is
// the nop the original runs before entering the loop, if any.
bool zero_to_qword(Cpu &c, unsigned p, unsigned test, unsigned t, u32 loop_pc, int entry) {
    if (D(c, test) == 0) return true;
    tick(c, entry);
    for (;;) {
        st32(W(c, p), 0);
        li(c, p, W(c, p) + 4);
        D(c, t) = D(c, p) & 12;
        tick(c, 6);
        if (D(c, t) == 0) return true;
        if (poll(c, loop_pc)) return false;
    }
}

// Zero words through the chain pointer (register `chain` holds &chain.p) while it is below the limit; v0/v1 are the
// loop's pointer and test. On entry `cond` holds p < limit (the caller's block computed it).
bool zero_until(Cpu &c, unsigned chain, unsigned limit, unsigned cond, u32 loop_pc, int entry) {
    if (D(c, cond) == 0) return true;
    tick(c, entry);
    for (;;) {
        lw(c, v0, W(c, chain));
        st32(W(c, v0), 0);
        li(c, v0, W(c, v0) + 4);
        sltu(c, v1, v0, limit);
        st32(W(c, chain), W(c, v0));
        tick(c, 7);
        if (D(c, v1) == 0) return true;
        if (poll(c, loop_pc)) return false;
    }
}

// Pads the chain up to a qword boundary: a1 = the boundary (p rounded up), a0/v1 its two candidates' test and value,
// v0 = p < a1. v0 holds p on entry and a1 nothing the result depends on (it held the -16 mask or is overwritten).
void round_up_to_qword(Cpu &c) {
    D(c, a1) = D(c, v0) & ~u64{15};
    sltu(c, a0, a1, v0);
    li(c, v1, W(c, a1) + 16);
    movn(c, a1, v1, a0);
    sltu(c, v0, v0, a1);
}

// Pads so that the next word is the last of a qword (a VIF code whose data must start qword aligned): `limit` =
// (p & ~15) + 12, or + 28 when that is below p; `cond` its test, then v0 = p < limit. v0 holds p, `mask` -16.
void round_up_to_code(Cpu &c, unsigned mask, unsigned limit, unsigned cond) {
    D(c, mask) = D(c, v0) & D(c, mask);
    li(c, limit, W(c, mask) + 12);
    sltu(c, cond, limit, v0);
    li(c, mask, W(c, mask) + 28);
    movn(c, limit, mask, cond);
    sltu(c, v0, v0, limit);
}

// Closes the open DMA tag (sceVif1PkCloseDmaTag): its QWC grows by the qwords written after it. `chain` holds the
// chain's address, `p` the write pointer; a0 = the tag, v0/v1 the size and the patched word.
void close_dma_tag(Cpu &c, unsigned chain, unsigned p) {
    lw(c, a0, W(c, chain) + kChainTag);
    tick(c, 3);
    if (D(c, a0) == 0) return;
    li(c, v0, W(c, p) - W(c, a0));
    lw(c, v1, W(c, a0));
    sra(c, v0, v0, 4);
    li(c, v0, W(c, v0) - 1);
    li(c, v1, W(c, v1) + W(c, v0));
    st32(W(c, a0), W(c, v1));
    tick(c, 6);
}

// Closes the open DIRECT (sceVif1PkCloseDirectCode): its size becomes the qwords written after it. `chain` holds the
// chain's address; a0 = the code, v0/v1 the size and the patched code.
void close_direct(Cpu &c, unsigned chain) {
    lw(c, v0, kChain);
    lw(c, a0, W(c, chain) + kChainVifCode);
    li(c, v0, W(c, v0) - 4);
    li(c, v0, W(c, v0) - W(c, a0));
    lw(c, v1, W(c, a0));
    sra(c, v0, v0, 2);
    li(c, v0, W(c, v0) >> 2);
    li(c, v1, W(c, v1) + W(c, v0));
    st32(W(c, a0), W(c, v1));
    st32(W(c, chain) + kChainVifCode, 0);
}

// The registers of one inlined sceGifPkCloseGifTag: the chain's address, the tag's low dword, the dword count (holds
// the write pointer on entry), the NLOOP result and the register holding FLG_IMAGE (2).
struct GifCloseRegs {
    unsigned chain, dword, count, nloop, image;
};

// Closes the open GIF tag: NLOOP = the A+D pairs written since it was opened (PACKED: one per qword; REGLIST: one per
// dword; divided by NREG unless IMAGE). `head` is the tick of the caller's block this starts in. Then reloads the
// write pointer into v1 with v0 = v1 & 0xc for the align that follows.
void close_gif_tag(Cpu &c, GifCloseRegs r, int head) {
    lw(c, t0, W(c, r.chain) + kChainGifTag);
    D(c, r.dword) = ld64(W(c, t0));
    li(c, r.count, W(c, r.count) - W(c, t0));
    sra(c, r.count, r.count, 3);
    D(c, v1) = D(c, r.dword) >> 58;
    li(c, r.nloop, W(c, r.count) - 2);
    D(c, v1) &= 3;
    li(c, a0, W(c, r.nloop) >> 1);
    D(c, v0) = D(c, v1) ^ 1;
    movn(c, r.nloop, a0, v0);
    tick(c, head);
    if (D(c, v1) != D(c, r.image)) {
        D(c, v0) = D(c, r.dword) >> 60;  // NREG, 0 meaning 16
        li(c, a0, 16);
        if (D(c, v0) == 0) D(c, v0) = D(c, a0);
        li(c, v1, W(c, r.nloop) + W(c, v0));
        tick(c, 6);
        li(c, v1, W(c, v1) - 1);
        mmi::divu(c, 0, W(c, v1), W(c, v0));
        D(c, v1) = c.lo.d[0];
        D(c, r.nloop) = D(c, v1);
        tick(c, 4);
    }
    D(c, v0) = (D(c, r.nloop) << 32) >> 32;
    D(c, v0) = D(c, r.dword) + D(c, v0);
    st64(W(c, t0), D(c, v0));
    st32(W(c, r.chain) + kChainGifTag, 0);
    lw(c, v1, kChain);
    D(c, v0) = D(c, v1) & 12;
    tick(c, 9);
}

// One UNPACK block of a 4x4 matrix: the header template with the VU address (register `vu`) in its UNPACK code, then
// the four rows from `src`, at the chain pointer held in `p` (not advanced here). Leaves the header in a1, the rows in
// a2-t1 and the address word in a0, as the original's lq/pextlw/por/sq sequence does.
void unpack_matrix(Cpu &c, unsigned header, unsigned src, unsigned vu, unsigned p) {
    ld128(W(c, header) & ~15u, c.r[a1]);
    for (unsigned i = 0; i < 4; ++i) ld128((W(c, src) + 16 * i) & ~15u, c.r[a2 + i]);
    mmi::pextlw(c.r[a0], c.r[vu], c.r[zero]);
    mmi::pextlw(c.r[a0], c.r[a0], c.r[zero]);
    mmi::por(c.r[a1], c.r[a1], c.r[a0]);
    for (unsigned i = 0; i < 5; ++i) st128((W(c, p) + 16 * i) & ~15u, c.r[a1 + i]);
}

// The A+D pair for PRIM at the pointer in `p`: the value's low and high words go through `lo` and `hi`.
void write_prim(Cpu &c, unsigned p, unsigned value, unsigned lo, unsigned hi) {
    hi32(c, hi, value);
    lo32(c, lo, value);
    st32(W(c, p), W(c, lo));
    st32(W(c, p) + 4, W(c, hi));
    st32(W(c, p) + 8, gs::PRIM);
    st32(W(c, p) + 12, 0);
}

// The antialiasing decision for PRIM (AA1), from the global AA mode [0x4f6e94] already in a0 (v1 = 1): mode 1 always,
// mode 0 when the segment's +0x138 bit 1 asks for it, mode 2 always; modes 0 and 2 never for a segment with any of the
// +0x130 bits 0x61000ce000000000 or a call with flag 0x100. Sets AA1 in register `prim`.
void prim_antialias(Cpu &c, unsigned prim) {
    constexpr u32 seg_flags = 0x130, seg_options = 0x138;
    auto no_aa_bits = [&] {  // v0 = seg[0x130] & 0x61000ce000000000 (built in v1 as the original does)
        D(c, v0) = ld64(W(c, s3) + seg_flags);
        D(c, v1) = 0 | 49664ull;
        D(c, v1) <<= 19;
        D(c, v1) |= 52736ull;
        D(c, v1) <<= 28;
        D(c, v0) &= D(c, v1);
        tick(c, 8);
        return D(c, v0) != 0;
    };
    auto flag_100 = [&] {
        D(c, v0) = D(c, s1) & 0x100;
        tick(c, 3);
        return D(c, v0) != 0;
    };
    bool aa = false;
    if (D(c, a0) == D(c, v1)) {
        aa = true;
    } else {
        D(c, v0) = c.r[a0].sd[0] < 2 ? 1 : 0;
        tick(c, 3);
        if (D(c, v0) == 0) {
            li(c, v0, 2);
            tick(c, 3);
            if (D(c, a0) == D(c, v0)) {
                aa = !no_aa_bits() && !flag_100();
            } else {
                tick(c, 2);
            }
        } else {
            tick(c, 2);
            if (D(c, a0) == 0) {
                if (!no_aa_bits() && !flag_100()) {
                    D(c, v0) = ld64(W(c, s3) + seg_options) & 2;
                    tick(c, 4);
                    if (D(c, v0) != 0) {
                        tick(c, 2);
                        aa = true;
                    }
                }
            } else {
                tick(c, 2);
            }
        }
    }
    if (aa) {
        li(c, v0, gs::kAa1);
        D(c, prim) |= D(c, v0);
        tick(c, 2);
    }
}

}  // namespace

namespace {

// ---- the phases of fn_23a280 ----

// The frame (0x1b0: saved s0-s7, s8, ra; locals from sp+0) and the call's inputs moved to saved registers:
// s3 = the segment record, s4 = the model, s1 = the flags, sp+0xf4 = the VU1 program (a2 / 8), sp+0..0xf = the
// A+D GIF tag template; a1 = the chain pointer, a3 = the segment's vertex stream, v0 = p & 0xc for the first align.
void enter(Cpu &c) {
    StackFrame f(c, kFrame);
    li(c, v0, 0x580000);
    f.sq(s1, 0x190);
    li(c, v1, W(c, v0) + 0x50F8);
    f.sq(s2, 0x180);
    li(c, t1, 0x660000);
    f.sq(s3, 0x170);
    mov(c, s1, a3);
    f.sq(s4, 0x160);
    mov(c, s3, a0);
    f.sq(s6, 0x140);
    mov(c, s4, a1);
    f.sq(s0, 0x1A0);
    sra(c, a2, a2, 3);
    f.sq(s5, 0x150);
    mov(c, s2, t1);
    f.sq(s7, 0x130);
    li(c, t3, W(c, t1) - 0x1D00);  // kChain
    f.sq(s8, 0x120);
    li(c, s6, 0x680000);
    f.sd(ra, 0x110);
    lw(c, a1, kChain);
    D(c, t2) = ld64(W(c, v1) + 8);
    D(c, v1) = ld64(kGifTemplate);
    lw(c, a3, W(c, s3) + 0x13C);
    D(c, v0) = D(c, a1) & 12;
    st64(sp_at(c, 0), D(c, v1));
    st32(sp_at(c, 0xF4), W(c, a2));
    st64(sp_at(c, 8), D(c, t2));
    tick(c, 31);
}

// Opens the DMA `call` to the segment's prebuilt vertex stream (seg+0x13c): everything packed until the next tag is
// this call's inline data, and the stream runs after it. Then pads to a qword (the tag's two VIF code slots are NOPs).
bool open_stream_call(Cpu &c) {
    if (!zero_to_qword(c, a1, v0, v0, 0x23A300, 1)) return false;
    close_dma_tag(c, t3, a1);
    st32(W(c, t3), W(c, a1));
    li(c, a0, dma::tag(dma::call));
    st32(W(c, t3) + kChainTag, W(c, a1));
    li(c, v0, 0x9FFFFFFF);
    st32(W(c, a1), W(c, a0));
    li(c, v1, W(c, a1) + 4);
    st32(W(c, t3), W(c, v1));
    D(c, v0) = D(c, a3) & D(c, v0);  // dma::addr(stream)
    li(c, v1, W(c, a1) + 8);
    st32(W(c, a1) + 4, W(c, v0));
    li(c, a2, kChain);
    st32(W(c, t3), W(c, v1));
    li(c, a1, 0u - 16);
    st32(W(c, t3) + kChainVifCode, 0);
    D(c, s5) = D(c, s1) & 2;
    lw(c, v0, kChain);
    round_up_to_qword(c);
    tick(c, 24);
    return zero_until(c, a2, a1, v0, 0x23A3A0, 1);
}

}  // namespace

namespace {

// The base PRIM of a pass: textured Gouraud alpha-blended strips (0x5c), fogged (0x7c) when the global fog mode
// [0x4f4c08] is 2, or is nonzero and the flags have 0x80. The mode is in `mode`; the choice lands in `prim` (which
// holds 0x5c on entry). `fog_bit` is how the original tests flag 0x80: ANDed into v1 (the character path) or the
// precomputed s7 (the main pass).
void prim_fog(Cpu &c, unsigned mode, unsigned prim, bool fog_in_s7) {
    if (D(c, mode) == 0) return;
    li(c, v0, 2);
    tick(c, 3);
    if (D(c, mode) == D(c, v0)) {
        li(c, prim, gs::kTriStrip | gs::kIip | gs::kTme | gs::kFge | gs::kAbe);
        tick(c, 3);
    } else if (fog_in_s7) {
        li(c, v0, 0x7C);
        movn(c, prim, v0, s7);
        tick(c, 2);
    } else {
        D(c, v1) = D(c, s1) & 0x80;
        li(c, v0, 0x7C);
        movn(c, prim, v0, v1);
        tick(c, 3);
    }
}

// Path 1 (types 2-5 with flag 2, when [0x4f5034] and not seg+0x138 & 4): fn_246258 packs the whole constant block
// (character layout, VU 0x00-0x2d), so this only sends PRIM (when [0x67b724] bit 1) and kicks the program with the
// character double buffer (BASE 0x2e, OFFSET 0x1e9). Writes 1 to the caller's flag (t0 = 0x65e2c8).
bool pack_by_constants_writer(Cpu &c) {
    li(c, v0, 1);
    li(c, a0, W(c, s6) - 0x48E0);  // 0x67b720
    st32(W(c, t0), W(c, v0));
    lw(c, v1, W(c, a0) + 4);
    sra(c, v1, v1, 1);
    D(c, v1) &= 1;
    tick(c, 8);
    if (D(c, v1) != 0) {
        // DIRECT { GIF tag (A+D), PRIM }
        lw(c, v0, kChain);
        li(c, v1, 0u - 16);
        li(c, a3, kChain);
        li(c, s8, 0x4F0000);
        round_up_to_code(c, v1, a1, a0);
        tick(c, 12);
        if (!zero_until(c, a3, a1, v0, 0x23A438, 1)) return false;
        lw(c, v0, W(c, a3));
        li(c, a0, vif::direct());
        li(c, a1, kChain);
        li(c, a2, W(c, s8) + 0x4B40);
        li(c, v1, W(c, v0) + 4);
        st32(W(c, a3) + kChainVifCode, W(c, v0));
        st32(W(c, a3), W(c, v1));
        st32(W(c, v0), W(c, a0));
        li(c, a3, gs::kTriStrip | gs::kIip | gs::kTme | gs::kAbe);
        lw(c, v1, kChain);
        ld128(W(c, sp) & ~15u, c.r[v0]);
        st32(W(c, a1) + kChainGifTag, W(c, v1));
        st128(W(c, v1) & ~15u, c.r[v0]);
        lw(c, v0, kChain);
        lw(c, a2, W(c, a2) + 0xC8);  // [0x4f4c08] fog mode
        li(c, v0, W(c, v0) + 16);
        st32(kChain, W(c, v0));
        tick(c, 19);
        prim_fog(c, a2, a3, false);
        li(c, v0, 0x4F0000);
        li(c, v1, 1);
        li(c, v0, W(c, v0) + 0x6E70);
        lw(c, a0, W(c, v0) + 0x24);  // [0x4f6e94] AA mode
        tick(c, 6);
        prim_antialias(c, a3);
        lw(c, v0, kChain);
        write_prim(c, v0, a3, v1, a1);
        li(c, t1, kChain);
        li(c, a0, W(c, v0) + 16);
        li(c, a2, gif::image);
        st32(kChain, W(c, a0));
        close_gif_tag(c, {t1, a3, a0, a1, a2}, 24);
        if (!zero_to_qword(c, v1, v0, v0, 0x23A630, 0)) return false;
        st32(W(c, t1), W(c, v1));
        li(c, a1, kChain);
        close_direct(c, a1);
        tick(c, 12);
    }
    // fn_246258(model, node record E = model+0x18 + seg[0] * 0x1c0, seg, flags)
    lw(c, a1, W(c, s3));
    li(c, v0, 0x1C0);
    lw(c, v1, W(c, s4) + 0x18);
    mov(c, a0, s4);
    mmi::mult(c, 0, W(c, a1), W(c, v0));
    D(c, a1) = c.lo.d[0];
    mov(c, a2, s3);
    mov(c, a3, s1);
    li(c, a1, W(c, v1) + W(c, a1));
    tick(c, 10);
    if (!call(c, 0x246258, Ra{0x23A6A0})) return false;
    // BASE 0x2e, OFFSET 0x1e9, MSCAL program; the GS state cache is invalid now
    lw(c, v1, kChain);
    li(c, v0, vif::base(0x2E));
    li(c, a0, vif::offset(0x1E9));
    st32(W(c, v1), W(c, v0));
    li(c, v1, W(c, v1) + 4);
    li(c, v0, vif::mscal(0));
    st32(kChain, W(c, v1));
    li(c, a1, W(c, v1) + 4);
    st32(W(c, v1), W(c, a0));
    li(c, a2, W(c, v1) + 8);
    lw(c, a0, sp_at(c, 0xF4));
    st32(kChain, W(c, a1));
    D(c, v0) = D(c, a0) | D(c, v0);
    li(c, a1, 0x660000);
    st32(W(c, v1) + 4, W(c, v0));
    li(c, a0, 0xFFFFFFFF);
    st32(kChain, W(c, a2));
    st32(kLastFlags, W(c, a0));
    tick(c, 22);
    return true;
}

// The point (+0x164, +0x168) of the segment's UV scroll as a 4-qword UNPACK to VU 0x10: {0, 0, 0, hook}, {u, v, 0, 0},
// 0, 0, with hook = the image C label 0x4a5190 as an MSCAL address; marks the segment record's +0x130 bits 46 and 47.
bool pack_uv_scroll(Cpu &c) {
    li(c, v0, 0x4A0000);
    li(c, v1, 0x4A0000);
    li(c, v1, W(c, v1) + 0x20B0);
    li(c, v0, W(c, v0) + 0x5190);
    li(c, v0, W(c, v0) - W(c, v1));
    li(c, a0, 0xFFFFFFFF);
    D(c, a0) = c.r[a0].sd[0] < c.r[v0].sd[0] ? 1 : 0;
    li(c, v1, W(c, v0) + 7);
    movn(c, v1, v0, a0);
    li(c, s0, sp_at(c, 0x10));
    sra(c, v1, v1, 3);
    mov(c, a0, s0);
    st32(sp_at(c, 0x90), W(c, v1));
    D(c, a1) = 0;
    li(c, a2, 0x40);
    tick(c, 17);
    if (!call(c, 0x20F750, Ra{0x23A798})) return false;  // FastMemset(sp+0x10, 0, 0x40)
    li(c, a0, sp_at(c, 0x1C));
    li(c, a1, sp_at(c, 0x90));
    li(c, a2, 4);
    tick(c, 5);
    if (!call(c, 0x20FDE0, Ra{0x23A7AC})) return false;  // FastMemcpy(sp+0x1c, &hook, 4)
    c.f[0] = ld32(W(c, s3) + 0x164);
    li(c, v1, 0x4F0000);
    c.f[1] = ld32(W(c, s3) + 0x168);
    li(c, v1, kUnpackHeader);
    st32(sp_at(c, 0x20), c.f[0]);
    li(c, t2, 0x10);
    st32(sp_at(c, 0x24), c.f[1]);
    lw(c, v0, kChain);
    unpack_matrix(c, v1, s0, t2, v0);
    li(c, v0, W(c, v0) + 0x50);
    D(c, a0) = 0 | 0x8000ull;
    D(c, a0) <<= 31;
    st32(kChain, W(c, v0));
    D(c, v1) = 0 | 0x8000ull;
    D(c, v1) <<= 32;
    D(c, v0) = ld64(W(c, s3) + 0x130);
    D(c, v0) |= D(c, a0);
    D(c, v0) |= D(c, v1);
    st64(W(c, s3) + 0x130, D(c, v0));
    tick(c, 31);
    return true;
}

// Fog to VU 4-5 as STCYCL 4/4 + UNPACK V4-32 of two qwords: VU 4 = vf1, VU 5 = vf2 (built by the caller), staged
// through sp+`stage` and sp+`stage`+0x10; then closes the UNPACK (NUM = 2).
void unpack_fog(Cpu &c, u32 stage) {
    lw(c, a0, kChain);
    li(c, v0, vif::stcycl(4, 4));
    li(c, t1, kChain);
    st32(W(c, a0), W(c, v0));
    li(c, v1, vif::unpack_v4_32(4));
    li(c, a0, W(c, a0) + 4);
    st32(kChain, W(c, a0));
    li(c, v0, vif::kUnpackV4_32Unit);
    st32(W(c, t1) + kChainVifCode, W(c, a0));
    st32(W(c, a0), W(c, v1));
    li(c, a2, W(c, a0) + 4);
    vu0::sqc2(c, vu0::vf1, sp_at(c, stage));
    li(c, t0, W(c, a0) + 20);
    st32(W(c, t1) + kChainUnpackUnit, W(c, v0));
    li(c, a3, W(c, a0) + 32);
    li(c, t3, 0xFFFF0000);
    D(c, a1) = ld64(sp_at(c, stage));
    D(c, v1) = ld64(W(c, t2) + 8);
    st32(kChain, W(c, a2));
    lo32(c, v0, a1);
    st32(W(c, a0) + 4, W(c, v0));
    hi32(c, a1, a1);
    hi32(c, v0, v1);
    st32(W(c, a2) + 4, W(c, a1));
    lo32(c, v1, v1);
    st32(W(c, a2) + 12, W(c, v0));
    st32(W(c, a2) + 8, W(c, v1));
    li(c, t2, W(c, a0) + 36);
    vu0::sqc2(c, vu0::vf2, sp_at(c, stage + 0x10));
    st32(kChain, W(c, t0));
    D(c, v0) = ld64(sp_at(c, stage + 0x10));
    D(c, v1) = ld64(W(c, t4) + 8);
    lo32(c, a1, v0);
    hi32(c, a2, v1);
    st32(W(c, a0) + 20, W(c, a1));
    hi32(c, v0, v0);
    lo32(c, v1, v1);
    st32(W(c, t0) + 4, W(c, v0));
    st32(W(c, t0) + 8, W(c, v1));
    st32(W(c, t0) + 12, W(c, a2));
    st32(kChain, W(c, t2));
    // close the UNPACK: NUM += (bits written) / 128
    lw(c, a1, W(c, t1) + kChainVifCode);
    lw(c, a0, W(c, t1) + kChainUnpackUnit);
    li(c, a3, W(c, a3) - W(c, a1));
    sra(c, a3, a3, 2);
    D(c, v1) = D(c, a0) & 0xFFFF;
    li(c, a3, W(c, a3) << 5);
    D(c, a0) = D(c, a0) & D(c, t3);
    mmi::divu(c, 0, W(c, a3), W(c, v1));
    tick(c, 58);
    lw(c, v0, W(c, a1));
    D(c, a3) = c.lo.d[0];
    mmi::mult(c, 0, W(c, a0), W(c, a3));
    D(c, a0) = c.lo.d[0];
    li(c, v0, W(c, v0) + W(c, a0));
    st32(W(c, a1), W(c, v0));
    st32(W(c, t1) + kChainVifCode, 0);
    tick(c, 6);
}

// at = a float constant, then into an FPR (lui at; mtc1 at)
inline void fconst(Cpu &c, unsigned f, u32 bits) {
    li(c, at, bits);
    c.f[f] = W(c, at);
}

// The fog record [0x65e380] (+0xc near, +0x10 far, +0x14/+0x18 as ints) as VU 4-5 (flag 0x80):
//   VU 4 = (255 - r18, 255 - r14, 0, ((far + near) * -255 / (far - near) + 255) / 2), VU 5 = (0, 0, 0, far near 255 / (far - near))
bool pack_fog(Cpu &c) {
    li(c, v0, 0x660000);
    fconst(c, 7, 0xC37F0000);  // -255
    lw(c, v1, W(c, v0) - 0x1C80);
    li(c, a0, 0u - 16);
    fconst(c, 4, 0x437F0000);  // 255
    li(c, a3, kChain);
    c.f[2] = fp::cvt_s_w(ld32(W(c, v1) + 0xC));
    lw(c, a1, kChain);
    c.f[1] = fp::cvt_s_w(ld32(W(c, v1) + 0x10));
    fconst(c, 8, 0x3F000000);  // 0.5
    c.f[5] = fp::cvt_s_w(ld32(W(c, v1) + 0x18));
    D(c, a0) = D(c, a1) & D(c, a0);
    c.f[3] = fp::cvt_s_w(ld32(W(c, v1) + 0x14));
    li(c, a2, W(c, a0) + 8);
    c.f[0] = fp::add(c.f[1], c.f[2]);
    sltu(c, v0, a2, a1);
    c.f[6] = fp::sub(c.f[1], c.f[2]);
    li(c, a0, W(c, a0) + 24);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    movn(c, a2, a0, v0);
    c.f[0] = fp::mul(c.f[0], c.f[7]);
    D(c, v0) = 0;
    c.f[5] = fp::sub(c.f[4], c.f[5]);
    sltu(c, a1, a1, a2);
    c.f[1] = fp::mul(c.f[1], c.f[4]);
    li(c, t2, sp_at(c, 0xA0));
    fpu_div(c, 0, c.f[0], c.f[6]);
    li(c, t4, sp_at(c, 0xB0));
    c.f[3] = fp::sub(c.f[4], c.f[3]);
    fpu_div(c, 1, c.f[1], c.f[6]);
    mfc1(c, t7, 5);
    mfc1(c, s0, 3);
    c.f[0] = fp::add(c.f[0], c.f[4]);
    mfc1(c, t3, 1);
    c.f[0] = fp::mul(c.f[0], c.f[8]);
    pack4(c, v0, v0, v0, t3);
    c.vu0.vf[2] = c.r[t0];
    mfc1(c, v1, 0);
    pack4(c, t7, s0, v0, v1);
    c.vu0.vf[1] = c.r[t0];
    tick(c, 57);
    // pad so STCYCL and UNPACK are the last two words of a qword
    if (!zero_until(c, a3, a2, a1, 0x23A988, 1)) return false;
    unpack_fog(c, 0xA0);
    return true;
}

// The fog override of render mode 3 ([0x4f4be0] = 3) for segments with seg+0x20 = 0 or 2: VU 4 = (0, 55, 0, the same
// fog scale), VU 5 = (0, 0, 0, far near 255 / (far - near)).
bool pack_fog_mode3(Cpu &c) {
    li(c, v1, 0x660000);
    fconst(c, 7, 0xC37F0000);
    lw(c, a0, W(c, v1) - 0x1C80);
    li(c, v0, 0u - 16);
    fconst(c, 5, 0x437F0000);
    li(c, a2, kChain);
    c.f[2] = fp::cvt_s_w(ld32(W(c, a0) + 0xC));
    lw(c, a1, kChain);
    c.f[1] = fp::cvt_s_w(ld32(W(c, a0) + 0x10));
    fconst(c, 6, 0x3F000000);
    D(c, v0) = D(c, a1) & D(c, v0);
    fconst(c, 4, 0x425C0000);  // 55
    li(c, a0, W(c, v0) + 8);
    li(c, t2, sp_at(c, 0xC0));
    c.f[0] = fp::add(c.f[1], c.f[2]);
    sltu(c, v1, a0, a1);
    c.f[3] = fp::sub(c.f[1], c.f[2]);
    li(c, v0, W(c, v0) + 24);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    movn(c, a0, v0, v1);
    c.f[0] = fp::mul(c.f[0], c.f[7]);
    D(c, v0) = 0;
    mfc1(c, a3, 4);
    sltu(c, a1, a1, a0);
    c.f[1] = fp::mul(c.f[1], c.f[5]);
    li(c, t4, sp_at(c, 0xD0));
    fpu_div(c, 0, c.f[0], c.f[3]);
    fpu_div(c, 1, c.f[1], c.f[3]);
    c.f[0] = fp::add(c.f[0], c.f[5]);
    mfc1(c, v1, 1);
    c.f[0] = fp::mul(c.f[0], c.f[6]);
    pack4(c, v0, v0, v0, v1);
    c.vu0.vf[2] = c.r[t0];
    mfc1(c, t3, 0);
    pack4(c, v0, a3, v0, t3);
    c.vu0.vf[1] = c.r[t0];
    tick(c, 52);
    if (!zero_until(c, a2, a0, a1, 0x23ABA0, 0)) return false;
    unpack_fog(c, 0xC0);
    return true;
}

// The lights of a lit segment (flag 2): the light direction matrix 0x6619e0 to VU 4 and the light colour matrix
// 0x6619a0 to VU 8; when [0x67b724] bit 0, the colour matrix goes through sp+0x10 with its [0].w cleared.
void pack_lights(Cpu &c) {
    li(c, v1, W(c, s6) - 0x48E0);
    lw(c, v0, W(c, v1) + 4);
    D(c, v0) &= 1;
    tick(c, 5);
    if (D(c, v0) != 0) {
        li(c, v0, 0x660000);
        li(c, t4, 0x4F0000);
        li(c, v0, W(c, v0) + 0x19E0);
        li(c, t4, kUnpackHeader);
        li(c, v1, 4);
        lw(c, t3, kChain);
        unpack_matrix(c, t4, v0, v1, t3);
        li(c, t2, 0x660000);
        li(c, t5, W(c, t3) + 0x50);
        li(c, v0, W(c, t2) + 0x19A0);
        // copy 0x6619a0 to sp+0x10 through the FPRs (the original's struct copy), row by row
        c.f[3] = ld32(W(c, t2) + 0x19A0);
        c.f[1] = ld32(W(c, v0) + 8);
        li(c, v1, W(c, v0) + 0x10);
        c.f[0] = ld32(W(c, v0) + 0xC);
        li(c, a0, W(c, v0) + 0x20);
        c.f[2] = ld32(W(c, v0) + 4);
        li(c, a1, W(c, v0) + 0x30);
        mfc1(c, a2, 3);
        li(c, t6, 8);
        mfc1(c, t7, 1);
        li(c, t2, sp_at(c, 0x10));
        mfc1(c, s0, 0);
        c.f[0] = ld32(W(c, v1) + 8);
        c.f[3] = ld32(W(c, v0) + 0x10);
        c.f[1] = ld32(W(c, v1) + 4);
        mfc1(c, a3, 2);
        c.f[5] = ld32(W(c, v1) + 0xC);
        pack4(c, a2, a3, t7, s0);
        c.vu0.vf[4] = c.r[t0];
        c.f[8] = ld32(W(c, v0) + 0x30);
        c.f[4] = ld32(W(c, v0) + 0x20);
        mfc1(c, v0, 3);
        mfc1(c, v1, 1);
        mfc1(c, a2, 0);
        c.f[6] = ld32(W(c, a0) + 0xC);
        c.f[7] = ld32(W(c, a1) + 0xC);
        c.f[2] = ld32(W(c, a0) + 4);
        c.f[1] = ld32(W(c, a0) + 8);
        c.f[0] = ld32(W(c, a1) + 8);
        c.f[3] = ld32(W(c, a1) + 4);
        mfc1(c, a3, 5);
        pack4(c, v0, v1, a2, a3);
        c.vu0.vf[3] = c.r[t0];
        mfc1(c, t7, 4);
        mfc1(c, s0, 2);
        mfc1(c, v0, 1);
        mfc1(c, v1, 6);
        mfc1(c, a0, 8);
        pack4(c, t7, s0, v0, v1);
        c.vu0.vf[2] = c.r[t0];
        mfc1(c, a1, 3);
        mfc1(c, a2, 0);
        mfc1(c, a3, 7);
        pack4(c, a0, a1, a2, a3);
        c.vu0.vf[1] = c.r[t0];
        vu0::sqc2(c, vu0::vf4, sp_at(c, 0x10));
        vu0::sqc2(c, vu0::vf3, sp_at(c, 0x20));
        vu0::sqc2(c, vu0::vf2, sp_at(c, 0x30));
        vu0::sqc2(c, vu0::vf1, sp_at(c, 0x40));
        st32(kChain, W(c, t5));
        st32(sp_at(c, 0x1C), 0);
        unpack_matrix(c, t4, t2, t6, t5);
        li(c, t3, W(c, t3) + 0xA0);
        st32(kChain, W(c, t3));
        tick(c, 98);
    } else {
        li(c, v0, 0x660000);
        li(c, t3, 0x4F0000);
        li(c, v0, W(c, v0) + 0x19E0);
        li(c, t3, kUnpackHeader);
        li(c, v1, 4);
        lw(c, t2, kChain);
        unpack_matrix(c, t3, v0, v1, t2);
        li(c, t4, W(c, t2) + 0x50);
        li(c, v0, 0x660000);
        li(c, v0, W(c, v0) + 0x19A0);
        st32(kChain, W(c, t4));
        li(c, v1, 8);
        unpack_matrix(c, t3, v0, v1, t4);
        li(c, t2, W(c, t2) + 0xA0);
        st32(kChain, W(c, t2));
        tick(c, 39);
    }
}

}  // namespace

namespace {

// The point light (flag 0x8000000) to VU 6-7: its world position [0x4f4c78] moved into the node's local space with
// the inverse of the node's world matrix (E+0x50), w = -1 / radius² (radius [0x4f4c74]); then its colour
// [0x4f4c88]. STCYCL 4/4 + UNPACK V4-32 of two qwords, staged at sp+0x10/0x20.
bool pack_point_light(Cpu &c) {
    li(c, v1, 0x4F0000);
    li(c, a2, 0x4F0000);
    li(c, v0, W(c, v1) + 0x4C88);
    c.f[2] = ld32(W(c, v1) + 0x4C88);
    c.f[0] = ld32(W(c, v0) + 4);
    li(c, v1, W(c, a2) + 0x4C78);
    c.f[1] = ld32(W(c, v0) + 8);
    li(c, s0, sp_at(c, 0x50));
    c.f[3] = ld32(W(c, v0) + 0xC);
    mov(c, a0, s0);
    st32(sp_at(c, 0x40), c.f[2]);
    st32(sp_at(c, 0x48), c.f[1]);
    st32(sp_at(c, 0x44), c.f[0]);
    st32(sp_at(c, 0x4C), c.f[3]);
    c.f[3] = ld32(W(c, v1) + 8);
    for (u32 i = 0; i < 4; ++i) st32(sp_at(c, 0x30 + 4 * i), 0);
    lw(c, t2, sp_at(c, 0xF0));
    c.f[0] = ld32(W(c, v1) + 4);
    c.f[2] = ld32(W(c, a2) + 0x4C78);
    li(c, a1, W(c, t2) + 0x50);
    fconst(c, 1, 0x3F800000);
    // the original's struct copy sp+0x30..0x4f -> sp+0x10..0x2f (ldl/ldr, sdl/sdr pairs)
    const unsigned via[4] = {t3, t7, v0, v1};
    for (u32 i = 0; i < 4; ++i) {
        ldl(c.r[via[i]], sp_at(c, 0x37 + 8 * i));
        ldr(c.r[via[i]], sp_at(c, 0x30 + 8 * i));
    }
    for (u32 i = 0; i < 4; ++i) {
        sdl(c.r[via[i]], sp_at(c, 0x17 + 8 * i));
        sdr(c.r[via[i]], sp_at(c, 0x10 + 8 * i));
    }
    st32(sp_at(c, 0x10), c.f[2]);
    st32(sp_at(c, 0x14), c.f[0]);
    st32(sp_at(c, 0x18), c.f[3]);
    st32(sp_at(c, 0x1C), c.f[1]);
    tick(c, 47);
    if (!call(c, 0x214058, Ra{0x23AFC8})) return false;  // MatrixInverseRigid(sp+0x50, E+0x50)

    c.f[4] = ld32(sp_at(c, 0x1C));
    li(c, v0, 0x4F0000);
    c.f[0] = ld32(sp_at(c, 0x18));
    li(c, v1, vif::stcycl(4, 4));
    c.f[3] = ld32(sp_at(c, 0x10));
    c.f[2] = ld32(sp_at(c, 0x14));
    li(c, a2, kChain);
    vu0::lqc2(c, vu0::vf5, W(c, s0));
    mfc1(c, a3, 0);
    vu0::lqc2(c, vu0::vf4, W(c, s0) + 0x10);
    fconst(c, 1, 0xBF800000);  // -1
    vu0::lqc2(c, vu0::vf3, W(c, s0) + 0x20);
    mfc1(c, a0, 3);
    vu0::lqc2(c, vu0::vf2, W(c, s0) + 0x30);
    mfc1(c, a1, 2);
    c.f[0] = ld32(W(c, v0) + 0x4C74);
    mov(c, t3, a2);
    mfc1(c, t2, 4);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    pack4(c, a0, a1, a3, t2);
    c.vu0.vf[1] = c.r[t0];
    // vf1 = the inverse matrix (vf5..vf2) times the light position (vf1)
    vu0::vmulabc(c, vu0::XYZW, vu0::vf5, vu0::vf1, vu0::Lane::x);
    vu0::vmaddabc(c, vu0::XYZW, vu0::vf4, vu0::vf1, vu0::Lane::y);
    vu0::vmaddabc(c, vu0::XYZW, vu0::vf3, vu0::vf1, vu0::Lane::z);
    vu0::vmaddbc(c, vu0::XYZW, vu0::vf1, vu0::vf2, vu0::vf1, vu0::Lane::w);
    lw(c, v0, kChain);
    vu0::sqc2(c, vu0::vf1, sp_at(c, 0x10));
    li(c, a1, vif::unpack_v4_32(6));
    fpu_div(c, 1, c.f[1], c.f[0]);
    li(c, a0, vif::kUnpackV4_32Unit);
    li(c, t1, 0xFFFFFFFF);
    li(c, t0, sp_at(c, 0x10));
    li(c, t2, 1);
    st32(sp_at(c, 0x1C), c.f[1]);
    st32(W(c, v0), W(c, v1));
    li(c, v0, W(c, v0) + 4);
    st32(kChain, W(c, v0));
    li(c, v1, W(c, v0) + 4);
    st32(W(c, a2) + kChainVifCode, W(c, v0));
    mov(c, a3, v1);
    st32(W(c, v0), W(c, a1));
    st32(W(c, a2) + kChainUnpackUnit, W(c, a0));
    st32(kChain, W(c, v1));
    tick(c, 52);
    // the two qwords, word by word
    for (;;) {
        D(c, v0) = ld64(W(c, t0));
        li(c, t2, W(c, t2) - 1);
        D(c, v1) = ld64(W(c, t0) + 8);
        hi32(c, a0, v0);
        li(c, t0, W(c, t0) + 16);
        hi32(c, a1, v1);
        lo32(c, v0, v0);
        lo32(c, v1, v1);
        st32(W(c, a3), W(c, v0));
        st32(W(c, a3) + 4, W(c, a0));
        st32(W(c, a3) + 8, W(c, v1));
        st32(W(c, a3) + 12, W(c, a1));
        li(c, a3, W(c, a3) + 16);
        tick(c, 17);
        if (D(c, t2) == D(c, t1)) break;
        if (poll(c, 0x23B098)) return false;
    }
    // close the UNPACK (NUM = 2), pad to a qword
    st32(W(c, t3), W(c, a3));
    li(c, t0, kChain);
    li(c, v1, 0xFFFF0000);
    li(c, a3, 0u - 16);
    lw(c, v0, kChain);
    lw(c, a2, W(c, t0) + kChainVifCode);
    li(c, v0, W(c, v0) - 4);
    lw(c, a1, W(c, t0) + kChainUnpackUnit);
    li(c, v0, W(c, v0) - W(c, a2));
    sra(c, v0, v0, 2);
    D(c, a0) = D(c, a1) & 0xFFFF;
    li(c, v0, W(c, v0) << 5);
    D(c, a1) = D(c, a1) & D(c, v1);
    mmi::divu(c, 0, W(c, v0), W(c, a0));
    tick(c, 16);
    lw(c, v1, W(c, a2));
    D(c, v0) = c.lo.d[0];
    mmi::mult(c, 0, W(c, a1), W(c, v0));
    D(c, a1) = c.lo.d[0];
    li(c, v1, W(c, v1) + W(c, a1));
    st32(W(c, a2), W(c, v1));
    st32(W(c, t0) + kChainVifCode, 0);
    lw(c, v0, kChain);
    round_up_to_qword(c);
    tick(c, 14);
    return zero_until(c, t0, a1, v0, 0x23B158, 1);
}

// The main pass's GS state and kick: FLUSH, DIRECT { GIF tag, PRIM (when [0x67b724] bit 1), the material's A+D
// state from fn_237660 unless it is what the last segment sent }, FLUSH, BASE 0x18, OFFSET 0x1f4, MSCAL program.
// Leaves v0 = seg+0x138 & 0x100 (the linked-texture pass test).
bool pack_gs_state_and_kick(Cpu &c) {
    lw(c, v0, kChain);
    li(c, v1, vif::flush());
    li(c, a0, 0u - 16);
    li(c, t0, kChain);
    st32(W(c, v0), W(c, v1));
    li(c, v0, W(c, v0) + 4);
    D(c, a0) = D(c, v0) & D(c, a0);
    st32(kChain, W(c, v0));
    li(c, a1, W(c, a0) + 12);
    sltu(c, v1, a1, v0);
    li(c, a0, W(c, a0) + 28);
    movn(c, a1, a0, v1);
    sltu(c, v0, v0, a1);
    tick(c, 15);
    if (!zero_until(c, t0, a1, v0, 0x23B210, 0)) return false;
    // DIRECT and the GIF tag
    lw(c, v0, W(c, t0));
    li(c, a1, vif::direct());
    li(c, a2, kChain);
    li(c, a3, W(c, s6) - 0x48E0);
    li(c, v1, W(c, v0) + 4);
    st32(W(c, t0) + kChainVifCode, W(c, v0));
    st32(W(c, t0), W(c, v1));
    st32(W(c, v0), W(c, a1));
    lw(c, a0, kChain);
    ld128(W(c, sp) & ~15u, c.r[v0]);
    st32(W(c, a2) + kChainGifTag, W(c, a0));
    st128(W(c, a0) & ~15u, c.r[v0]);
    lw(c, v1, W(c, a3) + 4);
    lw(c, v0, kChain);
    sra(c, v1, v1, 1);
    li(c, v0, W(c, v0) + 16);
    D(c, v1) &= 1;
    st32(kChain, W(c, v0));
    tick(c, 20);
    if (D(c, v1) != 0) {
        li(c, v0, W(c, s8) + 0x4B40);
        li(c, a1, gs::kTriStrip | gs::kIip | gs::kTme | gs::kAbe);
        lw(c, v1, W(c, v0) + 0xC8);
        tick(c, 5);
        prim_fog(c, v1, a1, true);
        li(c, v0, 0x4F0000);
        li(c, v1, 1);
        lw(c, a0, W(c, v0) + 0x6E94);
        tick(c, 5);
        prim_antialias(c, a1);
        lw(c, v1, kChain);
        write_prim(c, v1, a1, v0, a0);
        li(c, a1, W(c, v1) + 16);
        st32(kChain, W(c, a1));
        tick(c, 10);
    }
    // render mode 3 always resends the material state
    li(c, v0, W(c, s8) + 0x4B40);
    li(c, a0, 3);
    lw(c, v1, W(c, v0) + 0xA0);
    tick(c, 5);
    if (D(c, v1) == D(c, a0)) {
        li(c, v0, 0xFFFFFFFF);
        li(c, v1, 0x660000);
        st32(kLastFlags, W(c, v0));
        tick(c, 3);
    }
    // the material's GS state unless the last segment sent the same (flags, seg+0x158, seg+0x15c)
    bool send = true;
    li(c, a0, 0x660000);
    lw(c, v0, kLastFlags);
    tick(c, 4);
    if (D(c, s1) == D(c, v0)) {
        D(c, v0) = D(c, s1) & 0x100;
        tick(c, 3);
        if (D(c, v0) == 0) {
            li(c, v0, 0x660000);
            lw(c, a0, W(c, s3) + 0x15C);
            lw(c, v1, kLastMaterial + 4);
            tick(c, 5);
            if (D(c, a0) == D(c, v1)) {
                li(c, v0, 0x660000);
                lw(c, a0, W(c, s3) + 0x158);
                lw(c, v1, kLastMaterial);
                tick(c, 5);
                send = D(c, a0) != D(c, v1);
            }
        }
    }
    if (send) {
        mov(c, a1, s4);
        mov(c, a2, s1);
        mov(c, a0, s3);
        mov(c, a3, sp);
        tick(c, 6);
        if (!call(c, 0x237660, Ra{0x23B410})) return false;  // fn_237660(seg, model, flags, sp)
    }
    // close the GIF tag and the DIRECT
    li(c, t1, kChain);
    lw(c, v0, kChain);
    li(c, a1, gif::image);
    close_gif_tag(c, {t1, a3, v0, a2, a1}, 15);
    if (!zero_to_qword(c, v1, v0, v0, 0x23B498, 0)) return false;
    st32(W(c, t1), W(c, v1));
    li(c, t0, vif::flush());
    li(c, t1, kChain);
    li(c, a2, vif::base(0x18));
    close_direct(c, t1);
    li(c, a3, vif::offset(0x1F4));
    lw(c, t2, sp_at(c, 0xF4));
    li(c, a1, vif::mscal(0));
    D(c, a1) = D(c, t2) | D(c, a1);
    // FLUSH, BASE, OFFSET, MSCAL
    lw(c, v0, kChain);
    st32(W(c, v0), W(c, t0));
    li(c, v0, W(c, v0) + 4);
    st32(kChain, W(c, v0));
    li(c, v1, W(c, v0) + 4);
    st32(W(c, v0), W(c, a2));
    li(c, a0, W(c, v0) + 8);
    st32(kChain, W(c, v1));
    li(c, t0, W(c, v0) + 12);
    st32(W(c, v0) + 4, W(c, a3));
    st32(kChain, W(c, a0));
    st32(W(c, v0) + 8, W(c, a1));
    st32(kChain, W(c, t0));
    D(c, v0) = ld64(W(c, s3) + 0x138) & 0x100;
    tick(c, 37);
    return true;
}

// A second (or third) pass's call: DMA `call` to the segment's vertex stream again (address in `stream`), with
// MSCALF `prog` in the tag's first VIF slot. `chain` holds the chain's address, `p` the aligned write pointer.
void open_stream_call_mscalf(Cpu &c, unsigned chain, unsigned p, unsigned stream, unsigned prog) {
    st32(W(c, chain), W(c, p));
    li(c, a0, dma::tag(dma::call));
    st32(W(c, chain) + kChainTag, W(c, p));
    li(c, v0, 0x9FFFFFFF);
    st32(W(c, p), W(c, a0));
    li(c, v1, W(c, p) + 4);
    st32(W(c, chain), W(c, v1));
    D(c, v0) = D(c, stream) & D(c, v0);  // dma::addr(stream)
    li(c, a0, W(c, p) + 8);
    st32(W(c, p) + 4, W(c, v0));
    li(c, v1, vif::mscalf(0));
    st32(W(c, chain), W(c, a0));
    D(c, v1) = D(c, prog) | D(c, v1);
    st32(W(c, chain) + kChainVifCode, 0);
    lw(c, v0, kChain);
    st32(W(c, v0), W(c, v1));
    li(c, v0, W(c, v0) + 4);
    st32(kChain, W(c, v0));
    tick(c, 19);
}

// The pass's identity matrix in vf4-vf7 (vf4 = (0,0,0,1), each next one rotated by vmr32), stored as rows at `dst`
void identity_rows(Cpu &c, unsigned dst) {
    vu0::vsub(c, vu0::XYZW, vu0::vf4, vu0::vf0, vu0::vf0);
    vu0::vadd(c, vu0::W, vu0::vf4, vu0::vf4, vu0::vf0);
    vu0::vmr32(c, vu0::XYZW, vu0::vf5, vu0::vf4);
    vu0::vmr32(c, vu0::XYZW, vu0::vf6, vu0::vf5);
    vu0::vmr32(c, vu0::XYZW, vu0::vf7, vu0::vf6);
    vu0::sqc2(c, vu0::vf4, W(c, dst) + 0x30);
    vu0::sqc2(c, vu0::vf5, W(c, dst) + 0x20);
    vu0::sqc2(c, vu0::vf6, W(c, dst) + 0x10);
    vu0::sqc2(c, vu0::vf7, W(c, dst));
}

}  // namespace

namespace {

// The second pass of a segment with seg+0x138 & 0x100 (a material whose texture has a link-C texture, drawn over it
// with program 0x2230 of image C): a DMA cnt packet with FLUSH, the link texture's UV transform (fn_26df48: scale
// and offset) to VU 0x10, the node matrix product 0x661a70 (fn_213ce8) to VU 0xc, the light direction matrix to VU 4
// and the light colours (with [3].w + 128 and [0].w = 0) to VU 8; DIRECT { FBA_1 0, TEX0_1 of the link texture
// (TCC, MODULATE), TEST_1 0x53001, ALPHA_1 0x44, CLAMP_1 0, TEXFLUSH }; FLUSHA, BASE 0x18, OFFSET 0x1f4; then a
// second call of the vertex stream with MSCALF 0x2230.
bool pack_linked_pass(Cpu &c) {
    lw(c, t3, sp_at(c, 0xF0));
    mov(c, a2, t0);
    li(c, t7, sp_at(c, 0xE8));
    li(c, s0, sp_at(c, 0xEC));
    li(c, t3, W(c, t3) + 0x50);
    D(c, v0) = D(c, a2) & 12;
    li(c, s5, sp_at(c, 0x10));
    st32(sp_at(c, 0xF8), W(c, t3));
    li(c, s7, sp_at(c, 0xE0));
    li(c, s8, sp_at(c, 0xE4));
    st32(sp_at(c, 0xFC), W(c, t7));
    st32(sp_at(c, 0x100), W(c, s0));
    tick(c, 14);
    if (!zero_to_qword(c, a2, v0, v0, 0x23B580, 1)) return false;
    close_dma_tag(c, t1, a2);
    // DMA cnt, then FLUSH and pad to a qword
    st32(W(c, t1), W(c, a2));
    li(c, v0, dma::tag(dma::cnt));
    st32(W(c, t1) + kChainTag, W(c, a2));
    li(c, v1, W(c, a2) + 4);
    st32(W(c, a2), W(c, v0));
    li(c, a0, W(c, a2) + 8);
    st32(W(c, t1), W(c, v1));
    li(c, a1, vif::flush());
    st32(W(c, a2) + 4, 0);
    li(c, v1, 0u - 16);
    st32(W(c, t1), W(c, a0));
    li(c, a2, kChain);
    st32(W(c, t1) + kChainVifCode, 0);
    lw(c, v0, kChain);
    st32(W(c, v0), W(c, a1));
    li(c, v0, W(c, v0) + 4);
    st32(kChain, W(c, v0));
    round_up_to_qword(c);
    tick(c, 24);
    if (!zero_until(c, a2, a1, v0, 0x23B620, 1)) return false;

    // the first material link with a link-C texture: s4 = its slot (-1: none)
    li(c, s4, 0xFFFFFFFF);
    D(c, s0) = 0;
    li(c, s1, 0xFFFFFFFF);
    tick(c, 5);
    for (bool first = true;; first = false) {
        if (!first) {
            li(c, s0, W(c, s0) + 1);
            tick(c, 1);
        }
        lw(c, v0, W(c, s3) + 0x12C);
        D(c, v0) = c.r[s0].sd[0] < c.r[v0].sd[0] ? 1 : 0;
        tick(c, 4);
        if (D(c, v0) == 0) break;
        lw(c, v1, W(c, s3) + 0x1BC);
        li(c, a1, 0x4F0000);
        li(c, v0, W(c, s0) << 5);
        lw(c, a0, W(c, a1) - 0x16C);  // [0x4efe94] the TextureManager
        li(c, v0, W(c, v0) + W(c, v1));
        lw(c, a1, W(c, v0));
        tick(c, 8);
        if (!call(c, 0x26DEC0, Ra{0x23B684})) return false;  // texture link C of the link's slot
        mov(c, s4, v0);
        tick(c, 3);
        if (D(c, s4) != D(c, s1)) break;
        if (poll(c, 0x23B650)) return false;
    }

    // the link texture's UV transform: identity at sp+0x10, then fn_26df48 -> (sp+0xe0, +0xe4, +0xe8, +0xec)
    identity_rows(c, s5);
    li(c, a2, 0x4F0000);
    lw(c, t0, sp_at(c, 0xFC));
    lw(c, a0, W(c, a2) - 0x16C);
    mov(c, a3, s8);
    lw(c, t1, sp_at(c, 0x100));
    mov(c, a2, s7);
    mov(c, a1, s4);
    li(c, s1, 0x4F0000);
    tick(c, 19);
    if (!call(c, 0x26DF48, Ra{0x23B6DC})) return false;

    li(c, s6, kChain);
    c.f[4] = ld32(sp_at(c, 0xE8));
    li(c, s1, kUnpackHeader);
    c.f[0] = ld32(sp_at(c, 0xEC));
    li(c, v1, 0x10);
    c.f[1] = ld32(sp_at(c, 0xE0));
    c.f[2] = ld32(sp_at(c, 0xE4));
    fconst(c, 3, 0x3F800000);
    st32(sp_at(c, 0x10), c.f[4]);   // [0].x = u scale
    st32(sp_at(c, 0x24), c.f[0]);   // [1].y = v scale
    st32(sp_at(c, 0x40), c.f[1]);   // [3] = (u offset, v offset, 1, 0)
    st32(sp_at(c, 0x44), c.f[2]);
    st32(sp_at(c, 0x48), c.f[3]);
    st32(sp_at(c, 0x4C), 0);
    lw(c, v0, kChain);
    unpack_matrix(c, s1, s5, v1, v0);
    li(c, s0, 0x660000);
    li(c, v0, W(c, v0) + 0x50);
    li(c, s0, W(c, s0) + 0x1A70);
    lw(c, a2, sp_at(c, 0xF8));
    li(c, a1, 0x660000);
    st32(kChain, W(c, v0));
    li(c, a1, W(c, a1) + 0x10A0);
    mov(c, a0, s0);
    tick(c, 39);
    if (!call(c, 0x213CE8, Ra{0x23B778})) return false;  // 0x661a70 = fn_213ce8(0x661a70, 0x6610a0, E+0x50)

    li(c, v0, 0xC);
    lw(c, t4, kChain);
    unpack_matrix(c, s1, s0, v0, t4);
    li(c, t3, W(c, t4) + 0x50);
    li(c, v0, 0x660000);
    li(c, v0, W(c, v0) + 0x19E0);
    st32(kChain, W(c, t3));
    li(c, v1, 4);
    unpack_matrix(c, s1, v0, v1, t3);
    // the light colour matrix through the FPRs into sp+0x10 (row 3 first, its w + 128)
    li(c, a3, 0x660000);
    fconst(c, 6, 0x43000000);  // 128
    li(c, t2, W(c, a3) + 0x19A0);
    c.f[4] = ld32(W(c, a3) + 0x19A0);
    li(c, v0, W(c, t2) + 0x30);
    c.f[3] = ld32(W(c, t2) + 0x30);
    c.f[2] = ld32(W(c, v0) + 0xC);
    li(c, v1, W(c, t2) + 0x10);
    c.f[1] = ld32(W(c, v0) + 4);
    li(c, a0, W(c, t2) + 0x20);
    c.f[0] = ld32(W(c, v0) + 8);
    li(c, t3, W(c, t4) + 0xA0);
    mfc1(c, t7, 3);
    li(c, t5, 8);
    mfc1(c, s0, 1);
    mfc1(c, v0, 0);
    mfc1(c, a1, 2);
    pack4(c, t7, s0, v0, a1);
    c.vu0.vf[1] = c.r[t0];
    mfc1(c, a2, 4);
    vu0::sqc2(c, vu0::vf1, sp_at(c, 0x40));
    c.f[0] = ld32(W(c, t2) + 0xC);
    c.f[2] = ld32(W(c, t2) + 4);
    mfc1(c, s0, 0);
    c.f[1] = ld32(W(c, t2) + 8);
    c.f[0] = ld32(W(c, v1) + 8);
    c.f[5] = ld32(sp_at(c, 0x4C));
    mfc1(c, a3, 2);
    c.f[5] = fp::add(c.f[5], c.f[6]);
    c.f[3] = ld32(W(c, t2) + 0x10);
    mfc1(c, t7, 1);
    mfc1(c, a1, 0);
    pack4(c, a2, a3, t7, s0);
    c.vu0.vf[3] = c.r[t0];
    c.f[6] = ld32(W(c, v1) + 0xC);
    c.f[4] = ld32(W(c, t2) + 0x20);
    c.f[7] = ld32(W(c, a0) + 0xC);
    c.f[2] = ld32(W(c, v1) + 4);
    c.f[1] = ld32(W(c, a0) + 4);
    c.f[0] = ld32(W(c, a0) + 8);
    mfc1(c, v0, 3);
    mfc1(c, v1, 2);
    mfc1(c, a2, 6);
    mfc1(c, a3, 4);
    pack4(c, v0, v1, a1, a2);
    c.vu0.vf[2] = c.r[t0];
    mfc1(c, t2, 1);
    mfc1(c, t7, 0);
    mfc1(c, s0, 7);
    pack4(c, a3, t2, t7, s0);
    c.vu0.vf[1] = c.r[t0];
    vu0::sqc2(c, vu0::vf3, sp_at(c, 0x10));
    vu0::sqc2(c, vu0::vf2, sp_at(c, 0x20));
    vu0::sqc2(c, vu0::vf1, sp_at(c, 0x30));
    st32(sp_at(c, 0x4C), c.f[5]);
    st32(kChain, W(c, t3));
    st32(sp_at(c, 0x1C), 0);
    unpack_matrix(c, s1, s5, t5, t3);
    // the GIF tag template to sp+0x50; FLUSH; pad to a qword
    li(c, v1, 0x580000);
    li(c, a2, 0x580000);
    li(c, v0, W(c, v1) + 0x50F8);
    li(c, a0, W(c, t4) + 0xF4);
    D(c, a1) = ld64(W(c, v0) + 8);
    li(c, v1, 0u - 16);
    D(c, v0) = ld64(W(c, a2) + 0x50F8);
    li(c, t4, W(c, t4) + 0xF0);
    st64(sp_at(c, 0x58), D(c, a1));
    D(c, a2) = D(c, a0) & D(c, v1);
    st32(kChain, W(c, t4));
    li(c, a1, vif::flush());
    st64(sp_at(c, 0x50), D(c, v0));
    sltu(c, v1, a2, a0);
    li(c, v0, W(c, a2) + 16);
    st32(W(c, t3) + 0x50, W(c, a1));
    movn(c, a2, v0, v1);
    st32(kChain, W(c, a0));
    sltu(c, a0, a0, a2);
    tick(c, 133);
    if (!zero_until(c, s6, a2, a0, 0x23B990, 1)) return false;

    // DIRECT { GIF tag, FBA_1 0, TEX0_1, TEST_1, ALPHA_1, CLAMP_1, TEXFLUSH }
    lw(c, v0, kChain);
    li(c, v1, 0u - 16);
    li(c, a3, kChain);
    round_up_to_code(c, v1, a1, a0);
    tick(c, 11);
    if (!zero_until(c, a3, a1, v0, 0x23B9D8, 0)) return false;
    lw(c, v0, W(c, a3));
    li(c, a1, vif::direct());
    li(c, s0, kChain);
    li(c, a2, gs::FBA_1);
    li(c, v1, W(c, v0) + 4);
    st32(W(c, a3) + kChainVifCode, W(c, v0));
    st32(W(c, a3), W(c, v1));
    st32(W(c, v0), W(c, a1));
    li(c, a3, 0xFFFFFFFF);
    lw(c, a0, kChain);
    ld128(sp_at(c, 0x50) & ~15u, c.r[v0]);
    st32(W(c, s0) + kChainGifTag, W(c, a0));
    st128(W(c, a0) & ~15u, c.r[v0]);
    lw(c, v1, kChain);
    li(c, v0, W(c, v1) + 16);
    li(c, a0, W(c, v1) + 32);
    st32(kChain, W(c, v0));
    st32(W(c, v1) + 16, 0);
    st32(W(c, v0) + 8, W(c, a2));
    st32(W(c, v0) + 12, 0);
    st32(W(c, v0) + 4, 0);
    st32(kChain, W(c, a0));
    tick(c, 24);
    if (D(c, s4) != D(c, a3)) {
        li(c, a3, 0x4F0000);
        mov(c, a1, s4);
        lw(c, a0, W(c, a3) - 0x16C);
        tick(c, 5);
        if (!call(c, 0x26D2E8, Ra{0x23BA68})) return false;  // TextureManager::GetTex0(link slot)
        // TEX0_1 = tex0 | TCC, TFX = MODULATE
        D(c, a0) = 0 | 0x8000ull;
        D(c, a0) <<= 19;
        li(c, a1, 0x9FFFFFFF);
        D(c, a1) <<= 6;
        D(c, a1) |= 63;
        D(c, v0) |= D(c, a0);
        lw(c, v1, kChain);
        D(c, v0) &= D(c, a1);
        li(c, a2, gs::TEX0_1);
        hi32(c, a0, v0);
        st32(W(c, v1) + 8, W(c, a2));
        lo32(c, v0, v0);
        st32(W(c, v1) + 4, W(c, a0));
        st32(W(c, v1), W(c, v0));
        li(c, v0, W(c, v1) + 16);
        st32(W(c, v1) + 12, 0);
        st32(kChain, W(c, v0));
        tick(c, 19);
    }
    lw(c, v1, kChain);
    li(c, v0, 0x53001);  // TEST_1: alpha test GEQUAL 0, ZTE, ZTST GEQUAL
    li(c, a1, gs::TEST_1);
    st32(W(c, v1), W(c, v0));
    li(c, a0, W(c, v1) + 16);
    st32(W(c, v1) + 8, W(c, a1));
    li(c, v0, 0x44);  // ALPHA_1: (Cs - Cd) * As + Cd
    st32(W(c, v1) + 4, 0);
    li(c, a3, gs::ALPHA_1);
    st32(W(c, v1) + 12, 0);
    li(c, a1, W(c, v1) + 32);
    st32(kChain, W(c, a0));
    li(c, t0, gs::CLAMP_1);
    st32(W(c, v1) + 16, W(c, v0));
    li(c, a2, W(c, v1) + 48);
    st32(W(c, a0) + 8, W(c, a3));
    li(c, t1, gs::TEXFLUSH);
    st32(W(c, a0) + 12, 0);
    li(c, v0, W(c, v1) + 64);
    st32(W(c, a0) + 4, 0);
    li(c, a3, gif::image);
    st32(kChain, W(c, a1));
    st32(W(c, v1) + 32, 0);
    st32(W(c, a1) + 8, W(c, t0));
    st32(W(c, a1) + 12, 0);
    st32(W(c, a1) + 4, 0);
    st32(kChain, W(c, a2));
    st32(W(c, v1) + 48, 0);
    st32(W(c, a2) + 8, W(c, t1));
    st32(W(c, a2) + 12, 0);
    st32(W(c, a2) + 4, 0);
    st32(kChain, W(c, v0));
    close_gif_tag(c, {s0, a2, v0, a1, a3}, 45);
    if (!zero_to_qword(c, v1, v0, v0, 0x23BBB8, 1)) return false;
    st32(W(c, s0), W(c, v1));
    li(c, a2, kChain);
    li(c, a1, 0u - 16);
    close_direct(c, a2);
    lw(c, v0, kChain);
    round_up_to_qword(c);
    tick(c, 21);
    if (!zero_until(c, a2, a1, v0, 0x23BC28, 1)) return false;

    // BASE 0x18, OFFSET 0x1f4 into the open call (the main pass's stream runs with them)
    lw(c, v1, kChain);
    li(c, v0, vif::base(0x18));
    li(c, a0, vif::offset(0x1F4));
    st32(W(c, v1), W(c, v0));
    li(c, v1, W(c, v1) + 4);
    li(c, a3, kChain);
    li(c, a1, W(c, v1) + 4);
    st32(kChain, W(c, v1));
    st32(W(c, v1), W(c, a0));
    mov(c, a2, a1);
    st32(kChain, W(c, a1));
    D(c, v0) = D(c, a2) & 12;
    tick(c, 16);
    if (!zero_to_qword(c, a2, v0, v0, 0x23BC88, 1)) return false;
    close_dma_tag(c, a3, a2);
    li(c, a0, 0x4A0000);
    li(c, v0, 0x4A0000);
    li(c, v1, W(c, a0) + 0x20B0);
    li(c, v0, W(c, v0) + 0x42E0);
    li(c, a0, 0xFFFFFFFF);
    li(c, v0, W(c, v0) - W(c, v1));  // program 0x2230 of image C
    st32(W(c, a3), W(c, a2));
    st32(W(c, a3) + kChainTag, 0);
    tick(c, 11);
    if (D(c, v0) != D(c, a0)) {
        lw(c, a2, kChain);
        sra(c, t0, v0, 3);
        li(c, a3, kChain);
        D(c, v0) = D(c, a2) & 12;
        tick(c, 6);
        if (!zero_to_qword(c, a2, v0, v0, 0x23BD08, 0)) return false;
        close_dma_tag(c, a3, a2);
        // DMA cnt { FLUSHA, BASE 0x18 | OFFSET 0x1f4 }
        st32(W(c, a3), W(c, a2));
        li(c, v0, dma::tag(dma::cnt));
        st32(W(c, a3) + kChainTag, W(c, a2));
        li(c, v1, W(c, a2) + 4);
        st32(W(c, a2), W(c, v0));
        li(c, a0, W(c, a2) + 8);
        st32(W(c, a3), W(c, v1));
        li(c, a1, vif::flusha());
        st32(W(c, a2) + 4, 0);
        li(c, v1, vif::base(0x18));
        st32(W(c, a3), W(c, a0));
        st32(W(c, a3) + kChainVifCode, 0);
        li(c, a0, vif::offset(0x1F4));
        li(c, a3, kChain);
        lw(c, v0, kChain);
        st32(W(c, v0), W(c, a1));
        li(c, v0, W(c, v0) + 4);
        st32(kChain, W(c, v0));
        li(c, a1, W(c, v0) + 4);
        st32(W(c, v0), W(c, v1));
        li(c, a2, W(c, v0) + 8);
        st32(kChain, W(c, a1));
        st32(W(c, v0) + 4, W(c, a0));
        mov(c, a1, a2);
        st32(kChain, W(c, a2));
        D(c, v1) = D(c, a1) & 12;
        lw(c, a2, W(c, s3) + 0x13C);
        tick(c, 31);
        if (!zero_to_qword(c, a1, v1, v0, 0x23BDC0, 0)) return false;
        close_dma_tag(c, a3, a1);
        open_stream_call_mscalf(c, a3, a1, a2, t0);
    }
    li(c, a1, 0x660000);
    lw(c, v0, kLastFlags);
    D(c, v0) |= 0x100;
    st32(kLastFlags, W(c, v0));  // kLastFlags |= 0x100: the next segment resends its GS state
    tick(c, 4);
    return true;
}

// The third pass of a type-2 segment with seg+0x138 & 4 when [0x4f5018] (program 0x1bc0 of image C, additive):
// identity as the light direction matrix (0x6619e0, also to VU 4 in the open packet), the link-B texture of the
// first material link that has one ([0x66346c]), fn_2388b0 (a new cnt packet with its matrices); then
// DIRECT { FBA_1 0, TEX0_1 of the link-B texture (TCC, DECAL), TEX1_1 0x60, TEST_1 0x53001,
// ALPHA_1 0x68 | FIX [0x4f501c] << 32 (or 0x48 without FIX), CLAMP_1 0, PRIM 0x5c }; BASE 0x2e, OFFSET 0x1e9 into the
// open call; DMA cnt { FLUSHA, BASE 0x18 | OFFSET 0x1f4 } and a third call of the vertex stream with MSCALF 0x1bc0.
bool pack_additive_pass(Cpu &c) {
    li(c, t2, 0x660000);
    li(c, t2, W(c, t2) + 0x19E0);
    identity_rows(c, t2);
    li(c, v1, 0x4F0000);
    li(c, t3, 4);
    li(c, v1, kUnpackHeader);
    lw(c, v0, kChain);
    unpack_matrix(c, v1, t2, t3, v0);
    li(c, v0, W(c, v0) + 0x50);
    li(c, v1, 0x660000);
    st32(kChain, W(c, v0));
    D(c, s0) = 0;
    st32(W(c, v1) + 0x346C, 0);
    mov(c, s1, v1);
    li(c, s4, 0x4F0000);
    li(c, s5, 0x4A0000);
    tick(c, 38);
    for (bool first = true;; first = false) {
        if (!first) {
            li(c, s0, W(c, s0) + 1);
            tick(c, 1);
        }
        lw(c, v0, W(c, s3) + 0x12C);
        D(c, v0) = c.r[s0].sd[0] < c.r[v0].sd[0] ? 1 : 0;
        tick(c, 4);
        if (D(c, v0) == 0) break;
        lw(c, a0, W(c, s3) + 0x1BC);
        li(c, v0, W(c, s0) << 5);
        li(c, v1, 0x4F0000);
        li(c, v0, W(c, v0) + W(c, a0));
        lw(c, a0, W(c, v1) - 0x16C);
        lw(c, a1, W(c, v0));
        tick(c, 8);
        if (!call(c, 0x26DE88, Ra{0x23BF54})) return false;  // texture link B of the link's slot
        li(c, v1, 0xFFFFFFFF);
        st32(W(c, s1) + 0x346C, W(c, v0));
        tick(c, 4);
        if (D(c, v0) != D(c, v1)) break;
        if (poll(c, 0x23BF20)) return false;
    }
    lw(c, a0, sp_at(c, 0xF0));
    mov(c, a1, s3);
    tick(c, 4);
    if (!call(c, 0x2388B0, Ra{0x23BF74})) return false;  // fn_2388b0(E, seg)

    // the GIF tag template to sp+0x10; FLUSH; DIRECT
    li(c, a2, 0x580000);
    li(c, a1, vif::flush());
    li(c, v0, W(c, a2) + 0x50F8);
    D(c, a0) = ld64(W(c, a2) + 0x50F8);
    D(c, v1) = ld64(W(c, v0) + 8);
    li(c, a2, 0u - 16);
    lw(c, v0, kChain);
    li(c, a3, kChain);
    st64(sp_at(c, 0x10), D(c, a0));
    st64(sp_at(c, 0x18), D(c, v1));
    lw(c, t1, W(c, s1) + 0x346C);
    lw(c, s0, W(c, s4) + 0x501C);  // [0x4f501c] FIX
    st32(W(c, v0), W(c, a1));
    li(c, v0, W(c, v0) + 4);
    st32(kChain, W(c, v0));
    round_up_to_qword(c);
    tick(c, 22);
    if (!zero_until(c, a3, a1, v0, 0x23BFD0, 1)) return false;
    lw(c, v0, kChain);
    li(c, v1, 0u - 16);
    li(c, t0, kChain);
    round_up_to_code(c, v1, a1, a0);
    tick(c, 11);
    if (!zero_until(c, t0, a1, v0, 0x23C018, 0)) return false;
    lw(c, v0, W(c, t0));
    li(c, a1, vif::direct());
    li(c, a2, kChain);
    li(c, a3, gs::FBA_1);
    li(c, v1, W(c, v0) + 4);
    st32(W(c, t0) + kChainVifCode, W(c, v0));
    st32(W(c, t0), W(c, v1));
    st32(W(c, v0), W(c, a1));
    li(c, t0, 0xFFFFFFFF);
    lw(c, a0, kChain);
    ld128(sp_at(c, 0x10) & ~15u, c.r[v0]);
    st32(W(c, a2) + kChainGifTag, W(c, a0));
    st128(W(c, a0) & ~15u, c.r[v0]);
    lw(c, v1, kChain);
    li(c, v0, W(c, v1) + 16);
    li(c, a0, W(c, v1) + 32);
    st32(kChain, W(c, v0));
    st32(W(c, v1) + 16, 0);
    st32(W(c, v0) + 8, W(c, a3));
    st32(W(c, v0) + 12, 0);
    st32(W(c, v0) + 4, 0);
    st32(kChain, W(c, a0));
    tick(c, 24);
    if (D(c, t1) != D(c, t0)) {
        li(c, v0, 0x4F0000);
        mov(c, a1, t1);
        lw(c, a0, W(c, v0) - 0x16C);
        tick(c, 5);
        if (!call(c, 0x26D2E8, Ra{0x23C0A8})) return false;  // TextureManager::GetTex0(link-B slot)
        // TEX0_1 = tex0 | TCC, TFX = DECAL; TEX1_1 = 0x60
        D(c, v1) = 0 | 0x8000ull;
        D(c, v1) <<= 19;
        li(c, a0, 0x9FFFFFFF);
        D(c, a0) <<= 6;
        D(c, a0) |= 63;
        D(c, v0) |= D(c, v1);
        D(c, a1) = 0 | 0x8000ull;
        D(c, a1) <<= 20;
        D(c, v0) &= D(c, a0);
        lw(c, v1, kChain);
        D(c, v0) |= D(c, a1);
        li(c, a2, gs::TEX0_1);
        hi32(c, a0, v0);
        st32(W(c, v1) + 8, W(c, a2));
        lo32(c, v0, v0);
        st32(W(c, v1) + 4, W(c, a0));
        st32(W(c, v1), W(c, v0));
        li(c, a1, 0x60);  // TEX1_1: MMAG/MMIN linear
        st32(W(c, v1) + 12, 0);
        li(c, v0, W(c, v1) + 16);
        st32(kChain, W(c, v0));
        li(c, a0, gs::TEX1_1);
        st32(W(c, v1) + 16, W(c, a1));
        li(c, a2, W(c, v1) + 32);
        st32(W(c, v0) + 8, W(c, a0));
        st32(W(c, v0) + 12, 0);
        st32(W(c, v0) + 4, 0);
        st32(kChain, W(c, a2));
        tick(c, 30);
    }
    lw(c, a0, kChain);
    li(c, v0, 0x53001);
    li(c, v1, gs::TEST_1);
    li(c, a2, W(c, a0) + 16);
    st32(W(c, a0), W(c, v0));
    st32(W(c, a0) + 8, W(c, v1));
    st32(W(c, a0) + 4, 0);
    st32(W(c, a0) + 12, 0);
    st32(kChain, W(c, a2));
    tick(c, 12);
    if (D(c, s0) != 0) {
        // ALPHA_1 = Cs * FIX + Cd
        li(c, v0, 0x68);
        D(c, v1) = D(c, s0) << 32;
        D(c, v1) |= D(c, v0);
        li(c, a1, gs::ALPHA_1);
        lo32(c, v0, v1);
        st32(W(c, a0) + 16, W(c, v0));
        hi32(c, v1, v1);
        li(c, a0, W(c, a0) + 32);
        st32(W(c, a2) + 4, W(c, v1));
        st32(W(c, a2) + 8, W(c, a1));
        st32(W(c, a2) + 12, 0);
        tick(c, 14);
    } else {
        // ALPHA_1 = Cs * As + Cd
        li(c, v0, 0x48);
        li(c, v1, gs::ALPHA_1);
        st32(W(c, a0) + 16, W(c, v0));
        li(c, a0, W(c, a0) + 32);
        st32(W(c, a2) + 8, W(c, v1));
        st32(W(c, a2) + 12, 0);
        st32(W(c, a2) + 4, 0);
        tick(c, 7);
    }
    st32(kChain, W(c, a0));
    lw(c, v0, kChain);
    li(c, a0, gs::CLAMP_1);
    li(c, a1, gs::kTriStrip | gs::kIip | gs::kTme | gs::kAbe);
    li(c, t1, kChain);
    st32(W(c, v0) + 8, W(c, a0));
    li(c, v1, W(c, v0) + 16);
    st32(W(c, v0), 0);
    li(c, a0, W(c, v0) + 32);
    st32(W(c, v0) + 4, 0);
    li(c, a2, gif::image);
    st32(W(c, v0) + 12, 0);
    st32(kChain, W(c, v1));
    st32(W(c, v0) + 16, W(c, a1));  // PRIM
    st32(W(c, v1) + 12, 0);
    st32(W(c, v1) + 4, 0);
    st32(W(c, v1) + 8, 0);
    st32(kChain, W(c, a0));
    close_gif_tag(c, {t1, a3, a0, a1, a2}, 30);
    if (!zero_to_qword(c, v1, v0, v0, 0x23C268, 0)) return false;
    st32(W(c, t1), W(c, v1));
    li(c, a2, kChain);
    li(c, a1, 0u - 16);
    close_direct(c, a2);
    lw(c, v0, kChain);
    round_up_to_qword(c);
    tick(c, 21);
    if (!zero_until(c, a2, a1, v0, 0x23C2D8, 1)) return false;

    // BASE 0x2e, OFFSET 0x1e9 into the open packet
    lw(c, v1, kChain);
    li(c, v0, vif::base(0x2E));
    li(c, a0, vif::offset(0x1E9));
    st32(W(c, v1), W(c, v0));
    li(c, v1, W(c, v1) + 4);
    li(c, a3, kChain);
    li(c, a1, W(c, v1) + 4);
    st32(kChain, W(c, v1));
    st32(W(c, v1), W(c, a0));
    mov(c, a2, a1);
    st32(kChain, W(c, a1));
    D(c, v0) = D(c, a2) & 12;
    tick(c, 16);
    if (!zero_to_qword(c, a2, v0, v0, 0x23C338, 1)) return false;
    close_dma_tag(c, a3, a2);
    li(c, a0, 0x4A0000);
    li(c, v0, W(c, s5) + 0x3C70);
    li(c, v1, W(c, a0) + 0x20B0);
    st32(W(c, a3), W(c, a2));
    li(c, a0, 0xFFFFFFFF);
    li(c, v0, W(c, v0) - W(c, v1));  // program 0x1bc0 of image C
    st32(W(c, a3) + kChainTag, 0);
    tick(c, 10);
    if (D(c, v0) != D(c, a0)) {
        lw(c, a2, kChain);
        sra(c, t1, v0, 3);
        li(c, a3, kChain);
        D(c, v0) = D(c, a2) & 12;
        tick(c, 6);
        if (!zero_to_qword(c, a2, v0, v0, 0x23C3B8, 1)) return false;
        close_dma_tag(c, a3, a2);
        st32(W(c, a3), W(c, a2));
        li(c, v0, dma::tag(dma::cnt));
        st32(W(c, a3) + kChainTag, W(c, a2));
        li(c, v1, W(c, a2) + 4);
        st32(W(c, a2), W(c, v0));
        li(c, a0, W(c, a2) + 8);
        st32(W(c, a3), W(c, v1));
        li(c, a1, vif::flusha());
        st32(W(c, a2) + 4, 0);
        li(c, v1, vif::base(0x18));
        st32(W(c, a3), W(c, a0));
        st32(W(c, a3) + kChainVifCode, 0);
        li(c, a0, vif::offset(0x1F4));
        li(c, t0, kChain);
        lw(c, v0, kChain);
        st32(W(c, v0), W(c, a1));
        li(c, v0, W(c, v0) + 4);
        st32(kChain, W(c, v0));
        li(c, a1, W(c, v0) + 4);
        st32(W(c, v0), W(c, v1));
        li(c, a2, W(c, v0) + 8);
        st32(kChain, W(c, a1));
        mov(c, a3, a2);
        st32(W(c, v0) + 4, W(c, a0));
        D(c, v1) = D(c, a3) & 12;
        st32(kChain, W(c, a2));
        lw(c, a1, W(c, s3) + 0x13C);
        tick(c, 31);
        if (!zero_to_qword(c, a3, v1, v0, 0x23C470, 0)) return false;
        close_dma_tag(c, t0, a3);
        open_stream_call_mscalf(c, t0, a3, a1, t1);
    }
    li(c, a1, 0x660000);
    lw(c, v0, kLastFlags);
    D(c, v0) |= 0x100;
    st32(kLastFlags, W(c, v0));
    tick(c, 4);
    return true;
}

// Restores s0-s7, s8, ra and pops the frame (the `jr ra` is decomp_enter's)
void leave(Cpu &c) {
    const unsigned saved[9] = {s0, s1, s2, s3, s4, s5, s6, s7, s8};
    const u32 at_off[9] = {0x1A0, 0x190, 0x180, 0x170, 0x160, 0x150, 0x140, 0x130, 0x120};
    for (int i = 0; i < 9; ++i) ld128(sp_at(c, at_off[i]) & ~15u, c.r[saved[i]]);
    D(c, ra) = ld64(sp_at(c, 0x110));
    li(c, sp, W(c, sp) + kFrame);
    tick(c, 13);
}

// The main path (everything but the fn_246258 path): the segment's constants, its GS state and the kick, then the
// optional linked-texture and additive passes.
bool pack_segment(Cpu &c) {
    // the node record E (model+0x18 + seg[0] * 0x1c0) at sp+0xf0; the caller's flag t0 = 0
    st32(W(c, t0), 0);
    li(c, a1, 0x1C0);
    li(c, a2, 0x4F0000);
    lw(c, v0, W(c, s3));
    lw(c, a0, W(c, s4) + 0x18);
    mmi::mult(c, 0, W(c, v0), W(c, a1));
    D(c, v0) = c.lo.d[0];
    lw(c, v1, W(c, a2) + 0x5030);  // [0x4f5030] UV scroll enabled
    li(c, a0, W(c, a0) + W(c, v0));
    st32(sp_at(c, 0xF0), W(c, a0));
    tick(c, 11);
    if (D(c, v1) != 0) {
        // only when the scroll is not (0, 0)
        c.f[0] = ld32(W(c, s3) + 0x16C);
        c.f[1] = 0;
        fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
        tick(c, 7);
        bool scroll = !(c.fcr31 & kFpuCondition);
        if (!scroll) {
            c.f[0] = ld32(W(c, s3) + 0x170);
            fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
            tick(c, 5);
            scroll = !(c.fcr31 & kFpuCondition);
        }
        if (scroll && !pack_uv_scroll(c)) return false;
    }
    // the node's 4x4 (E+0x110) to VU 0, except for the skinned types (flags 0x41c)
    D(c, v0) = D(c, s1) & 0x41C;
    tick(c, 3);
    if (D(c, v0) == 0) {
        lw(c, a2, sp_at(c, 0xF0));
        li(c, v1, 0x4F0000);
        D(c, t3) = 0;
        li(c, v1, kUnpackHeader);
        li(c, t2, W(c, a2) + 0x110);
        lw(c, v0, kChain);
        unpack_matrix(c, v1, t2, t3, v0);
        li(c, v0, W(c, v0) + 0x50);
        st32(kChain, W(c, v0));
        tick(c, 21);
    }
    D(c, a3) = D(c, s1) & 1;
    li(c, s8, 0x4F0000);
    D(c, s7) = D(c, s1) & 0x80;
    st32(sp_at(c, 0x104), W(c, a3));
    tick(c, 6);
    if (D(c, s7) != 0 && !pack_fog(c)) return false;
    // render mode 3 ([0x4f4be0]): its own fog for segments with seg+0x20 = 0 or 2
    li(c, v0, W(c, s8) + 0x4B40);
    li(c, a0, 3);
    lw(c, v1, W(c, v0) + 0xA0);
    tick(c, 5);
    if (D(c, v1) == D(c, a0)) {
        lw(c, v1, W(c, s3) + 0x20);
        tick(c, 3);
        bool mode3_fog = D(c, v1) == 0;
        if (!mode3_fog) {
            li(c, v0, 2);
            tick(c, 3);
            mode3_fog = D(c, v1) == D(c, v0);
        }
        if (mode3_fog && !pack_fog_mode3(c)) return false;
    }
    tick(c, 2);
    if (D(c, s5) != 0) pack_lights(c);
    li(c, v0, 0x08000000);
    D(c, v0) = D(c, s1) & D(c, v0);
    tick(c, 4);
    if (D(c, v0) != 0 && !pack_point_light(c)) return false;
    // flag 1: the node matrix product 0x661a70 (computed by the caller) to VU 0xc
    lw(c, v0, sp_at(c, 0x104));
    tick(c, 3);
    if (D(c, v0) != 0) {
        li(c, t2, 0x660000);
        li(c, v1, 0x4F0000);
        li(c, t2, W(c, t2) + 0x1A70);
        li(c, v1, kUnpackHeader);
        li(c, t3, 0xC);
        lw(c, v0, kChain);
        unpack_matrix(c, v1, t2, t3, v0);
        li(c, v0, W(c, v0) + 0x50);
        st32(kChain, W(c, v0));
        tick(c, 21);
    }
    if (!pack_gs_state_and_kick(c)) return false;
    if (D(c, v0) != 0 && !pack_linked_pass(c)) return false;
    // the additive pass: seg+0x138 & 4, [0x4f5018], type 2
    D(c, v0) = ld64(W(c, s3) + 0x138) & 4;
    tick(c, 4);
    if (D(c, v0) == 0) return true;
    li(c, v0, 0x4F0000);
    lw(c, v1, W(c, v0) + 0x5018);
    tick(c, 4);
    if (D(c, v1) == 0) return true;
    lw(c, v1, W(c, s3) + 0x10);
    li(c, v0, 2);
    tick(c, 4);
    if (D(c, v1) != D(c, v0)) return true;
    return pack_additive_pass(c);
}

}  // namespace

// fn_23a280: packs one mesh segment of an instance for VU1 (called once per segment by the segment loop fn_242ff8).
// a0 = the segment record (0x1d0 bytes, often its scratchpad copy), a1 = the model, a2 = the VU1 program (byte offset
// in the loaded image), a3 = the draw flags, t0 = a flag out (0x65e2c8: 1 when fn_246258 packed the constants).
PS2_DECOMP(0023A280, PackSegment) {
    enter(c);
    if (!open_stream_call(c)) return;
    // the fn_246258 path: [0x4f5034], flag 2 and not seg+0x138 & 4
    li(c, v0, 0x4F0000);
    lw(c, v1, W(c, v0) + 0x5034);
    tick(c, 4);
    bool by_writer = D(c, v1) != 0;
    if (by_writer) {
        tick(c, 2);
        by_writer = D(c, s5) != 0;
        if (by_writer) {
            D(c, v0) = ld64(W(c, s3) + 0x138) & 4;
            tick(c, 4);
            by_writer = D(c, v0) == 0;
        }
    }
    if (!(by_writer ? pack_by_constants_writer(c) : pack_segment(c))) return;
    leave(c);
}
