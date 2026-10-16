// ray_scan: replay one ground-ray call FUN_002C0AA8 (a1 = result struct, ray start a1+0x20, end a1+0x30, game units)
// from a PS2_PROBE_DUMP file, optionally moved to other (x, z) positions, to map where the collision world has a floor.
// Build like probe_replay.cpp (B = build/native-mksm, R = repo root):
//   clang++ -std=c++20 -O1 -I$R/runtime/include -o ray_scan ray_scan.cpp $B/libps2game.a $B/libps2runtime.a \
//     -lSDL2 -ldatachannel $R/third_party/wgpu-native/lib/libwgpu_native.a -lavcodec -lswscale -lavutil -lopus -ldl -lpthread -lm
// Run: ray_scan dump.bin                          replay as captured, print the result struct
//      ray_scan dump.bin x z                      same ray moved to (x, z)
//      ray_scan dump.bin grid x0 x1 dx z0 z1 dz   one line per point: x z hits <n> y <hit height> contact <shape>
//      env Y0 / Y1 override the ray's start / end height (e.g. Y0=-60000 Y1=200000 to find geometry at any height).
// Link against a probe build's libs to get a function-entry trace of each call on stderr (notes/black-maps.md §4).
#include "ps2/generated.hpp"
#include "ps2/memory.hpp"
#include "ps2/system.hpp"
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <vector>
void register_generated_code();
using namespace ps2;
static Cpu base_cpu;
static std::vector<std::uint8_t> base_ram;
static std::uint32_t entry_pc;
static float rdf(std::uint32_t a) { float x; std::memcpy(&x, g_ram + a, 4); return x; }
static std::uint32_t rdw(std::uint32_t a) { std::uint32_t x; std::memcpy(&x, g_ram + a, 4); return x; }
static void wrf(std::uint32_t a, float x) { std::memcpy(g_ram + a, &x, 4); }
static void run(bool move, float x, float z, bool verbose) {
    static Cpu c; c = base_cpu;
    std::memcpy(g_ram, base_ram.data(), kRamSize);
    const std::uint32_t a1 = c.r[5].w[0];
    if (move) { wrf(a1 + 0x20, x); wrf(a1 + 0x28, z); wrf(a1 + 0x30, x); wrf(a1 + 0x38, z); }
    if (std::getenv("Y0")) wrf(a1 + 0x24, std::atof(std::getenv("Y0")));
    if (std::getenv("Y1")) wrf(a1 + 0x34, std::atof(std::getenv("Y1")));
    const float sy = rdf(a1 + 0x24), ey = rdf(a1 + 0x34);
    const float sx = rdf(a1 + 0x20), sz = rdf(a1 + 0x28);
    c.budget = 1 << 30; c.pc = entry_pc;
    dispatch(c, 0, 0);
    if (verbose) {
        std::printf("ray (%g %g %g) -> y %g  pc %08X v0 %08X\n", sx, sy, sz, ey, c.pc, c.r[2].w[0]);
        for (int i = 0; i < 20; ++i) { std::uint32_t w = rdw(a1 + 4 * i); std::printf(" +%02X %08X(%g)\n", 4 * i, w, rdf(a1 + 4 * i)); }
    } else {
        std::printf("%g %g hits %u y %g contact %08X v0 %08X\n", sx, sz, rdw(a1), rdf(a1 + 0x34), rdw(a1 + 0xC), c.r[2].w[0]);
    }
    std::fflush(stdout);
}
int main(int argc, char **argv) {
    register_generated_code();
    std::FILE *f = std::fopen(argv[1], "rb");
    std::uint32_t head[8];
    if (!f || std::fread(head, sizeof head, 1, f) != 1) return 1;
    std::fread(&base_cpu, sizeof base_cpu, 1, f);
    base_ram.resize(kRamSize);
    std::fread(base_ram.data(), 1, kRamSize, f);
    std::fclose(f);
    entry_pc = head[7];
    if (argc == 2) run(false, 0, 0, true);
    else if (argc == 4) run(true, std::atof(argv[2]), std::atof(argv[3]), true);
    else {
        const float x0 = std::atof(argv[3]), x1 = std::atof(argv[4]), dx = std::atof(argv[5]);
        const float z0 = std::atof(argv[6]), z1 = std::atof(argv[7]), dz = std::atof(argv[8]);
        for (float z = z0; z <= z1; z += dz) for (float x = x0; x <= x1; x += dx) run(true, x, z, false);
    }
    return 0;
}
