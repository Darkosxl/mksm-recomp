// probe_replay: replay one guest call offline from a PS2_PROBE_DUMP file through the real generated code; prints v0 and the
// structs at t0/a0 at entry (edit `words` for other calls). Build (B = build/native-mksm, R = repo root):
//   clang++ -std=c++20 -O1 -I$R/runtime/include -o probe_replay probe_replay.cpp $B/libps2game.a $B/libps2runtime.a \
//     -lSDL2 -ldatachannel $R/third_party/wgpu-native/lib/libwgpu_native.a -lavcodec -lswscale -lavutil -lopus -ldl -lpthread -lm
// Run: probe_replay dump_<hit>.bin   (works under gdb; break on ps2::call to trace indirect calls)
#include "ps2/generated.hpp"
#include "ps2/memory.hpp"
#include "ps2/system.hpp"
#include <cstdio>
#include <cstring>
#include <cstdlib>
void register_generated_code();
int main(int argc, char **argv) {
    using namespace ps2;
    register_generated_code();
    std::FILE *f = std::fopen(argv[1], "rb");
    std::uint32_t head[8];
    if (!f || std::fread(head, sizeof head, 1, f) != 1) return 1;
    static Cpu c;
    std::fread(&c, sizeof c, 1, f);
    std::fread(g_ram, 1, kRamSize, f);
    std::fclose(f);
    const std::uint32_t ra = c.r[31].w[0], t0 = c.r[8].w[0], a0 = c.r[4].w[0];
    c.budget = 1 << 30;
    c.pc = head[7];
    dispatch(c, 0, 0);
    std::printf("pc %08X ra %08X v0 %08X\n", c.pc, ra, c.r[2].w[0]);
    auto words = [](const char *n, std::uint32_t a, int k) { std::printf("%s %08X:", n, a); for (int i = 0; i < k; ++i) { std::uint32_t w; std::memcpy(&w, g_ram + a + 4 * i, 4); float x; std::memcpy(&x, &w, 4); std::printf(" %08X(%g)", w, x); } std::printf("\n"); };
    words("out(t0)", t0, 16);
    words("query(a0)", a0, 28);
    return 0;
}
