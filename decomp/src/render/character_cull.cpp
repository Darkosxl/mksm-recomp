// Ps2/Renderer/Character/ps2render.cpp: frustum culling of a character model before fn_246cf0 (the fighter instance
// draw) packs it. Both functions return the model's cull code and, for a model that is partly visible, flag each
// segment that is to be drawn:
//   0  culled: nothing is drawn
//   1  entirely inside the guard frustum: every segment is drawn, the segment flags are not touched
//   2  per segment: segment.visible (+0x18) = 1 to draw it, 0 to skip it
// fn_246cf0 calls CullCharacterSegmentsLod when it was given a level-of-detail factor (t1 != 0; fn_23df70, fn_23fa00,
// fn_24cbf8) and CullCharacterSegments otherwise (the in-game fighters from fn_23ff60).
//
// The tests are the engine's VU0 clip tests (two 3-plane matrices per frustum object, one VCLIP per matrix):
//   fn_22c630(frustum, matrix, box): the 8 corners of a segment's box (+0x90) through matrix
//   fn_22c838(frustum, centre, f12 = radius): a sphere
// each returning 0 (outside a plane), 1 (inside all six) or 2 (straddling). fn_22c620(frustum, f12) sets the margin
// the box test uses (frustum+0x100).
//
// The functions call back into the recompiled code, so the registers at each call (arguments, the saved registers
// in s0-s6, the scratch values) and the stack frame are the recompiled code's, and they end with the registers the
// original's epilogue restores.
#include "ps2/decomp.hpp"
#include "ps2/decomp_vu0.hpp"

#include <iterator>

namespace {

using namespace ps2;
using namespace ps2::gpr;
using namespace ps2::vu0;

// ---- guest data ----

// The model fn_246cf0 draws (its third argument)
namespace model {
constexpr std::uint32_t kRoot = 0x18;             // the root node of its skeleton
constexpr std::uint32_t kSegments = 0x20;         // segment records (0x1d0 bytes each)
constexpr std::uint32_t kSegmentCount = 0x38;
constexpr std::uint32_t kClass = 0x3c;            // 0x2003x-0x2005x
constexpr std::uint32_t kCullCode = 0x4c;         // CullCharacterSegments stores the sphere test's result here
constexpr std::uint32_t kAlwaysPerSegment = 0xdc8; // nonzero: skip the sphere test, test every segment
constexpr std::uint32_t kSphereCentre = 0xf40;    // bounding sphere: centre (offset from the root, xyzw) ...
constexpr std::uint32_t kSphereRadius = 0xf6c;    // ... and radius
constexpr std::uint32_t kLod = 0x1008;            // the level of detail being drawn
}  // namespace model

// A segment record: one mesh piece bound to one bone
namespace segment {
constexpr std::uint32_t kSize = 0x1d0;
constexpr std::uint32_t kBone = 0x00;     // index into the bone matrices
constexpr std::uint32_t kHasBox = 0x14;   // 0: never drawn by the box test
constexpr std::uint32_t kVisible = 0x18;  // the output: 1 = draw this segment
constexpr std::uint32_t kLod = 0x1c;      // the level of detail this segment belongs to
constexpr std::uint32_t kBox = 0x30;      // box test data (fn_22c630 reads its corners at +0x60)
constexpr std::uint32_t kRadius = 0x78;   // bounding radius around the bone's position
}  // namespace segment

// A node of the skeleton: local matrix at +0, parent, world matrix (local x parent's world)
namespace node {
constexpr std::uint32_t kParent = 0x40;
constexpr std::uint32_t kWorld = 0x50;
constexpr std::uint32_t kWorldPosition = 0x80;  // the world matrix's translation row
constexpr std::uint32_t kPosition = 0xa0;       // the placement node's position (copied into its world matrix)
}  // namespace node

constexpr std::uint32_t kBoneMatrices = 0x006660A0;  // pointer to the current skeleton's world matrices, 64 bytes each
constexpr std::uint32_t kViewProjection = 0x006612A0; // 4x4, row vectors
constexpr std::uint32_t kBoundsHook = 0x004F4B58;    // nonzero: fn_245168 runs on the model before the test
constexpr std::uint32_t kOtherLods = 0x004F4B2C;     // nonzero: draw the segments of every LOD but the current one
constexpr std::uint32_t kViewFrustum = 0x0077F920;
constexpr std::uint32_t kGuardFrustum = 0x0077FE80;
constexpr std::uint32_t kBoxFrustum = 0x0077FF90;
constexpr std::uint32_t kBoxMargin = 0x43960000;     // 300.0f

// models of these classes are always tested segment by segment
constexpr std::uint32_t kPerSegmentClasses[] = {0x20036, 0x20038, 0x2003B, 0x20044, 0x20056, 0x2004C};

constexpr std::uint32_t kSetTranslation = 0x00213C78;  // MatrixSetTranslation(m, v)
constexpr std::uint32_t kMatrixMultiply = 0x00213CE8;  // (dst, a, b): dst = b x a
constexpr std::uint32_t kSetBoxMargin = 0x0022C620;
constexpr std::uint32_t kBoxTest = 0x0022C630;
constexpr std::uint32_t kSphereTest = 0x0022C838;
constexpr std::uint32_t kBoundsHookFn = 0x00245168;

enum Cull : std::uint32_t { kCulled = 0, kInside = 1, kPerSegment = 2 };

// ---- the original's register moves ----

// lui/addiu/ori/lw/sll results: a sign-extended word in the low doubleword, the upper 64 bits kept
void li(Cpu &c, unsigned r, std::uint32_t v) { set32(c.r[r], v); }
void lw(Cpu &c, unsigned r, std::uint32_t addr) { set32(c.r[r], ld32(addr)); }
// move (daddu): the low doubleword
void mov(Cpu &c, unsigned d, unsigned s) { c.r[d].d[0] = c.r[s].d[0]; }
std::uint32_t w(const Cpu &c, unsigned r) { return c.r[r].w[0]; }

// The compiler's way to build a vector from four floats in GPRs: t0 = (x, y, z, w), t1 = (z, w, ...)
void pack_vector(Cpu &c, unsigned x, unsigned y, unsigned z, unsigned w) {
    mmi::pextlw(c.r[t0], c.r[y], c.r[x]);
    mmi::pextlw(c.r[t1], c.r[w], c.r[z]);
    mmi::pcpyld(c.r[t0], c.r[t1], c.r[t0]);
}

// lwc1 of a vector's four words in the order the original loads them: f2 = x, f1 = y, f0 = z, f3 = w
void load_fprs(Cpu &c, std::uint32_t v) {
    c.f[2] = ld32(v);
    c.f[3] = ld32(v + 12);
    c.f[1] = ld32(v + 4);
    c.f[0] = ld32(v + 8);
}

// vf1 = vf1 x M, M in vf2-vf5 (row vectors)
void transform_vf1(Cpu &c) {
    vmulabc(c, XYZW, vf2, vf1, Lane::x);
    vmaddabc(c, XYZW, vf3, vf1, Lane::y);
    vmaddabc(c, XYZW, vf4, vf1, Lane::z);
    vmaddbc(c, XYZW, vf1, vf5, vf1, Lane::w);
}

// vf1 /= vf1.w, as the original does it: v0 = vf1 with w rotated into word 0, f0 = w, vf1 *= f20 (1.0), then
// vf1 *= f20 / w (div.s), through t0 and vf5; a1 = the result (the sphere test's centre argument)
void divide_by_w(Cpu &c) {
    qmfc2(c, v0, vf1);
    mmi::pcpyud(c.r[v0], c.r[v0], c.r[zero]);
    mmi::prot3w(c.r[v0], c.r[v0]);
    c.f[0] = c.r[v0].w[0];
    li(c, t0, c.f[20]);
    qmtc2(c, t0, vf5);
    vmulbc(c, XYZW, vf1, vf1, vf5, Lane::x);
    fpu_div(c, 0, c.f[20], c.f[0]);
    li(c, t0, c.f[0]);
    qmtc2(c, t0, vf5);
    vmulbc(c, XYZW, vf1, vf1, vf5, Lane::x);
    qmfc2(c, a1, vf1);
}

// Brings the root node's world matrix up to date: the placement (its parent) gets its position as translation, then
// root.world = root.local x parent.world. s0 = the root. False when control left the function.
bool update_root(Cpu &c, std::uint32_t ra_translation, std::uint32_t ra_multiply) {
    const std::uint32_t root = w(c, s0);
    if (w(c, a0) == 0) return true;  // no parent
    li(c, a1, w(c, a0) + node::kPosition);
    li(c, a0, w(c, a0) + node::kWorld);
    tick(c, 4);
    if (!call(c, kSetTranslation, Ra{ra_translation})) return false;
    lw(c, a1, root + node::kParent);
    mov(c, a2, s0);
    li(c, a0, root + node::kWorld);
    li(c, a1, w(c, a1) + node::kWorld);
    tick(c, 6);
    return call(c, kMatrixMultiply, Ra{ra_multiply});
}

// fn_245168(model, 0, mode) when kBoundsHook is set; the model is in model_reg. False when control left.
bool bounds_hook(Cpu &c, unsigned model_reg, std::uint32_t mode, std::uint32_t ra) {
    li(c, v0, 0x004F0000);
    lw(c, v1, kBoundsHook);
    tick(c, 4);
    if (c.r[v1].d[0] == 0) return true;
    mov(c, a0, model_reg);
    c.r[a1].d[0] = 0;
    if (mode) li(c, a2, mode);
    else c.r[a2].d[0] = 0;
    tick(c, 5);
    return call(c, kBoundsHookFn, Ra{ra});
}

// fn_22c630's other arguments: a1 = the segment's bone matrix (v0 = the matrix array), a2 = its box
void box_test_args(Cpu &c, std::uint32_t seg) {
    lw(c, a1, seg + segment::kBone);
    lw(c, v0, kBoneMatrices);
    li(c, a2, seg + segment::kBox);
    li(c, a1, w(c, a1) << 6);
    li(c, a1, w(c, a1) + w(c, v0));
    tick(c, 8);
}

}  // namespace

// fn_2459f8: frustum cull of a character model (a1; a0, the instance, is unused) for the in-game fighter draw.
// Models of the classes in kPerSegmentClasses, or with kAlwaysPerSegment set, or whose bounding sphere straddles the
// guard frustum, get a box test per segment. Returns the Cull code in v0.
PS2_DECOMP(002459F8, CullCharacterSegments) {
    StackFrame f(c, 0x70);
    f.sq(s1, 0x50);
    f.sq(s2, 0x40);
    mov(c, s1, a1);
    f.sq(s3, 0x30);
    f.sq(s4, 0x20);
    f.sd(ra, 0x10);
    f.sq(s0, 0x60);
    const std::uint32_t m = w(c, s1);

    auto finish = [&](std::uint32_t result) {
        li(c, v0, result);
        tick(c, result == kPerSegment ? 1 : 0);
        f.lq(s0, 0x60);
        f.lq(s1, 0x50);
        f.lq(s2, 0x40);
        f.lq(s3, 0x30);
        f.lq(s4, 0x20);
        f.ld(ra, 0x10);
        f.pop();
        tick(c, 9);
    };

    lw(c, s0, m + model::kRoot);
    lw(c, a0, w(c, s0) + node::kParent);
    tick(c, 12);
    if (!update_root(c, 0x00245A38, 0x00245A50)) return;

    li(c, v0, kPerSegmentClasses[0]);
    lw(c, v1, m + model::kClass);
    tick(c, 5);
    if (c.r[v1].d[0] == c.r[v0].d[0]) {
        // class 0x20036: a box test per segment, with the box frustum's margin at 300 for the test
        if (!bounds_hook(c, s1, 0, 0x00245A88)) return;
        lw(c, v1, m + model::kSegmentCount);
        lw(c, s0, m + model::kSegments);
        tick(c, 4);
        if (c.r[v1].sd[0] <= 0) return finish(kPerSegment);
        li(c, v0, 0x00780000);
        mov(c, s1, v1);   // segments left
        li(c, s2, kBoxFrustum);
        li(c, s4, 0x00660000);
        li(c, s3, kPerSegment);
        tick(c, 6);
        for (;;) {
            const std::uint32_t seg = w(c, s0);
            lw(c, v0, seg + segment::kHasBox);
            tick(c, 3);
            bool hide = true;
            if (c.r[v0].d[0] != 0) {
                li(c, at, kBoxMargin);
                c.f[12] = kBoxMargin;
                mov(c, a0, s2);
                tick(c, 5);
                if (!call(c, kSetBoxMargin, Ra{0x00245AD0})) return;
                mov(c, a0, s2);
                box_test_args(c, seg);
                if (!call(c, kBoxTest, Ra{0x00245AF0})) return;
                c.f[12] = 0;
                mov(c, a0, s2);
                st32(seg + segment::kVisible, w(c, v0));
                tick(c, 5);
                if (!call(c, kSetBoxMargin, Ra{0x00245B04})) return;
                lw(c, v0, seg + segment::kVisible);
                tick(c, 3);
                hide = c.r[v0].d[0] == c.r[s3].d[0];  // straddling: not drawn
            }
            if (hide) {
                st32(seg + segment::kVisible, 0);
                tick(c, 1);
            }
            li(c, s1, w(c, s1) - 1);
            li(c, s0, seg + segment::kSize);
            tick(c, 4);
            if (c.r[s1].d[0] == 0) break;
            if (poll(c, 0x00245AB0)) return;
        }
        tick(c, 2);
        return finish(kPerSegment);
    }

    // the bounding sphere against the view frustum, then, if it straddles it, the guard frustum
    lw(c, v0, m + model::kAlwaysPerSegment);
    tick(c, 3);
    if (c.r[v0].d[0] != 0) {
        li(c, a0, kPerSegment);
        tick(c, 3);
    } else {
        const std::uint32_t centre = m + model::kSphereCentre;
        li(c, v0, centre);
        load_fprs(c, centre);
        li(c, a0, kViewFrustum);
        lw(c, v1, m + model::kRoot);
        li(c, a1, c.f[1]);
        li(c, v0, c.f[2]);
        li(c, a2, c.f[0]);
        li(c, a3, c.f[3]);
        pack_vector(c, v0, a1, a2, a3);
        qmtc2(c, t0, vf2);
        lqc2(c, vf1, w(c, v1) + node::kWorldPosition);
        vadd(c, XYZW, vf3, vf1, vf2);  // the sphere's centre in the world
        sqc2(c, vf3, f.at(0));
        c.f[12] = ld32(m + model::kSphereRadius);
        ld128(f.at(0) & ~15u, c.r[a1]);
        tick(c, 23);
        if (!call(c, kSphereTest, Ra{0x00245BA0})) return;

        mov(c, a0, v0);
        mov(c, s0, a0);
        st32(m + model::kCullCode, w(c, a0));
        c.r[v0].d[0] = 0;
        tick(c, 6);
        if (c.r[a0].d[0] == 0) return finish(kCulled);
        li(c, v0, kPerSegment);
        tick(c, 3);
        if (c.r[a0].d[0] == c.r[v0].d[0]) {
            c.f[12] = ld32(m + model::kSphereRadius);
            ld128(f.at(0) & ~15u, c.r[a1]);
            li(c, a0, kGuardFrustum);
            tick(c, 6);
            if (!call(c, kSphereTest, Ra{0x00245BDC})) return;
            // inside the guard frustum: 1, else 2
            mov(c, a0, v0);
            c.r[v0].d[0] = c.r[a0].d[0] ^ 1;
            if (c.r[v0].d[0] != 0) mov(c, a0, s0);
            tick(c, 3);
        }
    }

    // a0 = the cull code so far; these classes always go segment by segment
    lw(c, v1, m + model::kClass);
    bool listed = false;
    for (std::size_t i = 0; i < std::size(kPerSegmentClasses) && !listed; ++i) {
        li(c, v0, kPerSegmentClasses[i]);
        tick(c, i == 0 ? 5 : 4);
        listed = c.r[v1].d[0] == c.r[v0].d[0];
    }
    if (listed) {
        li(c, a0, kPerSegment);
        tick(c, 1);
    }
    li(c, v0, kInside);
    tick(c, 3);
    if (c.r[a0].d[0] == c.r[v0].d[0]) {
        if (!bounds_hook(c, s1, 0, 0x00245C80)) return;
        li(c, v0, kInside);
        tick(c, 3);
        return finish(kInside);
    }

    // a box test per segment, with whatever margin the box frustum has
    if (!bounds_hook(c, s1, 0, 0x00245CB0)) return;
    lw(c, v1, m + model::kSegmentCount);
    lw(c, s0, m + model::kSegments);
    tick(c, 4);
    if (c.r[v1].sd[0] <= 0) return finish(kPerSegment);
    mov(c, s1, v1);
    li(c, s4, 0x00660000);
    li(c, s3, 0x00780000);
    li(c, s2, kPerSegment);
    tick(c, 4);
    for (;;) {
        const std::uint32_t seg = w(c, s0);
        lw(c, v0, seg + segment::kHasBox);
        tick(c, 3);
        bool hide = true;
        if (c.r[v0].d[0] != 0) {
            li(c, a0, kBoxFrustum);
            box_test_args(c, seg);
            if (!call(c, kBoxTest, Ra{0x00245CFC})) return;
            st32(seg + segment::kVisible, w(c, v0));
            tick(c, 3);
            hide = c.r[v0].d[0] == c.r[s2].d[0];
        }
        if (hide) {
            st32(seg + segment::kVisible, 0);
            tick(c, 1);
        }
        li(c, s1, w(c, s1) - 1);
        li(c, s0, seg + segment::kSize);
        tick(c, 4);
        if (c.r[s1].d[0] == 0) break;
        if (poll(c, 0x00245CD0)) return;
    }
    return finish(kPerSegment);
}

// fn_245d48: frustum cull of a character model (a1) drawn at a level of detail: the tests run on the projected
// (screen-space) bounding sphere, doubled for the whole model, and per segment on a sphere around its bone, and only
// the segments of the current LOD (model+0x1008) are drawn (all the others when kOtherLods is set). Returns the Cull
// code in v0.
PS2_DECOMP(00245D48, CullCharacterSegmentsLod) {
    StackFrame f(c, 0x110);
    f.sq(s2, 0xd0);
    f.sq(s3, 0xc0);
    mov(c, s2, a1);
    f.sq(s1, 0xe0);
    li(c, s3, kInside);
    f.sq(s4, 0xb0);
    f.sq(s5, 0xa0);
    f.sq(s6, 0x90);
    f.sd(ra, 0x80);
    st32(f.at(0x100), c.f[20]);
    f.sq(s0, 0xf0);
    const std::uint32_t m = w(c, s2);

    auto finish = [&](std::uint32_t result) {
        li(c, v0, result);
        tick(c, result == kPerSegment ? 1 : 0);
        f.lq(s0, 0xf0);
        f.lq(s1, 0xe0);
        f.lq(s2, 0xd0);
        f.lq(s3, 0xc0);
        f.lq(s4, 0xb0);
        f.lq(s5, 0xa0);
        f.lq(s6, 0x90);
        f.ld(ra, 0x80);
        c.f[20] = ld32(f.at(0x100));
        f.pop();
        tick(c, 12);
    };

    lw(c, s0, m + model::kRoot);
    lw(c, a0, w(c, s0) + node::kParent);
    tick(c, 16);
    if (!update_root(c, 0x00245D98, 0x00245DB0)) return;
    const std::uint32_t root = w(c, s0);

    // the view-projection matrix, kept in the frame (sp+0..0x3f) for the second test
    li(c, v0, kViewProjection);
    lqc2(c, vf1, root + node::kWorldPosition);
    li(c, at, 0x3F800000);
    c.f[20] = 0x3F800000;  // 1.0
    for (unsigned row = 0; row < 4; ++row) {
        lqc2(c, static_cast<Vf>(vf2 + row), kViewProjection + 16 * row);
        sqc2(c, static_cast<Vf>(vf2 + row), f.at(16 * row));
    }
    li(c, a0, kViewFrustum);
    transform_vf1(c);
    divide_by_w(c);
    c.f[12] = ld32(m + model::kSphereRadius);
    c.f[12] = fp::add(c.f[12], c.f[12]);  // the doubled radius
    tick(c, 37);
    if (!call(c, kSphereTest, Ra{0x00245E44})) return;

    mov(c, v1, v0);
    mov(c, s1, v1);
    c.r[v0].d[0] = 0;
    tick(c, 5);
    if (c.r[v1].d[0] == 0) return finish(kCulled);
    li(c, v0, kPerSegment);
    tick(c, 3);
    if (c.r[v1].d[0] == c.r[v0].d[0]) {
        // straddles the view frustum: inside the guard frustum (radius not doubled) counts as inside
        for (unsigned row = 0; row < 4; ++row) lqc2(c, static_cast<Vf>(vf2 + row), f.at(16 * row));
        li(c, a0, kGuardFrustum);
        lqc2(c, vf1, root + node::kWorldPosition);
        transform_vf1(c);
        c.f[12] = ld32(m + model::kSphereRadius);
        divide_by_w(c);
        tick(c, 28);
        if (!call(c, kSphereTest, Ra{0x00245ED4})) return;
        mov(c, v1, v0);
        c.r[v0].d[0] = c.r[v1].d[0] ^ 1;
        if (c.r[v0].d[0] != 0) mov(c, v1, s1);
        tick(c, 3);
    }
    tick(c, 2);

    if (c.r[v1].d[0] == c.r[s3].d[0]) {
        // inside: no per-segment test, only the LOD selection
        if (!bounds_hook(c, s2, 1, 0x00245F0C)) return;
        lw(c, v1, m + model::kSegmentCount);
        lw(c, s0, m + model::kSegments);
        tick(c, 4);
        if (c.r[v1].sd[0] <= 0) return finish(kPerSegment);
        li(c, v0, 0x004F0000);
        mov(c, s1, v1);
        lw(c, a0, kOtherLods);  // read once
        li(c, a1, 1);
        tick(c, 5);
        for (;;) {
            const std::uint32_t seg = w(c, s0);
            tick(c, 2);
            lw(c, v1, seg + segment::kLod);
            lw(c, v0, m + model::kLod);
            tick(c, 4);
            const bool other_lod = c.r[v1].d[0] != c.r[v0].d[0];
            if (c.r[a0].d[0] == 0 && other_lod && poll(c, 0x00245F48)) return;  // the original's backward branch
            if (other_lod == (c.r[a0].d[0] != 0)) {
                st32(seg + segment::kVisible, w(c, a1));
                tick(c, 1);
            } else {
                st32(seg + segment::kVisible, 0);
                tick(c, 3);
            }
            li(c, s1, w(c, s1) - 1);
            li(c, s0, seg + segment::kSize);
            tick(c, 4);
            if (c.r[s1].d[0] == 0) break;
            if (poll(c, 0x00245F30)) return;
        }
        tick(c, 2);
        return finish(kPerSegment);
    }

    // per segment: the segments of the selected LOD are tested with a sphere around their bone
    if (!bounds_hook(c, s2, 1, 0x00245FA4)) return;
    lw(c, v1, m + model::kSegmentCount);
    lw(c, s0, m + model::kSegments);
    tick(c, 4);
    if (c.r[v1].sd[0] <= 0) return finish(kPerSegment);
    // a second copy of the matrix at sp+0x40..0x7f, through a1, a2, v0
    ld128(f.at(0x00) & ~15u, c.r[a1]);
    mov(c, s1, v1);
    ld128(f.at(0x10) & ~15u, c.r[a2]);
    li(c, s6, 0x004F0000);
    st128(f.at(0x40) & ~15u, c.r[a1]);
    li(c, s5, 0x00660000);
    ld128(f.at(0x20) & ~15u, c.r[v0]);
    li(c, s4, 0x00780000);
    ld128(f.at(0x30) & ~15u, c.r[a1]);
    li(c, s3, kInside);
    st128(f.at(0x50) & ~15u, c.r[a2]);
    st128(f.at(0x60) & ~15u, c.r[v0]);
    st128(f.at(0x70) & ~15u, c.r[a1]);
    tick(c, 13);
    for (;;) {
        const std::uint32_t seg = w(c, s0);
        lw(c, v0, kOtherLods);
        tick(c, 3);
        const bool other_lods = c.r[v0].d[0] != 0;
        lw(c, v1, seg + segment::kLod);
        lw(c, v0, m + model::kLod);
        tick(c, 4);
        const bool other_lod = c.r[v1].d[0] != c.r[v0].d[0];
        if (other_lods && !other_lod) tick(c, 2);
        bool hide = other_lod != other_lods;
        if (!hide) {
            // the bone's position (its world matrix's translation row), projected
            lw(c, v0, seg + segment::kBone);
            li(c, a0, kGuardFrustum);
            lw(c, v1, kBoneMatrices);
            li(c, v0, w(c, v0) << 6);
            lqc2(c, vf5, f.at(0x70));
            li(c, v0, w(c, v0) + w(c, v1));
            lqc2(c, vf2, f.at(0x40));
            li(c, v0, w(c, v0) + 0x30);
            lqc2(c, vf3, f.at(0x50));
            load_fprs(c, w(c, v0));
            li(c, v1, c.f[0]);
            li(c, v0, c.f[1]);
            li(c, a1, c.f[3]);
            li(c, a2, c.f[2]);
            pack_vector(c, a2, v0, v1, a1);
            qmtc2(c, t0, vf1);
            lqc2(c, vf4, f.at(0x60));
            transform_vf1(c);
            c.f[12] = ld32(seg + segment::kRadius);
            divide_by_w(c);
            tick(c, 43);
            if (!call(c, kSphereTest, Ra{0x002460C8})) return;
            st32(seg + segment::kVisible, w(c, v0));
            tick(c, 3);
            hide = c.r[v0].d[0] != c.r[s3].d[0];  // only entirely inside is drawn
        }
        if (hide) {
            st32(seg + segment::kVisible, 0);
            tick(c, 1);
        }
        li(c, s1, w(c, s1) - 1);
        li(c, s0, seg + segment::kSize);
        tick(c, 4);
        if (c.r[s1].d[0] == 0) break;
        if (poll(c, 0x00245FE8)) return;
    }
    return finish(kPerSegment);
}
