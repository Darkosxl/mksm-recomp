#include "vu_jit_web.hpp"

#include "vu_jit.hpp"

#include "ps2/system.hpp"

#include <cstdlib>
#include <cstring>

#ifdef __EMSCRIPTEN__
#include <emscripten.h>
#endif

namespace ps2::vu::jit {

bool g_dry = false;
std::int64_t g_escape = -1;
std::vector<std::uint32_t> *g_kicks = nullptr;

int mode() {
    static const int value = [] {
#ifdef __EMSCRIPTEN__
        // lockstep peers must agree on one mode, and check mode (3) rewrites VU1 memory while it compares
        if (ps2::g_options.lockstep) return 1;
        const char *env = std::getenv("PS2_VU_JIT");
        if (!env) return 1;
        if (std::strcmp(env, "all") == 0) return 2;
        if (std::strcmp(env, "check") == 0) return 3;
        return std::strcmp(env, "0") == 0 ? 0 : 1;
#else
        return 0;
#endif
    }();
    return value;
}

#ifdef __EMSCRIPTEN__

namespace {

struct State {
    vuops::FlagPipe fl;
    Reg128 scratch;
};

State g_state;

}

EM_JS_DEPS(ps2jit, "$addFunction");

EM_JS(int, ps2jit_instantiate, (const std::uint8_t *bytes, int size), {
    try {
        const module = new WebAssembly.Module(HEAPU8.slice(bytes, bytes + size));
        const env = {memory: wasmMemory};
        for (const entry of WebAssembly.Module.imports(module))
            if (entry.kind === 'function') env[entry.name] = wasmExports['ps2jit_' + entry.name];
        const instance = new WebAssembly.Instance(module, {env: env});
        return addFunction(instance.exports.run, 'vii');
    } catch (e) {
        console.warn('VU JIT failed', e);
        return 0;
    }
});

ProgramFn compile(const std::uint8_t *code, std::uint32_t entry) {
    std::vector<std::uint8_t> bytes;
    const Layout layout{static_cast<std::uint32_t>(reinterpret_cast<std::uintptr_t>(&g_state.fl)),
                        static_cast<std::uint32_t>(reinterpret_cast<std::uintptr_t>(&g_state.scratch))};
    if (!translate(code, entry, layout, bytes)) return nullptr;
    const int index = ps2jit_instantiate(bytes.data(), static_cast<int>(bytes.size()));
    if (!index) return nullptr;
    return reinterpret_cast<ProgramFn>(static_cast<std::uintptr_t>(index));
}

#else

ProgramFn compile(const std::uint8_t *, std::uint32_t) { return nullptr; }

#endif

}

#ifdef __EMSCRIPTEN__

using namespace ps2;

extern "C" {

EMSCRIPTEN_KEEPALIVE std::uint32_t ps2jit_clip_value(Vu0Regs *r, unsigned fs, unsigned ft) { return vuops::clip_value(*r, r->vf[fs], r->vf[ft].w[3]); }
EMSCRIPTEN_KEEPALIVE void ps2jit_clip_post(Vu0Regs *r, vuops::FlagPipe *fl, std::uint32_t c) {
    r->clip = c;
    fl->set_clip(c, fl->t);
}
EMSCRIPTEN_KEEPALIVE void ps2jit_set_clip(vuops::FlagPipe *fl, std::uint32_t c, std::uint32_t at) { fl->set_clip(c, at); }
EMSCRIPTEN_KEEPALIVE void ps2jit_start(vuops::FlagPipe *fl, Vu0Regs *r) {
    *fl = vuops::FlagPipe{};
    fl->start(*r);
}
EMSCRIPTEN_KEEPALIVE std::uint32_t ps2jit_mac(vuops::FlagPipe *fl) { return fl->mac(); }
EMSCRIPTEN_KEEPALIVE std::uint32_t ps2jit_status(vuops::FlagPipe *fl) { return fl->status(); }
EMSCRIPTEN_KEEPALIVE std::uint32_t ps2jit_clip(vuops::FlagPipe *fl) { return fl->clip(); }
EMSCRIPTEN_KEEPALIVE void ps2jit_force_mac(vuops::FlagPipe *fl, Vu0Regs *r) { fl->force_mac(r->mac, r->status); }
EMSCRIPTEN_KEEPALIVE std::uint32_t ps2jit_mul(std::uint32_t a, std::uint32_t b) { return vuops::mul(a, b); }
EMSCRIPTEN_KEEPALIVE std::uint32_t ps2jit_msub(std::uint32_t acc, std::uint32_t a, std::uint32_t b) { return vuops::msub(acc, a, b); }
EMSCRIPTEN_KEEPALIVE std::uint32_t ps2jit_to_fixed(std::uint32_t x, int frac) { return fp::to_fixed(x, frac); }
EMSCRIPTEN_KEEPALIVE std::uint32_t ps2jit_from_fixed(std::int32_t x, int frac) { return fp::from_fixed(x, frac); }
EMSCRIPTEN_KEEPALIVE void ps2jit_div(Vu0Regs *r, std::uint32_t s, std::uint32_t t, std::uint32_t latency) {
    const std::uint32_t before = vu::jit::g_state.fl.begin_q(*r);
    vu::div(*r, s, t);
    vu::jit::g_state.fl.end_q(*r, before, latency);
}
EMSCRIPTEN_KEEPALIVE void ps2jit_sqrt(Vu0Regs *r, std::uint32_t t, std::uint32_t latency) {
    const std::uint32_t before = vu::jit::g_state.fl.begin_q(*r);
    vu::sqrt(*r, t);
    vu::jit::g_state.fl.end_q(*r, before, latency);
}
EMSCRIPTEN_KEEPALIVE void ps2jit_rsqrt(Vu0Regs *r, std::uint32_t s, std::uint32_t t, std::uint32_t latency) {
    const std::uint32_t before = vu::jit::g_state.fl.begin_q(*r);
    vu::rsqrt(*r, s, t);
    vu::jit::g_state.fl.end_q(*r, before, latency);
}
EMSCRIPTEN_KEEPALIVE void ps2jit_sync_q(Vu0Regs *r) { vu::jit::g_state.fl.sync_q(*r); }
EMSCRIPTEN_KEEPALIVE void ps2jit_flush_q(Vu0Regs *r) { vu::jit::g_state.fl.flush_q(*r); }
EMSCRIPTEN_KEEPALIVE void ps2jit_efu(Vu0Regs *r, unsigned index, unsigned fs, unsigned fsf) { vuops::efu(*r, index, fs, fsf); }
EMSCRIPTEN_KEEPALIVE void ps2jit_kick(std::uint32_t address) {
    if (vu::jit::g_dry) {
        vu::jit::g_kicks->push_back(address);
        return;
    }
    vu::kick(1, address);
}
EMSCRIPTEN_KEEPALIVE std::uint32_t ps2jit_top() { return vu::top(); }
EMSCRIPTEN_KEEPALIVE std::uint32_t ps2jit_itop() { return vu::itop(); }
EMSCRIPTEN_KEEPALIVE std::uint32_t ps2jit_rand_next(std::uint32_t x) { return vu::rand_next(x); }
EMSCRIPTEN_KEEPALIVE void ps2jit_interpret(Vu0Regs *r, std::uint32_t pc) {
    vu::jit::g_state.fl.flush_q(*r);
    if (vu::jit::g_dry) {
        vu::jit::g_escape = pc;
        return;
    }
    vu::interpret(1, pc);
}

}

#endif
