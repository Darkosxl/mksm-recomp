// Synthetic difftest contexts (the "PS2DIFF1" files of runtime/src/decomp/difftest.cpp) for the batch-A functions
// that the boot/charsel/koop and scene recordings reach rarely or never (ArchiveGetFile's packed entries,
// MatrixTranslate, MemCardStateSetFlag, SetCharRenderFlag): random registers (upper halves included), random VU0
// registers and flags, a random 128 KB RAM region (plain words or EE edge-case floats) with the arguments pointing
// into it, including aliasing outputs. Replay them with build/native-mksm/difftest like recorded ones.
// On a box (never the laptop: each context is ~32 MB):
//   clang++ -std=c++20 -O2 -Iruntime/include decomp/difftest/synth/batch_a.cpp -o build/synth_a
//   build/synth_a <dir> 48 && build/native-mksm/difftest --keep-going <dir>
#include "ps2/cpu.hpp"
#include "ps2/memory.hpp"
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <random>
#include <string>
#include <vector>

using namespace ps2;
namespace {
constexpr std::uint32_t kBase = 0x100000, kSize = 0x20000, kVu0 = 4096;
std::vector<std::uint8_t> ram(kRamSize), spr(kScratchpadSize), vu0c(kVu0), vu0m(kVu0);
std::mt19937_64 rng(20261019);
std::uint64_t r64() { return rng(); }
std::uint32_t pick(std::uint32_t n) { return static_cast<std::uint32_t>(rng() % n); }
std::uint32_t ptr(std::uint32_t align, std::uint32_t room = 0x200) {
    std::uint32_t p = kBase + pick(kSize - room - 0x40);
    return pick(8) ? p & ~(align - 1) : p & ~3u;
}
void setp(Cpu &c, unsigned r, std::uint32_t v) { c.r[r].w[0] = v; if (pick(2)) c.r[r].w[1] = 0; }
std::uint32_t fl() {
    switch (pick(8)) {
    case 0: return 0; case 1: return 0x80000000u; case 2: return pick(0x800000) | (pick(2) << 31);
    case 3: return 0x7F000000u | pick(0x1000000); case 4: return 0x7FFFFFFFu | (pick(2) << 31);
    default: return (0x3A000000u + pick(0xA000000)) | (pick(2) << 31);
    }
}
void mats(Cpu &c) {
    setp(c, 4, ptr(16)); setp(c, 5, pick(6) ? ptr(16) : c.r[4].w[0] + 16 * (pick(5) - 2)); setp(c, 6, ptr(16));
    if (!pick(8)) c.r[5].w[0] = c.r[4].w[0];
}
void archive(Cpu &c) {
    const std::uint32_t arc = kBase + (pick(kSize - 0x3000) & ~15u);
    c.r[4].d[0] = (pick(2) ? r64() << 32 : 0) | arc;
    const std::uint32_t w8 = pick(2) ? 1u : pick(3) ? static_cast<std::uint32_t>(r64()) : 0u;
    std::memcpy(&ram[arc + 8], &w8, 4);
    const std::uint32_t dir = arc + (w8 == 1 ? 2048 : 32);
    if (!pick(3)) std::memset(&ram[dir], 0, 8);
    std::uint64_t first; std::memcpy(&first, &ram[dir], 8);
    const std::uint32_t entries = first ? dir : arc + 2048, idx = pick(256);
    c.r[5].w[0] = idx;
    std::uint64_t e = r64();
    if (pick(2)) e |= 1ull << 63; else e &= ~(1ull << 63);
    std::memcpy(&ram[entries + idx * 8], &e, 8);
    const std::uint32_t sp = kBase + 0x40 + (pick(kSize - 0x80) & ~15u);
    setp(c, 29, sp); setp(c, 6, ptr(4)); setp(c, 7, ptr(4));
    switch (pick(6)) {
    case 0: c.r[7].w[0] = c.r[6].w[0]; break;
    case 1: c.r[6].w[0] = sp - 16 + 4 * pick(4); break;
    case 2: c.r[7].w[0] = sp - 16 + 4 * pick(4); break;
    }
}
void memcard(Cpu &c) { setp(c, 4, ptr(4)); }
void none(Cpu &) {}

struct Header {
    char magic[8];
    std::uint32_t addr, index;
    std::uint64_t frame;
    std::uint32_t cpu_size, ram_size, spr_size, vu0_size;
};
}

int main(int argc, char **argv) {
    if (argc < 3) return 2;
    const std::string dir = argv[1];
    const int count = std::atoi(argv[2]);
    struct F { std::uint32_t addr; void (*setup)(Cpu &); } fs[] = {
        {0x002124C0u, archive}, {0x00214658u, mats}, {0x0021F618u, memcard}, {0x00225FC0u, none}};
    for (const F &f : fs)
        for (int i = 0; i < count; ++i) {
            std::fill(ram.begin(), ram.end(), 0);
            for (std::uint32_t a = kBase; a < kBase + kSize; a += 8) { const std::uint64_t v = r64(); std::memcpy(&ram[a], &v, 8); }
            if (pick(2)) for (std::uint32_t a = kBase; a < kBase + kSize; a += 4) { const std::uint32_t v = fl(); std::memcpy(&ram[a], &v, 4); }
            Cpu c;
            for (auto *p = reinterpret_cast<std::uint64_t *>(&c); p < reinterpret_cast<std::uint64_t *>(&c + 1); ++p) *p = r64();
            if (pick(2)) for (auto &v : c.vu0.vf) for (auto &w : v.w) w = fl();
            c.vu0.vf[0].w[0] = c.vu0.vf[0].w[1] = c.vu0.vf[0].w[2] = 0; c.vu0.vf[0].w[3] = 0x3F800000u;
            c.r[0].d[0] = c.r[0].d[1] = 0;
            c.r[31].d[0] = 0x00100008u; // a return address inside main RAM
            f.setup(c);
            Header h{{'P', 'S', '2', 'D', 'I', 'F', 'F', '1'}, f.addr, static_cast<std::uint32_t>(i), 0, sizeof(Cpu), kRamSize, kScratchpadSize, kVu0};
            char name[64];
            std::snprintf(name, sizeof name, "/%08X_%04d.ctx", f.addr, i);
            std::FILE *o = std::fopen((dir + name).c_str(), "wb");
            if (!o) { std::perror(name); return 1; }
            bool ok = std::fwrite(&h, sizeof h, 1, o) == 1 && std::fwrite(&c, sizeof c, 1, o) == 1 && std::fwrite(ram.data(), 1, ram.size(), o) == ram.size() &&
                      std::fwrite(spr.data(), 1, spr.size(), o) == spr.size() && std::fwrite(vu0c.data(), 1, kVu0, o) == kVu0 && std::fwrite(vu0m.data(), 1, kVu0, o) == kVu0;
            ok = std::fclose(o) == 0 && ok;
            if (!ok) { std::fprintf(stderr, "write failed %s\n", name); return 1; }
        }
    std::printf("%d contexts per function written to %s\n", count, dir.c_str());
}
