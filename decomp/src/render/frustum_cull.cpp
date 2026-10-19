// View-frustum culling tests (ps2render, the object around 0x22c308-0x22c920; no source path in the map). The 3D
// draws (fn_2459f8, fn_242ad0, fn_235090, ...) ask them whether an instance or a mesh segment is on screen. The
// frustum object (the draw path's is at 0x77FF90) holds:
//   +0x00-0x5f  six planes, normal in xyz and distance in w, positive on the inside;
//   +0x80-0xff  two 4x4 matrices whose columns are planes (three each, in xyz): a point times one of them gives three
//               plane distances at once, for the VU0 tests;
//   +0x100      the margin the box test widens the planes by.
// Every test answers kOutside (cull), kInside (completely inside every plane) or kCrossing.
//
// The VU0 tests judge the distances with VCLIP against w (the radius or the margin): a distance below -w sets one of
// the "minus" clip bits (0xaaa over the last two judgements), one above +w a "plus" bit (0x555).
#include "ps2/decomp.hpp"
#include "ps2/decomp_vu0.hpp"

namespace {

using namespace ps2;
using namespace ps2::gpr;
using namespace ps2::vu0;

enum Cull : std::uint32_t {
    kOutside = 0,
    kInside = 1,
    kCrossing = 2,
};

constexpr std::uint64_t kMinusBits = 0xaaa; // x, y or z below -w in either of the last two VCLIPs
constexpr std::uint64_t kPlusBits = 0x555;  // x, y and z above +w in both

// The point vf14 against the six planes of the matrices at m and m + 0x40 (loaded into vf5-vf12): vf13.w = w, the
// distances go to vf8 and vf7 (xyz), both are judged with VCLIP. Returns the clip flag register (cfc2 vi18), whose
// low 12 bits are these two judgements.
std::uint32_t clip_point(Cpu &c, std::uint32_t m, std::uint32_t w) {
    for (unsigned i = 0; i < 8; ++i) lqc2(c, static_cast<Vf>(vf5 + i), m + 16 * i);
    set32(c.r[t0], w); // mfc1 t0
    qmtc2(c, t0, vf13);
    vmulbc(c, W, vf13, vf0, vf13, Lane::x);
    vmulabc(c, XYZW, vf5, vf14, Lane::x);
    vmaddabc(c, XYZW, vf6, vf14, Lane::y);
    vmaddabc(c, XYZW, vf7, vf14, Lane::z);
    vmaddbc(c, XYZW, vf8, vf8, vf0, Lane::w);
    vmulabc(c, XYZW, vf9, vf14, Lane::x);
    vmaddabc(c, XYZW, vf10, vf14, Lane::y);
    vmaddabc(c, XYZW, vf11, vf14, Lane::z);
    vmaddbc(c, XYZW, vf7, vf12, vf0, Lane::w);
    vclip(c, vf8, vf13);
    vclip(c, vf7, vf13);
    return cfc2(c, 18);
}

}

// fn_22c308(frustum, centre, radius): a sphere (centre in a1 as a 128-bit vector, radius in f12) against the six
// planes at +0x00, on the FPU, in the order +0x50, +0x00, +0x10, +0x40, +0x20, +0x30, stopping at the first plane it
// is completely outside of (distance <= -radius). The fallback of FrustumSphereTest when the VU0 matrices are off.
// Each plane is dotted with the centre on VU0 (vf1, vf5, t0) and its w read back from a copy on the stack; a1 counts
// the planes the sphere is completely inside of (distance > radius).
PS2_DECOMP(0022C308, FrustumSphereTestPlanes) {
    static constexpr std::uint32_t kOrder[6] = {0x50, 0x00, 0x10, 0x40, 0x20, 0x30};
    const std::uint32_t frustum = c.r[a0].w[0];
    StackFrame f(c, 16);
    qmtc2(c, a1, vf2);
    for (int i = 0; i < 6; ++i) {
        // count the previous plane in a1 when the sphere was completely inside it (v0 = kInside)
        if (i == 1) {
            c.r[v0].d[0] ^= 1u;
            c.r[a1].d[0] = c.r[v0].d[0] < 1u;
        } else if (i > 1) {
            c.r[v1].d[0] = c.r[v0].d[0] ^ 1u;
            set32(c.r[v0], c.r[a1].w[0] + 1u);
            if (c.r[v1].d[0] == 0) c.r[a1].d[0] = c.r[v0].d[0];
        }
        lqc2(c, vf1, frustum + kOrder[i]);
        vmul(c, XYZ, vf5, vf2, vf1);
        vaddbc(c, X, vf5, vf5, vf5, Lane::y);
        vaddbc(c, X, vf5, vf5, vf5, Lane::z);
        qmfc2(c, t0, vf5);
        const unsigned fd = i < 2 ? 2 : 1; // the register the distance is computed in
        c.f[fd] = c.r[t0].w[0];
        sqc2(c, vf1, f.at(0));
        if (i < 2) set_fpr(c, 1, -fpr(c, 12));
        c.f[0] = ld32(f.at(12)); // plane.w
        if (i == 1) c.f[3] = c.f[1];
        const psf d = fpr(c, fd) + fpr(c, 0);
        set_fpr(c, fd, d);
        const psf below = fpr(c, i < 2 ? 1 : 3); // -radius
        fpu_compare(c, d <= below);
        tick(c, i == 1 ? 17 : 16);
        if (d <= below) {
            c.r[v0].d[0] = kOutside;
            tick(c, 3);
        } else {
            const bool inside = fpr(c, 12) < d;
            fpu_compare(c, inside);
            set32(c.r[v0], kCrossing);
            tick(c, 4);
            if (inside) {
                set32(c.r[v0], kInside);
                tick(c, 1);
            }
        }
        tick(c, 2);
        if (c.r[v0].d[0] == kOutside) {
            f.pop();
            tick(c, 3 + 3);
            return;
        }
    }
    c.r[v1].d[0] = c.r[v0].d[0] ^ 1u;
    set32(c.r[a0], kInside);
    set32(c.r[v0], c.r[a1].w[0] + 1u);
    if (c.r[v1].d[0] == 0) c.r[a1].d[0] = c.r[v0].d[0];
    c.r[v1].d[0] = c.r[a1].d[0] ^ 6u;
    set32(c.r[v0], c.r[v1].d[0] == 0 ? kInside : kCrossing); // movz from a0 (= 1): the same 64 bits
    f.pop();
    tick(c, 7 + 3);
}

// fn_22c620(frustum, margin): sets the margin (f12) the box test widens the planes by; the segment draw sets it
// around one FrustumBoxTest call and puts it back to 0.
PS2_DECOMP(0022C620, FrustumSetBoxMargin) {
    st32(c.r[a0].w[0] + 0x100, c.f[12]);
    tick(c, 3);
}

// fn_22c630(frustum, matrix, box): a bounding box against the frustum. The eight corners at box + 0x60 (xyzw) are
// moved by the matrix (rows in vf18-vf15) and each is judged against the six planes with the margin at +0x100; a3
// keeps the AND of their clip flags. Outside when every corner is below the same plane, inside when every corner is
// above all of them, crossing otherwise.
PS2_DECOMP(0022C630, FrustumBoxTest) {
    const std::uint32_t frustum = c.r[a0].w[0], matrix = c.r[a1].w[0];
    lqc2(c, vf18, matrix);
    lqc2(c, vf17, matrix + 0x10);
    lqc2(c, vf16, matrix + 0x20);
    lqc2(c, vf15, matrix + 0x30);
    set32(c.r[t1], frustum + 0x80);
    set32(c.r[a2], c.r[a2].w[0] + 0x60); // the first corner
    set32(c.r[a3], ~0u);
    c.f[0] = ld32(frustum + 0x100);
    set32(c.r[a1], 7); // corners left - 1
    tick(c, 10);
    for (;;) { // 0x0022C658
        lqc2(c, vf14, c.r[a2].w[0]);
        vmulabc(c, XYZW, vf18, vf14, Lane::x);
        vmaddabc(c, XYZW, vf17, vf14, Lane::y);
        vmaddabc(c, XYZW, vf16, vf14, Lane::z);
        vmaddbc(c, XYZW, vf14, vf15, vf14, Lane::w);
        set32(c.r[v0], clip_point(c, c.r[t1].w[0], c.f[0]));
        c.r[a3].d[0] &= c.r[v0].d[0];
        set32(c.r[a2], c.r[a2].w[0] + 16u);
        set32(c.r[a1], c.r[a1].w[0] - 1u);
        tick(c, 39);
        if (c.r[a1].sd[0] < 0) break;
        if (poll(c, 0x0022C658u)) return;
    }
    c.r[v0].d[0] = c.r[a3].d[0] & kMinusBits;
    tick(c, 3);
    if (c.r[v0].d[0] != 0) {
        c.r[v0].d[0] = kOutside;
        tick(c, 3);
        return;
    }
    c.r[v1].d[0] = (c.r[a3].d[0] & kPlusBits) ^ kPlusBits;
    set32(c.r[a0], kInside);
    set32(c.r[v0], c.r[v1].d[0] == 0 ? kInside : kCrossing); // movz from a0 (= 1): the same 64 bits
    tick(c, 7);
}

// fn_22c838(frustum, centre, radius): a sphere (centre in a1 as a 128-bit vector, radius in f12) against the frustum,
// on VU0 with the plane matrices at +0x80, or with FrustumSphereTestPlanes when the flag at 0x4F41B0 is clear. The
// draw code culls instances and segments by their bounding spheres with it.
PS2_DECOMP(0022C838, FrustumSphereTest) {
    set32(c.r[v0], 0x004F0000u); // lui
    StackFrame f(c, 16);
    set32(c.r[v1], ld32(0x004F41B0u));
    qmtc2(c, a1, vf14);
    f.sd(ra, 0);
    tick(c, 7);
    if (c.r[v1].d[0] == 0) {
        tick(c, 2);
        if (!call(c, 0x0022C308u, Ra{0x0022C85Cu})) return;
        tick(c, 2);
    } else {
        set32(c.r[v0], c.r[a0].w[0] + 0x80);
        set32(c.r[v1], clip_point(c, c.r[v0].w[0], c.f[12]));
        set32(c.r[v0], kOutside);
        c.r[a0].d[0] = c.r[v1].d[0] & kMinusBits;
        tick(c, 34);
        if (c.r[a0].d[0] == 0) {
            set32(c.r[v0], kInside);
            c.r[v1].d[0] &= kPlusBits;
            set32(c.r[a0], kPlusBits);
            set32(c.r[v1], c.r[v1].w[0] - c.r[a0].w[0]);
            tick(c, 7);
            if (c.r[v1].d[0] != 0) {
                set32(c.r[v0], kCrossing);
                tick(c, 2);
            }
        }
    }
    f.ld(ra, 0);
    f.pop();
    tick(c, 4);
}
