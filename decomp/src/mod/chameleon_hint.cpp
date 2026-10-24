// Chameleon's button hint on the character select (story and Ko-op): while a cursor sits on Reptile's cell 7, the
// button legend gets a second line, "L1 Reptile / Chameleon", in its own style.
//
// The legend is FUN_0013B050 (no arguments; the select screen's update 0x0013BCC0 calls it in every mode): three hints
// on y 410 (440 when u32 0x4E59DC is set), each a button glyph drawn with PrintText (0x002F4EC0: x, y, grey 0x60, font
// flags 2, text) and a word 22 to its right with 0x002F6370 (the same, then scale 0.9, 0.9 in f12/f13): "~ Cancel" at
// x 70, "| Random" at 270, "= Accept" at 453 (texts 0x5B3/0x5AE, 0x5B4/0x5AF, 0x5B2/0x5AD). The font draws '@' as the
// L1 button (text 0x69: "...the fatality stunner. @", the stunner being L1). The hint is drawn the same way under the
// first hint, from the legend's first get_string (0x001E6EF0, return address 0x0013B0AC): chameleon.cpp's get_string
// hook calls in here, so the line is up exactly while the legend is. The select screen is the static object at
// 0x005CC5F0 (its methods' a0): +0x2C u32[2] cursor k's pad port (2: no pad yet), +0x3C u32[2] cursor k's cell.
#include "chameleon.hpp"

#include "ps2/decomp.hpp"

#include <algorithm>

namespace {

using namespace ps2;
using namespace ps2::gpr;

constexpr std::uint32_t kLegend = 0x0013B0ACu;        // the legend's first get_string returns here
constexpr std::uint32_t kSelectScreen = 0x005CC5F0u;
constexpr std::uint32_t kSelectMode = 0x005CA2ACu;    // 0 story, 1 Ko-op, 2 Versus
constexpr std::uint32_t kTall = 0x004E59DCu;          // 1: the legend sits on y 440, not 410
constexpr std::uint32_t kPrintText = 0x002F4EC0u, kPrintScaled = 0x002F6370u;
constexpr std::uint32_t kReptileCell = 7;
constexpr std::uint32_t kHintY = 22;                  // below the legend's line
constexpr std::uint32_t kScale = 0x3F666666u;         // 0.9f, as the legend's words
// the line's texts, in the mod's EE memory (chameleon.cpp's layout leaves 0xAA000-0xB0000 free)
constexpr std::uint32_t kGlyph = 0x000AF000u, kWords = 0x000AF010u;

// a cursor that can pick (story: the one; Ko-op: either, once its pad is in) is on cell 7
bool on_reptile() {
    const std::uint32_t mode = rd<std::uint32_t>(kSelectMode);
    if (mode > 1) return false;
    for (std::uint32_t k = 0; k < mode + 1; ++k)
        if (rd<std::uint32_t>(kSelectScreen + 0x3C + 4 * k) == kReptileCell &&
            (mode == 0 || rd<std::uint32_t>(kSelectScreen + 0x2C + 4 * k) < 2))
            return true;
    return false;
}

void put(std::uint32_t at, const char *s) {
    do wr<std::uint8_t>(at++, static_cast<std::uint8_t>(*s)); while (*s++);
}

}

bool chameleon::select_hint(Cpu &c) {
    if (c.r[ra].w[0] != kLegend || !on_reptile()) return true;
    // the caller's registers come back as they were; the guest calls run unpreempted (a thread switch would unwind
    // the host stack into call()'s sentinel ra)
    Reg128 r[32];
    std::uint32_t f[32];
    std::copy(c.r, c.r + 32, r), std::copy(c.f, c.f + 32, f);
    const Reg128 hi = c.hi, lo = c.lo;
    const std::uint32_t sa = c.sa, facc = c.facc, fcr31 = c.fcr31;
    const std::int32_t budget = c.budget;
    c.budget = 0x40000000;
    const std::uint32_t y = (rd<std::uint32_t>(kTall) == 1 ? 440u : 410u) + kHintY;
    put(kGlyph, "@");
    put(kWords, "Reptile / Chameleon");
    c.r[a0].d[0] = 70, c.r[a1].d[0] = y, c.r[a2].d[0] = 0x60, c.r[a3].d[0] = 2, c.r[t0].d[0] = kGlyph;
    bool back = call(c, kPrintText);
    if (back) {
        c.r[a0].d[0] = 92, c.r[a1].d[0] = y, c.r[a2].d[0] = 0x60, c.r[a3].d[0] = 2, c.r[t0].d[0] = kWords;
        c.f[12] = c.f[13] = kScale;
        back = call(c, kPrintScaled);
    }
    c.budget = budget;
    if (!back) return false;
    std::copy(r, r + 32, c.r), std::copy(f, f + 32, c.f);
    c.hi = hi, c.lo = lo, c.sa = sa, c.facc = facc, c.fcr31 = fcr31;
    return true;
}
