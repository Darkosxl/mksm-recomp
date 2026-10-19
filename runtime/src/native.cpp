#include "native.hpp"

#include "gs/gs.hpp"
#include "gs/queue.hpp"
#include "hw.hpp"
#include "vu_micro.hpp"

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>

namespace ps2::native {

namespace {

struct Config {
    bool world = false, skip = false, check = false, r14 = false;
    std::uint64_t first = 0, count = ~0ull;
    Config() {
        if (const char *e = std::getenv("PS2_NATIVE")) world = std::strstr(e, "world") || std::strstr(e, "all");
        if (const char *f = std::getenv("PS2_NATIVE_FRAMES")) {
            char *end = nullptr;
            first = std::strtoull(f, &end, 10);
            if (end && *end == ',') count = std::strtoull(end + 1, nullptr, 10);
        }
        const auto on = [](const char *name) {
            const char *e = std::getenv(name);
            return e && *e && *e != '0';
        };
        skip = world && on("PS2_NATIVE_SKIP_VU1");
        check = world && on("PS2_NATIVE_CHECK") && !skip;
        r14 = on("PS2_R14");
        if (world)
            std::fprintf(stderr, "[native] world programs drawn natively too (side by side)%s%s\n", skip ? "; VU1 skipped for them" : "",
                         check ? "; per-vertex check against the XGKICK" : "");
        if (r14) std::fprintf(stderr, "[native] R14: @3778/@3288 run after their colour UNPACK\n");
    }
};

const Config &config() {
    static const Config c;
    return c;
}

// Everything below belongs to the thread that runs VU1.
std::uint32_t g_frame = 0, g_seq = 0;
bool g_in_range = true;
Program g_draw = kNone;
std::vector<std::uint8_t> g_buf;
Batch g_batch{};
bool g_colours = false;
std::uint32_t g_r14_address = 0;

std::uint32_t fnv32(std::uint32_t pc) {
    std::uint32_t h = 2166136261u;
    for (std::uint32_t i = 0; i < 256; ++i) h = (h ^ g_vu1_code[(pc + i) & 16383u]) * 16777619u;
    return h;
}

std::uint32_t word(std::uint32_t qword, std::uint32_t lane) {
    std::uint32_t w;
    std::memcpy(&w, g_vu1_mem + (qword & 1023u) * 16 + lane * 4, 4);
    return w;
}

constexpr std::uint32_t kHeader = sizeof(Batch);
std::uint32_t vertices_at() { return kHeader + g_batch.nad * 16 + kRegQwords * 16; }

// The colours of the batch: the RGBA output slots after the colour UNPACK (TOP+0xC4: the copied tag and A+D, the vertex
// tag, then STQ, RGBA, XYZF per vertex).
void colours() {
    if (g_colours) return;
    g_colours = true;
    const std::uint32_t at = vertices_at(), slot = g_batch.top + 0xC4 + g_batch.nad + 2;
    for (std::uint32_t k = 0; k < g_batch.n; ++k)
        for (std::uint32_t j = 0; j < 4; ++j) {
            const std::uint32_t w = word(slot + 3 * k + 1, j);
            std::memcpy(g_buf.data() + at + (k * kVertexWords + 8 + j) * 4, &w, 4);
        }
}

void post(gs::queue::Type type, const std::uint8_t *data, std::uint32_t bytes) {
    if (gs::queue::active()) gs::queue::post(type, 0, 0, data, bytes);
    else gs::native_message(type, data, bytes);
}

}

bool g_pending = false;
bool g_r14_deferred = false;

bool world() { return config().world; }
bool skip_vu1() { return config().skip; }
bool r14() { return config().r14; }

void vblank(std::uint32_t frame) {
    g_frame = frame;
    g_seq = 0;
    const Config &c = config();
    g_in_range = frame >= c.first && frame - c.first < c.count;
}

void mscal(std::uint32_t pc) {
    switch (fnv32(pc & 16383u)) {
    case 0x567ce7d8u: g_draw = k567ce7d8; break;
    case 0x002c80edu: g_draw = k002c80ed; break;
    case 0x50bda0e2u: g_draw = k50bda0e2; break;
    default: g_draw = kNone; break;
    }
}

bool program(int kind, std::uint32_t top) {
    if (kind != 2 || g_draw == kNone || !g_in_range) return false;
    top &= 1023u;
    const std::uint32_t nad = word(top, 0) & 0x7FFFu;
    if (nad > 8) return false;
    const std::uint32_t n = word(top + 1 + nad, 0) & 0x7FFFu;
    // the batch and its output (at TOP+0xC4) inside one 500-qword half of the VU1 double buffer
    if (!n || 0xC4 + nad + 2 + 3 * n > 500) return false;
    g_batch = Batch{g_draw, n, nad, top, 0u, g_seq++, g_frame, 0u};
    if (config().skip) g_batch.flags |= kSkipped;
    g_buf.assign(vertices_at() + n * kVertexWords * 4, 0);
    std::uint8_t *p = g_buf.data() + kHeader;
    for (std::uint32_t i = 0; i < nad; ++i, p += 16) std::memcpy(p, g_vu1_mem + ((top + 1 + i) & 1023u) * 16, 16);
    const Vu0Regs &r = vu::regs(1);
    for (int i = 1; i <= 12; ++i, p += 16) std::memcpy(p, &r.vf[i], 16);
    std::memcpy(p, &r.vf[31], 16);
    p += 16;
    const std::uint32_t vi14 = r.vi[14];
    std::memcpy(p, &vi14, 4);
    p += 16;
    for (std::uint32_t k = 0; k < n; ++k, p += kVertexWords * 4) {
        std::memcpy(p, g_vu1_mem + ((top + 2 + nad + 2 * k) & 1023u) * 16, 16);
        std::memcpy(p + 16, g_vu1_mem + ((top + 3 + nad + 2 * k) & 1023u) * 16, 16);
    }
    g_colours = false;
    g_pending = true;
    return config().skip;
}

void kick(std::uint32_t start, const std::uint8_t *data, std::uint32_t qwords) {
    if (!g_pending || !config().check || (g_batch.flags & kOracle)) return;
    const std::uint32_t head = g_batch.nad + 2;
    if (start != ((g_batch.top + 0xC4) & 1023u) || qwords < head + 3 * g_batch.n) return;
    g_batch.flags |= kOracle;
    g_batch.kick_qwords = qwords;
    g_buf.insert(g_buf.end(), data + head * 16, data + (head + 3 * g_batch.n) * 16);
}

void kicks_begin() {
    colours();
    std::memcpy(g_buf.data(), &g_batch, sizeof g_batch);
    post(gs::queue::kNativeBegin, nullptr, 0);
}

void kicks_end() {
    g_pending = false;
    std::memcpy(g_buf.data(), &g_batch, sizeof g_batch);
    post(gs::queue::kNative, g_buf.data(), static_cast<std::uint32_t>(g_buf.size()));
}

bool r14_defer(int kind, std::uint32_t address) {
    if (kind != 2 || (g_draw != k002c80ed && g_draw != k50bda0e2)) return false;
    g_r14_address = address;
    g_r14_deferred = true;
    return true;
}

void r14_run() {
    if (!g_r14_deferred) return;
    g_r14_deferred = false;
    if (g_pending) colours();  // the native path takes the colours the UNPACK wrote, before the body lights them
    vu::run(1, g_r14_address);
}

}
