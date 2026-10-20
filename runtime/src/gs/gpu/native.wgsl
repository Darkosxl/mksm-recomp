// Native renderer, stage 1 (decomp/notes/native-renderer.md §5.2): the world VU1 programs 567ce7d8, 002c80ed and
// 50bda0e2 transformed in a vertex shader from what VU1 is given (runtime/src/native.hpp) and drawn with a render
// pipeline. Appended to gs.wgsl: the bindings, prm(), load_setup(), texture() and read_sample() are shared, so texels,
// CLUT, TFX and fog are the compute raster's own code.
//
// Draw parameters, prm(i) (gpu.cpp native_batch):
//   0 batch record (word offset in data: 14 register qwords, then kVertexWords per vertex, then the XGKICK oracle)
//   1 program (1 567ce7d8, 2 002c80ed, 3 50bda0e2)   2 vertices   4 setup (word offset)   5, 6 XYOFFSET x, y (12.4)
//   7, 8 target size in pixels   9 split: 0 every pixel, 1 alpha-test pass pixels, 2 fail pixels   10 GS primitive
//   11 flags: 1 point light, 2 IIP, 4 oracle present, 8 hardware interpolation   12 always 0 (see opaque())   13 Z max   14 depth per Z unit (f32)
//   15 strip vertices whose CLIP flags the ADC of a vertex ORs, counted back from it (the VU1 flag pipeline)
// Import: 0 FBP, 1 FBW, 2 frame PSM, 3 ZBP, 4 Z PSM, 13 Z max, 14 depth per Z unit.

@group(0) @binding(8) var<storage, read_write> checks: array<atomic<u32>>;

// ---- VU1 arithmetic, bit for bit as the emulator does it (runtime/include/ps2/vu_ops.hpp): IEEE single precision,
// round to nearest, each operation rounded on its own (the runtime builds with -ffp-contract=off), denormals flushed and
// overflow clamped to the largest float (vfix). The products go through opaque() so that no compiler fuses them with
// the following add into an FMA: prm(12) is 0, but the compiler cannot know it.

fn opaque(u: u32) -> u32 {
    return u ^ prm(12u);
}

fn fixu(u: u32) -> u32 {
    let e = u & 0x7F800000u;
    if (e == 0u) {
        return u & 0x80000000u;
    }
    if (e == 0x7F800000u) {
        return (u & 0x80000000u) | 0x7F7FFFFFu;
    }
    return u;
}

fn fmul(a: u32, b: u32) -> u32 {
    return fixu(opaque(bitcast<u32>(bitcast<f32>(a) * bitcast<f32>(b))));
}

fn fadd(a: u32, b: u32) -> u32 {
    return fixu(opaque(bitcast<u32>(bitcast<f32>(a) + bitcast<f32>(b))));
}

fn fsub(a: u32, b: u32) -> u32 {
    return fixu(opaque(bitcast<u32>(bitcast<f32>(a) - bitcast<f32>(b))));
}

// fp::key: the integer order of PS2 floats (MAX/MIN, CLIP)
fn fkey(u: u32) -> i32 {
    var x = u;
    if ((x & 0x7F800000u) == 0u) {
        x = x & 0x80000000u;
    }
    let m = i32(x & 0x7FFFFFFFu);
    return select(m, -m, (x & 0x80000000u) != 0u);
}

fn fmax(a: u32, b: u32) -> u32 {
    return select(b, a, fkey(a) >= fkey(b));
}

fn fmin(a: u32, b: u32) -> u32 {
    return select(b, a, fkey(a) <= fkey(b));
}

// VU DIV (fp::div): the quotient chopped to 24 bits, by long division of the mantissas.
fn fdiv(a: u32, b: u32) -> u32 {
    let x = fixu(a);
    let y = fixu(b);
    let sign = (x ^ y) & 0x80000000u;
    if ((y & 0x7FFFFFFFu) == 0u) {
        return sign | 0x7FFFFFFFu;
    }
    if ((x & 0x7FFFFFFFu) == 0u) {
        return sign;
    }
    let ma = (x & 0x7FFFFFu) | 0x800000u;
    let mb = (y & 0x7FFFFFu) | 0x800000u;
    var q = select(0u, 1u, ma >= mb);
    var r = ma - q * mb;
    for (var i = 0u; i < 24u; i = i + 1u) {
        r = r << 1u;
        q = q << 1u;
        if (r >= mb) {
            r = r - mb;
            q = q | 1u;
        }
    }
    var e = i32((x >> 23u) & 0xFFu) - i32((y >> 23u) & 0xFFu) + 127;
    if (q >= 0x1000000u) {
        q = q >> 1u;
    } else {
        e = e - 1;
    }
    if (e > 255) {
        return sign | 0x7FFFFFFFu;
    }
    if (e <= 0) {
        return sign;
    }
    return sign | (u32(e) << 23u) | (q & 0x7FFFFFu);
}

fn itof(u: u32, fraction: u32) -> u32 {
    return bitcast<u32>(f32(bitcast<i32>(u)) * (1.0 / f32(1u << fraction)));
}

fn ftoi(u: u32, fraction: u32) -> u32 {
    let f = bitcast<f32>(fixu(u)) * f32(1u << fraction);
    if (f >= 2147483648.0) {
        return 0x7FFFFFFFu;
    }
    if (f < -2147483648.0) {
        return 0x80000000u;
    }
    return bitcast<u32>(i32(f));
}

// ESADD (vu_ops.hpp efu 0x70): x*x + y*y + z*z, each step rounded, no clamp between (the P register keeps the raw bits)
fn esadd(v: vec3<u32>) -> u32 {
    let x = bitcast<f32>(fixu(v.x));
    let y = bitcast<f32>(fixu(v.y));
    let z = bitcast<f32>(fixu(v.z));
    let xx = bitcast<f32>(opaque(bitcast<u32>(x * x)));
    let yy = bitcast<f32>(opaque(bitcast<u32>(y * y)));
    let zz = bitcast<f32>(opaque(bitcast<u32>(z * z)));
    let s = bitcast<f32>(opaque(bitcast<u32>(xx + yy)));
    return bitcast<u32>(s + zz);
}

// ---- The batch record

fn vf(i: u32, lane: u32) -> u32 {
    let at = select((i - 1u) * 4u, 48u, i == 31u);
    return data[prm(0u) + at + lane];
}

fn vi14() -> u32 {
    return data[prm(0u) + 52u] & 0xFFFFu;
}

fn vin(k: u32, w: u32) -> u32 {
    return data[prm(0u) + 56u + k * 12u + w];
}

fn oracle(k: u32, w: u32) -> u32 {
    if (is_char()) {
        return char_oracle(k, w);
    }
    return data[prm(0u) + 56u + prm(2u) * 12u + k * 12u + w];
}

const ONE: u32 = 0x3F800000u;

// ACC = vf[a]*x; ACC += vf[b]*y; ACC += vf[c]*z; out = ACC + vf[d]*1.0 (MUL, MADD, MADD, MADD with w = 1)
fn transform(a: u32, b: u32, c: u32, d: u32, p: vec3<u32>, lane: u32) -> u32 {
    var acc = fmul(fixu(vf(a, lane)), p.x);
    acc = fadd(acc, fmul(fixu(vf(b, lane)), p.y));
    acc = fadd(acc, fmul(fixu(vf(c, lane)), p.z));
    return fadd(acc, fmul(fixu(vf(d, lane)), ONE));
}

fn position(k: u32) -> vec3<u32> {
    return vec3<u32>(itof(vin(k, 0u), 0u), itof(vin(k, 1u), 0u), itof(vin(k, 2u), 0u));
}

fn homogeneous(k: u32) -> vec4<u32> {
    let p = position(k);
    return vec4<u32>(transform(1u, 2u, 3u, 4u, p, 0u), transform(1u, 2u, 3u, 4u, p, 1u), transform(1u, 2u, 3u, 4u, p, 2u), transform(1u, 2u, 3u, 4u, p, 3u));
}

// CLIP of the clip-volume transform (vf5, vf6, vf7, vf10 = mem[12..15]): 6 flag bits
fn clip_flags(k: u32) -> u32 {
    let p = position(k);
    let lim = fkey(transform(5u, 6u, 7u, 10u, p, 3u) & 0x7FFFFFFFu);
    var f = 0u;
    for (var i = 0u; i < 3u; i = i + 1u) {
        let x = fkey(transform(5u, 6u, 7u, 10u, p, i));
        if (x > lim) {
            f = f | (1u << (i * 2u));
        }
        if (x < -lim) {
            f = f | (2u << (i * 2u));
        }
    }
    return f;
}

// The strip-break bit the program writes for vertex k: the input's bit 15 (Q0.w), and for the CLIP programs whether any
// of the last three CLIP results it can see flags a vertex outside the clip volume (FCAND vi1, 0x3ffff).
fn adc_window(k: u32, back: u32) -> u32 {
    if (is_char()) {
        return (char_in(k).adcw >> 15u) & 1u;
    }
    let inw = vin(k, 3u) & 0xFFFFu;
    if (prm(1u) == 1u) {
        return inw & 0x8000u;
    }
    var any = 0u;
    for (var j = 0u; j < 3u; j = j + 1u) {
        let at = i32(k) - i32(back) - i32(j);
        if (at >= 0 && at < i32(prm(2u))) {
            any = any | clip_flags(u32(at));
        }
    }
    let flag = select(0u, 1u, any != 0u);
    return ((flag + 0x7FFFu) | inw) & 0x8000u;
}

fn adc(k: u32) -> u32 {
    return adc_window(k, prm(15u));
}

struct GsVertex {
    x: u32,
    y: u32,
    z: u32,
    f: u32,
    s: u32,
    t: u32,
    q: u32,
    rgba: u32,
}

// The colour the GS gets for vertex k: the RGBA slot as the colour UNPACK left it (what the emulated path sends), or with
// flag 1 the point light of 002c80ed/50bda0e2 applied to it first (hardware order, §3.3): rgb + (m7 - rgb) * f * m7.w,
// f = max(1 + k * |p - m6|^2, 0), FTOI0, alpha untouched. The GS keeps the low 8 bits of each word.
fn colour(k: u32) -> u32 {
    var w = vec4<u32>(vin(k, 8u), vin(k, 9u), vin(k, 10u), vin(k, 11u));
    if ((prm(11u) & 1u) != 0u && prm(1u) != 1u) {
        let p = position(k);
        let d = vec3<u32>(fsub(p.x, fixu(vf(8u, 0u))), fsub(p.y, fixu(vf(8u, 1u))), fsub(p.z, fixu(vf(8u, 2u))));
        let falloff = fmax(fadd(fmul(fixu(esadd(d)), fixu(vf(8u, 3u))), ONE), 0u);
        let strength = fixu(vf(9u, 3u));
        for (var j = 0u; j < 3u; j = j + 1u) {
            let c = itof(w[j], 0u);
            let lit = fadd(c, fmul(fmul(fsub(fixu(vf(9u, j)), c), falloff), strength));
            w[j] = ftoi(lit, 0u);
        }
    }
    return (w.x & 0xFFu) | ((w.y & 0xFFu) << 8u) | ((w.z & 0xFFu) << 16u) | ((w.w & 0xFFu) << 24u);
}

// Vertex k as the program sends it to the GS (PACKED ST, RGBAQ, XYZF2): Q = 1/w (DIV, chopped), XYZ = FTOI4(h * Q),
// STQ = ITOF12(s, t, q) * Q (+ the UV scroll hook @30E0: s, t += mem[17].xy * Q), fog F = clamp(A + B * Q) (vf5/vf11,
// vf6.w/vf12.w); 50bda0e2 has no fog.
fn gs_vertex(k: u32) -> GsVertex {
    if (is_char()) {
        return char_vertex(k);
    }
    let h = homogeneous(k);
    let q = fdiv(ONE, h.w);
    var v: GsVertex;
    v.x = ftoi(fmul(h.x, q), 4u) & 0xFFFFu;
    v.y = ftoi(fmul(h.y, q), 4u) & 0xFFFFu;
    v.z = (ftoi(fmul(h.z, q), 4u) >> 4u) & 0xFFFFFFu;
    v.f = 0xFFu;
    if (prm(1u) != 3u) {
        let fog = select(5u, 11u, prm(1u) == 2u);
        let fogb = select(6u, 12u, prm(1u) == 2u);
        var f = fadd(fmul(fixu(vf(fog, 3u)), ONE), fmul(fixu(vf(fogb, 3u)), q));
        f = fmin(f, vf(fog, 1u));
        f = fmax(f, vf(fog, 0u));
        v.f = ((ftoi(f, 4u) & 0xFFFFu) >> 4u) & 0xFFu;
    }
    v.s = fmul(itof(vin(k, 4u), 12u), q);
    v.t = fmul(itof(vin(k, 5u), 12u), q);
    v.q = fmul(itof(vin(k, 6u), 12u), q);
    if (vi14() != 0u) {
        v.s = fadd(fmul(fixu(vf(31u, 0u)), v.q), v.s);
        v.t = fadd(fmul(fixu(vf(31u, 1u)), v.q), v.t);
    }
    v.rgba = colour(k);
    return v;
}

fn gs_z(k: u32) -> u32 {
    if (is_char()) {
        return char_vertex(k).z;
    }
    let h = homogeneous(k);
    return (ftoi(fmul(h.z, fdiv(ONE, h.w)), 4u) >> 4u) & 0xFFFFFFu;
}

// ---- Characters (§3.4, §7.4): the six bodies of images A (3 passes) and B (1 pass), with the VU's arithmetic as above.
// Record (gpu.cpp native_record, native.hpp Batch): vf0..vf31, then I in the first word of the next qword; mem[0..45];
// the input from TOP (in[0..2], then per vertex 2 qwords (rigid: x y z nz, s t nx ny) or 3 (x y z wA, s t wB wC,
// nx ny nz)); then n x 3 output qwords of each XGKICK. prm(1): 16 A rigid @00A8, 17 A 2 bones @07A8, 18 A 3 bones @0EF0,
// 19 B rigid @0108, 20 B 2 bones @0410, 21 B 3 bones @08D0; prm(3): the pass (0 base, 1 highlight, 2 shading).

fn is_char() -> bool {
    return prm(1u) >= 16u;
}

fn char_rigid() -> bool {
    return prm(1u) == 16u || prm(1u) == 19u;
}

fn char_stride() -> u32 {
    return select(3u, 2u, char_rigid());
}

fn qword4(at: u32) -> vec4<u32> {
    return vec4<u32>(data[at], data[at + 1u], data[at + 2u], data[at + 3u]);
}

fn creg(i: u32) -> vec4<u32> {
    return qword4(prm(0u) + i * 4u);
}

fn cmem(m: u32) -> vec4<u32> {
    return qword4(prm(0u) + 132u + m * 4u);
}

fn char_oracle(k: u32, w: u32) -> u32 {
    return data[prm(0u) + 316u + (3u + prm(2u) * char_stride()) * 4u + (prm(3u) * prm(2u) + k) * 12u + w];
}

fn fix3(v: vec4<u32>) -> vec3<u32> {
    return vec3<u32>(fixu(v.x), fixu(v.y), fixu(v.z));
}

fn fix4(v: vec4<u32>) -> vec4<u32> {
    return vec4<u32>(fixu(v.x), fixu(v.y), fixu(v.z), fixu(v.w));
}

// MUL / MADD with a broadcast operand (MULAx, MADDy ...): the lanes go through the same RNE steps as one VU op
fn mul3(a: vec3<u32>, b: u32) -> vec3<u32> {
    return vec3<u32>(fmul(a.x, b), fmul(a.y, b), fmul(a.z, b));
}

fn madd3(acc: vec3<u32>, a: vec3<u32>, b: u32) -> vec3<u32> {
    return vec3<u32>(fadd(acc.x, fmul(a.x, b)), fadd(acc.y, fmul(a.y, b)), fadd(acc.z, fmul(a.z, b)));
}

fn mul4(a: vec4<u32>, b: u32) -> vec4<u32> {
    return vec4<u32>(fmul(a.x, b), fmul(a.y, b), fmul(a.z, b), fmul(a.w, b));
}

fn madd4(acc: vec4<u32>, a: vec4<u32>, b: u32) -> vec4<u32> {
    return vec4<u32>(fadd(acc.x, fmul(a.x, b)), fadd(acc.y, fmul(a.y, b)), fadd(acc.z, fmul(a.z, b)), fadd(acc.w, fmul(a.w, b)));
}

// (a * v.x + b * v.y) + c * v.z (+ d * 1.0): MULAx, MADDAy, MADDz (MADDAz, MADDw)
fn dot3(a: vec3<u32>, b: vec3<u32>, c: vec3<u32>, v: vec3<u32>) -> vec3<u32> {
    return madd3(madd3(mul3(a, v.x), b, v.y), c, v.z);
}

struct CharIn {
    p: vec3<u32>,   // position
    n: vec3<u32>,   // model normal
    w: vec3<u32>,   // bone weights
    s: u32,         // S and T as loaded (MOVE: raw bits; the skinned strip break sits in bit 0 of S)
    t: u32,
    adcw: u32,      // XYZF2's last word: rigid nz as loaded (SQ.w), skinned 0x7fff + (S & 1) (ISW.w)
}

fn char_in(k: u32) -> CharIn {
    let at = prm(0u) + 316u + (3u + k * char_stride()) * 4u;
    let q0 = qword4(at);
    let q1 = qword4(at + 4u);
    var v: CharIn;
    v.p = fix3(q0);
    v.s = q1.x;
    v.t = q1.y;
    if (char_rigid()) {
        v.n = vec3<u32>(fixu(q1.z), fixu(q1.w), fixu(q0.w));
        v.w = vec3<u32>(0u);
        v.adcw = q0.w;
    } else {
        v.n = fix3(qword4(at + 8u));
        v.w = vec3<u32>(fixu(q0.w), fixu(q1.z), fixu(q1.w));
        v.adcw = 0x7FFFu + (q1.x & 1u);
    }
    return v;
}

// Column j of the blended matrix: MULAw (bone A x wA), MADDAz (+ bone B x wB), MADDw (+ bone C x wC)
fn char_column(j: u32, w: vec3<u32>) -> vec3<u32> {
    switch prm(1u) {
        case 17u {
            return madd3(mul3(fix3(creg(5u + j)), w.x), fix3(creg(9u + j)), w.y);
        }
        case 18u {
            return madd3(madd3(mul3(fix3(creg(5u + j)), w.x), fix3(creg(9u + j)), w.y), fix3(creg(13u + j)), w.z);
        }
        case 20u {
            return madd3(mul3(fix3(creg(8u + j)), w.x), fix3(creg(12u + j)), w.y);
        }
        case 21u {
            return madd3(madd3(mul3(fix3(creg(8u + j)), w.x), fix3(creg(12u + j)), w.y), fix3(creg(16u + j)), w.z);
        }
        default {
            return fix3(creg(8u + j));  // A rigid: M = vf8..vf11
        }
    }
}

fn light_reg(i: u32) -> vec3<u32> {  // the transposed light directions (A 3 bones loads them from mem[4..6])
    switch prm(1u) {
        case 17u {
            return fix3(creg(13u + i));
        }
        case 18u {
            return fix3(cmem(4u + i));
        }
        case 19u {
            return fix3(creg(9u + i));  // pre-rotated into model space by the init
        }
        default {
            return fix3(creg(5u + i));
        }
    }
}

fn colour_reg(i: u32) -> vec4<u32> {  // light colours 0..2, then the ambient (raw: its w is moved, not computed)
    switch prm(1u) {
        case 16u {
            return creg(12u + i);
        }
        case 18u {
            return cmem(8u + i);
        }
        case 19u {
            return creg(1u + i);
        }
        case 21u {
            return creg(20u + i);
        }
        default {
            return creg(16u + i);
        }
    }
}

fn char_vertex(k: u32) -> GsVertex {
    let v = char_in(k);
    var wp = vec3<u32>(0u);
    var nw = v.n;
    var clip: vec4<u32>;
    if (prm(1u) == 19u) {
        // B rigid: P x M premultiplied by the init (vf5..vf8)
        clip = madd4(madd4(madd4(mul4(fix4(creg(5u)), v.p.x), fix4(creg(6u)), v.p.y), fix4(creg(7u)), v.p.z), fix4(creg(8u)), ONE);
    } else {
        let c0 = char_column(0u, v.w);
        let c1 = char_column(1u, v.w);
        let c2 = char_column(2u, v.w);
        wp = madd3(dot3(c0, c1, c2, v.p), char_column(3u, v.w), ONE);
        nw = dot3(c0, c1, c2, v.n);
        clip = madd4(madd4(madd4(mul4(fix4(creg(1u)), wp.x), fix4(creg(2u)), wp.y), fix4(creg(3u)), wp.z), fix4(creg(4u)), ONE);
    }
    let q = fixu(fdiv(ONE, clip.w));
    var out: GsVertex;
    out.x = ftoi(fmul(clip.x, q), 4u) & 0xFFFFu;
    out.y = ftoi(fmul(clip.y, q), 4u) & 0xFFFFu;
    out.z = (ftoi(fmul(clip.z, q), 4u) >> 4u) & 0xFFFFFFu;
    out.f = (v.adcw >> 4u) & 0xFFu;
    out.q = ONE;
    let which = prm(3u);
    if (which == 0u) {
        // d = max(L . n, 0); rgb = sum of colour x d + ambient; MINIi against I (2^23 + 255): the GS keeps the low bytes
        let dd = dot3(light_reg(0u), light_reg(1u), light_reg(2u), nw);
        let d = vec3<u32>(fmax(dd.x, 0u), fmax(dd.y, 0u), fmax(dd.z, 0u));
        let amb = colour_reg(3u);
        let rgb = madd3(dot3(fix3(colour_reg(0u)), fix3(colour_reg(1u)), fix3(colour_reg(2u)), d), fix3(amb), ONE);
        let i = data[prm(0u) + 128u];
        out.rgba = (fmin(rgb.x, i) & 0xFFu) | ((fmin(rgb.y, i) & 0xFFu) << 8u) | ((fmin(rgb.z, i) & 0xFFu) << 16u) | ((fmin(amb.w, i) & 0xFFu) << 24u);
        out.s = v.s;
        out.t = v.t;
        return out;
    }
    // pass 2: UV from the world normal (projector vf16..vf19 in A rigid, mem[28..31] otherwise), RGBA mem[32];
    // pass 3: UV from the world position (mem[24..27]), RGBA mem[44]
    var r0: vec4<u32>;
    var r1: vec4<u32>;
    var r2: vec4<u32>;
    var r3: vec4<u32>;
    var src = nw;
    var c = cmem(32u);
    if (which == 2u) {
        r0 = cmem(24u);
        r1 = cmem(25u);
        r2 = cmem(26u);
        r3 = cmem(27u);
        src = wp;
        c = cmem(44u);
    } else if (prm(1u) == 16u) {
        r0 = creg(16u);
        r1 = creg(17u);
        r2 = creg(18u);
        r3 = creg(19u);
    } else {
        r0 = cmem(28u);
        r1 = cmem(29u);
        r2 = cmem(30u);
        r3 = cmem(31u);
    }
    let uv = madd3(dot3(fix3(r0), fix3(r1), fix3(r2), src), fix3(r3), ONE);
    out.s = uv.x;
    out.t = uv.y;
    out.rgba = (c.x & 0xFFu) | ((c.y & 0xFFu) << 8u) | ((c.z & 0xFFu) << 16u) | ((c.w & 0xFFu) << 24u);
    return out;
}

// ---- Drawing
//
// The hardware rasterizer decides coverage; what each covered sample gets is computed as the compute raster does it
// (gs.wgsl shade_at, case 0, with the primitive record gpu.cpp draw() would build): the provoking vertex (corner 0)
// carries the whole triangle as flat inputs: its three GS positions (pixels), 1 / area, the inclusive edges, the
// bounding box, the colours, S T Q F, and Z. So the barycentrics, colour, texture coordinates, fog and Z are the compute
// raster's own expressions on the same values. Flag 8 (PS2_NATIVE_INTERP=hw) uses the hardware's interpolation instead.

// IEEE division, round to nearest even (the CPU's 1.0f / area in gpu.cpp draw()), by long division of the mantissas.
fn fdiv_rne(a: u32, b: u32) -> u32 {
    let sign = (a ^ b) & 0x80000000u;
    let ma = (a & 0x7FFFFFu) | 0x800000u;
    let mb = (b & 0x7FFFFFu) | 0x800000u;
    var q = select(0u, 1u, ma >= mb);
    var r = ma - q * mb;
    for (var i = 0u; i < 24u; i = i + 1u) {
        r = r << 1u;
        q = q << 1u;
        if (r >= mb) {
            r = r - mb;
            q = q | 1u;
        }
    }
    var e = i32((a >> 23u) & 0xFFu) - i32((b >> 23u) & 0xFFu) + 127;
    var half = 0u;
    if (q >= 0x1000000u) {
        half = q & 1u;
        q = q >> 1u;
    } else {
        e = e - 1;
        r = r << 1u;
        if (r >= mb) {
            r = r - mb;
            half = 1u;
        }
    }
    if (half != 0u && (r != 0u || (q & 1u) != 0u)) {
        q = q + 1u;
        if (q == 0x1000000u) {
            q = q >> 1u;
            e = e + 1;
        }
    }
    if (e >= 255) {
        return sign | 0x7F800000u;
    }
    if (e <= 0) {
        return sign;
    }
    return sign | (u32(e) << 23u) | (q & 0x7FFFFFu);
}

fn rounded(x: f32) -> f32 {
    return bitcast<f32>(opaque(bitcast<u32>(x)));
}

struct NativeOut {
    @builtin(position) pos: vec4<f32>,
    @location(0) @interpolate(flat) xy01: vec4<f32>,
    @location(1) @interpolate(flat) xy2: vec4<f32>,      // x2, y2, 1 / area, Z delta of vertex 1
    @location(2) @interpolate(flat) tri: vec4<u32>,      // colours of vertices 0, 1, 2 (RGBA), inclusive edges
    @location(3) @interpolate(flat) t0: vec4<f32>,       // S T Q F of vertex 0
    @location(4) @interpolate(flat) t1: vec4<f32>,
    @location(5) @interpolate(flat) t2: vec4<f32>,
    @location(6) @interpolate(flat) zb: vec4<u32>,       // Z of vertex 0, box min (x | y << 16), box max, Z delta of vertex 2
    // PS2_NATIVE_INTERP=hw: the kick vertex's colour and fog plus interpolated deltas, Z the base vertex's plus a delta
    @location(7) @interpolate(linear) dcolor: vec4<f32>,
    @location(8) @interpolate(linear) stq: vec3<f32>,
    @location(9) @interpolate(linear) dfz: vec2<f32>,
}

fn screen_x(v: GsVertex) -> f32 {
    return (f32(v.x) - f32(prm(5u))) / 16.0;
}

fn screen_y(v: GsVertex) -> f32 {
    return (f32(v.y) - f32(prm(6u))) / 16.0;
}

// gpu.cpp draw(): the edge from (ax, ay) to (bx, by) includes its samples when it is a left or top edge
fn inclusive(ax: f32, ay: f32, bx: f32, by: f32, sg: f32) -> bool {
    let gx = (ay - by) * sg;
    let gy = (bx - ax) * sg;
    return gx > 0.0 || (gx == 0.0 && gy > 0.0);
}

fn first_sample(lo: f32, samples: u32) -> i32 {
    return i32(floor(ceil(lo * f32(samples)) / f32(samples)));
}

// Vertex pulling: vertex_index = 3 * triangle + corner. The GS queue of the primitive's kick: strip (t, t+1, t+2), fan
// (0, t+1, t+2), list (3t, 3t+1, 3t+2); the kick vertex's ADC drops the triangle, as a zero area does.
@vertex
fn native_vs(@builtin(vertex_index) index: u32) -> NativeOut {
    let tri = index / 3u;
    let corner = index % 3u;
    var a = tri;
    var b = tri + 1u;
    var c = tri + 2u;
    if (prm(10u) == 5u) {
        a = 0u;
    } else if (prm(10u) == 3u) {
        a = tri * 3u;
        b = a + 1u;
        c = a + 2u;
    }
    var out: NativeOut;
    out.pos = vec4<f32>(-2.0, -2.0, 0.0, 1.0);
    if (adc(c) != 0u) {
        return out;
    }
    let own = select(select(c, b, corner == 1u), a, corner == 0u);
    let v = gs_vertex(own);
    let fx = screen_x(v) * f32(SCALE) + 0.5;
    let fy = screen_y(v) * f32(SCALE_Y) + 0.5;
    let pos = vec4<f32>(fx / f32(prm(7u)) * 2.0 - 1.0, 1.0 - fy / f32(prm(8u)) * 2.0, 0.0, 1.0);
    out.stq = vec3<f32>(bitcast<f32>(v.s), bitcast<f32>(v.t), bitcast<f32>(v.q));
    let hw = (prm(11u) & 8u) != 0u;
    if (hw) {
        var vc = v;
        if (corner != 2u) {
            vc = gs_vertex(c);
        }
        let z0 = select(gs_z(a), v.z, corner == 0u);
        let own_rgba = vec4<f32>(f32(v.rgba & 0xFFu), f32((v.rgba >> 8u) & 0xFFu), f32((v.rgba >> 16u) & 0xFFu), f32(v.rgba >> 24u));
        let kick_rgba = vec4<f32>(f32(vc.rgba & 0xFFu), f32((vc.rgba >> 8u) & 0xFFu), f32((vc.rgba >> 16u) & 0xFFu), f32(vc.rgba >> 24u));
        out.dcolor = select(vec4<f32>(0.0), own_rgba - kick_rgba, (prm(11u) & 2u) != 0u);
        out.dfz = vec2<f32>(f32(v.f) - f32(vc.f), f32(i32(v.z) - i32(z0)));
        out.tri = vec4<u32>(vc.rgba, vc.f, 0u, 0u);
        out.zb = vec4<u32>(z0, 0u, 0u, 0u);
        out.pos = pos;
        return out;
    }
    if (corner != 0u) {  // flat inputs come from corner 0, the provoking vertex
        out.pos = pos;
        return out;
    }
    let vb = gs_vertex(b);
    let vc = gs_vertex(c);
    let x0 = screen_x(v);
    let y0 = screen_y(v);
    let x1 = screen_x(vb);
    let y1 = screen_y(vb);
    let x2 = screen_x(vc);
    let y2 = screen_y(vc);
    let area = rounded((x1 - x0) * (y2 - y0)) - rounded((x2 - x0) * (y1 - y0));
    out.pos = pos;
    out.zb = vec4<u32>(0u, 0xFFFFFFFFu, 0u, 0u);  // a dropped triangle (gpu.cpp draw() returns) covers no sample
    if (area == 0.0) {
        return out;
    }
    let inv = bitcast<f32>(fdiv_rne(0x3F800000u, bitcast<u32>(area)));
    let sg = select(-1.0, 1.0, area > 0.0);
    let edges = select(0u, 1u, inclusive(x1, y1, x2, y2, sg)) | select(0u, 2u, inclusive(x2, y2, x0, y0, sg)) | select(0u, 4u, inclusive(x0, y0, x1, y1, sg));
    let s = load_setup(prm(4u));
    let minx = max(max(s.scax0, first_sample(min(min(x0, x1), x2), SCALE)), 0);
    let maxx = min(min(s.scax1, i32(ceil(max(max(x0, x1), x2))) - 1), 2047);
    let miny = max(max(s.scay0, first_sample(min(min(y0, y1), y2), SCALE_Y)), 0);
    let maxy = min(min(s.scay1, i32(ceil(max(max(y0, y1), y2))) - 1), 2047);
    if (minx > maxx || miny > maxy) {
        return out;
    }
    // a flat-shaded triangle takes the kick vertex's colour (gpu.cpp attrs)
    let iip = (prm(11u) & 2u) != 0u;
    out.xy01 = vec4<f32>(x0, y0, x1, y1);
    out.xy2 = vec4<f32>(x2, y2, inv, f32(i32(vb.z) - i32(v.z)));
    out.tri = vec4<u32>(select(vc.rgba, v.rgba, iip), select(vc.rgba, vb.rgba, iip), vc.rgba, edges);
    out.t0 = vec4<f32>(bitcast<f32>(v.s), bitcast<f32>(v.t), bitcast<f32>(v.q), f32(v.f));
    out.t1 = vec4<f32>(bitcast<f32>(vb.s), bitcast<f32>(vb.t), bitcast<f32>(vb.q), f32(vb.f));
    out.t2 = vec4<f32>(bitcast<f32>(vc.s), bitcast<f32>(vc.t), bitcast<f32>(vc.q), f32(vc.f));
    out.zb = vec4<u32>(v.z, u32(minx) | (u32(miny) << 16u), u32(maxx) | (u32(maxy) << 16u), bitcast<u32>(f32(i32(vc.z) - i32(v.z))));
    return out;
}

fn unpack_rgba(c: u32) -> vec4<f32> {
    return vec4<f32>(f32(c & 0xFFu), f32((c >> 8u) & 0xFFu), f32((c >> 16u) & 0xFFu), f32(c >> 24u));
}

struct NativeFrag {
    @location(0) color: vec4<f32>,
    @location(1) alpha: u32,  // the frame's alpha as the GS writes it (As, FBA), unblended
    @builtin(frag_depth) depth: f32,
}

// gs.wgsl plot() for one sample, without the frame and Z buffer work the pipeline does: texture (TFX, TCC), fog, the
// alpha test (the split into pass and fail pixels), then the colour as integer / 255 and the blend factor As / 128.
@fragment
fn native_fs(in: NativeOut) -> NativeFrag {
    let s = load_setup(prm(4u));
    let sx = u32(in.pos.x);
    let sy = u32(in.pos.y);
    let x = i32(sx / SCALE);
    let y = i32(sy / SCALE_Y);
    let k = (sy % SCALE_Y) * SCALE + sx % SCALE;
    let scanmsk = mode(s, 28u, 2u);
    if ((scanmsk == 2u && (y & 1) == 0) || (scanmsk == 3u && (y & 1) != 0)) {
        discard;
    }
    var at: Attr;
    if ((prm(11u) & 8u) != 0u) {
        let c = unpack_rgba(in.tri.x) + in.dcolor;
        var z = in.zb.x;
        let step = floor(in.dfz.y);
        if (step >= 0.0) {
            z = z + u32(min(step, f32(0xFFFFFFFFu - z)));
        } else {
            z = z - u32(min(-step, f32(z)));
        }
        at = Attr(c.x, c.y, c.z, c.w, in.stq.x, in.stq.y, in.stq.z, f32(in.tri.y) + in.dfz.x, z);
    } else {
        // shade_at() case 0 on the record gpu.cpp would build
        let lo = in.zb.y;
        let hi = in.zb.z;
        if (x < i32(lo & 0xFFFFu) || y < i32(lo >> 16u) || x > i32(hi & 0xFFFFu) || y > i32(hi >> 16u)) {
            discard;
        }
        let px = f32(x) + f32(sx % SCALE) / f32(SCALE);
        let py = f32(y) + f32(sy % SCALE_Y) / f32(SCALE_Y);
        let x0 = in.xy01.x;
        let y0 = in.xy01.y;
        let x1 = in.xy01.z;
        let y1 = in.xy01.w;
        let x2 = in.xy2.x;
        let y2 = in.xy2.y;
        let inv = in.xy2.z;
        let w0 = ((x1 - px) * (y2 - py) - (x2 - px) * (y1 - py)) * inv;
        let w1 = ((x2 - px) * (y0 - py) - (x0 - px) * (y2 - py)) * inv;
        let c2 = ((x0 - px) * (y1 - py) - (x1 - px) * (y0 - py)) * inv;
        let inclusive = in.tri.w;
        if (!edge_in(w0, inclusive & 1u) || !edge_in(w1, inclusive & 2u) || !edge_in(c2, inclusive & 4u)) {
            discard;
        }
        let w2 = 1.0 - w0 - w1;
        let v2 = unpack_rgba(in.tri.z);
        let c = v2 + (unpack_rgba(in.tri.x) - v2) * w0 + (unpack_rgba(in.tri.y) - v2) * w1;
        let t0 = in.t0;
        let t1 = in.t1;
        let t2 = in.t2;
        var t = t0 * w0 + t1 * w1 + t2 * w2;
        t.w = t2.w + (t0.w - t2.w) * w0 + (t1.w - t2.w) * w1;
        let z0 = in.zb.x;
        let d = in.xy2.w * w1 + bitcast<f32>(in.zb.w) * w2;
        let step = floor(d);
        var z = z0;
        if (step >= 0.0) {
            z = z0 + u32(min(step, f32(0xFFFFFFFFu - z0)));
        } else {
            z = z0 - u32(min(-step, f32(z0)));
        }
        at = Attr(c.x, c.y, c.z, c.w, t.x, t.y, t.z, t.w, z);
    }
    var out = shade_frag(s, at, k, false);
    out.depth = f32(min(at.z, prm(13u))) * bitcast<f32>(prm(14u));
    return out;
}

// Hardware draws without a texture (gpu.cpp kNativePlain): the texture path compiles out, whose registers every draw of a
// pipeline pays for.
override PLAIN: bool = false;

// gs.wgsl plot() for one sample, the colour part: texture (TFX, TCC), fog, the alpha test (the split into pass and fail
// pixels), then the colour as integer / 255 and the blend factor As / 128. fst: the coordinates are U, V (x 16).
fn shade_frag(s: Setup, at: Attr, k: u32, fst: bool) -> NativeFrag {
    var r = i32(at.r);
    var g = i32(at.g);
    var b = i32(at.b);
    var a = i32(at.a);
    if (!PLAIN && has(s, F_TME)) {
        var u: f32;
        var v: f32;
        var q = 1.0;
        if (fst) {
            u = at.s / 16.0;
            v = at.t / 16.0;
        } else {
            q = at.q;
            if (q == 0.0) {
                q = 1.0;
            }
            u = at.s / q * f32(1u << s.tw);
            v = at.t / q * f32(1u << s.th);
        }
        let t = texture(s, u, v, q, k);
        let tr = i32(t & 0xFFu);
        let tg = i32((t >> 8u) & 0xFFu);
        let tb = i32((t >> 16u) & 0xFFu);
        let ta = i32(t >> 24u);
        let tcc = has(s, F_TCC);
        switch mode(s, 20u, 2u) {
            case 0u {
                r = clamp255((tr * r) >> 7u);
                g = clamp255((tg * g) >> 7u);
                b = clamp255((tb * b) >> 7u);
                if (tcc) {
                    a = clamp255((ta * a) >> 7u);
                }
            }
            case 1u {
                r = tr;
                g = tg;
                b = tb;
                if (tcc) {
                    a = ta;
                }
            }
            case 2u {
                r = clamp255(((tr * r) >> 7u) + a);
                g = clamp255(((tg * g) >> 7u) + a);
                b = clamp255(((tb * b) >> 7u) + a);
                if (tcc) {
                    a = clamp255(ta + a);
                }
            }
            default {
                r = clamp255(((tr * r) >> 7u) + a);
                g = clamp255(((tg * g) >> 7u) + a);
                b = clamp255(((tb * b) >> 7u) + a);
                if (tcc) {
                    a = ta;
                }
            }
        }
    }
    if (has(s, F_FGE)) {
        let f = i32(at.f);
        r = (f * r + (255 - f) * i32(s.fogcol & 0xFFu)) >> 8u;
        g = (f * g + (255 - f) * i32((s.fogcol >> 8u) & 0xFFu)) >> 8u;
        b = (f * b + (255 - f) * i32((s.fogcol >> 16u) & 0xFFu)) >> 8u;
    }
    if (has(s, F_ATE) && prm(9u) != 0u) {
        let av = u32(a);
        var ok = false;
        switch mode(s, 0u, 3u) {
            case 0u {
                ok = false;
            }
            case 1u {
                ok = true;
            }
            case 2u {
                ok = av < s.aref;
            }
            case 3u {
                ok = av <= s.aref;
            }
            case 4u {
                ok = av == s.aref;
            }
            case 5u {
                ok = av >= s.aref;
            }
            case 6u {
                ok = av > s.aref;
            }
            default {
                ok = av != s.aref;
            }
        }
        if (ok != (prm(9u) == 1u)) {
            discard;
        }
    }
    var out: NativeFrag;
    out.alpha = u32(a & 0xFF) | select(0u, 0x80u, has(s, F_FBA));
    var rgb = vec3<f32>(f32(r & 0xFF), f32(g & 0xFF), f32(b & 0xFF)) / 255.0;
    if ((prm(11u) & 32u) != 0u) {
        // Cd·C (gpu.cpp kBlendDst): C/256 here, Dst·src + Src·dst in the blender
        rgb = vec3<f32>(select(f32(a & 0xFF), f32(s.fix & 0xFFu), (prm(11u) & 64u) != 0u) / 256.0);
    }
    // the alpha output: As / 128 when the blend takes it as a factor, else the stored alpha (§4.3: min(A, 128) / 128)
    let fa = select(f32(min(a & 0xFF, 128)), f32(min(out.alpha, 128u)), (prm(11u) & 16u) != 0u) / 128.0;
    // prm(11) 128 / 256 (hardware GS renderer): the GS blend floors ((A - B) * C >> 7), the hardware's rounds; the source
    // moves by just under half a step of the result, down (lerp, add, Cs·C) or up (Cd - Cs·C: the floor of a negative
    // product is the ceiling of its size). Every factor is a multiple of 1/128, so 0.496 keeps each product's floor.
    // 1024: Cs·C premultiplied here, the blend's source factor One (gpu.cpp kNativePremul), so C keeps its range up to 255/128
    // that a blend factor would clamp to 1
    let bias = prm(11u) & 384u;
    let constant = (prm(11u) & 512u) != 0u;
    if ((prm(11u) & 1024u) != 0u) {
        rgb = rgb * select(f32(a & 0xFF), f32(s.fix & 0xFFu), constant) / 128.0;
        if (bias != 0u) {
            rgb = rgb + select(-0.496, 0.496, bias == 256u) / 255.0;
        }
    } else {
        let factor = select(fa, f32(s.fix) / 128.0, constant);
        if (bias != 0u && factor > 0.0) {
            rgb = rgb + select(-0.496, 0.496, bias == 256u) / 255.0 / factor;
        }
    }
    out.color = vec4<f32>(rgb, fa);
    return out;
}


// ---- Hardware GS renderer, step 1 (PS2_GS_HW, gpu.cpp hw_flush): an emulated batch's triangles and sprites (gpu.cpp
// draw() records, PRIM_WORDS each) drawn by the render pipeline into the native target. Coverage, the Z test and write
// and the blend are the hardware's (no discard, no frag_depth); colour, texture and fog interpolate linearly in screen
// space as the GS does. Sprites take their attributes per sample as gs.wgsl shade_at() case 1.
// Draw parameters: 0 first record (word offset in data), 3 kind (0 triangles, 1 sprites), 4 setup, 7, 8 target size,
// 9 split (as native_fs), 11 flags (16, 32, 64 as native_fs), 13 Z max, 14 depth per Z unit.

struct HwOut {
    @builtin(position) pos: vec4<f32>,
    @location(0) @interpolate(linear) color: vec4<f32>,
    @location(1) @interpolate(linear) stqf: vec4<f32>,
    @location(2) @interpolate(flat) rect: vec4<f32>,     // sprites: x0, y0, dx, dy
    @location(3) @interpolate(flat) ta: vec4<f32>,       // sprites: S T Q F of vertex 0
    @location(4) @interpolate(flat) tb: vec4<f32>,       // sprites: S T Q F of vertex 1
    @location(5) @interpolate(flat) zc: vec2<u32>,       // sprites: colour (RGBA), Z
}

struct HwFrag {
    @location(0) color: vec4<f32>,
    @location(1) alpha: u32,
}

@vertex
fn hw_vs(@builtin(vertex_index) index: u32) -> HwOut {
    let sprite = prm(3u) == 1u;
    let per = select(3u, 6u, sprite);
    let p = prm(0u) + (index / per) * PRIM_WORDS;
    let corner = index % per;
    var out: HwOut;
    var x: f32;
    var y: f32;
    var z: f32;
    if (sprite) {
        // (0, 1, 2), (2, 1, 3) of the corners (x0, y0), (x1, y0), (x0, y1), (x1, y1)
        let c = select(select(corner, 2u, corner == 3u), select(1u, 3u, corner == 5u), corner >= 4u);
        let x0 = fat(p + 4u);
        let y0 = fat(p + 5u);
        x = x0 + select(0.0, fat(p + 6u), (c & 1u) != 0u);
        y = y0 + select(0.0, fat(p + 7u), (c & 2u) != 0u);
        // at scale > 1 the raster covers whole GS pixels of a sprite, x0 <= x < x1 (gs.wgsl shade_at case 1)
        if (SCALE * SCALE_Y > 1u) {
            x = ceil(x);
            y = ceil(y);
        }
        z = f32(min(data[p + 24u], prm(13u)));
        out.rect = vec4<f32>(x0, y0, fat(p + 6u), fat(p + 7u));
        out.ta = vertex_tex(p, 0u);
        out.tb = vertex_tex(p, 1u);
        out.zc = vec2<u32>(data[p + 13u], data[p + 24u]);
    } else {
        x = fat(p + 4u + corner * 2u);
        y = fat(p + 5u + corner * 2u);
        let dz = select(select(0.0, fat(p + 26u), corner == 2u), fat(p + 25u), corner == 1u);
        z = min(f32(data[p + 24u]) + dz, f32(prm(13u)));
        out.color = vertex_attr(p, corner);
        out.stqf = vertex_tex(p, corner);
    }
    // a sample sits at the top left of its fine cell (gs.wgsl raster px, py), the hardware's at its centre
    let fx = x * f32(SCALE) + 0.5;
    let fy = y * f32(SCALE_Y) + 0.5;
    out.pos = vec4<f32>(fx / f32(prm(7u)) * 2.0 - 1.0, 1.0 - fy / f32(prm(8u)) * 2.0, max(z, 0.0) * bitcast<f32>(prm(14u)), 1.0);
    return out;
}

@fragment
fn hw_fs(in: HwOut) -> HwFrag {
    let s = load_setup(prm(4u));
    source_slot = select(0u, 1u, (s.flags & F_SOURCE_SLOT) != 0u);
    if (SOURCE_Z) {
        source_size = vec2<u32>(mip_word(s, 0u) & 0xFFFFu, mip_word(s, 0u) >> 16u);
    }
    source_width = select(0u, s.tbw * 64u, (s.flags & F_SOURCE_PAGES) != 0u);
    source_split = ((s.flags >> 21u) & 127u) * 32u;
    let sx = u32(in.pos.x);
    let sy = u32(in.pos.y);
    let x = i32(sx / SCALE);
    let y = i32(sy / SCALE_Y);
    let k = (sy % SCALE_Y) * SCALE + sx % SCALE;
    let scanmsk = mode(s, 28u, 2u);
    if ((scanmsk == 2u && (y & 1) == 0) || (scanmsk == 3u && (y & 1) != 0)) {
        discard;
    }
    var at: Attr;
    if (prm(3u) == 1u) {
        // shade_at() case 1
        let px = f32(x) + f32(sx % SCALE) / f32(SCALE);
        let py = f32(y) + f32(sy % SCALE_Y) / f32(SCALE_Y);
        let x0 = in.rect.x;
        let y0 = in.rect.y;
        let dx = in.rect.z;
        let dy = in.rect.w;
        let a = in.ta;
        let b = in.tb;
        var du = b.x - a.x;
        var dv = b.y - a.y;
        if (has(s, F_FST)) {
            du = du / 16.0;
            dv = dv / 16.0;
        } else {
            var q = b.z;
            if (q == 0.0) {
                q = 1.0;
            }
            du = du / q * f32(1u << s.tw);
            dv = dv / q * f32(1u << s.th);
        }
        var ux = px;
        var uy = py;
        let direct = s.tpsm == 0x00u || s.tpsm == 0x01u || s.tpsm == 0x02u || s.tpsm == 0x0Au || s.tpsm >= 0x30u;
        let point = has(s, F_TME) && (!has(s, F_BILINEAR) || direct);
        rt_hires = RT_HIRES && has(s, F_RT_HIRES) && (abs(abs(du) - abs(dx)) > abs(dx) * 0.001 || abs(abs(dv) - abs(dy)) > abs(dy) * 0.001);
        if (point && !rt_hires && abs(du) >= abs(dx) * 0.999) {
            ux = f32(x);
        }
        if (point && !rt_hires && abs(dv) >= abs(dy) * 0.999) {
            uy = f32(y);
        }
        var tx = 0.0;
        var ty = 0.0;
        if (dx != 0.0) {
            tx = (ux - x0) / dx;
        }
        if (dy != 0.0) {
            ty = (uy - y0) / dy;
        }
        let c = unpack_rgba(in.zc.x);
        at = Attr(c.x, c.y, c.z, c.w, a.x + (b.x - a.x) * tx, a.y + (b.y - a.y) * ty, b.z, b.w, in.zc.y);
    } else {
        at = Attr(in.color.x, in.color.y, in.color.z, in.color.w, in.stqf.x, in.stqf.y, in.stqf.z, in.stqf.w, 0u);
    }
    let f = shade_frag(s, at, k, has(s, F_FST));
    return HwFrag(f.color, f.alpha);
}

// The batch's sources (gpu.cpp hw_flush, kSource): the targets its textures sit on, two slots (kSourceSlot: the second,
// source_slot), texel (x, y) at the target's GS pixel (x, y), sample k as in VRAM. Through VRAM's pages (kSourcePages,
// source_width): a texel past the buffer width is the one a page row down, and the rows from source_split on are slot 1's.
@group(1) @binding(0) var source_color: texture_2d<f32>;
@group(1) @binding(1) var source_alpha: texture_2d<u32>;
@group(1) @binding(2) var source_color1: texture_2d<f32>;
@group(1) @binding(3) var source_alpha1: texture_2d<u32>;
// A Z24 texture at a target's Z24 Z buffer (pipelines with SOURCE_Z, gpu.cpp kSourceZ): its depth's 24 bits, as the
// target's write-back gives them, inside its tiles (source_size: GS pixels across, down); VRAM past them.
override SOURCE_Z: bool = false;
@group(1) @binding(4) var source_depth: texture_depth_2d;
var<private> source_size: vec2<u32>;
var<private> source_slot: u32 = 0u;
var<private> source_width: u32 = 0u;
var<private> source_split: u32 = 0u;
const F_SOURCE_SLOT: u32 = 524288u;
const F_SOURCE_PAGES: u32 = 1048576u;

fn source_load(at: vec2<i32>, slot: u32) -> vec4<f32> {
    if (slot != 0u) {
        return textureLoad(source_color1, at, 0);
    }
    return textureLoad(source_color, at, 0);
}

fn source_load_alpha(at: vec2<i32>, slot: u32) -> u32 {
    if (slot != 0u) {
        return textureLoad(source_alpha1, at, 0).x;
    }
    return textureLoad(source_alpha, at, 0).x;
}

fn source_texel(f: Fmt, x: u32, y: u32, k: u32) -> u32 {
    if (SOURCE_Z) {
        if (x >= source_size.x || y >= source_size.y) {
            return load_texel(addr(f, x, y), k);
        }
        let d = textureLoad(source_depth, vec2<i32>(i32(x * SCALE + k % SCALE), i32(y * SCALE_Y + k / SCALE)), 0);
        return min(u32(round(d * 16777216.0)), 0xFFFFFFu);
    }
    var tx = x;
    var ty = y;
    var slot = source_slot;
    if (source_width != 0u) {
        let rows = tx / source_width;
        tx -= rows * source_width;
        ty += rows * 32u;
        if (source_split != 0u && ty >= source_split) {
            ty -= source_split;
            slot = 1u;
        }
    }
    let at = vec2<i32>(i32(tx * SCALE + k % SCALE), i32(ty * SCALE_Y + k / SCALE));
    let c = source_load(at, slot);
    return u32(round(c.x * 255.0)) | (u32(round(c.y * 255.0)) << 8u) | (u32(round(c.z * 255.0)) << 16u) | (source_load_alpha(at, slot) << 24u);
}

// A target's colour and alpha into its shadow (gpu.cpp hw_flush), from source slot prm(9), sample for sample.
@fragment
fn native_blit_fs(in: ImportOut) -> HwFrag {
    let at = vec2<i32>(i32(in.pos.x), i32(in.pos.y));
    return HwFrag(source_load(at, prm(9u)), source_load_alpha(at, prm(9u)));
}

// ---- Import: the emulated frame and Z buffer into the native target at the start of a run of native draws

struct ImportOut {
    @builtin(position) pos: vec4<f32>,
}

@vertex
fn native_full_vs(@builtin(vertex_index) index: u32) -> ImportOut {
    var out: ImportOut;
    let x = f32((index << 1u) & 2u);
    let y = f32(index & 2u);
    out.pos = vec4<f32>(x * 2.0 - 1.0, 1.0 - y * 2.0, 0.0, 1.0);
    return out;
}

// Replace mode, tiles (gpu.cpp tiles_draw): one instance per tile of NATIVE_TILE x NATIVE_TILE GS pixels, from the list
// at data[prm(5)] (x | y << 8, in tiles); prm 7, 8 the target size in samples.
const NATIVE_TILE: u32 = 16u;

@vertex
fn native_tile_vs(@builtin(vertex_index) index: u32, @builtin(instance_index) tile: u32) -> ImportOut {
    let e = data[prm(5u) + tile];
    let cx = select(0u, 1u, index == 1u || index == 2u || index == 4u);
    let cy = select(0u, 1u, index == 2u || index == 4u || index == 5u);
    let x = min(((e & 0xFFu) + cx) * NATIVE_TILE * SCALE, prm(7u));
    let y = min((((e >> 8u) & 0xFFu) + cy) * NATIVE_TILE * SCALE_Y, prm(8u));
    var out: ImportOut;
    out.pos = vec4<f32>(f32(x) / f32(prm(7u)) * 2.0 - 1.0, 1.0 - f32(y) / f32(prm(8u)) * 2.0, 0.0, 1.0);
    return out;
}

@fragment
fn native_import_fs(in: ImportOut) -> NativeFrag {
    let px = u32(in.pos.x);
    let py = u32(in.pos.y);
    let x = px / SCALE;
    let y = py / SCALE_Y;
    let k = (py % SCALE_Y) * SCALE + px % SCALE;
    // prm 9: the buffers a tile import writes (1 the frame, 2 Z; 0 both), the pipeline masks the others
    let buffers = select(prm(9u), 3u, prm(9u) == 0u);
    var c = 0u;
    var z = 0u;
    if ((buffers & 1u) != 0u) {
        c = read_sample(prm(2u), prm(0u), prm(1u), x, y, k);
    }
    if ((buffers & 2u) != 0u) {
        z = read_sample(prm(4u), prm(3u), prm(1u), x, y, k) & prm(13u);
    }
    var out: NativeFrag;
    out.color = vec4<f32>(f32(c & 0xFFu) / 255.0, f32((c >> 8u) & 0xFFu) / 255.0, f32((c >> 16u) & 0xFFu) / 255.0, f32(min(c >> 24u, 128u)) / 128.0);
    out.alpha = c >> 24u;
    out.depth = f32(z) * bitcast<f32>(prm(14u));
    return out;
}

// ---- Transfers (gpu.cpp xfer_plan): a target's tiles into another target's view of the same memory in another format
// (a CT32 frame, a Z24 frame, a Z24 Z buffer), the bits its write-back and the import would give. One instance per tile
// of the list at data[prm(5)] (native_tile_vs). prm 0 the view read (0 a CT32 frame: colour and alpha, 1 a Z24 frame:
// colour, 2 a Z24 Z buffer: depth), 1 the destination (0 a CT32 frame, 1 a Z24 frame, 2 a Z24 Z buffer), 2 the view
// read at (x ^ 32, y ^ 16) (a Z format's page against CT32's), 3, 4, 6 the destination pixel's word (base, width,
// PSMCT32 or PSMZ32), 7, 8 the destination size, 9, 10 the size of the target read that its tiles cover, 13, 14 Z max,
// depth per unit. Group 1 as the transfer pipelines bind it (past the source slots' bindings).
@group(1) @binding(5) var xfer_color: texture_2d<f32>;
@group(1) @binding(6) var xfer_depth: texture_depth_2d;
@group(1) @binding(7) var xfer_alpha: texture_2d<u32>;

// The word: Z24 keeps its top byte in VRAM (a Z24 view never holds it), so a CT32 frame into a Z24 view leaves its
// alpha there, as its write-back would. Past the tiles of the target read, VRAM's word.
fn xfer_word(pos: vec4<f32>) -> u32 {
    let px = u32(pos.x);
    let py = u32(pos.y);
    let x = px / SCALE;
    let y = py / SCALE_Y;
    let k = (py % SCALE_Y) * SCALE + px % SCALE;
    let remap = select(vec2<u32>(0u, 0u), vec2<u32>(32u, 16u), prm(2u) != 0u);
    let at = vec2<i32>(i32((x ^ remap.x) * SCALE + px % SCALE), i32((y ^ remap.y) * SCALE_Y + py % SCALE_Y));
    let w = locate(prm(6u), prm(3u), prm(4u), x, y).word * SCALE * SCALE_Y + k;
    let word = atomicLoad(&vram[w]);
    if (u32(at.x) >= prm(9u) || u32(at.y) >= prm(10u)) {
        return word;
    }
    var low: u32;
    if (prm(0u) == 2u) {
        low = min(u32(round(textureLoad(xfer_depth, at, 0) / bitcast<f32>(prm(14u)))), prm(13u));
    } else {
        let c = textureLoad(xfer_color, at, 0);
        low = u32(round(c.x * 255.0)) | (u32(round(c.y * 255.0)) << 8u) | (u32(round(c.z * 255.0)) << 16u);
    }
    var top = word >> 24u;
    if (prm(0u) == 0u) {
        let a = textureLoad(xfer_alpha, at, 0).x;
        if (prm(1u) != 0u && a != top) {
            atomicAnd(&vram[w], 0xFFFFFFu);
            atomicOr(&vram[w], a << 24u);
        }
        top = a;
    }
    return low | (top << 24u);
}

@fragment
fn native_xfer_fs(in: ImportOut) -> NativeFrag {
    var c = xfer_word(in.pos);
    var out: NativeFrag;
    out.depth = f32(c & prm(13u)) * bitcast<f32>(prm(14u));
    if (prm(1u) == 1u) {
        c = c & 0xFFFFFFu;  // a Z24 frame: 24 bits, as its import reads them
    }
    out.color = vec4<f32>(f32(c & 0xFFu) / 255.0, f32((c >> 8u) & 0xFFu) / 255.0, f32((c >> 16u) & 0xFFu) / 255.0, f32(min(c >> 24u, 128u)) / 128.0);
    out.alpha = c >> 24u;
    return out;
}

// ---- Replace mode: the end of a run writes the target back to compute VRAM, one thread per sample of the run's box
// (prm 5..8: x0 y0 x1 y1 in samples; 0..4 the frame and Z buffer as for the import; 9 the run wrote Z). Only words
// whose value changed are stored, so samples no native draw touched keep their VRAM word bit for bit (whatever the
// import could not represent, e.g. the low bits of a 32-bit Z).
@group(0) @binding(9) var nat_color: texture_2d<f32>;
@group(0) @binding(10) var nat_depth: texture_depth_2d;
@group(0) @binding(11) var nat_alpha: texture_2d<u32>;

@compute @workgroup_size(8, 8)
fn native_writeback(@builtin(global_invocation_id) gid: vec3<u32>) {
    let px = prm(5u) + gid.x;
    let py = prm(6u) + gid.y;
    if (px >= prm(7u) || py >= prm(8u)) {
        return;
    }
    writeback_sample(px, py, true, prm(9u) != 0u);
}

// Tiles (gpu.cpp tiles_writeback): workgroup z = one tile of the list at data[prm(5)] (x | y << 8 | flags << 16: 1 colour,
// 2 Z native-newer); prm 7, 8 the target size in samples.
@compute @workgroup_size(8, 8)
fn native_writeback_tiles(@builtin(global_invocation_id) gid: vec3<u32>) {
    let e = data[prm(5u) + gid.z];
    let px = (e & 0xFFu) * NATIVE_TILE * SCALE + gid.x;
    let py = ((e >> 8u) & 0xFFu) * NATIVE_TILE * SCALE_Y + gid.y;
    if (px >= prm(7u) || py >= prm(8u)) {
        return;
    }
    writeback_sample(px, py, ((e >> 16u) & 1u) != 0u, ((e >> 16u) & 2u) != 0u);
}

fn writeback_sample(px: u32, py: u32, color: bool, depth: bool) {
    let x = px / SCALE;
    let y = py / SCALE_Y;
    let k = (py % SCALE_Y) * SCALE + px % SCALE;
    let at = vec2<i32>(i32(px), i32(py));
    let c = textureLoad(nat_color, at, 0);
    var v = u32(round(c.x * 255.0)) | (u32(round(c.y * 255.0)) << 8u) | (u32(round(c.z * 255.0)) << 16u);
    if (prm(2u) == 0x00u) {
        v = v | (textureLoad(nat_alpha, at, 0).x << 24u);
    }
    if (color && read_sample(prm(2u), prm(0u), prm(1u), x, y, k) != v) {
        write_sample(prm(2u), prm(0u), prm(1u), x, y, k, v);
    }
    if (depth) {
        let d = textureLoad(nat_depth, at, 0);
        let scale = bitcast<f32>(prm(14u));
        if (d != f32(read_sample(prm(4u), prm(3u), prm(1u), x, y, k) & prm(13u)) * scale) {
            write_sample(prm(4u), prm(3u), prm(1u), x, y, k, min(u32(round(d / scale)), prm(13u)));
        }
    }
}

// ---- The per-vertex oracle (PS2_NATIVE_CHECK): gs_vertex() against the batch's XGKICK packet, one thread per vertex.
// checks[]: 0 vertices, 1 X, 2 Y, 3 Z, 4 F, 5..7 ADC with the CLIP window 0, 1, 2 vertices back, 8 S, 9 T, 10 Q,
// 11 RGBA, 12 vertices with any mismatch (ADC at prm(15)), 13 batches; 16.. up to 16 mismatching vertices x 16 words.
@compute @workgroup_size(64)
fn native_check(@builtin(global_invocation_id) gid: vec3<u32>) {
    let k = gid.x;
    if (k >= prm(2u)) {
        return;
    }
    if (k == 0u) {
        atomicAdd(&checks[13], 1u);
    }
    let v = gs_vertex(k);
    let xyzf = vec4<u32>(oracle(k, 8u), oracle(k, 9u), oracle(k, 10u), oracle(k, 11u));
    let rgba = (oracle(k, 4u) & 0xFFu) | ((oracle(k, 5u) & 0xFFu) << 8u) | ((oracle(k, 6u) & 0xFFu) << 16u) | ((oracle(k, 7u) & 0xFFu) << 24u);
    let want_adc = (xyzf.w >> 15u) & 1u;
    var bad = 0u;
    atomicAdd(&checks[0], 1u);
    if (v.x != (xyzf.x & 0xFFFFu)) {
        atomicAdd(&checks[1], 1u);
        bad = bad | 1u;
    }
    if (v.y != (xyzf.y & 0xFFFFu)) {
        atomicAdd(&checks[2], 1u);
        bad = bad | 2u;
    }
    if (v.z != ((xyzf.z >> 4u) & 0xFFFFFFu)) {
        atomicAdd(&checks[3], 1u);
        bad = bad | 4u;
    }
    if (v.f != ((xyzf.w >> 4u) & 0xFFu)) {
        atomicAdd(&checks[4], 1u);
        bad = bad | 8u;
    }
    for (var back = 0u; back < 3u; back = back + 1u) {
        if (select(0u, 1u, adc_window(k, back) != 0u) != want_adc) {
            atomicAdd(&checks[5u + back], 1u);
            if (back == prm(15u)) {
                bad = bad | 16u;
            }
        }
    }
    if (v.s != oracle(k, 0u)) {
        atomicAdd(&checks[8], 1u);
        bad = bad | 32u;
    }
    if (v.t != oracle(k, 1u)) {
        atomicAdd(&checks[9], 1u);
        bad = bad | 64u;
    }
    if (v.q != oracle(k, 2u)) {
        atomicAdd(&checks[10], 1u);
        bad = bad | 128u;
    }
    if (v.rgba != rgba) {
        atomicAdd(&checks[11], 1u);
        bad = bad | 256u;
    }
    if (bad != 0u) {
        let slot = atomicAdd(&checks[12], 1u);
        if (slot < 16u) {
            let at = 16u + slot * 16u;
            atomicStore(&checks[at], bad);
            atomicStore(&checks[at + 1u], prm(1u) | (k << 8u));
            atomicStore(&checks[at + 2u], v.x | (v.y << 16u));
            atomicStore(&checks[at + 3u], xyzf.x | (xyzf.y << 16u));
            atomicStore(&checks[at + 4u], v.z);
            atomicStore(&checks[at + 5u], xyzf.z);
            atomicStore(&checks[at + 6u], v.f);
            atomicStore(&checks[at + 7u], xyzf.w);
            atomicStore(&checks[at + 8u], v.s);
            atomicStore(&checks[at + 9u], oracle(k, 0u));
            atomicStore(&checks[at + 10u], v.t);
            atomicStore(&checks[at + 11u], oracle(k, 1u));
            atomicStore(&checks[at + 12u], v.q);
            atomicStore(&checks[at + 13u], oracle(k, 2u));
            atomicStore(&checks[at + 14u], v.rgba);
            atomicStore(&checks[at + 15u], rgba);
        }
    }
}
