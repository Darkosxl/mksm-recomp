// Ps2/Renderer/Character/ps2render.cpp: the point lights of the scene, as the instance draws pick them.
//
// The loop keeps its state in the registers the original uses (s0-s5, f20, f21), because it polls for preemption at
// its head and holds a call (sqrtf) whose unwind resumes in the recompiled loop.
#include "ps2/decomp.hpp"
#include "ps2/decomp_vu0.hpp"

namespace {

using namespace ps2;
using namespace ps2::gpr;
using namespace ps2::vu0;

constexpr std::uint32_t kLightCount = 0x00678920u;  // int: lights in the table
constexpr std::uint32_t kLights = 0x00678940u;      // PointLight[kLightCount]
constexpr std::uint32_t kNearest = 0x007800A0u;     // int[2]: the strongest light's index, then the second's
constexpr std::uint32_t kSqrtf = 0x00207C10u;

// One point light (0x40 bytes). The original walks them with s0 = light - 0x20.
struct PointLight {
    static constexpr std::uint32_t kSize = 0x40;
    static constexpr std::uint32_t kPosition = 0x00;   // xyzw
    static constexpr std::uint32_t kInner = 0x20;      // full weight up to this distance
    static constexpr std::uint32_t kOuter = 0x24;      // weight falls linearly to 0 here
    static constexpr std::uint32_t kRange2 = 0x28;     // squared distance beyond which the light is ignored
    static constexpr std::uint32_t kIntensity = 0x34;  // weight scale
};

constexpr psf kFltMin = psf::from_bits(0x00800000u);  // the smallest normal float: "no light yet"
constexpr psf kOne(1.0f);

}

// fn_23cf90(position): for an object at `position` (a 128-bit vector in a0), weighs every point light of the scene
// by intensity x a linear falloff between its inner and outer distance, and writes the two strongest into
// [0x7800a0] (first) and [0x7800a4] (second). Returns how many lights are within range. The character and instance
// renderers (fn_23d2f0, fn_23d660) use it to set up per-object point lighting: 0, 1 or 2 lights.
//
// As in the original: when a light beats the strongest one, the old strongest's weight moves to second place but the
// new strongest's "weight" is set to its distance (f21 = f2), not its weight; and the second place's index is only
// replaced, never shifted down, when a light beats only the second.
PS2_DECOMP(0023CF90, PickPointLights) {
    StackFrame f(c, 0x90);
    f.sq(s5, 0x20);
    st32(f.at(0x80), c.f[20]);
    set32(c.r[s5], 0x00680000u);  // lui s5: the page of kLightCount
    set32(c.r[at], kFltMin.bits);
    c.f[20] = c.r[at].w[0];       // second place's weight
    f.sq(s1, 0x60);
    f.sq(s2, 0x50);
    c.r[s1].d[0] = 0;             // light index
    st32(f.at(0x88), c.f[21]);
    c.r[s2].d[0] = 0;             // lights within range
    set32(c.r[v0], ld32(kLightCount));
    c.f[21] = c.f[20];            // first place's weight
    f.sq(s0, 0x70);
    f.sq(s3, 0x40);
    f.sq(s4, 0x30);
    f.sd(ra, 0x10);
    f.sq(a0, 0x00);               // the position, read back by lqc2 each iteration
    tick(c, 20);

    if (c.r[v0].sd[0] > 0) {
        set32(c.r[v0], kLights);
        set32(c.r[s3], kNearest & 0xFFFF0000u);
        set32(c.r[s4], kNearest);
        set32(c.r[s0], kLights - 0x20u);
        tick(c, 6);
        for (;;) { // 0x0023CFF8
            const std::uint32_t light = c.r[s0].w[0] + 0x20u;
            // squared distance: x, y, z of (position - light) squared and summed into vf5.x
            lqc2(c, vf1, light + PointLight::kPosition);
            lqc2(c, vf2, f.at(0x00));
            vsub(c, XYZW, vf1, vf2, vf1);
            vmul(c, XYZ, vf5, vf1, vf1);
            vaddbc(c, X, vf5, vf5, vf5, Lane::y);
            vaddbc(c, X, vf5, vf5, vf5, Lane::z);
            qmfc2(c, t0, vf5);
            c.f[12] = c.r[t0].w[0];
            c.f[0] = ld32(light + PointLight::kRange2);
            const bool in_range = fpr(c, 12) < fpr(c, 0);
            fpu_compare(c, in_range);
            tick(c, 13);
            if (in_range) {
                set_fpr(c, 2, sqrt(fpr(c, 12)));
                set32(c.r[s2], c.r[s2].w[0] + 1u);
                // the compiler's NaN check of sqrtf's inline form; the EE's SQRT.S never gives a NaN
                fpu_compare(c, fpr(c, 2) == fpr(c, 2));
                tick(c, 8);
                if (!(c.fcr31 & kFpuCondition)) {
                    tick(c, 2);
                    if (!call(c, kSqrtf, Ra{0x0023D054u})) return;
                    c.f[2] = c.f[0];
                    tick(c, 1);
                }
                const psf dist = fpr(c, 2);

                c.f[1] = ld32(light + PointLight::kInner);
                const bool full = dist <= fpr(c, 1);
                fpu_compare(c, full);
                tick(c, 5);
                if (full) {
                    set32(c.r[at], kOne.bits);
                    c.f[1] = c.r[at].w[0];
                    tick(c, 4);
                } else { // (outer - dist) / (outer - inner)
                    c.f[0] = ld32(light + PointLight::kOuter);
                    c.f[1] = fp::sub(c.f[0], c.f[1]);
                    c.f[0] = fp::sub(c.f[0], dist.bits);
                    fpu_div(c, 1, c.f[0], c.f[1]);
                    tick(c, 4);
                }
                c.f[0] = ld32(light + PointLight::kIntensity);
                c.f[1] = fp::mul(c.f[1], c.f[0]);
                const psf weight = fpr(c, 1);

                const bool beats_second = fpr(c, 20) < weight;
                fpu_compare(c, beats_second);
                tick(c, 6);
                if (beats_second) {
                    const bool beats_first = fpr(c, 21) < weight;
                    fpu_compare(c, beats_first);
                    tick(c, 4);
                    if (beats_first) {
                        set32(c.r[v0], ld32(c.r[s3].w[0] + 0xA0u));
                        c.f[20] = c.f[21];
                        st32(c.r[s3].w[0] + 0xA0u, c.r[s1].w[0]);
                        c.f[21] = dist.bits;
                        st32(c.r[s4].w[0] + 4u, c.r[v0].w[0]);
                        tick(c, 7);
                    } else {
                        st32(c.r[s4].w[0] + 4u, c.r[s1].w[0]);
                        c.f[20] = weight.bits;
                        tick(c, 2);
                    }
                }
            }
            set32(c.r[v0], ld32(c.r[s5].w[0] - 0x76E0u));  // kLightCount
            set32(c.r[s1], c.r[s1].w[0] + 1u);
            set32(c.r[s0], c.r[s0].w[0] + PointLight::kSize);
            c.r[v0].d[0] = c.r[s1].sd[0] < c.r[v0].sd[0] ? 1u : 0u;
            tick(c, 6);
            if (!c.r[v0].d[0]) break;
            if (poll(c, 0x0023CFF8u)) return;
        }
    }

    c.r[v0].d[0] = c.r[s2].d[0];
    f.lq(s0, 0x70);
    f.lq(s1, 0x60);
    f.lq(s2, 0x50);
    f.lq(s3, 0x40);
    f.lq(s4, 0x30);
    f.lq(s5, 0x20);
    f.ld(ra, 0x10);
    c.f[21] = ld32(f.at(0x88));
    c.f[20] = ld32(f.at(0x80));
    f.pop();
    tick(c, 13);
}
