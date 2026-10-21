#pragma once

#include "cpu.hpp"
#include "fpu.hpp"

#include <cstdint>

// Four-lane fp::add/sub/mul, bit-exact with the scalar ones in fpu.hpp (which stay the reference). Integer ops plus
// int<->float conversions that are exact for the values they get, so SSE2 (and wasm simd128) is enough and the host
// rounding mode never matters.

#define PS2_FP_INLINE inline __attribute__((always_inline))

namespace ps2::fp {

PS2_FP_INLINE u32x4 splat4(std::uint32_t x) { return u32x4{x, x, x, x}; }
PS2_FP_INLINE u32x4 select4(u32x4 mask, u32x4 a, u32x4 b) { return (a & mask) | (b & ~mask); }

// Bits of the float conversion of x; exact while x < 2^24 or its low bits below the top 24 are clear.
PS2_FP_INLINE u32x4 float_bits4(u32x4 x) { return (u32x4)__builtin_convertvector((s32x4)x, f32x4); }

// High halves of the 32x32 -> 64 products (two pmuludq).
PS2_FP_INLINE u32x4 mulhi4(u32x4 a, u32x4 b) {
    const u64x2 even = ((u64x2)a & 0xFFFFFFFFu) * ((u64x2)b & 0xFFFFFFFFu);
    const u64x2 odd = ((u64x2)a >> 32) * ((u64x2)b >> 32);
    return __builtin_shufflevector((u32x4)even, (u32x4)odd, 1, 5, 3, 7);
}

PS2_FP_INLINE u32x4 add4(u32x4 a, u32x4 b) {
    // hi is the larger magnitude (a on ties) and gives the sign. Denormals are not flushed here: they only ever
    // end up as lo (masked off below) or as both operands (e == 0, a signed zero like the flushed pair gives)
    const u32x4 aa = a & kAbs, ba = b & kAbs;
    const u32x4 swap = (u32x4)((s32x4)ba > (s32x4)aa);
    const u32x4 t = (aa ^ ba) & swap;
    const u32x4 hi = aa ^ t, lo = ba ^ t;
    const u32x4 sign = (a ^ ((a ^ b) & swap)) & kSign;
    const u32x4 neg = (u32x4)((s32x4)(a ^ b) >> 31);
    const u32x4 e = hi >> 23;
    // lo's mantissa with the guard bit, chopped to the alignment: lo with exponent field 151 - diff is that value
    // and the truncating conversion floors it; the field saturates at 125 (diff >= 26: below 1/2, gives 0)
    const u32x4 room = (u32x4)__builtin_elementwise_sub_sat((u16x8){26, 0, 26, 0, 26, 0, 26, 0}, (u16x8)(e - (lo >> 23)));
    const u32x4 scaled = (lo & 0x7FFFFFu) + ((room + 125u) << 23);
    const u32x4 mb = (u32x4)__builtin_convertvector((f32x4)scaled, s32x4) & (u32x4)((s32x4)lo > 0x7FFFFF);
    const u32x4 ma = ((hi & 0x7FFFFFu) | 0x800000u) << 1;
    const u32x4 x = ma + ((mb ^ neg) - neg);
    // x < 2^26 chopped to 24 significant bits converts exactly; its exponent field is 151 + carry - shift, so
    // adding e - 151 to the field rebases it (e * 2^23 + mantissa, mod 2^32: e in [-23, 256])
    const u32x4 f = float_bits4(x & ~((x >> 24) | (x >> 25)));
    const s32x4 body = (s32x4)(f + ((e - 151u) << 23));
    const u32x4 over = (u32x4)(body < -(1 << 30));
    const u32x4 mag = select4(over, splat4(kAbs), (u32x4)body & ~(u32x4)(body < 0x800000));
    // exact cancellation is +0, and so is the sum of two zeros of opposite sign
    const u32x4 zero = neg & ((u32x4)(x == 0) | (u32x4)(e == 0));
    return (sign | mag) & ~zero;
}

PS2_FP_INLINE u32x4 sub4(u32x4 a, u32x4 b) { return add4(a, b ^ kSign); }

PS2_FP_INLINE u32x4 mul4(u32x4 a, u32x4 b) {
    const u32x4 sign = (a ^ b) & kSign;
    const u32x4 ea = a & 0x7F800000u, eb = b & 0x7F800000u;
    const u32x4 zero = (u32x4)(ea == 0) | (u32x4)(eb == 0);
    // (ma << 8) * (mb << 1) >> 32 == (ma * mb) >> 23, in [2^23, 2^25)
    const u32x4 p = mulhi4((a << 8) | kSign, ((b & 0x7FFFFFu) | 0x800000u) << 1);
    // chopped to 24 bits it converts exactly, exponent field 150 + carry; rebased to ea + eb - 127 + carry
    // (e * 2^23 + mantissa, mod 2^32: e in [-125, 384], so the overflowed ones wrap below -125 * 2^23)
    const u32x4 f = float_bits4(p & ~(p >> 24));
    const s32x4 body = (s32x4)(f + ea + eb - (277u << 23));
    const u32x4 over = (u32x4)(body < -(125 << 23)) & ~zero;
    const u32x4 under = (u32x4)(body < 0x800000) | zero;
    return sign | select4(over, splat4(kAbs), (u32x4)body & ~under);
}

PS2_FP_INLINE u32x4 madd4(u32x4 acc, u32x4 a, u32x4 b) { return add4(acc, mul4(a, b)); }
PS2_FP_INLINE u32x4 msub4(u32x4 acc, u32x4 a, u32x4 b) { return sub4(acc, mul4(a, b)); }

}
