#!/usr/bin/env python3
"""Chameleon's model from Mortal Kombat: Armageddon (PS2): offline extractor and preview (step D1 of the MK:SM port).

Reads the COSTUME clump of chameleon.ssf (section 0/1, RenderWare 3.6) with MKA's ssf.py and decodes Midway's native
PS2 draw data back into a plain skinned mesh. Everything written is disc-derived: keep it out of git.

Format (offsets are into chameleon.ssf; section 0 at 0x800, COSTUME at 0xA00, RW stream at 0xA08):
  FrameList 0xA2C: 71 frames x 56 B at 0xA48 (3x3 rotation, position, parent, flags; RW row-vector convention,
    relative to the parent). Every rotation is identity: the bind pose is a T-pose in metres, Y up, facing +Z,
    pelvis at the origin. Frame 1 carries the HAnim hierarchy (0x19EC): 104 nodes {id, index, flags}, push = 2,
    pop = 1. Frames 2-70 carry ids 0x1000-0x1037 / 0x2001-0x2015 (0x2000 = cloth). Node ids add the limb in bits
    16-19 and 0x8000 = clone; a clone gets an exact copy of the real node whose id & 0xFFF07FFF matches
    (Deception mk_anim.c process_obj_bones, mk_obj.c:1832). Matrix-table entry i = HAnim node i.
  Geometry 0x28B8: header (flags 0x01010137 native + tristrip + skin, 8048 tris, 5829 verts), MaterialList (67),
    Extension = BinMesh only (67 strip meshes, 11244 indices). Then Midway native data per mesh, in BinMesh order:
    {u32 size, u32 1, PAD128 to 128 alignment, DMA ret tag + VIF1 program}, next mesh at +8+size.
    Per batch (ends in MSCAL/MSCNT), VU addresses relative to TOPS:
      0-1   V4-8 header: n1 n2 n3 strip_len d1 d2 d3 ncopy. Vertices come sorted by class: n1/n2/n3 1/2/3-bone
            vertices that are written to one strip slot, then d1/d2/d3 that are written to two
      2-    ncopy qwords of u16 pairs (src, dst): strip slot dst re-uses the vertex at the previous batch's
            output slot src; src bit 15 = no-draw (ADC) for dst
      15-   3 qwords per vertex: pos float xyz (low byte of each = bone slot * 4, 1-based), w = weight 1;
            nrm s8 xyz / 127, w = weight 2; uv s16 / 4096, z and w = output slot (bit 15 = ADC: the strip
            triangle ending there is not drawn). Weights 4.12; the last weight is 4096 - the others.
    The output slots of a batch are consecutive (step 4); sorted they give the strip.
  Material plugin 0x895303 (Deception MkmaterialDataReadStream): ver|flags<<16, flags, f32, [n, n x u32 bone
    list], rgba, f32, f32 zbias, [4 f32 uv scroll], u32 type. The bone list is the batch's palette:
    slot k -> list[k-1] = matrix-table index.
  Skin (after the last mesh and PAD128): Struct header, u32 platform 4, u8 numBones 104 / used 14 / maxWeights 4,
    pad, used list[14], then 104 inverse bind matrices (64 B, unaligned), 16 B of zeros.

Usage:
  mkamesh.py extract [SSF] [OUTDIR]    mka_chameleon.json + mka_chameleon.gltf/.bin, with self-checks
  mkamesh.py preview [OUTDIR]          front/back/three-quarter renders (1024 px), preview.png (+ the rainbow
                                       cycle) and compare_mka.png (MKA's own frames of Chameleon, if present)
  mkamesh.py check [SSF]               decode + self-checks only
Defaults: SSF = remaster-data/chameleon/chameleon.ssf, OUTDIR = remaster-data/chameleon/model,
textures from remaster-data/chameleon/mka (chameleon.py sources).
"""
import json
import os
import struct
import sys

import numpy as np
from PIL import Image, ImageDraw

MKA_TOOLS = '/home/darkwarro/Documents/Twitter/PS2_REA_2/mk_armageddon_decomp/decomp/tools/assets'
sys.path.insert(0, MKA_TOOLS)
import ssf  # noqa: E402

DATA = '/home/darkwarro/Documents/Twitter/PS2_REA/remaster-data/chameleon'
SSF = os.path.join(DATA, 'chameleon.ssf')
OUT = os.path.join(DATA, 'model')
TEX = os.path.join(DATA, 'mka')
NAME = 'mka_chameleon'
SCROLL_FRAME = 1070         # preview rainbow phase: frames of MKA's V scroll (0.0005/frame, 2000 per cycle); 1070
                            # puts the cloth (v 0.94-1.0) on the green rows of CHAMELEON_004
GLASS = (0.2, 0.45)         # skin (flag 0x200): MKA draws it as lerp(256x256 screen copy, skin, Ad) (ELF 0x304ea0,
                            # ALPHA_2 0x54); Ad is VU1 vertex alpha, not decoded: 0.2 and the 0.45 colour gain
                            # (MKA's darker arena lighting) are matched by eye to the oracle run fighters_05_24
SPECULAR = (0.35, 12.0)     # strength, exponent of the specular pass (ALPHA_2 0x58, Cs*Ad+Cd, Ad = texture alpha) that
                            # MKA adds when field_04 > 0 (thresholds 10/25/40; all are 25 here): estimated


# ---------------------------------------------------------------------------------------------------- RW stream
def chunk(b, o, want=None):
    cid, size, ver = struct.unpack_from('<3I', b, o)
    if want is not None and cid != want:
        raise ValueError('chunk %#x at %#x, want %#x' % (cid, o, want))
    return cid, size, o + 12


def align(o, a):
    return (o + a - 1) & -a


def read_frames(b, o):
    """FrameList at o -> frames [{parent, local 4x4, id}], HAnim nodes, end offset"""
    _, size, p = chunk(b, o, 0xE)
    end = p + size
    _, ssz, q = chunk(b, p, 0x1)
    n, = struct.unpack_from('<I', b, q)
    frames = []
    for i in range(n):
        v = struct.unpack_from('<12fiI', b, q + 4 + 56 * i)
        m = np.eye(4)
        m[:3, :3] = np.array(v[:9]).reshape(3, 3)
        m[3, :3] = v[9:12]
        frames.append({'parent': v[12], 'local': m, 'flags': v[13], 'id': None})
    p = q + ssz
    nodes = None
    for i in range(n):
        _, esz, e = chunk(b, p, 0x3)
        r = e
        while r < e + esz:
            cid, csz, c = chunk(b, r)
            if cid == 0x11E:
                _, hid, nn = struct.unpack_from('<IiI', b, c)
                frames[i]['id'] = hid
                if nn:
                    flags, kfs = struct.unpack_from('<II', b, c + 12)
                    nodes = [struct.unpack_from('<iiI', b, c + 20 + 12 * k) for k in range(nn)]
                    frames[i]['hanim'] = True
            r = c + csz
        p = e + esz
    assert p == end
    return frames, nodes, end


def read_material(b, o):
    _, size, p = chunk(b, o, 0x7)
    end = p + size
    _, ssz, q = chunk(b, p, 0x1)
    mflags, rgba, _, textured = struct.unpack_from('<IIII', b, q)
    p = q + ssz
    m = {'rw_color': rgba, 'texture': None}
    if textured:
        _, tsz, t = chunk(b, p, 0x6)
        _, s1, u = chunk(b, t, 0x1)
        m['tex_filter_address'] = struct.unpack_from('<I', b, u)[0]
        _, s2, u = chunk(b, u + s1, 0x2)
        m['texture'] = b[u:u + s2].split(b'\0')[0].decode()
        p = t + tsz
    _, esz, e = chunk(b, p, 0x3)
    r = e
    while r < e + esz:
        cid, csz, c = chunk(b, r)
        if cid == 0x895303:
            m.update(read_mkmaterial(b[c:c + csz]))
        r = c + csz
    assert r == end
    return m


def read_mkmaterial(d):
    """Midway material plugin (Deception mk_plugins.c MkmaterialDataReadStream, version 5)"""
    ver, flags, f04 = struct.unpack_from('<IIf', d, 0)
    hi, p = ver >> 16, 12
    assert ver & 0xFFFF == 5, hex(ver)
    m = {'plugin_hi': hi, 'flags': flags, 'field_04': f04, 'palette': []}
    if hi & 0x4000:
        n, = struct.unpack_from('<I', d, p)
        m['palette'] = list(struct.unpack_from('<%dI' % n, d, p + 4))
        p += 4 + 4 * n
    m['rgba'], m['field_0C'], m['zbias'] = struct.unpack_from('<Iff', d, p)
    p += 12
    m['uv_scroll'] = [0.0, 0.0, 0.0, 0.0]
    if hi & 0x8000:
        m['uv_scroll'] = list(struct.unpack_from('<4f', d, p))
        p += 16
    m['type'], = struct.unpack_from('<I', d, p)
    assert p + 4 == len(d)
    return m


def read_geometry(b, o):
    """Geometry chunk at o -> header, materials, BinMesh meshes, native mesh blobs, skin"""
    _, gsize, p = chunk(b, o, 0xF)
    gend = p + gsize
    _, _, q = chunk(b, p, 0x1)          # Midway's Struct size is not the header size: parse the header itself
    flags, ntri, nvert, nmorph = struct.unpack_from('<4I', b, q)
    assert flags & 0x01000000 and nmorph == 1, hex(flags)       # native, no RW vertex/triangle arrays
    sphere = struct.unpack_from('<4f', b, q + 16)
    p = q + 16 + 24
    _, lsz, l = chunk(b, p, 0x8)
    _, ssz, s = chunk(b, l, 0x1)
    nmat, = struct.unpack_from('<I', b, s)
    assert all(x == -1 for x in struct.unpack_from('<%di' % nmat, b, s + 4))      # no instanced materials
    r = s + ssz
    mats = []
    for _ in range(nmat):
        mats.append(read_material(b, r))
        r = chunk(b, r)[2] + chunk(b, r)[1]
    assert r == l + lsz
    _, esz, e = chunk(b, r, 0x3)
    bm = None
    x = e
    while x < e + esz:
        cid, csz, c = chunk(b, x)
        if cid == 0x50E:
            bflags, nmesh, nidx = struct.unpack_from('<3I', b, c)
            bm = {'tristrip': bflags == 1, 'indices': nidx,
                  'meshes': [struct.unpack_from('<2I', b, c + 12 + 8 * k) for k in range(nmesh)]}
        x = c + csz
    p = e + esz
    blobs = []
    for _ in bm['meshes']:
        size, one = struct.unpack_from('<2I', b, p)
        assert one == 1
        blobs.append(b[align(p + 8, 128):p + 8 + size])
        p += 8 + size
    native_end = p
    while b[p:p + 4] != b'\x01\0\0\0':          # PAD128 filler, then the skin's Struct header
        p += 1
    _, _, s = chunk(b, p, 0x1)
    platform, nb, nused, maxw = struct.unpack_from('<I3B', b, s)
    assert platform == 4                         # rwPLATFORM PS2
    used = list(b[s + 8:s + 8 + nused])
    m0 = s + 8 + nused
    inv = np.frombuffer(b[m0:m0 + 64 * nb], '<f4').reshape(nb, 4, 4).astype(np.float64).copy()
    inv[:, :, 3] = [0, 0, 0, 1]                  # RwMatrix flags/pad words
    tail = b[m0 + 64 * nb:gend]
    assert tail == bytes(len(tail)), tail.hex()
    return {'flags': flags, 'triangles': ntri, 'vertices': nvert, 'sphere': sphere, 'materials': mats,
            'binmesh': bm, 'blobs': blobs, 'native_end': native_end,
            'skin': {'bones': nb, 'used': used, 'max_weights': maxw, 'inverse_bind': inv}}


def read_clump(sec):
    """COSTUME section bytes -> frames, hierarchy nodes, geometry"""
    first, last = struct.unpack_from('<2i', sec, 0)
    _, csize, p = chunk(sec, 8, 0x10)
    _, ssz, q = chunk(sec, p, 0x1)
    natom, = struct.unpack_from('<I', sec, q)
    assert natom == 1
    frames, nodes, p = read_frames(sec, q + ssz)
    _, glsz, g = chunk(sec, p, 0x1A)
    _, _, s = chunk(sec, g, 0x1)
    assert struct.unpack_from('<I', sec, s)[0] == 1
    geo = read_geometry(sec, s + 4)
    return frames, nodes, geo, (first, last)


# ---------------------------------------------------------------------------------------------------- VIF / VU1
UNPACK_BITS = (32, 16, 8, 5)
UNSET = -(1 << 40)


def vif_batches(blob):
    """Run one mesh's DMA ret packet through a VIF1 model; yield (memory, info) at each MSCAL/MSCNT.
    memory is TOPS-relative (every UNPACK here sets FLG): int64 [1024, 4], UNSET = unwritten."""
    tag, = struct.unpack_from('<Q', blob, 0)
    qwc, tid = tag & 0xFFFF, (tag >> 28) & 7
    assert tid == 6, 'DMA tag %#x is not ret' % tag      # one ret tag: header word pair + qwc qwords
    o, end = 8, 16 + 16 * qwc
    mem = np.full((1024, 4), UNSET, np.int64)
    cl = wl = 1
    mask = 0
    info = {'unpacks': []}
    while o < end:
        w, = struct.unpack_from('<I', blob, o)
        cmd, num, imm = (w >> 24) & 0x7F, (w >> 16) & 0xFF, w & 0xFFFF
        o += 4
        if cmd >= 0x60:
            vn, vl, msk = (cmd >> 2) & 3, cmd & 3, (cmd >> 4) & 1
            comps, bits, n = vn + 1, UNPACK_BITS[vl], num or 256
            size = (n * comps * bits + 31) // 32 * 4
            usn, flg, addr = (imm >> 14) & 1, imm >> 15, imm & 0x3FF
            assert flg and bits != 5
            dt = {32: '<u4', 16: '<u2' if usn else '<i2', 8: 'u1' if usn else 'i1'}[bits]
            vals = np.frombuffer(blob[o:o + size], dt)[:n * comps].astype(np.int64).reshape(n, comps)
            if bits == 32:
                vals &= 0xFFFFFFFF
            o += size
            assert cl >= wl
            for i in range(n):
                a = addr + (i // wl) * cl + i % wl
                row = min(i % wl, 3)
                for c in range(4):
                    mb = (mask >> (row * 8 + c * 2)) & 3 if msk else 0
                    if mb == 3:
                        continue
                    assert mb == 0, 'row/col fill not modelled'
                    if comps == 1:
                        mem[a, c] = vals[i, 0]
                    elif c < comps:
                        mem[a, c] = vals[i, c]
            info['unpacks'].append((comps, bits, msk, n, addr, mask if msk else None, cl, wl))
        elif cmd == 0x20:
            mask, = struct.unpack_from('<I', blob, o)
            o += 4
        elif cmd == 0x01:
            cl, wl = imm & 0xFF, imm >> 8
        elif cmd == 0x05:
            assert imm & 3 == 0          # STMOD normal
        elif cmd in (0x00, 0x04, 0x10, 0x11, 0x13):   # NOP, ITOP (double-buffer toggle), FLUSHE/FLUSH/FLUSHA
            pass
        elif cmd in (0x14, 0x17):        # MSCAL / MSCNT: the batch is complete
            yield mem, info
            mem = np.full((1024, 4), UNSET, np.int64)
            info = {'unpacks': []}
        else:
            raise ValueError('VIF cmd %#x at %#x' % (cmd, o - 4))
    assert not info['unpacks'], 'data after the last MSCAL'


def f32(bits):
    return np.array(bits, np.uint32).view(np.float32).astype(np.float64)


def decode_native(geo):
    """-> unique vertices, triangles per material, stats"""
    verts, vindex = [], {}
    tris = {}
    stats = {'batches': 0, 'records': 0, 'max_batch': 0, 'copies': 0, 'adc_skipped': 0, 'degenerate': 0,
             'strip_slots': 0, 'w2_sum': {}, 'parity_flips': 0, 'mesh_slots': []}
    for (nidx, mi), blob in zip(geo['binmesh']['meshes'], geo['blobs']):
        mat = geo['materials'][mi]
        pal = mat['palette']
        prev = {}
        mesh_slots = 0
        tl = tris.setdefault(mi, [])
        for mem, info in vif_batches(blob):
            stats['batches'] += 1
            hdr = [int(mem[k // 4, k % 4]) for k in range(8)]
            n1, n2, n3, slen, d1, d2, d3, ncq = hdr
            pos_up = [u for u in info['unpacks'] if u[:3] == (3, 32, 0)]
            assert len(pos_up) == 1
            base, nv = pos_up[0][4], pos_up[0][3]
            assert nv == n1 + n2 + n3 + d1 + d2 + d3, (hdr, nv)
            stats['records'] += nv
            stats['max_batch'] = max(stats['max_batch'], nv)
            out = {}
            classes = [1] * n1 + [2] * n2 + [3] * n3 + [1] * d1 + [2] * d2 + [3] * d3
            for i, nb in enumerate(classes):
                a = base + 3 * i
                P, N, T = mem[a], mem[a + 1], mem[a + 2]
                assert UNSET not in P and UNSET not in N and UNSET not in T
                slots = [int(P[c]) & 0xFF for c in range(3)]
                assert all(s % 4 == 0 for s in slots) and all(s == 0 for s in slots[nb:]), slots
                slots = [s // 4 for s in slots[:nb]]
                assert all(1 <= s <= len(pal) for s in slots), (slots, len(pal))
                w1, w2 = int(P[3]), int(N[3])
                if nb == 1:
                    assert w1 == 4096
                    ws = [4096]
                elif nb == 2:
                    stats['w2_sum'][w1 + w2] = stats['w2_sum'].get(w1 + w2, 0) + 1
                    ws = [w1, 4096 - w1]
                else:
                    ws = [w1, w2, 4096 - w1 - w2]
                assert all(x > 0 for x in ws), ws
                bones = [pal[s - 1] for s in slots]
                pos = f32([int(P[c]) & 0xFFFFFF00 for c in range(3)])
                nrm = [((int(N[c]) + 128) & 0xFF) - 128 for c in range(3)]
                uv = [((int(T[c]) + 0x8000) & 0xFFFF) - 0x8000 for c in range(2)]
                key = (tuple(pos), tuple(nrm), tuple(uv), tuple(bones), tuple(ws))
                vid = vindex.get(key)
                if vid is None:
                    vid = vindex[key] = len(verts)
                    verts.append(key)
                z, w = int(T[2]) & 0xFFFF, int(T[3]) & 0xFFFF
                dual = i >= n1 + n2 + n3
                assert dual or z == w
                for s in ((z, w) if dual else (z,)):
                    assert s & 0x7FFF not in out
                    out[s & 0x7FFF] = (vid, s >> 15)
            ncopy = slen - len(out)
            assert 0 <= ncopy <= 2 * ncq and ncopy > 2 * ncq - 2, (ncopy, ncq)
            cp = [int(mem[2 + k // 4, k % 4]) & 0xFFFF for k in range(4 * ncq)]
            for k in range(ncopy):
                src, dst = cp[2 * k], cp[2 * k + 1]
                assert dst & 0x8000 == 0 and dst not in out
                out[dst] = (prev[src & 0x7FFF][0], src >> 15)
            stats['copies'] += ncopy
            slots = sorted(out)
            step = slots[1] - slots[0]
            assert slots == list(range(slots[0], slots[0] + step * slen, step)), slots
            stats['strip_slots'] += slen
            mesh_slots += slen
            strip = [out[s] for s in slots]
            for k in range(2, slen):
                if strip[k][1]:
                    stats['adc_skipped'] += 1
                    continue
                a, b_, c = strip[k - 2][0], strip[k - 1][0], strip[k][0]
                if len({a, b_, c}) < 3:
                    stats['degenerate'] += 1
                    continue
                tl.append((a, b_, c) if k % 2 == 0 else (b_, a, c))
            prev = out
        stats['mesh_slots'].append((mesh_slots, nidx))
    return verts, tris, stats


# ---------------------------------------------------------------------------------------------------- model
def load_model(path=SSF):
    root = ssf.Sec(open(path, 'rb').read())
    bundle = root.children[0]
    k = next(i for i in range(len(bundle.children)) if bundle.name(i) == 'COSTUME')
    frames, nodes, geo, texrange = read_clump(bundle.children[k])
    textures = {}
    for i in range(len(bundle.children)):
        if bundle.entries[i][0] & 0x3FFFFFFF == 3:
            d = bundle.children[i]
            textures[d[5:5 + d[4]].decode()] = '0_%d_%s.png' % (i, bundle.name(i))
    return frames, nodes, geo, textures


def skeleton(frames, nodes):
    world = []
    for f in frames:
        m = f['local'] if f['parent'] < 0 else f['local'] @ world[f['parent']]
        world.append(m)
    by_id = {f['id']: i for i, f in enumerate(frames) if f['id'] is not None and f['id'] >= 0}
    table, real = [], {}
    stack, parent = [], -1
    for i, (nid, nindex, nflags) in enumerate(nodes):
        if not nid & 0x8000:
            real[nid & 0xFFF07FFF] = i
    for i, (nid, nindex, nflags) in enumerate(nodes):
        key = nid & 0xFFF07FFF
        clone = bool(nid & 0x8000)
        table.append({'node': i, 'id': nid, 'tag': key, 'limb': (nid >> 16) & 0xF, 'clone': clone,
                      'source': real[key], 'frame': by_id[key], 'hanim_index': nindex, 'hanim_flags': nflags,
                      'parent_node': parent})
        if nflags & 2:
            stack.append(parent)
        parent = i
        if nflags & 1:
            parent = stack.pop() if stack else -1
    return world, table


def build(path=SSF):
    frames, nodes, geo, textures = load_model(path)
    world, table = skeleton(frames, nodes)
    verts, tris, st = decode_native(geo)
    pos = np.array([v[0] for v in verts])
    nrm = np.array([v[1] for v in verts], float) / 127.0
    uv = np.array([v[2] for v in verts], float) / 4096.0
    # the strips' parity is not kept across restarts (GS draws both sides), so face each triangle the way its
    # vertex normals point (34 of 8048 triangles are within 80 degrees of edge-on)
    flips = 0
    for mi, tl in tris.items():
        t = np.array(tl)
        fn = np.cross(pos[t[:, 1]] - pos[t[:, 0]], pos[t[:, 2]] - pos[t[:, 0]])
        back = (fn * nrm[t].sum(1)).sum(1) < 0
        t[back] = t[back][:, [1, 0, 2]]
        flips += int(back.sum())
        tris[mi] = t
    st['winding_flipped'] = flips
    return {'frames': frames, 'nodes': nodes, 'geo': geo, 'textures': textures, 'world': world, 'table': table,
            'pos': pos, 'nrm': nrm, 'uv': uv, 'joints': [list(v[3]) for v in verts],
            'weights': [list(v[4]) for v in verts], 'tris': tris, 'stats': st}


def self_check(m):
    geo, st, table, world = m['geo'], m['stats'], m['table'], m['world']
    ntri = sum(len(t) for t in m['tris'].values())
    res = {'triangles': ntri, 'rw_triangles': geo['triangles'], 'vertices': len(m['pos']),
           'rw_vertices': geo['vertices'], 'batches': st['batches'], 'vertex_records': st['records'],
           'max_batch': st['max_batch'], 'copies': st['copies'], 'adc_skipped': st['adc_skipped'],
           'degenerate_dropped': st['degenerate'], 'strip_slots': st['strip_slots'],
           'binmesh_indices': geo['binmesh']['indices'], 'two_bone_raw_sums': st['w2_sum']}
    assert ntri == geo['triangles'], res
    assert all(sum(w) == 4096 for w in m['weights'])
    nb = geo['skin']['bones']
    assert len(table) == nb and all(0 <= j < nb for js in m['joints'] for j in js)
    # inverse binds against the frames (clones use their source's frame)
    inv = geo['skin']['inverse_bind']
    err = max(np.abs(inv[t['node']] @ world[t['frame']] - np.eye(4)).max() for t in table)
    res['inverse_bind_vs_frames'] = float(err)
    assert err < 1e-4, err
    # bind-pose skinning with the file's inverse binds and the frames' world matrices reproduces the vertices
    p = np.c_[m['pos'], np.ones(len(m['pos']))]
    sk = np.zeros_like(p)
    for i, (js, ws) in enumerate(zip(m['joints'], m['weights'])):
        for j, w in zip(js, ws):
            sk[i] += w / 4096 * (p[i] @ inv[j] @ world[table[j]['frame']])
    res['bind_skin_max_err'] = float(np.abs(sk[:, :3] - m['pos']).max())
    assert res['bind_skin_max_err'] < 1e-3
    res['vertices_match_rw'] = len(m['pos']) == geo['vertices']
    res['winding_flipped'] = st['winding_flipped']
    used = {j for js in m['joints'] for j in js}
    res['matrix_entries_weighted'] = len(used)
    res['clones_weighted'] = sum(table[j]['clone'] for j in used)
    res['real_bones_weighted'] = len({table[j]['frame'] for j in used})
    lo, hi = m['pos'].min(0), m['pos'].max(0)
    res['bbox_min'], res['bbox_max'] = lo.round(4).tolist(), hi.round(4).tolist()
    res['height'] = round(float(hi[1] - lo[1]), 4)
    return res


# ---------------------------------------------------------------------------------------------------- outputs
def blend_mode(mat):
    """preview / glTF treatment per material (MKA ELF: per-mesh draw 0x304720, setup 0x304ea0):
    'hidden'  dismemberment caps: the 21 cham_stump caps and the 7 skin rings at the neck/shoulders/elbows/wrists,
              the only materials with rgba 0xffffff00
    'glass'   flags 0x200 (bare skin): blended over a copy of the screen, so Chameleon's skin is nearly invisible
    'blend'   flags 0x40000000 (the trans shell over the rainbow cloth): held back, drawn after the other meshes
              with (Cs-Cd)*As+Cd
    'opaque'  the rest; texture alpha only masks the specular pass (leather/leg are solid in game)"""
    if mat['rgba'] == 0xFFFFFF00:
        return 'hidden'
    if mat['flags'] & 0x200:
        return 'glass'
    if mat['flags'] & 0x40000000:
        return 'blend'
    return 'opaque'


def r6(a):
    return np.round(np.asarray(a, float), 7).tolist()


def write_json(m, path, check):
    geo, table, world = m['geo'], m['table'], m['world']
    inv = geo['skin']['inverse_bind']
    mats = []
    for mi, mat in enumerate(geo['materials']):
        mats.append({'index': mi, 'texture': mat['texture'], 'png': m['textures'].get(mat['texture']),
                     'flags': '%#010x' % mat['flags'], 'material_id': mat['flags'] & 0xFFF,
                     'type': '%#x' % mat['type'], 'rgba': '%#010x' % mat['rgba'], 'field_04': mat['field_04'],
                     'field_0C': mat['field_0C'], 'zbias': mat['zbias'], 'uv_scroll_per_frame': mat['uv_scroll'],
                     'palette': mat['palette'], 'preview_blend': blend_mode(mat),
                     'triangles': np.asarray(m['tris'].get(mi, np.zeros((0, 3), int))).tolist()})
    frames = [{'index': i, 'parent': f['parent'], 'id': None if f['id'] is None else '%#x' % (f['id'] & 0xFFFFFFFF),
               'local': r6(f['local']), 'world': r6(world[i])} for i, f in enumerate(m['frames'])]
    mt = [{'index': t['node'], 'node_id': '%#010x' % t['id'], 'tag': '%#x' % t['tag'], 'limb': t['limb'],
           'clone': t['clone'], 'source': t['source'], 'frame': t['frame'], 'parent': t['parent_node'],
           'hanim_index': t['hanim_index'], 'hanim_flags': t['hanim_flags'], 'inverse_bind': r6(inv[t['node']])}
          for t in table]
    doc = {
        'source': {'file': 'chameleon.ssf', 'section': '0/1 COSTUME', 'format': 'RenderWare 3.6 clump, Midway '
                   'native PS2 skinned tristrips (see mkamesh.py)'},
        'conventions': 'metres, Y up, the model faces +Z, pelvis at the origin, bind pose = T-pose. Matrices are '
                       'RenderWare row-vector 4x4 (v\' = v * M, translation in row 3). UV: v down (PS2/glTF). '
                       'Weights are 4.12 fixed point and sum to 4096. vertices.joints index skeleton.matrix_table '
                       '(the skin\'s 104 matrices = HAnim nodes, clones included); vertices.frames resolves them '
                       'to skeleton.frames (a clone = an exact copy of its source bone).',
        'counts': check,
        'vertices': {'position': r6(m['pos']), 'normal': np.round(m['nrm'], 5).tolist(), 'uv': r6(m['uv']),
                     'joints': m['joints'], 'weights': m['weights'],
                     'frames': [[table[j]['frame'] for j in js] for js in m['joints']]},
        'materials': mats,
        'skeleton': {'frames': frames, 'matrix_table': mt},
    }
    with open(path, 'w') as f:
        json.dump(doc, f, separators=(',', ':'))


def write_gltf(m, path):
    """glTF 2.0 for inspection: every frame is a node and a joint (joint index = frame index), one primitive per
    visible material, textures referenced from ../mka"""
    geo, world = m['geo'], m['world']
    nf = len(m['frames'])
    V = len(m['pos'])
    jt = np.zeros((V, 4), np.uint16)
    wt = np.zeros((V, 4), np.float32)
    for i, (js, ws) in enumerate(zip(m['joints'], m['weights'])):
        for k, (j, w) in enumerate(zip(js, ws)):
            jt[i, k] = m['table'][j]['frame']
            wt[i, k] = w / 4096
    blob, views, accs = bytearray(), [], []

    def add(arr, target=None, comp=5126, typ='VEC3', minmax=False):
        arr = np.ascontiguousarray(arr)
        while len(blob) % 4:
            blob.append(0)
        views.append({'buffer': 0, 'byteOffset': len(blob), 'byteLength': arr.nbytes})
        if target:
            views[-1]['target'] = target
        blob.extend(arr.tobytes())
        acc = {'bufferView': len(views) - 1, 'componentType': comp, 'count': len(arr), 'type': typ}
        if minmax:
            acc['min'], acc['max'] = arr.min(0).tolist(), arr.max(0).tolist()
        accs.append(acc)
        return len(accs) - 1

    attrs = {'POSITION': add(m['pos'].astype(np.float32), 34962, minmax=True),
             'NORMAL': add((m['nrm'] / np.linalg.norm(m['nrm'], axis=1, keepdims=True)).astype(np.float32), 34962),
             'TEXCOORD_0': add(m['uv'].astype(np.float32), 34962, typ='VEC2'),
             'JOINTS_0': add(jt, 34962, 5123, 'VEC4'), 'WEIGHTS_0': add(wt, 34962, typ='VEC4')}
    ibm = add(np.array([np.linalg.inv(w).astype(np.float32).ravel() for w in world]), comp=5126, typ='MAT4')
    images, textures, materials, prims, texi = [], [], [], [], {}
    for mi, mat in enumerate(geo['materials']):
        mode = blend_mode(mat)
        if mode == 'hidden' or mi not in m['tris']:
            continue
        png = m['textures'][mat['texture']]
        if png not in texi:
            texi[png] = len(textures)
            images.append({'uri': '../mka/' + png})
            textures.append({'source': len(images) - 1, 'sampler': 0})
        materials.append({'name': '%d_%s' % (mi, mat['texture']), 'doubleSided': True,
                          'pbrMetallicRoughness': {'baseColorTexture': {'index': texi[png]}, 'metallicFactor': 0.0,
                                                   'roughnessFactor': 0.8},
                          'alphaMode': 'OPAQUE' if mode == 'opaque' else 'BLEND'})
        if mode == 'glass':
            materials[-1]['pbrMetallicRoughness']['baseColorFactor'] = [GLASS[1], GLASS[1], GLASS[1], GLASS[0]]
        idx = add(np.asarray(m['tris'][mi], np.uint16).ravel(), 34963, 5123, 'SCALAR')
        prims.append({'attributes': attrs, 'indices': idx, 'material': len(materials) - 1, 'mode': 4})
    nodes = []
    for i, f in enumerate(m['frames']):
        nodes.append({'name': 'frame%d' % i if f['id'] is None else 'frame%d_%x' % (i, f['id'] & 0xFFFFFFFF),
                      'matrix': f['local'].astype(np.float32).ravel().tolist()})   # RW row-vector = glTF column-major
    for i, f in enumerate(m['frames']):
        kids = [k for k, g in enumerate(m['frames']) if g['parent'] == i]
        if kids:
            nodes[i]['children'] = kids
    nodes.append({'name': 'chameleon', 'mesh': 0, 'skin': 0})
    roots = [i for i, f in enumerate(m['frames']) if f['parent'] < 0] + [nf]
    bin_name = os.path.splitext(os.path.basename(path))[0] + '.bin'
    gl = {'asset': {'version': '2.0', 'generator': 'mkamesh.py (MKA chameleon.ssf)'},
          'scene': 0, 'scenes': [{'nodes': roots}], 'nodes': nodes,
          'meshes': [{'name': 'chameleon', 'primitives': prims}],
          'skins': [{'joints': list(range(nf)), 'inverseBindMatrices': ibm, 'skeleton': 0}],
          'materials': materials, 'textures': textures, 'images': images,
          'samplers': [{'magFilter': 9729, 'minFilter': 9729, 'wrapS': 10497, 'wrapT': 10497}],
          'buffers': [{'uri': bin_name, 'byteLength': len(blob)}], 'bufferViews': views, 'accessors': accs}
    open(os.path.join(os.path.dirname(path), bin_name), 'wb').write(blob)
    with open(path, 'w') as f:
        json.dump(gl, f, indent=1)


def extract(path=SSF, out=OUT):
    m = build(path)
    check = self_check(m)
    os.makedirs(out, exist_ok=True)
    write_json(m, os.path.join(out, NAME + '.json'), check)
    write_gltf(m, os.path.join(out, NAME + '.gltf'))
    return m, check


# ---------------------------------------------------------------------------------------------------- preview
VIEWS = {'front': (0.0, 4.0), 'three_quarter': (40.0, 8.0), 'back': (180.0, 4.0)}   # camera azimuth, elevation
ORACLE = '/home/darkwarro/Documents/Twitter/PS2_REA_2/analysis/runs/fighters_05_24/frames/frame_%05d.ppm'


def load_textures(m, tex_dir=TEX):
    out = {}
    for name, png in m['textures'].items():
        out[name] = np.asarray(Image.open(os.path.join(tex_dir, png)).convert('RGBA'), np.float32) / 255.0
    return out


def sample(tex, u, v):
    """bilinear, wrapping (PS2 REPEAT)"""
    h, w = tex.shape[:2]
    x, y = u * w - 0.5, v * h - 0.5
    x0, y0 = np.floor(x), np.floor(y)
    fx, fy = (x - x0)[:, None], (y - y0)[:, None]
    x0, y0 = x0.astype(int) % w, y0.astype(int) % h
    x1, y1 = (x0 + 1) % w, (y0 + 1) % h
    return ((tex[y0, x0] * (1 - fx) + tex[y0, x1] * fx) * (1 - fy) +
            (tex[y1, x0] * (1 - fx) + tex[y1, x1] * fx) * fy)


def camera(az, el):
    a, e = np.radians(az), np.radians(el)
    back = np.array([np.sin(a) * np.cos(e), np.sin(e), np.cos(a) * np.cos(e)])    # target -> camera
    right = np.cross([0, 1, 0], back)
    right /= np.linalg.norm(right)
    up = np.cross(back, right)
    return np.stack([right, up, -back])           # rows: camera x (right), y (up), z (forward)


def render(m, texs, view='front', size=1024, ss=2, frame=SCROLL_FRAME, only=None):
    az, el = VIEWS[view]
    R = camera(az, el)
    lo, hi = m['pos'].min(0), m['pos'].max(0)
    target = (lo + hi) / 2
    dist = 8.0
    pc = (m['pos'] - target) @ R.T + [0, 0, dist]                     # camera space, z = depth
    nc = m['nrm'] @ R.T
    nc /= np.linalg.norm(nc, axis=1, keepdims=True)
    S = size * ss
    px, py = pc[:, 0] / pc[:, 2], pc[:, 1] / pc[:, 2]
    f = 0.9 * S / max(px.max() - px.min(), py.max() - py.min())
    sx = S / 2 + f * (px - (px.max() + px.min()) / 2)
    sy = S / 2 - f * (py - (py.max() + py.min()) / 2)
    key = np.array([-0.45, 0.55, -1.0]); key /= np.linalg.norm(key)
    fill = np.array([0.7, 0.1, -0.5]); fill /= np.linalg.norm(fill)
    rim = np.array([0.0, 0.35, 1.0]); rim /= np.linalg.norm(rim)
    half = key + [0, 0, -1.0]; half /= np.linalg.norm(half)               # Blinn half vector, viewer at -z
    spec_rgb = (1.0, 1.0, 1.0)                                              # rgba 0xff7f7f7f: grey, 0x7f ~ 1.0
    yy = np.linspace(0, 1, S)[:, None, None]
    img = (np.array([0.25, 0.26, 0.29]) * (1 - yy) + np.array([0.13, 0.13, 0.15]) * yy) * np.ones((S, S, 3))
    zbuf = np.full((S, S), np.inf)
    geo = m['geo']
    opaque, blend = [], []
    for mi, t in m['tris'].items():
        mat = geo['materials'][mi]
        mode = blend_mode(mat)
        if mode == 'hidden' or (only and mat['texture'] not in only):
            continue
        for tri in t:
            (opaque if mode == 'opaque' else blend).append((mi, tri))
    blend.sort(key=lambda x: -pc[x[1], 2].mean())                    # back to front

    def raster(mi, tri, write):
        mat = geo['materials'][mi]
        xs, ys, zs = sx[tri], sy[tri], pc[tri, 2]
        x0, x1 = max(int(np.floor(xs.min())), 0), min(int(np.ceil(xs.max())) + 1, S)
        y0, y1 = max(int(np.floor(ys.min())), 0), min(int(np.ceil(ys.max())) + 1, S)
        if x0 >= x1 or y0 >= y1:
            return
        area = (xs[1] - xs[0]) * (ys[2] - ys[0]) - (xs[2] - xs[0]) * (ys[1] - ys[0])
        if abs(area) < 1e-9:
            return
        gx, gy = np.meshgrid(np.arange(x0, x1) + 0.5, np.arange(y0, y1) + 0.5)
        b0 = ((xs[1] - gx) * (ys[2] - gy) - (xs[2] - gx) * (ys[1] - gy)) / area
        b1 = ((xs[2] - gx) * (ys[0] - gy) - (xs[0] - gx) * (ys[2] - gy)) / area
        b2 = 1 - b0 - b1
        ins = (b0 >= 0) & (b1 >= 0) & (b2 >= 0)
        if not ins.any():
            return
        b = np.stack([b0[ins], b1[ins], b2[ins]], 1) / zs                   # perspective-correct weights
        iz = b.sum(1)
        b /= iz[:, None]
        depth = 1 / iz
        Y, X = gy[ins].astype(int), gx[ins].astype(int)
        vis = depth < zbuf[Y, X]
        if not vis.any():
            return
        b, depth, Y, X = b[vis], depth[vis], Y[vis], X[vis]
        n = b @ nc[tri]
        n /= np.linalg.norm(n, axis=1, keepdims=True)
        n[n[:, 2] > 0] *= -1                                                 # two-sided: face the camera
        uv = b @ m['uv'][tri]
        tex = sample(texs[mat['texture']], uv[:, 0] + mat['uv_scroll'][0] * frame, uv[:, 1] + mat['uv_scroll'][1] * frame)
        light = (0.40 + 0.75 * np.clip(n @ key, 0, 1) + 0.25 * np.clip(n @ fill, 0, 1))[:, None]
        col = tex[:, :3] * light + 0.18 * np.clip(n @ rim, 0, 1)[:, None] ** 2
        if mat['field_04'] > 0 and blend_mode(mat) == 'opaque':      # specular pass, masked by texture alpha
            spec = np.clip(n @ half, 0, 1) ** SPECULAR[1] * SPECULAR[0]
            col = col + (spec[:, None] * tex[:, 3:4]) * np.array(spec_rgb)
        col = np.clip(col, 0, 1)
        if write:
            img[Y, X] = col
            zbuf[Y, X] = depth
        else:
            a = tex[:, 3:4]
            if blend_mode(mat) == 'glass':
                col, a = col * GLASS[1], a * GLASS[0]
            img[Y, X] = col * a + img[Y, X] * (1 - a)

    for mi, tri in opaque:
        raster(mi, tri, True)
    for mi, tri in blend:
        raster(mi, tri, False)
    img = img.reshape(size, ss, size, ss, 3).mean((1, 3))
    return Image.fromarray((np.clip(img, 0, 1) * 255 + 0.5).astype(np.uint8), 'RGB')


def preview(out=OUT, path=SSF, only=None, tag=''):
    m = build(path)
    assert all(blend_mode(x) == 'hidden' for x in m['geo']['materials'] if x['texture'] == 'cham_stump')
    texs = load_textures(m)
    os.makedirs(out, exist_ok=True)
    paths, ims = [], []
    for v in VIEWS:
        im = render(m, texs, v, only=only)
        paths.append(os.path.join(out, 'preview_%s%s.png' % (v, tag)))
        im.save(paths[-1])
        ims.append(im)
    cycle = [render(m, texs, 'front', 384, frame=f, only=only) for f in range(0, 2000, 250)]
    sheet = Image.new('RGB', (3072, 1024 + 384 + 56), (20, 20, 24))
    d = ImageDraw.Draw(sheet)
    for k, (v, im) in enumerate(zip(VIEWS, ims)):
        sheet.paste(im, (1024 * k, 28))
        d.text((1024 * k + 10, 8), 'MKA Chameleon (chameleon.ssf COSTUME), bind pose, %s, rainbow scroll frame %d'
               % (v.replace('_', ' '), SCROLL_FRAME), fill=(220, 220, 220))
    d.text((10, 1024 + 36), 'rainbow cycle: V scroll 0.0005/frame, front view every 250 frames (2000 = one cycle)',
           fill=(220, 220, 220))
    for k, im in enumerate(cycle):
        sheet.paste(im, (384 * k, 1024 + 56))
        d.text((384 * k + 6, 1024 + 60), 'frame %d' % (250 * k), fill=(220, 220, 220))
    paths.append(os.path.join(out, 'preview%s.png' % tag))
    sheet.save(paths[-1])
    if os.path.exists(ORACLE % 6400) and not only:
        paths.append(compare_mka(m, texs, out))
    return paths


def compare_mka(m, texs, out):
    """MKA in game (fighter 05 = Chameleon, left, back to the camera) next to the preview at a matching hue"""
    shots = [Image.open(ORACLE % f).crop((120, 60, 300, 420)).resize((540, 1080), Image.LANCZOS) for f in (6400, 6600)]
    VIEWS['back_left'] = (215.0, 10.0)
    ours = [render(m, texs, 'back_left', 1080, frame=f).crop((270, 0, 810, 1080)) for f in (420, 700)]
    del VIEWS['back_left']
    sheet = Image.new('RGB', (540 * 4, 1080 + 30), (20, 20, 24))
    d = ImageDraw.Draw(sheet)
    labels = ('MKA in game (oracle run fighters_05_24, frame 6400)', 'mkamesh preview, scroll frame 420',
              'MKA in game, frame 6600', 'mkamesh preview, scroll frame 700')
    for k, (im, lab) in enumerate(zip((shots[0], ours[0], shots[1], ours[1]), labels)):
        sheet.paste(im, (540 * k, 30))
        d.text((540 * k + 8, 8), lab, fill=(220, 220, 220))
    path = os.path.join(out, 'compare_mka.png')
    sheet.save(path)
    return path


def main(argv):
    if len(argv) < 2 or argv[1] not in ('extract', 'preview', 'check'):
        print(__doc__)
        return 2
    if argv[1] == 'check':
        print(json.dumps(self_check(build(argv[2] if len(argv) > 2 else SSF)), indent=1, default=str))
    elif argv[1] == 'preview':
        only = set(argv[3].split(',')) if len(argv) > 3 else None
        print('\n'.join(preview(argv[2] if len(argv) > 2 else OUT, only=only, tag='_' + argv[3] if only else '')))
    elif argv[1] == 'extract':
        _, check = extract(*argv[2:4])
        print(json.dumps(check, default=str))
    return 0


if __name__ == '__main__':
    sys.exit(main(sys.argv))
