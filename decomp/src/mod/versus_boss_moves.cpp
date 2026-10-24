// Foreign move states for a fighter: another group's clips, state records and frame events loaded next to the
// fighter's own, so that set-state to the donor's GLOBAL state ids works on him. A port is data: the target group,
// the donor's files and first global state, and the donor states to load. The command nodes that reach those states
// are not here (versus_combos.cpp grafts them).
// Port 0: Reptile (group 84, any mode: the Versus and the story/NPC load paths, FUN_001CE6E8 and FUN_001D1068, both
// register the callback hooked here) gets 9 of the story boss Reptile's states (group 59).
//
// How a state plays (mksm/tools/scripts/fstates.py): global state s -> anim descriptor DAT_006C8A28[s] (u32[3010]),
// descriptor d = 8 bytes in the state DB at 0x6B3000 (+4: table of {u8 format, u8 channels, u16 frames, u32 clip + 6});
// record = DB +8 table [s] (0x70 bytes, ERG.DAT section 0), frame events = DB +0xC table [s] (16-byte events, ERG.DT2
// section 0, the list ends at event 0). A fighter's own clips take descriptors slot * 200 + k (k < his clip count); the
// rest of the 200 are free, and the donor clips go there.
//
// Hooks:
// - 0x001D11F8, the fighter anim-bank (nim.rtt) completion callback (a0 = request: +4 heap id in bits 0-6, +28 load
//   record: +0 slot, +8 player index). After it ran: for a port's target group, read the donor's nim.rtt, ERG.DAT and
//   ERG.DT2 from the disc (GAMEDATA.WAD), inflate them with the game's own inflater (fn_467670, in place as its loader
//   0x00211B38 does) into one block of the fighter's heap, fill the descriptors with FUN_002AF908 + FUN_002B1960 (what
//   the bank parser FUN_002AE290 does per clip), patch the records (+0x11 group = target, cancel windows +0x2C/+0x2E =
//   none: their indices point into the donor's window table; partner +0x2A kept only if loaded too) and cut each event
//   list at the clip's last frame (story t10_sung lists 3079 events up to frame 670 on a 70-frame clip).
// - 0x002ADAC0 resets DAT_006C8A28 to identity for groups 0-90 (round start, loads): the map is written again after it.
// - 0x00303340, the set-state core (a0 = fighter, a1 = state): entering a donor state writes map, record and event
//   pointers again first (0x321998 clears every event pointer at a load), then:
//   teleport state: the fighter is moved to the far side of the opponent, `gap` units past him, before it plays
//   (the story clip plays in place: the boss AI places him itself). Leaving the fade states for another state calls
//   the event-530 handler (0x001ABCB0: alpha percent | frames << 15) with 100% over 1 frame, so a teleport cut short
//   (hit, round end) never leaves him invisible: the alpha it sets lasts across rounds.
// Anything unexpected (no room in the heap or the clip slots, a file that does not read or inflate) loads nothing and
// says so on stderr.
#include "ps2/decomp.hpp"
#include "ps2/disc.hpp"

#include <cmath>
#include <cstdio>
#include <cstring>
#include <vector>

namespace {

using namespace ps2;
using namespace ps2::gpr;

struct Port {
    const char *name;
    std::int16_t target_group;  // fighter +0x1E0E
    std::uint32_t dt2;          // donor ERG.DT2 file id; ERG.DAT = +1, nim.rtt = +2
    std::int32_t donor_first;   // donor group's first global state (its clip / record / event list 0)
    const std::uint8_t *locals; // donor states to load, local indices
    std::uint32_t count;
    std::int32_t teleport;      // state that moves the fighter behind the opponent on entry, or -1
    float gap;
    const std::int32_t *fade;   // leaving these for another state restores full opacity
    std::uint32_t fade_count;
    const std::int16_t *strip;  // frame event ids turned into a no-op
    std::uint32_t strip_count;
};

// the states his command tree reaches (vsboss.py): d30_cntr 1578, g10_st_q 1580, g20_st_q 1581, s11_sp_s 1584,
// s30_sp_n 1586, s40_sp_n 1587, s50_sp_n 1588, t10_sung 1592, t20_sung 1593 (none has a partner state)
constexpr std::uint8_t kBossMoves[] = {14, 16, 17, 20, 22, 23, 24, 28, 29};
constexpr std::int32_t kTeleportFade[] = {1593, 1592}; // t20_sung vanish, t10_sung reappear

constexpr Port kPorts[] = {
    {"Versus Reptile <- story boss Reptile", 84, 6512, 1564, kBossMoves, std::size(kBossMoves), 1592, 450.0f,
     kTeleportFade, std::size(kTeleportFade), nullptr, 0},
};

constexpr std::uint32_t kAlloc = 0x0020F058u;      // (heap, size, best fit, file, line): FUN_0020F058
constexpr std::uint32_t kHeaps = 0x0064E998u, kHeapStride = 0x68u; // +8 free bottom, +0xC end, +0x1C 0 = linear
constexpr std::uint32_t kInflate = 0x00467670u;    // (dst, u32 *dst_len, src, u32 *src_len, u32 *0): != 0 on success
constexpr std::uint32_t kScratchpad = 0x70000000u, kScratchSize = 0x4000u; // the inflater's work area
constexpr std::uint32_t kSetDesc = 0x002AF908u;    // (desc, format, channels, frames, clip + 6)
constexpr std::uint32_t kSetName = 0x002B1960u;    // (db, desc, name)
constexpr std::uint32_t kFade = 0x001ABCB0u;       // frame-event handler (fighter, event, param)
constexpr std::uint32_t kDb = 0x006B3000u, kMap = 0x006C8A28u;
constexpr std::uint32_t kFighters = 0x005E6B40u, kFighterSize = 0x33C0u;
constexpr std::int16_t kNoEvent = 1000;            // an id no listener handles

// What a load leaves, kept in guest memory so that save states and lockstep peers carry it: a header at the start of
// the block, {"vbm", fighter, first descriptor, its clip pointer, port, record[count], events[count]}. The name-table
// entry (DB +0x10) of the first donor descriptor points at it ("vbm" is a valid name string); a later load into that
// descriptor replaces the entry or the clip pointer, which ends it.
constexpr std::uint32_t kMagic = 0x006D6276u; // "vbm\0"
constexpr std::uint32_t kHeader = 32;

std::int16_t group_of(std::uint32_t fighter) { return rd<std::int16_t>(fighter + 0x1E0E); }

const Port *port_of(std::uint32_t h) { return &kPorts[rd<std::uint32_t>(h + 16)]; }

// the fighter's header, or 0
std::uint32_t find(std::uint32_t fighter) {
    bool target = false;
    for (const Port &p : kPorts) target |= p.target_group == group_of(fighter);
    if (!target) return 0;
    const std::uint32_t n = rd<std::uint32_t>(kDb), names = rd<std::uint32_t>(kDb + 0x10), descs = rd<std::uint32_t>(kDb + 4);
    for (std::uint32_t d = 0; d < n; ++d) {
        const std::uint32_t h = rd<std::uint32_t>(names + 4 * d);
        if (h && rd<std::uint32_t>(h) == kMagic && rd<std::uint32_t>(h + 4) == fighter && rd<std::uint32_t>(h + 8) == d &&
            rd<std::uint32_t>(descs + d * 8 + 4) == rd<std::uint32_t>(h + 12) && rd<std::uint32_t>(h + 16) < std::size(kPorts) &&
            group_of(fighter) == port_of(h)->target_group)
            return h;
    }
    return 0;
}

void apply(std::uint32_t h) {
    const Port &p = *port_of(h);
    const std::uint32_t recs = rd<std::uint32_t>(kDb + 8), evs = rd<std::uint32_t>(kDb + 0xC), desc = rd<std::uint32_t>(h + 8);
    for (std::uint32_t i = 0; i < p.count; ++i) {
        const std::uint32_t s = p.donor_first + p.locals[i];
        wr<std::uint32_t>(kMap + s * 4, desc + i);
        wr<std::uint32_t>(recs + s * 4, rd<std::uint32_t>(h + kHeader + 4 * i));
        wr<std::uint32_t>(evs + s * 4, rd<std::uint32_t>(h + kHeader + 4 * (p.count + i)));
    }
}

// the fighters whose loads are still there: P1 and P2 of a Versus match, any fighter of the pool otherwise
// ponytail: the 2ADAC0 re-map checks the first 8 pool entries (0x5E3780 + k * 0x33C0 is the pool, players at k 1, 2)
constexpr std::uint32_t kPool = kFighters - kFighterSize, kPoolScan = 8;

bool loaded_state(const Port &p, std::int32_t s) {
    for (std::uint32_t i = 0; i < p.count; ++i)
        if (p.donor_first + p.locals[i] == s) return true;
    return false;
}

bool in(const std::int32_t *list, std::uint32_t n, std::int32_t s) {
    for (std::uint32_t i = 0; i < n; ++i)
        if (list[i] == s) return true;
    return false;
}

// GAMEDATA.WAD file `id` as stored on the disc (EWDF-wrapped or raw; mksm/tools/scripts/wad.py), empty on any error
std::vector<std::uint8_t> wad_raw(std::uint32_t id) {
    constexpr std::uint32_t kFirstId = 30, kVolume = 0x19000000u;
    static const char *const kVolumes[] = {"GAMEDATA.WAD", "GAMEDATA.WAE", "GAMEDATA.WAF", "GAMEDATA.WAG",
                                           "GAMEDATA.WAH", "GAMEDATA.WAI", "GAMEDATA.WAJ"};
    const auto read = [](const disc::Entry &e, std::uint32_t off, std::uint32_t size, std::vector<std::uint8_t> &out) {
        const std::uint32_t first = off / disc::kSector, last = (off + size + disc::kSector - 1) / disc::kSector;
        std::vector<std::uint8_t> buf((last - first) * disc::kSector);
        if (off + size > e.size || !disc::read(e.sector + first, last - first, buf.data())) return false;
        out.assign(buf.begin() + (off - first * disc::kSector), buf.begin() + (off - first * disc::kSector) + size);
        return true;
    };
    std::vector<std::uint8_t> head, toc, out;
    const auto wad = disc::find(kVolumes[0]);
    if (!wad || !read(*wad, 0, 0x20, head) || std::memcmp(head.data(), "PWF ", 4)) return {};
    std::uint32_t count, sector;
    std::memcpy(&count, &head[12], 4);
    std::memcpy(&sector, &head[20], 4);
    if (id < kFirstId || id - kFirstId >= count || !read(*wad, 0x20 + (id - kFirstId) * 8, 8, toc)) return {};
    std::uint64_t e, off;
    std::uint32_t size;
    std::memcpy(&e, toc.data(), 8);
    if (e >> 63) off = (e & 0x1FFFFFu) * sector, size = static_cast<std::uint32_t>(e >> 22) & 0x3FFFFFu;
    else off = static_cast<std::uint32_t>(e), size = static_cast<std::uint32_t>(e >> 32);
    if (off / kVolume >= std::size(kVolumes)) return {};
    const auto v = disc::find(kVolumes[off / kVolume]);
    if (!v || !read(*v, static_cast<std::uint32_t>(off % kVolume), size, out)) return {};
    return out;
}

std::uint32_t unpacked_size(const std::vector<std::uint8_t> &raw) {
    std::uint32_t u = static_cast<std::uint32_t>(raw.size());
    if (raw.size() >= 16 && !std::memcmp(raw.data(), "EWDF", 4)) std::memcpy(&u, &raw[4], 4);
    return u;
}

// Guest code called from a hook must not be preempted: a thread switch would unwind the host stack and later return
// into the call()'s sentinel ra. The inflater alone runs for several frames' budget, so the budget is lifted around
// the calls and put back after (a mod, not state-exact).
struct NoPreempt {
    Cpu &c;
    std::int32_t budget;
    explicit NoPreempt(Cpu &cpu) : c(cpu), budget(cpu.budget) { c.budget = 0x40000000; }
    ~NoPreempt() { c.budget = budget; }
};

constexpr std::uint32_t round64(std::uint32_t v) { return (v + 63) & ~63u; }
// bytes a file takes inflated in place: the packed copy sits at round64(unpacked - packed) and may end past unpacked
std::uint32_t region(const std::vector<std::uint8_t> &raw) { return round64(unpacked_size(raw)) + 64; }

// file -> dst as the loader 0x00211B38 does it. false: control left (inflated = untouched) or it failed.
bool unpack(Cpu &c, const std::vector<std::uint8_t> &raw, std::uint32_t dst, bool &ok) {
    const std::uint32_t u = unpacked_size(raw), p = static_cast<std::uint32_t>(raw.size());
    const bool wrapped = p >= 16 && !std::memcmp(raw.data(), "EWDF", 4);
    const std::uint32_t src = wrapped ? dst + round64(u > p ? u - p : 0) : dst;
    for (std::uint32_t i = 0; i < p; ++i) wr<std::uint8_t>(src + i, raw[i]);
    ok = true;
    if (!wrapped) return true;
    const std::uint32_t sp0 = c.r[sp].w[0], args = sp0 - 16;
    wr<std::uint32_t>(args, u), wr<std::uint32_t>(args + 4, p), wr<std::uint32_t>(args + 8, 0);
    c.r[sp].d[0] = args;
    c.r[a0].d[0] = dst, c.r[a1].d[0] = args, c.r[a2].d[0] = src, c.r[a3].d[0] = args + 4, c.r[t0].d[0] = args + 8;
    if (!call(c, kInflate)) return false;
    c.r[sp].d[0] = sp0;
    ok = c.r[v0].w[0] != 0 && rd<std::uint32_t>(args) == u;
    return true;
}

// section k of an ERG.DAT / ERG.DT2 container at `f` (u32 n, u32 off[n + 1], data)
std::uint32_t section(std::uint32_t f, std::uint32_t k) {
    return f + 4 + 4 * (rd<std::uint32_t>(f) + 1) + rd<std::uint32_t>(f + 4 + 4 * k);
}

// false: control left
bool load(Cpu &c, const Port &p, std::uint32_t fighter, std::uint32_t slot, std::uint32_t heap, std::uint32_t own) {
    const char *skip = nullptr;
    const std::vector<std::uint8_t> dt2 = wad_raw(p.dt2), dat = wad_raw(p.dt2 + 1), rtt = wad_raw(p.dt2 + 2);
    const std::uint32_t head = round64(kHeader + 8 * p.count);
    const std::uint32_t r_rtt = region(rtt), r_dat = region(dat), r_dt2 = region(dt2), size = head + r_rtt + r_dat + r_dt2;
    const std::uint32_t h = kHeaps + heap * kHeapStride;
    std::uint32_t block = 0;
    if (dt2.empty() || dat.empty() || rtt.empty()) skip = "donor files do not read from the disc";
    else if (own + p.count > 200) skip = "no free clip slots";
    else if (!rd<std::uint32_t>(h + 0x1C) && rd<std::uint32_t>(h + 0xC) - rd<std::uint32_t>(h + 8) < size + 256)
        skip = "no room in the heap";
    if (!skip) {
        c.r[a0].d[0] = heap, c.r[a1].d[0] = size, c.r[a2].d[0] = 1;
        c.r[a3].d[0] = 0x0058D290u, c.r[t0].d[0] = 0x0058D2C8u, c.r[t1].d[0] = 0xF1u; // the DT2 loaders' file/line
        if (!call(c, kAlloc)) return false;
        if (!(block = c.r[v0].w[0])) skip = "allocation failed";
    }
    const std::uint32_t a_rtt = block + head, a_dat = a_rtt + r_rtt, a_dt2 = a_dat + r_dat;
    if (!skip) {
        std::vector<std::uint32_t> pad(kScratchSize / 4);
        for (std::uint32_t i = 0; i < pad.size(); ++i) pad[i] = rd<std::uint32_t>(kScratchpad + i * 4);
        bool ok1 = false, ok2 = false, ok3 = false;
        if (!unpack(c, rtt, a_rtt, ok1) || !unpack(c, dat, a_dat, ok2) || !unpack(c, dt2, a_dt2, ok3)) return false;
        for (std::uint32_t i = 0; i < pad.size(); ++i) wr<std::uint32_t>(kScratchpad + i * 4, pad[i]);
        if (!ok1 || !ok2 || !ok3) skip = "inflate failed"; // ponytail: the block stays allocated until the heap resets
    }
    if (skip) {
        std::fprintf(stderr, "[mod] versus_boss_moves: %s not loaded: %s\n", p.name, skip);
        return true;
    }
    const std::uint32_t desc = slot * 200 + own;
    const std::uint32_t clips = a_rtt + rd<std::uint32_t>(a_rtt), names = a_rtt + rd<std::uint32_t>(a_rtt + 4);
    const std::uint32_t recs = section(a_dat, 0), events = section(a_dt2, 0), starts = section(a_dt2, 1);
    for (std::uint32_t i = 0; i < p.count; ++i) {
        const std::uint32_t k = p.locals[i], clip = clips + rd<std::uint32_t>(clips + 4 * k);
        const std::int16_t frames = rd<std::int16_t>(clip + 2);
        c.r[a0].d[0] = desc + i;
        c.r[a1].sd[0] = rd<std::int16_t>(clip), c.r[a2].sd[0] = rd<std::int16_t>(clip + 4), c.r[a3].sd[0] = frames;
        c.r[t0].d[0] = clip + 6;
        if (!call(c, kSetDesc)) return false;
        c.r[a0].d[0] = kDb, c.r[a1].d[0] = desc + i, c.r[a2].d[0] = i ? names + rd<std::uint32_t>(names + 4 * k) : block;
        if (!call(c, kSetName)) return false;
        const std::uint32_t rec = recs + k * 0x70;
        wr<std::uint8_t>(rec + 0x11, static_cast<std::uint8_t>(p.target_group));
        wr<std::uint32_t>(rec + 0x2C, 0);
        if (!loaded_state(p, rd<std::int16_t>(rec + 0x2A))) wr<std::int16_t>(rec + 0x2A, 0);
        // events past the clip's last frame never fire on a fighter (the boss AI holds the state); drop them
        const std::uint32_t ev = events + 16 * rd<std::uint32_t>(starts + 4 * k);
        std::uint32_t in_at = ev, out_at = ev;
        for (;; in_at += 16) {
            const std::int16_t f = rd<std::int16_t>(in_at), id = rd<std::int16_t>(in_at + 2);
            if (id && f > frames) continue;
            for (std::uint32_t b = 0; b < 16; b += 4) wr<std::uint32_t>(out_at + b, rd<std::uint32_t>(in_at + b));
            for (std::uint32_t s = 0; s < p.strip_count; ++s)
                if (id == p.strip[s]) wr<std::int16_t>(out_at + 2, kNoEvent);
            out_at += 16;
            if (!id) break;
        }
        wr<std::uint32_t>(block + kHeader + 4 * i, rec);
        wr<std::uint32_t>(block + kHeader + 4 * (p.count + i), ev);
    }
    wr<std::uint32_t>(block, kMagic), wr<std::uint32_t>(block + 4, fighter), wr<std::uint32_t>(block + 8, desc);
    wr<std::uint32_t>(block + 12, rd<std::uint32_t>(rd<std::uint32_t>(kDb + 4) + desc * 8 + 4));
    wr<std::uint32_t>(block + 16, static_cast<std::uint32_t>(&p - kPorts));
    apply(block);
    std::fprintf(stderr, "[mod] versus_boss_moves: %s: %u states, descriptors %u-%u, %u bytes at %08X (heap %u, %u left)\n",
                 p.name, p.count, desc, desc + p.count - 1, size, block, heap, rd<std::uint32_t>(h + 0xC) - rd<std::uint32_t>(h + 8));
    return true;
}

void teleport(const Port &p, std::uint32_t fighter) {
    const std::uint32_t i = (fighter - kFighters) / kFighterSize;
    if (i > 1) return;
    const std::uint32_t opp = kFighters + (1 - i) * kFighterSize;
    const float x = rd<float>(fighter + 0x80), z = rd<float>(fighter + 0x88);
    const float ox = rd<float>(opp + 0x80), oz = rd<float>(opp + 0x88);
    float dx = ox - x, dz = oz - z;
    const float n = std::sqrt(dx * dx + dz * dz);
    if (n < 1.0f) dx = 1.0f, dz = 0.0f;
    else dx /= n, dz /= n;
    wr<float>(fighter + 0x80, ox + dx * p.gap);
    wr<float>(fighter + 0x88, oz + dz * p.gap);
}

}

PS2_MOD(001D11F8, versus_boss_moves_load) {
    const std::uint32_t req = c.r[a0].w[0];
    decomp::hook_001D11F8.enabled = false;
    const bool back = call(c, 0x001D11F8u, Ra{c.r[ra].w[0]});
    decomp::hook_001D11F8.enabled = true;
    if (!back) return;
    const Reg128 ret = c.r[v0];
    const std::uint32_t record = rd<std::uint32_t>(req + 28), slot = rd<std::uint32_t>(record);
    const std::uint32_t fighter = kFighters + rd<std::uint32_t>(record + 8) * kFighterSize;
    const std::uint32_t bank = rd<std::uint32_t>(req + 8);
    const NoPreempt guard(c);
    std::uint32_t own = 0;
    for (const std::uint32_t t = bank + rd<std::uint32_t>(bank); rd<std::uint32_t>(t + 4 * own); ++own) {}
    for (const Port &p : kPorts)
        if (p.target_group == group_of(fighter) && !load(c, p, fighter, slot, rd<std::uint32_t>(req + 4) & 0x7F, own)) return;
    c.r[v0] = ret;
}

PS2_MOD(002ADAC0, versus_boss_moves_remap) {
    decomp::hook_002ADAC0.enabled = false;
    const bool back = call(c, 0x002ADAC0u, Ra{c.r[ra].w[0]});
    decomp::hook_002ADAC0.enabled = true;
    if (!back) return;
    for (std::uint32_t k = 0; k < kPoolScan; ++k)
        if (const std::uint32_t h = find(kPool + k * kFighterSize)) apply(h);
}

PS2_MOD(00303340, versus_boss_moves_state) {
    const std::uint32_t fighter = c.r[a0].w[0];
    const std::int32_t s = static_cast<std::int32_t>(c.r[a1].w[0]), cur = rd<std::int32_t>(fighter + 0x24);
    const std::uint32_t h = find(fighter);
    const Port *p = h ? port_of(h) : nullptr;
    if (p && loaded_state(*p, s)) apply(h);
    if (p && s == p->teleport && cur != s) teleport(*p, fighter);
    decomp::hook_00303340.enabled = false;
    const bool back = call(c, 0x00303340u, Ra{c.r[ra].w[0]});
    decomp::hook_00303340.enabled = true;
    if (!back || !p || !in(p->fade, p->fade_count, cur) || in(p->fade, p->fade_count, s)) return;
    const Reg128 ret = c.r[v0];
    c.r[a0].d[0] = fighter, c.r[a1].d[0] = 530, c.r[a2].d[0] = 100 | 1 << 15;
    const NoPreempt guard(c);
    if (!call(c, kFade)) return;
    c.r[v0] = ret;
}
