// Versus combo extensions for the Versus-only fighters (Reptile, Baraka, Kitana, Johnny Cage), whose move data has no
// Experience-bought combo extensions of its own. mksm/tools/scripts/vsfallback.py ports the story fighters'
// extensions (command-tree nodes gated C0-C5, from Kung Lao, Liu Kang, Sub-Zero, Scorpion) onto them: each string is
// anchored on the target's own string with the same inputs, and each new hit plays the target state with the donor's
// clip where the target has it (vscombos.py), else the target's own move for that button and direction that fits
// best (vsfallback.py). The result is versus_combos.inc. No new states, clips or cancel windows: only command-tree
// nodes (combo links run through the command queue, FUN_0016B138, not through ERG.DAT cancel windows).
// Reptile's table also carries the story boss's attacks (vsboss.py): new special nodes in front of his list 0 (an added
// list-0 marker right before them: the conversion below sets a list's head behind each of its markers, the last one
// winning), and his counter retargeted to the boss's (links on field 0x00); versus_boss_moves.cpp makes those states
// playable on him.
//
// The hook: int fn_2f8640(int group, S56 *nodes) at 0x002F8640, called by the four ERG.DT2 loaders (0x00320328,
// 0x00320740, 0x003209A0, 0x00320E58) right after they copied the fighter's command tree (DT2 section 2, 56-byte
// nodes, -999 terminated) to a heap block that is exactly the tree's size (DAT_00624280 = that block). It clears the
// command queue 0x62EC78, turns each node's child/sibling indices into pointers (index * 0x38 + DAT_00624280), stores
// the 27 command-list heads at 0x5CCF88 + group * 0x6C and returns list 0's head.
//
// For a ported fighter the mod first grows the block in place: the loader just took it from a linear heap
// (FUN_0020F058), so that heap's free space starts right behind it; the mod allocates the extra nodes there with the
// game's allocator, writes them over the terminator (indices continue the disc ones), moves the terminator behind
// them and links them in. Then the recompiled conversion runs over the longer tree. Anything unexpected (another node
// count, a heap that is not linear or has no room) leaves the tree as it is.
#include "ps2/decomp.hpp"

#include <cstdio>

namespace {

using namespace ps2;
using namespace ps2::gpr;

struct Link {
    std::uint16_t node;  // disc node to patch
    std::uint16_t field; // 0x20 first child / 0x24 next sibling / 0x00 target state (s16)
    std::uint32_t value; // index of an added node (0: none), or the new target state
    std::int16_t state;  // the disc node's target state, checked first
};

struct Port {
    const char *name;
    std::uint32_t group;
    std::uint32_t disc_nodes; // with the terminator
    const std::uint8_t *nodes;
    std::uint32_t count;
    const Link *links;
    std::uint32_t link_count;
};

#include "versus_combos.inc"

constexpr std::uint32_t kSelf = 0x002F8640u;
constexpr std::uint32_t kAlloc = 0x0020F058u;     // (heap, size, best fit, file, line): FUN_0020F058
constexpr std::uint32_t kHeaps = 0x0064E998u;     // 128 heaps of 0x68 bytes: +8 free bottom, +0x10 alignment,
constexpr std::uint32_t kHeapStride = 0x68u;      //   +0x1C free-list mode (0 = linear)
constexpr std::uint32_t kHeapUsed = 0x00651D98u;  // u8[128]
constexpr std::uint32_t kNode = 0x38u;
constexpr std::int16_t kEnd = -999;

// the linear heap whose free space starts at `end` rounded up to its alignment, or -1
int heap_behind(std::uint32_t end) {
    for (std::uint32_t k = 0; k < 128; ++k) {
        const std::uint32_t h = kHeaps + k * kHeapStride;
        const std::uint32_t align = rd<std::uint32_t>(h + 0x10);
        if (!rd<std::uint8_t>(kHeapUsed + k) || rd<std::uint32_t>(h + 0x1C) || !align || (align & (align - 1))) continue;
        if (rd<std::uint32_t>(h + 8) == ((end + align - 1) & ~(align - 1))) return static_cast<int>(k);
    }
    return -1;
}

// false: control left (the caller must return at once). A port that does not fit is skipped, not an error.
bool graft(Cpu &c, const Port &p, std::uint32_t buf) {
    std::uint32_t n = 1;
    while (rd<std::int16_t>(buf + (n - 1) * kNode) != kEnd) ++n;
    const char *skip = nullptr;
    int heap = -1;
    if (n != p.disc_nodes) skip = "node count differs from the disc";
    for (std::uint32_t i = 0; !skip && i < p.link_count; ++i)
        if (rd<std::int16_t>(buf + p.links[i].node * kNode) != p.links[i].state) skip = "tree differs from the disc";
    if (!skip && (heap = heap_behind(buf + n * kNode)) < 0) skip = "block is not at the end of a linear heap";
    if (!skip) {
        const std::uint32_t free = rd<std::uint32_t>(kHeaps + heap * kHeapStride + 8);
        c.r[a0].d[0] = static_cast<std::uint32_t>(heap);
        c.r[a1].d[0] = p.count * kNode;
        c.r[a2].d[0] = 1;
        c.r[a3].d[0] = 0x0058D290u; // the loaders' file and line arguments
        c.r[t0].d[0] = 0x0058D2C8u;
        c.r[t1].d[0] = 0xF1u;
        if (!call(c, kAlloc)) return false;
        if (c.r[v0].w[0] != free) skip = "no room in the heap"; // ponytail: a block placed elsewhere stays allocated
    }
    if (skip) {
        std::fprintf(stderr, "[mod] versus_combos: %s not extended: %s\n", p.name, skip);
        return true;
    }
    std::uint8_t end[kNode];
    for (std::uint32_t b = 0; b < kNode; ++b) end[b] = rd<std::uint8_t>(buf + (n - 1) * kNode + b);
    for (std::uint32_t b = 0; b < p.count * kNode; ++b) wr<std::uint8_t>(buf + (n - 1) * kNode + b, p.nodes[b]);
    for (std::uint32_t b = 0; b < kNode; ++b) wr<std::uint8_t>(buf + (n - 1 + p.count) * kNode + b, end[b]);
    for (std::uint32_t i = 0; i < p.link_count; ++i) {
        const std::uint32_t at = buf + p.links[i].node * kNode + p.links[i].field;
        if (p.links[i].field) wr<std::uint32_t>(at, p.links[i].value);
        else wr<std::int16_t>(at, static_cast<std::int16_t>(p.links[i].value));
    }
    const std::uint32_t h = kHeaps + heap * kHeapStride;
    std::fprintf(stderr, "[mod] versus_combos: %s +%u command nodes (heap %d, %u bytes left)\n", p.name, p.count, heap,
                 rd<std::uint32_t>(h + 0xC) - rd<std::uint32_t>(h + 8));
    return true;
}

}

PS2_MOD(002F8640, versus_combos) {
    const std::uint32_t group = c.r[a0].w[0], buf = c.r[a1].w[0];
    const Reg128 r4 = c.r[a0], r5 = c.r[a1], r6 = c.r[a2], r7 = c.r[a3], r8 = c.r[t0], r9 = c.r[t1];
    for (const Port &p : kPorts)
        if (p.group == group && !graft(c, p, buf)) return;
    c.r[a0] = r4, c.r[a1] = r5, c.r[a2] = r6, c.r[a3] = r7, c.r[t0] = r8, c.r[t1] = r9;
    // the conversion itself: the recompiled function, with this hook off for the one call
    decomp::hook_002F8640.enabled = false;
    tail(c, kSelf);
    decomp::hook_002F8640.enabled = true;
}
