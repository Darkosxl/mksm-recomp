// Chameleon (Mortal Kombat: Armageddon) in story mode and Ko-op, phase 1. He is Reptile (group 84) in Reptile's story
// alt costume (model 6852, textures 6851), on Reptile's roster cell 7. Versus keeps Reptile. Every hook below checks
// the mode first and otherwise leaves the game alone.
//
//  - Costume, 0x001CE6E8 (player load: player 1/2, group). The loader takes the alt costume for player 1 when u32
//    0x4D5E1C is set and for player 2 when 0x4D5E20 is set and 0x4D5E1C is not; nothing in the game writes them (only
//    a mirror match, both clear and the same group, gives player 2 the alt). The mod sets them for the player being
//    loaded: Chameleon (Reptile picked as Chameleon at the select screen) gets the alt, everyone else the base costume.
//  - Colour modes: 0 rainbow, 1 yellow (Scorpion's specials), 2 blue (Sub-Zero's), 3 green (Reptile's). Phase 1 is
//    visual only: the green cloth of the costume's CLUTs is recoloured per mode (chameleon.py's green() mask and
//    tint; rainbow = gray at luma x1.15, which the renderer's fx glow (texture pack fx.txt) cycles). 0x001D0688 (the
//    player texture file's load callback: entry +0 file id, +8 data, +0x1C the load record, record +4 the player)
//    recolours file 6851's pages 0, 2, 3, 4 in place before the game copies them into its texture slots (page 1, the
//    glow sprite, stays) and keeps the original CLUTs here. The load buffer is freed after that, so a switch repaints
//    the slots' CLUTs (TextureManager, found by their content) and has the next character draw upload them again.
//  - Switch: L3 (pad bit 0x200, unused by every fighter's command tree), read per actor in 0x001EAF30 (the per-actor
//    pad read) from the raw held word; the remapped words the actor keeps drop L3.
//  - Select screen, 0x0013CD80 (its per-frame input): L3 on cell 7 swaps Reptile and Chameleon for that cursor's player
//    (Reptile until then; the pick lasts the session). For Chameleon, cell 7's pre-rendered image (front-end file 78
//    entry 4, found by its CLUT's hash) gets a recoloured copy of its CLUT for his mode, and 0x001E6EF0 (get_string)
//    answers "CHAMELEON" for Reptile's name (text 0x6D0) to the select screen's calls.
//  - Name elsewhere (HUD, menus), 0x001E6EC8 (character name: get_string(0x67C + group)): "CHAMELEON" for group 84
//    while a player is Chameleon. Story enemies that look like Reptile are other groups (0x3B), so they keep theirs.
//  - Announcer: 0x0013B3B0 (lock: the cursor's "Reptile" line) arms a swap; 0x0041ABB8 (ADXT_StartAfs(adxt,
//    partition, file)) then starts MKA's "Chameleon" (PS2_MOD_DATA/vo_name.adx, copied into EE memory) with
//    ADXT_StartMem2(adxt, data, size) instead of AFS file 79 (vo_sk_reptile_1.adx). No file: Reptile's line.
//
// The mod's state lives in EE memory that the game and the HLE kernel never use (0x80000-0x100000: below the ELF,
// above the kernel stack top 0x80000; zero in all 39 reference states), so savestates and lockstep cover it. Layout
// below (kState); phase 2 (mode-gated specials) reads Player::mode.
#include "chameleon.hpp"

#include "ps2/decomp.hpp"
#include "ps2/mod_data.hpp"
#include "ps2/system.hpp"

#include <cstdio>

namespace {

using namespace ps2;
using namespace ps2::gpr;

// ---- game ----
constexpr std::uint32_t kProfile = 0x004D8B80u;      // Profile *: +0x88 play mode (0 story, 1 Ko-op, 2 Versus)
constexpr std::uint32_t kSelectMode = 0x005CA2ACu;   // the character select's mode, same values
constexpr std::uint32_t kAltFlag[2] = {0x004D5E1Cu, 0x004D5E20u};
constexpr std::uint32_t kReptile = 84;
constexpr std::uint32_t kAltTextures = 6851;
constexpr std::uint32_t kLastTexture = 0x006618ECu;  // RequestCharTexture uploads a model's slots when its set differs
constexpr std::uint32_t kTextureManager = 0x004EFE94u;
constexpr std::uint32_t kSlots = 321, kSlotSize = 0x430;
constexpr std::uint32_t kPads = 0x006B4330u, kPadSize = 0x98;  // +0x1C connected bits, port * 0x98 + 0x24 held
constexpr std::uint32_t kPortOf = 0x0050BC10u;        // u32 [slot * 2]: the pad port of player slot 0/1
constexpr std::uint16_t kL3 = 0x0200;
constexpr std::uint32_t kReptileName = 0x6D0;
constexpr std::uint32_t kSelectCode = 0x0013B000u, kSelectCodeEnd = 0x0013F000u;  // FUN_0013B050..FUN_0013EF48
constexpr std::uint32_t kAdxtStartMem2 = 0x0041AE28u;
constexpr std::uint32_t kReptileLine = 79;           // AFS file of vo_sk_reptile_1.adx
constexpr std::uint32_t kSelect = 0x0013CD80u, kGetString = 0x001E6EF0u, kAnnounce = 0x0013B3B0u, kStartAfs = 0x0041ABB8u;
constexpr std::uint32_t kLoadPlayer = 0x001CE6E8u, kTextureLoaded = 0x001D0688u, kPadRead = 0x001EAF30u;
constexpr std::uint32_t kGroupName = 0x001E6EC8u;
// FNV-1a 64 of the 1 KB CLUTs as on the disc: file 78 entry 4, file 6851 entries 0, 2, 3, 4
constexpr std::uint64_t kSelectClut = 0x0b9a8ce58a836985ull;
constexpr std::uint32_t kPages[4] = {0, 2, 3, 4};
constexpr std::uint64_t kPageClut[4] = {0x18170f8c6aa34322ull, 0x6154cd79faad23e6ull, 0xf41c9038ed87148cull, 0x306f5a6e8f645c7aull};

// ---- the mod's EE memory ----
constexpr std::uint32_t kState = 0x000A0000u;
//   +0x00 u32 armed: the next ADXT start of file 79 plays the Chameleon line
//   +0x04 u32 the select image's slot, +0x08 its original CLUT address, +0x0C the mode its copy shows (+1, 0 = none)
//   +0x10 u8[2] select screen: L3 held last frame, per cursor; +0x12 u8 cell 7 shows Chameleon
//   +0x20 Player[2], 0x20 bytes each:
//         +0 u8 Chameleon (set by every player load), +1 u8 mode (0-3), +2 u8 L3 held last frame,
//         +3 u8 the mode his texture slots show, +4 u32 where file 6851 was loaded (0: not attached; only a flag, the
//         buffer is freed after the load), +8 u8 picked Chameleon at the select screen
//   +0x80 "CHAMELEON"
constexpr std::uint32_t kArmed = kState + 0x00, kSelectSlot = kState + 0x04, kSelectOrig = kState + 0x08,
                        kSelectShown = kState + 0x0C, kSelectHeld = kState + 0x10, kSelectPicked = kState + 0x12,
                        kPlayers = kState + 0x20,
                        kName = kState + 0x80;
constexpr std::uint32_t kSelectBackup = 0x000A0400u, kSelectCopy = 0x000A0800u;  // 1 KB each
constexpr std::uint32_t kCostumeBackup = 0x000A1000u;  // + player * 0x1000 + page * 0x400
constexpr std::uint32_t kVoice = 0x000B0000u, kVoiceMax = 0x00040000u;

constexpr std::uint8_t kModes = 4;
const char *const kModeNames[kModes] = {"rainbow", "yellow", "blue", "green"};
// cloth colour per mode (chameleon.py MODES); rainbow is gray
constexpr int kCloth[kModes][3] = {{0, 0, 0}, {170, 128, 38}, {39, 101, 124}, {80, 113, 34}};
constexpr int kGold100[3] = {15145, 10526, 2357};  // MKA's sash gold x100 (chameleon.py load_mka)

struct Player {
    std::uint32_t addr;
    Field<std::uint8_t> chameleon{addr + 0};
    Field<std::uint8_t> mode{addr + 1};
    Field<std::uint8_t> held{addr + 2};
    Field<std::uint8_t> shown{addr + 3};
    Field<std::uint32_t> file{addr + 4};
    Field<std::uint8_t> picked{addr + 8};
};
Player player(std::uint32_t slot) { return {kPlayers + slot * 0x20}; }

bool story_or_koop(std::uint32_t mode) { return mode == 0 || mode == 1; }
bool playing_story() { return story_or_koop(rd<std::uint32_t>(rd<std::uint32_t>(kProfile) + 0x88)); }

std::uint64_t fnv(std::uint32_t at, std::uint32_t size) {
    std::uint64_t h = 0xcbf29ce484222325ull;
    for (std::uint32_t i = 0; i < size; ++i) h = (h ^ rd<std::uint8_t>(at + i)) * 0x100000001b3ull;
    return h;
}

// ---- colour (integers only: the result is game memory, the same on every host) ----
int luma1000(int r, int g, int b) { return 299 * r + 587 * g + 114 * b; }
int clamp255(long long v) { return v < 0 ? 0 : v > 255 ? 255 : static_cast<int>(v); }
long long div_round(long long n, long long d) { return (2 * n + d) / (2 * d); }

// chameleon.py green(): hue in (55, 175), saturation > 0.2, value > 0.08
bool green(int r, int g, int b) {
    const int mx = r > g ? (r > b ? r : b) : (g > b ? g : b), mn = r < g ? (r < b ? r : b) : (g < b ? g : b), d = mx - mn;
    if (mx < 21 || 5 * d <= mx) return false;
    if (mx == r) return g >= b && 12 * (g - b) > 11 * d;  // hue 60 (g - b) / d
    if (mx == g) return 12 * (b - r) < 11 * d;            // hue 120 + 60 (b - r) / d
    return false;
}

// paint_select's bronze: hue in [15, 55], saturation > 0.3, value > 0.2
bool bronze(int r, int g, int b) {
    const int mx = r > g ? (r > b ? r : b) : (g > b ? g : b), mn = r < g ? (r < b ? r : b) : (g < b ? g : b), d = mx - mn;
    if (mx <= 51 || 10 * d <= 3 * mx || mx != r || g < b) return false;
    return d <= 4 * (g - b) && 12 * (g - b) <= 11 * d;
}

// tint(): colour * (luma / luma of colour); rainbow: gray at luma x1.15
void cloth(int &r, int &g, int &b, std::uint8_t mode) {
    const long long l = luma1000(r, g, b);
    if (mode == 0) {
        r = g = b = clamp255(div_round(l * 23, 20000));
        return;
    }
    const int *k = kCloth[mode];
    const long long lc = luma1000(k[0], k[1], k[2]);
    r = clamp255(div_round(k[0] * l, lc)), g = clamp255(div_round(k[1] * l, lc)), b = clamp255(div_round(k[2] * l, lc));
}

void gold(int &r, int &g, int &b) {  // tint(gold, 1.25)
    const long long l = luma1000(r, g, b), lg = luma1000(kGold100[0], kGold100[1], kGold100[2]);
    r = clamp255(div_round(kGold100[0] * l * 5, lg * 4));
    g = clamp255(div_round(kGold100[1] * l * 5, lg * 4));
    b = clamp255(div_round(kGold100[2] * l * 5, lg * 4));
}

// 256 RGBA entries (PS2 alpha, kept) from `from` to `to`; select: also bronze -> gold, as paint_select
void recolour(std::uint32_t from, std::uint32_t to, std::uint8_t mode, bool select) {
    for (std::uint32_t i = 0; i < 256; ++i) {
        const std::uint32_t e = rd<std::uint32_t>(from + 4 * i);
        int r = e & 0xFF, g = (e >> 8) & 0xFF, b = (e >> 16) & 0xFF;
        if (green(r, g, b)) cloth(r, g, b, mode);
        else if (select && bronze(r, g, b)) gold(r, g, b);
        wr<std::uint32_t>(to + 4 * i, (e & 0xFF000000u) | static_cast<std::uint32_t>(b) << 16 | static_cast<std::uint32_t>(g) << 8 |
                                          static_cast<std::uint32_t>(r));
    }
}

// a texture slot's CLUT `at` shows page backup `from` in `mode`: entries 1-255 (the game rewrites entry 0) are the
// backup's, the green ones recoloured
bool shows(std::uint32_t from, std::uint32_t at, std::uint8_t mode) {
    for (std::uint32_t i = 1; i < 256; ++i) {
        const std::uint32_t e = rd<std::uint32_t>(from + 4 * i);
        int r = e & 0xFF, g = (e >> 8) & 0xFF, b = (e >> 16) & 0xFF;
        if (green(r, g, b)) cloth(r, g, b, mode);
        if (rd<std::uint32_t>(at + 4 * i) != ((e & 0xFF000000u) | static_cast<std::uint32_t>(b) << 16 |
                                              static_cast<std::uint32_t>(g) << 8 | static_cast<std::uint32_t>(r)))
            return false;
    }
    return true;
}

void copy(std::uint32_t from, std::uint32_t to, std::uint32_t size) {
    for (std::uint32_t i = 0; i < size; i += 4) wr<std::uint32_t>(to + i, rd<std::uint32_t>(from + i));
}

// ---- the costume ----
// a switch: every 8-bit 128x128 texture slot that shows one of the player's pages in the old mode gets the new one
// (the green entries only; pages 3 and 4 have none). Returns the slots repainted.
unsigned paint_costume(std::uint32_t slot) {
    const Player p = player(slot);
    const std::uint32_t slots = rd<std::uint32_t>(rd<std::uint32_t>(kTextureManager) + 0x20);
    unsigned painted = 0;
    for (std::uint32_t k = 0; k < 4; ++k) {
        const std::uint32_t from = kCostumeBackup + slot * 0x1000 + k * 0x400;
        for (std::uint32_t i = 0; i < kSlots; ++i) {
            const std::uint32_t s = slots + i * kSlotSize, clut = rd<std::uint32_t>(s + 0x38);
            if (rd<std::uint16_t>(s + 8) != 128 || rd<std::uint16_t>(s + 0xA) != 128 || rd<std::uint16_t>(s + 0xC) != 0x13 || !clut ||
                !shows(from, clut, p.shown))
                continue;
            for (std::uint32_t j = 1; j < 256; ++j) {
                const std::uint32_t e = rd<std::uint32_t>(from + 4 * j);
                int r = e & 0xFF, g = (e >> 8) & 0xFF, b = (e >> 16) & 0xFF;
                if (!green(r, g, b)) continue;
                cloth(r, g, b, p.mode);
                wr<std::uint32_t>(clut + 4 * j, (e & 0xFF000000u) | static_cast<std::uint32_t>(b) << 16 |
                                                    static_cast<std::uint32_t>(g) << 8 | static_cast<std::uint32_t>(r));
            }
            ++painted;
        }
    }
    p.shown = p.mode;
    wr<std::uint32_t>(kLastTexture, 0xFFFFFFFFu);  // the next character draw uploads its texture set again
    return painted;
}

// file 6851 freshly loaded at `data` for player slot: keep its four CLUTs, then paint them
void attach(std::uint32_t slot, std::uint32_t data) {
    const Player p = player(slot);
    const char *bad = nullptr;
    std::uint32_t clut[4] = {};
    if (rd<std::uint32_t>(data) != 0x20465750u || rd<std::uint32_t>(data + 12) < 5) bad = "not a 5-entry PWF";
    for (std::uint32_t k = 0; !bad && k < 4; ++k) {
        const std::uint32_t p2n = data + rd<std::uint32_t>(data + 0x20 + kPages[k] * 8);
        if (rd<std::uint32_t>(p2n) != 0x004E3250u || rd<std::uint32_t>(p2n + 0x10) != 128 || rd<std::uint32_t>(p2n + 0x14) != 128) bad = "page is not a 128x128 P2N";
        else if (fnv(p2n + 0x80, 0x400) != kPageClut[k]) bad = "page CLUT differs from the disc";
        clut[k] = p2n + 0x80;
    }
    if (bad) {
        std::fprintf(stderr, "[mod] chameleon: player %u textures at %08x left alone: %s\n", slot + 1, data, bad);
        return;
    }
    p.file = data;
    for (std::uint32_t k = 0; k < 4; ++k) {
        copy(clut[k], kCostumeBackup + slot * 0x1000 + k * 0x400, 0x400);
        recolour(kCostumeBackup + slot * 0x1000 + k * 0x400, clut[k], p.mode, false);
    }
    p.shown = p.mode;
    std::fprintf(stderr, "[mod] chameleon: player %u costume 6851 at %08x, mode %s\n", slot + 1, data, kModeNames[p.mode % kModes]);
}

void next_mode(std::uint32_t slot) {
    const Player p = player(slot);
    p.mode = static_cast<std::uint8_t>((p.mode + 1) % kModes);
    chameleon::restance(slot);
    std::fprintf(stderr, "[mod] chameleon: player %u mode %s (frame %llu)\n", slot + 1, kModeNames[p.mode],
                 static_cast<unsigned long long>(frame_count()));
}

// the pad port of player slot 0/1 (Ko-op: the pad that entered it plays player 1)
std::uint32_t port_of(std::uint32_t slot) { return rd<std::uint32_t>(kPortOf + slot * 8); }

// L3 went down this frame on that port (raw held word, as FUN_002C7360 reads it)
bool l3_pressed(std::uint32_t port, std::uint32_t last) {
    std::uint16_t held = 0;
    if (port == 2) held = rd<std::uint16_t>(kPads + 0x10);
    else if (port < 2 && ((rd<std::uint8_t>(kPads + 0x1C) >> port) & 1)) held = rd<std::uint16_t>(kPads + port * kPadSize + 0x24);
    const bool down = held & kL3;
    const bool was = rd<std::uint8_t>(last);
    wr<std::uint8_t>(last, down);
    return down && !was;
}

// ---- the select image ----
void select_image(std::uint32_t select) {
    const std::uint32_t mode = rd<std::uint32_t>(kSelectMode);
    const std::uint32_t slots = rd<std::uint32_t>(rd<std::uint32_t>(kTextureManager) + 0x20);
    std::uint32_t slot = rd<std::uint32_t>(kSelectSlot);
    const std::uint32_t clut = slot ? rd<std::uint32_t>(slot + 0x38) : 0;
    if (clut != kSelectCopy && (clut != rd<std::uint32_t>(kSelectOrig) || fnv(clut, 0x400) != kSelectClut)) {  // find it (again)
        slot = 0;
        for (std::uint32_t i = 0; i < kSlots && !slot; ++i) {
            const std::uint32_t s = slots + i * kSlotSize;
            if (rd<std::uint16_t>(s + 8) == 128 && rd<std::uint16_t>(s + 0xA) == 256 && rd<std::uint16_t>(s + 0xC) == 0x13 &&
                rd<std::uint32_t>(s + 0x38) && fnv(rd<std::uint32_t>(s + 0x38), 0x400) == kSelectClut)
                slot = s;
        }
        if (!slot) return;
        wr<std::uint32_t>(kSelectSlot, slot);
        wr<std::uint32_t>(kSelectOrig, rd<std::uint32_t>(slot + 0x38));
        wr<std::uint32_t>(kSelectShown, 0);
        copy(rd<std::uint32_t>(slot + 0x38), kSelectBackup, 0x400);
    }
    if (!story_or_koop(mode)) {  // Versus: Reptile's own colours
        if (rd<std::uint32_t>(slot + 0x38) == kSelectCopy) wr<std::uint32_t>(slot + 0x38, rd<std::uint32_t>(kSelectOrig));
        return;
    }
    // the player whose cursor is on cell 7 (story: the one cursor at +0x3C; Ko-op: +0x3C, +0x40); L3 there swaps
    // Reptile and Chameleon (Ko-op: cursor k's pad port is at +0x2C + 4k, FUN_00378640, 2 = no pad yet; 0x50BC10 is
    // only filled at the start)
    std::uint32_t on = 0;
    for (std::uint32_t k = mode == 0 ? 1u : 2u; k-- > 0;) {
        if (rd<std::uint32_t>(select + 0x3C + 4 * k) != 7) continue;
        on = k;
        const std::uint32_t port = mode == 0 ? port_of(0) : rd<std::uint32_t>(select + 0x2C + 4 * k);
        if (port < 2 && l3_pressed(port, kSelectHeld + k)) {
            player(k).picked = !player(k).picked;
            std::fprintf(stderr, "[mod] chameleon: player %u picks %s\n", k + 1, player(k).picked ? "Chameleon" : "Reptile");
        }
    }
    wr<std::uint8_t>(kSelectPicked, player(on).picked);
    if (!player(on).picked) {  // Reptile's own image
        if (rd<std::uint32_t>(slot + 0x38) == kSelectCopy) wr<std::uint32_t>(slot + 0x38, rd<std::uint32_t>(kSelectOrig));
        return;
    }
    const std::uint8_t shown = player(on).mode;
    if (rd<std::uint32_t>(slot + 0x38) != kSelectCopy || rd<std::uint32_t>(kSelectShown) != shown + 1u) {
        recolour(kSelectBackup, kSelectCopy, shown, true);
        wr<std::uint32_t>(slot + 0x38, kSelectCopy);
        wr<std::uint32_t>(kSelectShown, shown + 1u);
    }
}

}

bool chameleon::is(std::uint32_t fighter) {
    const std::uint32_t who = rd<std::uint32_t>(fighter + 0x68);
    return (who == 1 || who == 2) && rd<std::uint16_t>(fighter + 0x1E0E) == kReptile && player(who - 1).chameleon;
}

int chameleon::mode(std::uint32_t fighter) {
    return is(fighter) ? player(rd<std::uint32_t>(fighter + 0x68) - 1).mode % kModes : -1;
}

PS2_MOD(001CE6E8, chameleon_costume) {
    const std::uint32_t who = c.r[a0].w[0], group = c.r[a1].w[0] & 0xFFFFu;
    if (who == 1 || who == 2) {
        const bool chameleon = group == kReptile && playing_story() && player(who - 1).picked;
        player(who - 1).chameleon = chameleon;
        if (!chameleon) player(who - 1).file = 0;
        wr<std::uint32_t>(kAltFlag[0], who == 1 && chameleon);
        wr<std::uint32_t>(kAltFlag[1], who == 2 && chameleon);
        if (chameleon) std::fprintf(stderr, "[mod] chameleon: player %u loads as Chameleon\n", who);
    }
    decomp::hook_001CE6E8.enabled = false;
    tail(c, kLoadPlayer);
    decomp::hook_001CE6E8.enabled = true;
}

PS2_MOD(001D0688, chameleon_textures) {
    const std::uint32_t entry = c.r[a0].w[0];
    const std::uint32_t file = rd<std::uint32_t>(entry), data = rd<std::uint32_t>(entry + 8), record = rd<std::uint32_t>(entry + 0x1C);
    const std::uint32_t who = rd<std::uint32_t>(record + 4);
    if (file == kAltTextures && (who == 1 || who == 2) && player(who - 1).chameleon) attach(who - 1, data);
    decomp::hook_001D0688.enabled = false;
    tail(c, kTextureLoaded);
    decomp::hook_001D0688.enabled = true;
}

PS2_MOD(001EAF30, chameleon_switch) {
    const std::uint32_t actor = c.r[a0].w[0];
    if (chameleon::is(actor)) {
        const std::uint32_t who = rd<std::uint32_t>(actor + 0x68);
        const Player p = player(who - 1);
        if (p.file && l3_pressed(port_of(who - 1), p.held.address())) {
            next_mode(who - 1);
            std::fprintf(stderr, "[mod] chameleon: player %u repainted %u texture slots\n", who, paint_costume(who - 1));
        }
    }
    decomp::hook_001EAF30.enabled = false;
    tail(c, kPadRead);
    decomp::hook_001EAF30.enabled = true;
}

PS2_MOD(0013CD80, chameleon_select) {
    select_image(c.r[a0].w[0]);
    decomp::hook_0013CD80.enabled = false;
    tail(c, kSelect);
    decomp::hook_0013CD80.enabled = true;
}

namespace {
// returns "CHAMELEON" (in the mod's memory) from a string getter
void answer_name(Cpu &c) {
    const char name[] = "CHAMELEON";
    for (std::uint32_t i = 0; i < sizeof name; ++i) wr<std::uint8_t>(kName + i, static_cast<std::uint8_t>(name[i]));
    set32(c.r[v0], kName);
}
}

PS2_MOD(001E6EF0, chameleon_name) {
    const std::uint32_t id = c.r[a0].w[0], from = c.r[ra].w[0];
    if (id == kReptileName && from >= kSelectCode && from < kSelectCodeEnd && story_or_koop(rd<std::uint32_t>(kSelectMode)) &&
        rd<std::uint8_t>(kSelectPicked))
        return answer_name(c);
    decomp::hook_001E6EF0.enabled = false;
    tail(c, kGetString);
    decomp::hook_001E6EF0.enabled = true;
}

PS2_MOD(0013B3B0, chameleon_announce) {
    const bool arm = c.r[a0].w[0] == 7 && story_or_koop(rd<std::uint32_t>(kSelectMode)) && rd<std::uint8_t>(kSelectPicked) &&
                     mod_data("vo_name.adx");
    wr<std::uint32_t>(kArmed, arm);
    decomp::hook_0013B3B0.enabled = false;
    tail(c, kAnnounce);
    decomp::hook_0013B3B0.enabled = true;
}

PS2_MOD(0041ABB8, chameleon_voice) {
    if (rd<std::uint32_t>(kArmed)) std::fprintf(stderr, "[mod] chameleon: ADXT start, partition %u file %u\n", c.r[a1].w[0], c.r[a2].w[0]);
    const std::vector<std::uint8_t> *clip = mod_data("vo_name.adx");
    if (rd<std::uint32_t>(kArmed) && c.r[a2].w[0] == kReptileLine && clip && clip->size() <= kVoiceMax) {
        wr<std::uint32_t>(kArmed, 0);
        for (std::uint32_t i = 0; i < clip->size(); ++i) wr<std::uint8_t>(kVoice + i, (*clip)[i]);
        set32(c.r[a1], kVoice);
        set32(c.r[a2], static_cast<std::uint32_t>(clip->size()));
        std::fprintf(stderr, "[mod] chameleon: announcer says Chameleon (%zu bytes)\n", clip->size());
        tail(c, kAdxtStartMem2);
        return;
    }
    decomp::hook_0041ABB8.enabled = false;
    tail(c, kStartAfs);
    decomp::hook_0041ABB8.enabled = true;
}

PS2_MOD(001E6EC8, chameleon_group_name) {
    if ((c.r[a0].w[0] & 0xFFFFu) == kReptile && playing_story() && (player(0).chameleon || player(1).chameleon))
        return answer_name(c);
    decomp::hook_001E6EC8.enabled = false;
    tail(c, kGroupName);
    decomp::hook_001E6EC8.enabled = true;
}
