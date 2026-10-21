#pragma once

#include "cpu.hpp"
#include "fp_simd.hpp"
#include "fpu.hpp"

#include <cstdint>

namespace ps2::vu {

inline bool lane(unsigned dest, int i) { return dest & (8u >> i); }

template <typename F>
inline void apply(Vu0Regs &v, unsigned dest, unsigned fd, F f) {
    Reg128 r = v.vf[fd];
    for (int i = 0; i < 4; ++i)
        if (lane(dest, i)) r.w[i] = f(i);
    if (fd) v.vf[fd] = r;
}

template <typename F>
inline void apply_acc(Vu0Regs &v, unsigned dest, F f) {
    Reg128 r = v.acc;
    for (int i = 0; i < 4; ++i)
        if (lane(dest, i)) r.w[i] = f(i);
    v.acc = r;
}

// MAC/status flags of macro-mode arithmetic (same convention as the micro-mode interpreter in vu_micro.cpp):
// per written lane Z (exponent 0), S (sign), O (clamped to max); lanes outside dest read 0. Status keeps
// I/D (bits 4-5) and the sticky bits, sets Z/S/U/O from the MAC and ORs them into the sticky copies.
// Games read them with CFC2 vi17 right after an op whose result goes to vf0 (Havok's box raycast does).
inline u32x4 lane_bits(unsigned dest) { return fp::splat4(dest) & u32x4{8, 4, 2, 1}; }

// Bit 3 - i of the result is lane i of the mask (movmskps on x86).
inline std::uint32_t lane_flags(s32x4 m) {
    using b4 = bool __attribute__((ext_vector_type(4)));
    return __builtin_bit_cast(std::uint8_t, __builtin_convertvector(m < 0, b4)) & 0xFu;
}

inline std::uint32_t mac4(u32x4 x, unsigned dest) {
    const u32x4 r = __builtin_shufflevector(x, x, 3, 2, 1, 0);
    const std::uint32_t z = lane_flags((s32x4)((r & 0x7F800000u) == 0)), s = lane_flags((s32x4)r),
                        o = lane_flags((s32x4)((r & 0x7FFFFFFFu) == 0x7FFFFFFFu));
    return (z | (s << 4) | (o << 12)) & ((dest & 0xFu) * 0x1011u);
}

inline void set_mac(Vu0Regs &v, std::uint32_t mac) {
    v.mac = mac;
    // one bit per nonzero MAC nibble, gathered into bits 0-3 by the multiply (no carries)
    std::uint32_t any = mac | (mac >> 1);
    any |= any >> 2;
    const std::uint32_t flags = (((any & 0x1111u) * 0x1248u) >> 12) & 0xFu;
    v.status = (v.status & 0xFF0u) | flags | (flags << 6);
}

// Arithmetic results, all four lanes computed at once (fp_simd.hpp): write the dest lanes of fd (vf0 is
// read-only) and update the flags.
inline void arith(Vu0Regs &v, unsigned dest, unsigned fd, u32x4 x) {
    if (fd) v.vf[fd].uw4 = fp::select4((u32x4)(lane_bits(dest) != 0), x, v.vf[fd].uw4);
    set_mac(v, mac4(x, dest));
}

inline void arith_acc(Vu0Regs &v, unsigned dest, u32x4 x) {
    v.acc.uw4 = fp::select4((u32x4)(lane_bits(dest) != 0), x, v.acc.uw4);
    set_mac(v, mac4(x, dest));
}

inline u32x4 vf4(const Vu0Regs &v, unsigned r) { return v.vf[r].uw4; }

inline void add(Vu0Regs &v, unsigned dest, unsigned fd, unsigned fs, unsigned ft) {
    arith(v, dest, fd, fp::add4(vf4(v, fs), vf4(v, ft)));
}
inline void addbc(Vu0Regs &v, unsigned dest, unsigned fd, unsigned fs, std::uint32_t t) {
    arith(v, dest, fd, fp::add4(vf4(v, fs), fp::splat4(t)));
}
inline void sub(Vu0Regs &v, unsigned dest, unsigned fd, unsigned fs, unsigned ft) {
    arith(v, dest, fd, fp::sub4(vf4(v, fs), vf4(v, ft)));
}
inline void subbc(Vu0Regs &v, unsigned dest, unsigned fd, unsigned fs, std::uint32_t t) {
    arith(v, dest, fd, fp::sub4(vf4(v, fs), fp::splat4(t)));
}
inline void mul(Vu0Regs &v, unsigned dest, unsigned fd, unsigned fs, unsigned ft) {
    arith(v, dest, fd, fp::mul4(vf4(v, fs), vf4(v, ft)));
}
inline void mulbc(Vu0Regs &v, unsigned dest, unsigned fd, unsigned fs, std::uint32_t t) {
    arith(v, dest, fd, fp::mul4(vf4(v, fs), fp::splat4(t)));
}
inline void madd(Vu0Regs &v, unsigned dest, unsigned fd, unsigned fs, unsigned ft) {
    arith(v, dest, fd, fp::madd4(v.acc.uw4, vf4(v, fs), vf4(v, ft)));
}
inline void maddbc(Vu0Regs &v, unsigned dest, unsigned fd, unsigned fs, std::uint32_t t) {
    arith(v, dest, fd, fp::madd4(v.acc.uw4, vf4(v, fs), fp::splat4(t)));
}
inline void msub(Vu0Regs &v, unsigned dest, unsigned fd, unsigned fs, unsigned ft) {
    arith(v, dest, fd, fp::msub4(v.acc.uw4, vf4(v, fs), vf4(v, ft)));
}
inline void msubbc(Vu0Regs &v, unsigned dest, unsigned fd, unsigned fs, std::uint32_t t) {
    arith(v, dest, fd, fp::msub4(v.acc.uw4, vf4(v, fs), fp::splat4(t)));
}
inline void max(Vu0Regs &v, unsigned dest, unsigned fd, unsigned fs, unsigned ft) {
    apply(v, dest, fd, [&](int i) { return fp::max(v.vf[fs].w[i], v.vf[ft].w[i]); });
}
inline void maxbc(Vu0Regs &v, unsigned dest, unsigned fd, unsigned fs, std::uint32_t t) {
    apply(v, dest, fd, [&](int i) { return fp::max(v.vf[fs].w[i], t); });
}
inline void mini(Vu0Regs &v, unsigned dest, unsigned fd, unsigned fs, unsigned ft) {
    apply(v, dest, fd, [&](int i) { return fp::min(v.vf[fs].w[i], v.vf[ft].w[i]); });
}
inline void minibc(Vu0Regs &v, unsigned dest, unsigned fd, unsigned fs, std::uint32_t t) {
    apply(v, dest, fd, [&](int i) { return fp::min(v.vf[fs].w[i], t); });
}

inline void adda(Vu0Regs &v, unsigned dest, unsigned fs, unsigned ft) {
    arith_acc(v, dest, fp::add4(vf4(v, fs), vf4(v, ft)));
}
inline void addabc(Vu0Regs &v, unsigned dest, unsigned fs, std::uint32_t t) {
    arith_acc(v, dest, fp::add4(vf4(v, fs), fp::splat4(t)));
}
inline void suba(Vu0Regs &v, unsigned dest, unsigned fs, unsigned ft) {
    arith_acc(v, dest, fp::sub4(vf4(v, fs), vf4(v, ft)));
}
inline void subabc(Vu0Regs &v, unsigned dest, unsigned fs, std::uint32_t t) {
    arith_acc(v, dest, fp::sub4(vf4(v, fs), fp::splat4(t)));
}
inline void mula(Vu0Regs &v, unsigned dest, unsigned fs, unsigned ft) {
    arith_acc(v, dest, fp::mul4(vf4(v, fs), vf4(v, ft)));
}
inline void mulabc(Vu0Regs &v, unsigned dest, unsigned fs, std::uint32_t t) {
    arith_acc(v, dest, fp::mul4(vf4(v, fs), fp::splat4(t)));
}
inline void madda(Vu0Regs &v, unsigned dest, unsigned fs, unsigned ft) {
    arith_acc(v, dest, fp::madd4(v.acc.uw4, vf4(v, fs), vf4(v, ft)));
}
inline void maddabc(Vu0Regs &v, unsigned dest, unsigned fs, std::uint32_t t) {
    arith_acc(v, dest, fp::madd4(v.acc.uw4, vf4(v, fs), fp::splat4(t)));
}
inline void msuba(Vu0Regs &v, unsigned dest, unsigned fs, unsigned ft) {
    arith_acc(v, dest, fp::msub4(v.acc.uw4, vf4(v, fs), vf4(v, ft)));
}
inline void msubabc(Vu0Regs &v, unsigned dest, unsigned fs, std::uint32_t t) {
    arith_acc(v, dest, fp::msub4(v.acc.uw4, vf4(v, fs), fp::splat4(t)));
}

// Outer product halves: x = fs.y * ft.z, y = fs.z * ft.x, z = fs.x * ft.y; w is left alone and not flagged.
inline u32x4 op_s(u32x4 s) { return __builtin_shufflevector(s, s, 1, 2, 0, 3); }
inline u32x4 op_t(u32x4 t) { return __builtin_shufflevector(t, t, 2, 0, 1, 3); }

inline void opmula(Vu0Regs &v, unsigned fs, unsigned ft) {
    arith_acc(v, 0xEu, fp::mul4(op_s(vf4(v, fs)), op_t(vf4(v, ft))));
}

inline void opmsub(Vu0Regs &v, unsigned fd, unsigned fs, unsigned ft) {
    arith(v, 0xEu, fd, fp::msub4(v.acc.uw4, op_s(vf4(v, fs)), op_t(vf4(v, ft))));
}

inline void abs(Vu0Regs &v, unsigned dest, unsigned ft, unsigned fs) {
    apply(v, dest, ft, [&](int i) { return v.vf[fs].w[i] & fp::kAbs; });
}
inline void move(Vu0Regs &v, unsigned dest, unsigned ft, unsigned fs) {
    apply(v, dest, ft, [&](int i) { return v.vf[fs].w[i]; });
}
inline void mr32(Vu0Regs &v, unsigned dest, unsigned ft, unsigned fs) {
    const Reg128 s = v.vf[fs];
    apply(v, dest, ft, [&](int i) { return s.w[(i + 1) & 3]; });
}
inline void ftoi(Vu0Regs &v, unsigned dest, unsigned ft, unsigned fs, int fraction) {
    apply(v, dest, ft, [&](int i) { return fp::to_fixed(v.vf[fs].w[i], fraction); });
}
inline void itof(Vu0Regs &v, unsigned dest, unsigned ft, unsigned fs, int fraction) {
    apply(v, dest, ft, [&](int i) { return fp::from_fixed(v.vf[fs].sw[i], fraction); });
}

inline void clip(Vu0Regs &v, unsigned fs, unsigned ft) {
    const std::int32_t w = fp::key(v.vf[ft].w[3] & fp::kAbs);
    std::uint32_t flags = 0;
    for (int i = 0; i < 3; ++i) {
        const std::int32_t x = fp::key(v.vf[fs].w[i]);
        if (x > w) flags |= 1u << (i * 2);
        if (x < -w) flags |= 2u << (i * 2);
    }
    v.clip = ((v.clip << 6) | flags) & 0xFFFFFFu;
}

inline void div(Vu0Regs &v, std::uint32_t s, std::uint32_t t) {
    const fp::Result r = fp::div(s, t);
    v.q = r.value;
    v.status = (v.status & ~0x30u) | (r.invalid ? 0x20u : 0u);
}
inline void sqrt(Vu0Regs &v, std::uint32_t t) { v.q = fp::sqrt_chop(t); }
inline void rsqrt(Vu0Regs &v, std::uint32_t s, std::uint32_t t) {
    const fp::Result r = fp::rsqrt(s, t);
    v.q = r.value;
    v.status = (v.status & ~0x30u) | (r.invalid ? 0x20u : 0u);
}

inline void mfir(Vu0Regs &v, unsigned dest, unsigned ft, unsigned is) {
    const std::uint32_t value = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(v.vi[is])));
    apply(v, dest, ft, [&](int) { return value; });
}

inline void set_vi(Vu0Regs &v, unsigned index, std::uint32_t value) {
    if (index) v.vi[index] = static_cast<std::uint16_t>(value);
}

inline std::uint32_t rand_next(std::uint32_t r) {
    const std::uint32_t bit = ((r >> 4) ^ (r >> 22)) & 1u;
    return ((r << 1) | bit) & 0x7FFFFFu;
}

}
