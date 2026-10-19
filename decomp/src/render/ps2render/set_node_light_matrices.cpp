// fn_23d128 (Ps2/Renderer/Character/ps2render.cpp): the VU1 lighting matrices of one node.
#include "lights.hpp"
#include "ps2/decomp.hpp"
#include "ps2/decomp_vu0.hpp"

namespace {

using namespace ps2;
using namespace ps2::gpr;
using namespace ps2::vu0;
using namespace decomp::render::lights;

constexpr std::uint32_t kMatrixInverseRigid = 0x00214058;  // (m0, m1): m0 = inverse of the rigid m1
constexpr std::uint32_t kMatrixMultiply = 0x00213CE8;      // (m0, m1, m2): row i of m0 = row i of m2 times m1
constexpr std::uint32_t kTransposeMatrix = 0x00213E88;     // sceVu0TransposeMatrix(m0, m1)

constexpr std::uint32_t kRotation = 0x50;  // the node's world matrix (4x4 floats, not necessarily 16-aligned)

}

// Builds the lighting matrices VU1 uses for the node a0 from its light set (fn_23d2f0): the colour matrix
// (three colours and the ambient) and the light directions turned into the node's own space, as the normal-light
// matrix, so a vertex normal N gives N.L for each light without being transformed first.
PS2_DECOMP(0023D128, SetNodeLightMatrices) {
    const std::uint32_t node = c.r[a0].w[0];
    StackFrame f(c, 0x60);
    f.sq(s0, 0x50);
    f.sd(ra, 0x40);

    // the matrices from the light set, through the scratch registers the original uses
    ld128(kLightDirRow3In, c.r[t5]);
    ld128(kNodeLights.color(1), c.r[t0]);
    ld128(kNodeLights.color(2), c.r[t1]);
    ld128(kNodeLights.dir(0), c.r[t6]);
    ld128(kAmbient, c.r[t4]);
    ld128(kNodeLights.color(0), c.r[a1]);
    ld128(kNodeLights.dir(2), c.r[t7]);
    ld128(kNodeLights.dir(1), c.r[v0]);
    st128(kLightColorMatrix + 0x00, c.r[a1]);
    st128(kLightColorMatrix + 0x10, c.r[t0]);
    st128(kLightColorMatrix + 0x20, c.r[t1]);
    st128(kLightColorMatrix + 0x30, c.r[t4]);
    st128(kLightDirMatrix + 0x00, c.r[t6]);
    st128(kLightDirMatrix + 0x10, c.r[v0]);
    st128(kLightDirMatrix + 0x20, c.r[t7]);
    st128(kLightDirMatrix + 0x30, c.r[t5]);

    // The node's rotation goes to a matrix on the stack with its translation cleared. The original reads it word
    // by word into f0-f10, moves the words to GPRs (mfc1 sign-extends them) and packs each row with PEXTLW/PCPYLD
    // into t0 and then a VF register; this leaves the registers as it does.
    const std::uint32_t rot = node + kRotation;
    Reg128 m[4];
    for (std::uint32_t i = 0; i < 4; ++i)
        for (std::uint32_t j = 0; j < 4; ++j) m[i].w[j] = ld32(rot + 16 * i + 4 * j);
    static constexpr struct { unsigned f, row, col; } kFprs[] = {
        {0, 2, 0}, {1, 3, 0}, {2, 3, 2}, {3, 1, 2}, {4, 3, 1}, {5, 1, 1}, {6, 1, 3}, {7, 2, 2}, {8, 3, 3}, {9, 2, 1}, {10, 2, 3},
    };
    for (const auto &k : kFprs) c.f[k.f] = m[k.row].w[k.col];
    set32(c.r[v0], m[2].w[2]);
    set32(c.r[v1], m[2].w[3]);
    set32(c.r[a2], m[3].w[2]);
    set32(c.r[a3], m[3].w[3]);
    set32(c.r[t2], m[2].w[0]);
    set32(c.r[t5], m[2].w[1]);
    set32(c.r[t3], node + 0x70);
    set32(c.r[t4], node + 0x80);
    mmi::pextlw(c.r[t0], c.r[t5], c.r[t2]);  // the last row packed: row 2
    mmi::pextlw(c.r[t1], c.r[v1], c.r[v0]);
    mmi::pcpyld(c.r[t0], c.r[t1], c.r[t0]);
    c.vu0.vf[vf1] = m[2];
    c.vu0.vf[vf2] = m[3];
    c.vu0.vf[vf3] = m[1];
    c.r[a0].d[0] = c.r[sp].d[0];
    c.r[a1].d[0] = c.r[sp].d[0];
    set32(c.r[s0], kLightDirMatrix);
    for (std::uint32_t i = 0; i < 4; ++i) st128(f.at(16 * i) & ~15u, m[i]);
    for (std::uint32_t j = 0; j < 3; ++j) st32(f.at(0x30 + 4 * j), 0);  // no translation
    tick(c, 94);

    // m = m^-1, the world-to-node rotation
    if (!call(c, kMatrixInverseRigid, Ra{0x0023D2A0})) return;
    c.r[a0].d[0] = c.r[s0].d[0];
    c.r[a2].d[0] = c.r[s0].d[0];
    c.r[a1].d[0] = c.r[sp].d[0];
    tick(c, 5);
    // the light directions in the node's space
    if (!call(c, kMatrixMultiply, Ra{0x0023D2B4})) return;
    set32(c.r[v0], kLightDirRow3Out);
    c.r[a1].d[0] = c.r[s0].d[0];
    ld128(kLightDirRow3Out, c.r[v1]);
    set32(c.r[a0], kNormalLightMatrix);
    st128(kLightDirMatrix + 0x30, c.r[v1]);
    tick(c, 9);
    if (!call(c, kTransposeMatrix, Ra{0x0023D2D8})) return;

    f.lq(s0, 0x50);
    f.ld(ra, 0x40);
    f.pop();
    tick(c, 5);
}
