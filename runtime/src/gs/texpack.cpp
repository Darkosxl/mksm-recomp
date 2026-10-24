#include "texpack.hpp"
#include "queue.hpp"
#include "raster.hpp"
#include "ps2/system.hpp"

#include <algorithm>
#include <atomic>
#include <bit>
#include <chrono>
#include <cmath>
#include <condition_variable>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <filesystem>
#include <memory>
#include <mutex>
#include <string>
#include <thread>
#ifdef __linux__
#include <pthread.h>
#endif
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

// Serial of the last write to each 8 KB page of GS memory (one serial per upload or local copy): a texture's key is
// reused while the newest of its pages' serials stays put.
constexpr std::uint32_t kPages = 512;
std::uint32_t g_generation[kPages], g_serial = 0;
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

// Word-wise mix for the cache ids (one multiply per word; the texture keys stay FNV over the decoded texels).
std::uint64_t mix(std::uint64_t h, std::uint64_t v) {
    h = (h ^ v) * 0x9E3779B97F4A7C15ull;
    return h ^ (h >> 29);
}

// Hash of one 8 KB page of the CPU copy of GS memory.
std::uint64_t hash_page(std::uint32_t page) {
    const std::uint8_t *m = memory() + static_cast<std::size_t>(page % kPages) * 8192;
    std::uint64_t h[4] = {0, 1, 2, 3};  // four chains, so the multiplies overlap: the game rewrites MBs of texture pages a frame
    for (std::size_t i = 0; i < 8192; i += 32)
        for (int k = 0; k < 4; ++k) {
            std::uint64_t w;
            std::memcpy(&w, m + i + k * 8, 8);
            h[k] = (h[k] ^ w) * 0x9E3779B97F4A7C15ull;
            h[k] ^= h[k] >> 29;
        }
    return mix(mix(mix(h[0], h[1]), h[2]), h[3]);
}

std::uint64_t fnv(std::uint64_t h, std::uint64_t v) {
    for (int i = 0; i < 8; ++i) h = (h ^ ((v >> (i * 8)) & 0xFFu)) * 0x100000001B3ull;
    return h;
}

// fnv() of a 32-bit value: its four zero high bytes only multiply by the prime, so they take one multiply by its fourth
// power.
std::uint64_t fnv32(std::uint64_t h, std::uint32_t v) {
    constexpr std::uint64_t kPrime4 = 0x100000001B3ull * 0x100000001B3ull * 0x100000001B3ull * 0x100000001B3ull;
    for (int i = 0; i < 4; ++i) h = (h ^ ((v >> (i * 8)) & 0xFFu)) * 0x100000001B3ull;
    return h * kPrime4;
}

Stats g_stats;
double ms_since(std::chrono::steady_clock::time_point t) { return std::chrono::duration<double, std::milli>(std::chrono::steady_clock::now() - t).count(); }

struct Pack {
    std::unordered_set<std::uint64_t> files;
    // sizes.txt (upscale.py): each file's original texture, "<key> <width> <height>". When it covers every file, keying
    // skips the sizes it doesn't list (bit TH of sizes[TW]): their keys can't be in the pack.
    std::uint32_t sizes[11] = {};
    bool sized = false;
#ifdef __EMSCRIPTEN__
    // Web: no pack dir, only <pack>/index.txt (remaster/webpack.py, written by the page before main): under
    // "#mksm-pack 1 gzip-up", "<key> <width> <height> <scale> <bytes> <file> [maps]" a texture; pack-worker.js fetches
    // the files.
    struct Remote {
        std::uint32_t width, words, shift;  // the replacement's
        std::string file;
    };
    std::unordered_map<std::uint64_t, Remote> remote;
#endif
    // fx.txt (texpack.hpp): the effects, and per listed texture its entry (fx[0]: none)
    struct Effect {
        std::string name;
        std::uint32_t period;
        float gain;
        std::vector<float> lut;  // r, g, b per step, 128 = 1.0
    };
    struct Fx {
        std::uint32_t effect, threshold;
    };
    std::vector<Effect> effects;
    std::vector<Fx> fx{Fx{}};
    std::unordered_map<std::uint64_t, std::uint32_t> fx_keys;
    void load_fx() {
        std::FILE *f = std::fopen((std::string(pack_dir()) + "/fx.txt").c_str(), "r");
        if (!f) return;
        char line[512], name[64], file[256];
        while (std::fgets(line, sizeof line, f)) {
            unsigned period, w, h;
            float gain, threshold = 0.06f;
            unsigned long long key;
            if (line[0] == '#') continue;
            if (std::sscanf(line, "fx %63s %u %f %255s", name, &period, &gain, file) == 4) {
                Effect e{name, std::max(period, 1u), gain, {}};
                const std::string path = file[0] == '/' ? std::string(file) : std::string(pack_dir()) + "/" + file;
                if (std::FILE *l = std::fopen(path.c_str(), "r")) {
                    char row[128];
                    float r, g, b;
                    while (std::fgets(row, sizeof row, l))
                        if (row[0] != '#' && std::sscanf(row, "%f %f %f", &r, &g, &b) == 3) e.lut.insert(e.lut.end(), {r, g, b});
                    std::fclose(l);
                }
                if (e.lut.empty()) std::fprintf(stderr, "[texpack] fx %s: no LUT in %s\n", name, path.c_str());
                else effects.push_back(std::move(e));
            } else if (std::sscanf(line, "%llx %u %u %63s %f", &key, &w, &h, name, &threshold) >= 4) {
                std::uint32_t e = 0;
                while (e < effects.size() && effects[e].name != name) ++e;
                if (e == effects.size() || !std::has_single_bit(w) || !std::has_single_bit(h) || w > 1024 || h > 1024) {
                    std::fprintf(stderr, "[texpack] fx: skipped %016llx (%ux%u, effect %s)\n", key, w, h, name);
                    continue;
                }
                fx.push_back({e, static_cast<std::uint32_t>(std::lround(std::clamp(threshold, 0.0f, 1.0f) * 255.0f))});
                fx_keys[key] = static_cast<std::uint32_t>(fx.size() - 1);
                sizes[std::countr_zero(w)] |= 1u << std::countr_zero(h);  // keyed even where the pack lists no file
            }
        }
        std::fclose(f);
        std::fprintf(stderr, "[texpack] fx: %zu effects, %zu textures\n", effects.size(), fx_keys.size());
    }
    Pack() {
        if (!pack_dir()) return;
        std::size_t listed = 0;
#ifdef __EMSCRIPTEN__
        if (std::FILE *f = std::fopen((std::string(pack_dir()) + "/index.txt").c_str(), "r")) {
            char line[64] = "", file[96];
            unsigned long long key;
            unsigned w, h, scale, bytes;
            if (std::fgets(line, sizeof line, f) && std::string(line).rfind("#mksm-pack 1 gzip-up", 0) == 0)
                while (std::fscanf(f, " %llx %u %u %u %u %95s%*[^\n]", &key, &w, &h, &scale, &bytes, file) == 6)
                    if (std::has_single_bit(w) && std::has_single_bit(h) && w <= 1024 && h <= 1024 && (scale == 2 || scale == 4 || scale == 8) &&
                        bytes == w * h * scale * scale * 4)
                        files.insert(key), remote[key] = {w * scale, bytes / 4, static_cast<std::uint32_t>(std::countr_zero(scale)), file}, ++listed,
                        sizes[std::countr_zero(w)] |= 1u << std::countr_zero(h);
            std::fclose(f);
        }
#else
        std::error_code ec;
        for (const auto &e : std::filesystem::directory_iterator(pack_dir(), ec))
            if (e.path().extension() == ".pam") files.insert(std::strtoull(e.path().stem().c_str(), nullptr, 16));
        if (std::FILE *f = std::fopen((std::string(pack_dir()) + "/sizes.txt").c_str(), "r")) {
            unsigned long long key;
            unsigned w, h;
            while (std::fscanf(f, "%llx %u %u", &key, &w, &h) == 3)
                if (files.count(key) && std::has_single_bit(w) && std::has_single_bit(h) && w <= 1024 && h <= 1024)
                    ++listed, sizes[std::countr_zero(w)] |= 1u << std::countr_zero(h);
            std::fclose(f);
        }
#endif
        sized = listed == files.size();
        load_fx();
        std::fprintf(stderr, "[texpack] %zu replacements in %s%s\n", files.size(), pack_dir(), sized ? ", sizes listed" : "");
    }
    bool fits(std::uint32_t tw, std::uint32_t th) const { return !sized || (tw <= 10 && th <= 10 && (sizes[tw] >> th & 1u)); }
};
Pack &pack() {
    static Pack p;
    return p;
}

#ifndef __EMSCRIPTEN__
// 1 read, 0 unreadable, -1 more than room pixels (left unread)
int read_pam(const std::string &path, std::vector<std::uint32_t> &px, std::uint32_t &w, std::uint32_t &h, std::size_t room = SIZE_MAX) {
    std::FILE *f = std::fopen(path.c_str(), "rb");
    if (!f) return 0;
    char line[128];
    w = h = 0;
    unsigned depth = 0;
    while (std::fgets(line, sizeof line, f) && std::string(line).rfind("ENDHDR", 0) != 0) {
        std::sscanf(line, "WIDTH %u", &w);
        std::sscanf(line, "HEIGHT %u", &h);
        std::sscanf(line, "DEPTH %u", &depth);
    }
    if (static_cast<std::size_t>(w) * h > room) return std::fclose(f), -1;
    px.resize(static_cast<std::size_t>(w) * h);
    const bool ok = depth == 4 && w && h && std::fread(px.data(), 4, px.size(), f) == px.size();
    std::fclose(f);
    return ok;
}

// With the render thread on its own (play), pack files are read here, off it: a cold read (btrfs zstd) stalled a frame
// up to 172 ms. The original texture shows until the file is in, usually a frame or two. Single-threaded runs and runs
// that capture frames (--frames-dir/--frames-pipe: a stall costs nothing in a video) read in place, so their images
// stay the same every run.
// ponytail: one thread, files in request order; a second one if map loads pop in too slowly.
struct Loaded {
    std::vector<std::uint32_t> px;
    std::uint32_t w = 0, h = 0;
    bool ok = false;
};
struct Loader {
    std::mutex m;
    std::condition_variable cv;
    std::deque<std::uint64_t> wanted;
    std::unordered_set<std::uint64_t> asked;  // wanted or ready, until taken
    std::unordered_map<std::uint64_t, Loaded> ready;
    Loader() {
        std::thread([this] {
#ifdef __linux__
            pthread_setname_np(pthread_self(), "texload");
#endif
            for (;;) {
                std::unique_lock lock(m);
                cv.wait(lock, [this] { return !wanted.empty(); });
                const std::uint64_t key = wanted.front();
                wanted.pop_front();
                lock.unlock();
                char name[64];
                std::snprintf(name, sizeof name, "/%016llx.pam", static_cast<unsigned long long>(key));
                Loaded f;
                f.ok = read_pam(std::string(pack_dir()) + name, f.px, f.w, f.h) > 0;
                lock.lock();
                ready[key] = std::move(f);
            }
        }).detach();
    }
};
Loader &loader() {
    static Loader l;
    return l;
}
#else
// Web: no thread to spare and no files. The render thread asks for a texture (replacement), the browser's main thread
// starts the fetch (service), and pack-worker.js fetches it (Cache Storage first), inflates and un-filters it straight
// into px and sets state the way ps2web_fetch does (3 in, 4 failed). At most 4 fetches and 64 MB in flight, 128 MB in
// but not yet taken (the oldest dropped), and 8 MB of replacements taken a frame (each one is a buffer write, and a cold cache delivers many at once).
// ponytail: requests in order; a requested texture's map siblings first once index lines carry maps.
constexpr std::size_t kFlying = 4, kFlyingBytes = 64u << 20, kInBytes = 128u << 20, kFrameBytes = 8u << 20;
struct Fetch {
    std::uint32_t width, words, shift;
    std::string file;
    std::vector<std::uint32_t> px;
    std::atomic<std::uint32_t> state{0};  // 0 queued, 2 fetching, 3 in, 4 failed (ps2web_fetch)
    bool in = false, failed = false;      // as service saw it
};
struct Fetches {
    std::mutex m;
    std::unordered_map<std::uint64_t, std::unique_ptr<Fetch>> all;  // queued, fetching or in, until taken
    std::deque<std::uint64_t> wanted, in;                           // queued; in, oldest first
    std::vector<std::uint64_t> flying;
    std::size_t flying_bytes = 0, in_bytes = 0;
};
Fetches &fetches() {
    static Fetches q;
    return q;
}
#endif

}

bool active() { return dump_dir() || pack_dir(); }
bool packing() { return pack_dir() != nullptr; }
bool dumping() { return dump_dir() != nullptr; }

// Bumped by everything a key depends on besides TEX0 and TEXA (page writes and draws, CLUT loads): key() reuses a
// key while it stands still, since most setup changes are ALPHA, TEST and the like, not the texture.
std::uint64_t g_epoch = 1;
// Bumped by CLUT loads, and by downloaded() with page reads, for the hashes below.
std::uint64_t g_clut_serial = 1, g_downloads = 1;

void clut_loaded() { ++g_epoch, ++g_clut_serial; }
void downloaded() { ++g_clut_serial, ++g_downloads; }

// hash_page while the page's generation stands: the game keys a texture again under each CLUT it draws with, and after
// every upload anywhere on its pages, mostly over pages that didn't change.
std::uint64_t page_content(std::uint32_t page) {
    struct Memo {
        std::uint64_t downloads;
        std::uint32_t generation;
        std::uint64_t hash;
    };
    static Memo memo[kPages];
    Memo &m = memo[page % kPages];
    if (m.downloads != g_downloads || m.generation != g_generation[page % kPages]) m = {g_downloads, g_generation[page % kPages], hash_page(page)};
    return m.hash;
}

// The CLUT entries a palettized texture reads (all 256, or the 16 at CSA), hashed once per CLUT load.
std::uint64_t clut_hash(const State &st, bool eight, std::uint32_t csa) {
    struct Memo {
        std::uint64_t serial, hash;
    };
    static Memo memo[33];
    Memo &m = memo[eight ? 32 : csa & 31u];
    if (m.serial != g_clut_serial) {
        const std::uint32_t *e = eight ? st.clut : st.clut + ((csa * 16) & 511u);  // 16 entries at CSA stay inside 512
        std::uint64_t lanes[4] = {0xCBF29CE484222325ull, 1, 2, 3};  // four chains over entry pairs, so the multiplies overlap
        for (std::uint32_t i = 0; i < (eight ? 256u : 16u); i += 2) lanes[(i >> 1) & 3] = mix(lanes[(i >> 1) & 3], e[i] | static_cast<std::uint64_t>(e[i + 1]) << 32);
        m = {g_clut_serial, mix(mix(mix(lanes[0], lanes[1]), lanes[2]), lanes[3])};
    }
    return m.hash;
}

void touched(std::uint32_t bp, std::uint32_t bw, std::uint32_t psm, std::uint32_t x, std::uint32_t y, std::uint32_t w, std::uint32_t h) {
    ++g_epoch;
    std::uint32_t first, last;
    page_span(bp, bw, psm, x, y, w, h, first, last);
    ++g_serial;
    for (std::uint32_t p = first; p <= last && p < first + kPages; ++p) g_generation[p % kPages] = g_serial, g_drawn[p % kPages] = false;
}

void drawn(std::uint32_t bp, std::uint32_t bw, std::uint32_t psm, std::uint32_t x0, std::uint32_t y0, std::uint32_t x1, std::uint32_t y1) {
    ++g_epoch;
    std::uint32_t first, last;
    page_span(bp, bw, psm, x0, y0, x1 - x0 + 1, y1 - y0 + 1, first, last);
    for (std::uint32_t p = first; p <= last && p < first + kPages; ++p) g_drawn[p % kPages] = true;
}

std::uint64_t key_uncounted(const State &st);

// The newest write serial over pages [first, last] (mod kPages), and whether the CPU renderer drew to any: one max and
// one or per page, which vectorize, where mixing every page's generation into the id was a multiply chain.
std::uint32_t span_serial(std::uint32_t first, std::uint32_t last, bool &drawn) {
    std::uint32_t newest = 0;
    bool any = false;
    const auto scan = [&](std::uint32_t from, std::uint32_t to) {
        for (std::uint32_t p = from; p < to; ++p) newest = std::max(newest, g_generation[p]), any |= g_drawn[p];
    };
    const std::uint32_t n = std::min(last - first + 1, kPages), a = first % kPages;
    if (a + n <= kPages) scan(a, a + n);
    else scan(a, kPages), scan(0, a + n - kPages);
    drawn = any;
    return newest;
}
std::uint64_t key(const State &st) {
    const std::uint64_t eff = (st.prmodecont & 1u) ? st.prim : st.prmode, tex0 = st.ctx[(eff >> 9) & 1u].tex0;
    if (!dump_dir() && !pack().fits((tex0 >> 26) & 0xFu, (tex0 >> 30) & 0xFu)) return 0;
    struct Memo {
        std::uint64_t tex0, texa, epoch, key;
    };
    static Memo memo[64];
    Memo &m = memo[(tex0 * 0x9E3779B97F4A7C15ull) >> 58];
    if (m.epoch != g_epoch || m.tex0 != tex0 || m.texa != st.texa) {
        const auto t0 = timing() ? std::chrono::steady_clock::now() : std::chrono::steady_clock::time_point{};
        m = {tex0, st.texa, g_epoch, key_uncounted(st)};
        if (timing()) g_stats.key_ms += ms_since(t0);
    }
    return m.key;
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
        id = mix(id, clut_hash(st, eight, csa));
    }
    std::uint32_t first, last;
    page_span(tbp, tbw, psm, 0, 0, 1u << tw, 1u << th, first, last);
    std::uint64_t content = id;
    bool drawn;
    id = mix(id, span_serial(first, last, drawn));
    if (drawn) return 0;
    // id -> key, direct-mapped: a new id comes with every upload to the texture's pages (hundreds a frame), and an
    // unordered_map of them cost 20-80 ms hitches as it rehashed and was cleared. A lost entry costs a content lookup.
    struct Known {
        std::uint64_t id = 0, key = 0;
    };
    static std::vector<Known> known(1u << 16);
    Known &kn = known[(id * 0x9E3779B97F4A7C15ull) >> 48];
    if (kn.id == id) return kn.key;
    static std::unordered_map<std::uint64_t, std::uint64_t> by_content;
    // The pages were rewritten: the game cycles its textures through the same pages every frame, so look the content up
    // (a hash of the raw pages, microseconds) before decoding it (milliseconds).
    std::uint64_t lanes[4] = {content, 1, 2, 3};  // four chains, so the multiplies overlap
    for (std::uint32_t p = first, i = 0; p <= last && p < first + kPages; ++p, ++i) lanes[i & 3] = mix(lanes[i & 3], page_content(p));
    content = mix(mix(mix(lanes[0], lanes[1]), lanes[2]), lanes[3]);
    if (by_content.size() > (1u << 20)) by_content.clear();
    if (const auto it = by_content.find(content); it != by_content.end()) return (kn = {id, it->second}).key;
    const auto t0 = std::chrono::steady_clock::now();
    std::vector<std::uint32_t> texels;
    std::uint32_t w = 0, h = 0;
    if (!raster::decode_texture(st, texels, w, h)) return (kn = {id, by_content[content] = 0}).key;
    std::uint64_t k = fnv(fnv(0xCBF29CE484222325ull, w), h);
    for (std::uint32_t t : texels) k = fnv32(k, t);
    k = k ? k : 1;
    ++g_stats.decodes, g_stats.decode_ms += ms_since(t0);
    kn = {id, by_content[content] = k};
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

std::vector<std::uint32_t> replacement(std::uint64_t key, std::uint32_t tw, std::uint32_t th, std::uint32_t &scale, std::size_t room) {
    Pack &p = pack();
    if (!p.files.count(key)) return {};
#ifdef __EMSCRIPTEN__
    const Pack::Remote &r = p.remote.at(key);
    if (r.words > room) return {};  // not fetched until it fits
    if (r.width != (1u << (tw + r.shift)) || r.words != r.width << (th + r.shift)) {
        std::fprintf(stderr, "[texpack] %s: %ux%u is not 2, 4 or 8 times %ux%u\n", r.file.c_str(), r.width, r.words / r.width, 1u << tw, 1u << th);
        p.files.erase(key);
        return {};
    }
    Fetches &q = fetches();
    std::lock_guard lock(q.m);
    auto it = q.all.find(key);
    if (it == q.all.end()) {
        Fetch &f = *q.all.emplace(key, std::make_unique<Fetch>()).first->second;
        f.width = r.width, f.words = r.words, f.shift = r.shift, f.file = r.file;
        q.wanted.push_back(key);
        ps2::wake_main_thread();  // texpack::service starts the fetch
        return {};
    }
    Fetch &f = *it->second;
    if (f.failed) {
        std::fprintf(stderr, "[texpack] %s: fetch failed\n", r.file.c_str());
        q.all.erase(it);
        p.files.erase(key);
        return {};
    }
    static std::uint64_t frame = ~0ull;
    static std::size_t taken = 0;
    if (frame != frame_count()) frame = frame_count(), taken = 0;
    if (!f.in || (taken && taken + f.words * 4ull > kFrameBytes)) return {};
    taken += f.words * 4ull;
    q.in.erase(std::find(q.in.begin(), q.in.end(), key));
    q.in_bytes -= f.words * 4ull;
    std::vector<std::uint32_t> px = std::move(f.px);
    scale = f.shift;
    q.all.erase(it);
    ++g_stats.loads, g_stats.load_mb += px.size() * 4.0 / (1 << 20);
    return px;
#else
    char name[64];
    std::snprintf(name, sizeof name, "/%016llx.pam", static_cast<unsigned long long>(key));
    Loaded f;
    static const bool off_thread = queue::active() && g_options.frames_dir.empty() && g_options.frames_pipe.empty();
    if (off_thread) {
        Loader &l = loader();
        std::lock_guard lock(l.m);
        auto it = l.ready.find(key);
        if (it == l.ready.end()) {
            if (l.asked.insert(key).second) l.wanted.push_back(key), l.cv.notify_one();
            return {};
        }
        if (it->second.px.size() > room) return {};  // stays loaded until it fits
        f = std::move(it->second);
        l.ready.erase(it);
        l.asked.erase(key);
    } else {
        const auto t0 = std::chrono::steady_clock::now();
        const int read = read_pam(std::string(pack_dir()) + name, f.px, f.w, f.h, room);
        g_stats.load_ms += ms_since(t0);
        if (read < 0) return {};
        f.ok = read > 0;
    }
    ++g_stats.loads, g_stats.load_mb += f.px.size() * 4.0 / (1 << 20);
    if (f.ok) {
        for (std::uint32_t s = 1; s <= 3; ++s)
            if (f.w == (1u << (tw + s)) && f.h == (1u << (th + s))) return scale = s, std::move(f.px);
        std::fprintf(stderr, "[texpack] %s: %ux%u is not 2, 4 or 8 times %ux%u\n", name + 1, f.w, f.h, 1u << tw, 1u << th);
    }
    p.files.erase(key);  // unreadable or the wrong size: one attempt per key
    return {};
#endif
}

#ifdef __EMSCRIPTEN__
void service(Fetcher fetch) {
    if (!pack_dir()) return;
    Fetches &q = fetches();
    std::lock_guard lock(q.m);
    for (std::size_t i = 0; i < q.flying.size();) {
        Fetch &f = *q.all.at(q.flying[i]);
        const std::uint32_t state = f.state.load(std::memory_order_acquire);
        if (state != 3 && state != 4) {
            ++i;
            continue;
        }
        q.flying_bytes -= f.words * 4ull;
        if (state == 3) f.in = true, q.in.push_back(q.flying[i]), q.in_bytes += f.words * 4ull;
        else f.failed = true, f.px = {};
        q.flying[i] = q.flying.back();
        q.flying.pop_back();
    }
    while (q.in_bytes > kInBytes) {
        q.in_bytes -= q.all.at(q.in.front())->words * 4ull;
        q.all.erase(q.in.front());
        q.in.pop_front();
    }
    while (!q.wanted.empty() && q.flying.size() < kFlying) {
        Fetch &f = *q.all.at(q.wanted.front());
        if (!q.flying.empty() && q.flying_bytes + f.words * 4ull > kFlyingBytes) break;
        q.flying.push_back(q.wanted.front());
        q.wanted.pop_front();
        q.flying_bytes += f.words * 4ull;
        f.px.resize(f.words);
        f.state.store(2, std::memory_order_release);
        fetch(f.file.c_str(), f.px.data(), static_cast<int>(f.words * 4), static_cast<int>(f.width * 4), &f.state);
    }
}
#endif

std::uint32_t fx(std::uint64_t key) {
    const Pack &p = pack();
    if (p.fx_keys.empty()) return 0;
    const auto it = p.fx_keys.find(key);
    return it == p.fx_keys.end() ? 0 : it->second;
}

std::uint32_t fx_word(std::uint32_t entry, std::uint64_t frame) {
    const Pack &p = pack();
    const Pack::Fx &x = p.fx[entry];
    const Pack::Effect &e = p.effects[x.effect];
    const std::size_t n = e.lut.size() / 3;
    const double at = static_cast<double>(frame % e.period) * static_cast<double>(n) / e.period;
    const std::size_t i = std::min(static_cast<std::size_t>(at), n - 1), j = (i + 1) % n;
    const float f = static_cast<float>(at - static_cast<double>(i));
    std::uint32_t word = x.threshold << 24;
    for (std::size_t c = 0; c < 3; ++c) {
        const float v = (e.lut[i * 3 + c] + (e.lut[j * 3 + c] - e.lut[i * 3 + c]) * f) / 128.0f * e.gain;
        word |= static_cast<std::uint32_t>(std::clamp(std::lround(v * 127.5f), 0l, 255l)) << (c * 8);
    }
    return word;
}

Stats &stats() { return g_stats; }
bool timing() {
    static const bool on = std::getenv("PS2_FRAME_LOG");
    return on;
}
Stats take_stats() { return std::exchange(g_stats, {}); }

}
