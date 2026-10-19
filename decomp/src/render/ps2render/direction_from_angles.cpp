// fn_23cae8 (Ps2/Renderer/Character/ps2render.cpp): a unit direction from two global angles, for the per-instance
// drawers fn_244368 and fn_249060, which add it to row 3 of a matrix they build right after (their light setup,
// inferred from the VU0 code around the calls, 0x244770 and 0x249a5c).
//
// The angles are game-side globals in 1/4096 turns. The rotations go through Sony's libvu0 (sceVu0RotMatrixX/Y,
// sceVu0MulMatrix, still recompiled); the final apply + normalize is inline VU0 macro code, reproduced with the
// original's VF registers so VF, ACC, Q and the flags match.
#include "ps2/decomp.hpp"
#include "ps2/decomp_vu0.hpp"

namespace {

using namespace ps2;
using namespace ps2::gpr;
using namespace ps2::vu0;

constexpr std::uint32_t kAngleBlock = 0x006CBA50u;  // game globals (gamecode/Obj_Proc.cpp write them)
constexpr std::uint32_t kAngleX = kAngleBlock + 0x90;
constexpr std::uint32_t kAngleY = kAngleBlock + 0x94;
constexpr std::uint32_t kUnitMatrix = 0x0065E410u;  // the matrix both rotations start from

constexpr psf kTwoPi = psf::from_bits(0x40C90FDBu);
constexpr psf kTurnUnit = psf::from_bits(0x39800000u);  // 1/4096

// libvu0, recompiled
constexpr std::uint32_t kRotMatrixX = 0x002148A0u;  // sceVu0RotMatrixX(m0, m1, rx in f12)
constexpr std::uint32_t kRotMatrixY = 0x002149F8u;  // sceVu0RotMatrixY(m0, m1, ry in f12)
constexpr std::uint32_t kMulMatrix = 0x00213CE8u;   // sceVu0MulMatrix(m0, m1, m2)

// stack frame (0x120 bytes): the x rotation at sp + 0, then
constexpr std::uint32_t kRotY = 0x40, kRotYX = 0x80, kVector = 0xC0;

}

// Returns in v0 (all 128 bits, the quadword of vf2) the vector (0, 0, 1, 1) taken through
// RotY(angle y) * RotX(angle x) of the unit matrix, xyz normalized (w as the transform leaves it).
PS2_DECOMP(0023CAE8, DirectionFromAngles) {
    const StackFrame f(c, 0x120);
    c.r[v1].d[0] = 0;
    f.sq(s1, 0xF0);
    c.r[a0].d[0] = c.r[sp].d[0];  // the x rotation's matrix
    f.sq(s0, 0x100);
    f.sq(s2, 0xE0);
    st32(f.at(0x118), c.f[21]);
    st32(f.at(0x110), c.f[20]);
    f.sd(ra, 0xD0);
    set32(c.r[s1], kAngleBlock);
    set32(c.r[s0], kUnitMatrix);
    c.r[a1].d[0] = c.r[s0].d[0];
    c.r[at].d[0] = kTurnUnit.bits;  // the last constant built in at (2 pi went through it first)
    set_fpr(c, 21, kTwoPi);
    set_fpr(c, 20, kTurnUnit);
    set_fpr(c, 12, psf::from_bits(ld32(kAngleX)) * kTwoPi * kTurnUnit);

    // the vector (0, 0, 1, 1), built with MMI in t0 (t1 keeps the interleaved 1.0s) and kept on the stack
    c.r[v0].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[t1].w[0] = c.r[t1].w[1] = 0x3F800000u;
    c.r[t1].d[1] = 0;
    c.r[t0].d[0] = 0;
    c.r[t0].d[1] = c.r[t1].d[0];
    qmtc2(c, t0, vf1);
    sqc2(c, vf1, f.at(kVector));
    tick(c, 30);
    if (!call(c, kRotMatrixX, Ra{0x0023CB60u})) return;  // rot x = RotX(unit, x)

    set32(c.r[s2], f.at(kRotY));
    c.r[a1].d[0] = c.r[s0].d[0];
    c.r[a0].d[0] = c.r[s2].d[0];
    set_fpr(c, 12, psf::from_bits(ld32(kAngleY)) * kTwoPi * kTurnUnit);
    tick(c, 8);
    if (!call(c, kRotMatrixY, Ra{0x0023CB80u})) return;  // rot y = RotY(unit, y)

    set32(c.r[s0], f.at(kRotYX));
    c.r[a1].d[0] = c.r[s2].d[0];
    c.r[a0].d[0] = c.r[s0].d[0];
    c.r[a2].d[0] = c.r[sp].d[0];
    tick(c, 6);
    if (!call(c, kMulMatrix, Ra{0x0023CB98u})) return;  // m = rot y * rot x

    // vf1 = (0, 0, 1, 1) * m (the rows in vf4, vf3, vf2, vf1), then vf2.xyz = vf1.xyz / |vf1.xyz|, vf2.w = vf1.w
    const std::uint32_t m = f.at(kRotYX);
    lqc2(c, vf4, m);
    lqc2(c, vf3, m + 0x10);
    lqc2(c, vf2, m + 0x20);
    lqc2(c, vf1, m + 0x30);
    lqc2(c, vf5, f.at(kVector));
    vmulabc(c, XYZW, vf4, vf5, Lane::x);
    vmaddabc(c, XYZW, vf3, vf5, Lane::y);
    vmaddabc(c, XYZW, vf2, vf5, Lane::z);
    vmaddbc(c, XYZW, vf1, vf1, vf5, Lane::w);
    vmul(c, XYZ, vf5, vf1, vf1);
    vaddbc(c, X, vf5, vf5, vf5, Lane::y);
    vaddbc(c, X, vf5, vf5, vf5, Lane::z);
    vrsqrt(c, vf0, Lane::w, vf5, Lane::x);
    vmulbc(c, W, vf2, vf0, vf1, Lane::w);
    vmulq(c, XYZ, vf2, vf1);
    qmfc2(c, v0, vf2);

    f.lq(s0, 0x100);
    f.lq(s1, 0xF0);
    f.lq(s2, 0xE0);
    f.ld(ra, 0xD0);
    c.f[21] = ld32(f.at(0x118));
    c.f[20] = ld32(f.at(0x110));
    f.pop();
    tick(c, 26);
}
