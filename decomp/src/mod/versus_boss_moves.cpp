// Foreign move states for a fighter: another group's clips, state records and frame events loaded next to the
// fighter's own, so that set-state to the donor's GLOBAL state ids works on him. A port is data: the target group,
// the donor's files and first global state, and the donor states to load. The command nodes that reach those states
// are not here (versus_combos.cpp grafts them).
// Several ports may target one group: their clips take consecutive free slots, in table order.
// Port 0: Reptile (group 84, any mode: the Versus and the story/NPC load paths, FUN_001CE6E8 and FUN_001D1068, both
// register the callback hooked here) gets 6 of the story boss Reptile's states (group 59).
//
// How a state plays (mksm/tools/scripts/fstates.py): global state s -> anim descriptor DAT_006C8A28[s] (u32[3010]),
// descriptor d = 8 bytes in the state DB at 0x6B3000 (+4: table of {u8 format, u8 channels, u16 frames, u32 clip + 6});
// record = DB +8 table [s] (0x70 bytes, ERG.DAT section 0), frame events = DB +0xC table [s] (16-byte events, ERG.DT2
// section 0, the list ends at event 0). A fighter's own clips take descriptors slot * 200 + k (k < his clip count); the
// rest of the 200 are free, and the donor clips go there.
//
// Hooks:
// - 0x001D11F8, the fighter anim-bank (nim.rtt) completion callback (a0 = request: +4 heap id in bits 0-6, +28 load
//   record: +0 slot, +8 player index). After it ran: for each port of the fighter's group, read the donor's nim.rtt,
//   ERG.DAT and ERG.DT2 from the disc (GAMEDATA.WAD) and inflate them on the host (raw deflate, as wad.py), copy only the
//   port's states' clips (a clip runs to the next one; its offsets are its own), clip names, records, cancel windows
//   and event lists into one block of the fighter's heap (the boss port's 6 states: 68 KB, its whole files 367 KB;
//   Scorpion's are 2 MB), fill the descriptors with FUN_002AF908 + FUN_002B1960 (what the bank parser FUN_002AE290 does per clip),
//   patch the records (+0x11 group = target; partner +0x2A kept only if a
//   port of the group loads it) and cut each event list at the clip's last frame (story t10_sung lists 3079 events up to
//   frame 670 on a 70-frame clip). Cancel windows (+0x2C first, +0x2E count) index the table at fighter +0x258 (the
//   fighter's own ERG.DAT section 1 + 8, set by the DAT loader 0x003205E0), not the donor's, so per port: kZero drops
//   them; kKeep / kRebase copy the fighter's table and the donor windows into one new table and point +0x258 at it
//   (his own indices unchanged); kRebase also drops a window whose target state is neither common (< 194), his own
//   group's, nor loaded by a port of his group. Donor global state ids are kept, so a target in a port needs no change.
// - 0x002ADAC0 resets DAT_006C8A28 to identity for groups 0-90 (round start, loads): the map is written again after it.
// - 0x00303340, the set-state core (a0 = fighter, a1 = state): entering a donor state writes map, record and event
//   pointers again first (0x321998 clears every event pointer at a load), then:
//   teleport state: the fighter is moved to the far side of the opponent, `gap` units past him, before it plays
//   (the story clip plays in place: the boss AI places him itself). Leaving the fade states for another state calls
//   the event-530 handler (0x001ABCB0: alpha percent | frames << 15) with 100% over 1 frame, so a teleport cut short
//   (hit, round end) never leaves him invisible: the alpha it sets lasts across rounds.
// Anything unexpected (no room in the heap or the clip slots, a file that does not read or inflate, a guest call that
// does not come back) loads nothing and says so on stderr. The hooks run their guest calls unpreempted (NoPreempt).
#include "ps2/decomp.hpp"
#include "ps2/disc.hpp"

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <vector>

namespace {

using namespace ps2;
using namespace ps2::gpr;

enum Windows { kZero, kKeep, kRebase };

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
    Windows windows;            // the donor states' cancel windows
};

// the states his command tree reaches (vsboss.py): d30_cntr 1578, s30_sp_n 1586, s40_sp_n 1587, s50_sp_n 1588,
// t10_sung 1592, t20_sung 1593 (none has a partner state)
constexpr std::uint8_t kBossMoves[] = {14, 22, 23, 24, 28, 29};
constexpr std::int32_t kTeleportFade[] = {1593, 1592}; // t20_sung vanish, t10_sung reappear

constexpr Port kPorts[] = {
    {"Versus Reptile <- story boss Reptile", 84, 6512, 1564, kBossMoves, std::size(kBossMoves), 1592, 450.0f,
     kTeleportFade, std::size(kTeleportFade), nullptr, 0, kZero},
};

constexpr std::uint32_t kAlloc = 0x0020F058u;      // (heap, size, best fit, file, line): FUN_0020F058
constexpr std::uint32_t kHeaps = 0x0064E998u, kHeapStride = 0x68u; // +8 free bottom, +0xC end, +0x1C 0 = linear
constexpr std::uint32_t kSetDesc = 0x002AF908u;    // (desc, format, channels, frames, clip + 6)
constexpr std::uint32_t kSetName = 0x002B1960u;    // (db, desc, name)
constexpr std::uint32_t kFade = 0x001ABCB0u;       // frame-event handler (fighter, event, param)
constexpr std::uint32_t kDb = 0x006B3000u, kMap = 0x006C8A28u;
constexpr std::uint32_t kFighters = 0x005E6B40u, kFighterSize = 0x33C0u;
constexpr std::uint32_t kGroupFirst = 0x004E94C8u, kGroupEnd = 0x004E9648u; // s32[group]: global state range
constexpr std::uint32_t kWindow = 18;              // cancel window bytes; +4 s16 target global state
constexpr std::int16_t kNoEvent = 1000;            // an id no listener handles

// What a load leaves, kept in guest memory so that save states and lockstep peers carry it: a header at the start of
// each port's block, {"vbm", fighter, first descriptor, its clip pointer, port, window table or 0, the fighter's table
// it was built from, the donor windows in the block, record[count], events[count]}, then the records, donor windows,
// event lists, clip names and clips of the port's states. The name-table entry (DB +0x10) of the port's first descriptor points at it ("vbm" is a valid name
// string); a later load into that descriptor replaces the entry or the clip pointer, which ends it.
constexpr std::uint32_t kMagic = 0x006D6276u; // "vbm\0"
constexpr std::uint32_t kHeader = 32, kMaxHeaders = std::size(kPorts);

std::int16_t group_of(std::uint32_t fighter) { return rd<std::int16_t>(fighter + 0x1E0E); }

const Port *port_of(std::uint32_t h) { return &kPorts[rd<std::uint32_t>(h + 16)]; }

// the fighter's headers (one per loaded port) into out[kMaxHeaders]; their count
std::uint32_t headers(std::uint32_t fighter, std::uint32_t *out) {
    bool target = false;
    for (const Port &p : kPorts) target |= p.target_group == group_of(fighter);
    if (!target) return 0;
    std::uint32_t found = 0;
    const std::uint32_t n = rd<std::uint32_t>(kDb), names = rd<std::uint32_t>(kDb + 0x10), descs = rd<std::uint32_t>(kDb + 4);
    for (std::uint32_t d = 0; d < n && found < kMaxHeaders; ++d) {
        const std::uint32_t h = rd<std::uint32_t>(names + 4 * d);
        if (h && rd<std::uint32_t>(h) == kMagic && rd<std::uint32_t>(h + 4) == fighter && rd<std::uint32_t>(h + 8) == d &&
            rd<std::uint32_t>(descs + d * 8 + 4) == rd<std::uint32_t>(h + 12) && rd<std::uint32_t>(h + 16) < std::size(kPorts) &&
            group_of(fighter) == port_of(h)->target_group)
            out[found++] = h;
    }
    return found;
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
    // only over the table it was built from: a DAT load since then (another one at +0x258) keeps his own
    const std::uint32_t w = rd<std::uint32_t>(h + 20), f = rd<std::uint32_t>(h + 4) + 0x258;
    if (w && rd<std::uint32_t>(f) == rd<std::uint32_t>(h + 24)) wr<std::uint32_t>(f, w);
}

// the fighters whose loads are still there: P1 and P2 of a Versus match, any fighter of the pool otherwise
// ponytail: the 2ADAC0 re-map checks the first 8 pool entries (0x5E3780 + k * 0x33C0 is the pool, players at k 1, 2)
constexpr std::uint32_t kPool = kFighters - kFighterSize, kPoolScan = 8;

bool loaded_state(const Port &p, std::int32_t s) {
    for (std::uint32_t i = 0; i < p.count; ++i)
        if (p.donor_first + p.locals[i] == s) return true;
    return false;
}

// a port of `group` loads global state s
bool loaded_any(std::int16_t group, std::int32_t s) {
    for (const Port &p : kPorts)
        if (p.target_group == group && loaded_state(p, s)) return true;
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

// raw deflate (RFC 1951) -> out, after Mark Adler's puff.c; false on a bad stream
// ponytail: bit-at-a-time Huffman decode, ~0.1 s for the 2 MB of a fighter's files once per load; a table decoder if it shows
constexpr std::int16_t kLenBase[29] = {3, 4, 5, 6, 7, 8, 9, 10, 11, 13, 15, 17, 19, 23, 27, 31, 35, 43, 51, 59, 67, 83, 99,
                                       115, 131, 163, 195, 227, 258};
constexpr std::int16_t kLenExtra[29] = {0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 0};
constexpr std::int16_t kDistBase[30] = {1, 2, 3, 4, 5, 7, 9, 13, 17, 25, 33, 49, 65, 97, 129, 193, 257, 385, 513, 769,
                                        1025, 1537, 2049, 3073, 4097, 6145, 8193, 12289, 16385, 24577};
constexpr std::int16_t kDistExtra[30] = {0, 0, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11,
                                         12, 12, 13, 13};
constexpr std::uint8_t kOrder[19] = {16, 17, 18, 0, 8, 7, 9, 6, 10, 5, 11, 4, 12, 3, 13, 2, 14, 1, 15};

bool inflate_raw(const std::uint8_t *in, std::size_t n, std::vector<std::uint8_t> &out) {
    struct Huff { std::int16_t count[16], symbol[288]; };
    std::size_t pos = 0;
    std::uint32_t buf = 0;
    int cnt = 0;
    bool bad = false;
    const auto bits = [&](int need) {
        std::uint32_t v = buf;
        while (cnt < need) {
            if (pos == n) return bad = true, 0;
            v |= static_cast<std::uint32_t>(in[pos++]) << cnt, cnt += 8;
        }
        buf = v >> need, cnt -= need;
        return static_cast<int>(v & ((1u << need) - 1));
    };
    const auto build = [](Huff &h, const std::int16_t *len, int k) {
        std::int16_t offs[16];
        for (auto &x : h.count) x = 0;
        for (int i = 0; i < k; ++i) ++h.count[len[i]];
        if (h.count[0] == k) return 0;
        int left = 1;
        for (int l = 1; l < 16; ++l)
            if ((left = (left << 1) - h.count[l]) < 0) return left;
        offs[1] = 0;
        for (int l = 1; l < 15; ++l) offs[l + 1] = static_cast<std::int16_t>(offs[l] + h.count[l]);
        for (int i = 0; i < k; ++i)
            if (len[i]) h.symbol[offs[len[i]]++] = static_cast<std::int16_t>(i);
        return left;
    };
    const auto decode = [&](const Huff &h) {
        int code = 0, first = 0, index = 0;
        for (int l = 1; l < 16; ++l) {
            code |= bits(1);
            const int k = h.count[l];
            if (code - k < first) return static_cast<int>(h.symbol[index + (code - first)]);
            index += k, first = (first + k) << 1, code <<= 1;
        }
        return -1;
    };
    Huff lc, dc;
    std::int16_t len[320];
    for (int last = 0; !last;) {
        last = bits(1);
        const int type = bits(2);
        if (bad) return false;
        if (type == 0) { // stored
            buf = 0, cnt = 0;
            if (n - pos < 4) return false;
            const unsigned k = in[pos] | in[pos + 1] << 8;
            if ((in[pos + 2] | in[pos + 3] << 8) != (~k & 0xFFFFu) || n - pos - 4 < k) return false;
            out.insert(out.end(), in + pos + 4, in + pos + 4 + k), pos += 4 + k;
            continue;
        }
        if (type == 1) { // fixed codes
            for (int i = 0; i < 288; ++i) len[i] = i < 144 ? 8 : i < 256 ? 9 : i < 280 ? 7 : 8;
            build(lc, len, 288);
            for (int i = 0; i < 30; ++i) len[i] = 5;
            build(dc, len, 30);
        } else if (type == 2) { // dynamic codes
            const int nlen = bits(5) + 257, ndist = bits(5) + 1, ncode = bits(4) + 4;
            if (bad || nlen > 286 || ndist > 30) return false;
            for (int i = 0; i < 19; ++i) len[kOrder[i]] = static_cast<std::int16_t>(i < ncode ? bits(3) : 0);
            if (build(lc, len, 19)) return false;
            for (int i = 0; i < nlen + ndist;) {
                const int sym = decode(lc);
                if (sym < 0 || bad) return false;
                if (sym < 16) {
                    len[i++] = static_cast<std::int16_t>(sym);
                    continue;
                }
                if (sym == 16 && !i) return false;
                const std::int16_t l = sym == 16 ? len[i - 1] : 0;
                int rep = sym == 16 ? 3 + bits(2) : sym == 17 ? 3 + bits(3) : 11 + bits(7);
                if (i + rep > nlen + ndist) return false;
                while (rep--) len[i++] = l;
            }
            if (!len[256]) return false;
            int err = build(lc, len, nlen);
            if (err < 0 || (err > 0 && nlen - lc.count[0] != 1)) return false;
            err = build(dc, len + nlen, ndist);
            if (err < 0 || (err > 0 && ndist - dc.count[0] != 1)) return false;
        } else {
            return false;
        }
        for (;;) { // the block's codes
            int sym = decode(lc);
            if (sym < 0 || bad) return false;
            if (sym < 256) {
                out.push_back(static_cast<std::uint8_t>(sym));
                continue;
            }
            if (sym == 256) break;
            if ((sym -= 257) >= 29) return false;
            const int k = kLenBase[sym] + bits(kLenExtra[sym]);
            if ((sym = decode(dc)) < 0 || sym >= 30) return false;
            const std::size_t dist = static_cast<std::size_t>(kDistBase[sym] + bits(kDistExtra[sym]));
            if (bad || dist > out.size()) return false;
            for (int i = 0; i < k; ++i) out.push_back(out[out.size() - dist]);
        }
    }
    return true;
}

// GAMEDATA.WAD file `id`, unwrapped (EWDF: u32 magic, u32 unpacked size, u32 header length, ..., raw deflate), empty on
// any error
std::vector<std::uint8_t> wad_file(std::uint32_t id) {
    std::vector<std::uint8_t> raw = wad_raw(id), out;
    if (raw.size() < 16 || std::memcmp(raw.data(), "EWDF", 4)) return raw;
    std::uint32_t u, hl;
    std::memcpy(&u, &raw[4], 4), std::memcpy(&hl, &raw[8], 4);
    out.reserve(u);
    if (hl > raw.size() || !inflate_raw(raw.data() + hl, raw.size() - hl, out) || out.size() != u) return {};
    return out;
}

// Guest code called from a hook must not be preempted: a thread switch would unwind the host stack and later return
// into the call()'s sentinel ra. The budget is lifted around the calls and put back after (a mod, not state-exact).
struct NoPreempt {
    Cpu &c;
    std::int32_t budget;
    explicit NoPreempt(Cpu &cpu) : c(cpu), budget(cpu.budget) { c.budget = 0x40000000; }
    ~NoPreempt() { c.budget = budget; }
};

// little-endian fields of a host copy of a file; 0 past its end
template <class T> T get(const std::vector<std::uint8_t> &f, std::uint32_t at) {
    T v{};
    if (at <= f.size() && f.size() - at >= sizeof(T)) std::memcpy(&v, &f[at], sizeof(T));
    return v;
}
template <class T> void put(std::vector<std::uint8_t> &f, std::uint32_t at, T v) { std::memcpy(&f[at], &v, sizeof(T)); }

// section k of an ERG.DAT / ERG.DT2 container (u32 n, u32 off[n + 1], data)
std::uint32_t section(const std::vector<std::uint8_t> &f, std::uint32_t k) {
    return 4 + 4 * (get<std::uint32_t>(f, 0) + 1) + get<std::uint32_t>(f, 4 + 4 * k);
}

// false: control left
bool alloc(Cpu &c, std::uint32_t heap, std::uint32_t size, std::uint32_t &block) {
    c.r[a0].d[0] = heap, c.r[a1].d[0] = size, c.r[a2].d[0] = 1;
    c.r[a3].d[0] = 0x0058D290u, c.r[t0].d[0] = 0x0058D2C8u, c.r[t1].d[0] = 0xF1u; // the DT2 loaders' file/line
    if (!call(c, kAlloc)) return false;
    block = c.r[v0].w[0];
    return true;
}

std::uint32_t heap_free(std::uint32_t heap) {
    const std::uint32_t h = kHeaps + heap * kHeapStride;
    return rd<std::uint32_t>(h + 0x1C) ? 0xFFFFFFFFu : rd<std::uint32_t>(h + 0xC) - rd<std::uint32_t>(h + 8); // not linear: try
}

// One port into descriptors desc.. : its states' parts of the donor files, built on the host, into one heap block.
// block = its header, 0 if it did not load. false: control left.
bool load(Cpu &c, const Port &p, std::uint32_t fighter, std::uint32_t heap, std::uint32_t desc, std::uint32_t &block) {
    block = 0;
    const std::vector<std::uint8_t> dt2 = wad_file(p.dt2), dat = wad_file(p.dt2 + 1), rtt = wad_file(p.dt2 + 2);
    std::vector<std::uint8_t> img(kHeader + 8 * p.count);
    const auto add = [&img](const std::vector<std::uint8_t> &f, std::uint32_t at, std::uint32_t n, std::uint32_t phase = 0) {
        while (img.size() % 16 != phase % 16) img.push_back(0);
        const auto start = static_cast<std::uint32_t>(img.size());
        img.insert(img.end(), f.begin() + at, f.begin() + at + n);
        return start;
    };
    const char *skip = dt2.empty() || dat.empty() || rtt.empty() ? "donor files do not read or inflate"
                       : desc % 200 + p.count > 200              ? "no free clip slots"
                                                                 : nullptr;
    std::vector<std::uint32_t> rec_at(p.count), ev_at(p.count), name_at(p.count), clip_at(p.count);
    std::uint32_t win_at = 0;
    const std::uint32_t clips = get<std::uint32_t>(rtt, 0), names = get<std::uint32_t>(rtt, 4);
    if (!skip) {
        const std::uint32_t recs = section(dat, 0), wins = section(dat, 1) + 8, events = section(dt2, 0), starts = section(dt2, 1);
        std::vector<std::uint32_t> ends{names, static_cast<std::uint32_t>(rtt.size())}; // a clip ends where the next starts
        for (std::uint32_t k = 0, o; (o = get<std::uint32_t>(rtt, clips + 4 * k)); ++k) ends.push_back(clips + o);
        std::sort(ends.begin(), ends.end());
        const auto fits = [](const std::vector<std::uint8_t> &f, std::uint32_t at, std::uint32_t n) {
            return at <= f.size() && f.size() - at >= n;
        };
        for (std::uint32_t i = 0; i < p.count && !skip; ++i) {
            const std::uint32_t k = p.locals[i], r = recs + k * 0x70;
            if (!fits(dat, r, 0x70)) skip = "donor record missing";
            else rec_at[i] = add(dat, r, 0x70);
        }
        win_at = static_cast<std::uint32_t>(img.size());
        for (std::uint32_t i = 0, n = 0; i < p.count && !skip; ++i) { // the donor windows, the record's index into them
            const std::uint32_t first = get<std::uint16_t>(img, rec_at[i] + 0x2C), count = get<std::uint16_t>(img, rec_at[i] + 0x2E);
            if (p.windows == kZero || !count) {
                put<std::uint32_t>(img, rec_at[i] + 0x2C, 0);
            } else if (!fits(dat, wins + first * kWindow, count * kWindow)) {
                skip = "donor windows missing";
            } else {
                img.insert(img.end(), dat.begin() + wins + first * kWindow, dat.begin() + wins + (first + count) * kWindow);
                put<std::uint16_t>(img, rec_at[i] + 0x2C, static_cast<std::uint16_t>(n)), n += count;
            }
        }
        for (std::uint32_t i = 0; i < p.count && !skip; ++i) {
            const std::uint32_t k = p.locals[i], rec = rec_at[i], start = clips + get<std::uint32_t>(rtt, clips + 4 * k);
            const auto next = std::upper_bound(ends.begin(), ends.end(), start);
            const std::uint32_t end = next == ends.end() ? start : *next;
            const std::int16_t frames = get<std::int16_t>(rtt, start + 2);
            put<std::uint8_t>(img, rec + 0x11, static_cast<std::uint8_t>(p.target_group));
            if (!loaded_any(p.target_group, get<std::int16_t>(img, rec + 0x2A))) put<std::int16_t>(img, rec + 0x2A, 0);
            // events past the clip's last frame never fire on a fighter (the boss AI holds the state); dropped
            ev_at[i] = static_cast<std::uint32_t>(img.size());
            for (std::uint32_t e = events + 16 * get<std::uint32_t>(dt2, starts + 4 * k);; e += 16) {
                if (!fits(dt2, e, 16)) {
                    skip = "donor event list unterminated";
                    break;
                }
                const std::int16_t f = get<std::int16_t>(dt2, e), id = get<std::int16_t>(dt2, e + 2);
                if (id && f > frames) continue;
                const std::uint32_t at = add(dt2, e, 16);
                for (std::uint32_t j = 0; j < p.strip_count; ++j)
                    if (id == p.strip[j]) put<std::int16_t>(img, at + 2, kNoEvent);
                if (!id) break;
            }
            const std::uint32_t name = names + get<std::uint32_t>(rtt, names + 4 * k);
            const auto nul = std::find(rtt.begin() + std::min<std::size_t>(name, rtt.size()), rtt.end(), 0);
            if (nul == rtt.end() || start >= end || end > rtt.size()) skip = "donor clip missing";
            else name_at[i] = add(rtt, name, static_cast<std::uint32_t>(nul - rtt.begin()) + 1 - name),
                 clip_at[i] = add(rtt, start, end - start, start); // the file's alignment mod 16
        }
    }
    while (img.size() % 16) img.push_back(0);
    const auto size = static_cast<std::uint32_t>(img.size());
    if (!skip && heap_free(heap) < size + 256) skip = "no room in the heap";
    if (!skip) {
        if (!alloc(c, heap, size, block)) return false;
        if (!block) skip = "allocation failed";
    }
    if (skip) {
        std::fprintf(stderr, "[mod] versus_boss_moves: %s not loaded: %s\n", p.name, skip);
        block = 0;
        return true;
    }
    for (std::uint32_t i = 0; i < size; i += 4) wr<std::uint32_t>(block + i, get<std::uint32_t>(img, i));
    for (std::uint32_t i = 0; i < p.count; ++i) {
        const std::uint32_t clip = block + clip_at[i];
        c.r[a0].d[0] = desc + i;
        c.r[a1].sd[0] = rd<std::int16_t>(clip), c.r[a2].sd[0] = rd<std::int16_t>(clip + 4), c.r[a3].sd[0] = rd<std::int16_t>(clip + 2);
        c.r[t0].d[0] = clip + 6;
        if (!call(c, kSetDesc)) return false;
        c.r[a0].d[0] = kDb, c.r[a1].d[0] = desc + i, c.r[a2].d[0] = i ? block + name_at[i] : block;
        if (!call(c, kSetName)) return false;
        wr<std::uint32_t>(block + kHeader + 4 * i, block + rec_at[i]);
        wr<std::uint32_t>(block + kHeader + 4 * (p.count + i), block + ev_at[i]);
    }
    wr<std::uint32_t>(block, kMagic), wr<std::uint32_t>(block + 4, fighter), wr<std::uint32_t>(block + 8, desc);
    wr<std::uint32_t>(block + 12, rd<std::uint32_t>(rd<std::uint32_t>(kDb + 4) + desc * 8 + 4));
    wr<std::uint32_t>(block + 16, static_cast<std::uint32_t>(&p - kPorts));
    wr<std::uint32_t>(block + 20, 0), wr<std::uint32_t>(block + 24, 0), wr<std::uint32_t>(block + 28, block + win_at);
    std::fprintf(stderr, "[mod] versus_boss_moves: %s: %u states, descriptors %u-%u, %u bytes at %08X (heap %u, %u left)\n",
                 p.name, p.count, desc, desc + p.count - 1, size, block, heap, heap_free(heap));
    return true;
}

// kKeep / kRebase ports: the fighter's own window table + the donor states' windows, in a new block; the records'
// window indices rebased onto it, every header of the fighter pointing at it. false: control left.
bool windows(Cpu &c, std::uint32_t fighter, std::uint32_t heap, const std::uint32_t *hs, std::uint32_t n) {
    const std::int16_t group = group_of(fighter);
    const std::uint32_t own = rd<std::uint32_t>(fighter + 0x258), own_n = own ? rd<std::uint32_t>(own - 4) : 0;
    std::uint32_t total = own_n;
    bool any = false;
    for (std::uint32_t k = 0; k < n; ++k) {
        const Port &p = *port_of(hs[k]);
        if (p.windows == kZero) continue;
        any = true;
        for (std::uint32_t i = 0; i < p.count; ++i) total += rd<std::uint16_t>(rd<std::uint32_t>(hs[k] + kHeader + 4 * i) + 0x2E);
    }
    if (!any) return true;
    const std::uint32_t size = 8 + total * kWindow;
    std::uint32_t t = 0;
    if (own_n > 8192 || heap_free(heap) < size + 256) {
        std::fprintf(stderr, "[mod] versus_boss_moves: cancel windows not loaded (table of %u, %u bytes)\n", own_n, size);
    } else if (!alloc(c, heap, size, t)) {
        return false;
    }
    const std::int32_t first = rd<std::int32_t>(kGroupFirst + 4 * group), end = rd<std::int32_t>(kGroupEnd + 4 * group);
    std::uint32_t at = own_n, dropped = 0;
    if (t) {
        wr<std::uint32_t>(t, own ? rd<std::uint32_t>(own - 8) : 0), wr<std::uint32_t>(t + 4, total);
        for (std::uint32_t b = 0; b < own_n * kWindow; b += 2) wr<std::uint16_t>(t + 8 + b, rd<std::uint16_t>(own + b));
    }
    for (std::uint32_t k = 0; k < n; ++k) {
        const Port &p = *port_of(hs[k]);
        if (p.windows == kZero) continue;
        for (std::uint32_t i = 0; i < p.count; ++i) {
            const std::uint32_t rec = rd<std::uint32_t>(hs[k] + kHeader + 4 * i);
            const std::uint32_t from = rd<std::uint16_t>(rec + 0x2C), count = rd<std::uint16_t>(rec + 0x2E), start = at;
            for (std::uint32_t j = 0; t && j < count; ++j) {
                const std::uint32_t w = rd<std::uint32_t>(hs[k] + 28) + (from + j) * kWindow;
                const std::int16_t to = rd<std::int16_t>(w + 4);
                if (p.windows == kRebase && to >= 194 && !(to >= first && to < end) && !loaded_any(group, to)) {
                    ++dropped;
                    continue;
                }
                for (std::uint32_t b = 0; b < kWindow; b += 2) wr<std::uint16_t>(t + 8 + at * kWindow + b, rd<std::uint16_t>(w + b));
                ++at;
            }
            wr<std::uint16_t>(rec + 0x2C, static_cast<std::uint16_t>(start));
            wr<std::uint16_t>(rec + 0x2E, static_cast<std::uint16_t>(at - start));
        }
    }
    for (std::uint32_t k = 0; t && k < n; ++k) wr<std::uint32_t>(hs[k] + 20, t + 8), wr<std::uint32_t>(hs[k] + 24, own);
    std::fprintf(stderr, "[mod] versus_boss_moves: cancel windows: %u own (table %08X) + %u donor (%u dropped) at %08X\n",
                 own_n, own, at - own_n, dropped, t ? t + 8 : 0);
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
    // The callback itself runs unpreempted too: in the mirror match its time slice ran out inside it (a thread switch
    // unwinds the host stack, the callback finishes later without this hook) and neither fighter got its ports.
    const NoPreempt guard(c);
    decomp::hook_001D11F8.enabled = false;
    const bool back = call(c, 0x001D11F8u, Ra{c.r[ra].w[0]});
    decomp::hook_001D11F8.enabled = true;
    const auto left = [&c, req](const char *where) {
        std::fprintf(stderr, "[mod] versus_boss_moves: bank request %08X: no ports: control left %s (pc %08X)\n", req, where, c.pc);
    };
    if (!back) return left("the bank callback");
    const Reg128 ret = c.r[v0];
    const std::uint32_t record = rd<std::uint32_t>(req + 28), slot = rd<std::uint32_t>(record);
    const std::uint32_t fighter = kFighters + rd<std::uint32_t>(record + 8) * kFighterSize;
    const std::uint32_t bank = rd<std::uint32_t>(req + 8);
    const std::uint32_t heap = rd<std::uint32_t>(req + 4) & 0x7F;
    const std::int16_t group = group_of(fighter);
    std::uint32_t own = 0, used, hs[kMaxHeaders], n = 0;
    for (const std::uint32_t t = bank + rd<std::uint32_t>(bank); rd<std::uint32_t>(t + 4 * own); ++own) {}
    used = own;
    for (const Port &p : kPorts) {
        if (p.target_group != group) continue;
        if (!load(c, p, fighter, heap, slot * 200 + used, hs[n])) return left(p.name);
        if (hs[n]) used += p.count, ++n;
    }
    if (!n) return void(c.r[v0] = ret); // other fighters (no port), or a port that printed why it did not load
    std::fprintf(stderr, "[mod] versus_boss_moves: group %d slot %u: %u own + %u ported = %u of 200 clip slots (%u free)\n",
                 group, slot, own, used - own, used, 200 - used);
    if (!windows(c, fighter, heap, hs, n)) return left("the cancel windows");
    for (std::uint32_t k = 0; k < n; ++k) apply(hs[k]);
    c.r[v0] = ret;
}

PS2_MOD(002ADAC0, versus_boss_moves_remap) {
    const NoPreempt guard(c); // as above: the remap must run after it
    decomp::hook_002ADAC0.enabled = false;
    const bool back = call(c, 0x002ADAC0u, Ra{c.r[ra].w[0]});
    decomp::hook_002ADAC0.enabled = true;
    if (!back) return void(std::fprintf(stderr, "[mod] versus_boss_moves: anim redo left (pc %08X): ports not remapped\n", c.pc));
    std::uint32_t hs[kMaxHeaders];
    for (std::uint32_t k = 0; k < kPoolScan; ++k)
        for (std::uint32_t i = 0, n = headers(kPool + k * kFighterSize, hs); i < n; ++i) apply(hs[i]);
}

PS2_MOD(00303340, versus_boss_moves_state) {
    const std::uint32_t fighter = c.r[a0].w[0];
    const std::int32_t s = static_cast<std::int32_t>(c.r[a1].w[0]), cur = rd<std::int32_t>(fighter + 0x24);
    std::uint32_t hs[kMaxHeaders];
    const std::uint32_t n = headers(fighter, hs);
    bool fade = false;
    for (std::uint32_t i = 0; i < n; ++i) {
        const Port &p = *port_of(hs[i]);
        if (loaded_state(p, s)) apply(hs[i]);
        if (s == p.teleport && cur != s) teleport(p, fighter);
        fade |= in(p.fade, p.fade_count, cur) && !in(p.fade, p.fade_count, s);
    }
    decomp::hook_00303340.enabled = false;
    const bool back = call(c, 0x00303340u, Ra{c.r[ra].w[0]});
    decomp::hook_00303340.enabled = true;
    if (!back || !fade) return;
    const Reg128 ret = c.r[v0];
    c.r[a0].d[0] = fighter, c.r[a1].d[0] = 530, c.r[a2].d[0] = 100 | 1 << 15;
    const NoPreempt guard(c);
    if (!call(c, kFade)) return;
    c.r[v0] = ret;
}
