// Ps2/Renderer/Character/ps2render.cpp: scrolling textures (animated UVs) of mesh segments.
#include "ps2/decomp.hpp"

namespace {

using namespace ps2;
using namespace ps2::gpr;

// the fields of a 0x1d0-byte mesh segment record this touches
constexpr std::uint32_t kKind = 0x10;     // 2: a segment that never scrolls
constexpr std::uint32_t kOffsetU = 0x164; // texture offsets, kept in (-1, 1)
constexpr std::uint32_t kOffsetV = 0x168;
constexpr std::uint32_t kSpeedU = 0x16c;  // per-draw step, scaled by 0.75
constexpr std::uint32_t kSpeedV = 0x170;

constexpr psf kOne(1.0f);
constexpr psf kMinusOne(-1.0f);
constexpr psf kStepScale(0.75f);
static_assert(kOne.bits == 0x3F800000u && kMinusOne.bits == 0xBF800000u && kStepScale.bits == 0x3F400000u,
              "the original's lui constants");

// a COP1 constant loaded as the original does: lui at, hi; mtc1 at, f<n>
void load_constant(Cpu &c, unsigned f, psf v) {
    set32(c.r[at], v.bits);
    c.f[f] = c.r[at].w[0];
}

// One axis: if the speed is not 0, brings the offset into (-1, 1) one whole turn at a time, then adds 0.75 x speed.
// `setup` is what the first loop's set-up block charges (2 for U, 3 for V: the compiler scheduled them differently);
// down_loop / up_loop are the two loop heads where the original polls. False when a poll unwound the machine.
bool scroll_axis(Cpu &c, std::uint32_t offset, std::uint32_t speed, std::int32_t setup, std::uint32_t down_loop,
                 std::uint32_t up_loop) {
    c.f[1] = ld32(speed);
    c.f[0] = 0;
    const bool still = fpr(c, 1) == fpr(c, 0);
    fpu_compare(c, still);
    tick(c, 7);
    if (still) return true;

    // offset >= 1: subtract 1 until it is below 1
    c.f[1] = ld32(offset);
    load_constant(c, 2, kOne);
    bool outside = fpr(c, 2) <= fpr(c, 1);
    fpu_compare(c, outside);
    tick(c, 8);
    if (outside) {
        load_constant(c, 3, kMinusOne);
        tick(c, setup);
        for (;;) {
            c.f[0] = fp::add(c.f[1], c.f[3]);
            outside = fpr(c, 2) <= fpr(c, 0);
            fpu_compare(c, outside);
            c.f[1] = c.f[0];
            tick(c, 6);
            if (!outside) break;
            if (poll(c, down_loop)) return false;
        }
        st32(offset, c.f[0]);
        tick(c, 1);
    }

    // offset <= -1: add 1 until it is above -1
    c.f[1] = ld32(offset);
    load_constant(c, 2, kMinusOne);
    outside = fpr(c, 1) <= fpr(c, 2);
    fpu_compare(c, outside);
    tick(c, 8);
    if (outside) {
        load_constant(c, 3, kOne);
        tick(c, 3);
        for (;;) {
            c.f[0] = fp::add(c.f[1], c.f[3]);
            outside = fpr(c, 0) <= fpr(c, 2);
            fpu_compare(c, outside);
            c.f[1] = c.f[0];
            tick(c, 6);
            if (!outside) break;
            if (poll(c, up_loop)) return false;
        }
        st32(offset, c.f[0]);
        tick(c, 1);
    }

    c.f[0] = ld32(speed);
    load_constant(c, 2, kStepScale);
    c.f[1] = ld32(offset);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32(offset, c.f[1]);
    tick(c, 7);
    return true;
}

}

// fn_240438(segment): advances a mesh segment's scrolling texture (flowing water, lava, moving surfaces) by one step
// before the segment is packed. The segment draw (fn_242ad0) calls it once per draw unless [0x6cc040] is set.
// Returns 0 for a segment of kind 2 (nothing done), else 1; the caller ignores it.
PS2_DECOMP(00240438, ScrollSegmentUV) {
    const std::uint32_t seg = c.r[a0].w[0];
    set32(c.r[v0], ld32(seg + kKind));
    set32(c.r[v1], 2);
    tick(c, 4);
    if (c.r[v0].d[0] == c.r[v1].d[0]) {
        c.r[v0].d[0] = 0;
        tick(c, 3);
        return;
    }
    if (!scroll_axis(c, seg + kOffsetU, seg + kSpeedU, 2, 0x00240498u, 0x002404E0u)) return;
    if (!scroll_axis(c, seg + kOffsetV, seg + kSpeedV, 3, 0x00240560u, 0x002405A8u)) return;
    set32(c.r[v0], 1);
    tick(c, 3);
}
