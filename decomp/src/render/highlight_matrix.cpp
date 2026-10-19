// Ps2/Renderer/Character/ps2render.cpp: the texture matrix of a character's highlight pass.
//
// The 3-pass characters draw each mesh as base, highlight and shading (decomp/notes/native-renderer.md §1.3). For the
// highlight the character packers (fn_244368, fn_246918) call this once per instance to build a matrix that turns a
// vertex normal into coordinates on the highlight texture, centred on the half vector between the view direction
// and the light (a Blinn-style highlight, inferred from the math), and store it in the instance at +0x1060 for the
// VU1 constants.
//
// The original is VU0 macro code with the compiler's float gathers (mfc1 x4, pextlw, pextlw, pcpyld) in between;
// both go through the same helpers here, with the original's VF and GPR numbers, so VU0 (VF, ACC, Q, MAC/status),
// t0/t1 and the scratch GPRs and FPRs end up as the recompiled code leaves them.
#include "ps2/decomp.hpp"
#include "ps2/decomp_vu0.hpp"

namespace {

using namespace ps2;
using namespace ps2::gpr;
using namespace ps2::vu0;

constexpr std::uint32_t kCameraEye = 0x006CBA50u + 0x80u;  // the camera's eye position (x, y, z), as fn_236878 reads it
constexpr std::uint32_t kFlipHalfVector = 0x00663640u;     // nonzero: the half-vector axis is negated
constexpr std::uint32_t kMatrix = 0x1060u;                 // where the instance keeps the matrix
constexpr std::uint32_t kTransposeMatrix = 0x00213E88u;    // sceVu0TransposeMatrix
constexpr psf kMinusOne(-1.0f), kHalf(0.5f);

// The compiler's float4 gather: the four values go to GPRs r[0..3] (mfc1), then pextlw t0, r1, r0; pextlw t1, r3, r2;
// pcpyld t0, t1, t0, so t0 = (v[0], v[1], v[2], v[3]) and t1 keeps the upper interleave.
void gather(Cpu &c, const unsigned (&r)[4], const std::uint32_t (&v)[4]) {
    for (int i = 0; i < 4; ++i) set32(c.r[r[i]], v[i]);
    mmi::pextlw(c.r[t0], c.r[r[1]], c.r[r[0]]);
    mmi::pextlw(c.r[t1], c.r[r[3]], c.r[r[2]]);
    mmi::pcpyld(c.r[t0], c.r[t1], c.r[t0]);
}

// fd.xyz = fs.xyz / |fs.xyz|, fd.w = fs.w (times vf0.w = 1): the inline normalise, with vf5 as scratch
void normalize(Cpu &c, Vf fd, Vf fs) {
    vmul(c, XYZ, vf5, fs, fs);
    vaddbc(c, X, vf5, vf5, vf5, Lane::y);
    vaddbc(c, X, vf5, vf5, vf5, Lane::z);
    vrsqrt(c, vf0, Lane::w, vf5, Lane::x);
    vmulbc(c, W, fd, vf0, fs, Lane::w);
    vmulq(c, XYZ, fd, fs);
}

// v *= s: mfc1 t0, s; qmtc2 t0, vf5 (all 128 bits of t0); vmulx.xyzw v, v, vf5x
void scale(Cpu &c, Vf v, std::uint32_t s) {
    set32(c.r[t0], s);
    qmtc2(c, t0, vf5);
    vmulbc(c, XYZW, v, v, vf5, Lane::x);
}

}

// fn_23db48(instance a0, const float position[4] a1, quadword light a2). The light (x, y, z, 0) points from the light;
// the position is the object's, in the camera's world space.
//   l = -normalize(light)                   vf3
//   v = normalize(position - eye)           vf2, the view direction
//   h = normalize(v + l)                    vf8, the half vector (negated when [0x663640] is set)
//   s = normalize(l x v), t = normalize(h x s)
// The rows 0.5 t, 0.5 s, h, (0, 0, 0, 1) are transposed (sceVu0TransposeMatrix) and row 3 gets x = y = 0.5, so the
// matrix gives (0.5 + 0.5 t.n, 0.5 + 0.5 s.n, h.n + h.w) for a normal n: the highlight texture's centre where n = h.
PS2_DECOMP(0023DB48, BuildHighlightMatrix) {
    StackFrame f(c, 0x70);
    qmtc2(c, a2, vf1);
    f.sq(s0, 0x50);
    f.sd(ra, 0x40);
    c.r[s0].d[0] = c.r[a0].d[0];
    st32(f.at(0x60), c.f[20]);

    // vf2 = the position (through f2, f1, f0, f3)
    const std::uint32_t position = c.r[a1].w[0];
    c.f[2] = ld32(position);
    c.f[1] = ld32(position + 4);
    c.f[0] = ld32(position + 8);
    c.f[3] = ld32(position + 12);
    gather(c, {v0, v1, a0, a1}, {c.f[2], c.f[1], c.f[0], c.f[3]});
    qmtc2(c, t0, vf2);

    normalize(c, vf3, vf1);
    c.f[3] = 0;
    c.f[4] = kMinusOne.bits;
    c.f[2] = ld32(kCameraEye + 8);
    scale(c, vf3, c.f[4]);                       // l

    c.f[0] = ld32(kCameraEye + 4);
    c.f[1] = ld32(kCameraEye);
    gather(c, {v0, v1, a0, a1}, {c.f[1], c.f[0], c.f[2], c.f[3]});
    qmtc2(c, t0, vf1);                           // the eye, w = 0
    vsub(c, XYZW, vf2, vf2, vf1);
    normalize(c, vf2, vf2);                      // v
    vadd(c, XYZW, vf8, vf2, vf3);
    normalize(c, vf8, vf8);                      // h
    qmfc2(c, a2, vf2);

    vopmula(c, vf3, vf2);
    vopmsub(c, vf2, vf2, vf3);
    vsub(c, W, vf2, vf2, vf2);
    normalize(c, vf2, vf2);                      // s = l x v
    qmfc2(c, a3, vf2);

    vopmula(c, vf8, vf2);
    vopmsub(c, vf1, vf2, vf8);
    vsub(c, W, vf1, vf1, vf1);
    normalize(c, vf1, vf1);                      // t = h x s

    set32(c.r[v0], kFlipHalfVector & 0xFFFF0000u);
    set32(c.r[v1], ld32(kFlipHalfVector));
    tick(c, 86);
    if (c.r[v1].w[0] != 0) {
        scale(c, vf8, c.f[4]);
        tick(c, 3);
    }

    set32(c.r[at], kHalf.bits);
    c.f[20] = kHalf.bits;
    scale(c, vf1, c.f[20]);
    scale(c, vf2, c.f[20]);

    // the identity (vf4 = (0, 0, 0, 1) rotated into vf5, vf6, vf7) on the stack, rows 0-2 then replaced by t, s, h
    vsub(c, XYZW, vf4, vf0, vf0);
    vadd(c, W, vf4, vf4, vf0);
    vmr32(c, XYZW, vf5, vf4);
    vmr32(c, XYZW, vf6, vf5);
    vmr32(c, XYZW, vf7, vf6);
    sqc2(c, vf4, f.at(0x30));
    sqc2(c, vf5, f.at(0x20));
    sqc2(c, vf6, f.at(0x10));
    sqc2(c, vf7, f.at(0x00));
    sqc2(c, vf1, f.at(0x00));
    c.r[a0].d[0] = c.r[sp].d[0];
    sqc2(c, vf2, f.at(0x10));
    c.r[a1].d[0] = c.r[sp].d[0];
    sqc2(c, vf8, f.at(0x20));
    tick(c, 25);
    if (!call(c, kTransposeMatrix, Ra{0x0023DD10u})) return;

    // row 3 = (0.5, 0.5, h.w, 1): the texture centre. The rows are read back word by word and gathered again.
    st32(f.at(0x30), c.f[20]);
    st32(f.at(0x34), c.f[20]);
    std::uint32_t m[16];
    for (std::uint32_t i = 0; i < 16; ++i) m[i] = ld32(f.at(4 * i));
    const std::uint32_t out = c.r[s0].w[0] + kMatrix;
    set32(c.r[a1], out);
    gather(c, {t2, t3, a2, a3}, {m[0], m[1], m[2], m[3]});
    qmtc2(c, t0, vf4);
    gather(c, {t2, t3, v0, a2}, {m[4], m[5], m[6], m[7]});
    qmtc2(c, t0, vf3);
    gather(c, {a3, t2, t3, v0}, {m[8], m[9], m[10], m[11]});
    qmtc2(c, t0, vf2);
    sqc2(c, vf4, out);
    gather(c, {v1, a0, a2, a3}, {c.f[20], m[13], m[14], m[15]});
    qmtc2(c, t0, vf1);
    // what the lwc1s leave in the FPRs
    c.f[0] = m[14];
    c.f[1] = m[10];
    c.f[2] = m[9];
    c.f[3] = m[13];
    c.f[4] = m[8];
    c.f[5] = m[7];
    c.f[6] = m[11];
    c.f[7] = m[15];

    f.lq(s0, 0x50);
    f.ld(ra, 0x40);
    c.f[20] = ld32(f.at(0x60));
    sqc2(c, vf1, out + 0x30);
    sqc2(c, vf3, out + 0x10);
    sqc2(c, vf2, out + 0x20);
    f.pop();
    tick(c, 63);
}
