// Ps2/Renderer/Character/ps2render.cpp
#include "../chain.hpp"
#include "instance.hpp"

#include "ps2/decomp.hpp"

namespace {

using namespace ps2;
using namespace ps2::gpr;
using namespace decomp::chain;

constexpr std::uint32_t kMatrixMultiply = 0x00213ce8u;  // fn_213ce8(out, a, b): 4x4 product
constexpr std::uint32_t kPackBones = 0x00247bd8u;       // fn_247bd8(inst): bone matrices, VU1 mem[0x21..]
constexpr std::uint32_t kPackPasses23 = 0x00248900u;    // fn_248900(inst): passes 2 and 3, mem[0x28..0x2c]

constexpr std::uint32_t kProjection = 0x00660f20u;      // P: world -> screen, VU1 mem[0..3]
constexpr std::uint32_t kSegmentView = kProjection + 0x180;  // 0x6610a0: taken times the bone matrix for mem[20..23]
constexpr std::uint32_t kShadeProjector = 0x006634a0u;  // world position -> pass-3 UV, mem[24..27]
constexpr std::uint32_t kLightDirections = 0x006619e0u; // the three light directions (fn_249060's copy), mem[4..7]
constexpr std::uint32_t kLightColours = 0x006619a0u;    // light colours and ambient, mem[8..11]
constexpr std::uint32_t kBoneView = 0x00661a70u;        // kSegmentView x the bone's world matrix, mem[20..23]

constexpr std::uint32_t kInstanceBones = 0x18;  // CharInstance: the bone array (fn_245168's 0x1c0-byte records)
constexpr std::uint32_t kBoneSize = 0x1c0;
constexpr std::uint32_t kBoneWorld = 0x50;      // a bone's world matrix

// How an open V4-32 UNPACK counts its NUM (Chain::unpack_unit): NUM step 0x10000, 128 bits an element.
constexpr std::uint32_t kUnpackUnitV4_32 = 0x00010080u;

// TEST_1 of the segment's pass-2 A+D: ATE on with ATST NEVER (the pass writes no pixel), ZTE on, ZTST GEQUAL
constexpr std::uint64_t kTestNever = 0x00050001u;
// ALPHA_1 of the pass-3 A+D: Cv = (Cs - 0) * FIX / 128 + Cd with FIX = 0x20 (add a quarter of the colour)
constexpr std::uint64_t kAlphaAddQuarter = 0x0000002000000068ull;
constexpr auto kTex0_1 = static_cast<gs::Reg>(0x06);  // GS TEX0_1 (chain.hpp's gs::Reg lists only what others use)

// One STCYCL 4/4 + UNPACK V4-32 of a single A+D qword to VU1 address vu, opened with kUnpackUnitV4_32 and closed:
// NUM += (data bits / element bits) x NUM step (the original's DIVU then MULT, which leave HI/LO; the divisor is the
// unit just stored, never zero). Returns what the close leaves in the original's registers.
struct UnpackClose {
    std::uint32_t code;      // the UNPACK's address
    std::uint32_t unit;      // unpack_unit as read back
    std::uint32_t elements;  // DIVU's quotient (LO)
    std::uint64_t num_add;   // MULT's product (LO)
    std::uint32_t word;      // the closed UNPACK code
};

UnpackClose unpack_ad(Cpu &c, std::uint32_t vu, std::uint64_t data, gs::Reg reg) {
    const Chain ch;
    const std::uint32_t p = ch.ptr;
    st32(p, vif::stcycl(4, 4));
    const std::uint32_t code = p + 4;
    ch.vif_code = code;
    st32(code, vif::unpack_v4_32(vu));
    ch.unpack_unit = kUnpackUnitV4_32;
    st64(code + 4, data);
    st64(code + 12, reg);
    ch.ptr = code + 20;

    UnpackClose r;
    r.unit = ch.unpack_unit;
    r.code = ch.vif_code;
    const std::uint32_t bits = static_cast<std::uint32_t>(static_cast<std::int32_t>(code + 16 - r.code) >> 2) << 5;
    mmi::divu(c, 0, bits, r.unit & 0xffffu);
    r.elements = c.lo.w[0];
    mmi::mult(c, 0, r.unit & 0xffff0000u, r.elements);
    r.num_add = c.lo.d[0];
    r.word = ld32(r.code) + c.lo.w[0];
    st32(r.code, r.word);
    ch.vif_code = 0;
    return r;
}

}

// fn_246258(CharInstance *inst, Bone *bone, int *bone_index, flags): the VU1 constants and GS state of a world
// segment that moves rigidly with one bone of a character (fn_23a280, the segment packer, calls it for segments with
// draw flag 2 and without bit 2 of their +0x138 flags; its first word is the bone index). A DIRECT block (TEXFLUSH,
// FBA_1 = 0, TEX1_1 bilinear, CLAMP_1 from flags bits 12/13), then UNPACKs: P (mem[0..3]), the bone's world matrix
// (mem[12..15]), the pass-3 projector (mem[24..27]), the light directions (mem[4..7]), view x bone (mem[20..23]),
// the light colours (mem[8..11]); fn_247bd8's bone matrices; the per-pass A+D qwords ALPHA_1 (mem[0x25]), TEST_1
// with ATST NEVER (mem[0x26]) and TEX0_1 = 0 (mem[0x27]); fn_248900's passes 2 and 3.
PS2_DECOMP(00246258, PackBoneSegmentConstants) {
    const Chain ch;
    const std::uint32_t flags = c.r[a3].w[0];
    StackFrame f(c, 0x70);
    set32(c.r[t0], 0x00660000u);
    f.sq(s3, 0x30);
    f.sq(s4, 0x20);
    f.sq(s0, 0x60);
    f.sq(s1, 0x50);
    f.sq(s2, 0x40);
    f.sd(ra, 0x10);
    c.r[t4].d[0] = c.r[a3].d[0] & 0x2000u;  // CLAMP_1 WMT: 0 = clamp
    set32(c.r[t3], static_cast<std::uint32_t>(static_cast<std::int32_t>(flags) >> 12));
    c.r[s4].d[0] = c.r[a0].d[0];
    const std::uint32_t inst = c.r[s4].w[0];
    set32(c.r[t8], c.r[a1].w[0] + kBoneWorld);
    c.r[s3].d[0] = c.r[t0].d[0];
    c.r[t7].d[0] = c.r[a2].d[0];
    set32(c.r[t2], Chain::kAddr);
    set32(c.r[t1], 0xfffffff0u);

    // FLUSH, then NOPs to the next qword
    st32(ch.ptr, vif::kFlush);
    set32(c.r[v1], ch.ptr + 4);
    ch.ptr = c.r[v1].w[0];
    c.r[a3].d[0] = c.r[v1].d[0] & c.r[t1].d[0];
    set32(c.r[v0], c.r[a3].w[0] + 16);
    c.r[a0].d[0] = c.r[a3].d[0] < c.r[v1].d[0] ? 1 : 0;
    if (c.r[a0].d[0] != 0) c.r[a3].d[0] = c.r[v0].d[0];
    set32(c.r[a1], 0x00580000u);
    c.r[v0].d[0] = c.r[v1].d[0] < c.r[a3].d[0] ? 1 : 0;
    tick(c, 29);
    if (c.r[v0].d[0] != 0) {
        tick(c, 1);
        if (!pad_through_pointer(c, 0x002462d0u, a3)) return;
    }

    // NOPs until the next word is the last of a qword (for the DIRECT code); the A+D GIF tag copied to the stack
    set32(c.r[a0], ch.ptr);
    set32(c.r[v1], kAdGifTag);
    c.r[v0].d[0] = c.r[a0].d[0] & ~15ull;
    c.r[a2].d[0] = ld64(kAdGifTag + 8);
    set32(c.r[a3], c.r[v0].w[0] + 12);
    c.r[a1].d[0] = ld64(kAdGifTag);
    c.r[v1].d[0] = c.r[a3].d[0] < c.r[a0].d[0] ? 1 : 0;
    set32(c.r[v0], c.r[v0].w[0] + 28);
    if (c.r[v1].d[0] != 0) c.r[a3].d[0] = c.r[v0].d[0];
    f.sd(a2, 0x08);
    f.sd(a1, 0x00);
    c.r[a0].d[0] = c.r[a0].d[0] < c.r[a3].d[0] ? 1 : 0;
    set32(c.r[a2], Chain::kAddr);
    tick(c, 16);
    if (c.r[a0].d[0] != 0) {
        tick(c, 1);
        if (!pad_through_pointer(c, 0x00246330u, a3)) return;
    }

    // DIRECT { GIF tag (A+D, EOP), TEXFLUSH, FBA_1 = 0, TEX1_1 = bilinear, CLAMP_1 }
    const std::uint32_t code = ch.ptr;
    ch.vif_code = code;
    st32(code, vif::direct(0));
    const std::uint32_t tag = code + 4;
    ch.gif_tag = tag;
    f.lq(v0, 0x00);
    st128(tag & ~15u, c.r[v0]);
    const std::uint64_t ad[3][2] = {{0, gs::TEXFLUSH}, {0, gs::FBA_1}, {gs::tex1(1, 1), gs::TEX1_1}};
    for (std::uint32_t i = 0; i < 3; ++i) {
        st64(tag + 16 * (i + 1), ad[i][0]);
        st64(tag + 16 * (i + 1) + 8, ad[i][1]);
    }
    ch.ptr = tag + 64;
    set32(c.r[v0], tag + 16);
    set32(c.r[v1], tag);
    set32(c.r[a0], tag + 32);
    set32(c.r[a1], tag + 48);
    set32(c.r[a2], tag + 64);
    set32(c.r[a3], gs::TEXFLUSH);
    set32(c.r[t0], gs::FBA_1);
    set32(c.r[t1], static_cast<std::uint32_t>(gs::tex1(1, 1)));
    set32(c.r[t2], gs::TEX1_1);
    c.r[t3].d[0] = (c.r[t3].d[0] ^ 1u) & 1u;  // CLAMP_1 WMS: flags bit 12 clear = clamp
    tick(c, 40);
    if (c.r[t4].d[0] == 0) {
        set32(c.r[v0], 4);
        c.r[v1].d[0] = c.r[t3].d[0] | c.r[v0].d[0];
        tick(c, 4);
    } else {
        c.r[v1].d[0] = c.r[t3].d[0];
        tick(c, 1);
    }
    const std::uint32_t clamp_at = ch.ptr;
    set32(c.r[v0], clamp_at);
    c.r[v1].d[0] = static_cast<std::uint64_t>(static_cast<std::int64_t>(c.r[v1].sw[0]));
    set32(c.r[t1], Chain::kAddr);
    st32(clamp_at, c.r[v1].w[0]);  // the clamp modes in the low word, the high word 0
    st32(clamp_at + 4, 0);
    st64(clamp_at + 8, gs::CLAMP_1);
    const std::uint32_t end = clamp_at + 16;
    ch.ptr = end;
    set32(c.r[a0], end);
    set32(c.r[a1], 2);  // FLG IMAGE, for the close
    set32(c.r[t0], tag);
    const std::int32_t close = close_gif_tag_regs(c, tag, end, a3, a2);
    tick(c, 24 + close);
    ch.gif_tag = 0;
    set32(c.r[v1], ch.ptr);
    c.r[v0].d[0] = c.r[v1].d[0] & 12u;
    tick(c, 9);
    if (c.r[v0].d[0] != 0) {
        tick(c, 1);
        if (!pad_register_to_qword(c, 0x002464b0u, v1)) return;
    }
    ch.ptr = c.r[v1].w[0];
    set32(c.r[a2], Chain::kAddr);
    set32(c.r[a0], code);
    const std::uint32_t qwc = direct_size(ch.ptr, code);
    set32(c.r[v1], ld32(code) + qwc);
    st32(code, c.r[v1].w[0]);
    ch.vif_code = 0;

    // NOPs to the next qword (none: the DIRECT block ends on one)
    set32(c.r[v0], ch.ptr);
    set32(c.r[a1], 0xfffffff0u);
    c.r[a1].d[0] &= c.r[v0].d[0];
    c.r[a0].d[0] = c.r[a1].d[0] < c.r[v0].d[0] ? 1 : 0;
    set32(c.r[v1], c.r[a1].w[0] + 16);
    if (c.r[a0].d[0] != 0) c.r[a1].d[0] = c.r[v1].d[0];
    c.r[v0].d[0] = c.r[v0].d[0] < c.r[a1].d[0] ? 1 : 0;
    tick(c, 21);
    if (c.r[v0].d[0] != 0) {
        tick(c, 1);
        if (!pad_through_pointer(c, 0x00246520u, a1)) return;
    }

    // UNPACKs: P, the bone's world matrix, the pass-3 projector, the light directions
    set32(c.r[t6], kProjection);
    set32(c.r[s1], kUnpack4Header);
    set32(c.r[s2], Chain::kAddr);
    c.r[v0].d[0] = 0;
    const std::uint32_t p = ch.ptr;
    set32(c.r[t2], p);
    unpack_matrix(c, p, kProjection, 0);
    ch.ptr = p + 80;
    set32(c.r[t4], p + 80);
    set32(c.r[a0], kBoneSize);
    set32(c.r[t5], 12);
    set32(c.r[v0], ld32(c.r[t7].w[0]));          // *bone_index
    set32(c.r[v1], ld32(inst + kInstanceBones));  // the bone array
    mmi::mult(c, 0, c.r[v0].w[0], c.r[a0].w[0]);
    c.r[v0].d[0] = c.lo.d[0];
    set32(c.r[v0], c.r[v0].w[0] + c.r[v1].w[0] + kBoneWorld);
    unpack_matrix(c, p + 80, c.r[v0].w[0], 12);
    ch.ptr = p + 160;
    set32(c.r[t3], p + 160);
    unpack_matrix(c, p + 160, kShadeProjector, 24);
    ch.ptr = p + 240;
    set32(c.r[t4], p + 240);
    unpack_matrix(c, p + 240, kLightDirections, 4);
    ch.ptr = p + 320;
    set32(c.r[t2], p + 320);
    set32(c.r[v0], kLightDirections);
    set32(c.r[v1], 4);
    set32(c.r[s0], kBoneView);
    set32(c.r[a1], kSegmentView);
    c.r[a2].d[0] = c.r[t8].d[0];
    c.r[a0].d[0] = c.r[s0].d[0];
    tick(c, 87);
    if (!call(c, kMatrixMultiply, Ra{0x00246698u})) return;

    // view x bone, the light colours
    const std::uint32_t q = ch.ptr;
    set32(c.r[t2], q);
    unpack_matrix(c, q, c.r[s0].w[0], 20);
    ch.ptr = q + 80;
    set32(c.r[t3], q + 80);
    unpack_matrix(c, q + 80, kLightColours, 8);
    ch.ptr = q + 160;
    set32(c.r[t2], q + 160);
    set32(c.r[v0], kLightColours);
    set32(c.r[v1], 8);
    c.r[a0].d[0] = c.r[s4].d[0];
    tick(c, 38);
    if (!call(c, kPackBones, Ra{0x00246730u})) return;

    // the per-pass A+D qwords
    unpack_ad(c, 0x26, kTestNever, gs::TEST_1);
    unpack_ad(c, 0x25, kAlphaAddQuarter, gs::ALPHA_1);
    const UnpackClose last = unpack_ad(c, 0x27, 0, kTex0_1);  // TEX0_1 = 0
    set32(c.r[v0], last.word);
    c.r[v1].d[0] = last.unit & 0xffffu;
    c.r[a0].d[0] = c.r[s4].d[0];
    c.r[a1].d[0] = static_cast<std::uint64_t>(static_cast<std::int64_t>(static_cast<std::int32_t>(last.elements)));
    c.r[a2].d[0] = last.num_add;
    set32(c.r[a3], last.code);
    set32(c.r[t0], vif::unpack_v4_32(0x25));
    set32(c.r[t1], vif::unpack_v4_32(0x27));
    set32(c.r[t2], vif::stcycl(4, 4));
    set32(c.r[t3], kUnpackUnitV4_32);
    set32(c.r[t4], 0xffff0000u);
    set32(c.r[t5], gs::ALPHA_1);
    set32(c.r[t6], static_cast<std::uint32_t>(kAlphaAddQuarter >> 32));
    set32(c.r[t7], static_cast<std::uint32_t>(kAlphaAddQuarter));
    set32(c.r[s0], 6);
    tick(c, 43 + 70);
    if (!call(c, kPackPasses23, Ra{0x002468f4u})) return;

    f.lq(s0, 0x60);
    f.lq(s1, 0x50);
    f.lq(s2, 0x40);
    f.lq(s3, 0x30);
    f.lq(s4, 0x20);
    f.ld(ra, 0x10);
    f.pop();
    tick(c, 9);
}
