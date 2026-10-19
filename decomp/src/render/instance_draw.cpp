// Ps2/Renderer/Character/ps2render.cpp: the per-instance draw of the render lists t=1 (world, props, sky) and t=2
// (one-pass fighters): fn_24cf08 -> fn_249060 -> fn_242ff8. What an instance is and what reaches the packers is in
// decomp/notes/instance-draw.md; the structs are in instance.hpp.
//
// fn_249060 is register-exact rather than register-free: every call, every loop poll and the return leave the
// registers as the recompiled code has them there (decomp/README.md), so the steps below write the registers the
// original writes, in the original's registers. The work itself is named: culling into the draw list, skin
// matrices, the instance's lights, the chain FLUSH, the segment draw.
#include "instance.hpp"
#include "vif_chain.hpp"

#include "ps2/decomp_vu0.hpp"

namespace {

using namespace ps2;
using namespace ps2::gpr;
using namespace ps2::vu0;
using namespace decomp::render;

// ---- callees ----
constexpr std::uint32_t kFastMemset = 0x0020F750u;
constexpr std::uint32_t kFastMemcpy = 0x0020FDE0u;
constexpr std::uint32_t kMatrixMultiply = 0x00213CE8u;     // fn_213ce8(out, a, b)
constexpr std::uint32_t kTransposeMatrix = 0x00213E88u;    // sceVu0TransposeMatrix
constexpr std::uint32_t kInverseRigid = 0x00214058u;       // MatrixInverseRigid
constexpr std::uint32_t kFrustumTest = 0x0022C838u;        // fn_22c838(frustum, centre qword, f12 radius): 0-2
constexpr std::uint32_t kViewDirection = 0x0023CAE8u;      // fn_23cae8: a direction qword in v0 (inferred: view)
constexpr std::uint32_t kCollectSegments = 0x00242AD0u;    // fn_242ad0: culls a prebuilt segment list into the draw list
constexpr std::uint32_t kDrawSegments = 0x00242FF8u;       // fn_242ff8: the segment loop (toSPR, fn_23a280)
constexpr std::uint32_t kPrepareBones = 0x002457D0u;       // fn_2457d0 (also run after the frame by fn_241410)
constexpr std::uint32_t kLoadModelTextures = 0x00246120u;  // fn_246120: uploads the model's texture set if changed
constexpr std::uint32_t kUploadLights = 0x00246918u;       // fn_246918: writes the light matrices into the chain
constexpr std::uint32_t kLightColorMatrix = 0x00385850u;   // sceVu0LightColorMatrix
constexpr std::uint32_t kQsort = 0x00476E00u;
constexpr std::uint32_t kByDepth = 0x0024C7B0u;    // qsort comparator: Segment::depth, far first
constexpr std::uint32_t kByTexture = 0x0024CF58u;  // qsort comparator: texture_get_link_a(Segment::texture)

// ---- globals ----
constexpr std::uint32_t kModelFrustum = 0x0077F920u;    // the whole-model test's planes
constexpr std::uint32_t kSegmentFrustum = 0x0077FE80u;  // the per-segment test's planes
constexpr std::uint32_t kSegmentTable = 0x006615B8u;    // 0x2d0 bytes fn_242ff8 uses; cleared once per frame
constexpr std::uint32_t kNoSecondPass = 0x006618E0u;    // nonzero: no instance draws in pass 1
constexpr std::uint32_t kPass1StageOnly = 0x0065E384u;  // nonzero: only the stage draws in pass 1
constexpr std::uint32_t kAreaBit = 0x0065E394u;         // the current area as a bit index (GameMain.cpp)
constexpr std::uint32_t kArea = 0x00642814u;            // the current area (GameMain.cpp)
constexpr std::uint32_t kPass0Words = 0x00665F44u;      // three words cleared before each pass-0 draw (unread here)
constexpr std::uint32_t kDeferredCount = 0x00665F38u;   // segments fn_242ad0 set aside in pass 0 (frame::kExtraSegments)
constexpr std::uint32_t kNoDeferred = 0x004F50CCu;      // nonzero: pass 1 does not append them
constexpr std::uint32_t kPass1Count = 0x00666098u;      // the pass-1 list's own count (fn_242ff8 reads it)
constexpr std::uint32_t kMaxDraws = 0x004F507Cu;        // draw-list length limit
constexpr std::uint32_t kLight0Glow = 0x004F6E44u;      // nonzero: light 0's colour w = glow_scale, others 0 (else 25)
constexpr psf kMinusOne(-1.0f), kOne(1.0f), kDefaultLightW(25.0f);

// fn_249060's stack frame (0x180 bytes)
constexpr std::uint32_t kFrameSize = 0x180;
constexpr std::uint32_t kLightColorsAt = 0x00;  // 3 scaled light colours (sceVu0LightColorMatrix's input)
constexpr std::uint32_t kLightDirsAt = 0x30;    // 3 unit directions from each light to the lit point
constexpr std::uint32_t kScratchAt = 0x70;      // the light colour being scaled, then the anchor's rotation matrix
constexpr std::uint32_t kCollectOutAt = 0xc0;   // fn_242ad0's out argument
constexpr std::uint32_t kPassAt = 0xc4;
constexpr std::uint32_t kCountAt = 0xc8;        // draw-list length
constexpr std::uint32_t kAreaMaskAt = 0xcc;     // 1 << area, or 0

enum class Flow { next, stage, nodraw, unwound };

// The compiler's way of building a qword from four floats held in GPRs (pextlw, pextlw, pcpyld): t0 = (x, y, z, w),
// t1 = (z, w, and their sign words).
void pack4(Cpu &c, unsigned x, unsigned y, unsigned z, unsigned w) {
    mmi::pextlw(c.r[t0], c.r[y], c.r[x]);
    mmi::pextlw(c.r[t1], c.r[w], c.r[z]);
    mmi::pcpyld(c.r[t0], c.r[t1], c.r[t0]);
}

void restore_frame(Cpu &c, const StackFrame &f) {
    f.lq(s0, 0x160);
    f.lq(s1, 0x150);
    f.lq(s2, 0x140);
    f.lq(s3, 0x130);
    f.lq(s4, 0x120);
    f.lq(s5, 0x110);
    f.lq(s6, 0x100);
    f.lq(s7, 0xf0);
    f.lq(gpr::fp, 0xe0);
    f.ld(ra, 0xd0);
    c.f[20] = ld32(f.at(0x170));
    f.pop();
    tick(c, 14);
}

// ---- pass 0, not the stage: cull the model's segments into the draw list ----

// Appends every segment to the draw list (s3 = its length; the list is empty here). Two inlined copies differ in one
// setup cycle and their loop head.
Flow append_all_segments(Cpu &c, Model model, std::int32_t setup, std::uint32_t loop) {
    set32(c.r[a0], model.segment_count);
    set32(c.r[s0], model.segments);
    tick(c, 4);
    if (c.r[a0].sd[0] <= 0) return Flow::next;
    std::uint32_t seg = c.r[s0].w[0], out = frame::kDrawList + (c.r[s3].w[0] << 2), count = c.r[s3].w[0];
    std::uint32_t left = c.r[a0].w[0];
    set32(c.r[v0], frame::kDrawList);
    tick(c, setup);
    auto sync = [&] {
        set32(c.r[s0], seg);
        set32(c.r[s1], left);
        set32(c.r[s3], count);
        set32(c.r[v1], out);
    };
    for (;;) {
        st32(out, seg);
        ++count;
        out += 4;
        --left;
        seg += Segment::kSize;
        tick(c, 7);
        if (!left) break;
        if (c.budget < 0) {
            sync();
            if (poll(c, loop)) return Flow::unwound;
        }
    }
    sync();
    tick(c, 2);
    return Flow::next;
}

// cull_mode != 1: nothing is tested, every segment is marked clip = 2 and none goes into the list here.
Flow mark_segments_untested(Cpu &c, Model model) {
    set32(c.r[a0], model.segment_count);
    set32(c.r[s0], model.segments);
    tick(c, 4);
    if (c.r[a0].sd[0] <= 0) return Flow::next;
    std::uint32_t seg = c.r[s0].w[0], left = c.r[a0].w[0];
    set32(c.r[v0], 2);
    tick(c, 3);
    auto sync = [&] {
        set32(c.r[s0], seg);
        set32(c.r[s1], left);
    };
    for (;;) {
        Segment{seg}.clip = 2;
        --left;
        seg += Segment::kSize;
        tick(c, 6);
        if (!left) break;
        if (c.budget < 0) {
            sync();
            if (poll(c, 0x00249258u)) return Flow::unwound;
        }
    }
    sync();
    tick(c, 2);
    return Flow::next;
}

// The model crosses the frustum: each segment whose layers the model shows is tested on its own bone's sphere;
// those fully inside go into the draw list, the rest get clip = 0.
Flow test_segments(Cpu &c, Model model) {
    set32(c.r[a0], model.segment_count);
    set32(c.r[s0], model.segments);
    tick(c, 4);
    if (c.r[a0].sd[0] <= 0) return Flow::next;
    set32(c.r[v0], frame::kDrawList);
    set32(c.r[v1], c.r[s3].w[0] << 2);
    c.r[s1].d[0] = c.r[a0].d[0];
    set32(c.r[s2], c.r[v1].w[0] + c.r[v0].w[0]);  // the list's end
    set32(c.r[s7], Bone::kSize);
    set32(c.r[s5], 0x00780000u);
    set32(c.r[s4], 1);
    tick(c, 9);
    for (;;) {
        const Segment seg{c.r[s0].w[0]};
        set32(c.r[v0], model.layer_mask);
        set32(c.r[v1], seg.layers);
        c.r[v0].d[0] &= c.r[v1].d[0];
        tick(c, 5);
        bool inside = false;
        if (c.r[v0].d[0]) {
            set32(c.r[v0], seg.bone);
            set32(c.r[a0], kSegmentFrustum);
            set32(c.r[v1], model.bones);
            mmi::mult(c, 0, c.r[v0].w[0], c.r[s7].w[0]);  // bone * sizeof(Bone), through LO
            c.r[v0].d[0] = c.lo.d[0];
            c.f[12] = seg.radius;
            set32(c.r[v1], c.r[v1].w[0] + c.r[v0].w[0]);
            ld128(Bone{c.r[v1].w[0]}.sphere() & ~15u, c.r[a1]);
            tick(c, 9);
            if (!call(c, kFrustumTest, Ra{0x00249348u})) return Flow::unwound;
            seg.clip = c.r[v0].w[0];
            tick(c, 3);
            if (c.r[v0].d[0] == c.r[s4].d[0]) {
                st32(c.r[s2].w[0], seg.addr);
                set32(c.r[s3], c.r[s3].w[0] + 1);
                set32(c.r[s2], c.r[s2].w[0] + 4);
                tick(c, 5);
                inside = true;
            }
        }
        if (!inside) {
            seg.clip = 0;
            tick(c, 1);
        }
        set32(c.r[s1], c.r[s1].w[0] - 1);
        set32(c.r[s0], c.r[s0].w[0] + Segment::kSize);
        tick(c, 4);
        if (!c.r[s1].d[0]) return Flow::next;
        if (poll(c, 0x00249310u)) return Flow::unwound;
    }
}

// From the per-pass setup (0x249154) to the draw list: the whole-model frustum test, then the segments by
// RenderSettings::cull / cull_mode. Flow::nodraw when the model is outside the frustum.
Flow cull_into_draw_list(Cpu &c, const StackFrame &f, Model model) {
    const RenderSettings settings;
    for (std::uint32_t i = 0; i < 3; ++i) st32(kPass0Words + 4 * i, 0);
    set32(c.r[v0], 0x00660000u);
    set32(c.r[v1], 0x00660000u);
    set32(c.r[a0], 0x00660000u);
    tick(c, 8);
    if (c.r[gpr::fp].d[0]) return Flow::next;  // the stage is collected after the skinning step

    set32(c.r[v0], settings.skinning);
    tick(c, 3);
    if (c.r[v0].d[0]) {
        c.r[a0].d[0] = c.r[s6].d[0];
        tick(c, 3);
        if (!call(c, kPrepareBones, Ra{0x0024918Cu})) return Flow::unwound;
    }

    // the whole-model test, on bone 0's sphere
    set32(c.r[v1], model.always_crossing);
    set32(c.r[v0], 1);
    tick(c, 4);
    if (c.r[v1].d[0] == c.r[v0].d[0]) {
        set32(c.r[a0], 2);
        tick(c, 3);
    } else {
        set32(c.r[v0], model.bones);
        set32(c.r[a0], kModelFrustum);
        c.f[12] = model.radius;
        ld128(Bone{c.r[v0].w[0]}.sphere() & ~15u, c.r[a1]);
        tick(c, 7);
        if (!call(c, kFrustumTest, Ra{0x002491C4u})) return Flow::unwound;
        c.r[a0].d[0] = c.r[v0].d[0];
        tick(c, 1);
    }
    model.visibility = c.r[a0].w[0];

    set32(c.r[a1], 0x004F0000u);
    set32(c.r[v1], RenderSettings::kAddr);
    set32(c.r[v0], settings.cull);
    tick(c, 6);
    if (!c.r[v0].d[0]) return append_all_segments(c, model, 6, 0x00249208u);
    set32(c.r[v1], settings.cull_mode);
    set32(c.r[v0], 1);
    tick(c, 4);
    if (c.r[v1].d[0] != c.r[v0].d[0]) return mark_segments_untested(c, model);
    tick(c, 2);
    if (!c.r[a0].d[0]) {  // outside: nothing to draw
        st32(f.at(kCountAt), 0);
        tick(c, 3);
        return Flow::nodraw;
    }
    tick(c, 2);
    if (c.r[a0].d[0] == c.r[v1].d[0]) return append_all_segments(c, model, 5, 0x002492B8u);  // inside
    return test_segments(c, model);
}

// ---- skin matrices ----

// For each bone: skin = [R; pivot - position * R] (R the 3x4 world rotation rows), at Bone::skin_matrix(), the
// matrix palette VU1 gets. Two inlined copies of the loop hold the bone's last row in different GPRs; `which`
// lists, for each copy, the GPR that ends up with each word 0x60-0x7c of the bone (the floats pass through FPRs
// into GPRs to be packed into VF registers).
struct SkinCopy {
    unsigned word_reg[8];  // GPR left holding the bone's word at 0x60 + 4i
    std::uint32_t loop;
    std::int32_t exit_ticks;
};
constexpr SkinCopy kSkinA{{t6, a0, a1, a2, a3, t2, t3, t5}, 0x002493C8u, 4};
constexpr SkinCopy kSkinB{{a3, t2, t3, t5, t6, a0, a1, a2}, 0x00249518u, 2};

Flow compute_skin_matrices(Cpu &c, Model model) {
    const RenderSettings settings;
    set32(c.r[a2], 0x004F0000u);
    set32(c.r[v1], RenderSettings::kAddr);
    set32(c.r[v0], settings.skinning);
    tick(c, 5);
    if (!c.r[v0].d[0]) {
        tick(c, 2);
        return c.r[gpr::fp].d[0] ? Flow::stage : Flow::next;
    }
    tick(c, 2);
    if (c.r[gpr::fp].d[0]) return Flow::stage;

    set32(c.r[v0], settings.anchor_free_lights);  // also picks the inlined copy of the loop
    set32(c.r[a0], model.bone_count);
    set32(c.r[v1], model.bones);
    tick(c, 5);
    const SkinCopy &copy = c.r[v0].d[0] ? kSkinB : kSkinA;
    c.r[v0].d[0] = c.r[gpr::fp].sd[0] < c.r[a0].sd[0];
    tick(c, 3);
    if (!c.r[v0].d[0]) {
        tick(c, 2);
        return Flow::next;
    }
    set32(c.r[at], kMinusOne.bits);
    c.f[7] = c.r[at].w[0];
    c.r[v0].d[0] = c.r[a0].d[0];
    set32(c.r[v1], c.r[v1].w[0] + 0x70);  // the loop walks bone + 0x70
    tick(c, 4);

    for (;;) {
        const Bone bone{c.r[v1].w[0] - 0x70};
        auto word = [&](std::uint32_t off) { return ld32(bone.addr + off); };
        auto row = [&](Vf vf, std::uint32_t off) {
            for (unsigned i = 0; i < 4; ++i) c.vu0.vf[vf].w[i] = word(off + 4 * i);
        };
        set32(c.r[v0], c.r[v0].w[0] - 1);

        // vf4 = -position; the -1 reaches vf5.x through t0, whose upper half still holds the packed position
        row(vf4, 0x90);
        c.r[t0] = c.vu0.vf[vf4];
        set32(c.r[t0], c.f[7]);
        qmtc2(c, t0, vf5);
        vmulbc(c, XYZW, vf4, vf4, vf5, Lane::x);
        row(vf5, 0x80);  // pivot
        row(vf2, 0x50);  // rotation rows
        row(vf3, 0x60);
        row(vf1, 0x70);
        sqc2(c, vf2, bone.skin_matrix());
        vmulabc(c, XYZW, vf2, vf4, Lane::x);
        vmaddabc(c, XYZW, vf3, vf4, Lane::y);
        vmaddabc(c, XYZW, vf1, vf4, Lane::z);
        vmaddbc(c, XYZW, vf2, vf5, vf0, Lane::w);  // pivot - position * R
        sqc2(c, vf3, bone.skin_matrix() + 0x10);
        sqc2(c, vf1, bone.skin_matrix() + 0x20);
        sqc2(c, vf2, bone.skin_matrix() + 0x30);

        // what the copy leaves in the FPRs and GPRs it moved the floats through
        c.f[0] = word(0x7c);
        c.f[1] = word(0x78);
        c.f[2] = word(0x74);
        c.f[3] = word(0x64);
        c.f[4] = word(0x70);
        c.f[5] = word(0x50);
        c.f[6] = word(0x60);
        for (unsigned i = 0; i < 8; ++i) set32(c.r[copy.word_reg[i]], word(0x60 + 4 * i));
        c.r[t0] = c.vu0.vf[vf1];
        mmi::pextlw(c.r[t1], c.r[copy.word_reg[7]], c.r[copy.word_reg[6]]);
        set32(c.r[v1], c.r[v1].w[0] + Bone::kSize);
        tick(c, 75);
        if (!c.r[v0].d[0]) break;
        if (poll(c, copy.loop)) return Flow::unwound;
    }
    tick(c, copy.exit_ticks);
    return Flow::next;
}

// ---- the draw list from a prebuilt list (the stage, and pass 1) ----

// The stage's pass-0 list: the current area's opaque list (or the global one at index 32) culled by fn_242ad0.
Flow collect_stage_segments(Cpu &c, const StackFrame &f) {
    const RenderSettings settings;
    set32(c.r[a3], 0x004F0000u);
    set32(c.r[a0], 0x00660000u);
    set32(c.r[v0], RenderSettings::kAddr);
    set32(c.r[v1], 1);
    set32(c.r[a1], settings.per_area_lists);
    st32(kDeferredCount, 0);
    tick(c, 8);
    if (c.r[a1].d[0] == c.r[v1].d[0]) {
        set32(c.r[a0], 0x00640000u);
        set32(c.r[v1], ld32(kArea) << 4);
        set32(c.r[a3], ld32(f.at(kAreaMaskAt)));
        c.r[a0].d[0] = c.r[s6].d[0];
        set32(c.r[t1], ld32(f.at(kPassAt)));
        set32(c.r[t2], c.r[v1].w[0] + frame::kStaticLists);
        set32(c.r[t0], f.at(kCollectOutAt));
        set32(c.r[v0], c.r[t2].w[0]);
        set32(c.r[a2], ld32(c.r[t2].w[0]));
        set32(c.r[a1], ld32(c.r[v0].w[0] + 8));
        tick(c, 15);
    } else {
        set32(c.r[v0], frame::kStaticLists);
        set32(c.r[a3], ld32(f.at(kAreaMaskAt)));
        set32(c.r[t1], ld32(f.at(kPassAt)));
        set32(c.r[a2], ld32(frame::kStaticLists + 32 * 16));
        c.r[a0].d[0] = c.r[s6].d[0];
        set32(c.r[a1], ld32(frame::kStaticLists + 32 * 16 + 8));
        set32(c.r[t0], f.at(kCollectOutAt));
        tick(c, 8);
    }
    tick(c, 2);
    if (!call(c, kCollectSegments, Ra{0x002496D0u})) return Flow::unwound;
    c.r[s3].d[0] = c.r[v0].d[0];
    tick(c, 3);
    return Flow::next;
}

// Pass 1 (every instance): the current area's blended list culled by fn_242ad0, sorted far to near, then the
// segments set aside in pass 0 appended unsorted.
Flow collect_pass1_segments(Cpu &c, const StackFrame &f) {
    set32(c.r[a0], 0x00640000u);
    set32(c.r[v1], ld32(kArea) << 4);
    set32(c.r[a3], ld32(f.at(kAreaMaskAt)));
    c.r[a0].d[0] = c.r[s6].d[0];
    set32(c.r[t1], ld32(f.at(kPassAt)));
    set32(c.r[t2], frame::kStaticLists + c.r[v1].w[0]);
    set32(c.r[t0], f.at(kCollectOutAt));
    c.r[v0].d[0] = c.r[t2].d[0];
    set32(c.r[a2], ld32(c.r[t2].w[0] + 4));
    set32(c.r[a1], ld32(c.r[v0].w[0] + 12));
    tick(c, 15);
    if (!call(c, kCollectSegments, Ra{0x00249718u})) return Flow::unwound;

    set32(c.r[v1], 0x00660000u);
    c.r[s3].d[0] = c.r[v0].d[0];
    set32(c.r[s0], frame::kDrawList);
    set32(c.r[a3], kByDepth);
    c.r[a0].d[0] = c.r[s0].d[0];
    c.r[a1].d[0] = c.r[s3].d[0];
    set32(c.r[a2], 4);
    tick(c, 10);
    if (!call(c, kQsort, Ra{0x00249740u})) return Flow::unwound;

    set32(c.r[v0], 0x004F0000u);
    set32(c.r[v1], ld32(kNoDeferred));
    tick(c, 4);
    if (!c.r[v1].d[0]) {
        set32(c.r[v0], 0x00660000u);
        set32(c.r[a0], 0x00660000u);
        set32(c.r[a1], ld32(kDeferredCount));
        st32(kPass1Count, c.r[s3].w[0]);
        set32(c.r[v1], frame::kExtraSegments);
        tick(c, 8);
        if (c.r[a1].sd[0] > 0) {
            c.r[s1].d[0] = c.r[a1].d[0];
            set32(c.r[v0], (c.r[s3].w[0] << 2) + c.r[s0].w[0]);
            tick(c, 4);
            for (;;) {
                set32(c.r[s0], ld32(c.r[v1].w[0]));
                set32(c.r[s3], c.r[s3].w[0] + 1);
                set32(c.r[s1], c.r[s1].w[0] - 1);
                set32(c.r[v1], c.r[v1].w[0] + 4);
                st32(c.r[v0].w[0], c.r[s0].w[0]);
                set32(c.r[v0], c.r[v0].w[0] + 4);
                tick(c, 8);
                if (!c.r[s1].d[0]) break;
                if (poll(c, 0x00249780u)) return Flow::unwound;
            }
        }
    }

    const RenderSettings settings;
    set32(c.r[t2], 0x004F0000u);
    set32(c.r[v1], 2);
    set32(c.r[a0], RenderSettings::kAddr);
    set32(c.r[v0], settings.cull_mode);
    tick(c, 6);
    if (c.r[v0].d[0] == c.r[v1].d[0]) {
        set32(c.r[v0], 3);
        settings.cull_mode = 3;
        tick(c, 2);
    }
    return Flow::next;
}

// ---- the instance's lights ----

// For each of the rig's three lights: its colour scaled by a linear distance falloff (near..far) from the anchor's
// sphere centre, and the unit direction from the light to that point. The colours go to the light colour matrix,
// the negated directions to the light direction matrix, whose fourth row is the specular half vector between
// direction 2 and the view (scaled by specular_scale); both are moved into the anchor's frame unless
// anchor_free_lights, and transposed for VU1. A rig without lights leaves the previous matrices.
Flow compute_lights(Cpu &c, const StackFrame &f, Model model) {
    const RenderSettings settings;
    const LightRig rig{model.light_rig};
    set32(c.r[a2], rig.addr);
    set32(c.r[v0], rig.lights);
    set32(c.r[s5], rig.anchor);
    tick(c, 5);
    if (c.r[v0].d[0]) {
        set32(c.r[v0], frame::kHalfVectorInit);
        set32(c.r[v1], 0x004F0000u);
        ld128(frame::kHalfVectorInit, c.r[a1]);
        set32(c.r[a0], frame::kHalfVector);
        set32(c.r[t2], ld32(kLight0Glow));
        st128(frame::kHalfVector, c.r[a1]);
        set32(c.r[v0], 0x004F0000u);
        set32(c.r[t4], RenderSettings::kAddr);
        set32(c.r[t3], kDefaultLightW.bits);
        c.r[a3].d[0] = 0;               // light index
        set32(c.r[a0], f.at(kLightDirsAt));
        c.r[a1].d[0] = 0;               // light offset; the upper half keeps the qword copied above
        tick(c, 15);

        for (;;) {
            const Light light{rig.lights + c.r[a1].w[0]};
            set32(c.r[v0], light.addr);
            lqc2(c, vf2, Bone{c.r[s5].w[0]}.sphere());
            lqc2(c, vf1, light.position());
            vsub(c, XYZW, vf2, vf2, vf1);  // light -> lit point
            vmul(c, XYZ, vf5, vf2, vf2);
            vaddbc(c, X, vf5, vf5, vf5, Lane::y);
            vaddbc(c, X, vf5, vf5, vf5, Lane::z);
            vsqrt(c, vf5, Lane::x);
            vaddq(c, XYZ, vf5, vf0);
            qmfc2(c, t0, vf5);
            const psf dist = psf::from_bits(c.r[t0].w[0]), far = psf::from_bits(light.far);
            c.f[2] = dist.bits;
            c.f[0] = far.bits;
            fpu_compare(c, far <= dist);
            tick(c, 18);
            if (far <= dist) {
                c.f[4] = 0;
                tick(c, 3);
            } else {
                const psf near = psf::from_bits(light.near);
                c.f[1] = near.bits;
                fpu_compare(c, dist <= near);
                tick(c, 5);
                if (dist <= near) {
                    set32(c.r[at], kOne.bits);
                    c.f[4] = kOne.bits;
                    tick(c, 4);
                } else {
                    c.f[1] = (far - near).bits;
                    c.f[0] = (far - dist).bits;
                    c.f[4] = div(c, far - dist, far - near).bits;
                    tick(c, 3);
                }
            }
            const psf falloff = psf::from_bits(c.f[4]);

            // the colour through v0 to the stack, scaled there
            set32(c.r[v1], light.addr);
            ld128(light.color() & ~15u, c.r[v0]);
            f.sq(v0, kScratchAt);
            tick(c, 6);
            auto scaled = [&](std::uint32_t i) { return (psf::from_bits(ld32(f.at(kScratchAt + 4 * i))) * falloff).bits; };
            if (c.r[t2].d[0]) {
                tick(c, 2);
                if (!c.r[a3].d[0]) {
                    c.f[0] = settings.glow_scale;
                    st32(f.at(kScratchAt + 12), c.f[0]);
                    tick(c, 4);
                } else {
                    st32(f.at(kScratchAt + 12), 0);
                    tick(c, 1);
                }
                c.f[3] = scaled(0);
                c.f[1] = scaled(1);
                c.f[2] = ld32(f.at(kScratchAt + 12));
                c.f[0] = scaled(2);
                set32(c.r[t6], c.f[3]);
                set32(c.r[v0], c.f[1]);
                set32(c.r[v1], c.f[0]);
                set32(c.r[t5], c.f[2]);
                pack4(c, t6, v0, v1, t5);
                tick(c, 17);
            } else {
                c.f[2] = scaled(0);
                c.f[1] = scaled(1);
                c.f[0] = scaled(2);
                set32(c.r[t6], c.f[2]);
                set32(c.r[v0], c.f[1]);
                set32(c.r[v1], c.f[0]);
                pack4(c, t6, v0, v1, t3);  // w = 25
                tick(c, 13);
            }
            qmtc2(c, t0, vf1);
            sqc2(c, vf1, c.r[a0].w[0] - 0x30);  // colours at sp+0, directions at sp+0x30

            vmul(c, XYZ, vf5, vf2, vf2);  // normalise light -> point
            vaddbc(c, X, vf5, vf5, vf5, Lane::y);
            vaddbc(c, X, vf5, vf5, vf5, Lane::z);
            vrsqrt(c, vf0, Lane::w, vf5, Lane::x);
            vmulbc(c, W, vf1, vf0, vf2, Lane::w);
            vmulq(c, XYZ, vf1, vf2);
            sqc2(c, vf1, c.r[a0].w[0]);

            set32(c.r[a3], c.r[a3].w[0] + 1);
            set32(c.r[a0], c.r[a0].w[0] + 16);
            set32(c.r[a1], c.r[a1].w[0] + Light::kSize);
            c.r[v0].d[0] = c.r[a3].sd[0] < 3;
            tick(c, 15);
            if (!c.r[v0].d[0]) break;
            if (poll(c, 0x00249848u)) return Flow::unwound;
        }

        // colours and ambient -> the light colour matrix
        set32(c.r[t0], rig.lights + LightRig::kAmbient);
        set32(c.r[s1], frame::kLightColors);
        c.r[a1].d[0] = c.r[sp].d[0];
        c.r[a0].d[0] = c.r[s1].d[0];
        set32(c.r[a2], f.at(kLightColorsAt + 0x10));
        set32(c.r[a3], f.at(kLightColorsAt + 0x20));
        tick(c, 10);
        if (!call(c, kLightColorMatrix, Ra{0x002499DCu})) return Flow::unwound;

        // the direction matrix: -dir0, -dir1, -dir2, then dir2 (normalised) as the seed of the half vector
        set32(c.r[at], kMinusOne.bits);
        c.f[20] = kMinusOne.bits;
        lqc2(c, vf3, f.at(kLightDirsAt + 0x20));
        set32(c.r[s0], frame::kLightDirs);
        lqc2(c, vf2, f.at(kLightDirsAt));
        lqc2(c, vf1, f.at(kLightDirsAt + 0x10));
        auto broadcast_x = [&](std::uint32_t bits) {  // a scalar into vf5.x through t0 (mfc1, qmtc2)
            set32(c.r[t0], bits);
            qmtc2(c, t0, vf5);
        };
        broadcast_x(c.f[20]);
        vmulbc(c, XYZW, vf4, vf3, vf5, Lane::x);
        broadcast_x(c.f[20]);
        vmulbc(c, XYZW, vf2, vf2, vf5, Lane::x);
        broadcast_x(c.f[20]);
        vmulbc(c, XYZW, vf1, vf1, vf5, Lane::x);
        sqc2(c, vf2, frame::kLightDirs);
        set32(c.r[s4], frame::kLightDirs + 0x10);
        sqc2(c, vf1, frame::kLightDirs + 0x10);
        set32(c.r[s2], frame::kLightDirs + 0x20);
        sqc2(c, vf4, frame::kLightDirs + 0x20);
        set32(c.r[s3], frame::kLightDirs + 0x30);
        st32(frame::kLightColors + 0x3c, 0);
        sqc2(c, vf3, frame::kHalfVector);
        auto normalise_xyz = [&](Vf v) {  // v.xyz /= |v.xyz| (w kept, through vf0.w * v.w)
            vmul(c, XYZ, vf5, v, v);
            vaddbc(c, X, vf5, vf5, vf5, Lane::y);
            vaddbc(c, X, vf5, vf5, vf5, Lane::z);
            vrsqrt(c, vf0, Lane::w, vf5, Lane::x);
            vmulbc(c, W, v, vf0, v, Lane::w);
            vmulq(c, XYZ, v, v);
        };
        normalise_xyz(vf3);
        sqc2(c, vf3, frame::kHalfVector);
        tick(c, 34);
        if (!call(c, kViewDirection, Ra{0x00249A64u})) return Flow::unwound;

        // half vector = -normalise(dir2 + view) * specular_scale, w = 1
        lqc2(c, vf1, frame::kHalfVector);
        qmtc2(c, v0, vf2);
        vadd(c, XYZW, vf1, vf1, vf2);
        sqc2(c, vf1, frame::kHalfVector);
        normalise_xyz(vf1);
        sqc2(c, vf1, frame::kHalfVector);
        set32(c.r[v1], 0x004F0000u);
        set32(c.r[s1], RenderSettings::kAddr);
        broadcast_x(c.f[20]);
        vmulbc(c, XYZW, vf2, vf1, vf5, Lane::x);
        set32(c.r[v0], 0x00660000u);
        c.r[a1].d[0] = c.r[s0].d[0];
        c.f[0] = settings.specular_scale;
        set32(c.r[s7], frame::kLocalLights);
        broadcast_x(c.f[0]);
        vmulbc(c, XYZW, vf1, vf2, vf5, Lane::x);
        c.r[a0].d[0] = c.r[s7].d[0];
        sqc2(c, vf1, frame::kHalfVector);
        set32(c.r[a2], 16);
        vmulbc(c, W, vf1, vf0, vf0, Lane::w);
        sqc2(c, vf1, frame::kHalfVector);
        tick(c, 31);

        // copy the four rows to kLocalLights, one FastMemcpy each
        if (!call(c, kFastMemcpy, Ra{0x00249AE0u})) return Flow::unwound;
        const unsigned row_reg[3] = {s4, s2, s3};
        const std::uint32_t row_ra[3] = {0x00249AF4u, 0x00249B08u, 0x00249B1Cu};
        for (unsigned i = 0; i < 3; ++i) {
            c.r[a1].d[0] = c.r[row_reg[i]].d[0];
            set32(c.r[a0], c.r[s7].w[0] + 16 * (i + 1));
            set32(c.r[a2], 16);
            tick(c, 5);
            if (!call(c, kFastMemcpy, Ra{row_ra[i]})) return Flow::unwound;
        }

        set32(c.r[v1], settings.anchor_free_lights);
        tick(c, 3);
        if (!c.r[v1].d[0]) {
            // the anchor's rotation as a 4x4 (translation 0, w = its word 0x8c), inverted, applied to the rows
            const Bone anchor{c.r[s5].w[0]};
            auto word = [&](std::uint32_t off) { return ld32(anchor.addr + off); };
            auto row = [&](Vf vf, std::uint32_t off) {
                for (unsigned i = 0; i < 4; ++i) c.vu0.vf[vf].w[i] = word(off + 4 * i);
            };
            row(vf4, 0x80);
            row(vf3, 0x50);
            row(vf2, 0x60);
            row(vf1, 0x70);
            sqc2(c, vf4, f.at(kScratchAt + 0x30));
            sqc2(c, vf3, f.at(kScratchAt));
            sqc2(c, vf2, f.at(kScratchAt + 0x10));
            sqc2(c, vf1, f.at(kScratchAt + 0x20));
            for (std::uint32_t i = 0; i < 3; ++i) st32(f.at(kScratchAt + 0x30 + 4 * i), 0);
            // the GPRs and FPRs the words went through
            c.f[0] = word(0x78);
            c.f[1] = word(0x74);
            c.f[2] = word(0x64);
            c.f[3] = word(0x70);
            c.f[4] = word(0x60);
            c.f[5] = word(0x5c);
            c.f[6] = word(0x6c);
            c.f[7] = word(0x7c);
            set32(c.r[a2], word(0x7c));
            set32(c.r[a3], anchor.addr + 0x70);
            set32(c.r[v0], word(0x74));
            set32(c.r[v1], word(0x78));
            set32(c.r[t2], word(0x64));
            set32(c.r[t3], word(0x68));
            set32(c.r[t5], word(0x6c));
            set32(c.r[t6], word(0x70));
            c.r[t0] = c.vu0.vf[vf1];
            mmi::pextlw(c.r[t1], c.r[a2], c.r[v1]);
            set32(c.r[a0], f.at(kScratchAt));
            c.r[a1].d[0] = c.r[a0].d[0];
            tick(c, 63);
            if (!call(c, kInverseRigid, Ra{0x00249C24u})) return Flow::unwound;
            c.r[a0].d[0] = c.r[s7].d[0];
            set32(c.r[a1], f.at(kScratchAt));
            c.r[a2].d[0] = c.r[s7].d[0];
            tick(c, 5);
            if (!call(c, kMatrixMultiply, Ra{0x00249C38u})) return Flow::unwound;
        }
        c.r[a0].d[0] = c.r[s7].d[0];
        c.r[a1].d[0] = c.r[a0].d[0];
        tick(c, 4);
        if (!call(c, kTransposeMatrix, Ra{0x00249C48u})) return Flow::unwound;
    }

    set32(c.r[a3], 0x00660000u);
    set32(c.r[t2], 0x00660000u);
    set32(c.r[a0], frame::kLocalLights2);
    set32(c.r[a2], 0x40);
    set32(c.r[a1], frame::kLocalLights);
    tick(c, 7);
    if (!call(c, kFastMemcpy, Ra{0x00249C64u})) return Flow::unwound;

    // VU1 must finish the previous draws before the matrices change
    if (!open_flush_tag(c, FlushTagRegs{t3, v0, t5, 1, 0x00249C80u, 0x00249D20u})) return Flow::unwound;
    c.r[a0].d[0] = c.r[s6].d[0];
    tick(c, 3);
    if (!call(c, kUploadLights, Ra{0x00249D48u})) return Flow::unwound;
    return Flow::next;
}

// The work after the setup: textures, lights, the limits and sort of the draw list, the segment draw.
// False when a callee or a poll unwound.
bool draw_list(Cpu &c, const StackFrame &f, Model model) {
    const RenderSettings settings;
    const bool stage = c.r[gpr::fp].d[0];
    set32(c.r[t3], ld32(f.at(kCountAt)));
    tick(c, 3);
    if (!c.r[t3].d[0]) return true;
    tick(c, 2);
    if (!stage) {
        c.r[a0].d[0] = c.r[s6].d[0];
        tick(c, 3);
        if (!call(c, kLoadModelTextures, Ra{0x002497E4u})) return false;
    }

    set32(c.r[t5], ld32(f.at(kPassAt)));
    tick(c, 3);
    bool count_drawn;
    if (c.r[t5].d[0]) {
        tick(c, 2);
        count_drawn = stage;
    } else {
        tick(c, 2);
        if (!stage) {
            if (compute_lights(c, f, model) == Flow::unwound) return false;
            tick(c, 2);
        }
        count_drawn = stage;
    }
    if (count_drawn) {  // the stage's segments drawn this frame
        set32(c.r[t6], 0x004F0000u);
        set32(c.r[a0], ld32(f.at(kCountAt)));
        set32(c.r[v1], RenderSettings::kAddr);
        set32(c.r[v0], settings.segments_drawn + c.r[a0].w[0]);
        settings.segments_drawn = c.r[v0].w[0];
        tick(c, 6);
    }

    set32(c.r[a1], 0x004F0000u);
    set32(c.r[v0], RenderSettings::kAddr);
    set32(c.r[v1], settings.no_pass1_segments);
    tick(c, 5);
    if (c.r[v1].d[0]) {
        set32(c.r[a2], ld32(f.at(kPassAt)));
        set32(c.r[v0], 1);
        tick(c, 4);
        if (c.r[a2].d[0] == c.r[v0].d[0]) return true;
    }

    // at most kMaxDraws segments
    set32(c.r[v0], 0x004F0000u);
    set32(c.r[a3], ld32(f.at(kCountAt)));
    set32(c.r[a0], ld32(kMaxDraws));
    c.r[v1].d[0] = c.r[a0].sd[0] < c.r[a3].sd[0];
    if (c.r[v1].d[0]) c.r[a3].d[0] = c.r[a0].d[0];
    st32(f.at(kCountAt), c.r[a3].w[0]);
    tick(c, 8);
    if (!stage) {
        set32(c.r[v1], model.sort_by_texture);
        set32(c.r[v0], 2);
        tick(c, 4);
        if (c.r[v1].d[0] == c.r[v0].d[0]) {
            set32(c.r[v0], 0x00660000u);
            c.r[v1].d[0] = c.r[a3].sd[0] < 2;
            set32(c.r[a0], frame::kDrawList);
            tick(c, 5);
            if (!c.r[v1].d[0]) {  // group the draws by texture
                set32(c.r[a3], kByTexture);
                set32(c.r[a1], ld32(f.at(kCountAt)));
                set32(c.r[a2], 4);
                tick(c, 6);
                if (!call(c, kQsort, Ra{0x00249DE8u})) return false;
            }
        }
    }

    // fn_242ff8(model, is_stage, pass, count): the segments of the draw list into the chain
    set32(c.r[a2], ld32(f.at(kPassAt)));
    c.r[a0].d[0] = c.r[s6].d[0];
    set32(c.r[a3], ld32(f.at(kCountAt)));
    c.r[a1].d[0] = c.r[gpr::fp].d[0];
    tick(c, 6);
    return call(c, kDrawSegments, Ra{0x00249E00u});
}

// fn_249060's work between the prologue and the epilogue. False when control left the function.
bool draw_instance(Cpu &c, const StackFrame &f) {
    const Model model{c.r[s6].w[0]};
    const RenderSettings settings;
    const bool stage = c.r[gpr::fp].d[0];
    if (c.r[v0].d[0]) return true;  // hidden

    set32(c.r[v0], 0x00660000u);
    set32(c.r[v1], ld32(kNoSecondPass));
    tick(c, 4);
    if (c.r[v1].d[0]) {
        tick(c, 2);
        if (c.r[a3].d[0]) return true;
    }
    tick(c, 2);
    if (stage) {
        set32(c.r[v0], ld32(f.at(kPassAt)));
        tick(c, 3);
        if (!c.r[v0].d[0]) {  // first draw of the frame: clear fn_242ff8's table
            set32(c.r[a0], kSegmentTable);
            c.r[a1].d[0] = 0;
            set32(c.r[a2], 0x2d0);
            tick(c, 6);
            if (!call(c, kFastMemset, Ra{0x002490F4u})) return false;
        }
    }
    set32(c.r[v1], ld32(f.at(kPassAt)));
    set32(c.r[v0], 1);
    tick(c, 4);
    if (c.r[v1].d[0] == c.r[v0].d[0]) {
        set32(c.r[v0], 0x00660000u);
        set32(c.r[v1], ld32(kPass1StageOnly));
        tick(c, 4);
        if (c.r[v1].d[0]) {
            tick(c, 2);
            if (!stage) return true;
        }
    }

    set32(c.r[v1], 0x004F0000u);
    set32(c.r[a1], RenderSettings::kAddr);
    set32(c.r[v0], settings.area_mask_off);
    tick(c, 5);
    if (!c.r[v0].d[0]) {
        set32(c.r[v0], 0x00660000u);
        set32(c.r[v1], ld32(kAreaBit));
        set32(c.r[a0], 1u << (c.r[v1].w[0] & 31));
        st32(f.at(kAreaMaskAt), c.r[a0].w[0]);
        tick(c, 5);
    }

    set32(c.r[a0], ld32(f.at(kPassAt)));
    c.r[s3].d[0] = 0;  // draw-list length
    tick(c, 4);
    Flow flow;
    if (c.r[a0].d[0]) {
        flow = collect_pass1_segments(c, f);
    } else {
        flow = cull_into_draw_list(c, f, model);
        if (flow == Flow::next) flow = compute_skin_matrices(c, model);
        if (flow == Flow::stage) flow = collect_stage_segments(c, f);
    }
    if (flow == Flow::unwound) return false;
    if (flow != Flow::nodraw) {
        st32(f.at(kCountAt), c.r[s3].w[0]);
        tick(c, 1);
    }
    return draw_list(c, f, model);
}

}

// fn_24cf08(object, arg, model, pass): draws one instance of the render lists t=1 and t=2 (fn_23ff60): the
// world, props, sky and the one-pass fighters. The model's segment array and count are put back afterwards (the
// draw below may point them elsewhere while it works).
PS2_DECOMP(0024CF08, DrawInstance) {
    StackFrame f(c, 0x40);
    f.sq(s0, 0x30);
    f.sd(ra, 0x00);
    c.r[s0].d[0] = c.r[a2].d[0];
    f.sq(s1, 0x20);
    f.sq(s2, 0x10);
    const Model model{c.r[s0].w[0]};
    set32(c.r[s2], static_cast<std::uint32_t>(model.segment_count));
    set32(c.r[s1], model.segments);
    tick(c, 10);
    if (!call(c, 0x00249060u, Ra{0x0024CF30u})) return;
    model.segments = c.r[s1].w[0];
    model.segment_count = c.r[s2].sw[0];
    f.lq(s0, 0x30);
    f.lq(s1, 0x20);
    f.lq(s2, 0x10);
    f.ld(ra, 0x00);
    f.pop();
    tick(c, 9);
}

// fn_249060(object, arg, model, pass): the instance draw itself, for pass 0 (opaque) and pass 1 (the blended
// second pass). Culls the model against the frustum into the draw list at 0x65e460 (the stage, instance 0, and
// every pass-1 draw take a prebuilt per-area list instead), computes the bones' skin matrices and the instance's
// light matrices, opens a FLUSH tag in the VIF1 chain, uploads the lights (fn_246918) and draws the list's
// segments (fn_242ff8).
PS2_DECOMP(00249060, DrawInstanceSegments) {
    const GameObject object{c.r[a0].w[0]};
    StackFrame f(c, kFrameSize);
    f.sq(s6, 0x100);
    f.sq(gpr::fp, 0xe0);
    c.r[s6].d[0] = c.r[a2].d[0];  // the model
    f.sq(s0, 0x160);
    f.sq(s1, 0x150);
    f.sq(s2, 0x140);
    f.sq(s3, 0x130);
    f.sq(s4, 0x120);
    f.sq(s5, 0x110);
    f.sq(s7, 0xf0);
    f.sd(ra, 0xd0);
    st32(f.at(0x170), c.f[20]);
    set32(c.r[v1], object.instance_index);
    st32(f.at(kPassAt), c.r[a3].w[0]);
    c.r[gpr::fp].d[0] = c.r[v1].d[0] < 1;  // instance 0: the stage
    c.r[v0].sd[0] = object.hidden;
    st32(f.at(kAreaMaskAt), 0);
    tick(c, 20);
    if (!draw_instance(c, f)) return;
    restore_frame(c, f);
}
