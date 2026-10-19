#pragma once

// Decompiled functions: hand-written C++ that replaces a recompiled EE function at run time (decomp/README.md).
//
//   #include "ps2/decomp.hpp"
//   PS2_DECOMP(00474EDC, strlen) {          // defines decomp::fn_00474EDC and its hook record
//       const std::uint32_t s = c.r[4].w[0];
//       ...
//   }                                       // returning = `jr ra` (the runtime sets c.pc = ra)
//
// The function's address must also be listed in decomp/overrides.txt and the game retranslated, so its entry in the
// generated code calls decomp_enter(); PS2_DECOMP=off|all|<hex,hex...> picks at run time which ones replace the
// recompiled code (default off).
//
// Contract: on return the Cpu (every GPR including the 128-bit upper halves and dead temporaries, HI/LO, FPRs, FACC,
// FCR31, VU0, c.budget) and memory (including the stack frame below sp) must be exactly what the recompiled function
// leaves. The state hashes and lockstep co-op cover all of it, and decomp/difftest checks it call by call.
// Timing is part of the state: charge c.budget with tick() as the recompiled blocks do (the "c.budget -= N" lines), and
// where the recompiled loop checks for preemption (its backward branch: `if (c.budget < 0 && preempt(c))`) call
// poll() with the registers as the recompiled code has them there; if poll() returns true, return at once: the
// machine resumes later in the recompiled code at that address.
#include "ps2/decomp_hook.hpp"
#include "ps2/generated.hpp"
#include "ps2/psf.hpp"

#include <bit>
#include <cstdint>
#include <string>
#include <type_traits>
#include <vector>

#define PS2_DECOMP(addr, name)                                                    \
    namespace decomp {                                                            \
    void fn_##addr(ps2::Cpu &c);                                                  \
    ps2::DecompFn hook_##addr{0x##addr##u, #name, &fn_##addr};                    \
    }                                                                             \
    void decomp::fn_##addr([[maybe_unused]] ps2::Cpu &c)

namespace ps2 {

// ---- registry and configuration ----

const std::vector<DecompFn *> &decomp_functions();
DecompFn *decomp_find(std::uint32_t addr);
// PS2_DECOMP syntax: "off" (or empty), "all", or comma-separated hex addresses. Turns recording off.
void decomp_configure(const char *spec);
// difftest record mode: up to count contexts per function (funcs: "all" or hex list), every every-th entry after skip
void decomp_record(const char *dir, const char *funcs, std::uint32_t count, std::uint32_t every, std::uint32_t skip);
// both from the environment: PS2_DECOMP, PS2_DIFFTEST_RECORD/_FUNCS/_COUNT/_EVERY/_SKIP. The first hooked entry
// calls it when nothing configured the hooks before.
void decomp_configure_from_env();

// Runs f's body at depth as decomp_enter does when f is on (then `jr ra` unless control left it).
void decomp_run(Cpu &c, DecompFn &f, std::uint32_t depth);
// Runs the translated code at target the way a direct `jal` does: into its unit, c.pc untouched. False when the main
// program has no translated entry there.
bool run_at(Cpu &c, std::uint32_t target, std::uint32_t depth);

// ---- calling other EE functions from a decompiled one ----

// The return address of the original call site (its jal + 8). Passing it keeps ra, the callee's saved ra and the
// resume point exact: if the callee does not come back (a thread switch unwinds the host stack), the machine later
// returns into the recompiled caller at this address, which finishes the function from the state left here.
struct Ra {
    std::uint32_t pc;
};
inline constexpr std::uint32_t kDecompReturn = 0xFFFFFFF0u;

// `jal target` with ra = ra.pc. True when the callee returned there; false when control left this function (the
// caller must return at once: c.pc says where the machine goes on).
bool call(Cpu &c, std::uint32_t target, Ra ra);
// `jalr`: a call through a function pointer (sets c.pc = target first, as the recompiled jalr does)
bool call_ptr(Cpu &c, std::uint32_t target, Ra ra);
// A call with no original call site (new code, tests): ra is a sentinel and restored afterwards. Not state-exact.
bool call(Cpu &c, std::uint32_t target);
// `j target` / `jr reg` tail calls: the callee returns to this function's caller. Return right after.
void tail(Cpu &c, std::uint32_t target);
void tail_ptr(Cpu &c, std::uint32_t target);

// ---- timing ----

// what the recompiled block charges ("c.budget -= n")
inline void tick(Cpu &c, std::int32_t n) { c.budget -= n; }
bool poll_slow(Cpu &c, std::uint32_t resume);
// the recompiled backward-branch check, resuming at `resume` (the loop head) if the machine must unwind
inline bool poll(Cpu &c, std::uint32_t resume) { return c.budget < 0 && poll_slow(c, resume); }

// ---- registers ----

namespace gpr {
enum : unsigned { zero, at, v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7,
                  s0, s1, s2, s3, s4, s5, s6, s7, t8, t9, k0, k1, gp, sp, fp, ra };
}

// ---- typed views of emulated memory (the same access paths as the recompiled loads and stores) ----

template <class T>
T rd(std::uint32_t a) {
    static_assert(std::is_trivially_copyable_v<T> && (sizeof(T) == 1 || sizeof(T) == 2 || sizeof(T) == 4 || sizeof(T) == 8));
    if constexpr (sizeof(T) == 1) return std::bit_cast<T>(ld8(a));
    else if constexpr (sizeof(T) == 2) return std::bit_cast<T>(ld16(a));
    else if constexpr (sizeof(T) == 4) return std::bit_cast<T>(ld32(a));
    else return std::bit_cast<T>(ld64(a));
}

template <class T>
void wr(std::uint32_t a, T v) {
    static_assert(std::is_trivially_copyable_v<T> && (sizeof(T) == 1 || sizeof(T) == 2 || sizeof(T) == 4 || sizeof(T) == 8));
    if constexpr (sizeof(T) == 1) st8(a, std::bit_cast<std::uint8_t>(v));
    else if constexpr (sizeof(T) == 2) st16(a, std::bit_cast<std::uint16_t>(v));
    else if constexpr (sizeof(T) == 4) st32(a, std::bit_cast<std::uint32_t>(v));
    else st64(a, std::bit_cast<std::uint64_t>(v));
}

// A guest pointer: gptr<std::int16_t> p{c.r[gpr::a0].w[0]}; p[3], p.set(3, v), (p + 2).get()
template <class T>
struct gptr {
    std::uint32_t addr = 0;

    T get() const { return rd<T>(addr); }
    T operator*() const { return get(); }
    T operator[](std::int32_t i) const { return (*this + i).get(); }
    void set(T v) const { wr<T>(addr, v); }
    void set(std::int32_t i, T v) const { (*this + i).set(v); }
    gptr operator+(std::int32_t n) const { return {addr + static_cast<std::uint32_t>(n) * static_cast<std::uint32_t>(sizeof(T))}; }
    gptr operator-(std::int32_t n) const { return *this + -n; }
    gptr &operator+=(std::int32_t n) { return *this = *this + n; }
    gptr &operator++() { return *this += 1; }
    template <class U>
    gptr<U> as() const { return {addr}; }
    explicit operator bool() const { return addr != 0; }
};

// The original's stack frame, so the saved registers and every callee's frame land where the recompiled code puts
// them (the bytes below sp are part of the hashed state):
//   StackFrame f(c, 0x30);   // addiu sp, sp, -0x30
//   f.sq(gpr::ra, 0x20);     // sq ra, 0x20(sp)
//   ...
//   f.lq(gpr::ra, 0x20);     // lq ra, 0x20(sp)
//   f.pop();                 // addiu sp, sp, 0x30 (usually the jr ra delay slot)
struct StackFrame {
    Cpu &c;
    std::uint32_t size;

    StackFrame(Cpu &cpu, std::uint32_t bytes) : c(cpu), size(bytes) { set32(c.r[29], c.r[29].w[0] - size); }
    std::uint32_t at(std::uint32_t offset) const { return c.r[29].w[0] + offset; }
    void sq(unsigned r, std::uint32_t offset) const { st128(at(offset) & ~15u, c.r[r]); }
    void sd(unsigned r, std::uint32_t offset) const { st64(at(offset), c.r[r].d[0]); }
    void sw(unsigned r, std::uint32_t offset) const { st32(at(offset), c.r[r].w[0]); }
    void lq(unsigned r, std::uint32_t offset) const { ld128(at(offset) & ~15u, c.r[r]); }
    void ld(unsigned r, std::uint32_t offset) const { c.r[r].d[0] = ld64(at(offset)); }
    void lw(unsigned r, std::uint32_t offset) const { set32(c.r[r], ld32(at(offset))); }
    void pop() const { set32(c.r[29], c.r[29].w[0] + size); }
};

// ---- difftest contexts (decomp/difftest) ----

struct DiffContext {
    std::uint32_t addr = 0;
    std::uint32_t index = 0;
    std::uint64_t frame = 0;
    Cpu cpu{};
    std::vector<std::uint8_t> ram, spr, vu0_code, vu0_mem;
};

// writes the live machine (c, RAM, scratchpad, VU0 memory) as one context of f
bool difftest_save(const std::string &path, const DecompFn &f, std::uint32_t index, const Cpu &c);
bool difftest_load(const std::string &path, DiffContext &ctx, std::string &error);
// memory of ctx into the machine / the machine's memory into ctx
void difftest_restore(const DiffContext &ctx);
void difftest_capture(DiffContext &ctx);

}
