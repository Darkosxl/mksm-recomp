#!/usr/bin/env python3
"""PME2 character models of Mortal Kombat: Shaolin Monks (SLUS-210.87): parse, dump, write back, bind pose, preview.

The file (e.g. 6852, Reptile's story alt costume; 6761 his base model) is a tree of chunks whose pointers are byte
offsets from the file start. LoadModel 0x33F1C8 adds the load address to each of them in place; the per-type fixup is
fn_33F460 (jump table 0x58EA90 on chunk +4), and this script relocates exactly the fields it fixes:

  header (0x3c bytes)   +0 'PME2' (u32 0x504D4532), +4 f32 version 3.11 (the loader rejects < 3.11), +8 flags (0xb0
                        in every fighter: 0x20 = meshes are indexed, 0x10 = strip breaks from vertex flags bit 0 when
                        not indexed), +0x10 1, +0x14 texture page count (max material texture + 1), +0x18 -> first
                        chunk of the main list, +0x1c 0x21 (or 0x20), +0x20 and +0x28 -> first material, +0x24 2,
                        +0x2c 1.0
  every chunk           +0 -> next chunk in its list (0 = end), +4 type
  22 material  0x80     +8 version (3), +0xc index (= the vertices' material field), +0x10 texture page in the costume
                        WAD (-1 = none), +0x3c -> a 0x40 record (at +0x80) whose +0x10..+0x3c are 12 more pointers (to
                        0x70-byte pass records), +0x40 name
  3  dummy     0x7c     +8 vertex format (1), +0xc triangles, +0x10 vertices, +0x18 position, +0x24 rotation, +0x40 ->
                        vertices, +0x44 -> children (an index list), +0x48/+0x4c -> more, +0x50 name; not drawn
  5  group     0x18     +8 bone count, +0xc mesh count, +0x10 -> its first bone, +0x14 = first bone + count * 0x4c (the
                        first mesh unless bones carry children: 5929's type-19 SPRING_* records)
  10 bone      0x4c     +8 parent (-1 = root), +0xc name (32 bytes), +0x2c bind position (world, f32 x3), +0x38 bind
                        rotation (f32 x3, radians), +0x44 -> its group, +0x48 -> children
  11 mesh      0x34     +8 vertex format (2), +0xc triangles, +0x10 vertices, +0x14 bone count, +0x18 4 bone indices
                        (-1 pads), +0x28 -> its group, +0x2c -> vertices, +0x30 -> children (one type-16 index list)
  16 indices   0x14     +8 strips, +0xc indices, +0x10 -> u16 indices: bit 15 = a strip starts here, bit 14 = winding
                        hint of that strip (the iterator 0x33FDF0 ignores it), low 14 bits = vertex index
  12 sphere    0x48     +8 radius, +0xc bone, +0x10 offset in the bone (f32 x3), +0x40 -> children (one type 15)
  15 (sphere)  0x20     +8, +0xc, +0x10, +0x14, +0x18 -> 8 bytes
  other types (4, 13, 17, 19, 21, 23, 24, 26, 28, 29) are carried as opaque blocks with the pointers fn_33F460 fixes.
Each group (type 5) is one skinned object of the source scene with its own copy of the whole skeleton (Reptile: hood
flap A, hood flap B, loincloth, tongue, body); the main list holds dummies, then per group its header, bones and
meshes, then the spheres.

Vertex format 2 (64 bytes, decoded by fn_342318 via fn_342638; strides of the other formats from 0x340148):
  +0 s16 xyz (a per-group origin-shifted copy of the position; the character loader does not read it), +6 s16 normal
  /4096, +0xc s16 material index, +0xe s16 uv /4096, +0x12 4x s16 weight (4096 = 1), +0x1a 4 bone bytes (= the mesh's
  bone in that slot, 255 = unused), +0x1e 4x s16 xyz: the vertex in each slot bone's frame (world = bone bind position +
  R(bind rotation) * offset), +0x36 rgba, +0x3a 2 unused bytes, +0x3c u32 flags.
fn_25E798 turns each mesh (all type-11 chunks in file order, groups ignored) into one segment record of type
bone count + 1; fn_24E7B8 (2+ bones) / fn_24F290 (1 bone) build its VU1 stream, 48 vertices per batch, taking
position = pivot of the first used slot's bone + that slot's offset and the weights /4096.

Usage (--iso PATH or $MKSM_ISO overrides the disc; FID is a WAD file id, or a path to a raw .bin):
  pme2.py dump FID                     header, chunk tree, materials, dummies, groups, bones, meshes, spheres
  pme2.py roundtrip FID...             parse/write byte-identical; every mesh re-encoded from its parsed fields and
                                       every group rebuilt from new chunks (byte-identical); a shifted layout re-parses
                                       to the same content (proves every pointer is relocated)
  pme2.py bind FID OUTDIR [NAME]       OUTDIR/NAME_skeleton.json and NAME_mesh.json (bind pose, world units)
  pme2.py preview FID OUTDIR [NAME] [--tex TEXFID]
                                       OUTDIR/NAME_preview.png (front + 3/4, 1024 px each, textured from the costume
                                       WAD, default FID - 1) and NAME_skeleton.png (bones and names over the mesh)
As a module: Model.from_bytes(b), .to_bytes(), .groups[g].meshes[m].vertices() / .strips() / .set_geometry(...),
.groups[g].set_meshes([...]), make_vertices(...) for new vertex arrays from float data.
"""
import json
import os
import struct
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

MAGIC = 0x504D4532
HEADER = 0x3c
# chunk type -> [(field offset, the field heads a chunk list)], as fn_33F460 and its handlers fix them up
PTRS = {3: [(0x40, 0), (0x44, 1), (0x48, 0), (0x4c, 1)], 4: [(0x30, 0), (0x34, 0), (0x38, 1), (0x3c, 0)],
        5: [(0x10, 0), (0x14, 0)], 10: [(0x44, 0), (0x48, 1)], 11: [(0x28, 0), (0x2c, 0), (0x30, 1)],
        12: [(0x40, 1)], 15: [(0x18, 0)], 16: [(0x10, 0)], 17: [(0xc, 0), (0x10, 0), (0x14, 1)], 26: [(0x8, 0)],
        28: [(0x30, 0), (0x34, 0), (0x38, 0), (0x3c, 1)], 24: [(0x3c, 0), (0x40, 1), (0x44, 0), (0x48, 1)]}
FAIL_TYPES = (0, 27)                                  # fn_33F460 returns 0 (load error) for these
STRIDE = {0: 0x2c, 1: 0x1c, 2: 0x40, 3: 0x7c, 4: 0x34, 5: 0x20, 6: 0x10, 7: 0x18, 10: 4}
NAMES = {3: 'dummy', 5: 'group', 10: 'bone', 11: 'mesh', 12: 'sphere', 15: 'sphere-data', 16: 'indices',
         22: 'material'}
MESH_HEAD, IDX_HEAD = 0x34, 0x14
HEAD_SIZE = {3: 0x7c, 5: 0x18, 10: 0x4c, 11: MESH_HEAD, 12: 0x48, 15: 0x20, 16: IDX_HEAD, 19: 0x28, 22: 0x80}
STRIP, WIND, IMASK = 0x8000, 0x4000, 0x3fff


def u32(b, o):
    return struct.unpack_from('<I', b, o)[0]


def i32(b, o):
    return struct.unpack_from('<i', b, o)[0]


def f32(b, o, n=1):
    v = struct.unpack_from('<%df' % n, b, o)
    return v[0] if n == 1 else list(v)


def pad4(b):
    return bytes(b) + b'\0' * (-len(b) % 4)


class Blob:
    """a contiguous run of file bytes; relocs maps an offset in it to (Blob, delta): that u32 points delta bytes into
    the Blob (delta is 0 except for pointers into the middle of a chunk, like 5929's group +0x14)"""
    __slots__ = ('data', 'relocs', 'src')

    def __init__(self, data, src=None):
        self.data, self.relocs, self.src = bytearray(data), {}, src

    def ref(self, off):
        r = self.relocs.get(off)
        return r[0] if r is not None and r[1] == 0 else None

    def set_ref(self, off, blob):
        if blob is None:
            self.relocs.pop(off, None)
            struct.pack_into('<I', self.data, off, 0)
        else:
            self.relocs[off] = (blob, 0)

    @property
    def type(self):
        return u32(self.data, 4)


# ---------------------------------------------------------------------------------------------------------------------
# vertex format 2

def v2_dtype():
    import numpy as np
    return np.dtype([('pos', '<i2', (3,)), ('nrm', '<i2', (3,)), ('mat', '<i2'), ('uv', '<i2', (2,)),
                     ('w', '<i2', (4,)), ('bone', 'u1', (4,)), ('off', '<i2', (4, 3)), ('rgba', 'u1', (4,)),
                     ('pad', '<u2'), ('flags', '<u4')])


def euler_matrix(r):
    """bind rotation (rx, ry, rz) radians -> 3x3, applied x then y then z (only rz is nonzero in Reptile: the right
    arm's -0.034; the multi-axis order is not verified against the game)"""
    import numpy as np
    cx, sx, cy, sy, cz, sz = np.cos(r[0]), np.sin(r[0]), np.cos(r[1]), np.sin(r[1]), np.cos(r[2]), np.sin(r[2])
    rx = np.array([[1, 0, 0], [0, cx, -sx], [0, sx, cx]])
    ry = np.array([[cy, 0, sy], [0, 1, 0], [-sy, 0, cy]])
    rz = np.array([[cz, -sz, 0], [sz, cz, 0], [0, 0, 1]])
    return rz @ ry @ rx


def make_vertices(world, normal, uv, bones, weights, mat, skeleton, origin=(0, 0, 0), rgba=(255, 255, 255, 128),
                  flags=0):
    """format-2 vertices from float data. world (N,3) bind-pose positions in game units; normal (N,3) unit; uv (N,2);
    bones (N,4) skeleton bone indices per slot (-1 = unused) where slot j must be the mesh's bone j; weights (N,4)
    summing to 1; mat the material index; skeleton the Model's bone list (Bone objects) for the bind frames; origin
    the group's position origin (Group.origin()). Weights are rounded so each vertex sums to exactly 4096."""
    import numpy as np
    world, bones = np.asarray(world, float), np.asarray(bones, int)
    n = len(world)
    v = np.zeros(n, v2_dtype())
    v['pos'] = np.clip(np.rint(world - np.asarray(origin, float)), -32768, 32767)
    v['nrm'] = np.clip(np.rint(np.asarray(normal, float) * 4096), -32768, 32767)
    v['mat'] = mat
    v['uv'] = np.clip(np.rint(np.asarray(uv, float) * 4096), -32768, 32767)
    w = np.where(bones >= 0, np.asarray(weights, float), 0)
    wi = np.rint(w / np.maximum(w.sum(1, keepdims=True), 1e-9) * 4096).astype(int)
    big = np.argmax(wi, 1)
    wi[np.arange(n), big] += 4096 - wi.sum(1)
    v['w'] = wi
    v['bone'] = np.where(bones >= 0, bones, 255)
    for j in range(4):
        for k in range(n):
            b = bones[k, j]
            if b >= 0:
                bn = skeleton[b]
                v['off'][k, j] = np.clip(np.rint(euler_matrix(bn.rot).T @ (world[k] - np.asarray(bn.pos))),
                                         -32768, 32767)
    v['rgba'] = rgba
    v['flags'] = flags
    return v


# ---------------------------------------------------------------------------------------------------------------------
# views on chunks

class Bone:
    def __init__(self, blob):
        self.blob = blob

    @property
    def parent(self):
        return i32(self.blob.data, 8)

    @property
    def name(self):
        return bytes(self.blob.data[0xc:0x2c]).split(b'\0')[0].decode('latin1')

    @property
    def pos(self):
        return f32(self.blob.data, 0x2c, 3)

    @property
    def rot(self):
        return f32(self.blob.data, 0x38, 3)


class Mesh:
    def __init__(self, model, blob):
        self.model, self.blob = model, blob

    def _f(self, o):
        return i32(self.blob.data, o)

    fmt = property(lambda s: s._f(8))
    ntri = property(lambda s: s._f(0xc))
    nv = property(lambda s: s._f(0x10))
    nbones = property(lambda s: s._f(0x14))
    bones = property(lambda s: [s._f(0x18 + 4 * k) for k in range(s._f(0x14))])

    @property
    def vblob(self):
        return self.blob.ref(0x2c)

    def children(self):
        out, c = [], self.blob.ref(0x30)
        while c is not None:
            out.append(c)
            c = c.ref(0)
        return out

    def index_chunk(self):
        for c in self.children():
            if c.type == 16:
                return c
        return None

    def vertices(self):
        import numpy as np
        assert self.fmt == 2, 'only vertex format 2 is decoded'
        return np.frombuffer(bytes(self.vblob.data[:self.nv * 64]), v2_dtype()).copy()

    def raw_indices(self):
        c = self.index_chunk()
        n = u32(c.data, 0xc)
        return list(struct.unpack_from('<%dH' % n, c.ref(0x10).data, 0))

    def strips(self):
        """[(winding bit, [vertex indices])] in file order"""
        out = []
        for x in self.raw_indices():
            if x & STRIP or not out:
                out.append([1 if x & WIND else 0, []])
            out[-1][1].append(x & IMASK)
        return [(w, s) for w, s in out]

    def triangles(self):
        tris = []
        for _, s in self.strips():
            for k in range(len(s) - 2):
                a, b, c = s[k], s[k + 1], s[k + 2]
                if a != b and b != c and a != c:
                    tris.append((a, b, c) if k % 2 == 0 else (b, a, c))
        return tris

    def set_geometry(self, verts, strips, bones=None, fmt=2):
        """replace this mesh's vertices (format-2 structured array, or raw bytes of fmt) and strips ([(winding bit,
        [indices])] or plain index lists, winding 1 assumed); bones: the mesh's bone list (<= 4, the game draws
        <= 3-bone segments with the proven VU1 programs). Counts and pointers are recomputed at write time."""
        raw = verts.tobytes() if hasattr(verts, 'tobytes') else bytes(verts)
        stride = STRIDE[fmt]
        assert len(raw) % stride == 0
        nv = len(raw) // stride
        assert nv <= IMASK + 1, 'indices are 14-bit'
        d = self.blob.data
        struct.pack_into('<i', d, 8, fmt)
        struct.pack_into('<i', d, 0x10, nv)
        if bones is not None:
            assert 1 <= len(bones) <= 4
            struct.pack_into('<i', d, 0x14, len(bones))
            for k in range(4):
                struct.pack_into('<i', d, 0x18 + 4 * k, bones[k] if k < len(bones) else -1)
        self.vblob.data = bytearray(pad4(raw))
        idx, ntri = [], 0
        for s in strips:
            wnd, s = (s if isinstance(s, tuple) else (1, s))
            assert len(s) >= 3 and all(0 <= x < nv for x in s)
            idx += [s[0] | STRIP | (WIND if wnd else 0)] + list(s[1:])
            ntri += len(s) - 2
        struct.pack_into('<i', d, 0xc, ntri)
        c = self.index_chunk()
        struct.pack_into('<ii', c.data, 8, len(strips), len(idx))
        c.ref(0x10).data = bytearray(pad4(struct.pack('<%dH' % len(idx), *idx)))


class Group:
    def __init__(self, model, blob):
        self.model, self.blob = model, blob

    def span(self):
        """the bone and mesh chunks after this group header in the main list. (+0x10 points to the first bone; +0x14
        is first bone + bone count * 0x4c, the first mesh only when no bone has a child list: 5929's spring bones)"""
        i, out = self.model.top.index(self.blob), []
        for b in self.model.top[i + 1:]:
            if b.type not in (10, 11):
                break
            out.append(b)
        return out

    def bones(self):
        out = [Bone(b) for b in self.span() if b.type == 10]
        assert len(out) == i32(self.blob.data, 8) and (not out or out[0].blob is self.blob.ref(0x10))
        return out

    def meshes(self):
        out = [Mesh(self.model, b) for b in self.span() if b.type == 11]
        assert len(out) == i32(self.blob.data, 0xc)
        return out

    def origin(self):
        """the origin of the vertices' s16 position field (median of field - world); the loader ignores the field"""
        import numpy as np
        d = [self.model.world(m, v)[0] - v['pos'] for m in self.meshes() for v in [m.vertices()]]
        return np.median(np.concatenate(d), 0) if d else np.zeros(3)

    def set_meshes(self, specs):
        """replace this group's meshes with new chunks built from scratch; specs: [(verts, strips, bones)] as for
        Mesh.set_geometry (format 2). Other groups, bones, dummies and spheres keep their bytes."""
        mdl, old = self.model, self.meshes()
        first = old[0].blob if old else None
        repoint = first is not None and self.blob.ref(0x14) is first
        pos = mdl.top.index(first) if old else mdl.top.index(self.bones()[-1].blob) + 1
        drop = set()
        for m in old:
            drop |= set(id(b) for b in mdl.run(m.blob))
        bpos = min(i for i, b in enumerate(mdl.blobs) if id(b) in drop) if old else \
            max(i for i, b in enumerate(mdl.blobs) if b is mdl.run(self.bones()[-1].blob)[-1]) + 1
        mdl.blobs = [b for b in mdl.blobs if id(b) not in drop]
        mdl.top = [b for b in mdl.top if id(b) not in drop]
        new_top, new_blobs = [], []
        for verts, strips, bones in specs:
            mc, vb, ic, ib = (Blob(b'\0' * MESH_HEAD), Blob(b''), Blob(b'\0' * IDX_HEAD), Blob(b''))
            struct.pack_into('<ii', mc.data, 4, 11, 2)
            struct.pack_into('<i', ic.data, 4, 16)
            mc.set_ref(0x28, self.blob)
            mc.set_ref(0x2c, vb)
            mc.set_ref(0x30, ic)
            ic.set_ref(0x10, ib)
            Mesh(mdl, mc).set_geometry(verts, strips, bones)
            new_top.append(mc)
            new_blobs += [mc, vb, ic, ib]
        mdl.top[pos:pos] = new_top
        mdl.blobs[bpos:bpos] = new_blobs
        mdl.runs = None
        struct.pack_into('<i', self.blob.data, 0xc, len(specs))
        if repoint or not old:                       # packed bones: +0x14 = whatever follows them
            nxt = mdl.top[pos] if pos < len(mdl.top) else None
            self.blob.set_ref(0x14, nxt)


# ---------------------------------------------------------------------------------------------------------------------

class Model:
    def __init__(self):
        self.blobs, self.top, self.mats, self.runs = [], [], [], None

    @classmethod
    def from_bytes(cls, b):
        b = bytes(b)
        assert u32(b, 0) == MAGIC, 'not a PME2 file'
        assert f32(b, 4) >= 3.11 - 1e-6, 'version < 3.11 (rejected by the loader)'
        fields = {}                                    # file offset of a pointer field -> target offset
        starts, tops, mats, seen = set(), [], [], set()

        def field(o):
            v = u32(b, o)
            if v:
                assert v % 4 == 0 and HEADER <= v < len(b), 'pointer %x at %x' % (v, o)
                fields[o] = v
            return v

        def chunk(o):
            assert o not in seen, 'chunk %x reached twice' % o
            seen.add(o)
            starts.add(o)
            t = u32(b, o + 4)
            assert t < 32 and t not in FAIL_TYPES, 'chunk %x: type %d fails the loader' % (o, t)
            field(o)
            if t == 22:
                sub = field(o + 0x3c)
                if u32(b, o + 8) >= 3 and sub:
                    for k in range(12):
                        field(sub + 0x10 + 4 * k)
            elif t == 13:
                s = field(o + 0x30)
                while s:
                    field(s)
                    s = field(s + 0x30)
            elif t == 21:
                if u32(b, o + 0x5c) != 0xcccccccc and field(o + 0x5c):
                    walk(u32(b, o + 0x5c))
            elif t == 23:
                field(o + 0x30)
                if field(o + 0x34):
                    walk(u32(b, o + 0x34))
                s = u32(b, o + 0x30)
                while s:
                    field(s)
                    field(s + 0x30)
                    if field(s + 0x34):
                        walk(u32(b, s + 0x34))
                    s = u32(b, s + 0x30)
            for fo, is_list in PTRS.get(t, []):
                if field(o + fo) and is_list:
                    walk(u32(b, o + fo))

        def walk(o, out=None):
            while o:
                chunk(o)
                if out is not None:
                    out.append(o)
                o = u32(b, o)

        for o in (0x18, 0x20, 0x28):
            field(o)
        walk(u32(b, 0x28), mats)
        walk(u32(b, 0x18), tops)
        if u32(b, 0x20) not in seen and u32(b, 0x20):
            walk(u32(b, 0x20))
        import bisect
        heads = sorted(starts)
        inner = {}                                     # targets inside a chunk's fixed header -> (chunk, delta)
        for v in set(fields.values()):
            if v in starts:
                continue
            i = bisect.bisect_right(heads, v) - 1
            if i >= 0 and v < heads[i] + HEAD_SIZE.get(u32(b, heads[i] + 4), 8):
                inner[v] = (heads[i], v - heads[i])
        cuts = sorted({0, HEADER} | starts | (set(fields.values()) - set(inner)) | {len(b)})
        m = cls()
        at = {}
        for lo, hi in zip(cuts, cuts[1:]):
            blob = Blob(b[lo:hi], lo)
            at[lo] = blob
            m.blobs.append(blob)
        for fo, v in fields.items():
            lo = cuts[bisect.bisect_right(cuts, fo) - 1]
            tgt, delta = inner.get(v, (v, 0))
            at[lo].relocs[fo - lo] = (at[tgt], delta)
        m.top = [at[o] for o in tops]
        m.mats = [at[o] for o in mats]
        m.size = len(b)
        return m

    # layout ----------------------------------------------------------------------------------------------------------
    def header(self):
        return self.blobs[0]

    def run(self, top_blob):
        """the blobs from a top-level chunk up to the next one, in file order (its payload)"""
        if self.runs is None:
            tops, self.runs, cur = set(id(t) for t in self.top), {}, None
            for b in self.blobs:
                if id(b) in tops:
                    cur = id(b)
                    self.runs[cur] = []
                if cur is not None:
                    self.runs[cur].append(b)
        return self.runs[id(top_blob)]

    def to_bytes(self):
        h = self.header()
        h.set_ref(0x18, self.top[0] if self.top else None)
        for a, nxt in zip(self.top, self.top[1:] + [None]):     # the main list follows self.top
            a.set_ref(0, nxt)
        where, o = {}, 0
        for blob in self.blobs:
            assert len(blob.data) % 4 == 0
            where[id(blob)] = o
            o += len(blob.data)
        out = bytearray()
        for blob in self.blobs:
            d = bytearray(blob.data)
            for off, (tgt, delta) in blob.relocs.items():
                struct.pack_into('<I', d, off, where[id(tgt)] + delta)
            out += d
        return bytes(out)

    # content ---------------------------------------------------------------------------------------------------------
    def chunks(self, t):
        return [b for b in self.top if b.type == t]

    @property
    def groups(self):
        return [Group(self, b) for b in self.chunks(5)]

    def skeleton(self):
        return self.groups[0].bones()

    def meshes(self):
        return [Mesh(self, b) for b in self.chunks(11)]

    def world(self, mesh, v=None):
        """bind-pose world positions of a mesh's vertices as the game skins them, and the largest disagreement
        between the slots' own offsets. The loader takes p = pivot + offset of the first used slot (fn_24E7B8); the
        VU1 program blends sum w_i (t_i + R_i (p - pivot_i)) with the skinning matrices of UpdateBoneMatrices (no
        bind rotation removed), so at the bind pose (R_i = bone +0x38, t_i = pivot_i) a one-bone vertex lands at
        pivot + R * offset: the offsets are in the rotated bone frame (Reptile's right arm, rz = -0.034)."""
        import numpy as np
        v = mesh.vertices() if v is None else v
        sk = self.skeleton()
        piv = [np.asarray(bn.pos) for bn in sk]
        rot = [euler_matrix(bn.rot) for bn in sk]
        pos = np.zeros((len(v), 3))
        spread = 0.0
        for k, x in enumerate(v):
            slots = [(int(x['bone'][j]), x['w'][j] / 4096.0, x['off'][j]) for j in range(4) if x['bone'][j] != 255]
            p = piv[slots[0][0]] + slots[0][2]
            tw = sum(w for _, w, _ in slots) or 1.0
            pos[k] = sum(w * (piv[b] + rot[b] @ (p - piv[b])) for b, w, _ in slots) / tw
            own = [piv[b] + rot[b] @ o for b, _, o in slots]
            spread = max(spread, float(np.abs(np.array(own) - own[0]).max()))
        return pos, spread

    def materials(self):
        out = []
        for c in self.mats:
            d = c.data
            sub = c.ref(0x3c)
            passes = [k for k in range(12) if sub is not None and sub.ref(0x10 + 4 * k) is not None]
            out.append({'index': i32(d, 0xc), 'texture': i32(d, 0x10), 'version': i32(d, 8),
                        'name': bytes(d[0x40:0x80]).split(b'\0')[0].decode('latin1'), 'pass_slots': passes})
        return out


# ---------------------------------------------------------------------------------------------------------------------
# commands

def load(spec, iso=None):
    if os.path.exists(spec):
        return open(spec, 'rb').read()
    from wad import Wad
    return Wad(iso).get(int(spec))


def dump(b, out=print, offsets=True):
    m = Model.from_bytes(b)
    h = m.header().data
    at = (lambda blob: ' @%06x' % blob.src if offsets and blob.src is not None else '')
    out('PME2 %d bytes, version %.2f, flags %#x, +0x10 %d, texture pages %d, +0x1c %#x, +0x24 %d, +0x2c %g, %d blocks'
        % (len(b), f32(h, 4), u32(h, 8), u32(h, 0x10), u32(h, 0x14), u32(h, 0x1c), u32(h, 0x24), f32(h, 0x2c),
           len(m.blobs)))
    tree = {}
    for t in m.top:
        tree[t.type] = tree.get(t.type, 0) + 1
    out('main list: %d chunks: %s' % (len(m.top), ', '.join('%d %s x%d' % (t, NAMES.get(t, '?'), n)
                                                            for t, n in tree.items())))
    kids = {}
    for t in m.top:
        for fo, is_list in PTRS.get(t.type, []):
            c = t.ref(fo) if is_list else None
            while c is not None:
                kids[(t.type, c.type)] = kids.get((t.type, c.type), 0) + 1
                c = c.ref(0)
    out('child lists: %s' % ', '.join('%d under %d x%d' % (c, p, n) for (p, c), n in sorted(kids.items())))
    out('\nmaterials (per-vertex material index -> texture page of the costume WAD):')
    for k, mt in enumerate(m.materials()):
        out('  %d%s %-16s texture %2d  version %d  pass slots %s' % (mt['index'], at(m.mats[k]), mt['name'],
                                                                      mt['texture'], mt['version'], mt['pass_slots']))
    dms = m.chunks(3)
    if dms:
        out('\ndummies (type 3, not drawn as meshes):')
    for c in dms:
        d = c.data
        out('  %-12s%s fmt %d verts %d tris %d  pos %s rot %s' % (
            bytes(d[0x50:0x70]).split(b'\0')[0].decode('latin1'), at(c), i32(d, 8), i32(d, 0x10), i32(d, 0xc),
            ['%.1f' % x for x in f32(d, 0x18, 3)], ['%.3f' % x for x in f32(d, 0x24, 3)]))
    import numpy as np
    sk = m.skeleton() if m.groups else []
    out('\ngroups (each skinned object of the source scene with its own copy of the skeleton):')
    for g, grp in enumerate(m.groups):
        ms = grp.meshes()
        same = all(bytes(a.blob.data[4:0x44]) == bytes(z.blob.data[4:0x44]) for a, z in zip(grp.bones(), sk))
        used = sorted({b for x in ms for b in x.bones})
        mats = sorted({int(t) for x in ms for t in set(x.vertices()['mat'])}) if ms and ms[0].fmt == 2 else []
        out('  %d%s bones %d (%s group 0) meshes %3d verts %5d tris %5d  materials %s  bones used %s' % (
            g, at(grp.blob), i32(grp.blob.data, 8), 'same as' if same else 'DIFFERENT from', len(ms),
            sum(x.nv for x in ms), sum(x.ntri for x in ms), mats,
            ','.join(sk[b].name if b < len(sk) else str(b) for b in used) if len(used) < 12 else
            '%d bones' % len(used)))
    out('\nbones (group 0; position = bind world position, y down, the character faces -z):')
    for k, bn in enumerate(sk):
        out('  %2d %-14s parent %2d  pos %8.2f %8.2f %8.2f  rot %7.4f %7.4f %7.4f' % (
            k, bn.name, bn.parent, *bn.pos, *bn.rot))
    out('\nmeshes (g = group; tex = material -> page):')
    mt = {x['index']: x for x in m.materials()}
    for g, grp in enumerate(m.groups):
        for k, x in enumerate(grp.meshes()):
            c = x.index_chunk()
            mats = sorted({int(t) for t in x.vertices()['mat']}) if x.fmt == 2 else []
            out('  g%d m%-3d%s fmt %d verts %4d tris %4d strips %3d idx %4d bones %-30s mat %s tex %s%s' % (
                g, k, at(x.blob), x.fmt, x.nv, x.ntri, i32(c.data, 8) if c else 0, i32(c.data, 0xc) if c else 0,
                ','.join(sk[b].name for b in x.bones), mats,
                [mt[t]['texture'] if t in mt else '?' for t in mats],
                '' if len(x.children()) == 1 else ' children %s' % [ch.type for ch in x.children()]))
    sph = m.chunks(12)
    if sph:
        out('\nspheres (type 12, bone-attached; with one type-15 child each):')
    for k, c in enumerate(sph):
        d = c.data
        ch = c.ref(0x40)
        out('  %2d%s bone %-12s radius %5.1f offset %s  +0x1c %3d +0x20 %d  t15 %s' % (
            k, at(c), sk[i32(d, 0xc)].name if 0 <= i32(d, 0xc) < len(sk) else i32(d, 0xc), f32(d, 8),
            ['%.1f' % x for x in f32(d, 0x10, 3)], i32(d, 0x1c), i32(d, 0x20),
            '%d %s %d %d' % (i32(ch.data, 8), bytes(ch.data[0xc:0x10]).hex(), i32(ch.data, 0x10),
                             i32(ch.data, 0x14)) if ch is not None else '-'))
    other = [t for t in m.top if t.type not in (3, 5, 10, 11, 12)]
    if other:
        out('\nother chunks: %s' % ', '.join('%d%s' % (t.type, at(t)) for t in other))
    return m


def content(m):
    """the pointer graph from the header, depth first: each reached block's bytes with its pointer fields zeroed"""
    out, seen, stack = [], set(), [m.header()]
    while stack:
        blob = stack.pop()
        if id(blob) in seen:
            continue
        seen.add(id(blob))
        d = bytearray(blob.data)
        for off in blob.relocs:
            d[off:off + 4] = b'\0\0\0\0'
        out.append(([(o, blob.relocs[o][1]) for o in sorted(blob.relocs)], bytes(d)))
        stack += [blob.relocs[o][0] for o in sorted(blob.relocs, reverse=True)]
    return out


def check_layout(b, m):
    """every word that holds an offset to a block start but is not relocated (a pointer this parser missed)"""
    starts = {blob.src for blob in m.blobs if blob.src and blob.src >= HEADER}
    known = {blob.src + o for blob in m.blobs for o in blob.relocs}
    arrays = [blob.relocs[f][0] for blob in m.blobs for t, f in ((11, 0x2c), (3, 0x40), (16, 0x10))
              if len(blob.data) >= 8 and blob.type == t and f in blob.relocs]      # vertex and index arrays
    skip = {o for a in arrays for o in range(a.src, a.src + len(a.data), 4)}
    skip |= {t.src + o for t in m.top if t.type == 10 for o in range(0xc, 0x2c, 4)}     # bone names (garbage tails)
    return [o for o in range(0, len(b) - 3, 4) if o not in known and o not in skip and u32(b, o) in starts and
            u32(b, o) > 0x100]                                                         # 0x3c etc. are small ints


def roundtrip(b, label=''):
    m = Model.from_bytes(b)
    w = m.to_bytes()
    r1 = w == b
    # 1. every mesh re-encoded from its parsed fields (vertex records, strips with their winding bits, bones)
    m2 = Model.from_bytes(b)
    for x in m2.meshes():
        if x.fmt == 2 and x.index_chunk() is not None and len(x.children()) == 1:
            x.set_geometry(x.vertices(), [tuple(s) for s in x.strips()], x.bones)
    r2 = m2.to_bytes() == b
    # 2. every group's meshes rebuilt from new chunks (headers written from fields, not copied)
    m3 = Model.from_bytes(b)
    rebuilt = 0
    for grp in m3.groups:
        ms = grp.meshes()
        if all(x.fmt == 2 and len(x.children()) == 1 for x in ms):
            grp.set_meshes([(x.vertices(), [tuple(s) for s in x.strips()], x.bones) for x in ms])
            rebuilt += 1
    r3 = m3.to_bytes() == b
    # 3. shifted layout: 64 bytes inserted after the header move every block; the re-parsed file must hold the same
    # pointer graph and bytes, and dump the same (offsets left out)
    m4 = Model.from_bytes(b)
    m4.blobs.insert(1, Blob(b'\xee' * 64))
    s = m4.to_bytes()
    a, z = [], []
    dump(b, a.append, offsets=False)
    dump(s, z.append, offsets=False)
    r4 = a[1:] == z[1:] and len(s) == len(b) + 64 and content(m) == content(Model.from_bytes(s)) and s[0x3c:0x7c] == \
        b'\xee' * 64
    sus = check_layout(b, m)
    ok = r1 and r2 and r3 and r4 and not sus
    print('%-8s %7d bytes  write %s  meshes re-encoded %s  %d groups rebuilt %s  shifted +64 %s  stray offsets %d' % (
        label, len(b), 'identical' if r1 else 'DIFF', 'identical' if r2 else 'DIFF', rebuilt,
        'identical' if r3 else 'DIFF', 'same content' if r4 else 'DIFF', len(sus)))
    return ok


def bind_export(b, outdir, name, fid=None):
    import numpy as np
    m = Model.from_bytes(b)
    sk = m.skeleton()
    os.makedirs(outdir, exist_ok=True)
    allp = []
    meshes, spread = [], 0.0
    mt = m.materials()
    for g, grp in enumerate(m.groups):
        for k, x in enumerate(grp.meshes()):
            v = x.vertices()
            p, sp = m.world(x, v)
            spread = max(spread, sp)
            allp.append(p)
            sb = x.bones
            for j in range(4):
                used = v['bone'][:, j] != 255
                assert (j < len(sb) and (v['bone'][used, j] == sb[j]).all()) or not used.any()
            meshes.append({
                'group': g, 'mesh': k, 'bones': sb, 'material': int(v['mat'][0]),
                'positions': np.round(p, 3).tolist(),
                'normals': np.round(v['nrm'] / 4096.0, 5).tolist(),
                'uv': np.round(v['uv'] / 4096.0, 6).tolist(),
                'bone_indices': np.where(v['bone'] == 255, -1, v['bone'].astype(int)).tolist(),
                'weights': np.round(v['w'] / 4096.0, 6).tolist(),
                'rgba': v['rgba'].astype(int).tolist(),
                'strips': [s for _, s in x.strips()],
                'triangles': [list(t) for t in x.triangles()]})
    allp = np.concatenate(allp)
    lo, hi = allp.min(0), allp.max(0)
    units = {'axes': 'game units; x = the character\'s left, y = down, z = back (he faces -z); toes near y = 0, '
                     'soles at the bottom_y',
             'height': round(float(hi[1] - lo[1]), 2), 'top_y': round(float(lo[1]), 2),
             'bottom_y': round(float(hi[1]), 2), 'bbox_min': np.round(lo, 2).tolist(),
             'bbox_max': np.round(hi, 2).tolist()}
    skel = {'source': 'MK:SM PME2 file %s' % fid, 'units': units,
            'note': 'world bind pose from the bone chunks (+0x2c position, +0x38 rotation, radians; applied x, y, z); '
                    'vertex offsets are in the rotated bone frame',
            'bones': [{'index': k, 'name': bn.name, 'parent': bn.parent,
                       'position': [round(x, 4) for x in bn.pos], 'rotation_euler': [round(x, 6) for x in bn.rot],
                       'rotation_matrix': np.round(euler_matrix(bn.rot), 6).tolist()} for k, bn in enumerate(sk)]}
    mesh = {'source': skel['source'], 'units': units,
            'materials': [{'index': x['index'], 'name': x['name'], 'texture_page': x['texture']} for x in mt],
            'texture_wad': (fid - 1) if isinstance(fid, int) else None,
            'uv': 'u, v in texture units (page 128x128, texel = uv * 128); affine, CLAMP',
            'group_origins': [np.round(g.origin(), 2).tolist() for g in m.groups],
            'slot_spread': round(spread, 3), 'meshes': meshes}
    json.dump(skel, open(os.path.join(outdir, name + '_skeleton.json'), 'w'), indent=1)
    json.dump(mesh, open(os.path.join(outdir, name + '_mesh.json'), 'w'))
    print('%s: %d bones, %d meshes, %d verts, %d tris; height %.1f units (y %.1f .. %.1f), x %.1f .. %.1f, '
          'z %.1f .. %.1f; slot spread %.2f' % (outdir, len(sk), len(meshes), len(allp),
                                                sum(len(x['triangles']) for x in meshes), units['height'], lo[1], hi[1],
                                                lo[0], hi[0], lo[2], hi[2], spread))
    return m


# ---------------------------------------------------------------------------------------------------------------------
# software preview

def raster(img, zbuf, P, UV, SH, tri_tex, texs, alpha_test=4):
    """z-buffered textured triangles: P (N,3) screen x, y, depth (smaller = nearer); UV (N,2) texels; SH (N,) shade"""
    import numpy as np
    H, W = zbuf.shape
    for (a, b, c), t in tri_tex:
        pa, pb, pc = P[a], P[b], P[c]
        x0, x1 = int(max(min(pa[0], pb[0], pc[0]), 0)), int(min(max(pa[0], pb[0], pc[0]) + 1, W - 1))
        y0, y1 = int(max(min(pa[1], pb[1], pc[1]), 0)), int(min(max(pa[1], pb[1], pc[1]) + 1, H - 1))
        if x1 < x0 or y1 < y0:
            continue
        den = (pb[1] - pc[1]) * (pa[0] - pc[0]) + (pc[0] - pb[0]) * (pa[1] - pc[1])
        if abs(den) < 1e-9:
            continue
        ys, xs = np.mgrid[y0:y1 + 1, x0:x1 + 1]
        xs, ys = xs + 0.5, ys + 0.5
        l0 = ((pb[1] - pc[1]) * (xs - pc[0]) + (pc[0] - pb[0]) * (ys - pc[1])) / den
        l1 = ((pc[1] - pa[1]) * (xs - pc[0]) + (pa[0] - pc[0]) * (ys - pc[1])) / den
        l2 = 1 - l0 - l1
        inside = (l0 >= 0) & (l1 >= 0) & (l2 >= 0)
        if not inside.any():
            continue
        z = l0 * pa[2] + l1 * pb[2] + l2 * pc[2]
        yy, xx = ys.astype(int), xs.astype(int)
        sel = inside & (z < zbuf[yy, xx])
        if not sel.any():
            continue
        sh = l0 * SH[a] + l1 * SH[b] + l2 * SH[c]
        if t is None:
            col = np.full(sel.shape + (3,), 150.0)
        else:
            tex = texs[t]
            u = l0 * UV[a, 0] + l1 * UV[b, 0] + l2 * UV[c, 0]
            v = l0 * UV[a, 1] + l1 * UV[b, 1] + l2 * UV[c, 1]
            th, tw = tex.shape[:2]
            tu = np.clip(u.astype(int), 0, tw - 1)
            tv = np.clip(v.astype(int), 0, th - 1)
            texel = tex[tv, tu]
            sel &= texel[..., 3] >= alpha_test
            col = texel[..., :3].astype(float)
        zbuf[yy[sel], xx[sel]] = z[sel]
        img[yy[sel], xx[sel]] = np.clip(col[sel] * sh[sel][:, None], 0, 255)


def preview(b, outdir, name, texfid, iso=None):
    import numpy as np
    from PIL import Image, ImageDraw
    from chameleon import entries, p2n
    from wad import Wad
    m = Model.from_bytes(b)
    sk = m.skeleton()
    wad = Wad(iso)
    npages = len(entries(wad.get(texfid)))
    texs = {k: p2n(wad, texfid, k) for k in range(npages)}
    mt = {x['index']: x['texture'] for x in m.materials()}
    P, N, UV, tris = [], [], [], []
    for x in m.meshes():
        v = x.vertices()
        base = sum(len(p) for p in P)
        P.append(m.world(x, v)[0])
        N.append(v['nrm'] / 4096.0)
        UV.append(v['uv'] / 4096.0 * 128)
        page = mt.get(int(v['mat'][0]), -1)
        for t in x.triangles():
            tris.append(((base + t[0], base + t[1], base + t[2]), page if 0 <= page < npages else None))
    P, N, UV = np.concatenate(P), np.concatenate(N), np.concatenate(UV)
    lo, hi = P.min(0), P.max(0)
    ctr = (lo + hi) / 2
    S = 1024
    scale = 0.92 * S / (hi[1] - lo[1])
    light = np.array([-0.4, -0.6, -0.7])
    light /= np.linalg.norm(light)

    def view(yaw):
        c, s = np.cos(yaw), np.sin(yaw)
        R = np.array([[c, 0, s], [0, 1, 0], [-s, 0, c]])       # turn the model about the vertical axis
        Q = (P - ctr) @ R.T
        Nr = N @ R.T
        scr = np.stack([S / 2 + Q[:, 0] * scale, S / 2 + Q[:, 1] * scale, Q[:, 2]], 1)
        sh = 0.45 + 0.75 * np.abs(Nr @ light)
        img = np.full((S, S, 3), 40.0)
        zb = np.full((S, S), np.inf)
        raster(img, zb, scr, UV, sh, tris, texs)
        return img, scr, R

    front, fscr, fR = view(0.0)
    tq, _, _ = view(np.radians(-40))
    both = np.concatenate([front, tq], 1).astype(np.uint8)
    im = Image.fromarray(both)
    d = ImageDraw.Draw(im)
    d.text((10, 10), '%s bind pose, front' % name, fill=(255, 255, 255))
    d.text((S + 10, 10), '%s bind pose, 3/4' % name, fill=(255, 255, 255))
    os.makedirs(outdir, exist_ok=True)
    im.save(os.path.join(outdir, name + '_preview.png'))
    # skeleton over a dimmed front and a side view
    side, sscr, sR = view(np.radians(-90))
    panels = []
    for base_img, R in ((front, fR), (side, sR)):
        im2 = Image.fromarray((base_img * 0.45).astype(np.uint8))
        d = ImageDraw.Draw(im2)
        J = np.array([bn.pos for bn in sk])
        Q = (J - ctr) @ R.T
        js = np.stack([S / 2 + Q[:, 0] * scale, S / 2 + Q[:, 1] * scale], 1)
        for k, bn in enumerate(sk):
            if bn.parent >= 0:
                d.line([tuple(js[bn.parent]), tuple(js[k])], fill=(255, 210, 0), width=2)
        for k, bn in enumerate(sk):
            x, y = js[k]
            d.ellipse([x - 3, y - 3, x + 3, y + 3], fill=(255, 60, 60))
            d.text((x + 4, y - 5 + (k % 3) * 4), '%d %s' % (k, bn.name), fill=(170, 255, 170))
        panels.append(np.asarray(im2))
    Image.fromarray(np.concatenate(panels, 1)).save(os.path.join(outdir, name + '_skeleton.png'))
    print('%s: %s_preview.png, %s_skeleton.png (%d triangles, textures from file %d)' % (
        outdir, name, name, len(tris), texfid))


def main(argv):
    iso = None
    if argv[:1] == ['--iso']:
        iso, argv = argv[1], argv[2:]
    if not argv:
        print(__doc__)
        return 2
    cmd, args = argv[0], argv[1:]
    if cmd == 'dump':
        dump(load(args[0], iso))
    elif cmd == 'roundtrip':
        bad = 0
        for a in args:
            bad += not roundtrip(load(a, iso), a)
        return 1 if bad else 0
    elif cmd == 'bind':
        fid = int(args[0]) if args[0].isdigit() else None
        bind_export(load(args[0], iso), args[1], args[2] if len(args) > 2 else 'model', fid)
    elif cmd == 'preview':
        tex = None
        if '--tex' in args:
            i = args.index('--tex')
            tex = int(args[i + 1])
            args = args[:i] + args[i + 2:]
        fid = int(args[0]) if args[0].isdigit() else None
        preview(load(args[0], iso), args[1], args[2] if len(args) > 2 else 'model', tex or fid - 1, iso)
    else:
        print(__doc__)
        return 2
    return 0


if __name__ == '__main__':
    sys.exit(main(sys.argv[1:]))
