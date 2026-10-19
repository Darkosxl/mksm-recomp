#pragma once

// psf: one EE COP1 single-precision value with exactly the arithmetic of the recompiled code (ps2/fpu.hpp, the
// float emitters in recomp/codegen.cpp), so hand-written C++ computes the same bits as the recompiled function it
// replaces. The EE FPU is not IEEE: no Inf/NaN (overflow clamps to +-0x7FFFFFFF), denormals read and flush as zero,
// ADD/SUB/MUL chop instead of rounding, DIV.S/SQRT.S round to nearest, CVT.S.W chops, CVT.W.S truncates and saturates.
// Host float arithmetic gets every one of those wrong somewhere, and a single differing bit breaks the state hashes
// and lockstep co-op. So: never compute with float/double, keep values in psf (or raw bits) end to end.
//
//   ADD.S/SUB.S/MUL.S        a + b, a - b, a * b
//   MADD.S/MSUB.S            acc + a * b, acc - a * b   (exactly the recompiled fp::add(acc, fp::mul(a, b)); the
//                            original's ACC is c.facc: write it back if the original's ADDA/MULA/MADDA did)
//   DIV.S, RSQRT.S           div(c, a, b), rsqrt(c, a, b): they take the Cpu because x/0 sets FCR31 bits 0x30000
//   SQRT.S                   sqrt(a)
//   ABS.S/NEG.S/MOV.S        abs(a), -a, copy (bit operations: no flush, as on the EE)
//   C.EQ.S/C.LT.S/C.LE.S     a == b, a < b, a <= b (also >, >=, !=); these compare like the EE (-0 == +0,
//                            denormals are zero). The original's compare also leaves FCR31's condition bit:
//                            fpu_compare(c, a < b) when the decompiled function must leave it the same.
//   MAX.S/MIN.S              max(a, b), min(a, b)
//   CVT.W.S / CVT.S.W        to_int(a) / from_int(i)
//   LWC1/SWC1/MTC1/MFC1      raw bits: psf::from_bits(ld32(addr)), st32(addr, v.bits), c.f[n] = v.bits
#include "ps2/cpu.hpp"
#include "ps2/fpu.hpp"

#include <bit>
#include <cstdint>

namespace ps2 {

struct psf {
    std::uint32_t bits = 0;

    constexpr psf() = default;
    // the literal's own bits (a constant the original loads with LUI/ORI is psf::from_bits(that value))
    explicit constexpr psf(float f) : bits(std::bit_cast<std::uint32_t>(f)) {}
    static constexpr psf from_bits(std::uint32_t b) {
        psf r;
        r.bits = b;
        return r;
    }

    // for printing only: the host float with the same bits
    float host() const { return std::bit_cast<float>(bits); }

    friend psf operator+(psf a, psf b) { return from_bits(fp::add(a.bits, b.bits)); }
    friend psf operator-(psf a, psf b) { return from_bits(fp::sub(a.bits, b.bits)); }
    friend psf operator*(psf a, psf b) { return from_bits(fp::mul(a.bits, b.bits)); }
    friend psf operator-(psf a) { return from_bits(a.bits ^ fp::kSign); }
    psf &operator+=(psf b) { return *this = *this + b; }
    psf &operator-=(psf b) { return *this = *this - b; }
    psf &operator*=(psf b) { return *this = *this * b; }
    // no operator/: DIV.S has a side effect on FCR31, use div(c, a, b)

    friend bool operator==(psf a, psf b) { return fp::key(a.bits) == fp::key(b.bits); }
    friend bool operator<(psf a, psf b) { return fp::key(a.bits) < fp::key(b.bits); }
    friend bool operator<=(psf a, psf b) { return fp::key(a.bits) <= fp::key(b.bits); }
    friend bool operator>(psf a, psf b) { return b < a; }
    friend bool operator>=(psf a, psf b) { return b <= a; }

    bool same_bits(psf b) const { return bits == b.bits; }
};

inline psf abs(psf a) { return psf::from_bits(a.bits & fp::kAbs); }
inline psf max(psf a, psf b) { return psf::from_bits(fp::max(a.bits, b.bits)); }
inline psf min(psf a, psf b) { return psf::from_bits(fp::min(a.bits, b.bits)); }
inline psf sqrt(psf a) { return psf::from_bits(fp::sqrt(a.bits)); }
inline std::int32_t to_int(psf a) { return static_cast<std::int32_t>(fp::cvt_w_s(a.bits)); }
inline psf from_int(std::int32_t i) { return psf::from_bits(fp::cvt_s_w(static_cast<std::uint32_t>(i))); }

// DIV.S: rounds to nearest; a zero divisor gives +-0x7FFFFFFF and sets FCR31 bits 0x30000 (recomp fpu_div)
inline psf div(Cpu &c, psf a, psf b) {
    const fp::Result r = fp::div_nearest(a.bits, b.bits);
    if (r.invalid) c.fcr31 |= 0x30000u;
    return psf::from_bits(r.value);
}

// RSQRT.S: a / sqrt(b), the root chopped then the quotient chopped (recomp fpu_rsqrt)
inline psf rsqrt(Cpu &c, psf a, psf b) {
    const fp::Result r = fp::rsqrt(a.bits, b.bits);
    if (r.invalid) c.fcr31 |= 0x30000u;
    return psf::from_bits(r.value);
}

// COP1 registers as psf
inline psf fpr(const Cpu &c, unsigned n) { return psf::from_bits(c.f[n]); }
inline void set_fpr(Cpu &c, unsigned n, psf v) { c.f[n] = v.bits; }

}
