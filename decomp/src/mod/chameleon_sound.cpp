// Chameleon's donor sounds. The donor states (versus_boss_moves.cpp) fire frame event 288 with Scorpion's and
// Sub-Zero's cue hashes; FUN_0031AE78 looks a hash up in the loaded banks (manager 0x6FA678, slots 0..14, first hit
// wins), and with only Reptile's bank in his player slot those moves were silent. When a player loaded as Chameleon,
// the last (empty) batch of FUN_001CEE00 also queues Scorpion's bank (cue table 6745, sf.dat 6746) into slot 1 and
// Sub-Zero's (6805, 6806) into slot 14: slot 1 is Versus-only (FUN_001D1560) and 14 is never used. Their sample data
// (458 KB of SPU2 RAM) does not fit the story budget (247 KB left with a level and an enemy bank), so the sf.dat
// callback keeps only the samples of the 9 cues (106 KB) and the cue tables only those cues. The teardown
// FUN_001DFA30 unloads slot 1 itself; slot 14 by an extra pass of its slot-3 call.
#include "ps2/decomp.hpp"

#include <cstdio>

namespace {

using namespace ps2;
using namespace ps2::gpr;

constexpr std::uint32_t kMgr = 0x006FA678u;  // +0x14 slots (0x18 each: +4 cue header, +8 cues)
constexpr std::uint32_t kAddBank = 0x003195F8u, kStartBatch = 0x00379188u, kBankLoaded = 0x0031B6A8u,
                        kUnload = 0x0031BB18u;
constexpr std::uint32_t kLastBatch = 0x001CF064u;  // return site of FUN_001CEE00's third FUN_00379188 call
// FUN_001DFA30's FUN_0031BB18(mgr, 3) returns to 0x1DFE4C; its argument setup starts at 0x1DFE3C (slot 1's return)
constexpr std::uint32_t kTeardown3 = 0x001DFE4Cu, kTeardown3Setup = 0x001DFE3Cu;
constexpr std::uint32_t kPlayers = 0x000A0020u;  // chameleon.cpp's Player records, 0x20 each: +0 u8 Chameleon
constexpr std::uint32_t kHeaps = 0x0064E958u;    // FUN_001E6B38(i), player i's heap: *(*(kHeaps + 0x18) + i * 0x14)
constexpr std::uint32_t kSpuSizes = 0x00678770u, kSpuBudget = 0x1C7FC0u;  // FUN_002716C8's 48 bank sizes, SNDFI's cap

struct Donor {
    std::uint32_t slot, cue, sf, hd, bd, samples, n;
    std::uint32_t hash[5];  // the donor moves' event-288 cues
    std::uint32_t keep[5];  // their samples (cue ref note -> program -> tone -> sample, mapped offline), by start
    std::uint32_t size[5];
};
constexpr Donor kDonors[] = {
    {1, 6745, 6746, 0x980, 0x34B00, 29, 4, {0x2E624A44, 0x3CD26351, 0x4714E942, 0x0B42BF16}, {5, 21, 24, 25},
     {13120, 19488, 5872, 8896}},
    {14, 6805, 6806, 0xC40, 0x3B300, 41, 5, {0xE6A57FCB, 0xE3A52A37, 0x31E1A23F, 0x46E692A9, 0xDFEFC313},
     {6, 7, 8, 35, 37}, {8224, 9968, 9856, 19424, 10720}},
};

constexpr std::uint32_t trimmed(const Donor &d) {
    std::uint32_t at = 0x10;  // the bd's ps2_VAGD header
    for (std::uint32_t k = 0; k < d.n; ++k) at += d.size[k];
    return (at + 0x3F) & ~0x3Fu;  // SNDFI wants 64-byte bank sizes
}

std::uint32_t slot_at(std::uint32_t s) { return rd<std::uint32_t>(kMgr + 0x14) + s * 0x18; }
bool loaded(std::uint32_t s) { return rd<std::uint32_t>(slot_at(s) + 4) != 0; }

// guest code run from a hook must not be preempted (a thread switch would unwind the host stack mid-hook)
struct NoPreempt {
    Cpu &c;
    std::int32_t budget;
    explicit NoPreempt(Cpu &cpu) : c(cpu), budget(cpu.budget) { c.budget = 0x40000000; }
    ~NoPreempt() { c.budget = budget; }
};

// The donor's sf.dat in EE RAM ("ps2_DTPK": hd, then the bd at +0x1C) and its slot's cue table, before the callback
// sends the sizes to SNDFI and uploads: the kept samples move to the front of the bd, the rest point at the first
// (no cue reaches them), the sizes shrink, and the cue table keeps only the donor cues.
void trim(const Donor &d, std::uint32_t file, std::uint32_t slot) {
    const std::uint32_t hdr = rd<std::uint32_t>(slot + 4), cues = rd<std::uint32_t>(slot + 8);
    const std::uint32_t table = file + rd<std::uint32_t>(file + 0x90 + 10 * 4);  // u32 n, {start, 0, 0, rate, size}
    const std::uint32_t bd = file + rd<std::uint32_t>(file + 0x1C);
    bool ok = rd<std::uint64_t>(file) == 0x4B5054445F327370ull && rd<std::uint32_t>(file + 0x10) == d.hd &&
              rd<std::uint32_t>(file + 0x18) == d.bd && hdr && rd<std::uint32_t>(hdr + 4) == d.bd &&
              rd<std::uint32_t>(table) == d.samples;
    for (std::uint32_t k = 0; ok && k < d.n; ++k) ok = rd<std::uint32_t>(table + 4 + d.keep[k] * 16 + 12) == d.size[k];
    if (!ok) return;  // not the donor's file (Versus loads its own bank into slot 1)
    std::uint32_t at = 0x10;
    for (std::uint32_t k = 0; k < d.n; ++k) {
        const std::uint32_t e = table + 4 + d.keep[k] * 16, from = rd<std::uint32_t>(e);
        for (std::uint32_t i = 0; i < d.size[k]; i += 8) wr<std::uint64_t>(bd + at + i, rd<std::uint64_t>(bd + from + i));
        wr<std::uint32_t>(e, at);
        at += d.size[k];
    }
    const std::uint32_t size = trimmed(d);
    for (; at < size; at += 8) wr<std::uint64_t>(bd + at, 0);
    for (std::uint32_t s = 0, k = 0; s < d.samples; ++s) {
        if (k < d.n && s == d.keep[k]) { ++k; continue; }
        wr<std::uint32_t>(table + 4 + s * 16, 0x10);
        wr<std::uint32_t>(table + 4 + s * 16 + 12, d.size[0]);
    }
    wr<std::uint32_t>(file + 0x18, size);
    wr<std::uint32_t>(file + 0x0C, rd<std::uint32_t>(file + 0x1C) + size);
    wr<std::uint32_t>(bd + 0x0C, size);
    wr<std::uint32_t>(hdr + 4, size);
    const std::uint32_t n = rd<std::uint32_t>(hdr + 0x18);
    std::uint32_t kept = 0;
    for (std::uint32_t i = 0; i < n; ++i) {
        const std::uint32_t e = cues + i * 0x1C, h = rd<std::uint32_t>(e);
        bool want = false;
        for (std::uint32_t k = 0; k < d.n; ++k) want |= h == d.hash[k];
        if (!want) continue;
        for (std::uint32_t j = 0; j < 0x1C; j += 4) wr<std::uint32_t>(cues + kept * 0x1C + j, rd<std::uint32_t>(e + j));
        ++kept;
    }
    wr<std::uint32_t>(hdr + 0x18, kept);
    std::fprintf(stderr, "[mod] chameleon_sound: slot %u keeps %u of %u cues, %u of %u bytes of SPU2 RAM\n", d.slot,
                 kept, n, size, d.bd);
}

}

// FUN_00379188 starts the queued batch; at FUN_001CEE00's last one the players' banks are loaded and the fighters
// not yet set up, so the Player records say who is Chameleon.
PS2_MOD(00379188, chameleon_sound_load) {
    const int who = c.r[ra].w[0] != kLastBatch ? -1 : rd<std::uint8_t>(kPlayers) ? 0 : rd<std::uint8_t>(kPlayers + 0x20) ? 1 : -1;
    if (who >= 0 && !loaded(1) && !loaded(14)) {
        std::uint32_t used = 0;
        for (std::uint32_t i = 0; i < 48; ++i) used += rd<std::uint32_t>(kSpuSizes + i * 4);
        const std::uint32_t need = trimmed(kDonors[0]) + trimmed(kDonors[1]);
        std::fprintf(stderr, "[mod] chameleon_sound: SPU2 banks %u + donors %u of %u bytes\n", used, need, kSpuBudget);
        if (used + need <= kSpuBudget) {  // over budget SNDFI would refuse every later size table too
            const std::uint32_t heap = rd<std::uint32_t>(rd<std::uint32_t>(kHeaps + 0x18) + who * 0x14);
            NoPreempt np(c);
            for (const Donor &d : kDonors) {
                c.r[a0].d[0] = kMgr;
                c.r[a1].d[0] = d.slot;
                c.r[a2].d[0] = d.cue;
                c.r[a3].d[0] = d.sf;
                c.r[t0].sd[0] = -1;  // no stream archive: every donor cue is SPU-resident
                c.r[t1].d[0] = heap;
                c.r[t2].d[0] = 0;  // the sf.dat is freed after the upload
                if (!call(c, kAddBank, Ra{kLastBatch})) return;
            }
        }
    }
    decomp::hook_00379188.enabled = false;
    tail(c, kStartBatch);
    decomp::hook_00379188.enabled = true;
}

// FUN_0031B6A8(request): a bank's sf.dat is in (request +8; +0x1C = its record, +0 slot)
PS2_MOD(0031B6A8, chameleon_sound_trim) {
    const std::uint32_t req = c.r[a0].w[0], slot = rd<std::uint32_t>(rd<std::uint32_t>(req + 0x1C));
    for (const Donor &d : kDonors)
        if (slot == d.slot) trim(d, rd<std::uint32_t>(req + 8), slot_at(slot));
    decomp::hook_0031B6A8.enabled = false;
    tail(c, kBankLoaded);
    decomp::hook_0031B6A8.enabled = true;
}

// FUN_0031BB18(mgr, slot) unloads a bank (SNDFI RPC 0x700, which blocks, so one per hook). At the teardown's slot-3
// call with slot 14 still loaded it unloads 14 instead and returns to 0x1DFE3C, which sets up the slot-3 call again.
PS2_MOD(0031BB18, chameleon_sound_unload) {
    if (c.r[ra].w[0] == kTeardown3 && loaded(14)) {
        c.r[a1].d[0] = 14;
        c.r[ra].sd[0] = static_cast<std::int32_t>(kTeardown3Setup);
    }
    decomp::hook_0031BB18.enabled = false;
    tail(c, kUnload);
    decomp::hook_0031BB18.enabled = true;
}
