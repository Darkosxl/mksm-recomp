// Native renderer, stage 1 (decomp/notes/native-renderer.md §5.2): the world VU1 programs 567ce7d8, 002c80ed and
// 50bda0e2 transformed in a vertex shader from what VU1 is given (runtime/src/native.hpp) and drawn with a render
// pipeline. Appended to gs.wgsl: the bindings, prm(), load_setup(), texture() and read_sample() are shared, so texels,
// CLUT, TFX and fog are the compute raster's own code.
//
// Draw parameters, prm(i) (gpu.cpp native_batch):
//   0 batch record (word offset in data: 14 register qwords, then kVertexWords per vertex, then the XGKICK oracle)
//   1 program (1 567ce7d8, 2 002c80ed, 3 50bda0e2)   2 vertices   4 setup (word offset)   5, 6 XYOFFSET x, y (12.4)
//   7, 8 target size in pixels   9 split: 0 every pixel, 1 alpha-test pass pixels, 2 fail pixels   10 GS primitive
//   11 flags: 1 point light, 2 IIP, 4 oracle present   12 always 0 (see opaque())   13 Z max   14 depth per Z unit (f32)
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
    let h = homogeneous(k);
    return (ftoi(fmul(h.z, fdiv(ONE, h.w)), 4u) >> 4u) & 0xFFFFFFu;
}

// ---- Drawing

// Colour and fog are the kick vertex's plus interpolated deltas, Z the base vertex's plus a delta, as gs.wgsl shade_at()
// does: equal vertex values stay exact under interpolation.
struct NativeOut {
    @builtin(position) pos: vec4<f32>,
    @location(0) @interpolate(linear) dcolor: vec4<f32>,
    @location(1) @interpolate(linear) stq: vec3<f32>,
    @location(2) @interpolate(linear) dfz: vec2<f32>,
    @location(3) @interpolate(flat) base: vec3<u32>,
}

// Vertex pulling: vertex_index = 3 * triangle + corner. The GS queue of the primitive's kick: strip (t, t+1, t+2), fan
// (0, t+1, t+2), list (3t, 3t+1, 3t+2); the kick vertex's ADC drops the triangle. Corner 0 is the GS's v[0] (the depth
// base of gs.wgsl z_at), corner 2 the kick vertex (the colour and fog base, and the colour of a flat-shaded triangle).
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
    if (adc(c) != 0u) {
        out.pos = vec4<f32>(-2.0, -2.0, 0.0, 1.0);
        return out;
    }
    let own = select(select(c, b, corner == 1u), a, corner == 0u);
    let v = gs_vertex(own);
    var vc = v;
    if (corner != 2u) {
        vc = gs_vertex(c);
    }
    var z0 = v.z;
    if (corner != 0u) {
        z0 = gs_z(a);
    }
    let fx = (f32(v.x) - f32(prm(5u))) / 16.0 * f32(SCALE) + 0.5;
    let fy = (f32(v.y) - f32(prm(6u))) / 16.0 * f32(SCALE_Y) + 0.5;
    out.pos = vec4<f32>(fx / f32(prm(7u)) * 2.0 - 1.0, 1.0 - fy / f32(prm(8u)) * 2.0, 0.0, 1.0);
    let own_rgba = vec4<f32>(f32(v.rgba & 0xFFu), f32((v.rgba >> 8u) & 0xFFu), f32((v.rgba >> 16u) & 0xFFu), f32(v.rgba >> 24u));
    let kick_rgba = vec4<f32>(f32(vc.rgba & 0xFFu), f32((vc.rgba >> 8u) & 0xFFu), f32((vc.rgba >> 16u) & 0xFFu), f32(vc.rgba >> 24u));
    out.dcolor = select(vec4<f32>(0.0), own_rgba - kick_rgba, (prm(11u) & 2u) != 0u);
    out.stq = vec3<f32>(bitcast<f32>(v.s), bitcast<f32>(v.t), bitcast<f32>(v.q));
    out.dfz = vec2<f32>(f32(v.f) - f32(vc.f), f32(i32(v.z) - i32(z0)));
    out.base = vec3<u32>(vc.rgba, vc.f, z0);
    return out;
}

struct NativeFrag {
    @location(0) color: vec4<f32>,
    @builtin(frag_depth) depth: f32,
}

// gs.wgsl plot() for one pixel, without the frame and Z buffer work the pipeline does: texture (TFX, TCC), fog, the
// alpha test (the split into pass and fail pixels), then the colour as integer / 255 and the blend factor As / 128.
@fragment
fn native_fs(in: NativeOut) -> NativeFrag {
    let s = load_setup(prm(4u));
    let px = u32(in.pos.x);
    let py = u32(in.pos.y);
    let k = (py % SCALE_Y) * SCALE + px % SCALE;
    let y = i32(py / SCALE_Y);
    let scanmsk = mode(s, 28u, 2u);
    if ((scanmsk == 2u && (y & 1) == 0) || (scanmsk == 3u && (y & 1) != 0)) {
        discard;
    }
    // z_at(): the base vertex's Z plus the floored delta
    var z = in.base.z;
    let step = floor(in.dfz.y);
    if (step >= 0.0) {
        z = z + u32(min(step, f32(0xFFFFFFFFu - z)));
    } else {
        z = z - u32(min(-step, f32(z)));
    }
    z = min(z, prm(13u));
    let c0 = in.base.x;
    var r = i32(f32(c0 & 0xFFu) + in.dcolor.x);
    var g = i32(f32((c0 >> 8u) & 0xFFu) + in.dcolor.y);
    var b = i32(f32((c0 >> 16u) & 0xFFu) + in.dcolor.z);
    var a = i32(f32(c0 >> 24u) + in.dcolor.w);
    if (has(s, F_TME)) {
        var q = in.stq.z;
        if (q == 0.0) {
            q = 1.0;
        }
        let u = in.stq.x / q * f32(1u << s.tw);
        let v = in.stq.y / q * f32(1u << s.th);
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
        let f = i32(f32(in.base.y) + in.dfz.x);
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
    out.color = vec4<f32>(f32(r & 0xFF) / 255.0, f32(g & 0xFF) / 255.0, f32(b & 0xFF) / 255.0, f32(min(a & 0xFF, 128)) / 128.0);
    out.depth = f32(z) * bitcast<f32>(prm(14u));
    return out;
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

@fragment
fn native_import_fs(in: ImportOut) -> NativeFrag {
    let px = u32(in.pos.x);
    let py = u32(in.pos.y);
    let x = px / SCALE;
    let y = py / SCALE_Y;
    let k = (py % SCALE_Y) * SCALE + px % SCALE;
    let c = read_sample(prm(2u), prm(0u), prm(1u), x, y, k);
    let z = read_sample(prm(4u), prm(3u), prm(1u), x, y, k) & prm(13u);
    var out: NativeFrag;
    out.color = vec4<f32>(f32(c & 0xFFu) / 255.0, f32((c >> 8u) & 0xFFu) / 255.0, f32((c >> 16u) & 0xFFu) / 255.0, f32(min(c >> 24u, 128u)) / 128.0);
    out.depth = f32(z) * bitcast<f32>(prm(14u));
    return out;
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
