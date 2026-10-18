#include "texpack.hpp"
#include "raster.hpp"
#include "ps2/system.hpp"

#include <algorithm>
#include <chrono>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>

namespace ps2::gs::texpack {
namespace {

const char *dump_dir() {
    static const char *dir = [] {
        const char *d = std::getenv("PS2_TEX_DUMP");
        if (d) std::filesystem::create_directories(d);
        return d;
    }();
    return dir;
}
const char *pack_dir() {
    static const char *dir = std::getenv("PS2_TEX_PACK");
    return dir;
}

// Write generation of each 8 KB page of GS memory; a texture's key is reused while its pages' generations stay put.
constexpr std::uint32_t kPages = 512;
std::uint32_t g_generation[kPages];
bool g_drawn[kPages];

void page_dims(std::uint32_t psm, std::uint32_t &pw, std::uint32_t &ph) {
    switch (psm) {
    case PSMCT16: case PSMCT16S: case 0x32: case 0x3A: pw = 64, ph = 64; break;
    case PSMT8: pw = 128, ph = 64; break;
    case PSMT4: pw = 128, ph = 128; break;
    default: pw = 64, ph = 32; break;
    }
}

// Pages [first, last] (mod kPages) covering a rectangle: a superset when the buffer is wider than the rectangle.
void page_span(std::uint32_t bp, std::uint32_t bw, std::uint32_t psm, std::uint32_t x, std::uint32_t y, std::uint32_t w, std::uint32_t h,
               std::uint32_t &first, std::uint32_t &last) {
    std::uint32_t pw, ph;
    page_dims(psm, pw, ph);
    const std::uint32_t per_row = std::max<std::uint32_t>(1, bw * 64 / pw);
    first = bp / 32 + x / pw + (y / ph) * per_row;
    last = bp / 32 + (x + std::max<std::uint32_t>(w, 1) - 1) / pw + ((y + std::max<std::uint32_t>(h, 1) - 1) / ph) * per_row;
}

// Hash of one 8 KB page of the CPU copy of GS memory.
std::uint64_t hash_page(std::uint32_t page) {
    const std::uint8_t *m = memory() + static_cast<std::size_t>(page % kPages) * 8192;
    std::uint64_t h = 0;
    for (std::size_t i = 0; i < 8192; i += 8) {
        std::uint64_t w;
        std::memcpy(&w, m + i, 8);
        h = (h ^ w) * 0x9E3779B97F4A7C15ull;
        h ^= h >> 29;
    }
    return h;
}

// Word-wise mix for the cache ids (one multiply per word; the texture keys stay FNV over the decoded texels).
std::uint64_t mix(std::uint64_t h, std::uint64_t v) {
    h = (h ^ v) * 0x9E3779B97F4A7C15ull;
    return h ^ (h >> 29);
}

std::uint64_t fnv(std::uint64_t h, std::uint64_t v) {
    for (int i = 0; i < 8; ++i) h = (h ^ ((v >> (i * 8)) & 0xFFu)) * 0x100000001B3ull;
    return h;
}

Stats g_stats;
double ms_since(std::chrono::steady_clock::time_point t) { return std::chrono::duration<double, std::milli>(std::chrono::steady_clock::now() - t).count(); }

struct Pack {
    std::unordered_set<std::uint64_t> files;
    Pack() {
        if (!pack_dir()) return;
        std::error_code ec;
        for (const auto &e : std::filesystem::directory_iterator(pack_dir(), ec))
            if (e.path().extension() == ".pam") files.insert(std::strtoull(e.path().stem().c_str(), nullptr, 16));
        std::fprintf(stderr, "[texpack] %zu replacements in %s\n", files.size(), pack_dir());
    }
};
Pack &pack() {
    static Pack p;
    return p;
}

bool read_pam(const std::string &path, std::vector<std::uint32_t> &px, std::uint32_t &w, std::uint32_t &h) {
    std::FILE *f = std::fopen(path.c_str(), "rb");
    if (!f) return false;
    char line[128];
    w = h = 0;
    unsigned depth = 0;
    while (std::fgets(line, sizeof line, f) && std::string(line).rfind("ENDHDR", 0) != 0) {
        std::sscanf(line, "WIDTH %u", &w);
        std::sscanf(line, "HEIGHT %u", &h);
        std::sscanf(line, "DEPTH %u", &depth);
    }
    px.resize(static_cast<std::size_t>(w) * h);
    const bool ok = depth == 4 && w && h && std::fread(px.data(), 4, px.size(), f) == px.size();
    std::fclose(f);
    return ok;
}

}

bool active() { return dump_dir() || pack_dir(); }
bool packing() { return pack_dir() != nullptr; }

void touched(std::uint32_t bp, std::uint32_t bw, std::uint32_t psm, std::uint32_t x, std::uint32_t y, std::uint32_t w, std::uint32_t h) {
    std::uint32_t first, last;
    page_span(bp, bw, psm, x, y, w, h, first, last);
    for (std::uint32_t p = first; p <= last && p < first + kPages; ++p) ++g_generation[p % kPages], g_drawn[p % kPages] = false;
}

void drawn(std::uint32_t bp, std::uint32_t bw, std::uint32_t psm, std::uint32_t x0, std::uint32_t y0, std::uint32_t x1, std::uint32_t y1) {
    std::uint32_t first, last;
    page_span(bp, bw, psm, x0, y0, x1 - x0 + 1, y1 - y0 + 1, first, last);
    for (std::uint32_t p = first; p <= last && p < first + kPages; ++p) g_drawn[p % kPages] = true;
}

std::uint64_t key_uncounted(const State &st);
std::uint64_t key(const State &st) {
    const auto t0 = std::chrono::steady_clock::now();
    const std::uint64_t k = key_uncounted(st);
    g_stats.key_ms += ms_since(t0);
    return k;
}

std::uint64_t key_uncounted(const State &st) {
    const std::uint64_t eff = (st.prmodecont & 1u) ? st.prim : st.prmode;
    const Context &c = st.ctx[(eff >> 9) & 1u];
    const std::uint32_t tbp = static_cast<std::uint32_t>(c.tex0) & 0x3FFFu, tbw = static_cast<std::uint32_t>(c.tex0 >> 14) & 0x3Fu;
    const std::uint32_t psm = static_cast<std::uint32_t>(c.tex0 >> 20) & 0x3Fu;
    const std::uint32_t tw = static_cast<std::uint32_t>(c.tex0 >> 26) & 0xFu, th = static_cast<std::uint32_t>(c.tex0 >> 30) & 0xFu;
    if (tw > 10 || th > 10) return 0;
    // What decides the decoded texels: texture registers, the CLUT entries a palettized format uses, TEXA, and the
    // generations of the pages holding the texels.
    std::uint64_t id = mix(mix(0xCBF29CE484222325ull, c.tex0 & 0x7FFFFFFFFFull), st.texa);
    const bool palettized = psm == PSMT8 || psm == PSMT4 || psm == PSMT8H || psm == PSMT4HL || psm == PSMT4HH;
    if (palettized) {
        const std::uint32_t eight = psm == PSMT8 || psm == PSMT8H, csa = static_cast<std::uint32_t>(c.tex0 >> 56) & 0x1Fu;
        for (std::uint32_t i = 0; i < (eight ? 256u : 16u); ++i) id = mix(id, st.clut[eight ? i : (csa * 16 + i) & 511u]);
    }
    std::uint32_t first, last;
    page_span(tbp, tbw, psm, 0, 0, 1u << tw, 1u << th, first, last);
    std::uint64_t content = id;
    for (std::uint32_t p = first; p <= last && p < first + kPages; ++p) {
        if (g_drawn[p % kPages]) return 0;
        id = mix(id, g_generation[p % kPages]);
    }
    static std::unordered_map<std::uint64_t, std::uint64_t> known, by_content;
    if (const auto it = known.find(id); it != known.end()) return it->second;
    // The pages were rewritten: the game cycles its textures through the same pages every frame, so look the content up
    // (a hash of the raw pages, microseconds) before decoding it (milliseconds).
    for (std::uint32_t p = first; p <= last && p < first + kPages; ++p) content = mix(content, hash_page(p));
    if (known.size() > (1u << 20)) known.clear(), by_content.clear();
    if (const auto it = by_content.find(content); it != by_content.end()) return known[id] = it->second;
    const auto t0 = std::chrono::steady_clock::now();
    std::vector<std::uint32_t> texels;
    std::uint32_t w = 0, h = 0;
    if (!raster::decode_texture(st, texels, w, h)) return known[id] = by_content[content] = 0;
    std::uint64_t k = fnv(fnv(0xCBF29CE484222325ull, w), h);
    for (std::uint32_t t : texels) k = fnv(k, t);
    k = k ? k : 1;
    ++g_stats.decodes, g_stats.decode_ms += ms_since(t0);
    known[id] = by_content[content] = k;
    static std::unordered_set<std::uint64_t> dumped;
    if (dump_dir() && dumped.insert(k).second) {
        char name[64];
        std::snprintf(name, sizeof name, "/%016llx.pam", static_cast<unsigned long long>(k));
        if (std::FILE *f = std::fopen((std::string(dump_dir()) + name).c_str(), "wb")) {
            std::fprintf(f, "P7\nWIDTH %u\nHEIGHT %u\nDEPTH 4\nMAXVAL 255\nTUPLTYPE RGB_ALPHA\nENDHDR\n", w, h);
            std::fwrite(texels.data(), 4, texels.size(), f);
            std::fclose(f);
        }
        if (std::FILE *f = std::fopen((std::string(dump_dir()) + "/index.ndjson").c_str(), "a")) {
            std::fprintf(f, "{\"key\":\"%016llx\",\"w\":%u,\"h\":%u,\"psm\":%u,\"tbp\":%u,\"frame\":%llu,\"path\":%d}\n", static_cast<unsigned long long>(k), w, h,
                         psm, tbp, static_cast<unsigned long long>(frame_count()), g_render_path);
            std::fclose(f);
        }
    }
    return k;
}

std::vector<std::uint32_t> replacement(std::uint64_t key, std::uint32_t tw, std::uint32_t th, std::uint32_t &scale) {
    Pack &p = pack();
    if (!p.files.count(key)) return {};
    char name[64];
    std::snprintf(name, sizeof name, "/%016llx.pam", static_cast<unsigned long long>(key));
    std::vector<std::uint32_t> px;
    std::uint32_t w, h;
    const auto t0 = std::chrono::steady_clock::now();
    const bool read = read_pam(std::string(pack_dir()) + name, px, w, h);
    ++g_stats.loads, g_stats.load_ms += ms_since(t0), g_stats.load_mb += px.size() * 4.0 / (1 << 20);
    if (read) {
        for (std::uint32_t s = 1; s <= 3; ++s)
            if (w == (1u << (tw + s)) && h == (1u << (th + s))) return scale = s, px;
        std::fprintf(stderr, "[texpack] %s: %ux%u is not 2, 4 or 8 times %ux%u\n", name + 1, w, h, 1u << tw, 1u << th);
    }
    p.files.erase(key);  // unreadable or the wrong size: one attempt per key
    return {};
}

Stats &stats() { return g_stats; }
Stats take_stats() { return std::exchange(g_stats, {}); }

}
