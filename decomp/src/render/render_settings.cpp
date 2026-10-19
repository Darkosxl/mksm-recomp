// ps2render: setters for render-wide settings (an object without a source path in the map, 0x2240f0-0x227xxx)
#include "ps2/decomp.hpp"

namespace {

using namespace ps2;
using namespace ps2::gpr;

// signed fade amount, +-32 at full scale: the frame's full-screen pass (fn_2282f8, ScreenCopy fn_278050) adds the
// screen to itself scaled by it when >= 0 (brighter) and subtracts when < 0 (darker); the movie player uses it too
const gptr<std::int32_t> g_brightness{0x004F4C54};
// nonzero skips the main character/model render pass (fn_23ff60); every caller found clears it
const gptr<std::uint32_t> g_skip_model_render{0x004F4D60};

constexpr psf kQuarter(0.25f), k128(128.0f);

}

// Sets the screen brightness from the options slider (f12, -1..1; the setting at 0x5C3C80).
PS2_DECOMP(00226B70, SetScreenBrightness) {
    const psf scaled = fpr(c, 12) * kQuarter * k128;  // * 32, in the original's two steps
    const std::int32_t amount = to_int(scaled);
    g_brightness.set(amount);

    set_fpr(c, 12, scaled);
    set_fpr(c, 1, kQuarter);
    c.f[0] = static_cast<std::uint32_t>(amount);
    set32(c.r[at], k128.bits);
    set32(c.r[v0], 0x004F0000u);
    tick(c, 11);
}

// Turns skipping the main model render pass on or off (a0). Every caller found passes 0 (the MapTable code at
// 0x2f8200-0x2f8300); what sets it is unknown, possibly a debug switch.
PS2_DECOMP(00226DF0, SetSkipModelRender) {
    g_skip_model_render.set(c.r[a0].w[0]);
    set32(c.r[v0], 0x004F0000u);
    tick(c, 4);
}
