#include "ps2/disc.hpp"

#include "ps2/system.hpp"

#include <algorithm>
#include <cctype>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <map>
#include <memory>

namespace ps2::disc {

namespace {

std::FILE *g_file = nullptr;
Reader g_reader;
Probe g_probe;
std::uint64_t g_size = 0;
std::uint32_t g_layer1 = 0;
std::map<std::string, Entry> g_index;

std::uint32_t u32(const std::uint8_t *p) {
    std::uint32_t v;
    std::memcpy(&v, p, 4);
    return v;
}

std::string upper(std::string s) {
    for (char &c : s) c = static_cast<char>(std::toupper(static_cast<unsigned char>(c)));
    return s;
}

void walk(std::uint32_t base, std::uint32_t lba, std::uint32_t size, const std::string &prefix, int depth) {
    if (depth > 16) return;
    std::vector<std::uint8_t> data((size + kSector - 1) / kSector * kSector);
    if (!read(base + lba, static_cast<std::uint32_t>(data.size() / kSector), data.data())) return;
    std::size_t off = 0;
    while (off < size) {
        const std::uint8_t length = data[off];
        if (!length) {
            off = (off / kSector + 1) * kSector;
            continue;
        }
        const std::uint8_t *rec = &data[off];
        off += length;
        const std::uint8_t name_len = rec[32];
        std::string name(reinterpret_cast<const char *>(rec + 33), name_len);
        if (name_len == 1 && (name[0] == 0 || name[0] == 1)) continue;
        const auto semi = name.find(';');
        if (semi != std::string::npos) name = name.substr(0, semi);
        const std::string path = prefix + upper(name);
        const bool dir = rec[25] & 2;
        const Entry entry{base + u32(rec + 2), u32(rec + 10), dir};
        g_index[path] = entry;
        if (dir) walk(base, u32(rec + 2), u32(rec + 10), path + "/", depth + 1);
    }
}

void index_layer(std::uint32_t pvd_sector, std::uint32_t base) {
    std::uint8_t pvd[kSector];
    if (!read(pvd_sector, 1, pvd) || std::memcmp(pvd, "\x01" "CD001", 6) != 0) return;
    walk(base, u32(pvd + 158), u32(pvd + 166), "", 0);
}

}

// PS2_DISC_LATENCY=<ms>[:<jitter ms>[:<seed>]] (diagnostic, native only): the browser's remote disc (host/web.cpp,
// non-blocking mode) in emulated time. 256 KB chunks, a 256-chunk LRU cache and the same sequential read-ahead (up to
// 16 chunks); a chunk arrives <ms> (+ 0..jitter, seeded) of emulated time after it is first wanted, and the emulated
// drive waits for it (iop::kernel::disc_arrived) as it does in a browser on a slow connection.
Probe latency_probe() {
    const char *env = std::getenv("PS2_DISC_LATENCY");
    if (!env || !*env) return {};
    struct Model {
        std::uint64_t latency = 0, jitter = 0, rng = 1, use_clock = 0, last = ~0ull, run = 0, waits = 0;
        std::map<std::uint64_t, std::pair<std::uint64_t, std::uint64_t>> chunks;  // index -> {ready_at, used}
    };
    auto m = std::make_shared<Model>();
    unsigned long long ms = 0, jitter = 0, seed = 1;
    std::sscanf(env, "%llu:%llu:%llu", &ms, &jitter, &seed);
    m->latency = ms * kEeClock / 1000;
    m->jitter = jitter * kEeClock / 1000;
    m->rng = seed ? seed : 1;
    std::fprintf(stderr, "[disc] PS2_DISC_LATENCY: %llu ms + 0..%llu ms per 256 KB chunk (seed %llu)\n", ms, jitter, seed);
    static constexpr std::uint64_t kChunk = 256u << 10, kSlots = 256, kReadAhead = 16;
    auto want = [m](std::uint64_t index) -> std::uint64_t {
        if (index * kChunk >= g_size) return 0;
        auto it = m->chunks.find(index);
        if (it == m->chunks.end()) {
            if (m->chunks.size() >= kSlots) {
                auto victim = m->chunks.begin();
                for (auto i = m->chunks.begin(); i != m->chunks.end(); ++i)
                    if (i->second.second < victim->second.second) victim = i;
                m->chunks.erase(victim);
            }
            m->rng ^= m->rng << 13;
            m->rng ^= m->rng >> 7;
            m->rng ^= m->rng << 17;
            const std::uint64_t extra = m->jitter ? m->rng % (m->jitter + 1) : 0;
            it = m->chunks.emplace(index, std::make_pair(ps2::now() + m->latency + extra, 0)).first;
        }
        it->second.second = ++m->use_clock;
        return it->second.first;
    };
    return [m, want](std::uint64_t offset, std::size_t size) {
        if (!size) return true;
        const std::uint64_t last = (offset + size - 1) / kChunk, t = ps2::now();
        bool ready = true;
        for (std::uint64_t index = offset / kChunk; index <= last; ++index) {
            ready = want(index) <= t && ready;
            if (!(index <= m->last && m->last - index <= kReadAhead * 4)) {
                m->run = index == m->last + 1 ? m->run + 1 : 0;
                m->last = index;
            }
        }
        const std::uint64_t from = std::max(last, m->last);
        for (std::uint64_t k = 1; k <= std::min(m->run * 2, kReadAhead); ++k) want(from + k);
        return ready;
    };
}

bool open(const std::string &path) {
    g_file = std::fopen(path.c_str(), "rb");
    if (!g_file) return false;
#if defined(_WIN32)
    _fseeki64(g_file, 0, SEEK_END);
    const std::uint64_t size = static_cast<std::uint64_t>(_ftelli64(g_file));
#else
    fseeko(g_file, 0, SEEK_END);
    const std::uint64_t size = static_cast<std::uint64_t>(ftello(g_file));
#endif
    std::FILE *file = g_file;
    return open(path, size, [file](std::uint64_t offset, void *out, std::size_t bytes) {
#if defined(_WIN32)
        _fseeki64(file, static_cast<long long>(offset), SEEK_SET);
#else
        fseeko(file, static_cast<off_t>(offset), SEEK_SET);
#endif
        return std::fread(out, 1, bytes, file);
    }, latency_probe());
}

bool open(const std::string &name, std::uint64_t size, Reader reader, Probe probe) {
    g_reader = std::move(reader);
    g_probe = std::move(probe);
    g_size = size;
    g_index.clear();
    index_layer(16, 0);
    std::uint8_t pvd[kSector];
    read(16, 1, pvd);
    const std::uint32_t layer0 = u32(pvd + 80);
    for (std::uint32_t s = layer0; s < layer0 + 64 && static_cast<std::uint64_t>(s) * kSector < g_size; ++s) {
        std::uint8_t probe[kSector];
        if (read(s, 1, probe) && std::memcmp(probe, "\x01" "CD001", 6) == 0) {
            g_layer1 = s - 16;
            index_layer(s, g_layer1);
            break;
        }
    }
    std::fprintf(stderr, "[disc] %s: %zu files, %llu sectors, layer 1 at %u\n", name.c_str(), g_index.size(),
                 static_cast<unsigned long long>(g_size / kSector), g_layer1);
    return true;
}

bool is_open() { return static_cast<bool>(g_reader); }

bool read(std::uint32_t sector, std::uint32_t count, void *out) {
    if (!g_reader) return false;
    const std::size_t want = static_cast<std::size_t>(count) * kSector;
    std::size_t got = g_reader(static_cast<std::uint64_t>(sector) * kSector, out, want);
    // PS2_DISC_ZERO=<lsn hex> (diagnostic): the first read that covers that sector comes back as zeros from it on, as a
    // browser read does when its chunk fetch fails for good (host/web.cpp chunk() gives up, read_disc returns short).
    static std::uint32_t zero_at = [] {
        const char *env = std::getenv("PS2_DISC_ZERO");
        return env && *env ? static_cast<std::uint32_t>(std::strtoul(env, nullptr, 16)) : ~0u;
    }();
    if (zero_at != ~0u && sector <= zero_at && zero_at < sector + count) {
        std::fprintf(stderr, "[disc] PS2_DISC_ZERO: read lsn 0x%X count %u returns zeros from 0x%X\n", sector, count, zero_at);
        got = std::min(got, static_cast<std::size_t>(zero_at - sector) * kSector);
        zero_at = ~0u;
    }
    if (got < want) std::memset(static_cast<std::uint8_t *>(out) + got, 0, want - got);
    return got > 0 || !count;
}

bool ready(std::uint32_t sector, std::uint32_t count) {
    return !g_probe || g_probe(static_cast<std::uint64_t>(sector) * kSector, static_cast<std::size_t>(count) * kSector);
}

std::optional<Entry> find(const std::string &raw) {
    std::string path = raw;
    const auto colon = path.find(':');
    if (colon != std::string::npos) path = path.substr(colon + 1);
    std::replace(path.begin(), path.end(), '\\', '/');
    const auto semi = path.find(';');
    if (semi != std::string::npos) path = path.substr(0, semi);
    while (!path.empty() && path.front() == '/') path.erase(path.begin());
    auto it = g_index.find(upper(path));
    if (it == g_index.end()) return std::nullopt;
    return it->second;
}

std::uint32_t layer1_start() { return g_layer1; }
std::uint64_t sector_count() { return g_size / kSector; }

}
