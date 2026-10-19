#include "seamv.hpp"

#include "hw.hpp"
#include "vu_micro.hpp"

#include "ps2/memory.hpp"

#include <algorithm>
#include <atomic>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <unordered_set>
#include <vector>

// File format (little-endian), read by remaster/seamv.py:
//   header  "SEAMVREC", u32 version (1), u32 flags (bit 0: 'R' records present)
//   record  u32 type (one ASCII letter), u32 length, then length bytes:
//   'F' u32 frame, u32 0                                 first record of a frame
//   'E' u32 frame, u32 batches, u32 dropped, u32 bytes   end of a frame (dropped: batches past PS2_TRACE_SEAMV_MB)
//   'K' u64 key, 16384 bytes                             a VU1 code image, the first time its key (FNV-1a-64) is seen
//   'C' u32 seq, 46 x 16 bytes                           VU1 data memory qwords 0-45, written when they change
//   'G' u32 seq, u32 n, n x (u32 reg, u32 0, u64 value)  GS registers last set through GIF paths 2/3, when they change
//   'B' Batch, nunpack x Unpack, qwords x 16 bytes       one VU1 program start (MSCAL/MSCALF/MSCNT) and the batch at TOP
//   'R' u32 batch seq, vf[32], acc, vi[16] (u16), q p i r mac status clip tpc (u32)   VU1 registers before the program
namespace ps2::seamv {

namespace {

#pragma pack(push, 1)
struct Batch {
    std::uint32_t seq;  // batch number within the frame, dropped ones included
    std::uint8_t kind, dbf;
    std::uint16_t pc;  // VU1 byte address the program starts at
    std::uint16_t top, itop, base, ofst, tops, nunpack;
    std::uint64_t image;          // key of the code image ('K')
    std::uint32_t hash;           // FNV-1a-32 over the 256 bytes at pc (draws.ndjson "vu1" hash at an MSCAL)
    std::uint32_t draw_pc;        // the MSCAL/MSCALF this program start belongs to (pc itself for an MSCAL)
    std::uint32_t draw_hash;      // its hash
    std::uint32_t cseq, gseq;     // the 'C' and 'G' records in force (~0u: none yet)
    std::uint16_t qwords, spare;  // batch qwords at TOP that follow the unpack list
};
struct Unpack {
    std::uint32_t cmd;      // the VIF code
    std::uint32_t source;   // guest address of its packed data (~0u: not in RAM/SPR, or split across DMA packets)
    std::uint16_t address;  // first VU1 qword written (TOPS added when FLG is set)
    std::uint16_t cycle;    // CYCLE: CL low byte, WL high byte
    std::uint32_t mask;
    std::uint16_t num;   // 1-256
    std::uint16_t tops;  // TOPS when it ran
    std::uint8_t mode, spare[3];
};
#pragma pack(pop)
static_assert(sizeof(Batch) == 52 && sizeof(Unpack) == 24);

constexpr std::uint32_t kConstQwords = 46;
// GS registers worth carrying per batch: everything that is state, not vertex data, transfers or signals
constexpr bool tracked(std::uint32_t r) {
    return r == 0x00 || (r >= 0x06 && r <= 0x09) || (r >= 0x14 && r <= 0x1C) || r == 0x22 || (r >= 0x34 && r <= 0x3B) || r == 0x3D ||
           (r >= 0x40 && r <= 0x4F);
}

struct Config {
    std::FILE *out = nullptr;
    std::uint64_t first = ~0ull, count = 4, cap = 32ull << 20;
    bool regs = false;
    Config() {
        const char *path = std::getenv("PS2_TRACE_SEAMV");
        if (!path || !*path) return;
        out = std::fopen(path, "wb");
        if (!out) {
            std::fprintf(stderr, "[seamv] cannot write %s\n", path);
            return;
        }
        if (const char *f = std::getenv("PS2_TRACE_SEAMV_FRAMES")) {
            char *end = nullptr;
            first = std::strtoull(f, &end, 10);
            if (end && *end == ',') count = std::strtoull(end + 1, nullptr, 10);
        }
        if (const char *m = std::getenv("PS2_TRACE_SEAMV_MB")) cap = std::strtoull(m, nullptr, 10) << 20;
        regs = std::getenv("PS2_TRACE_SEAMV_REGS") != nullptr;
        const std::uint32_t head[2] = {1u, regs ? 1u : 0u};
        std::fwrite("SEAMVREC", 1, 8, out);
        std::fwrite(head, 4, 2, out);
        std::fflush(out);
        std::fprintf(stderr, "[seamv] recording to %s\n", path);
    }
};

const Config &config() {
    static const Config c;
    return c;
}

// Everything below belongs to the thread that runs VU1.
std::uint32_t g_frame = 0;
bool g_framed = false, g_in_range = false;
std::uint64_t g_frames_done = 0;
std::uint32_t g_batches = 0, g_dropped = 0;
std::uint64_t g_bytes = 0;

std::atomic<bool> g_code_dirty{true};
std::uint64_t g_image = 0;
std::unordered_set<std::uint64_t> g_images;

std::uint8_t g_consts[kConstQwords * 16];
std::uint32_t g_cseq = ~0u, g_gseq = ~0u, g_next_c = 0, g_next_g = 0;

std::uint64_t g_gs[0x64];
bool g_gs_valid[0x64];
bool g_gs_dirty = false;

std::vector<Unpack> g_unpacks;
std::uint32_t g_batch_hi = 0;  // qwords past TOPS written by FLG unpacks since the last program start
std::uint32_t g_draw_pc = ~0u, g_draw_hash = 0;

struct GifPath {
    bool active = false;
    std::uint32_t nloop = 0, loop = 0, nreg = 0, reg = 0, flg = 0;
    std::uint64_t regs = 0;
};
GifPath g_paths[4];

void put(std::uint32_t type, const void *a, std::size_t na, const void *b = nullptr, std::size_t nb = 0, const void *c = nullptr, std::size_t nc = 0) {
    std::FILE *f = config().out;
    const std::uint32_t head[2] = {type, static_cast<std::uint32_t>(na + nb + nc)};
    std::fwrite(head, 4, 2, f);
    if (na) std::fwrite(a, 1, na, f);
    if (nb) std::fwrite(b, 1, nb, f);
    if (nc) std::fwrite(c, 1, nc, f);
    g_bytes += 8 + na + nb + nc;
}

std::uint32_t fnv32(const std::uint8_t *code, std::uint32_t pc) {
    std::uint32_t h = 2166136261u;
    for (std::uint32_t i = 0; i < 256; ++i) h = (h ^ code[(pc + i) & 16383u]) * 16777619u;
    return h;
}

std::uint64_t fnv64(const std::uint8_t *p, std::size_t n) {
    std::uint64_t h = 14695981039346656037ull;
    for (std::size_t i = 0; i < n; ++i) h = (h ^ p[i]) * 1099511628211ull;
    return h;
}

void end_frame() {
    if (!g_framed) return;
    const std::uint32_t e[4] = {g_frame, g_batches - g_dropped, g_dropped, static_cast<std::uint32_t>(std::min<std::uint64_t>(g_bytes, ~0u))};
    put('E', e, sizeof e);
    std::fflush(config().out);
    if (g_dropped) std::fprintf(stderr, "[seamv] frame %u: %u batches past the %llu MB cap not written\n", g_frame, g_dropped,
                                static_cast<unsigned long long>(config().cap >> 20));
    g_framed = false;
    ++g_frames_done;
}

void set_reg(std::uint32_t reg, std::uint64_t value) {
    if (reg >= 0x64 || !tracked(reg)) return;
    if (g_gs_valid[reg] && g_gs[reg] == value) return;
    g_gs[reg] = value;
    g_gs_valid[reg] = true;
    g_gs_dirty = true;
}

}

bool on() { return config().out != nullptr; }

std::uint32_t guest_address(const std::uint8_t *p) {
    if (p >= g_ram && p < g_ram + kRamSize) return static_cast<std::uint32_t>(p - g_ram);
    if (p >= g_spr && p < g_spr + kScratchpadSize) return kScratchpadBase | static_cast<std::uint32_t>(p - g_spr);
    return ~0u;
}

void vblank(std::uint32_t frame) {
    if (!on()) return;
    end_frame();
    g_frame = frame;
    const Config &c = config();
    // default: the first frames the run draws
    g_in_range = c.first == ~0ull ? g_frames_done < c.count : frame >= c.first && frame - c.first < c.count;
    g_batches = g_dropped = 0;
    g_bytes = 0;
}

void code_changed() { g_code_dirty.store(true, std::memory_order_relaxed); }

void unpack(std::uint32_t cmd, std::uint32_t source, std::uint32_t address, std::uint32_t num, std::uint32_t cycle, std::uint32_t mode,
            std::uint32_t mask, std::uint32_t tops) {
    if (!on()) return;
    const std::uint32_t cl = cycle & 0xFFu, wl = (cycle >> 8) & 0xFFu;
    std::uint32_t span = num;  // qwords from the first written to one past the last
    if (wl && cl > wl) span = num + ((num - 1) / wl) * (cl - wl);
    if ((cmd >> 15) & 1u) g_batch_hi = std::max(g_batch_hi, address - tops + span);
    if (!g_in_range) return;
    g_unpacks.push_back(Unpack{cmd, source, static_cast<std::uint16_t>(address & 0x3FFu), static_cast<std::uint16_t>(cycle), mask,
                               static_cast<std::uint16_t>(num), static_cast<std::uint16_t>(tops), static_cast<std::uint8_t>(mode), {}});
}

void program(int kind, std::uint32_t pc, std::uint32_t base, std::uint32_t ofst, std::uint32_t tops, std::uint32_t top, std::uint32_t itop, bool dbf) {
    if (!on()) return;
    pc &= 16383u;
    if (g_code_dirty.exchange(false, std::memory_order_relaxed)) g_image = fnv64(g_vu1_code, 16384);
    const std::uint32_t hash = fnv32(g_vu1_code, pc);
    if (kind != 2) {
        g_draw_pc = pc;
        g_draw_hash = hash;
    }
    const std::uint32_t hi = std::min<std::uint32_t>(g_batch_hi, 1024u);
    g_batch_hi = 0;
    if (!g_in_range) {
        g_unpacks.clear();
        return;
    }
    if (!g_framed) {
        const std::uint32_t f[2] = {g_frame, 0};
        put('F', f, sizeof f);
        g_framed = true;
    }
    const std::uint32_t seq = g_batches++;
    if (g_bytes >= config().cap) {
        ++g_dropped;
        g_unpacks.clear();
        return;
    }
    if (g_images.insert(g_image).second) put('K', &g_image, 8, g_vu1_code, 16384);
    if (g_cseq == ~0u || std::memcmp(g_consts, g_vu1_mem, sizeof g_consts) != 0) {
        std::memcpy(g_consts, g_vu1_mem, sizeof g_consts);
        g_cseq = g_next_c++;
        put('C', &g_cseq, 4, g_consts, sizeof g_consts);
    }
    if (g_gs_dirty) {
        std::vector<std::uint8_t> regs;
        std::uint32_t n = 0;
        for (std::uint32_t r = 0; r < 0x64; ++r) {
            if (!g_gs_valid[r]) continue;
            const std::uint32_t w[2] = {r, 0};
            regs.insert(regs.end(), reinterpret_cast<const std::uint8_t *>(w), reinterpret_cast<const std::uint8_t *>(w) + 8);
            regs.insert(regs.end(), reinterpret_cast<const std::uint8_t *>(&g_gs[r]), reinterpret_cast<const std::uint8_t *>(&g_gs[r]) + 8);
            ++n;
        }
        g_gseq = g_next_g++;
        const std::uint32_t head[2] = {g_gseq, n};
        put('G', head, sizeof head, regs.data(), regs.size());
        g_gs_dirty = false;
    }
    Batch b{};
    b.seq = seq;
    b.kind = static_cast<std::uint8_t>(kind);
    b.dbf = dbf ? 1 : 0;
    b.pc = static_cast<std::uint16_t>(pc);
    b.top = static_cast<std::uint16_t>(top);
    b.itop = static_cast<std::uint16_t>(itop);
    b.base = static_cast<std::uint16_t>(base);
    b.ofst = static_cast<std::uint16_t>(ofst);
    b.tops = static_cast<std::uint16_t>(tops);
    b.nunpack = static_cast<std::uint16_t>(std::min<std::size_t>(g_unpacks.size(), 0xFFFF));
    b.image = g_image;
    b.hash = hash;
    b.draw_pc = g_draw_pc;
    b.draw_hash = g_draw_hash;
    b.cseq = g_cseq;
    b.gseq = g_gseq;
    b.qwords = static_cast<std::uint16_t>(hi);
    std::vector<std::uint8_t> data(static_cast<std::size_t>(hi) * 16);
    for (std::uint32_t q = 0; q < hi; ++q) std::memcpy(data.data() + q * 16, g_vu1_mem + ((top + q) & 1023u) * 16, 16);
    put('B', &b, sizeof b, g_unpacks.data(), b.nunpack * sizeof(Unpack), data.data(), data.size());
    g_unpacks.clear();
    if (config().regs) {
        const Vu0Regs &r = vu::regs(1);
        std::uint8_t raw[4 + 512 + 16 + 32 + 32];
        std::memcpy(raw, &seq, 4);
        std::memcpy(raw + 4, r.vf, 512);
        std::memcpy(raw + 516, &r.acc, 16);
        std::memcpy(raw + 532, r.vi, 32);
        const std::uint32_t w[8] = {r.q, r.p, r.i, r.r, r.mac, r.status, r.clip, r.tpc};
        std::memcpy(raw + 564, w, 32);
        put('R', raw, sizeof raw);
    }
}

void gif(int path, const std::uint8_t *data, std::uint32_t qwc) {
    if (!on() || path < 2 || path > 3) return;
    GifPath &p = g_paths[path];
    for (std::uint32_t i = 0; i < qwc; ++i) {
        std::uint64_t q[2];
        std::memcpy(q, data + static_cast<std::size_t>(i) * 16, 16);
        if (!p.active) {
            p.nloop = static_cast<std::uint32_t>(q[0]) & 0x7FFFu;
            p.flg = static_cast<std::uint32_t>(q[0] >> 58) & 3u;
            p.nreg = static_cast<std::uint32_t>(q[0] >> 60) & 0xFu;
            if (!p.nreg) p.nreg = 16;
            p.regs = q[1];
            p.loop = 0;
            p.reg = 0;
            if (((q[0] >> 46) & 1u) && p.flg == 0) set_reg(0x00, (q[0] >> 47) & 0x7FFu);
            p.active = p.nloop != 0;
            continue;
        }
        if (p.flg == 0) {
            const std::uint32_t r = static_cast<std::uint32_t>(p.regs >> (p.reg * 4)) & 0xFu;
            if (r == 0xE) set_reg(static_cast<std::uint32_t>(q[1]) & 0xFFu, q[0]);
            else if (r == 0x0) set_reg(0x00, q[0] & 0x7FFu);
            else if (r >= 0x6 && r <= 0x9) set_reg(r, q[0]);
            if (++p.reg >= p.nreg) {
                p.reg = 0;
                if (++p.loop >= p.nloop) p.active = false;
            }
        } else if (p.flg == 1) {
            for (int half = 0; half < 2 && p.active; ++half) {
                set_reg(static_cast<std::uint32_t>(p.regs >> (p.reg * 4)) & 0xFu, q[half]);
                if (++p.reg >= p.nreg) {
                    p.reg = 0;
                    if (++p.loop >= p.nloop) p.active = false;
                }
            }
        } else {
            const std::uint32_t run = std::min(qwc - i, p.nloop - p.loop);
            p.loop += run;
            i += run - 1;
            if (p.loop >= p.nloop) p.active = false;
        }
    }
}

}
