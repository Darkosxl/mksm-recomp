#include "drawdbg.hpp"
#include "gs.hpp"
#include "raster.hpp"
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <string>
#include <unordered_set>

namespace ps2::gs::drawdbg {
namespace {

struct Config {
    bool on = false, dump = false, textures = false;
    std::uint64_t from = 0, to = 0, skip_from = 0;
    std::string dir;
    std::unordered_set<std::uint32_t> skip;
    Config() {
        if (const char *e = std::getenv("PS2_DRAW_DUMP")) {
            unsigned long long a = 0, b = 0;
            char path[512] = {}, extra[16] = {};
            if (std::sscanf(e, "%llu,%llu,%511[^,],%15s", &a, &b, path, extra) >= 3) {
                dump = true;
                from = a;
                to = b;
                dir = path;
                textures = std::strcmp(extra, "tex") == 0;
                std::filesystem::create_directories(dir + (textures ? "/tex" : ""));
            }
        }
        if (const char *e = std::getenv("PS2_DRAW_SKIP")) {
            for (const char *p = e; *p;) {
                char *end = nullptr;
                skip.insert(static_cast<std::uint32_t>(std::strtoul(p, &end, 16)));
                p = *end ? end + 1 : end;
            }
            if (const char *f = std::getenv("PS2_DRAW_SKIP_FROM")) skip_from = std::strtoull(f, nullptr, 10);
        }
        on = dump || !skip.empty();
    }
};
const Config &config() {
    static const Config c;
    return c;
}

std::uint32_t fnv(std::uint32_t h, std::uint64_t v) {
    for (int i = 0; i < 8; ++i) h = (h ^ static_cast<std::uint8_t>(v >> (i * 8))) * 16777619u;
    return h;
}

// Emulation / VU thread side.
std::uint32_t g_dma_ra[10], g_dma_madr[10];
thread_local std::uint32_t t_vif1_ra = 0, t_vu1_entry = ~0u, t_vu1_hash = 0;
thread_local Source t_kick_source;

// Render side.
struct Draw {
    std::uint32_t id = ~0u, prims = 0, group = 0;
    std::uint64_t frame = 0, ns = 0;
    int path = 0;
    Source src;
    std::uint64_t prim = 0, texa = 0;
    Context ctx{};
    int x0 = 0, y0 = 0, x1 = 0, y1 = 0;
    std::uint32_t tex = 0;
};
int g_path = 0;
Source g_src;
std::uint64_t g_frame = 0, g_gif_ns = 0, g_draw_ns = 0, g_frame_prims = 0, g_frame_draws = 0;
std::uint32_t g_next_id = 0;
Draw g_draw;
bool g_skipping = false;
std::FILE *g_draws = nullptr, *g_frames = nullptr, *g_batches = nullptr;
std::unordered_set<std::uint32_t> g_textures;

bool dumping() { return config().dump && g_frame >= config().from && g_frame <= config().to; }

std::FILE *open(std::FILE *&f, const char *name) {
    if (!f) f = std::fopen((config().dir + "/" + name).c_str(), "w");
    return f;
}

void flush_draw() {
    Draw &d = g_draw;
    if (!d.prims || !open(g_draws, "draws.ndjson")) return;
    const Context &c = d.ctx;
    std::fprintf(g_draws,
                 "{\"id\":%u,\"after_vblank\":%llu,\"path\":%d,\"ra\":\"%08x\",\"madr\":\"%08x\",\"vu1\":%d,\"vu1_hash\":\"%08x\","
                 "\"group\":\"%08x\",\"prims\":%u,\"bbox\":[%d,%d,%d,%d],\"cpu_ns\":%llu,\"prim\":\"%llx\",\"tex0\":\"%llx\",\"tex1\":\"%llx\","
                 "\"clamp\":\"%llx\",\"alpha\":\"%llx\",\"test\":\"%llx\",\"frame\":\"%llx\",\"zbuf\":\"%llx\",\"fba\":\"%llx\",\"texa\":\"%llx\","
                 "\"scissor\":\"%llx\"",
                 d.id, static_cast<unsigned long long>(d.frame), d.path, d.src.ra, d.src.madr, d.src.vu1_entry == ~0u ? -1 : static_cast<int>(d.src.vu1_entry),
                 d.src.vu1_hash, d.group, d.prims, d.x0, d.y0, d.x1, d.y1, static_cast<unsigned long long>(d.ns), static_cast<unsigned long long>(d.prim),
                 static_cast<unsigned long long>(c.tex0), static_cast<unsigned long long>(c.tex1), static_cast<unsigned long long>(c.clamp),
                 static_cast<unsigned long long>(c.alpha), static_cast<unsigned long long>(c.test), static_cast<unsigned long long>(c.frame),
                 static_cast<unsigned long long>(c.zbuf), static_cast<unsigned long long>(c.fba), static_cast<unsigned long long>(d.texa),
                 static_cast<unsigned long long>(c.scissor));
    if (d.tex) std::fprintf(g_draws, ",\"tex\":\"%08x\"}\n", d.tex);
    else std::fputs(",\"tex\":null}\n", g_draws);
    d.prims = 0;
}

}

bool enabled() { return config().on; }

void dma_start(int channel, std::uint32_t ra, std::uint32_t madr) {
    g_dma_ra[channel] = ra;
    g_dma_madr[channel] = madr;
    if (channel == 1) t_vif1_ra = ra;
}
std::uint32_t vif1_ra() { return t_vif1_ra; }
void set_vif1_ra(std::uint32_t ra) { t_vif1_ra = ra; }

void vu1_start(std::uint32_t entry, const std::uint8_t *code) {
    t_vu1_entry = entry;
    std::uint32_t h = 2166136261u;
    for (std::uint32_t i = 0; i < 256; i += 8) {
        std::uint64_t w;
        std::memcpy(&w, code + ((entry + i) & 16383u), 8);
        h = fnv(h, w);
    }
    t_vu1_hash = h;
}
Source vu1_source() { return Source{t_vif1_ra, 0, t_vu1_entry, t_vu1_hash}; }
void set_kick_source(const Source &s) { t_kick_source = s; }

Source packet_source(int path) {
    if (path == 1) return t_kick_source;
    if (path == 2) return Source{t_vif1_ra, 0, ~0u, 0};
    return Source{g_dma_ra[2], g_dma_madr[2], ~0u, 0};
}

void set_tag(int path, const Source &s) {
    g_path = path;
    g_src = s;
}

void vblank(std::uint64_t frame) {
    if (dumping()) {
        flush_draw();
        if (open(g_frames, "frames.ndjson"))
            std::fprintf(g_frames, "{\"after_vblank\":%llu,\"gif_ns\":%llu,\"draw_ns\":%llu,\"prims\":%llu,\"draws\":%llu}\n",
                         static_cast<unsigned long long>(g_frame), static_cast<unsigned long long>(g_gif_ns), static_cast<unsigned long long>(g_draw_ns),
                         static_cast<unsigned long long>(g_frame_prims), static_cast<unsigned long long>(g_frame_draws));
    }
    g_gif_ns = g_draw_ns = g_frame_prims = g_frame_draws = 0;
    g_frame = frame;
    if (config().dump && frame > config().to)
        for (std::FILE **f : {&g_draws, &g_frames, &g_batches})
            if (*f) std::fclose(*f), *f = nullptr;
}

bool begin_prim(const State &s, int vertices) {
    const std::uint64_t eff = (s.prmodecont & 1u) ? s.prim : s.prmode;
    const Context &c = s.ctx[(eff >> 9) & 1u];
    const std::uint64_t flags = (s.prim & 7u) | (eff & 0x7F8u);
    std::uint32_t group = fnv(fnv(fnv(fnv(2166136261u, g_path), g_src.ra), (static_cast<std::uint64_t>(g_src.vu1_entry) << 32) | g_src.vu1_hash),
                              (c.tex0 & 0x3FFFFFFFFull) ^ (static_cast<std::uint64_t>(c.frame & 0x3F0001FFu) << 34));
    group = fnv(group, flags & 0x17u);
    g_skipping = !config().skip.empty() && g_frame >= config().skip_from && config().skip.count(group);
    if (!dumping()) return !g_skipping;
    Draw &d = g_draw;
    const bool same = d.prims && d.frame == g_frame && d.path == g_path && d.group == group && d.prim == flags && d.texa == s.texa &&
                      std::memcmp(&d.ctx, &c, sizeof c) == 0 && std::memcmp(&d.src, &g_src, sizeof g_src) == 0;
    const int ofx = static_cast<int>(c.xyoffset & 0xFFFFu), ofy = static_cast<int>((c.xyoffset >> 32) & 0xFFFFu);
    int x0 = 1 << 30, y0 = 1 << 30, x1 = -(1 << 30), y1 = -(1 << 30);
    for (int i = 0; i < vertices; ++i) {
        const int x = (static_cast<int>(s.queue[i].x & 0xFFFFu) - ofx) >> 4, y = (static_cast<int>(s.queue[i].y & 0xFFFFu) - ofy) >> 4;
        x0 = std::min(x0, x), y0 = std::min(y0, y), x1 = std::max(x1, x), y1 = std::max(y1, y);
    }
    if (!same) {
        flush_draw();
        d = Draw{};
        d.id = g_next_id++;
        d.frame = g_frame;
        d.path = g_path;
        d.src = g_src;
        d.group = group;
        d.prim = flags;
        d.texa = s.texa;
        d.ctx = c;
        d.x0 = x0, d.y0 = y0, d.x1 = x1, d.y1 = y1;
        ++g_frame_draws;
        if ((flags & 0x10u) && config().textures) {
            std::uint32_t key = fnv(fnv(2166136261u, c.tex0), s.texa);
            for (std::uint32_t i = 0; i < 256; ++i) key = fnv(key, s.clut[i]);
            d.tex = key ? key : 1;
            if (g_textures.insert(d.tex).second) {
                char name[32];
                std::snprintf(name, sizeof name, "/tex/%08x.pam", d.tex);
                raster::dump_texture(s, (config().dir + name).c_str());
            }
        }
    } else {
        d.x0 = std::min(d.x0, x0), d.y0 = std::min(d.y0, y0), d.x1 = std::max(d.x1, x1), d.y1 = std::max(d.y1, y1);
    }
    ++d.prims;
    ++g_frame_prims;
    return !g_skipping;
}

void end_prim(std::uint64_t ns) {
    g_draw_ns += ns;
    if (dumping()) g_draw.ns += ns;
}

void gif_time(std::uint64_t ns) { g_gif_ns += ns; }

std::uint32_t current_draw() { return dumping() && !g_skipping ? g_draw.id : ~0u; }

void batch(std::uint32_t seq, const std::vector<std::pair<std::uint32_t, std::uint32_t>> &draws) {
    if (!dumping() || draws.empty() || !open(g_batches, "batches.ndjson")) return;
    std::fprintf(g_batches, "{\"seq\":%u,\"after_vblank\":%llu,\"draws\":[", seq, static_cast<unsigned long long>(g_frame));
    for (std::size_t i = 0; i < draws.size(); ++i) std::fprintf(g_batches, "%s[%u,%u]", i ? "," : "", draws[i].first, draws[i].second);
    std::fputs("]}\n", g_batches);
}

}
