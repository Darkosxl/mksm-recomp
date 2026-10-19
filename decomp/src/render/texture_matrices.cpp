// ps2render.cpp (Ps2/Renderer/Character): the texture-coordinate matrices of a segment drawn by the world VU1
// programs. The segment packer fn_23a280 calls this once per segment whose texture scrolls or is projected.
//
// The instance (a0) holds its local-to-world matrix at +0x50 (rows +0x50, +0x60, +0x70, translation +0x80); the
// segment record (a1) its bounding box, min (x, y, z) at +0x60 and max at +0x6c.
//
// Most of the register traffic below is the compiler's way of moving floats into VU0 registers (mfc1 into four GPRs,
// pextlw/pextlw/pcpyld through t0/t1, qmtc2) and of copying matrices through a1-t1 with lq/sq. pack() and
// UnpackMatrix() do exactly that, so every GPR, FPR and VF register ends as the original leaves it.
#include "vif.hpp"

#include "ps2/decomp_vu0.hpp"

#include <array>
#include <cstdint>

namespace {

using namespace ps2;
using namespace ps2::gpr;
using namespace ps2::vu0;
using namespace decomp::render;

// ---- globals ----
constexpr std::uint32_t kUvScaleU = 0x004f500cu;        // float: texture repeats per unit along x
constexpr std::uint32_t kUvScaleV = 0x004f5010u;        // float: along y
constexpr std::uint32_t kProjectionMode = 0x004f5018u;  // 2: also upload the planar projection matrix
constexpr std::uint32_t kScrollU = 0x004f5020u;         // float: texture scroll, advanced every call, kept in [-1, 1]
constexpr std::uint32_t kScrollV = 0x004f5024u;
constexpr std::uint32_t kScrollSpeedU = 0x00663464u;    // float: scroll step per call
constexpr std::uint32_t kScrollSpeedV = 0x00663468u;
// {NOP, NOP, STCYCL 4/4, UNPACK V4-32 4 qwords to VU 0}: the header qword of a matrix upload, VU address or'ed in
constexpr std::uint32_t kMatrixHeader = 0x004f4d90u;
constexpr std::uint32_t kWorldToScreen = 0x006610a0u;    // matrix
constexpr std::uint32_t kLocalToScreen = 0x00661a70u;    // matrix: kWorldToScreen x the instance's, written here
constexpr std::uint32_t kVector661a20 = 0x00661a20u;     // a vector (role not determined): only copied, see kDeadCopy
constexpr std::uint32_t kProjectionBasis = 0x0065e410u;  // matrix: the basis of the planar projection
constexpr std::uint32_t kCameraPosition = 0x006cbad0u;   // float x, y, z (the camera object 0x6cba50, +0x80)

// Sony libvu0 (inferred from their code and their order in the binary)
constexpr std::uint32_t kMulMatrix = 0x00213ce8u;   // sceVu0MulMatrix(out, a, b)
constexpr std::uint32_t kRotMatrixX = 0x002148a0u;  // sceVu0RotMatrixX(out, m, angle in f12)
constexpr std::uint32_t kRotMatrixY = 0x002149f8u;  // sceVu0RotMatrixY(out, m, angle in f12)

constexpr std::uint32_t kOne = 0x3f800000u, kMinusOne = 0xbf800000u, kHalfPi = 0x3fc90fdbu;

// VU1 data addresses (qwords) of the three matrices
constexpr std::uint32_t kVuLocalToScreen = 12, kVuUvMatrix = 16, kVuProjection = 20;

// the stack frame (0x160 bytes; saved registers from 0xc0)
constexpr std::uint32_t kUvMatrix = 0x00;   // 4 qwords: the UV matrix, later the projection matrix
constexpr std::uint32_t kDeadCopy = 0x40;   // 4 qwords: the instance's rows 0-2 and kVector661a20, never read
constexpr std::uint32_t kBasis = 0x80;      // 4 qwords: the projection basis, rotated to the thinnest axis

std::uint32_t ldf(Cpu &c, unsigned f, std::uint32_t addr) { return c.f[f] = ld32(addr); }

// Four floats into vf through the GPRs regs (x, y, z, w) and t0/t1, as the original's mfc1 x4, pextlw, pextlw,
// pcpyld, qmtc2.
void pack(Cpu &c, Vf vf, std::array<unsigned, 4> regs, std::array<std::uint32_t, 4> bits) {
    for (int i = 0; i < 4; ++i) set32(c.r[regs[i]], bits[i]);
    mmi::pextlw(c.r[t0], c.r[regs[1]], c.r[regs[0]]);
    mmi::pextlw(c.r[t1], c.r[regs[3]], c.r[regs[2]]);
    mmi::pcpyld(c.r[t0], c.r[t1], c.r[t0]);
    qmtc2(c, t0, vf);
}

// One matrix upload into the chain at `at` (16-aligned, 5 qwords): the header qword with the VU address in its
// UNPACK, then the four rows. Moved through a1-t1 with lq/sq; the address qword {0, 0, 0, vu} is built in a0 from the
// register that holds the address, as the original's two pextlw do.
void UnpackMatrix(Cpu &c, std::uint32_t at, std::uint32_t matrix, unsigned vu_addr_reg) {
    ld128(kMatrixHeader & ~15u, c.r[a1]);
    for (unsigned i = 0; i < 4; ++i) ld128((matrix + 16 * i) & ~15u, c.r[a2 + i]);
    mmi::pextlw(c.r[a0], c.r[vu_addr_reg], c.r[zero]);
    mmi::pextlw(c.r[a0], c.r[a0], c.r[zero]);
    mmi::por(c.r[a1], c.r[a1], c.r[a0]);
    for (unsigned i = 0; i < 5; ++i) st128((at + 16 * i) & ~15u, c.r[a1 + i]);
}

void Epilogue(Cpu &c, const StackFrame &f) {
    f.lq(s0, 0x150);
    f.lq(s1, 0x140);
    f.lq(s2, 0x130);
    f.lq(s3, 0x120);
    f.lq(s4, 0x110);
    f.lq(s5, 0x100);
    f.lq(s6, 0xf0);
    f.lq(s7, 0xe0);
    f.lq(gpr::fp, 0xd0);
    f.ld(ra, 0xc0);
    f.pop();
    tick(c, 13);
}

}

// Uploads a scrolling-texture segment's matrices to VU1 for the world programs: local-to-screen at VU 12, the UV
// matrix at VU 16 (scale on the diagonal, the texture scroll in its last row; the scroll advances every call), and in
// projection mode 2 a planar projection at VU 20 that maps the segment onto the world plane across its thinnest
// bounding-box extent, relative to the camera.
PS2_DECOMP(002388B0, UploadTextureMatrices) {
    StackFrame f(c, 0x160);
    f.sq(s1, 0x140);
    f.sq(s2, 0x130);
    c.r[s1].d[0] = c.r[a0].d[0];  // the instance
    f.sq(s0, 0x150);
    c.r[s2].d[0] = c.r[a1].d[0];  // the segment record
    f.sq(s3, 0x120);
    f.sq(s4, 0x110);
    f.sq(s5, 0x100);
    f.sq(s6, 0xf0);
    f.sq(s7, 0xe0);
    f.sq(gpr::fp, 0xd0);
    f.sd(ra, 0xc0);
    const std::uint32_t frame = c.r[sp].w[0], inst = c.r[s1].w[0], seg = c.r[s2].w[0];
    const Chain chain;

    // the UV matrix starts as the identity (sceVu0UnitMatrix inline: rows vf7, vf6, vf5, vf4)
    vsub(c, XYZW, vf4, vf0, vf0);
    vadd(c, W, vf4, vf4, vf0);
    vmr32(c, XYZW, vf5, vf4);
    vmr32(c, XYZW, vf6, vf5);
    vmr32(c, XYZW, vf7, vf6);
    sqc2(c, vf4, frame + kUvMatrix + 0x30);
    sqc2(c, vf5, frame + kUvMatrix + 0x20);
    sqc2(c, vf6, frame + kUvMatrix + 0x10);
    sqc2(c, vf7, frame + kUvMatrix + 0x00);

    // advance the scroll, then wrap it once each way: above 1 it loses 1, below -1 it gains 1 (f0 holds the value,
    // f14 = 1, f2 = -1; FCR31 keeps the last compare)
    c.r[t0].sd[0] = 0x004f0000;
    c.r[v0].sd[0] = 0x00660000;
    c.r[at].sd[0] = static_cast<std::int32_t>(kOne);
    c.f[14] = kOne;
    const psf one = fpr(c, 14);
    psf u = psf::from_bits(ldf(c, 1, kScrollU)) + psf::from_bits(ldf(c, 0, kScrollSpeedU));
    set_fpr(c, 0, u);
    fpu_compare(c, one < u);
    st32(kScrollU, u.bits);
    tick(c, 33);
    if (one < u) {
        u -= one;
        set_fpr(c, 0, u);
        st32(kScrollU, u.bits);
        tick(c, 2);
    }
    c.r[at].sd[0] = static_cast<std::int32_t>(kMinusOne);
    c.f[2] = kMinusOne;
    const psf minus_one = fpr(c, 2);
    fpu_compare(c, u < minus_one);
    tick(c, 8);
    if (u < minus_one) {
        u += one;
        set_fpr(c, 0, u);
        st32(kScrollU, u.bits);
        tick(c, 2);
    }

    c.r[a3].sd[0] = 0x004f0000;
    c.r[v0].sd[0] = 0x00660000;
    psf v = psf::from_bits(ldf(c, 0, kScrollV)) + psf::from_bits(ldf(c, 1, kScrollSpeedV));
    set_fpr(c, 0, v);
    fpu_compare(c, one < v);
    st32(kScrollV, v.bits);
    tick(c, 9);
    if (one < v) {
        v -= one;
        set_fpr(c, 0, v);
        st32(kScrollV, v.bits);
        tick(c, 2);
    }
    fpu_compare(c, v < minus_one);
    tick(c, 5);
    if (v < minus_one) {
        v += one;
        set_fpr(c, 0, v);
        st32(kScrollV, v.bits);
        tick(c, 2);
    }

    // The UV matrix: rows (su, 0, 0, 0), (0, sv, 0, 0), (0, 0, 0, 0), (scroll u, scroll v, 1, 0). On the way the
    // instance's rows 0-2 and kVector661a20 are copied to kDeadCopy, which nothing reads.
    st32(frame + kUvMatrix + 0x00, ldf(c, 0, kUvScaleU));
    st32(frame + kUvMatrix + 0x14, ldf(c, 1, kUvScaleV));
    set32(c.r[s4], inst + 0x50);
    set32(c.r[s6], inst + 0x60);
    set32(c.r[s7], inst + 0x70);
    c.r[s3].sd[0] = 0x00660000;     // the chain globals' page (0x660000 - 0x1d00)
    set32(c.r[t2], Chain::kAddr);
    set32(c.r[s5], inst + 0x80);
    c.r[gpr::fp].sd[0] = 0x004f0000;
    ldf(c, 13, inst + 0x54);
    ldf(c, 12, inst + 0x58);
    ldf(c, 10, inst + 0x5c);
    ldf(c, 11, inst + 0x64);
    ldf(c, 9, inst + 0x68);
    ldf(c, 7, inst + 0x6c);
    ldf(c, 8, inst + 0x74);
    ldf(c, 6, inst + 0x78);
    ldf(c, 5, inst + 0x7c);
    st32(frame + kUvMatrix + 0x08, 0);
    ldf(c, 3, kScrollV);
    ldf(c, 0, inst + 0x50);
    ld128(kVector661a20, c.r[v1]);
    ldf(c, 1, inst + 0x60);
    ldf(c, 4, kScrollU);
    pack(c, vf4, {v0, a0, a1, a3}, {c.f[0], c.f[13], c.f[12], c.f[10]});
    ldf(c, 2, inst + 0x70);
    pack(c, vf1, {t3, v0, a0, a1}, {c.f[1], c.f[11], c.f[9], c.f[7]});
    ldf(c, 0, frame + kUvMatrix + 0x08);  // the 0 just stored
    pack(c, vf2, {a3, t3, v0, a0}, {c.f[2], c.f[8], c.f[6], c.f[5]});
    set32(c.r[a2], chain.ptr);
    pack(c, vf3, {a1, a3, t3, v0}, {c.f[4], c.f[3], c.f[14], c.f[0]});
    sqc2(c, vf4, frame + kDeadCopy + 0x00);
    sqc2(c, vf1, frame + kDeadCopy + 0x10);
    c.r[v0].d[0] = c.r[a2].d[0] & 0xc;
    sqc2(c, vf2, frame + kDeadCopy + 0x20);
    st128(frame + kDeadCopy + 0x30, c.r[v1]);
    sqc2(c, vf3, frame + kUvMatrix + 0x30);
    st32(frame + kUvMatrix + 0x18, 0);
    st32(frame + kUvMatrix + 0x28, 0);
    tick(c, 79);

    // Align the chain to a qword with NOPs (a2 is the cursor, v0 = a2 & 0xc).
    if (c.r[v0].d[0] != 0) {
        for (;;) {
            st32(c.r[a2].w[0], vif::Nop());
            set32(c.r[a2], c.r[a2].w[0] + 4);
            c.r[v0].d[0] = c.r[a2].d[0] & 0xc;
            tick(c, 6);
            if (c.r[v0].d[0] == 0) break;
            if (poll(c, 0x00238AE8u)) return;
        }
    }

    // Close the open DMA tag (its QWC counts the qwords after it) ...
    const std::uint32_t open = chain.tag;
    set32(c.r[a0], open);
    tick(c, 3);
    if (open != 0) {
        const std::uint32_t qwc = static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[a2].w[0] - open) >> 4) - 1;
        const std::uint32_t word = ld32(open) + qwc;
        st32(open, word);
        set32(c.r[v0], qwc);
        set32(c.r[v1], word);
        tick(c, 6);
    }

    // ... and open a new CNT tag here, with FLUSH (wait for VU1 before its data changes), padded to a qword with NOPs.
    const std::uint32_t tag = c.r[a2].w[0];
    chain.ptr = tag;
    chain.tag = tag;
    const std::uint64_t cnt = dma::Tag(dma::CNT, 0);
    st32(tag, static_cast<std::uint32_t>(cnt));
    st32(tag + 4, static_cast<std::uint32_t>(cnt >> 32));
    chain.code = 0;  // no VIFcode open
    st32(tag + 8, vif::Flush());
    chain.ptr = tag + 12;
    set32(c.r[a2], Chain::kAddr);
    set32(c.r[v0], tag + 12);
    c.r[a1].d[0] = c.r[v0].d[0] & ~std::uint64_t{15};  // the qword end: v0 rounded up into a1
    c.r[a0].d[0] = c.r[a1].d[0] < c.r[v0].d[0];
    set32(c.r[v1], c.r[a1].w[0] + 16);
    if (c.r[a0].d[0] != 0) c.r[a1].d[0] = c.r[v1].d[0];
    c.r[v0].d[0] = c.r[v0].d[0] < c.r[a1].d[0];
    tick(c, 24);
    if (c.r[v0].d[0] != 0) {
        tick(c, 1);
        for (;;) {
            set32(c.r[v0], chain.ptr);
            st32(c.r[v0].w[0], vif::Nop());
            set32(c.r[v0], c.r[v0].w[0] + 4);
            c.r[v1].d[0] = c.r[v0].d[0] < c.r[a1].d[0];
            chain.ptr = c.r[v0].w[0];
            tick(c, 7);
            if (c.r[v1].d[0] == 0) break;
            if (poll(c, 0x00238B88u)) return;
        }
    }

    // kLocalToScreen = kWorldToScreen x the instance's matrix
    set32(c.r[s0], kLocalToScreen);
    set32(c.r[a1], kWorldToScreen);
    c.r[a0].d[0] = c.r[s0].d[0];
    c.r[a2].d[0] = c.r[s4].d[0];
    tick(c, 8);
    if (!call(c, kMulMatrix, Ra{0x00238BC4u})) return;

    // upload it to VU 12, and the UV matrix to VU 16
    set32(c.r[t2], kVuLocalToScreen);
    set32(c.r[v1], chain.ptr);
    set32(c.r[t3], c.r[gpr::fp].w[0] + 0x4d90);  // kMatrixHeader
    const std::uint32_t block = c.r[v1].w[0];
    UnpackMatrix(c, block, c.r[s0].w[0], t2);
    set32(c.r[v0], block + 0x50);
    set32(c.r[t2], kVuUvMatrix);
    chain.ptr = block + 0x50;
    UnpackMatrix(c, block + 0x50, frame + kUvMatrix, t2);
    set32(c.r[v1], block + 0xa0);
    set32(c.r[a0], ld32(kProjectionMode));
    chain.ptr = block + 0xa0;
    set32(c.r[v0], 2);
    tick(c, 39);
    if (c.r[a0].d[0] != c.r[v0].d[0]) {
        Epilogue(c, f);
        return;
    }

    // Projection mode 2. The basis is turned so that its plane lies across the segment's thinnest extent: z thinnest
    // keeps it, x thinnest turns it a quarter about y, y thinnest a quarter about x. Without a single thinnest axis
    // (ties) kBasis keeps whatever the stack held, as in the original.
    ldf(c, 0, seg + 0x60);
    ldf(c, 4, seg + 0x68);
    ldf(c, 1, seg + 0x6c);
    ldf(c, 2, seg + 0x74);
    const psf dx = fpr(c, 1) - fpr(c, 0);
    set_fpr(c, 1, dx);
    ldf(c, 3, seg + 0x70);
    const psf dz = fpr(c, 2) - fpr(c, 4);
    set_fpr(c, 2, dz);
    ldf(c, 0, seg + 0x64);
    const psf dy = fpr(c, 3) - fpr(c, 0);
    set_fpr(c, 3, dy);
    fpu_compare(c, dz < dx);
    tick(c, 13);
    bool z_thinnest = false;
    if (dz < dx) {
        fpu_compare(c, dz < dy);
        tick(c, 4);
        z_thinnest = dz < dy;
    }
    if (z_thinnest) {
        // copy the basis to kBasis through vf4, vf3, vf2, vf1
        set32(c.r[s0], frame + kBasis);
        const std::uint32_t m = kProjectionBasis;
        const std::uint32_t m00 = ldf(c, 5, m + 0x00), m03 = ldf(c, 0, m + 0x0c), m01 = ldf(c, 3, m + 0x04);
        const std::uint32_t m02 = ldf(c, 1, m + 0x08), m12 = ldf(c, 0, m + 0x18), m11 = ldf(c, 2, m + 0x14);
        const std::uint32_t m13 = ldf(c, 6, m + 0x1c);
        pack(c, vf4, {a2, a3, t2, t3}, {m00, m01, m02, m03});
        const std::uint32_t m10 = ldf(c, 4, m + 0x10), m30 = ldf(c, 9, m + 0x30), m20 = ldf(c, 5, m + 0x20);
        const std::uint32_t m33 = ldf(c, 8, m + 0x3c), m21 = ldf(c, 3, m + 0x24), m22 = ldf(c, 1, m + 0x28);
        const std::uint32_t m32 = ldf(c, 0, m + 0x38), m23 = ldf(c, 7, m + 0x2c), m31 = ldf(c, 2, m + 0x34);
        pack(c, vf3, {v0, a0, a2, a3}, {m10, m11, m12, m13});
        pack(c, vf2, {t2, t3, v0, v1}, {m20, m21, m22, m23});
        pack(c, vf1, {a0, a1, a2, a3}, {m30, m31, m32, m33});
        sqc2(c, vf4, frame + kBasis + 0x00);
        sqc2(c, vf3, frame + kBasis + 0x10);
        sqc2(c, vf2, frame + kBasis + 0x20);
        sqc2(c, vf1, frame + kBasis + 0x30);
        tick(c, 60);
    } else {
        fpu_compare(c, dx < dz);
        tick(c, 4);
        bool x_thinnest = false;
        if (dx < dz) {
            fpu_compare(c, dx < dy);
            tick(c, 4);
            x_thinnest = dx < dy;
        }
        if (x_thinnest) {
            set32(c.r[v0], frame + kBasis);
            c.r[at].sd[0] = static_cast<std::int32_t>(kHalfPi);
            c.f[12] = kHalfPi;
            set32(c.r[a1], kProjectionBasis);
            c.r[a0].d[0] = c.r[v0].d[0];
            c.r[s0].d[0] = c.r[v0].d[0];
            tick(c, 10);
            if (!call(c, kRotMatrixY, Ra{0x00238DDCu})) return;
            tick(c, 2);
        } else {
            fpu_compare(c, dy < dx);
            set32(c.r[s0], frame + kBasis);
            tick(c, 4);
            if (dy < dx) {
                fpu_compare(c, dy < dz);
                tick(c, 4);
                if (dy < dz) {
                    set32(c.r[a1], kProjectionBasis);
                    c.r[at].sd[0] = static_cast<std::int32_t>(kHalfPi);
                    c.f[12] = kHalfPi;
                    c.r[a0].d[0] = c.r[s0].d[0];
                    tick(c, 8);
                    if (!call(c, kRotMatrixX, Ra{0x00238E24u})) return;
                }
            }
        }
    }

    // The instance's matrix with its translation made camera-relative (vf3 = translation - camera, w - 0), at
    // kUvMatrix; then the projection = that x kBasis, in place.
    ldf(c, 3, inst + 0x80);
    ldf(c, 2, inst + 0x8c);
    ldf(c, 1, inst + 0x84);
    c.r[a1].d[0] = c.r[s0].d[0];
    ldf(c, 0, inst + 0x88);
    c.r[a0].d[0] = c.r[sp].d[0];
    ldf(c, 7, kCameraPosition + 0x8);
    pack(c, vf1, {t2, t3, v1, a2}, {c.f[3], c.f[1], c.f[0], c.f[2]});
    sqc2(c, vf1, frame + kUvMatrix + 0x30);
    c.r[a2].d[0] = c.r[sp].d[0];
    c.f[0] = 0;
    ldf(c, 5, frame + kUvMatrix + 0x30);
    ldf(c, 4, frame + kUvMatrix + 0x34);
    ldf(c, 2, frame + kUvMatrix + 0x38);
    ldf(c, 1, frame + kUvMatrix + 0x3c);
    ldf(c, 6, kCameraPosition + 0x0);
    ldf(c, 3, kCameraPosition + 0x4);
    pack(c, vf3, {a3, t2, t3, v0}, {c.f[5], c.f[4], c.f[2], c.f[1]});
    const std::uint32_t camera_x = c.f[6], camera_y = c.f[3], camera_z = c.f[7], zero_w = c.f[0];
    ldf(c, 0, inst + 0x58);
    ldf(c, 3, inst + 0x50);
    pack(c, vf1, {v1, a3, t2, t3}, {camera_x, camera_y, camera_z, zero_w});
    ldf(c, 1, inst + 0x54);
    vsub(c, XYZW, vf3, vf3, vf1);
    ldf(c, 5, inst + 0x5c);
    const std::uint32_t r00 = c.f[3], r01 = c.f[1], r02 = c.f[0], r03 = c.f[5];
    ldf(c, 0, inst + 0x68);
    ldf(c, 6, inst + 0x6c);
    pack(c, vf4, {v0, v1, a3, t2}, {r00, r01, r02, r03});
    ldf(c, 4, inst + 0x60);
    ldf(c, 2, inst + 0x64);
    const std::uint32_t r12 = c.f[0];
    ldf(c, 7, inst + 0x7c);
    ldf(c, 3, inst + 0x70);
    ldf(c, 1, inst + 0x74);
    ldf(c, 0, inst + 0x78);
    pack(c, vf2, {t3, v0, v1, a3}, {c.f[4], c.f[2], r12, c.f[6]});
    pack(c, vf1, {t2, t3, v0, v1}, {c.f[3], c.f[1], c.f[0], c.f[7]});
    sqc2(c, vf4, frame + kUvMatrix + 0x00);
    sqc2(c, vf2, frame + kUvMatrix + 0x10);
    sqc2(c, vf1, frame + kUvMatrix + 0x20);
    sqc2(c, vf3, frame + kUvMatrix + 0x30);
    tick(c, 85);
    if (!call(c, kMulMatrix, Ra{0x00238F78u})) return;

    // upload it to VU 20
    set32(c.r[t2], c.r[gpr::fp].w[0] + 0x4d90);  // kMatrixHeader
    set32(c.r[v1], kVuProjection);
    set32(c.r[v0], chain.ptr);
    const std::uint32_t last = c.r[v0].w[0];
    UnpackMatrix(c, last, frame + kUvMatrix, v1);
    set32(c.r[v0], last + 0x50);
    chain.ptr = last + 0x50;
    tick(c, 18);
    Epilogue(c, f);
}
