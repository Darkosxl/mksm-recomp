// Paradox engine (paradox:core, no source path in the map): the scene's dynamic point light.
#include "ps2/decomp.hpp"

namespace {

using namespace ps2;
using namespace ps2::gpr;

}

// int fn_379988(PointLight *light, PointLight *other): whether a point light is on (its first word), asking `other`
// when it is given and `light` otherwise. The segment drawers (fn_242ff8, fn_235090) ask it about the light at
// 0x756C90 (other = NULL) before testing a segment's bounds against the light's sphere (0x4F4C74-0x4F4C98);
// fn_379918 turns it off. Inferred from those callers.
PS2_DECOMP(00379988, PointLightIsOn) {
    tick(c, 2);
    const std::uint32_t light = c.r[a1].d[0] != 0 ? c.r[a1].w[0] : c.r[a0].w[0];
    set32(c.r[v0], ld32(light));
    tick(c, 3);
}
