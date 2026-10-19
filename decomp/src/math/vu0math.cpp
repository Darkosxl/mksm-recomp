// The engine's VU0 vector and matrix library (ps2render, the object around 0x213648-0x215d00 that also holds Sony's
// sceVu0InnerProduct and sceVu0TransposeMatrix). Matrices are 4x4 floats, row-major, 16-byte aligned, used with row
// vectors: rows 0-2 are the rotation, row 3 (+0x30) the translation.
//
// These routines are hand-written VU0 macro code and MMI. The VU0 parts go through ps2/decomp_vu0.hpp with the
// original's VF registers, so VF, ACC and the MAC/status flags end up as the recompiled code leaves them. The MMI
// transposes are computed as plain word moves and leave t0-t7 as the original's PEXTLW/PEXTUW/PCPYLD/PCPYUD do.
#include "ps2/decomp.hpp"
#include "ps2/decomp_vu0.hpp"

namespace {

using namespace ps2;
using namespace ps2::gpr;
using namespace ps2::vu0;

// The registers libvu0's MMI transpose leaves, for rows m[0..3] held in t0-t3: t4-t7 get the pairwise word
// interleaves (x0 x1 y0 y1, z0 z1 w0 w1, x2 x3 y2 y3, z2 z3 w2 w3), and t0.. t(rows-1) the transposed rows.
void transpose_registers(Cpu &c, const Reg128 (&m)[4], int rows) {
    for (int k = 0; k < 4; ++k) {
        const Reg128 &lo = m[(k >> 1) * 2], &hi = m[(k >> 1) * 2 + 1];
        const int first = (k & 1) * 2; // t4/t6 take words 0-1, t5/t7 words 2-3
        Reg128 &r = c.r[t4 + k];
        r.w[0] = lo.w[first];
        r.w[1] = hi.w[first];
        r.w[2] = lo.w[first + 1];
        r.w[3] = hi.w[first + 1];
    }
    for (int j = 0; j < rows; ++j)
        for (int i = 0; i < 4; ++i) c.r[t0 + j].w[i] = m[i].w[j];
}

}

// fn_213c78: puts a position into a matrix's translation row: m->t.xyz = *v (w untouched). The copy goes through f0
// and f1 (lwc1/swc1), which keep the last words.
PS2_DECOMP(00213C78, MatrixSetTranslation) {
    const std::uint32_t m = c.r[a0].w[0], v = c.r[a1].w[0];
    c.f[0] = ld32(v);
    st32(m + 0x30, c.f[0]);
    c.f[1] = ld32(v + 4);
    st32(m + 0x34, c.f[1]);
    c.f[0] = ld32(v + 8);
    st32(m + 0x38, c.f[0]);
    tick(c, 8);
}

// fn_213c98: reads a matrix's position: *v = m->t.xyz (the inverse of MatrixSetTranslation, also through f0/f1).
PS2_DECOMP(00213C98, MatrixGetTranslation) {
    const std::uint32_t v = c.r[a0].w[0], m = c.r[a1].w[0];
    c.f[0] = ld32(m + 0x30);
    st32(v, c.f[0]);
    c.f[1] = ld32(m + 0x34);
    st32(v + 4, c.f[1]);
    c.f[0] = ld32(m + 0x38);
    st32(v + 8, c.f[0]);
    tick(c, 8);
}

// float sceVu0InnerProduct(sceVu0FVECTOR v0, sceVu0FVECTOR v1): the xyz dot product ((x0 x1 + y0 y1) + z0 z1), in
// f0. vf5 keeps the per-lane products (and v1.w), v0 the whole quadword.
PS2_DECOMP(00213E08, sceVu0InnerProduct) {
    lqc2(c, vf4, c.r[a0].w[0]);
    lqc2(c, vf5, c.r[a1].w[0]);
    vmul(c, XYZ, vf5, vf4, vf5);
    vaddbc(c, X, vf5, vf5, vf5, Lane::y);
    vaddbc(c, X, vf5, vf5, vf5, Lane::z);
    qmfc2(c, v0, vf5);
    c.f[0] = c.r[v0].w[0]; // mtc1
    tick(c, 9);
}

// void sceVu0TransposeMatrix(sceVu0FMATRIX m0, sceVu0FMATRIX m1): m0 = transpose of m1.
PS2_DECOMP(00213E88, sceVu0TransposeMatrix) {
    const std::uint32_t dst = c.r[a0].w[0], src = c.r[a1].w[0];
    Reg128 m[4];
    for (std::uint32_t i = 0; i < 4; ++i) ld128((src + 16 * i) & ~15u, m[i]);
    transpose_registers(c, m, 4);
    for (std::uint32_t i = 0; i < 4; ++i) st128((dst + 16 * i) & ~15u, c.r[t0 + i]);
    tick(c, 18);
}

// fn_214058: m0 = inverse of the rigid transform m1 (orthonormal rotation R plus translation t, as
// sceVu0InversMatrix): the rotation is transposed (its w column becomes 0) and the translation row becomes
// -(R t) with t.w kept. Exact only for rotations without scale.
PS2_DECOMP(00214058, MatrixInverseRigid) {
    const std::uint32_t dst = c.r[a0].w[0], src = c.r[a1].w[0];
    Reg128 m[4];
    for (std::uint32_t i = 0; i < 3; ++i) ld128((src + 16 * i) & ~15u, m[i]);
    lqc2(c, vf4, src + 0x30);
    vmove(c, XYZW, vf5, vf4);           // vf5 = t
    vsub(c, XYZ, vf4, vf4, vf4);        // vf4 = (0, 0, 0, t.w): the row the transpose turns into the w column
    vmove(c, XYZW, vf9, vf4);
    m[3] = c.vu0.vf[vf4];               // qmfc2 t3
    c.r[t3] = m[3];
    transpose_registers(c, m, 3);       // t0-t2 = the rows of R^T, w = 0
    qmtc2(c, t0, vf6);
    qmtc2(c, t1, vf7);
    qmtc2(c, t2, vf8);
    vmulabc(c, XYZ, vf6, vf5, Lane::x); // R t = R^T rows weighted by t
    vmaddabc(c, XYZ, vf7, vf5, Lane::y);
    vmaddbc(c, XYZ, vf4, vf8, vf5, Lane::z);
    vsub(c, XYZ, vf4, vf9, vf4);        // -(R t), w = t.w
    for (std::uint32_t i = 0; i < 3; ++i) st128((dst + 16 * i) & ~15u, c.r[t0 + i]);
    sqc2(c, vf4, dst + 0x30);
    tick(c, 28);
}

// fn_214658: m0 = m1 moved by v (as sceVu0TransMatrix): the rotation rows are copied (through a3, t0, t1) and the
// translation row gets t.xyz + v.xyz, t.w kept.
PS2_DECOMP(00214658, MatrixTranslate) {
    const std::uint32_t dst = c.r[a0].w[0], src = c.r[a1].w[0];
    lqc2(c, vf4, c.r[a2].w[0]);
    lqc2(c, vf5, src + 0x30);
    ld128(src & ~15u, c.r[a3]);
    ld128((src + 0x10) & ~15u, c.r[t0]);
    ld128((src + 0x20) & ~15u, c.r[t1]);
    vadd(c, XYZ, vf5, vf5, vf4);
    st128(dst & ~15u, c.r[a3]);
    st128((dst + 0x10) & ~15u, c.r[t0]);
    st128((dst + 0x20) & ~15u, c.r[t1]);
    sqc2(c, vf5, dst + 0x30);
    tick(c, 12);
}

// fn_214688: *dst = *src for one quadword (a vector, as sceVu0CopyVector), through a2.
PS2_DECOMP(00214688, CopyVector) {
    ld128(c.r[a1].w[0] & ~15u, c.r[a2]);
    st128(c.r[a0].w[0] & ~15u, c.r[a2]);
    tick(c, 4);
}
