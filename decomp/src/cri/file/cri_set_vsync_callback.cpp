// void cri_set_vsync_callback(void *fs, void (*callback)()) at 0x0026F068 (Ps2/Cri/File.cpp).
// Sets the function that File.cpp's vertical-blank handler (0x0026EFE8, registered with sceGsSyncVCallback) calls
// on every vblank; the first argument is unused.
#include "ps2/decomp.hpp"

using namespace ps2;
using namespace ps2::gpr;

namespace {
constexpr std::uint32_t kVsyncCallback = 0x004FADF0u;  // void (*)()
}

PS2_DECOMP(0026F068, cri_set_vsync_callback) {
    set32(c.r[v0], (kVsyncCallback + 0x8000u) & 0xFFFF0000u);  // lui v0, %hi(kVsyncCallback): left in v0
    wr<std::uint32_t>(kVsyncCallback, c.r[a1].w[0]);
    tick(c, 4);
}
