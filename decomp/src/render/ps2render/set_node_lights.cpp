// fn_23d2f0 (Ps2/Renderer/Character/ps2render.cpp): the light set of one node, before its segments are packed.
#include "lights.hpp"
#include "ps2/decomp.hpp"
#include "ps2/decomp_vu0.hpp"

namespace {

using namespace ps2;
using namespace ps2::gpr;
using namespace ps2::vu0;
using namespace decomp::render::lights;

constexpr std::uint32_t kFindPointLights = 0x0023CF90;           // (position in a0): count 0-2, indices to kNearestPointLights
constexpr std::uint32_t kSetNodeLightMatrices = 0x0023D128;  // (node)

constexpr std::uint32_t kPosition = 0xa0;  // the node's position (a quadword)

// lui/addiu pairs the original builds its addresses with: the lui leaves the high half in the register
constexpr std::uint32_t hi(std::uint32_t addr) { return (addr + 0x8000u) & 0xFFFF0000u; }

// The direction from the node (vf3) to point light p, normalised into vf2 and stored at dir (w: the difference's
// w), then the distance |p - node| into f2 (and t0, vf5). vf1 keeps the difference.
void point_light_direction(Cpu &c, std::uint32_t p, std::uint32_t dir) {
    lqc2(c, vf1, p);
    vsub(c, XYZW, vf1, vf1, vf3);
    vmul(c, XYZ, vf5, vf1, vf1);
    vaddbc(c, X, vf5, vf5, vf5, Lane::y);
    vaddbc(c, X, vf5, vf5, vf5, Lane::z);
    vrsqrt(c, vf0, Lane::w, vf5, Lane::x);
    vmulbc(c, W, vf2, vf0, vf1, Lane::w);
    vmulq(c, XYZ, vf2, vf1);
    sqc2(c, vf2, dir);
    vmul(c, XYZ, vf5, vf1, vf1);
    vaddbc(c, X, vf5, vf5, vf5, Lane::y);
    vaddbc(c, X, vf5, vf5, vf5, Lane::z);
    vsqrt(c, vf5, Lane::x);
    vaddq(c, XYZ, vf5, vf0);
    qmfc2(c, t0, vf5);
    c.f[2] = c.r[t0].w[0];
}

// The light's strength at distance f2: 1 up to its full radius, 0 from its zero radius on, linear in between (left in
// f0, through f0-f2 as the original computes it). Charges the cycles after the block that ends with the first compare.
psf point_light_strength(Cpu &c, PointLight p) {
    const psf distance = fpr(c, 2);
    c.f[0] = ld32(p.zero_radius());
    c.f[1] = ld32(p.full_radius());
    const psf zero_radius = fpr(c, 0), full_radius = fpr(c, 1);
    fpu_compare(c, zero_radius <= distance);
    if (zero_radius <= distance) {
        c.f[0] = 0;
        tick(c, 3);
        return fpr(c, 0);
    }
    fpu_compare(c, distance <= full_radius);
    tick(c, 4);
    if (distance <= full_radius) {
        c.r[at].sd[0] = 0x3F800000;  // 1.0f, through at
        c.f[0] = c.r[at].w[0];
        tick(c, 4);
        return fpr(c, 0);
    }
    set_fpr(c, 1, zero_radius - full_radius);
    set_fpr(c, 0, zero_radius - distance);
    set_fpr(c, 0, div(c, fpr(c, 0), fpr(c, 1)));
    tick(c, 3);
    return fpr(c, 0);
}

// colour vf = colour of the light times the strength in f0 (through t0 and vf5.x)
void scale_color(Cpu &c, Vf vf) {
    set32(c.r[t0], c.f[0]);
    qmtc2(c, t0, vf5);
    vmulbc(c, XYZW, vf, vf, vf5, Lane::x);
}

PointLight point_light(std::uint32_t index_shifted) { return {PointLight::kTable + index_shifted}; }

}

// Chooses the lights of node a0 for its draw and builds its VU1 lighting matrices (fn_23d128). The world's
// default lights come first; the point lights near the node (fn_23cf90 finds up to two) take the first slots,
// each pointing from the node to the light, its colour faded with distance. With no point light the third slot
// gets no colour.
PS2_DECOMP(0023D2F0, SetNodeLights) {
    StackFrame f(c, 0x30);
    f.sq(s0, 0x20);
    f.sd(ra, 0x10);
    c.r[s0].d[0] = c.r[a0].d[0];
    const std::uint32_t node = c.r[s0].w[0];
    lqc2(c, vf3, node + kPosition);
    qmfc2(c, a0, vf3);
    sqc2(c, vf3, f.at(0));
    tick(c, 9);
    if (!call(c, kFindPointLights, Ra{0x0023D314})) return;
    c.r[v1].d[0] = c.r[v0].d[0];
    lqc2(c, vf3, f.at(0));
    const std::uint64_t count = c.r[v1].d[0];
    tick(c, 4);

    if (count == 0) {
        // the default lights 0 and 1, and a black third light
        c.r[v0].d[0] = 0;
        set32(c.r[a0], kDefaultLights.addr);
        mmi::pextlw(c.r[t0], c.r[v0], c.r[v0]);
        mmi::pextlw(c.r[t1], c.r[v0], c.r[v0]);
        mmi::pcpyld(c.r[t0], c.r[t1], c.r[t0]);
        qmtc2(c, t0, vf1);
        ld128(kDefaultLights.color(1), c.r[a3]);
        ld128(kDefaultLights.dir(0), c.r[a2]);
        set32(c.r[v1], kNodeLights.addr);
        ld128(kDefaultLights.color(0), c.r[a1]);
        ld128(kDefaultLights.dir(1), c.r[v0]);
        sqc2(c, vf1, kNodeLights.color(2));
        st128(kNodeLights.dir(0), c.r[a2]);
        st128(kNodeLights.color(0), c.r[a1]);
        st128(kNodeLights.dir(1), c.r[v0]);
        st128(kNodeLights.color(1), c.r[a3]);
        tick(c, 20);
    } else {
        set32(c.r[v0], 1);
        tick(c, 3);
        if (count == 1) {
            // the point light, then the default lights 0 and 1
            set32(c.r[a0], hi(kNearestPointLights));
            set32(c.r[v1], hi(PointLight::kTable));
            set32(c.r[v0], rd<std::uint32_t>(kNearestPointLights));
            set32(c.r[v1], PointLight::kTable);
            set32(c.r[a0], hi(kNodeLights.addr));
            set32(c.r[v0], c.r[v0].w[0] << 6);
            set32(c.r[t1], kNodeLights.addr);
            const PointLight light = point_light(c.r[v0].w[0]);
            set32(c.r[v1], light.addr);
            point_light_direction(c, light.position(), kNodeLights.dir(0));
            tick(c, 32);
            point_light_strength(c, light);

            set32(c.r[v0], hi(kDefaultLights.addr));
            lqc2(c, vf1, light.color());
            set32(c.r[v0], kDefaultLights.addr);
            set32(c.r[v1], hi(kNodeLights.dir(1)));
            ld128(kDefaultLights.color(1), c.r[a3]);
            scale_color(c, vf1);
            ld128(kDefaultLights.dir(0), c.r[a2]);
            set32(c.r[v1], kNodeLights.dir(1));
            ld128(kDefaultLights.color(0), c.r[a0]);
            ld128(kDefaultLights.dir(1), c.r[a1]);
            sqc2(c, vf1, kNodeLights.color(0));
            st128(kNodeLights.color(2), c.r[a3]);
            st128(kNodeLights.dir(1), c.r[a2]);
            st128(kNodeLights.color(1), c.r[a0]);
            st128(kNodeLights.dir(2), c.r[a1]);
            tick(c, 19);
        } else {
            // the two point lights, then the default light 0
            tick(c, 2);
            set32(c.r[a1], hi(kNearestPointLights));
            set32(c.r[a2], hi(PointLight::kTable));
            set32(c.r[v0], rd<std::uint32_t>(kNearestPointLights));
            set32(c.r[a0], PointLight::kTable);
            set32(c.r[v1], hi(kNodeLights.addr));
            set32(c.r[v0], c.r[v0].w[0] << 6);
            set32(c.r[t1], kNodeLights.addr);
            const PointLight first = point_light(c.r[v0].w[0]);
            set32(c.r[a3], first.addr);
            point_light_direction(c, first.position(), kNodeLights.dir(0));
            tick(c, 32);
            point_light_strength(c, first);

            set32(c.r[v1], kNearestPointLights);
            lqc2(c, vf2, first.color());
            set32(c.r[v0], rd<std::uint32_t>(kNearestPointLights + 4));
            scale_color(c, vf2);
            sqc2(c, vf2, kNodeLights.color(0));
            set32(c.r[a1], PointLight::kTable);
            set32(c.r[v0], c.r[v0].w[0] << 6);
            set32(c.r[a0], hi(kNodeLights.dir(1)));
            const PointLight second = point_light(c.r[v0].w[0]);
            set32(c.r[v1], second.addr);
            set32(c.r[a2], kNodeLights.dir(1));
            point_light_direction(c, second.position(), kNodeLights.dir(1));
            tick(c, 36);
            point_light_strength(c, second);

            set32(c.r[v0], hi(kDefaultLights.addr));
            lqc2(c, vf1, second.color());
            set32(c.r[v0], kDefaultLights.addr);
            set32(c.r[v1], hi(kNodeLights.dir(2)));
            ld128(kDefaultLights.color(0), c.r[a1]);
            scale_color(c, vf1);
            ld128(kDefaultLights.dir(0), c.r[a0]);
            set32(c.r[v1], kNodeLights.dir(2));
            sqc2(c, vf1, kNodeLights.color(1));
            st128(kNodeLights.color(2), c.r[a1]);
            st128(kNodeLights.dir(2), c.r[a0]);
            tick(c, 13);
        }
    }

    c.r[a0].d[0] = c.r[s0].d[0];
    tick(c, 3);
    if (!call(c, kSetNodeLightMatrices, Ra{0x0023D64C})) return;
    f.lq(s0, 0x20);
    f.ld(ra, 0x10);
    f.pop();
    tick(c, 5);
}
