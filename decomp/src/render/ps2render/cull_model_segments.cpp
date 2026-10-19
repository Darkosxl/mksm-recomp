// fn_242ad0 (Ps2/Renderer/Character/ps2render.cpp): view culling of one model's mesh segments, for the instance
// drawer fn_249060 (it calls this for each of its two segment lists and then draws what comes back).
//
// For each segment: a sphere test against the view frustum (and, for spheres crossing it, a second frustum and an
// optional box test), the transform matrices the VU1 packers use, the squared distance from the camera, and then
// either the visible list (the count is returned) or the deferred list. Camera-centred segments (the sky) are never
// culled: their local-to-world matrix is rebuilt each frame around the camera.
#include "ps2/decomp.hpp"
#include "ps2/decomp_vu0.hpp"

namespace {

using namespace ps2;
using namespace ps2::gpr;
using namespace ps2::vu0;
using u32 = std::uint32_t;
using u64 = std::uint64_t;

constexpr unsigned s8 = gpr::fp;  // fp, used as s8 (the name fp is also ps2::fp)

// ---- globals ----
constexpr u32 kCullPhase = 0x004F4BE0;          // render state 0x4F4B40 + 0xa0; 2: save each segment's last result
constexpr u32 kBoxTestOn = 0x004F50C8;          // nonzero: a sphere crossing both frustums gets the box test
constexpr u32 kDeferOn = 0x004F50C4;            // nonzero: segments of a flagged group go to the deferred list
constexpr u32 kCameraBlock = 0x006CBA50;        // game-side camera globals
constexpr u32 kCameraPosition = kCameraBlock + 0x80;  // x, y, z floats
constexpr u32 kSegmentUpdateOff = 0x006CC040;   // zero: fn_240438 updates each segment first (gamecode sets it)
constexpr u32 kViewFrustum = 0x0077F920;        // planes for the sphere and box tests
constexpr u32 kOuterFrustum = 0x0077FE80;       // second sphere test for spheres crossing kViewFrustum
constexpr u32 kHiddenTransforms = 0x0062AC20;   // -> u8 per transform: nonzero = not drawn
constexpr u32 kDeferredGroups = 0x0062AC24;     // -> s8 per segment group: nonzero = deferred (with kDeferOn)
constexpr u32 kVisibleList = 0x0065E460;        // u32 segment pointers; the count is the return value
constexpr u32 kDeferredList = 0x00663648;       // u32 segment pointers, kDeferredCount of them
constexpr u32 kDeferredCount = 0x00665F38;

// camera matrices (4x4 floats, row-major, row vectors)
constexpr u32 kWorldToScreen = 0x00660F20;      // local-to-world * this = what the VU1 packers transform with
constexpr u32 kCameraMatrixA = 0x00660D60;      // the three the sky's matrices are built from (roles not established;
constexpr u32 kProjection = 0x00660DE0;         //  0x660de0 is written by Render_Projection3D)
constexpr u32 kCameraMatrixB = 0x00661360;
constexpr u32 kSkyMatrix = 0x00661A70;          // written for camera-centred segments; read by fn_23a280, fn_242ff8,
                                                //  fn_246258

// ---- the model and its segments ----
constexpr u32 kModelTransforms = 0x18;  // model + 0x18: the transform array

// One transform of a model (0x1c0 bytes)
struct Transform {
    static constexpr u32 kSize = 0x1C0;
    static constexpr u32 kLocalToWorld = 0x50;    // matrix
    static constexpr u32 kCentre = 0xA0;          // world-space bounding-sphere centre (xyzw)
    static constexpr u32 kLocalToScreen = 0x110;  // matrix: kLocalToWorld * kWorldToScreen
};

// One mesh segment to cull
struct Segment {
    static constexpr u32 kTransform = 0x00;       // u32: index into the model's transforms
    static constexpr u32 kVisibility = 0x18;      // u32: the cull result, 0 = not drawn (fn_22c838: 1 in, 2 crossing)
    static constexpr u32 kPrevVisibility = 0x20;  // u32: last frame's (kCullPhase 2)
    static constexpr u32 kBounds = 0x30;          // what the box test fn_22c630 reads
    static constexpr u32 kRadius = 0x78;          // float: bounding-sphere radius
    static constexpr u32 kRadiusScale = 0x80;     // float: 0 = the radius as is, else radius * scale * 1.1
    static constexpr u32 kGroup = 0x110;          // u32: index into kDeferredGroups
    static constexpr u32 kDrawSlot = 0x114;       // u32: the visible count when it was tested
    static constexpr u32 kDepth = 0x128;          // float: squared distance from the camera
    static constexpr u32 kFlags = 0x130;          // u64
    static constexpr u64 kFollowsCamera = 1ull << 54;  // the sky: centred on the camera, never culled
    static constexpr u64 kDeferred = 1ull << 38;       // in kDeferredList this frame
};

constexpr u32 kCrossing = 2;  // fn_22c838: the sphere crosses the frustum

constexpr psf kRadiusMargin = psf::from_bits(0x3F8CCCCDu);  // 1.1
constexpr psf kSkyScale = psf::from_bits(0x41200000u);      // 10.0
constexpr psf kOne = psf::from_bits(0x3F800000u);
constexpr psf kSwayAngle = psf::from_bits(0x3EA0D97Cu);     // pi / 10

// ---- callees (recompiled) ----
constexpr u32 kUpdateSegment = 0x00240438u;    // fn_240438(segment): rewrites its floats at +0x164/+0x168
constexpr u32 kSphereInFrustum = 0x0022C838u;  // fn_22c838(planes, centre quadword in a1, radius in f12): 0 out,
                                               //  1 in, 2 crossing
constexpr u32 kBoxInFrustum = 0x0022C630u;     // fn_22c630(planes, local-to-world, bounds)
constexpr u32 kSinf = 0x00207610u;
constexpr u32 kRotMatrixX = 0x002148A0u;       // sceVu0RotMatrixX(m0, m1, rx in f12)
constexpr u32 kMulMatrix = 0x00213CE8u;        // sceVu0MulMatrix(m0, m1, m2)

// ---- stack frame (0x180 bytes) ----
constexpr u32 kSway = 0x00;          // matrix: the sky's rotation, then camera-relative
constexpr u32 kSkyTemp = 0x40;       // matrix
constexpr u32 kModelArg = 0x80;      // a0
constexpr u32 kNoDeferArg = 0x84;    // t1: nonzero = every visible segment goes to kVisibleList
constexpr u32 kCameraVec = 0x90;     // the camera position, w = 0
constexpr u32 kSkyTempPtr = 0xA0;    // u32: sp + kSkyTemp
constexpr u32 kCentreSave = 0xB0;    // the sphere centre across the first test

// Camera-centred segment (0x242d68-0x242ea4): local-to-world = scale 10 around the camera position; its screen
// matrix and kSkyMatrix go through a sway rotation about x of sin(xf.LocalToWorld[0][1]) * pi / 10, an element this
// has just set to 0, so the rotation is the identity.
bool place_on_camera(Cpu &c, const StackFrame &f, u32 xf) {
    const u32 m = xf + Transform::kLocalToWorld;
    c.r[t2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[t2], kCameraBlock);
    for (u32 i = 0; i < 12; ++i) st32(m + 4 * i, i % 5 == 0 ? c.f[21] : 0u);  // rows 0-2: diag(f21) (10)
    c.f[12] = ld32(m + 0x04);
    c.f[0] = ld32(kCameraPosition);
    st32(m + 0x30, c.f[0]);
    c.f[1] = ld32(kCameraPosition + 4);
    st32(m + 0x34, c.f[1]);
    c.f[0] = ld32(kCameraPosition + 8);
    st32(m + 0x3C, c.f[22]);  // 1
    st32(m + 0x38, c.f[0]);
    tick(c, 24);
    if (!call(c, kSinf, Ra{0x00242DDCu})) return false;

    c.r[at].d[0] = kSwayAngle.bits;
    set_fpr(c, 1, kSwayAngle);
    set_fpr(c, 12, fpr(c, 0) * kSwayAngle);
    // the identity matrix, rows from vf7 (x) to vf4 (w)
    vsub(c, XYZW, vf4, vf0, vf0);
    vadd(c, W, vf4, vf4, vf0);
    vmr32(c, XYZW, vf5, vf4);
    vmr32(c, XYZW, vf6, vf5);
    vmr32(c, XYZW, vf7, vf6);
    sqc2(c, vf4, f.at(kSway + 0x30));
    sqc2(c, vf5, f.at(kSway + 0x20));
    sqc2(c, vf6, f.at(kSway + 0x10));
    sqc2(c, vf7, f.at(kSway));
    c.r[a0].d[0] = c.r[sp].d[0];
    c.r[a1].d[0] = c.r[sp].d[0];
    tick(c, 18);
    if (!call(c, kRotMatrixX, Ra{0x00242E24u})) return false;  // sway = RotX(identity, angle)

    set32(c.r[s0], m);
    c.r[a0].d[0] = c.r[sp].d[0];
    c.r[a1].d[0] = c.r[sp].d[0];
    c.r[a2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[a2], kCameraMatrixA);
    tick(c, 7);
    if (!call(c, kMulMatrix, Ra{0x00242E40u})) return false;  // sway = sway * A

    c.r[v0].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[a0], ld32(f.at(kSkyTempPtr)));
    set32(c.r[v0], kCameraMatrixA);
    c.r[a2].d[0] = c.r[sp].d[0];
    set32(c.r[a1], kCameraMatrixB);
    tick(c, 7);
    if (!call(c, kMulMatrix, Ra{0x00242E5Cu})) return false;  // temp = B * sway

    c.r[v1].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[a0].d[0] = c.r[sp].d[0];
    set32(c.r[v1], kCameraMatrixA);
    c.r[a2].d[0] = c.r[sp].d[0];
    set32(c.r[a1], kProjection);
    tick(c, 7);
    if (!call(c, kMulMatrix, Ra{0x00242E78u})) return false;  // sway = projection * sway

    set32(c.r[a0], xf + Transform::kLocalToScreen);
    c.r[a1].d[0] = c.r[sp].d[0];
    c.r[a2].d[0] = c.r[s0].d[0];
    tick(c, 5);
    if (!call(c, kMulMatrix, Ra{0x00242E8Cu})) return false;  // local to screen = sway * local to world

    c.r[a0].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[a1], ld32(f.at(kSkyTempPtr)));
    c.r[a2].d[0] = c.r[s0].d[0];
    set32(c.r[a0], kSkyMatrix);
    tick(c, 6);
    if (!call(c, kMulMatrix, Ra{0x00242EA4u})) return false;  // sky matrix = temp * local to world
    tick(c, 2);
    return true;
}

// One segment, the one s7 points at (0x242bc8-0x242f9c). False when control left the function.
bool cull_segment(Cpu &c, const StackFrame &f) {
    c.r[v1].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    const u32 seg = ld32(c.r[s7].w[0]);
    set32(c.r[s2], seg);
    set32(c.r[v0], ld32(kSegmentUpdateOff));
    tick(c, 5);
    if (c.r[v0].d[0] == 0) {
        c.r[a0].d[0] = c.r[s2].d[0];
        tick(c, 3);
        if (!call(c, kUpdateSegment, Ra{0x00242BE8u})) return false;
    }

    // its transform: model->transforms[seg->transform] (indexed with MULT)
    set32(c.r[v1], ld32(seg + Segment::kTransform));
    set32(c.r[a0], Transform::kSize);
    set32(c.r[a2], ld32(f.at(kModelArg)));
    c.r[a3].d[0] = Segment::kFollowsCamera;
    mmi::mult(c, 0, c.r[v1].w[0], c.r[a0].w[0]);
    c.r[v1].d[0] = c.lo.d[0];
    c.r[v0].d[0] = ld64(seg + Segment::kFlags) & Segment::kFollowsCamera;
    set32(c.r[a1], ld32(c.r[a2].w[0] + kModelTransforms));
    const u32 xf = c.r[a1].w[0] + c.r[v1].w[0];
    set32(c.r[s1], xf);
    tick(c, 12);

    if (c.r[v0].d[0] != 0) {
        set32(c.r[v0], 1);
        st32(seg + Segment::kVisibility, 1);
        tick(c, 5);
    } else {
        // bounding sphere: the transform's centre, the segment's radius (scaled, plus 10 %, when it has a scale)
        set32(c.r[v1], seg + Segment::kBounds);
        c.f[0] = 0;
        const psf scale = psf::from_bits(ld32(seg + Segment::kRadiusScale));
        c.f[4] = scale.bits;
        const u32 centre = xf + Transform::kCentre;
        set32(c.r[v0], centre);
        c.f[2] = ld32(centre + 12);
        c.r[s6].d[0] = c.r[v1].d[0];
        const bool unscaled = scale == psf{};
        fpu_compare(c, unscaled);
        c.f[3] = ld32(centre);
        c.f[0] = ld32(centre + 8);
        c.f[1] = ld32(centre + 4);
        set32(c.r[t2], c.f[3]);
        set32(c.r[v0], c.f[1]);
        set32(c.r[a0], c.f[0]);
        set32(c.r[a1], c.f[2]);
        gather4(c, t2, v0, a0, a1);
        qmtc2(c, t0, vf1);
        tick(c, 21);
        const psf radius = psf::from_bits(ld32(seg + Segment::kRadius));
        if (unscaled) {
            set_fpr(c, 20, radius);
            tick(c, 1);
        } else {
            c.r[at].d[0] = kRadiusMargin.bits;
            set_fpr(c, 1, kRadiusMargin);
            set_fpr(c, 0, radius * scale);
            set_fpr(c, 20, fpr(c, 0) * kRadiusMargin);
            tick(c, 8);
        }

        c.r[v0].sd[0] = static_cast<std::int32_t>(0x00780000u);
        qmfc2(c, a1, vf1);
        set32(c.r[s3], kViewFrustum);
        sqc2(c, vf1, f.at(kCentreSave));
        c.f[12] = c.f[20];
        c.r[a0].d[0] = c.r[s3].d[0];
        tick(c, 8);
        if (!call(c, kSphereInFrustum, Ra{0x00242CC4u})) return false;
        c.r[s0].d[0] = c.r[v0].d[0];
        st32(seg + Segment::kVisibility, c.r[s0].w[0]);
        lqc2(c, vf1, f.at(kCentreSave));
        tick(c, 5);
        if (c.r[s0].d[0] == 0) {
            st32(seg + Segment::kVisibility, 0);
            tick(c, 3);
            return true;
        }
        set32(c.r[v0], kCrossing);
        tick(c, 3);
        if (c.r[s0].d[0] == c.r[v0].d[0]) {
            c.r[a2].sd[0] = static_cast<std::int32_t>(0x00780000u);
            qmfc2(c, a1, vf1);
            c.f[12] = c.f[20];
            set32(c.r[a0], kOuterFrustum);
            tick(c, 6);
            if (!call(c, kSphereInFrustum, Ra{0x00242D08u})) return false;
            st32(seg + Segment::kVisibility, c.r[v0].w[0]);
            tick(c, 3);
            if (c.r[v0].d[0] == c.r[s0].d[0]) {  // crossing both: the box test, if on
                c.r[v0].sd[0] = static_cast<std::int32_t>(0x004F0000u);
                set32(c.r[v1], ld32(kBoxTestOn));
                tick(c, 4);
                if (c.r[v1].d[0] != 0) {
                    c.r[a0].d[0] = c.r[s3].d[0];
                    c.r[a2].d[0] = c.r[s6].d[0];
                    set32(c.r[a1], xf + Transform::kLocalToWorld);
                    tick(c, 5);
                    if (!call(c, kBoxInFrustum, Ra{0x00242D38u})) return false;
                    st32(seg + Segment::kVisibility, c.r[v0].w[0]);
                    tick(c, 1);
                }
            }
            set32(c.r[v0], ld32(seg + Segment::kVisibility));
            tick(c, 3);
            if (c.r[v0].d[0] == 0) return true;
        }
    }

    // a hidden transform is not drawn (its cull result stays)
    c.r[v1].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[a0], ld32(seg + Segment::kTransform));
    set32(c.r[v0], ld32(kHiddenTransforms));
    set32(c.r[v0], c.r[v0].w[0] + c.r[a0].w[0]);
    c.r[v1].d[0] = ld8(c.r[v0].w[0]);
    tick(c, 7);
    if (c.r[v1].d[0] != 0) return true;

    c.r[v0].d[0] = ld64(seg + Segment::kFlags);
    c.r[a3].d[0] = Segment::kFollowsCamera;
    c.r[v0].d[0] &= c.r[a3].d[0];
    tick(c, 6);
    if (c.r[v0].d[0] != 0) {
        if (!place_on_camera(c, f, xf)) return false;
    } else {
        c.r[a2].sd[0] = static_cast<std::int32_t>(0x00660000u);
        set32(c.r[a0], xf + Transform::kLocalToScreen);
        set32(c.r[a1], kWorldToScreen);
        set32(c.r[a2], xf + Transform::kLocalToWorld);
        tick(c, 6);
        if (!call(c, kMulMatrix, Ra{0x00242EC4u})) return false;  // local to screen = world to screen * local to world
    }

    // squared distance from the camera to the sphere centre, for the draw order
    lqc2(c, vf1, xf + Transform::kCentre);
    lqc2(c, vf2, f.at(kCameraVec));
    vsub(c, XYZW, vf1, vf2, vf1);
    vmul(c, XYZ, vf5, vf1, vf1);
    vaddbc(c, X, vf5, vf5, vf5, Lane::y);
    vaddbc(c, X, vf5, vf5, vf5, Lane::z);
    qmfc2(c, t0, vf5);
    c.f[0] = c.r[t0].w[0];
    st32(seg + Segment::kDepth, c.f[0]);
    st32(seg + Segment::kDrawSlot, c.r[s8].w[0]);
    set32(c.r[v0], ld32(f.at(kNoDeferArg)));
    tick(c, 14);
    if (c.r[v0].d[0] != 0) {
        st32(c.r[s5].w[0], seg);
        set32(c.r[s8], c.r[s8].w[0] + 1);
        tick(c, 2);
    } else {
        c.r[v0].sd[0] = static_cast<std::int32_t>(0x004F0000u);
        set32(c.r[v1], ld32(kDeferOn));
        tick(c, 4);
        bool defer = false;
        if (c.r[v1].d[0] != 0) {
            c.r[v1].sd[0] = static_cast<std::int32_t>(0x00630000u);
            set32(c.r[a0], ld32(seg + Segment::kGroup));
            set32(c.r[v0], ld32(kDeferredGroups));
            set32(c.r[v0], c.r[v0].w[0] + c.r[a0].w[0]);
            c.r[v1].sd[0] = static_cast<std::int8_t>(ld8(c.r[v0].w[0]));
            tick(c, 7);
            defer = c.r[v1].d[0] != 0;
        }
        if (defer) {  // kDeferredList[kDeferredCount++] = seg
            c.r[a2].sd[0] = static_cast<std::int32_t>(0x00660000u);
            c.r[v1].d[0] = ld64(seg + Segment::kFlags);
            set32(c.r[a0], ld32(kDeferredCount));
            c.r[a1].d[0] = Segment::kDeferred;
            c.r[a3].sd[0] = static_cast<std::int32_t>(0x00660000u);
            c.r[v1].d[0] |= c.r[a1].d[0];
            set32(c.r[a3], kDeferredList);
            set32(c.r[v0], (c.r[a0].w[0] << 2) + kDeferredList);
            st64(seg + Segment::kFlags, c.r[v1].d[0]);
            set32(c.r[a0], c.r[a0].w[0] + 1);
            st32(c.r[v0].w[0], seg);
            st32(kDeferredCount, c.r[a0].w[0]);
            tick(c, 16);
            return true;
        }
        c.r[v0].d[0] = ld64(seg + Segment::kFlags);
        c.r[v1].d[0] = ~Segment::kDeferred;
        set32(c.r[s8], c.r[s8].w[0] + 1);
        c.r[v0].d[0] &= c.r[v1].d[0];
        st64(seg + Segment::kFlags, c.r[v0].d[0]);
        st32(c.r[s5].w[0], seg);
        tick(c, 11);
    }
    set32(c.r[s5], c.r[s5].w[0] + 4);  // kVisibleList[visible++] = seg
    tick(c, 1);
    return true;
}

void finish(Cpu &c, const StackFrame &f) {
    c.r[v0].d[0] = c.r[s8].d[0];
    f.lq(s0, 0x150);
    f.lq(s1, 0x140);
    f.lq(s2, 0x130);
    f.lq(s3, 0x120);
    f.lq(s4, 0x110);
    f.lq(s5, 0x100);
    f.lq(s6, 0xF0);
    f.lq(s7, 0xE0);
    f.lq(s8, 0xD0);
    f.ld(ra, 0xC0);
    c.f[22] = ld32(f.at(0x170));
    c.f[21] = ld32(f.at(0x168));
    c.f[20] = ld32(f.at(0x160));
    f.pop();
    tick(c, 17);
}

}

// int CullModelSegments(model a0, count a1, Segment **segments a2, (a3, t0 unused), no_defer t1): culls the segments,
// sets up their matrices and appends the visible ones to kVisibleList; returns how many it appended.
PS2_DECOMP(00242AD0, CullModelSegments) {
    const StackFrame f(c, 0x180);
    f.sq(s7, 0xE0);
    f.sq(s8, 0xD0);
    st32(f.at(kNoDeferArg), c.r[t1].w[0]);
    f.sq(s0, 0x150);
    f.sq(s1, 0x140);
    f.sq(s2, 0x130);
    f.sq(s3, 0x120);
    f.sq(s4, 0x110);
    f.sq(s5, 0x100);
    f.sq(s6, 0xF0);
    f.sd(ra, 0xC0);
    st32(f.at(0x170), c.f[22]);
    st32(f.at(0x168), c.f[21]);
    st32(f.at(0x160), c.f[20]);
    st32(f.at(kModelArg), c.r[a0].w[0]);
    const std::int64_t count = c.r[a1].sd[0];
    c.r[s7].d[0] = c.r[a2].d[0];
    c.r[s8].d[0] = 0;  // the visible count

    // the camera position as a vector (w = 0), kept on the stack for the distances
    c.f[0] = 0;
    c.f[3] = ld32(kCameraPosition + 8);
    c.f[2] = ld32(kCameraPosition);
    c.f[1] = ld32(kCameraPosition + 4);
    set32(c.r[a0], ld32(kCullPhase));
    set32(c.r[v1], c.f[2]);
    set32(c.r[v0], 2);
    set32(c.r[a2], c.f[1]);
    set32(c.r[a3], c.f[3]);
    set32(c.r[t2], c.f[0]);
    gather4(c, v1, a2, a3, t2);
    qmtc2(c, t0, vf1);
    sqc2(c, vf1, f.at(kCameraVec));
    tick(c, 38);

    if (c.r[a0].d[0] == c.r[v0].d[0]) {  // phase 2: keep each segment's last result
        c.r[v1].d[0] = c.r[s7].d[0];
        tick(c, 3);
        if (count > 0) {
            c.r[s4].d[0] = c.r[a1].d[0];
            tick(c, 1);
            u32 left = c.r[s4].w[0], p = c.r[v1].w[0], seg = 0, vis = 0;
            const auto sync = [&] {
                set32(c.r[s2], seg);
                set32(c.r[s4], left);
                set32(c.r[v1], p);
                set32(c.r[v0], vis);
            };
            for (;;) {  // 0x242b78
                seg = ld32(p);
                --left;
                p += 4;
                vis = ld32(seg + Segment::kVisibility);
                st32(seg + Segment::kPrevVisibility, vis);
                tick(c, 7);
                if (left == 0) break;
                if (c.budget < 0) {
                    sync();
                    if (poll(c, 0x00242B78u)) return;
                }
            }
            sync();
        }
    }
    tick(c, 2);
    if (count <= 0) {
        finish(c, f);
        return;
    }

    c.r[a0].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[v0], f.at(kSkyTemp));
    set32(c.r[a0], kVisibleList);
    set32(c.r[v1], c.r[s8].w[0] << 2);
    c.r[at].d[0] = kOne.bits;  // the last constant built in at (10.0 went through it first)
    set_fpr(c, 21, kSkyScale);
    set32(c.r[s5], c.r[v1].w[0] + c.r[a0].w[0]);  // the next kVisibleList entry
    set_fpr(c, 22, kOne);
    c.r[s4].d[0] = c.r[a1].d[0];  // segments left
    st32(f.at(kSkyTempPtr), c.r[v0].w[0]);
    tick(c, 11);
    for (;;) {  // 0x242bc8
        if (!cull_segment(c, f)) return;
        set32(c.r[s4], c.r[s4].w[0] - 1);
        set32(c.r[s7], c.r[s7].w[0] + 4);
        tick(c, 4);
        if (c.r[s4].d[0] == 0) break;
        if (poll(c, 0x00242BC8u)) return;
    }
    finish(c, f);
}
