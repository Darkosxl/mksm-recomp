// Chameleon's borrowed specials draw their donors' effects (PS2_MOD). An effect event (114) without the shared-bank
// flag takes its definition from the fighter's own effect bank, group + 3 (87 for Reptile; FUN_002C9A60 writes it to
// the actor's effect context): u32 0x6BB168[bank] -> 0x100-byte definitions, their count at s16 0x6BB3A8[bank - 3] and
// u16 0x6BB464[bank] (the lookup FUN_002D8040 refuses only count < index). A bank is loaded from the group's effect
// pack, a PWF archive of PAR text definitions (Reptile 6757, Scorpion 6737, Sub-Zero 6797), by FUN_002D44B8(archive,
// bank, heap): count * 0x100 bytes from the heap, each entry (FUN_002124C0) parsed by FUN_002D8238.
//
// 0x002D44B8: while a player is Chameleon (chameleon.cpp's player records), bank 87 is loaded from one archive of
// Reptile's pack (0-18), an empty entry (19: not "PAR", left zero), Scorpion's pack from chameleon::kFxScorpion (20)
// and Sub-Zero's from kFxSubzero (36), built in the mod's EE memory and handed to the original loader, then cleared.
// Reptile's own indices are unchanged, so every other group-84 fighter reading bank 87 sees what it saw. The donor
// packs are read from the disc (GAMEDATA.WAD) the way versus_boss_moves.cpp reads the donor states; the ports' event
// indices are moved by versus_boss_moves.cpp (Port::fx_base). Anything unexpected loads Reptile's pack alone and says
// so on stderr.
#include "chameleon.hpp"
#include "ps2/decomp.hpp"

#include <cstdio>
#include <cstring>
#include <vector>

std::vector<std::uint8_t> versus_boss_moves_wad_file(std::uint32_t id); // versus_boss_moves.cpp

namespace {

using namespace ps2;
using namespace ps2::gpr;

constexpr std::uint32_t kLoadBank = 0x002D44B8u;
constexpr std::uint32_t kBank = 84 + 3;
constexpr std::uint32_t kPlayers = 0x000A0020u;  // chameleon.cpp: u8 Chameleon at +0 of each player's 0x20 bytes
constexpr std::uint32_t kHeaps = 0x0064E998u, kHeapStride = 0x68u;  // +8 free bottom, +0xC end, +0x1C 0 = linear
// the mod's EE memory (chameleon.cpp: 0x80000-0x100000 is never used by the game; 0xA0000- is chameleon.cpp's)
constexpr std::uint32_t kArchive = 0x00080000u, kArchiveMax = 0x00020000u;
constexpr std::uint32_t kScorpionPack = 6737, kSubzeroPack = 6797;
constexpr std::uint32_t kCount = 72, kSubzeroCount = kCount - chameleon::kFxSubzero;
constexpr std::uint32_t kToc = 0x20, kData = kToc + 8 * kCount;

struct Entry {
    std::uint32_t off, size;
};

// the entries of a PWF archive, as FUN_002124C0 reads them; get64(at) reads the archive's u64 at offset at
template <class Get>
std::vector<Entry> entries(std::uint32_t count, std::uint32_t word8, Get get64) {
    const std::uint32_t dir = word8 == 1 ? 0x800 : 0x20, toc = get64(dir) ? dir : 0x800;
    std::vector<Entry> out;
    for (std::uint32_t i = 0; i < count; ++i) {
        const std::uint64_t e = get64(toc + 8 * i);
        if (static_cast<std::int64_t>(e) < 0) out.push_back({static_cast<std::uint32_t>(e) << 11, static_cast<std::uint32_t>(e >> 22) & 0x3FFFFFu});
        else out.push_back({static_cast<std::uint32_t>(e), static_cast<std::uint32_t>(e >> 32)});
    }
    return out;
}

std::vector<Entry> host_entries(const std::vector<std::uint8_t> &f) {
    const auto u32 = [&f](std::uint32_t at) {
        std::uint32_t v = 0;
        if (at + 4 <= f.size()) std::memcpy(&v, &f[at], 4);
        return v;
    };
    if (f.size() < 0x20 || std::memcmp(f.data(), "PWF ", 4)) return {};
    auto out = entries(u32(12), u32(8), [&](std::uint32_t at) { return u32(at) | std::uint64_t{u32(at + 4)} << 32; });
    for (const Entry &e : out)
        if (e.off > f.size() || f.size() - e.off < e.size) return {};
    return out;
}

// Reptile's archive (guest) + the donor packs as one PWF image; empty, with why, if anything does not fit
std::vector<std::uint8_t> merged(std::uint32_t archive, const char *&why) {
    const std::vector<Entry> own =
        entries(rd<std::uint32_t>(archive + 12), rd<std::uint32_t>(archive + 8), [archive](std::uint32_t at) { return rd<std::uint64_t>(archive + at); });
    const std::vector<std::uint8_t> sco = versus_boss_moves_wad_file(kScorpionPack), sub = versus_boss_moves_wad_file(kSubzeroPack);
    const std::vector<Entry> se = host_entries(sco), ze = host_entries(sub);
    why = own.size() >= chameleon::kFxScorpion ? "Reptile's pack is larger than expected"
          : se.empty() || ze.empty()           ? "a donor pack does not read"
          : se.size() > chameleon::kFxSubzero - chameleon::kFxScorpion || ze.size() > kSubzeroCount ? "a donor pack is larger than expected"
                                                                                                    : nullptr;
    if (why) return {};
    std::vector<std::uint8_t> img(kData);
    std::memcpy(img.data(), "PWF ", 4);
    const auto put = [&img](std::uint32_t at, std::uint32_t v) { std::memcpy(&img[at], &v, 4); };
    const auto add = [&](std::uint32_t i, const std::uint8_t *p, std::uint32_t n) {
        while (img.size() % 16) img.push_back(0);
        put(kToc + 8 * i, static_cast<std::uint32_t>(img.size())), put(kToc + 8 * i + 4, n);
        img.insert(img.end(), p, p + n);
        img.push_back(0); // PAR text ends at its size; a NUL after it costs nothing
    };
    for (std::uint32_t i = 0; i < own.size(); ++i) {
        std::vector<std::uint8_t> t(own[i].size);
        for (std::uint32_t b = 0; b < own[i].size; ++b) t[b] = rd<std::uint8_t>(archive + own[i].off + b);
        add(i, t.data(), own[i].size);
    }
    for (std::uint32_t i = 0; i < se.size(); ++i) add(chameleon::kFxScorpion + i, &sco[se[i].off], se[i].size);
    for (std::uint32_t i = 0; i < ze.size(); ++i) add(chameleon::kFxSubzero + i, &sub[ze[i].off], ze[i].size);
    while (img.size() % 16) img.push_back(0);
    put(4, static_cast<std::uint32_t>(img.size())), put(8, 2), put(12, kCount); // unset entries: {0, 0}, not "PAR"
    if (img.size() > kArchiveMax) return why = "the merged pack is too large", std::vector<std::uint8_t>{};
    return img;
}

bool chameleon_playing() { return rd<std::uint8_t>(kPlayers) || rd<std::uint8_t>(kPlayers + 0x20); }

std::uint32_t heap_free(std::uint32_t heap) {
    const std::uint32_t h = kHeaps + heap * kHeapStride;
    return rd<std::uint32_t>(h + 0x1C) ? 0xFFFFFFFFu : rd<std::uint32_t>(h + 0xC) - rd<std::uint32_t>(h + 8); // not linear: try
}

}

PS2_MOD(002D44B8, chameleon_fx_bank) {
    const std::uint32_t archive = c.r[a0].w[0], bank = c.r[a1].w[0], heap = c.r[a2].w[0];
    const auto original = [&c] {
        decomp::hook_002D44B8.enabled = false;
        tail(c, kLoadBank);
        decomp::hook_002D44B8.enabled = true;
    };
    if (bank != kBank || !chameleon_playing()) return original();
    const char *why = nullptr;
    const std::vector<std::uint8_t> img = merged(archive, why);
    if (!why && heap_free(heap & 0x7F) < kCount * 0x100 + 256) why = "no room in the heap";
    if (why) {
        std::fprintf(stderr, "[mod] chameleon_fx: effect bank %u: Reptile's only: %s\n", bank, why);
        return original();
    }
    for (std::uint32_t i = 0; i < img.size(); i += 4) {
        std::uint32_t v;
        std::memcpy(&v, &img[i], 4);
        wr<std::uint32_t>(kArchive + i, v);
    }
    const std::uint32_t own = rd<std::uint32_t>(archive + 12);
    c.r[a0].d[0] = kArchive;
    const std::int32_t budget = c.budget;
    c.budget = 0x40000000; // no thread switch inside the call: it would unwind the host stack
    decomp::hook_002D44B8.enabled = false;
    const bool back = call(c, kLoadBank, Ra{c.r[ra].w[0]});
    decomp::hook_002D44B8.enabled = true;
    c.budget = budget;
    for (std::uint32_t i = 0; i < img.size(); i += 4) wr<std::uint32_t>(kArchive + i, 0);
    std::fprintf(stderr, "[mod] chameleon_fx: effect bank %u = Reptile %u + Scorpion at %u + Sub-Zero at %u (%u definitions, %zu-byte pack)%s\n",
                 bank, own, chameleon::kFxScorpion, chameleon::kFxSubzero, kCount, img.size(), back ? "" : " (did not come back)");
}
