// Chameleon (Mortal Kombat: Armageddon) in story mode and Ko-op. He is Reptile (group 84) wearing MKA's Chameleon
// model, on Reptile's roster cell 7. Versus keeps Reptile. Every hook below checks the mode first and otherwise leaves
// the game alone.
//
//  - Costume, 0x001CE6E8 (player load: player 1/2, group). The loader takes the alt costume (model 6852, textures 6851)
//    for player 1 when u32 0x4D5E1C is set and for player 2 when 0x4D5E20 is set and 0x4D5E1C is not; nothing in the
//    game writes them (only a mirror match, both clear and the same group, gives player 2 the alt). The mod sets them
//    for the player being loaded: Chameleon (Reptile picked as Chameleon at the select screen) gets the alt, everyone
//    else the disc's choice (a plain Reptile next to Reptile or Chameleon: the mirror alt, from the disc).
//  - Model: a Chameleon player's alt costume files come from PS2_MOD_DATA instead of the disc: cham.pme2 for 6852,
//    cham.pwf for 6851 (D3's converter). The async loader Async_DataLoad (0x00378A30, one entry per call; the entry
//    being loaded at *0x755AC8) asks GetAsyncFileSize (0x00211878, a0 = file id, a1 = entry +0x30) for the size,
//    allocates entry +0x10 = the size (rounded to 2 KB for top-down heaps) unless entry +8 already names a buffer,
//    starts the disc read with 0x002123A0 (a0 = where; it only sets the read state 0x4EF7E0 = 1, the poll 0x002123C8
//    issues it), inflates when entry +0x30 differs from the size, and runs the callback (entry +0x24; 0x379008 defers
//    it to entry +0x28). For a Chameleon entry (file 6852 with the model callback 0x001CE380, record +8 the player;
//    file 6851 with the texture callback 0x001D0688, record +4 the player) the size hook answers the file's size for
//    both (so nothing is inflated) and the read hook copies the file into the new buffer and leaves the read state at
//    0, so the next poll reports it done: the disc is not read at all. The callbacks free the buffer by its allocated
//    size, so a bigger file needs nothing else. No file, a preset buffer or no room in a linear heap: the disc file,
//    said once on stderr. A plain Reptile (Ko-op partner, mirror alt) loads the same file ids from the disc.
//  - Rainbow: the served PWF's page 2 (chammodel.py's RAINBOW: an 8-bit 128x128 page whose CLUT entries 1-224 are 7
//    blocks of 32 hues, hue h showing cham_grad row 4h + phase; 225-255 fixed) is checked and its CLUT kept here at the
//    texture callback; the texture slot that shows it is found by its key (2 << 16 | 6851) and content. Every frame
//    (per-actor pad read, below), in every mode, each block of that slot's CLUT is rewritten as the file's block
//    scrolled by frame * 32 / 2000 entries, the fraction blended linearly between neighbours: MKA's smooth V scroll of
//    cham_grad (0.0005 per frame, 2000 frames per cycle). The next character draw uploads it (kLastTexture reset). The
//    CLUT is in GS CSM1 order (logical index bits 3 and 4 swapped).
//  - Blend (D5): D3's layered files (6 texture pages: the shell on page 5) give the shell and skin materials no linked
//    texture, so the three-pass fighter draw (single-player story) blends them by texel alpha per mesh (fn_239c48). The
//    one-pass draw (Ko-op) takes fn_247bd8's opaque FIX 128 for every mesh of texture mode 2; for his model the mod
//    picks the texel-alpha state instead (decomp::render::g_blend_model, through fn_247bd8's decompiled twin).
//  - Modes: 0 rainbow, 1 yellow (Scorpion's specials), 2 blue (Sub-Zero's), 3 green (Reptile's) only pick his moves
//    (chameleon_moves.cpp); the look is the same in every mode. Switch: L3 (pad bit 0x200, unused by every fighter's
//    command tree), read per actor in 0x001EAF30 (the per-actor pad read) from the raw held word; the remapped words the
//    actor keeps drop L3.
//  - Select screen, 0x0013CD80 (its per-frame input): L1 or L3 on cell 7 swaps Reptile and Chameleon for that cursor's player
//    (Reptile until then; the pick lasts the session). For Chameleon, cell 7's pre-rendered image (front-end file 78
//    entry 4, 128x256 PSMT8, found by its CLUT's hash) shows his own picture: PS2_MOD_DATA/cham_select.p2n
//    (chamselect.py: the converted model in Reptile's fight stance, a P2N like the disc's) is written over the slot's
//    pixels (the old ones kept, put back for Reptile) and its CLUT copied for the slot to point at; the red highlight
//    behind it (entry 5, 128x128: the slot with the image's key, +0x240) gets his silhouette's, cham_glow.p2n, the same
//    way. Without the picture the image gets a recoloured copy of its CLUT (gray cloth, gold trim). 0x001E6EF0
//    (get_string) answers "CHAMELEON" for Reptile's name (text 0x6D0) to the select screen's calls.
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

#include "../render/instance.hpp"

#include "ps2/decomp.hpp"
#include "ps2/mod_data.hpp"
#include "ps2/system.hpp"

#include <algorithm>
#include <cstdio>
#include <cstring>

namespace decomp {
extern ps2::DecompFn hook_00247BD8;  // ChainCharacterBaseState (render/character_gs_state.cpp)
}

namespace {

using namespace ps2;
using namespace ps2::gpr;

// ---- game ----
constexpr std::uint32_t kProfile = 0x004D8B80u;      // Profile *: +0x88 play mode (0 story, 1 Ko-op, 2 Versus)
constexpr std::uint32_t kSelectMode = 0x005CA2ACu;   // the character select's mode, same values
constexpr std::uint32_t kAltFlag[2] = {0x004D5E1Cu, 0x004D5E20u};
constexpr std::uint32_t kReptile = 84;
constexpr std::uint32_t kAltModel = 6852, kAltTextures = 6851;  // Reptile's alt costume (player table 0x4D6988 + 84 * 0x30)
constexpr std::uint32_t kLastTexture = 0x006618ECu;  // RequestCharTexture uploads a model's slots when its set differs
constexpr std::uint32_t kTextureManager = 0x004EFE94u;
constexpr std::uint32_t kSlots = 321, kSlotSize = 0x430;  // TextureSlot: +0 pixels, +8 u16 width, +0xA height, +0xC psm, +0x38 CLUT, +0x240 key
constexpr std::uint32_t kPads = 0x006B4330u, kPadSize = 0x98;  // +0x1C connected bits, port * 0x98 + 0x24 held
constexpr std::uint32_t kPortOf = 0x0050BC10u;        // u32 [slot * 2]: the pad port of player slot 0/1
constexpr std::uint16_t kL3 = 0x0200, kL1 = 0x0004;
constexpr std::uint32_t kReptileName = 0x6D0;
constexpr std::uint32_t kSelectCode = 0x0013B000u, kSelectCodeEnd = 0x0013F000u;  // FUN_0013B050..FUN_0013EF48
constexpr std::uint32_t kAdxtStartMem2 = 0x0041AE28u;
constexpr std::uint32_t kReptileLine = 79;           // AFS file of vo_sk_reptile_1.adx
constexpr std::uint32_t kSelect = 0x0013CD80u, kGetString = 0x001E6EF0u, kAnnounce = 0x0013B3B0u, kStartAfs = 0x0041ABB8u;
constexpr std::uint32_t kLoadPlayer = 0x001CE6E8u, kTextureLoaded = 0x001D0688u, kModelLoaded = 0x001CE380u, kPadRead = 0x001EAF30u;
constexpr std::uint32_t kGroupName = 0x001E6EC8u;
// the async loader: the entry being loaded (0x34 bytes: +0 file id, +4 heap flags (bits 0-6 heap, 0x400 top down),
// +8 buffer, +0xC size, +0x10 allocated, +0x1C load record, +0x24 callback, +0x28 deferred callback, +0x30 unpacked
// size), its calls of GetAsyncFileSize and of the read start (return addresses), the read state
constexpr std::uint32_t kAsyncEntry = 0x00755AC8u, kDeferred = 0x00379008u;
constexpr std::uint32_t kGetSize = 0x00211878u, kSizeReturn = 0x00378AA8u, kReadAt = 0x002123A0u, kReadReturn = 0x00378BE8u;
constexpr std::uint32_t kReadState = 0x004EF7E0u;
constexpr std::uint32_t kHeaps = 0x0064E998u, kHeapStride = 0x68u;  // +8 bottom, +0xC top, +0x10 alignment, +0x1C 0 = linear
constexpr std::uint32_t kRam = 0x02000000u;
// FNV-1a 64 of the 1 KB CLUT as on the disc: file 78 entry 4
constexpr std::uint64_t kSelectClut = 0x0b9a8ce58a836985ull;
constexpr std::uint32_t kRainbowCycle = 2000;  // frames per rainbow cycle (MKA: cham_grad V scroll 0.0005 per frame)
constexpr std::uint32_t kRainbowPage = 2, kHues = 32, kBlocks = 7;  // chammodel.py RAINBOW: CLUT 1 + 32 * block + hue

// ---- the mod's EE memory ----
constexpr std::uint32_t kState = 0x000A0000u;
//   +0x00 u32 armed: the next ADXT start of file 79 plays the Chameleon line
//   +0x04 u32 the select image's slot, +0x08 its original CLUT address, +0x0C 1: its recoloured copy is made, 2: his
//         picture is in (the slot's pixels are in kSelectPixels)
//   +0x18 u32 the highlight's slot while his highlight is in (its pixels are in kGlowPixels), else 0
//   +0x10 u8[2] select screen: L3 held last frame, per cursor; +0x12 u8 cell 7 shows Chameleon
//   +0x14 u32 the async entry whose file the mod serves (between its size and its read)
//   +0x20 Player[2], 0x20 bytes each:
//         +0 u8 Chameleon (set by every player load), +1 u8 mode (0-3), +2 u8 L3 held last frame,
//         +3 u8 served from PS2_MOD_DATA since his last load: 1 model, 2 textures,
//         +4 u32 the texture slot showing his rainbow page (0: not found yet), +8 u8 picked Chameleon at the select
//         screen, +9 u8 rainbow page (0xFF: none), +0xA u8 1: his served model is drawn blended by texel alpha (the
//         layered variant: more than 5 texture pages), +0xB u8 1: said so, +0xC u32 rainbow phase (frames, mod
//         kRainbowCycle), +0x10 u32 that slot's CLUT address, +0x14 u32 build heap + 1 to report on his next frame
//         (0: none), +0x18 u32 and +0x1C u32 the model build's first and end address
//   +0x60 s32[2] each slot's own (Reptile's) stance (chameleon_moves.cpp)
//   +0x80 "CHAMELEON"
constexpr std::uint32_t kArmed = kState + 0x00, kSelectSlot = kState + 0x04, kSelectOrig = kState + 0x08,
                        kSelectShown = kState + 0x0C, kSelectHeld = kState + 0x10, kSelectPicked = kState + 0x12,
                        kServing = kState + 0x14, kSelectGlow = kState + 0x18, kPlayers = kState + 0x20,
                        kName = kState + 0x80;
constexpr std::uint32_t kSelectBackup = 0x000A0400u, kSelectCopy = 0x000A0800u;  // 1 KB each
constexpr std::uint32_t kSelectPixels = 0x000A2000u, kSelectSize = 128 * 256;    // cell 7's own pixels (32 KB)
constexpr std::uint32_t kGlowPixels = 0x000AA000u, kGlowSize = 128 * 128;        // and its highlight's (16 KB)
constexpr std::uint32_t kP2nClut = 0x80, kP2nPixels = 0x480;                     // a P2N: header, CLUT (CSM1 order), pixels
constexpr std::uint32_t kRainbowClut = 0x000A1000u;  // + player * 0x400: the rainbow page's CLUT as in the file
constexpr std::uint32_t kVoice = 0x000B0000u, kVoiceMax = 0x00040000u;

constexpr std::uint8_t kModes = 4;
const char *const kModeNames[kModes] = {"rainbow", "yellow", "blue", "green"};
constexpr int kGold100[3] = {15145, 10526, 2357};  // MKA's sash gold x100 (chameleon.py load_mka)

struct Player {
    std::uint32_t addr;
    Field<std::uint8_t> chameleon{addr + 0};
    Field<std::uint8_t> mode{addr + 1};
    Field<std::uint8_t> held{addr + 2};
    Field<std::uint8_t> served{addr + 3};
    Field<std::uint32_t> rslot{addr + 4};
    Field<std::uint8_t> picked{addr + 8};
    Field<std::uint8_t> rpage{addr + 9};
    Field<std::uint32_t> phase{addr + 0xC};
    Field<std::uint32_t> rclut{addr + 0x10};
    Field<std::uint32_t> heaplog{addr + 0x14};
    Field<std::uint8_t> blend{addr + 0xA};
    Field<std::uint8_t> blend_said{addr + 0xB};
    Field<std::uint32_t> build_lo{addr + 0x18};
    Field<std::uint32_t> build_hi{addr + 0x1C};
};
Player player(std::uint32_t slot) { return {kPlayers + slot * 0x20}; }

bool story_or_koop(std::uint32_t mode) { return mode == 0 || mode == 1; }
bool playing_story() { return story_or_koop(rd<std::uint32_t>(rd<std::uint32_t>(kProfile) + 0x88)); }

std::uint64_t fnv(std::uint32_t at, std::uint32_t size) {
    std::uint64_t h = 0xcbf29ce484222325ull;
    for (std::uint32_t i = 0; i < size; ++i) h = (h ^ rd<std::uint8_t>(at + i)) * 0x100000001b3ull;
    return h;
}

void copy(std::uint32_t from, std::uint32_t to, std::uint32_t size) {
    for (std::uint32_t i = 0; i < size; i += 4) wr<std::uint32_t>(to + i, rd<std::uint32_t>(from + i));
}

// ---- the select image's colours (integers only: the result is game memory, the same on every host) ----
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

void gray(int &r, int &g, int &b) {  // chameleon.py's rainbow cloth: gray at luma x1.15
    r = g = b = clamp255(div_round(static_cast<long long>(luma1000(r, g, b)) * 23, 20000));
}

void gold(int &r, int &g, int &b) {  // tint(gold, 1.25)
    const long long l = luma1000(r, g, b), lg = luma1000(kGold100[0], kGold100[1], kGold100[2]);
    r = clamp255(div_round(kGold100[0] * l * 5, lg * 4));
    g = clamp255(div_round(kGold100[1] * l * 5, lg * 4));
    b = clamp255(div_round(kGold100[2] * l * 5, lg * 4));
}

// 256 RGBA entries (PS2 alpha, kept) from `from` to `to`: green -> gray, bronze -> gold, as paint_select
void recolour(std::uint32_t from, std::uint32_t to) {
    for (std::uint32_t i = 0; i < 256; ++i) {
        const std::uint32_t e = rd<std::uint32_t>(from + 4 * i);
        int r = e & 0xFF, g = (e >> 8) & 0xFF, b = (e >> 16) & 0xFF;
        if (green(r, g, b)) gray(r, g, b);
        else if (bronze(r, g, b)) gold(r, g, b);
        wr<std::uint32_t>(to + 4 * i, (e & 0xFF000000u) | static_cast<std::uint32_t>(b) << 16 | static_cast<std::uint32_t>(g) << 8 |
                                          static_cast<std::uint32_t>(r));
    }
}

// ---- heaps (Memory_AllocBlock 0x20F058) ----
std::uint32_t heap_at(std::uint32_t heap) { return kHeaps + (heap & 0x7F) * kHeapStride; }
bool linear(std::uint32_t heap) { return !rd<std::uint32_t>(heap_at(heap) + 0x1C); }
std::uint32_t heap_free(std::uint32_t heap) { return rd<std::uint32_t>(heap_at(heap) + 0xC) - rd<std::uint32_t>(heap_at(heap) + 8); }

// ---- the served costume files ----
struct Costume {
    const char *name = nullptr;  // in PS2_MOD_DATA
    std::uint32_t who = 0;       // player 1/2
    std::uint8_t bit = 0;        // Player::served
};

// the Chameleon costume file the async entry loads, or none
Costume costume_file(std::uint32_t entry) {
    std::uint32_t callback = rd<std::uint32_t>(entry + 0x24);
    if (callback == kDeferred) callback = rd<std::uint32_t>(entry + 0x28);
    const std::uint32_t id = rd<std::uint32_t>(entry);
    Costume f;
    if (id == kAltModel && callback == kModelLoaded) f = {"cham.pme2", rd<std::uint32_t>(rd<std::uint32_t>(entry + 0x1C) + 8), 1};
    else if (id == kAltTextures && callback == kTextureLoaded) f = {"cham.pwf", rd<std::uint32_t>(rd<std::uint32_t>(entry + 0x1C) + 4), 2};
    if (!f.name || (f.who != 1 && f.who != 2) || !player(f.who - 1).chameleon) return {};
    return f;
}

// the file to serve for that entry, or nullptr (the disc file; says why)
const std::vector<std::uint8_t> *serve(std::uint32_t entry, const Costume &f) {
    static bool warned[3];
    const std::vector<std::uint8_t> *data = mod_data(f.name);
    const std::uint32_t id = rd<std::uint32_t>(entry), flags = rd<std::uint32_t>(entry + 4);
    if (!data || data->size() >= kRam) {
        if (!warned[f.bit]) std::fprintf(stderr, "[mod] chameleon: no PS2_MOD_DATA/%s, player %u loads disc file %u\n", f.name, f.who, id);
        warned[f.bit] = true;
        return nullptr;
    }
    if (rd<std::uint32_t>(entry + 8)) {
        std::fprintf(stderr, "[mod] chameleon: file %u has a preset buffer, player %u loads it from the disc\n", id, f.who);
        return nullptr;
    }
    const std::uint32_t align = rd<std::uint32_t>(heap_at(flags) + 0x10);
    std::uint32_t need = flags & 0x400 ? (static_cast<std::uint32_t>(data->size()) + 0x7FF) & ~0x7FFu : static_cast<std::uint32_t>(data->size());
    if (align > 1) need = (need + align - 1) / align * align;
    if (linear(flags) && heap_free(flags) < need) {
        std::fprintf(stderr, "[mod] chameleon: %s (%zu bytes) does not fit heap %u (%u bytes free), player %u loads disc file %u\n",
                     f.name, data->size(), flags & 0x7F, heap_free(flags), f.who, id);
        return nullptr;
    }
    return data;
}

// ---- the rainbow ----
std::uint32_t csm1(std::uint32_t i) { return (i & 0xE7u) | (i & 0x08u) << 1 | (i & 0x10u) >> 1; }

// file 6851 served at `data` for player slot: keep its rainbow page's CLUT (page kRainbowPage, 8-bit 128x128)
void find_rainbow_page(std::uint32_t slot, std::uint32_t data) {
    const Player p = player(slot);
    const std::uint32_t pages = rd<std::uint32_t>(data + 12);
    const std::uint32_t p2n = data + rd<std::uint32_t>(data + 0x20 + 8 * kRainbowPage);
    if (rd<std::uint32_t>(data) != 0x20465750u || pages <= kRainbowPage || rd<std::uint32_t>(p2n) != 0x004E3250u ||
        rd<std::uint32_t>(p2n + 0x10) != 128 || rd<std::uint32_t>(p2n + 0x14) != 128 || rd<std::uint32_t>(p2n + 0x18) != 8) {
        std::fprintf(stderr, "[mod] chameleon: player %u textures (%u pages): page %u is no 8-bit 128x128 rainbow page\n", slot + 1,
                     pages, kRainbowPage);
        return;
    }
    p.rpage = kRainbowPage;
    copy(p2n + rd<std::uint32_t>(p2n + 0x38), kRainbowClut + slot * 0x400, 0x400);
    std::fprintf(stderr, "[mod] chameleon: player %u rainbow page %u of %u\n", slot + 1, kRainbowPage, pages);
}

// the texture slot showing player slot's rainbow page: key page << 16 | 6851, 8-bit 128x128, CLUT entries 1-255 as in
// the file (the game rewrites entry 0), not the other player's
std::uint32_t find_rainbow_slot(std::uint32_t slot) {
    const Player p = player(slot);
    const std::uint32_t key = static_cast<std::uint32_t>(p.rpage) << 16 | kAltTextures, other = player(slot ^ 1).rslot;
    const std::uint32_t slots = rd<std::uint32_t>(rd<std::uint32_t>(kTextureManager) + 0x20), file = kRainbowClut + slot * 0x400;
    for (std::uint32_t i = 0; i < kSlots; ++i) {
        const std::uint32_t s = slots + i * kSlotSize, clut = rd<std::uint32_t>(s + 0x38);
        if (s == other || rd<std::uint32_t>(s + 0x240) != key || rd<std::uint16_t>(s + 8) != 128 || rd<std::uint16_t>(s + 0xA) != 128 ||
            rd<std::uint16_t>(s + 0xC) != 0x13 || !clut)
            continue;
        std::uint32_t j = 1;
        while (j < 256 && rd<std::uint32_t>(clut + 4 * j) == rd<std::uint32_t>(file + 4 * j)) ++j;
        if (j == 256) return s;
    }
    return 0;
}

// one frame of player slot's rainbow
void rainbow(std::uint32_t slot) {
    const Player p = player(slot);
    if (p.rpage == 0xFF || !(p.served & 2)) return;
    std::uint32_t s = p.rslot;
    if (!s || rd<std::uint32_t>(s + 0x240) != (static_cast<std::uint32_t>(p.rpage) << 16 | kAltTextures) || rd<std::uint32_t>(s + 0x38) != p.rclut) {
        if (!(s = find_rainbow_slot(slot))) return;
        p.rslot = s, p.rclut = rd<std::uint32_t>(s + 0x38), p.phase = 0;
        std::fprintf(stderr, "[mod] chameleon: player %u rainbow slot %u (CLUT %08x), frame %llu\n", slot + 1,
                     (s - rd<std::uint32_t>(rd<std::uint32_t>(kTextureManager) + 0x20)) / kSlotSize, static_cast<std::uint32_t>(p.rclut),
                     static_cast<unsigned long long>(frame_count()));
    }
    const std::uint32_t phase = (p.phase + 1) % kRainbowCycle, at = phase * kHues, step = at / kRainbowCycle,
                        w = at % kRainbowCycle, file = kRainbowClut + slot * 0x400;
    p.phase = phase;
    // logical entry 1 + 32 b + h shows the file's 1 + 32 b + (h + step) mod 32, blended w / 2000 towards the next one
    for (std::uint32_t b = 0; b < kBlocks; ++b)
        for (std::uint32_t h = 0; h < kHues; ++h) {
            const std::uint32_t base = 1 + kHues * b, from = file + 4 * csm1(base + (h + step) % kHues),
                                to = file + 4 * csm1(base + (h + step + 1) % kHues), out = p.rclut + 4 * csm1(base + h);
            for (std::uint32_t k = 0; k < 4; ++k)
                wr<std::uint8_t>(out + k, static_cast<std::uint8_t>((rd<std::uint8_t>(from + k) * (kRainbowCycle - w) +
                                                                     rd<std::uint8_t>(to + k) * w + kRainbowCycle / 2) / kRainbowCycle));
        }
    wr<std::uint32_t>(kLastTexture, 0xFFFFFFFFu);  // the next character draw uploads its texture set again
}

// fn_247bd8 asks (decomp::render::g_blend_model): the model is a Chameleon's layered build, drawn blended by texel alpha.
// The Model object itself lives elsewhere; its segment array (Model +0x20) is in his build.
bool blended_model(std::uint32_t model) {
    const std::uint32_t segments = decomp::render::Model{model}.segments;
    for (std::uint32_t slot = 0; slot < 2; ++slot) {
        const Player p = player(slot);
        if (!p.chameleon || !p.blend || segments < p.build_lo || segments >= p.build_hi) continue;
        if (!p.blend_said) {
            p.blend_said = 1;
            std::fprintf(stderr, "[mod] chameleon: player %u model %08x drawn blended by texel alpha (frame %llu)\n", slot + 1, model,
                         static_cast<unsigned long long>(frame_count()));
        }
        return true;
    }
    return false;
}

// the one-pass draw (Ko-op) gets its base state from fn_247bd8 only (the three-pass draw of single-player story sets
// pass 1 per mesh, fn_239c48): its decompiled twin (exact; ci.sh gates it) carries the blend switch, so turn it on. Host
// state, so it is asserted every frame a layered Chameleon plays (savestates do not hold it).
void arm_blend() {
    decomp::render::g_blend_model = blended_model;
    decomp::hook_00247BD8.enabled = decomp::hook_00247BD8.on = true;
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
bool pressed(std::uint32_t port, std::uint32_t last, std::uint16_t buttons) {
    std::uint16_t held = 0;
    if (port == 2) held = rd<std::uint16_t>(kPads + 0x10);
    else if (port < 2 && ((rd<std::uint8_t>(kPads + 0x1C) >> port) & 1)) held = rd<std::uint16_t>(kPads + port * kPadSize + 0x24);
    const bool down = held & buttons;
    const bool was = rd<std::uint8_t>(last);
    wr<std::uint8_t>(last, down);
    return down && !was;
}

// ---- the select image ----
// a 128 x h P2N from PS2_MOD_DATA (chamselect.py), or nullptr
const std::vector<std::uint8_t> *p2n(const char *name, std::uint32_t h, bool &warned) {
    const std::vector<std::uint8_t> *p = mod_data(name);
    std::uint32_t pw = 0, ph = 0;
    if (p && p->size() == kP2nPixels + 128 * h && std::equal(p->begin(), p->begin() + 4, "P2N")) {
        std::memcpy(&pw, p->data() + 0x10, 4);
        std::memcpy(&ph, p->data() + 0x14, 4);
    }
    if (pw == 128 && ph == h) return p;
    if (!warned) std::fprintf(stderr, "[mod] chameleon: no 128x%u PS2_MOD_DATA/%s\n", h, name);
    warned = true;
    return nullptr;
}

// the file's pixels over the slot's; the slot's own go to `keep` unless `kept` (they are there already)
void put_pixels(std::uint32_t slot, const std::vector<std::uint8_t> &file, std::uint32_t keep, bool kept) {
    const std::uint32_t pixels = rd<std::uint32_t>(slot), size = static_cast<std::uint32_t>(file.size()) - kP2nPixels;
    if (!kept) copy(pixels, keep, size);
    for (std::uint32_t i = 0; i < size; ++i) wr<std::uint8_t>(pixels + i, file[kP2nPixels + i]);
}

// the highlight behind the select image: the other slot with its key, 128x128 PSMT8
std::uint32_t glow_slot(std::uint32_t image) {
    const std::uint32_t slots = rd<std::uint32_t>(rd<std::uint32_t>(kTextureManager) + 0x20), key = rd<std::uint32_t>(image + 0x240);
    for (std::uint32_t i = 0; i < kSlots; ++i) {
        const std::uint32_t s = slots + i * kSlotSize;
        if (s != image && rd<std::uint32_t>(s + 0x240) == key && rd<std::uint16_t>(s + 8) == 128 && rd<std::uint16_t>(s + 0xA) == 128 &&
            rd<std::uint16_t>(s + 0xC) == 0x13 && rd<std::uint32_t>(s))
            return s;
    }
    return 0;
}

// cell 7 as Reptile's own image
void select_reptile(std::uint32_t slot) {
    if (rd<std::uint32_t>(kSelectShown) == 2) copy(kSelectPixels, rd<std::uint32_t>(slot), kSelectSize);
    if (const std::uint32_t glow = rd<std::uint32_t>(kSelectGlow)) copy(kGlowPixels, rd<std::uint32_t>(glow), kGlowSize);
    wr<std::uint32_t>(kSelectGlow, 0);
    if (rd<std::uint32_t>(slot + 0x38) == kSelectCopy) wr<std::uint32_t>(slot + 0x38, rd<std::uint32_t>(kSelectOrig));
    wr<std::uint32_t>(kSelectShown, 0);
}

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
        wr<std::uint32_t>(kSelectGlow, 0);
        copy(rd<std::uint32_t>(slot + 0x38), kSelectBackup, 0x400);
    }
    if (!story_or_koop(mode)) return select_reptile(slot);  // Versus: Reptile's own image
    // the player whose cursor is on cell 7 (story: the one cursor at +0x3C; Ko-op: +0x3C, +0x40); L1 or L3 there swaps
    // Reptile and Chameleon (Ko-op: cursor k's pad port is at +0x2C + 4k, FUN_00378640, 2 = no pad yet; 0x50BC10 is
    // only filled at the start)
    std::uint32_t on = 0;
    for (std::uint32_t k = mode == 0 ? 1u : 2u; k-- > 0;) {
        if (rd<std::uint32_t>(select + 0x3C + 4 * k) != 7) continue;
        on = k;
        const std::uint32_t port = mode == 0 ? port_of(0) : rd<std::uint32_t>(select + 0x2C + 4 * k);
        if (port < 2 && pressed(port, kSelectHeld + k, kL1 | kL3)) {
            player(k).picked = !player(k).picked;
            std::fprintf(stderr, "[mod] chameleon: player %u picks %s\n", k + 1, player(k).picked ? "Chameleon" : "Reptile");
        }
    }
    wr<std::uint8_t>(kSelectPicked, player(on).picked);
    if (!player(on).picked) return select_reptile(slot);
    if (rd<std::uint32_t>(slot + 0x38) != kSelectCopy || !rd<std::uint32_t>(kSelectShown)) {
        static bool warned[2];
        if (const std::vector<std::uint8_t> *pic = p2n("cham_select.p2n", 256, warned[0])) {
            put_pixels(slot, *pic, kSelectPixels, rd<std::uint32_t>(kSelectShown) == 2);
            for (std::uint32_t i = 0; i < 0x400; ++i) wr<std::uint8_t>(kSelectCopy + i, (*pic)[kP2nClut + i]);
            const std::uint32_t glow = rd<std::uint32_t>(kSelectGlow) ? 0 : glow_slot(slot);
            const std::vector<std::uint8_t> *halo = glow ? p2n("cham_glow.p2n", 128, warned[1]) : nullptr;
            if (halo) {
                put_pixels(glow, *halo, kGlowPixels, false);
                wr<std::uint32_t>(kSelectGlow, glow);
            }
            wr<std::uint32_t>(kSelectShown, 2);
        } else {
            recolour(kSelectBackup, kSelectCopy);
            wr<std::uint32_t>(kSelectShown, 1);
        }
        wr<std::uint32_t>(slot + 0x38, kSelectCopy);
    }
}

// the original of a hooked function with its hook off, as a call that comes back here (false: control left); guest
// code run from a hook must not be preempted (a thread switch would unwind the host stack), so the budget is lifted
bool call_original(Cpu &c, DecompFn &hook) {
    const std::int32_t budget = c.budget;
    c.budget = 0x40000000;
    hook.enabled = false;
    const bool back = call(c, hook.addr, Ra{c.r[ra].w[0]});
    hook.enabled = true;
    c.budget = budget;
    return back;
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
        const Player p = player(who - 1);
        const bool chameleon = group == kReptile && playing_story() && p.picked;
        p.chameleon = chameleon;
        p.served = 0, p.rslot = 0, p.rpage = 0xFF, p.heaplog = 0, p.blend = 0, p.blend_said = 0, p.build_lo = 0, p.build_hi = 0;
        wr<std::uint32_t>(kAltFlag[0], who == 1 && chameleon);
        wr<std::uint32_t>(kAltFlag[1], who == 2 && chameleon);
        if (chameleon) std::fprintf(stderr, "[mod] chameleon: player %u loads as Chameleon\n", who);
    }
    decomp::hook_001CE6E8.enabled = false;
    tail(c, kLoadPlayer);
    decomp::hook_001CE6E8.enabled = true;
}

// GetAsyncFileSize from the async loader for a Chameleon costume file: its size from PS2_MOD_DATA, nothing to inflate
PS2_MOD(00211878, chameleon_file_size) {
    const std::uint32_t entry = rd<std::uint32_t>(kAsyncEntry);
    if (c.r[ra].w[0] == kSizeReturn && entry && c.r[a1].w[0] == entry + 0x30) {
        const Costume f = costume_file(entry);
        if (const std::vector<std::uint8_t> *data = f.name ? serve(entry, f) : nullptr) {
            const std::uint32_t size = static_cast<std::uint32_t>(data->size());
            wr<std::uint32_t>(kServing, entry);
            wr<std::uint32_t>(entry + 0x30, size);
            set32(c.r[v0], size);
            return;
        }
    }
    decomp::hook_00211878.enabled = false;
    tail(c, kGetSize);
    decomp::hook_00211878.enabled = true;
}

// the async loader's read start for a served file: the file goes into the buffer now; the read state stays 0, so the
// loader's next poll (0x2123C8) reports the read done
PS2_MOD(002123A0, chameleon_file_read) {
    const std::uint32_t entry = rd<std::uint32_t>(kAsyncEntry), to = c.r[a0].w[0];
    if (c.r[ra].w[0] == kReadReturn && entry && rd<std::uint32_t>(kServing) == entry) {
        wr<std::uint32_t>(kServing, 0);
        const Costume f = costume_file(entry);
        const std::vector<std::uint8_t> *data = f.name ? mod_data(f.name) : nullptr;
        if (!data || !to || to >= kRam || kRam - to < data->size() || rd<std::uint32_t>(kReadState)) {
            std::fprintf(stderr, "[mod] chameleon: cannot place %s at %08x (read state %u)\n", f.name ? f.name : "?", to,
                         rd<std::uint32_t>(kReadState));
            return;
        }
        for (std::uint32_t i = 0; i < data->size(); ++i) wr<std::uint8_t>(to + i, (*data)[i]);
        const Player p = player(f.who - 1);
        p.served |= f.bit;
        const std::uint32_t heap = rd<std::uint32_t>(entry + 4);
        std::fprintf(stderr, "[mod] chameleon: player %u %s (%zu bytes) in place of disc file %u at %08x, %u allocated, heap %u: %u bytes free\n",
                     f.who, f.name, data->size(), rd<std::uint32_t>(entry), to, rd<std::uint32_t>(entry + 0x10), heap & 0x7F,
                     linear(heap) ? heap_free(heap) : 0u);
        return;
    }
    decomp::hook_002123A0.enabled = false;
    tail(c, kReadAt);
    decomp::hook_002123A0.enabled = true;
}

// the model's load callback for a served model: run it, then say how much of the heap the build took and whether it
// reached the file (the callback frees the file's block first and builds the model upwards from the heap's bottom)
PS2_MOD(001CE380, chameleon_model) {
    const std::uint32_t entry = c.r[a0].w[0], record = rd<std::uint32_t>(entry + 0x1C), who = rd<std::uint32_t>(record + 8);
    if (rd<std::uint32_t>(entry) != kAltModel || (who != 1 && who != 2) || !(player(who - 1).served & 1)) {
        decomp::hook_001CE380.enabled = false;
        tail(c, kModelLoaded);
        decomp::hook_001CE380.enabled = true;
        return;
    }
    const std::uint32_t heap = rd<std::uint32_t>(record + 4) & 0x7F, data = rd<std::uint32_t>(entry + 8), size = rd<std::uint32_t>(entry + 0xC);
    const std::uint32_t bottom = rd<std::uint32_t>(heap_at(heap) + 8), top = rd<std::uint32_t>(heap_at(heap) + 0xC);
    if (!call_original(c, decomp::hook_001CE380)) return;
    const std::uint32_t built = rd<std::uint32_t>(heap_at(heap) + 8);
    std::fprintf(stderr, "[mod] chameleon: player %u model built in heap %u: %08x-%08x (%u bytes), %u bytes free (was %u); the file was at "
                 "%08x-%08x: %s by %d bytes\n", who, heap, bottom, built, built - bottom, heap_free(heap), top - bottom, data, data + size,
                 built <= data ? "clear" : "OVERLAPPED", static_cast<int>(data - built));
    const Player p = player(who - 1);
    p.heaplog = heap + 1, p.build_lo = bottom, p.build_hi = built;
    if (p.blend) arm_blend();
}

PS2_MOD(001D0688, chameleon_textures) {
    const std::uint32_t entry = c.r[a0].w[0];
    const std::uint32_t file = rd<std::uint32_t>(entry), data = rd<std::uint32_t>(entry + 8), record = rd<std::uint32_t>(entry + 0x1C);
    const std::uint32_t who = rd<std::uint32_t>(record + 4);
    if (file == kAltTextures && (who == 1 || who == 2) && player(who - 1).chameleon) {
        const Player p = player(who - 1);
        p.rslot = 0, p.rpage = 0xFF;
        if (p.served & 2) find_rainbow_page(who - 1, data);
        // ponytail: the layered variant is told apart by its 6th page (the shell); a flag in the files if that changes
        p.blend = (p.served & 2) && rd<std::uint32_t>(data + 12) > 5;
    }
    decomp::hook_001D0688.enabled = false;
    tail(c, kTextureLoaded);
    decomp::hook_001D0688.enabled = true;
}

PS2_MOD(001EAF30, chameleon_switch) {
    const std::uint32_t actor = c.r[a0].w[0];
    if (chameleon::is(actor)) {
        const std::uint32_t who = rd<std::uint32_t>(actor + 0x68);
        const Player p = player(who - 1);
        if (pressed(port_of(who - 1), p.held.address(), kL3)) next_mode(who - 1);
        rainbow(who - 1);
        if (p.blend) arm_blend();
        if (const std::uint32_t heap = p.heaplog) {
            p.heaplog = 0;
            std::fprintf(stderr, "[mod] chameleon: player %u in play (frame %llu): heap %u has %u bytes free\n", who,
                         static_cast<unsigned long long>(frame_count()), heap - 1, heap_free(heap - 1));
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
    if (!chameleon::select_hint(c)) return;
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
