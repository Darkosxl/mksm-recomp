// Ps2/Renderer/Character/ps2Setup.cpp
#include "ps2/decomp.hpp"

namespace {

using namespace ps2;
using namespace ps2::gpr;

// One entry per asset (index = handle & 0xffff), filled when a 2D asset is set up (fn_25adb8, fn_25b038, fn_257590)
struct AssetEntry {
    static constexpr std::uint32_t kTable = 0x0066B8D0;
    static constexpr std::uint32_t kSize = 12;

    std::uint32_t addr;
    gptr<std::uint32_t> handle() const { return {addr}; }      // index | type << 16
    gptr<std::uint32_t> object() const { return {addr + 4}; }  // the 112-byte screen object (sprite, panel)
};

}

// Screen object (sprite or panel) of a 2D asset handle (a0), for the loading screen, panels and the gallery to place
// and scale it.
PS2_DECOMP(00260B40, GetAssetObject) {
    const std::uint32_t index = c.r[a0].w[0] & 0xFFFFu;
    mmi::mult(c, 0, index, AssetEntry::kSize);  // the original indexes with MULT: HI/LO hold the offset
    const AssetEntry entry{AssetEntry::kTable + c.lo.w[0]};
    set32(c.r[v0], *entry.object());
    set32(c.r[v1], entry.addr);
    c.r[a0].d[0] = c.lo.d[0];
    tick(c, 9);
}
