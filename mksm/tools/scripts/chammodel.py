#!/usr/bin/env python3
"""MK: Armageddon's Chameleon as an MK:SM model: step D3 of the Chameleon mod. Converts mkamesh.py's extraction of
MKA's COSTUME model (mka_chameleon.json) into a copy of Reptile's story alt costume (PME2 6852 + PWF 6851) with
pme2.py's writer. Everything written is disc-derived: keep it out of git.

Two variants:
  cham.pme2 / cham.pwf                  layered (MK:SM blends character meshes, measured on w39): every MKA material
                                        keeps its own layer. Body materials 2-4 keep their slot-4 pass (so the model
                                        loads as mode 2 and they draw first, opaque) with texel alpha --body-alpha
                                        (0x80 story, 8 Versus). The skin (material 1, page 0, alpha 0x1a = MKA's 0.2
                                        glass) and the quilted shell (MKA 'trans': new material 5 on new page 5, alpha =
                                        MKA alpha / 2, pushed >= 2.5 units out from the cloth: Z GREATER is strict) have
                                        no slot-4 pass (ptrs[4] = 0, pass count 1): the game blends them by CLUT alpha
                                        (0x80 = 1.0; <= 0x3c without a Z write).
  cham_opaque.pme2 / cham_opaque.pwf    opaque fallback: the shell is baked into the rainbow page (shade x hue palette),
                                        the skin is a dark desaturated colour, the eyes are cut out at low alpha.
Both keep Reptile's skeleton (all 5 copies), dummies, collision spheres, materials 0-4 and header; group 3 keeps
Reptile's tongue mesh.

Pages (6851 entries; page 1 = the shared glow sprite stays). All 128x128 T8, CLUT index 0 = (255,255,255,0) unused:
  0  material 1 'atama'   skin (flat; layered: MKA's skin colour, alpha 26 = MKA's 0.2 glass; opaque: dark gray)
  2  material 2 'color'   rainbow page: cols 0-111 the shell's quilt layout (opaque: baked), 112-117 the plain cloth
                          strip (MKA cham_grad, index by row), 118-127 the eyes (MKA eye_grad), see RAINBOW below
  3  material 3           MKA leather (CHAMELEON_002, 256x256 -> 128x128)
  4  material 4           MKA leg (CHAMELEON_003, 256x256 -> 128x128)
  5  material 5 'trans'   layered only: MKA trans (CHAMELEON_005, the quilted shell, 256x256 -> 128x128), alpha kept
Texel alpha on cham_opaque's materials is MK:SM's highlight mask (the base pass is ALPHA FIX 128 + ATST GEQUAL 4, the
highlight pass adds Cs*Ad): MKA's specular mask mapped to 4..64, Reptile's range. Alpha < 4 is cut out by ATST.

RAINBOW: the page 2 CLUT is 7 blocks of 32 hues (index 1 + 32*block + hue) plus fixed entries 225-255 (black/gray of
the shell's borders and emblems, not rotated). Hue h of every block shows gradient row (4h + 2 + phase) mod 128, so
rotating each block's 32 entries by one (in lockstep, logical order; the stored CLUT is CSM1-swizzled: swap index bits
3 and 4) = MKA's V scroll by 4 rows = 62.5 frames at 0.0005/frame; 32 steps = MKA's 2000-frame cycle. Rewriting the
CLUT every frame from the formula at a fractional phase gives MKA's smooth scroll. Blocks: 0 plain cloth, 1-4 shell
shades (opaque variant; k * cham_grad + add), 5 eye pastel, 6 eye saturated. The disc CLUT is phase 68 (green,
mkamesh's preview frame). cham_clut.json holds the block parameters and both gradients for the mod.

Geometry: MKA (metres, Y up, faces +Z) -> rotated 180 deg about X, scaled 917.46/1.9518 (Reptile's height), pelvis on
Reptile's pelvis. Every MKA bone then gets an affine (rotation + scale along the bone) taking its joint to the Reptile
joint it maps to and its bone vector onto the Reptile bone vector; blended with MKA's skin weights, that re-poses the
mesh into Reptile's bind pose. The feet are squashed vertically to put the soles on Reptile's. The hood ribbon's two
strands are straightened onto the hood flap chains (Reptile's flaps point straight back in the bind pose) and
reweighted by arc length to flap_start..flap_10 / flap_bstart..flap_b8 the way Reptile's flaps are weighted (50/50
at a joint); the apron keeps MKA's forward tilt and is reweighted by height to flap_dr_start..flap_dr6. Weights map
through bonemap.json, merge, are pruned to <= 3 bones per triangle, and triangles are binned into meshes of <= 3
bones (one material each), stripified (first triangle along the normals, winding bit 1).

Usage:
  chammodel.py build [OUT] [--body-alpha N]
                               bonemap.json, cham*.pme2/.pwf, cham_clut.json, checks, previews (default OUT =
                               remaster-data/chameleon/model). N = the layered body texel alpha: 0x80 (default, story
                               path) or 8 (Versus three-pass path)
  chammodel.py check [OUT]     re-parse and verify the written files
  chammodel.py preview [OUT]   cham_compare.png (pme2.raster, under MKA's preview.png), cham_preview.png,
                               cham_opaque_preview.png, cham_skeleton.png, cham_posed.png
"""
import json
import os
import struct
import sys

import numpy as np
from PIL import Image, ImageDraw

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import pme2  # noqa: E402
from pme2 import Model, make_vertices, euler_matrix  # noqa: E402

DATA = '/home/darkwarro/Documents/Twitter/PS2_REA/remaster-data/chameleon'
OUT = os.path.join(DATA, 'model')
MKA_JSON = os.path.join(OUT, 'mka_chameleon.json')
MKA_TEX = os.path.join(DATA, 'mka')
MODEL, TEXTURES = 6852, 6851
GLASS_ALPHA = 0x1a               # MKA's skin: lerp(screen, skin, 0.2) (mkamesh GLASS) -> PS2 alpha 0.2 * 128
BODY_ALPHA = 0x80                # layered body texel alpha: story path (a hook forces (Cs-Cd)*As+Cd): 0x80 = opaque;
                                 # the Versus three-pass path wants 8 (alpha only scales the additive gloss there)
DARK_SKIN = (58, 56, 52)         # opaque fallback: what MKA's see-through skin looks like in game (arena behind it)
HUES, BLOCKS, FIXED0 = 32, 7, 225
PHASE = 68                       # disc CLUT phase in gradient rows (green; mkamesh SCROLL_FRAME 1070 -> 68.5 rows)
QUILT_W, STRIP, EYE = 112, (112, 118), (118, 128)
SHELL_PUSH = 2.5                 # layered: shell vertices at least this far out from the cloth along the normal:
                                 # Z GREATER is strict, a coincident shell fails it (positions round to 1 unit)
MAX_STRIP, MAX_MESH_V, MAX_MESH_T = 30, 400, 450      # shipped fighters: strips <= 32, meshes <= 510 verts

# ---------------------------------------------------------------------------------------------------- bone map
# MKA HAnim tags (frames 2-70) -> role. +X is the character's left in both models (the 180 deg turn about X keeps x).
TAGS = {0x1000: 'pelvis', 0x1001: 'thigh+', 0x1002: 'thigh-', 0x1003: 'spine1', 0x1006: 'spine2', 0x1009: 'spine3',
        0x100c: 'clavicle+', 0x100e: 'clavicle-', 0x100d: 'neck', 0x1010: 'head',
        0x100f: 'upperarm+', 0x1011: 'upperarm-', 0x1012: 'upperarm_twist+', 0x1013: 'upperarm_twist-',
        0x1014: 'forearm+', 0x1015: 'forearm-', 0x1016: 'forearm_twist+', 0x1017: 'forearm_twist-',
        0x1018: 'hand+', 0x1019: 'hand-', 0x1004: 'calf+', 0x1005: 'calf-', 0x1007: 'foot+', 0x1008: 'foot-',
        0x100a: 'toe+', 0x100b: 'toe-'}
BODY = {'pelvis': 'pelvis', 'spine1': 'abdomen', 'spine2': 'chest', 'spine3': 'chest', 'neck': 'neck',
        'head': 'head', 'clavicle': 'clavicle', 'upperarm': 'shoulder', 'upperarm_twist': 'bicep',
        'forearm': 'forearm', 'forearm_twist': 'forearm', 'hand': 'hand', 'thigh': 'thigh', 'calf': 'calf',
        'foot': 'foot', 'toe': 'toe'}
REASON = {'pelvis': 'root, same joint', 'spine1': 'lowest spine joint (MKA 0.08 m above the pelvis, Reptile 55 u)',
          'spine2': 'mid spine (0.33 m); Reptile has one chest bone above the abdomen',
          'spine3': 'upper chest, parent of neck and clavicles like Reptile chest', 'neck': 'same joint',
          'head': 'same joint', 'clavicle': 'parent of the upper arm, child of the chest',
          'upperarm': 'shoulder joint (Reptile *_shoulder is the upper arm bone)',
          'upperarm_twist': 'mid upper arm twist; Reptile *_bicep sits at the same place',
          'forearm': 'elbow joint', 'forearm_twist': 'forearm twist; Reptile has none: merged into *_forearm',
          'hand': 'wrist joint', 'thigh': 'hip joint', 'calf': 'knee joint', 'foot': 'ankle joint',
          'toe': 'ball of the foot'}
CHAINS = {'ribbonA': [0x2001, 0x2002, 0x2003, 0x2004, 0x2005, 0x2006],
          'ribbonB': [0x2007, 0x2008, 0x2009, 0x200a, 0x200b],
          'apron+': [0x200c, 0x200d, 0x200e, 0x200f, 0x2010], 'apron-': [0x2011, 0x2012, 0x2013, 0x2014, 0x2015]}
FLAPS = {'ribbonA': ['flap_start'] + ['flap_%02d' % k for k in range(1, 11)],
         'ribbonB': ['flap_bstart'] + ['flap_b%d' % k for k in range(1, 9)],
         'apron': ['flap_dr_start'] + ['flap_dr%d' % k for k in range(1, 7)]}
FLAP_END = {'ribbonA': 'flap_end', 'ribbonB': 'flap_b_end', 'apron': 'flap_dr_end'}
CLOTH_GROUP = {'ribbonA': 0, 'ribbonB': 1, 'apron': 2}


def load_mka(path=MKA_JSON):
    d = json.load(open(path))
    v = d['vertices']
    fr = d['skeleton']['frames']
    m = {'pos': np.array(v['position']), 'nrm': np.array(v['normal']), 'uv': np.array(v['uv']),
         'frames': v['frames'], 'weights': v['weights'], 'materials': d['materials'],
         'joint': np.array([np.array(f['world'])[3, :3] for f in fr]), 'parent': [f['parent'] for f in fr],
         'tag': [None if f['id'] is None else int(f['id'], 16) for f in fr]}
    m['nrm'] /= np.linalg.norm(m['nrm'], axis=1, keepdims=True)
    return m


def roles(mka):
    """frame -> role name ('thigh+', 'finger+0', 'ribbonA:2', ...)"""
    out = {}
    for f, t in enumerate(mka['tag']):
        if t in TAGS:
            out[f] = TAGS[t]
        for name, ids in CHAINS.items():
            if t in ids:
                out[f] = '%s:%d' % (name, ids.index(t))
    # fingers: the hand's children; the thumb is the one with a 3-joint chain, the rest ordered front (+Z) to back
    for side in '+-':
        hand = next(f for f, r in out.items() if r == 'hand' + side)
        kids = [f for f in range(len(mka['tag'])) if mka['parent'][f] == hand]
        chains = []
        for k in kids:
            c = [k]
            while True:
                n = [f for f in range(len(mka['tag'])) if mka['parent'][f] == c[-1]]
                if not n:
                    break
                c.append(n[0])
            chains.append(c)
        thumb = max(chains, key=len)
        fingers = sorted([c for c in chains if c is not thumb], key=lambda c: -mka['joint'][c[0]][2])
        for j, f in enumerate(thumb):
            out[f] = 'thumb%s%d' % (side, j)
        for i, c in enumerate(fingers):
            for j, f in enumerate(c):
                out[f] = 'finger%s%d_%d' % (side, i, j)
    return out


def body_target(role, rep):
    """role -> Reptile bone name for weights (body roles only)"""
    base, side = role.rstrip('+-'), role[-1] if role[-1] in '+-' else ''
    lr = {'+': 'l_', '-': 'r_', '': ''}[side]
    if role.startswith('thumb'):
        j = int(role[-1])
        return lr_of(role) + ('thumb00' if j == 0 else 'thumb01')
    if role.startswith('finger'):
        i, j = int(role[7]), int(role[9])
        return lr_of(role) + ('finger' if i < 2 else 'pinky') + ('00' if j == 0 else '01')
    return lr + BODY[base]


def lr_of(role):
    return 'l_' if '+' in role else 'r_'


# ---------------------------------------------------------------------------------------------------- re-pose
def rot_between(a, b):
    a, b = a / np.linalg.norm(a), b / np.linalg.norm(b)
    v, c = np.cross(a, b), float(a @ b)
    if np.linalg.norm(v) < 1e-12:
        return np.eye(3) if c > 0 else -np.eye(3)
    k = np.array([[0, -v[2], v[1]], [v[2], 0, -v[0]], [-v[1], v[0], 0]])
    return np.eye(3) + k + k @ k / (1 + c)


def bone_linear(a, b):
    """rotation taking a's direction to b's, scaling along a by |b|/|a| (perpendicular unchanged): L a = b"""
    ah = a / np.linalg.norm(a)
    return rot_between(a, b) @ (np.eye(3) + (np.linalg.norm(b) / np.linalg.norm(a) - 1) * np.outer(ah, ah))


class Repose:
    """the MKA -> Reptile bind pose transform: G (global), then one affine per MKA frame"""

    def __init__(self, mka, rep):
        self.mka, self.rep = mka, rep
        self.role = roles(mka)
        self.by_role = {r: f for f, r in self.role.items()}
        self.rb = {b.name: k for k, b in enumerate(rep.skeleton())}
        self.rpos = np.array([b.pos for b in rep.skeleton()])
        P = mka['pos']
        self.scale = 917.46 / (P[:, 1].max() - P[:, 1].min())        # Reptile's bind height / MKA's
        self.t = self.rpos[self.rb['pelvis']] - self.scale * self.flip(mka['joint'][self.by_role['pelvis']])
        self.J = self.G(mka['joint'])
        self.affine = {}                                              # frame -> (T at joint, L, J)
        self.notes = {}
        self.solve()

    @staticmethod
    def flip(p):
        return np.asarray(p, float) * [1, -1, -1]

    def G(self, p):
        return self.scale * self.flip(p) + self.t

    def R(self, name):
        return self.rpos[self.rb[name]]

    def set(self, f, T, L):
        self.affine[f] = (np.asarray(T, float), np.asarray(L, float), self.J[f])

    def apply(self, f, x):
        T, L, J = self.affine[f]
        return T + (np.asarray(x) - J) @ L.T

    def solve(self):
        f, J, R = self.by_role, self.J, self.R
        # spine: pelvis, neck and head on Reptile's; the spine joints in between move by the displacement interpolated
        # on height; each spine bone is scaled along its own segment
        self.set(f['pelvis'], R('pelvis'), np.eye(3))
        dp, dn = R('pelvis') - J[f['pelvis']], R('neck') - J[f['neck']]
        spine = ['pelvis', 'spine1', 'spine2', 'spine3', 'neck', 'head']
        T = {'pelvis': R('pelvis'), 'neck': R('neck'), 'head': R('head')}
        for s in ('spine1', 'spine2', 'spine3'):
            w = (J[f[s]][1] - J[f['pelvis']][1]) / (J[f['neck']][1] - J[f['pelvis']][1])
            T[s] = J[f[s]] + dp + w * (dn - dp)
        for a, b in zip(spine[1:-1], spine[2:]):
            self.set(f[a], T[a], bone_linear(J[f[b]] - J[f[a]], T[b] - T[a]))
        self.set(f['head'], T['head'], np.eye(3))
        for side, lr in (('+', 'l_'), ('-', 'r_')):
            # arms: shoulder, elbow, wrist on Reptile's; twist bones ride with their parent; clavicle translates with
            # the shoulder; hand and fingers are rigid with the wrist
            sh, el, wr = R(lr + 'shoulder'), R(lr + 'forearm'), R(lr + 'hand')
            self.set(f['upperarm' + side], sh, bone_linear(J[f['forearm' + side]] - J[f['upperarm' + side]], el - sh))
            self.affine[f['upperarm_twist' + side]] = self.affine[f['upperarm' + side]]
            self.set(f['forearm' + side], el, bone_linear(J[f['hand' + side]] - J[f['forearm' + side]], wr - el))
            self.affine[f['forearm_twist' + side]] = self.affine[f['forearm' + side]]
            self.set(f['clavicle' + side], J[f['clavicle' + side]] + sh - J[f['upperarm' + side]], np.eye(3))
            self.set(f['hand' + side], wr, np.eye(3))
            for fr, r in self.role.items():
                if r.startswith(('finger' + side, 'thumb' + side)):
                    self.affine[fr] = self.affine[f['hand' + side]]
            # legs: hip, knee, ankle on Reptile's. The foot is not turned (its sole stays flat on the ground: turning
            # it onto Reptile's steeper ankle -> toe lifts the toe and shows the sole from the front); it is scaled
            # along z to Reptile's ankle -> toe length and squashed vertically about the ankle so the sole lands on
            # Reptile's (MKA's ankle is 77 u above its sole, Reptile's 57)
            hip, kn, an, toe = R(lr + 'thigh'), R(lr + 'calf'), R(lr + 'foot'), R(lr + 'toe')
            self.set(f['thigh' + side], hip, bone_linear(J[f['calf' + side]] - J[f['thigh' + side]], kn - hip))
            self.set(f['calf' + side], kn, bone_linear(J[f['foot' + side]] - J[f['calf' + side]], an - kn))
            Lf = np.diag([1.0, 1.0, (toe - an)[2] / (J[f['toe' + side]] - J[f['foot' + side]])[2]])
            self.notes['foot_length' + side] = round(float(Lf[2, 2]), 3)
            self.set(f['foot' + side], an, Lf)
            feet = [k for k, vs in enumerate(self.mka['frames']) if f['foot' + side] in vs or f['toe' + side] in vs]
            sole = max((self.apply(f['foot' + side], self.G(self.mka['pos'][k])))[1] for k in feet)
            target = float(self.rep_bottom)
            kv = (target - an[1]) / (sole - an[1])
            S = np.diag([1.0, kv, 1.0])
            self.set(f['foot' + side], an, S @ Lf)
            self.affine[f['toe' + side]] = self.affine[f['foot' + side]]
            self.notes['foot_squash' + side] = round(float(kv), 3)
        # apron: rides with the pelvis (keeps MKA's forward tilt)
        for fr, r in self.role.items():
            if r.startswith('apron'):
                self.affine[fr] = self.affine[f['pelvis']]
        # ribbon strands: straightened along +z (back) from Reptile's flap root, each bone keeps its length
        for strand in ('ribbonA', 'ribbonB'):
            frs = [f['%s:%d' % (strand, k)] for k in range(len(CHAINS[strand]))]
            T0 = R(FLAPS[strand][0])
            back = np.array([0.0, 0.0, 1.0])
            T = T0.copy()
            for k, fr in enumerate(frs):
                seg = (J[frs[k + 1]] - J[fr]) if k + 1 < len(frs) else (J[fr] - J[frs[k - 1]])
                self.set(fr, T, rot_between(seg, back))
                if k + 1 < len(frs):
                    T = T + back * np.linalg.norm(seg)
            self.notes[strand + '_length'] = round(float(T[2] - T0[2]), 1)

    @property
    def rep_bottom(self):
        if not hasattr(self, '_bottom'):
            P = [self.rep.world(x)[0] for x in self.rep.meshes()]
            self._bottom = float(np.concatenate(P)[:, 1].max())
        return self._bottom

    def vertices(self, idx=None):
        """re-posed positions and normals of MKA vertices idx (all by default)"""
        mka = self.mka
        idx = np.arange(len(mka['pos'])) if idx is None else np.asarray(idx)
        P = self.G(mka['pos'][idx])
        N = self.flip(mka['nrm'][idx])
        outp, outn = np.zeros_like(P), np.zeros_like(N)
        for i, k in enumerate(idx):
            for fr, w in zip(mka['frames'][k], mka['weights'][k]):
                T, L, Jf = self.affine[fr]
                outp[i] += w / 4096.0 * (T + L @ (P[i] - Jf))
                outn[i] += w / 4096.0 * (np.linalg.inv(L).T @ N[i])
        outn /= np.maximum(np.linalg.norm(outn, axis=1, keepdims=True), 1e-9)
        return outp, outn


def chain_weights(z, zs, bones):
    """Reptile's flap weighting along a chain: zs = joint positions of `bones` (+ the end joint); a vertex at the
    k-th joint is 50/50 between bone k-1 and bone k; in between, (k-1: (1-t)/2, k: 1/2, k+1: t/2)"""
    n = len(bones)
    k = int(np.clip(np.searchsorted(zs, z, side='right') - 1, 0, n - 1))
    t = float(np.clip((z - zs[k]) / (zs[k + 1] - zs[k]), 0, 1)) if k + 1 < len(zs) else 1.0
    w = {}
    if k == 0:
        w[bones[0]] = 1 - 0.5 * t
    else:
        w[bones[k - 1]] = 0.5 * (1 - t)
        w[bones[k]] = 0.5
    if k + 1 < n:
        w[bones[k + 1]] = w.get(bones[k + 1], 0) + 0.5 * t
    else:
        w[bones[k]] = w.get(bones[k], 0) + 0.5 * t
    return w


def reweight(rp, pos):
    """per MKA vertex: {Reptile bone: weight} (merged), and the cloth chain it rides on (None, 'ribbonA', ...)"""
    mka, role, rb = rp.mka, rp.role, rp.rb
    out, chain = [], []
    zs = {}
    for c in FLAPS:
        names = FLAPS[c] + [FLAP_END[c]]
        J = rp.rpos[[rb[n] for n in names]]
        zs[c] = J[:, 2] if c != 'apron' else J[:, 1]
    for k in range(len(pos)):
        w, ch = {}, None
        for fr, wt in zip(mka['frames'][k], mka['weights'][k]):
            r, wt = role[fr], wt / 4096.0
            c = r.split(':')[0]
            if c in ('ribbonA', 'ribbonB', 'apron+', 'apron-'):
                c = 'apron' if c.startswith('apron') else c
                ch = c
                z = pos[k][2] if c != 'apron' else pos[k][1]
                for b, x in chain_weights(z, zs[c], [rb[n] for n in FLAPS[c]]).items():
                    w[b] = w.get(b, 0) + wt * x
            else:
                b = rb[body_target(r, rp.rep)]
                w[b] = w.get(b, 0) + wt
        out.append(w)
        chain.append(ch)
    return out, chain


def bonemap_doc(rp):
    rows = []
    for fr in sorted(rp.role):
        r = rp.role[fr]
        J = rp.mka['joint'][fr]
        row = {'mka_frame': fr, 'mka_tag': '%#x' % rp.mka['tag'][fr], 'role': r,
               'mka_joint_m': np.round(J, 4).tolist(), 'joint_after_repose': np.round(rp.affine[fr][0], 1).tolist()}
        c = r.split(':')[0]
        if c in CHAINS or c.startswith('apron'):
            cc = 'apron' if c.startswith('apron') else c
            row['reptile'] = '%s .. %s' % (FLAPS[cc][0], FLAPS[cc][-1])
            row['reason'] = {'ribbonA': 'hood ribbon, long strand (0.65 m): straightened back along +z from '
                                        'flap_start (Reptile hood flap A, group 0, flaps point back in the bind pose) and '
                                        'reweighted by arc length over flap_start..flap_10 like Reptile\'s flap',
                             'ribbonB': 'hood ribbon, short strand: straightened from flap_bstart, reweighted over '
                                        'flap_bstart..flap_b8 (hood flap B, group 1)',
                             'apron': 'apron (front cloth, two edge strands): keeps MKA\'s forward tilt, both strands '
                                      'reweighted by height over flap_dr_start..flap_dr6 (Reptile\'s loincloth, '
                                      'group 2); pelvis/thigh weights stay on pelvis/thighs'}[cc]
        else:
            row['reptile'] = body_target(r, rp.rep)
            if r.startswith('finger'):
                row['reason'] = ('front two of MKA\'s four fingers -> Reptile finger, back two -> pinky (Reptile has '
                                 '3 digits); fingers ride rigidly with the wrist')
            elif r.startswith('thumb'):
                row['reason'] = 'thumb chain (3 joints) -> thumb00/thumb01'
            else:
                row['reason'] = REASON[r.rstrip('+-')]
        rows.append(row)
    return {'note': 'MKA frames 2-70 (69 weighted bones: 48 body + 21 cloth) -> Reptile 6852 bones. +X = the '
                    'character\'s left in both. Global: MKA metres rotated 180 deg about X, scale %.3f, pelvis on '
                    'Reptile\'s pelvis; then per-bone affines put MKA\'s joints on Reptile\'s.' % rp.scale,
            'scale': rp.scale, 'notes': rp.notes, 'bones': rows}


# ---------------------------------------------------------------------------------------------------- textures
def mka_tex(name):
    files = {'skin': '0_3_CHAMELEON_000.png', 'eye_grad': '0_4_CHAMELEON_001.png', 'leather': '0_5_CHAMELEON_002.png',
             'leg': '0_6_CHAMELEON_003.png', 'cham_grad': '0_7_CHAMELEON_004.png', 'trans': '0_8_CHAMELEON_005.png'}
    return np.asarray(Image.open(os.path.join(MKA_TEX, files[name])).convert('RGBA')).astype(float)


def down(a, size=(128, 128)):
    """float HxWxC -> size (w, h), area average per channel"""
    chans = [np.asarray(Image.fromarray(a[..., c].astype(np.float32), 'F').resize(size, Image.BOX))
             for c in range(a.shape[2])]
    return np.stack(chans, -1)


def highlight(a):
    """MKA specular mask (texture alpha 0-255) -> MK:SM highlight alpha (Reptile's range, >= 4 so ATST keeps it)"""
    return np.clip(np.rint(4 + np.asarray(a, float) * 60 / 255), 4, 64)


def kmeans(X, k, w=None, iters=12, seed=0):
    X = np.asarray(X, float)
    w = np.ones(len(X)) if w is None else w
    rng = np.random.default_rng(seed)
    u = np.unique(X, axis=0)
    if len(u) <= k:
        return u, np.array([np.where((u == x).all(1))[0][0] for x in X])
    C = u[rng.choice(len(u), k, replace=False)]
    for _ in range(iters):
        lab = np.argmin(((X[:, None] - C[None]) ** 2).sum(2), 1)
        for j in range(k):
            s = lab == j
            if s.any():
                C[j] = (X[s] * w[s, None]).sum(0) / w[s].sum()
    lab = np.argmin(((X[:, None] - C[None]) ** 2).sum(2), 1)
    return C, lab


def quantize(rgba, ncol=255):
    """128x128 RGBA (alpha already in PS2 units) -> (indices 1..ncol, logical CLUT 256x4); index 0 = unused"""
    flat = rgba.reshape(-1, 4)
    pal = Image.fromarray(np.clip(rgba[..., :3], 0, 255).astype(np.uint8)).quantize(ncol, Image.Quantize.MEDIANCUT)
    lab = np.asarray(pal).ravel()
    X = (flat * [1, 1, 1, 0.75]).astype(np.float32)
    C = np.array([X[lab == j].mean(0) if (lab == j).any() else X[0] for j in range(ncol)], np.float32)
    for _ in range(10):
        lab = np.argmin(((X[:, None] - C[None]) ** 2).sum(2), 1)
        for j in range(ncol):
            s = lab == j
            if s.any():
                C[j] = X[s].mean(0)
    C[:, 3] /= 0.75
    clut = np.zeros((256, 4))
    clut[0] = (255, 255, 255, 0)
    clut[1:ncol + 1] = C
    return lab.reshape(rgba.shape[:2]) + 1, np.clip(np.rint(clut), 0, 255).astype(np.uint8)


def gradients():
    g = mka_tex('cham_grad')[..., :3].mean(1)                    # 128 rows (columns vary by noise only)
    e = mka_tex('eye_grad')
    sat = e[:, 64:80, :3].mean(1)                               # the saturated band of the eye glow
    return g, sat, e


def rainbow_blocks(opaque, shades, body_alpha=BODY_ALPHA):
    """block parameters: colour = k * source[row] + add, alpha; source 'grad' or 'eye'"""
    if not opaque:
        b = [{'block': 0, 'what': 'plain cloth', 'source': 'cham_grad', 'k': 1.0, 'add': 0.0, 'alpha': body_alpha}]
        b += [{'block': j, 'what': 'unused (layered: the shell is page 5)', 'source': 'cham_grad', 'k': 1.0,
               'add': 0.0, 'alpha': body_alpha} for j in range(1, 5)]
        b.append({'block': 5, 'what': 'eye pastel', 'source': 'eye_sat', 'k': 0.5, 'add': 127.5, 'alpha': body_alpha})
        b.append({'block': 6, 'what': 'eye saturated', 'source': 'eye_sat', 'k': 1.0, 'add': 0.0, 'alpha': body_alpha})
        return b
    b = [{'block': 0, 'what': 'plain cloth', 'source': 'cham_grad', 'k': 1.0, 'add': 0.0, 'alpha': 64}]
    for j in range(4):
        if opaque:
            k, c = shades[j]
            b.append({'block': j + 1, 'what': 'shell shade %d' % j, 'source': 'cham_grad', 'k': round(float(k), 4),
                      'add': round(float(c) * 255, 2), 'alpha': int(max(4, round(64 * k)))})
        else:
            b.append({'block': j + 1, 'what': 'unused (layered: the shell is page 5)', 'source': 'cham_grad', 'k': 1.0,
                      'add': 0.0, 'alpha': 64})
    b.append({'block': 5, 'what': 'eye pastel', 'source': 'eye_sat', 'k': 0.5, 'add': 127.5,
              'alpha': 128 if opaque else 120})
    b.append({'block': 6, 'what': 'eye saturated', 'source': 'eye_sat', 'k': 1.0, 'add': 0.0,
              'alpha': 128 if opaque else 100})
    return b


def rainbow_clut(blocks, fixed, phase=PHASE):
    g, sat, _ = gradients()
    clut = np.zeros((256, 4))
    clut[0] = (255, 255, 255, 0)
    for bl in blocks:
        src = g if bl['source'] == 'cham_grad' else sat
        for h in range(HUES):
            row = (4 * h + 2 + phase) % 128
            clut[1 + HUES * bl['block'] + h, :3] = bl['k'] * src[row] + bl['add']
            clut[1 + HUES * bl['block'] + h, 3] = bl['alpha']
    for i, (rgb, a) in enumerate(fixed):
        clut[FIXED0 + i] = (*rgb, a)
    return np.clip(np.rint(clut), 0, 255).astype(np.uint8)


def eye_levels():
    """the 10 eye columns (MKA eye_grad u bands) -> ('cut' | 'core' | 5 | 6, alpha)"""
    _, sat, e = gradients()
    out = []
    for c in range(EYE[1] - EYE[0]):
        u0, u1 = int(c * 128 / 10), int((c + 1) * 128 / 10)
        band = e[:, u0:u1]
        a = band[..., 3].mean() / 255
        white = 1 - (band[..., :3].max(-1) - band[..., :3].min(-1)).mean() / 255
        if a < 0.35:
            out.append(('cut', 0))
        elif white > 0.8:
            out.append(('core', int(round(a * 128))))
        elif white > 0.35:
            out.append((5, int(round(a * 128))))
        else:
            out.append((6, int(round(a * 128))))
    return out


def raster_uv(tris_uv, vals, W, H):
    """rasterize triangles given in texel coords (T,3,2) with per-vertex values (T,3) -> (value image, coverage)"""
    img = np.zeros((H, W))
    cov = np.zeros((H, W), bool)
    for (pa, pb, pc), (va, vb, vc) in zip(tris_uv, vals):
        x0, x1 = int(max(np.floor(min(pa[0], pb[0], pc[0])) - 1, 0)), int(min(np.ceil(max(pa[0], pb[0], pc[0])) + 1, W))
        y0, y1 = int(max(np.floor(min(pa[1], pb[1], pc[1])) - 1, 0)), int(min(np.ceil(max(pa[1], pb[1], pc[1])) + 1, H))
        if x1 <= x0 or y1 <= y0:
            continue
        den = (pb[1] - pc[1]) * (pa[0] - pc[0]) + (pc[0] - pb[0]) * (pa[1] - pc[1])
        if abs(den) < 1e-12:
            continue
        ys, xs = np.mgrid[y0:y1, x0:x1] + 0.5
        l0 = ((pb[1] - pc[1]) * (xs - pc[0]) + (pc[0] - pb[0]) * (ys - pc[1])) / den
        l1 = ((pc[1] - pa[1]) * (xs - pc[0]) + (pa[0] - pc[0]) * (ys - pc[1])) / den
        l2 = 1 - l0 - l1
        ins = (l0 >= -0.35) & (l1 >= -0.35) & (l2 >= -0.35)       # a little past the edges: bilinear padding
        yy, xx = (ys[ins] - 0.5).astype(int), (xs[ins] - 0.5).astype(int)
        img[yy, xx] = l0[ins] * va + l1[ins] * vb + l2[ins] * vc
        cov[yy, xx] = True
    return img, cov


# ---------------------------------------------------------------------------------------------------- triangles
def tri_list(mka):
    """MKA triangles grouped by kind: {'skin': [...], 'eye', 'leather', 'leg', 'cloth', 'shell'} as
    [(material index, (a, b, c))]; caps (rgba alpha 0) dropped"""
    kinds = {}
    for m in mka['materials']:
        if m['preview_blend'] == 'hidden':
            continue
        kind = {'skin': 'skin', 'eye_grad': 'eye', 'leather': 'leather', 'leg': 'leg', 'cham_grad': 'cloth',
                'trans': 'shell'}[m['texture']]
        for t in m['triangles']:
            kinds.setdefault(kind, []).append((m['index'], tuple(t)))
    return kinds


def match_shell(mka, kinds):
    """shell triangle -> the cloth triangle under it (vertex by vertex, nearest within 1 cm along the normal)"""
    P = mka['pos']
    cloth_v = sorted({v for _, t in kinds['cloth'] for v in t})
    CP = P[cloth_v]
    near = {}
    for _, t in kinds['shell']:
        for v in t:
            if v not in near:
                d = np.linalg.norm(CP - P[v], axis=1)
                j = int(d.argmin())
                near[v] = cloth_v[j] if d[j] < 0.01 else None
    ctri = {frozenset(t): (mi, t) for mi, t in kinds['cloth']}
    out = {}
    for mi, t in kinds['shell']:
        key = frozenset(near[v] for v in t)
        if None not in key and key in ctri:
            out[(mi, t)] = ctri[key]
    return out, near


def frac_uv(uv_tri):
    return uv_tri - np.floor(uv_tri.mean(0))


# ---------------------------------------------------------------------------------------------------- build
class Build:
    body_alpha = BODY_ALPHA

    def __init__(self, out=OUT):
        from wad import Wad
        self.out = out
        self.wad = Wad()
        self.rep_bytes = self.wad.get(MODEL)
        self.pwf_bytes = self.wad.get(TEXTURES)
        self.rep = Model.from_bytes(self.rep_bytes)
        self.mka = load_mka()
        self.rp = Repose(self.mka, self.rep)
        self.pos, self.nrm = self.rp.vertices()
        self.w, self.chain = reweight(self.rp, self.pos)
        self.kinds = tri_list(self.mka)
        self.shell_match, self.shell_near = match_shell(self.mka, self.kinds)

    # textures ---------------------------------------------------------------------------------------------------
    def quilt_fields(self):
        t = mka_tex('trans')
        a = t[..., 3] / 255.0
        g = t[..., :3].mean(-1) / 255.0
        f = down(np.stack([1 - a, a * g, a], -1), (QUILT_W, 128))
        return f[..., 0], f[..., 1], f[..., 2]

    def rainbow_page(self, opaque):
        """(index image 128x128, logical CLUT, blocks, fixed list, hue image)"""
        g, sat, _ = gradients()
        idx = np.zeros((128, 128), int)
        rows = np.arange(128)
        hue_row = (rows // 4)[:, None]
        # plain strip and (layered) the whole cloth area: block 0, hue by row
        idx[:, :EYE[0]] = 1 + hue_row
        # eyes
        fixed = [((255, 255, 255), 128 if opaque else self.body_alpha)]      # FIXED0: the eye's white core
        for c, (lev, al) in enumerate(eye_levels()):
            col = EYE[0] + c
            if lev == 'cut':
                idx[:, col] = 0
            elif lev == 'core':
                idx[:, col] = FIXED0
            else:
                idx[:, col] = 1 + HUES * lev + hue_row[:, 0]
        shades = None
        if opaque:
            k, c, a = self.quilt_fields()
            # hue per quilt texel from the cloth under the shell (its cham_grad v)
            uvs, vals = [], []
            for (smi, st), (cmi, ct) in self.shell_match.items():
                near = self.shell_near
                cuv = {near[v]: self.mka['uv'][near[v]] for v in st}
                suv = frac_uv(self.mka['uv'][list(st)])
                uvs.append(suv * [QUILT_W, 128])
                vals.append([cuv[near[v]][1] * 128 for v in st])
            hrow, cov = raster_uv(np.array(uvs), np.array(vals), QUILT_W, 128)
            fill = np.median(hrow[cov]) if cov.any() else 122
            hrow[~cov] = fill
            hue = (np.floor(hrow / 4).astype(int)) % HUES
            # shades: (k, add) of lerp(cloth, shell, a) = k * cloth + add; a > 0.85 -> fixed gray entries
            solid = k < 0.15
            X = np.stack([k[~solid], c[~solid]], 1)
            C, lab = kmeans(np.vstack([X, [[1.0, 0.0]] * 50]), 5)
            plain = int(np.argmin(((C - [1, 0]) ** 2).sum(1)))
            C[plain] = (1.0, 0.0)
            order = [j for j in range(5) if j != plain]
            shades = [tuple(C[j]) for j in order]
            remap = {plain: 0}
            remap.update({j: i + 1 for i, j in enumerate(order)})
            lab = np.argmin(((X[:, None] - C[None]) ** 2).sum(2), 1)
            blk = np.zeros(k.shape, int)
            blk[~solid] = [remap[j] for j in lab]
            q = 1 + HUES * blk + hue
            gray = (c[solid] + k[solid] * 0.25) * 255                # shell colour (+ a little of a mid cloth)
            nfix = 256 - FIXED0 - len(fixed)
            G, glab = kmeans(gray[:, None], nfix)
            G = G[:, 0]
            for j in range(len(G)):
                fixed.append(((G[j],) * 3, int(max(4, round(64 * k[solid][glab == j].mean()))) if (glab == j).any()
                              else 4))
            q[solid] = FIXED0 + 1 + glab
            idx[:, :QUILT_W] = q
            self.quilt_err = self.quilt_error(k, c, solid, C, lab, G, glab, gray)
        blocks = rainbow_blocks(opaque, shades, self.body_alpha)
        clut = rainbow_clut(blocks, fixed)
        return idx, clut, blocks, fixed

    def quilt_error(self, k, c, solid, C, lab, G, glab, gray):
        g, _, _ = gradients()
        col = g[62]                                            # green, the disc phase
        true = k[..., None] * col + c[..., None] * 255
        q = np.zeros_like(true)
        ns = ~solid
        Cs = C[lab]
        q[ns] = Cs[:, :1] * col + Cs[:, 1:] * 255
        q[solid] = G[glab][:, None]
        return float(np.abs(q - true).mean())

    def pages(self, opaque):
        """{page: (indices, logical CLUT)} for the replaced/added pages"""
        out = {}
        skin = np.zeros((256, 4), np.uint8)
        skin[0] = (255, 255, 255, 0)
        skin[1] = (*DARK_SKIN, 8) if opaque else (*mka_tex('skin')[0, 0, :3].astype(int), GLASS_ALPHA)
        out[0] = (np.ones((128, 128), int), skin)
        idx, clut, blocks, fixed = self.rainbow_page(opaque)
        out[2] = (idx, clut)
        self.blocks, self.fixed = blocks, fixed
        for page, name in ((3, 'leather'), (4, 'leg')):
            t = down(mka_tex(name))
            t[..., 3] = highlight(t[..., 3]) if opaque else self.body_alpha
            out[page] = quantize(t)
        if not opaque:
            t = down(mka_tex('trans'))
            t[..., 3] = np.floor(t[..., 3] / 2)                   # MKA alpha / 2 (0x80 = 1.0); < 4 is cut by ATST
            out[5] = quantize(t)
        return out

    # mesh records -----------------------------------------------------------------------------------------------
    def triangles(self, opaque):
        """[(group, material, [(key, pos, nrm, uv, weights)] x3)]; key identifies a shared vertex"""
        mka = self.mka
        rec = []

        def vert(v, uv, kind, push=0.0, src=None):
            s = v if src is None else src
            p = self.pos[s] + self.nrm[s] * push
            return ((s, kind, round(float(uv[0]), 5), round(float(uv[1]), 5), push), p, self.nrm[s], uv, self.w[s])

        def group_of(t):
            chains = {self.chain[v] for v in t} - {None}
            for c in ('ribbonA', 'ribbonB', 'apron'):
                if c in chains:
                    return CLOTH_GROUP[c]
            return 4

        mat_of = {'skin': 1, 'eye': 2, 'cloth': 2, 'leather': 3, 'leg': 4}
        covered = {ct for ct in self.shell_match.values()}
        for kind in ('leather', 'leg', 'skin', 'cloth', 'eye', 'shell'):
            for mi, t in self.kinds.get(kind, []):
                uv = self.mka['uv'][list(t)]
                if kind in ('leather', 'leg'):
                    uv = frac_uv(uv)
                elif kind == 'skin':
                    uv = np.full((3, 2), 0.5)
                elif kind == 'cloth':
                    if opaque and (mi, t) in covered:
                        continue
                    uv = np.stack([np.full(3, (STRIP[0] + STRIP[1]) / 2 / 128), np.clip(uv[:, 1], 0, 1)], 1)
                elif kind == 'eye':
                    f = np.clip(uv[:, 0] - np.floor(uv[:, 0].mean()), 0, 1)
                    uv = np.stack([(EYE[0] + f * (EYE[1] - EYE[0])) / 128, np.clip(uv[:, 1], 0, 1)], 1)
                elif kind == 'shell':
                    suv = frac_uv(uv)
                    if opaque:
                        under = self.shell_match.get((mi, t))
                        uv = np.stack([suv[:, 0] * QUILT_W / 128, suv[:, 1]], 1)
                        if under is not None:      # drop the shell layer, texture the cloth under it
                            srcs = [self.shell_near[v] for v in t]
                            rec.append((group_of(srcs), 2, [vert(v, uv[j], 'baked', 0.0, srcs[j])
                                                            for j, v in enumerate(t)]))
                            continue
                        rec.append((group_of(t), 2, [vert(v, uv[j], 'baked') for j, v in enumerate(t)]))
                        continue
                    # layered: own material 5, pushed out so it never z-fights the cloth
                    vs = []
                    for j, v in enumerate(t):
                        near = self.shell_near.get(v)
                        off = float((self.pos[v] - self.pos[near]) @ self.nrm[near]) if near is not None else 0.0
                        vs.append(vert(v, suv[j], 'shell', max(0.0, SHELL_PUSH - off)))
                    rec.append((group_of(t), 5, vs))
                    continue
                rec.append((group_of(t), mat_of[kind], [vert(v, uv[j], kind) for j, v in enumerate(t)]))
        return rec

    def prune(self, rec):
        """weights: <= 3 bones per vertex, then <= 3 per triangle (drop the triangle's lightest bone from all its
        vertices, globally, until it fits)"""
        W = {}
        for _, _, vs in rec:
            for key, p, n, uv, w in vs:
                if key not in W:
                    w = {b: x for b, x in w.items() if x > 0.02}
                    top = sorted(w.items(), key=lambda kv: -kv[1])[:3]
                    s = sum(x for _, x in top)
                    W[key] = {b: x / s for b, x in top}
        stats = {'tri_prunes': 0, 'max_weight_dropped': 0.0}
        changed = True
        while changed:
            changed = False
            for _, _, vs in rec:
                keys = [v[0] for v in vs]
                while True:
                    tot = {}
                    for kk in keys:
                        for b, x in W[kk].items():
                            tot[b] = tot.get(b, 0) + x
                    if len(tot) <= 3:
                        break
                    b = min(tot, key=tot.get)
                    for kk in keys:
                        if b in W[kk] and len(W[kk]) > 1:
                            stats['max_weight_dropped'] = max(stats['max_weight_dropped'], W[kk][b])
                            del W[kk][b]
                            s = sum(W[kk].values())
                            W[kk] = {bb: x / s for bb, x in W[kk].items()}
                        elif b in W[kk]:            # the vertex's only bone: hand it to the triangle's heaviest other
                            other = max((bb for bb in tot if bb != b), key=tot.get)
                            stats['max_weight_dropped'] = 1.0
                            W[kk] = {other: 1.0}
                    stats['tri_prunes'] += 1
                    changed = True
        self.prune_stats = stats
        return W

    def meshes(self, rec, W, opaque):
        """{group: [(material, bones, [tri local (a,b,c)], vertex rows)]}, greedy bins of <= 3 bones"""
        out = {}
        order_mat = [3, 4, 2, 1, 5] if not opaque else [3, 4, 2, 1]
        for g in sorted({r[0] for r in rec}):
            out[g] = []
            for mat in order_mat:
                tris = [r[2] for r in rec if r[0] == g and r[1] == mat]
                if not tris:
                    continue
                sets = [frozenset(b for v in vs for b in W[v[0]]) for vs in tris]
                bins = {}
                for s, vs in zip(sets, tris):
                    bins.setdefault(s, []).append(vs)
                # merge every set into a superset of size 3 (largest first), then pair up the small leftovers
                keys = sorted(bins, key=lambda s: (-len(s), -len(bins[s])))
                final = {}
                for s in keys:
                    host = next((h for h in final if s <= h), None)
                    if host is None and len(s) < 3:
                        host = next((h for h in final if len(h | s) <= 3), None)
                        if host is not None:
                            final[host | s] = final.pop(host)
                            host = host | s
                    if host is None:
                        final[s] = []
                        host = s
                    final[host] += bins[s]
                for s, vs_list in final.items():
                    for chunk in self.chunks(vs_list):
                        out[g].append(self.mesh_rows(mat, sorted(s), chunk, W))
        return out

    @staticmethod
    def chunks(tris):
        """split a triangle list into pieces of <= MAX_MESH_T triangles / MAX_MESH_V vertices (connected order)"""
        out, cur, cv = [], [], set()
        for vs in tris:
            keys = {v[0] for v in vs}
            if cur and (len(cur) >= MAX_MESH_T or len(cv | keys) > MAX_MESH_V):
                out.append(cur)
                cur, cv = [], set()
            cur.append(vs)
            cv |= keys
        if cur:
            out.append(cur)
        return out

    @staticmethod
    def mesh_rows(mat, bones, tris, W):
        index, rows, local = {}, [], []
        for vs in tris:
            t = []
            for key, p, n, uv, _ in vs:
                if key not in index:
                    index[key] = len(rows)
                    rows.append((p, n, uv, W[key]))
                t.append(index[key])
            local.append(tuple(t))
        return mat, bones, local, rows

    # write ------------------------------------------------------------------------------------------------------
    def model_bytes(self, groups, opaque):
        m = Model.from_bytes(self.rep_bytes)
        sk = m.skeleton()
        origins = [g.origin() for g in m.groups]
        if not opaque:
            add_material(m, 5, 'trans', like=4)
            struct.pack_into('<I', m.header().data, 0x14, 6)
            for mi in (1, 5):                                  # skin, shell: blended, no glow pass
                drop_glow_pass(m, mi)
        piv = np.array([b.pos for b in sk])
        rot = [euler_matrix(b.rot) for b in sk]
        self.mesh_stats = []
        for gi, grp in enumerate(m.groups):
            if gi not in groups:
                continue
            specs = []
            for mat, bones, local, rows in groups[gi]:
                P = np.array([r[0] for r in rows])
                N = np.array([r[1] for r in rows])
                UV = np.array([r[2] for r in rows])
                B = np.full((len(rows), 4), -1)
                Wt = np.zeros((len(rows), 4))
                for k, r in enumerate(rows):
                    for j, b in enumerate(bones):
                        if b in r[3]:
                            B[k, j], Wt[k, j] = b, r[3][b]
                v = make_vertices(P, N, UV, B, Wt, mat, sk, origins[gi], rgba=(255, 255, 255, 128), flags=0)
                exact_first_slot(v, P, piv, rot)
                strips = stripify(local, P, N)
                specs.append((v, [(1, s) for s in strips], bones))
                self.mesh_stats.append((gi, mat, len(bones), len(rows), len(local), len(strips),
                                        float(np.abs(bind_world(v, piv, rot) - P).max())))
            grp.set_meshes(specs)
        return m.to_bytes()

    def pwf_bytes_for(self, pages):
        return write_pwf(self.pwf_bytes, pages)


def drop_glow_pass(m, index):
    """material `index` without its slot-4 pass (the costume page 1 highlight): pass count 1, ptrs[4] = 0. The game
    then draws it after the slot-4 materials, blended by texel alpha (0x80 = 1.0; <= 0x3c without a Z write)"""
    mt = next(x for x in m.mats if struct.unpack_from('<i', x.data, 0xc)[0] == index)
    sub = mt.ref(0x3c)
    rec = sub.ref(0x20)
    assert rec is not None and struct.unpack_from('<i', rec.data, 0xc)[0] == 1 and len(rec.data) == 0x70
    sub.set_ref(0x20, None)
    struct.pack_into('<i', sub.data, 0xc, 1)
    m.blobs = [b for b in m.blobs if b is not rec]
    m.runs = None


def add_material(m, index, name, like):
    """append a copy of material `like` (its 0x40 record and pass records) as material `index` on page `index`"""
    src = m.mats[like]
    copies = {}

    def clone(blob):
        if id(blob) in copies:
            return copies[id(blob)]
        c = pme2.Blob(blob.data)
        copies[id(blob)] = c
        for off, (tgt, delta) in blob.relocs.items():
            if off == 0 and blob is src:
                continue
            c.relocs[off] = (clone(tgt), delta)
        return c

    new = clone(src)
    struct.pack_into('<ii', new.data, 0xc, index, index)
    nm = name.encode() + b'\0'
    new.data[0x40:0x40 + len(nm)] = nm
    sub = new.ref(0x3c)
    for k in range(12):
        p = sub.ref(0x10 + 4 * k)
        if p is not None and struct.unpack_from('<i', p.data, 0xc)[0] == like:
            struct.pack_into('<i', p.data, 0xc, index)          # the base pass's page (the other pass is page 1)
    last = m.mats[-1]
    last.set_ref(0, new)
    # file order: right after the last material's own blocks
    pos = max(i for i, b in enumerate(m.blobs) if b is last or any(b is t for t, _ in last.relocs.values())
              or any(b is t2 for t, _ in last.relocs.values() for t2, _ in t.relocs.values()))
    m.blobs[pos + 1:pos + 1] = [new] + [copies[k] for k in copies if copies[k] is not new]
    m.mats.append(new)
    m.runs = None


def exact_first_slot(v, P, piv, rot):
    """the loader rebuilds p = pivot + offset of the first used slot and the VU1 blends w_i (t_i + R_i (p - t_i)):
    solve that slot's offset so the bind pose lands exactly on P (other slots keep R^T (P - pivot))"""
    for k in range(len(v)):
        used = [j for j in range(4) if v['bone'][k, j] != 255]
        if len(used) < 2:
            continue
        ws = v['w'][k, used] / 4096.0
        bs = v['bone'][k, used].astype(int)
        A = sum(w * rot[b] for w, b in zip(ws, bs))
        rhs = P[k] - sum(w * (piv[b] - rot[b] @ piv[b]) for w, b in zip(ws, bs))
        p = np.linalg.solve(A, rhs)
        v['off'][k, used[0]] = np.clip(np.rint(p - piv[bs[0]]), -32768, 32767)


def bind_world(v, piv, rot):
    """where the game puts format-2 vertices at the bind pose (pme2.Model.world without the Mesh)"""
    out = np.zeros((len(v), 3))
    for k in range(len(v)):
        used = [j for j in range(4) if v['bone'][k, j] != 255]
        b0 = int(v['bone'][k, used[0]])
        p = piv[b0] + v['off'][k, used[0]]
        out[k] = sum(v['w'][k, j] / 4096.0 * (piv[b] + rot[b] @ (p - piv[b])) for j in used for b in [int(v['bone'][k, j])])
    return out


def stripify(tris, P, N):
    """greedy strips; every triangle is oriented along its vertex normals and so is each strip's first triangle"""
    T = []
    for a, b, c in tris:
        n = np.cross(P[b] - P[a], P[c] - P[a])
        T.append((a, b, c) if n @ (N[a] + N[b] + N[c]) >= 0 else (b, a, c))
    edge = {}
    for i, (a, b, c) in enumerate(T):
        for e in ((a, b), (b, c), (c, a)):
            edge.setdefault(frozenset(e), []).append(i)
    used = [False] * len(T)

    def rotations(t):
        a, b, c = t
        return [(a, b, c), (b, c, a), (c, a, b)]

    def grow(start):
        s, taken = list(start), set()
        while len(s) < MAX_STRIP:
            k = len(s) - 2                         # the next triangle is number k in the strip
            u, w = s[-2], s[-1]
            nxt = None
            for i in edge.get(frozenset((u, w)), []):
                if used[i] or i in taken:
                    continue
                x = [y for y in T[i] if y not in (u, w)]
                if len(x) != 1:
                    continue
                x = x[0]
                want = (u, w, x) if k % 2 == 0 else (w, u, x)
                if want in rotations(T[i]):
                    nxt = (i, x)
                    break
            if nxt is None:
                break
            taken.add(nxt[0])
            s.append(nxt[1])
        return s, taken

    def free_neighbours(i):
        return sum(1 for e in ((T[i][0], T[i][1]), (T[i][1], T[i][2]), (T[i][2], T[i][0]))
                   for j in edge[frozenset(e)] if j != i and not used[j])

    strips = []
    left = set(range(len(T)))
    while left:
        i = min(left, key=free_neighbours)
        best = None
        for r in rotations(T[i]):
            s, taken = grow(r)
            if best is None or len(s) > len(best[0]):
                best = (s, taken)
        used[i] = True
        left.discard(i)
        for j in best[1]:
            used[j] = True
            left.discard(j)
        strips.append(best[0])
    return strips


def swizzle(i):
    return (i & ~0x18) | ((i & 0x8) << 1) | ((i & 0x10) >> 1)


def write_pwf(orig, pages):
    """copy of PWF `orig` with entries replaced/appended: pages {entry: (indices HxW, logical CLUT 256x4)}"""
    from chameleon import entries
    ents = entries(orig)
    blobs = [bytearray(orig[o:o + s]) for o, s in ents]
    n = max(len(ents), max(pages) + 1)
    while len(blobs) < n:
        blobs.append(bytearray(blobs[0]))                       # a 128x128 T8 header to start from
    for e, (idx, clut) in pages.items():
        h, w = idx.shape
        assert (w, h) == struct.unpack_from('<2I', blobs[e], 0x10) and len(blobs[e]) == 0x480 + w * h
        stored = np.asarray(clut, np.uint8)[[swizzle(i) for i in range(256)]]
        blobs[e][0x80:0x480] = stored.tobytes()
        blobs[e][0x480:0x480 + w * h] = np.asarray(idx, np.uint8).tobytes()
    first = ents[0][0]
    out = bytearray(orig[:first])
    struct.pack_into('<I', out, 0xc, n)
    o = first
    for k, b in enumerate(blobs):
        assert len(b) % 0x80 == 0
        struct.pack_into('<Q', out, 0x20 + 8 * k, o | (len(b) << 32))
        o += len(b)
    for b in blobs:
        out += b
    struct.pack_into('<I', out, 4, len(out))
    return bytes(out)


def fnv1a(b):
    h = 0xcbf29ce484222325
    for c in b:
        h = ((h ^ c) * 0x100000001b3) & 0xFFFFFFFFFFFFFFFF
    return h


def decode_pwf(b):
    """PWF bytes -> [RGBA uint8 HxWx4 (PS2 alpha)], [logical CLUTs]"""
    from chameleon import entries
    out, cl = [], []
    for o, s in entries(b):
        t = b[o:o + s]
        w, h = struct.unpack_from('<2I', t, 0x10)
        clut = np.frombuffer(t[0x80:0x480], np.uint8).reshape(256, 4)[[swizzle(i) for i in range(256)]]
        out.append(clut[np.frombuffer(t[0x480:0x480 + w * h], np.uint8).reshape(h, w)])
        cl.append(clut)
    return out, cl


# ---------------------------------------------------------------------------------------------------- checks
def plain(blob):
    d = bytearray(blob.data)
    for off in blob.relocs:
        d[off:off + 4] = bytes(4)
    return bytes(d)


def check_files(pme, pwf, label):
    m = Model.from_bytes(pme)
    assert m.to_bytes() == pme, 'write is not stable'
    ok = pme2.roundtrip(pme, label)
    pages, _ = decode_pwf(pwf)
    rep = Model.from_bytes(pme2.load(str(MODEL)))
    sk, rsk = m.skeleton(), rep.skeleton()
    for g in m.groups:
        assert [(a.parent, a.name, a.pos, a.rot) for a in g.bones()] == [(b.parent, b.name, b.pos, b.rot) for b in rsk]
    assert len(sk) == 84 and len(m.groups) == len(rep.groups)
    for t in (3, 12):                                                   # dummies, spheres: same bytes but pointers
        assert [plain(x) for x in m.chunks(t)] == [plain(x) for x in rep.chunks(t)], t
    assert bytes(m.header().data[0x2c:]) == bytes(rep.header().data[0x2c:])
    mt = {x['index']: x['texture'] for x in m.materials()}
    nv, nt = 0, 0
    for g in m.groups:
        for x in g.meshes():
            v = x.vertices()
            assert x.fmt == 2 and 1 <= x.nbones <= 3, (x.fmt, x.nbones)
            assert len(set(v['mat'].tolist())) == 1 and mt[int(v['mat'][0])] < len(pages)
            assert (v['w'].astype(int).sum(1) == 4096).all()
            for j in range(4):
                u = v['bone'][:, j] != 255
                assert not u.any() or (j < x.nbones and (v['bone'][u, j] == x.bones[j]).all())
            assert max(len(s) for _, s in x.strips()) <= 32 and x.nv <= 16384
            nv += x.nv
            nt += x.ntri
    h = m.header().data
    assert struct.unpack_from('<I', h, 0x14)[0] == max(mt.values()) + 1
    mats = m.materials()
    assert any(4 in x['pass_slots'] for x in mats), 'no slot-4 material: the model would not load as mode 2'
    for x, blob in zip(mats, m.mats):
        if x['texture'] >= 0:
            n = struct.unpack_from('<i', blob.ref(0x3c).data, 0xc)[0]
            assert x['pass_slots'] in ([1, 4], [1]) and n == len(x['pass_slots']), (x, n)
    print('%s: %d bytes, %d groups, %d meshes, %d verts, %d tris; pages %d; roundtrip %s' % (
        label, len(pme), len(m.groups), len(m.meshes()), nv, nt, len(pages), 'ok' if ok else 'FAIL'))
    return ok


# ---------------------------------------------------------------------------------------------------- previews
def scene(pme, pwf, pose=None):
    """the files as the game sees them: world positions (bind or posed), normals, texel uv, page, alpha mode"""
    m = Model.from_bytes(pme)
    pages, _ = decode_pwf(pwf)
    mt = {x['index']: x['texture'] for x in m.materials()}
    sk = m.skeleton()
    P, N, UV, tris = [], [], [], []
    for x in m.meshes():
        v = x.vertices()
        p = m.world(x, v)[0]
        n = v['nrm'] / 4096.0
        if pose is not None:
            p, n = skin(v, p, n, pose)
        base = sum(len(q) for q in P)
        P.append(p)
        N.append(n)
        page = mt[int(v['mat'][0])]
        h, w = pages[page].shape[:2]
        UV.append(v['uv'] / 4096.0 * [w, h])
        for t in x.triangles():
            tris.append(((base + t[0], base + t[1], base + t[2]), page))
    return np.concatenate(P), np.concatenate(N), np.concatenate(UV), tris, pages, sk


def pose_matrices(sk, rots):
    """rots {bone: 3x3 local rotation about its pivot} -> per bone (posed pivot, accumulated rotation)"""
    piv = np.array([b.pos for b in sk])
    Q = [np.eye(3)] * len(sk)
    T = [None] * len(sk)
    for i, b in enumerate(sk):
        r = rots.get(i, np.eye(3))
        if b.parent < 0:
            T[i], Q[i] = piv[i], r
        else:
            T[i] = T[b.parent] + Q[b.parent] @ (piv[i] - piv[b.parent])
            Q[i] = Q[b.parent] @ r
    return piv, T, Q


def skin(v, p, n, pose):
    piv, T, Q = pose
    outp, outn = np.zeros_like(p), np.zeros_like(n)
    for j in range(4):
        b = v['bone'][:, j]
        w = v['w'][:, j] / 4096.0
        for k in np.nonzero(b != 255)[0]:
            bb = int(b[k])
            outp[k] += w[k] * (T[bb] + Q[bb] @ (p[k] - piv[bb]))
            outn[k] += w[k] * (Q[bb] @ n[k])
    return outp, outn


def render(P, N, UV, tris, pages, yaw, S=1024, blend_pages=(), box=None, light=(-0.4, -0.6, -0.7), bg=40.0):
    c, s = np.cos(yaw), np.sin(yaw)
    R = np.array([[c, 0, s], [0, 1, 0], [-s, 0, c]])
    lo, hi = box if box is not None else (P.min(0), P.max(0))
    ctr = (lo + hi) / 2
    scale = 0.92 * S / max(hi[1] - lo[1], 1e-6)
    Q = (P - ctr) @ R.T
    Nr = N @ R.T
    L = np.array(light) / np.linalg.norm(light)
    sh = 0.45 + 0.75 * np.abs(Nr @ L)                                 # pme2.preview's shading
    scr = np.stack([S / 2 + Q[:, 0] * scale, S / 2 + Q[:, 1] * scale, Q[:, 2]], 1)
    img = np.full((S, S, 3), float(bg))
    zb = np.full((S, S), np.inf)
    texs = [p.astype(float) for p in pages]
    later = []
    for (a, b, c_), page in tris:
        if page in blend_pages:
            later.append(((a, b, c_), page))
            continue
        tri_raster(img, zb, scr, UV, sh, (a, b, c_), texs[page], False)
    later.sort(key=lambda t: -scr[list(t[0]), 2].mean())
    for t, page in later:
        tri_raster(img, zb, scr, UV, sh, t, texs[page], True)
    return img, scr, R, ctr, scale


def tri_raster(img, zb, scr, UV, SH, t, tex, blend):
    H, W = zb.shape
    a, b, c = t
    pa, pb, pc = scr[a], scr[b], scr[c]
    x0, x1 = int(max(min(pa[0], pb[0], pc[0]), 0)), int(min(max(pa[0], pb[0], pc[0]) + 1, W - 1))
    y0, y1 = int(max(min(pa[1], pb[1], pc[1]), 0)), int(min(max(pa[1], pb[1], pc[1]) + 1, H - 1))
    if x1 < x0 or y1 < y0:
        return
    den = (pb[1] - pc[1]) * (pa[0] - pc[0]) + (pc[0] - pb[0]) * (pa[1] - pc[1])
    if abs(den) < 1e-9:
        return
    ys, xs = np.mgrid[y0:y1 + 1, x0:x1 + 1] + 0.5
    l0 = ((pb[1] - pc[1]) * (xs - pc[0]) + (pc[0] - pb[0]) * (ys - pc[1])) / den
    l1 = ((pc[1] - pa[1]) * (xs - pc[0]) + (pa[0] - pc[0]) * (ys - pc[1])) / den
    l2 = 1 - l0 - l1
    ins = (l0 >= 0) & (l1 >= 0) & (l2 >= 0)
    if not ins.any():
        return
    z = l0 * pa[2] + l1 * pb[2] + l2 * pc[2]
    yy, xx = (ys - 0.5).astype(int), (xs - 0.5).astype(int)
    sel = ins & (z <= zb[yy, xx])
    if not sel.any():
        return
    u = l0 * UV[a, 0] + l1 * UV[b, 0] + l2 * UV[c, 0]
    v = l0 * UV[a, 1] + l1 * UV[b, 1] + l2 * UV[c, 1]
    th, tw = tex.shape[:2]
    # bilinear, CLAMP (the GS looks up the CLUT, then filters)
    fx, fy = np.clip(u - 0.5, 0, tw - 1), np.clip(v - 0.5, 0, th - 1)
    ix, iy = np.floor(fx).astype(int), np.floor(fy).astype(int)
    ax, ay = (fx - ix)[..., None], (fy - iy)[..., None]
    ix1, iy1 = np.minimum(ix + 1, tw - 1), np.minimum(iy + 1, th - 1)
    texel = (tex[iy, ix] * (1 - ax) + tex[iy, ix1] * ax) * (1 - ay) + (tex[iy1, ix] * (1 - ax) + tex[iy1, ix1] * ax) * ay
    sel &= texel[..., 3] >= 4                                         # ATST GEQUAL 4
    if not sel.any():
        return
    sh = (l0 * SH[a] + l1 * SH[b] + l2 * SH[c])[sel][:, None]
    col = np.clip(texel[sel][:, :3] * sh, 0, 255)
    if blend:
        al = np.clip(texel[sel][:, 3:4] / 128.0, 0, 1)
        img[yy[sel], xx[sel]] = col * al + img[yy[sel], xx[sel]] * (1 - al)
    else:
        img[yy[sel], xx[sel]] = col
        zb[yy[sel], xx[sel]] = z[sel]


def label(im, xy, text):
    ImageDraw.Draw(im).text(xy, text, fill=(235, 235, 235))


def preview_sheet(out, name, pme, pwf, blend_pages, title):
    P, N, UV, tris, pages, sk = scene(pme, pwf)
    S = 768
    views = [(0.0, 'front'), (np.radians(-40), '3/4'), (np.pi, 'back')]
    mka = ['preview_front.png', 'preview_three_quarter.png', 'preview_back.png']
    sheet = Image.new('RGB', (S * 3, S * 2 + 60), (24, 24, 28))
    for k, (yaw, vname) in enumerate(views):
        img = render(P, N, UV, tris, pages, yaw, S, blend_pages)[0]
        sheet.paste(Image.fromarray(img.astype(np.uint8)), (S * k, 30))
        label(sheet, (S * k + 8, 34), '%s, %s (Reptile bind pose, from the files)' % (title, vname))
        p = os.path.join(out, mka[k])
        if os.path.exists(p):
            sheet.paste(Image.open(p).convert('RGB').resize((S, S), Image.LANCZOS), (S * k, S + 60))
            label(sheet, (S * k + 8, S + 64), 'MKA (mkamesh preview), %s' % vname)
    label(sheet, (8, 8), '%s: %d triangles; textures as the CLUTs hold them (rainbow at the disc phase)' % (
        name, len(tris)))
    path = os.path.join(out, name)
    sheet.save(path)
    return path


def skeleton_sheet(out, pme, pwf):
    P, N, UV, tris, pages, sk = scene(pme, pwf)
    S = 1024
    panels = []
    J = np.array([b.pos for b in sk])
    for yaw in (0.0, np.radians(-90)):
        img, scr, R, ctr, scale = render(P, N, UV, tris, pages, yaw, S)
        im = Image.fromarray((img * 0.5).astype(np.uint8))
        d = ImageDraw.Draw(im)
        Q = (J - ctr) @ R.T
        js = np.stack([S / 2 + Q[:, 0] * scale, S / 2 + Q[:, 1] * scale], 1)
        for k, b in enumerate(sk):
            if b.parent >= 0:
                d.line([tuple(js[b.parent]), tuple(js[k])], fill=(255, 210, 0), width=2)
        for k, b in enumerate(sk):
            x, y = js[k]
            d.ellipse([x - 3, y - 3, x + 3, y + 3], fill=(255, 60, 60))
            if not b.name.endswith('end') and not b.name.startswith(('flap_0', 'flap_b', 'flap_dr', 'tongue')):
                d.text((x + 4, y - 5), b.name, fill=(170, 255, 170))
        panels.append(np.asarray(im))
    path = os.path.join(out, 'cham_skeleton.png')
    Image.fromarray(np.concatenate(panels, 1)).save(path)
    return path


def rx(a):
    c, s = np.cos(a), np.sin(a)
    return np.array([[1, 0, 0], [0, c, -s], [0, s, c]])


def ry(a):
    c, s = np.cos(a), np.sin(a)
    return np.array([[c, 0, s], [0, 1, 0], [-s, 0, c]])


def rz(a):
    c, s = np.cos(a), np.sin(a)
    return np.array([[c, -s, 0], [s, c, 0], [0, 0, 1]])


def posed_sheet(out, pme, pwf):
    m = Model.from_bytes(pme)
    sk = m.skeleton()
    ix = {b.name: k for k, b in enumerate(sk)}
    # left arm up 90 (x -> -y), right knee bent 90 (shin y -> +z, back), head turned 45, hood flaps hanging down
    # (+z -> +y) with a little swing, loincloth kicked forward 30
    rots = {ix['l_shoulder']: rz(-np.pi / 2), ix['r_calf']: rx(np.pi / 2), ix['neck']: ry(np.radians(45)),
            ix['flap_start']: rx(np.radians(-65)), ix['flap_bstart']: rx(np.radians(-65)),
            ix['flap_dr_start']: rx(np.radians(-30)), ix['l_forearm']: rz(np.radians(-30))}
    for k in range(1, 6):
        rots[ix['flap_%02d' % k]] = rx(np.radians(4))
        rots[ix['flap_b%d' % k]] = rx(np.radians(4))
    pose = pose_matrices(sk, rots)
    P, N, UV, tris, pages, _ = scene(pme, pwf, pose)
    S = 900
    imgs = []
    box = (P.min(0) - 20, P.max(0) + 20)
    for yaw in (0.0, np.radians(-90), np.radians(-140)):
        imgs.append(render(P, N, UV, tris, pages, yaw, S, box=box)[0])
    im = Image.fromarray(np.concatenate(imgs, 1).astype(np.uint8))
    label(im, (8, 8), 'posed through the converted skin: l_shoulder up 90, l_forearm 30, r_calf (knee) 90, neck '
                      'turned 45, hood flaps rotated down 65 (curling out 4 per joint), loincloth forward 30')
    path = os.path.join(out, 'cham_posed.png')
    im.save(path)
    return path


def compare_sheet(out):
    """cham_compare.png: both variants rendered from the written files with pme2.py's rasterizer (pme2.raster, its
    preview shading; the layered variant's skin and shell pages blended by CLUT alpha on top), front / 3/4 / back /
    posed, under MKA's preview.png"""
    S = 640
    rows = []
    for name, blend in (('cham', (0, 5)), ('cham_opaque', ())):
        pme = open(os.path.join(out, name + '.pme2'), 'rb').read()
        pwf = open(os.path.join(out, name + '.pwf'), 'rb').read()
        m = Model.from_bytes(pme)
        sk = m.skeleton()
        ix = {bn.name: k for k, bn in enumerate(sk)}
        pose = pose_matrices(sk, {ix['l_shoulder']: rz(-np.pi / 2), ix['r_calf']: rx(np.pi / 2),
                                  ix['neck']: ry(np.radians(45)), ix['flap_start']: rx(np.radians(-65)),
                                  ix['flap_bstart']: rx(np.radians(-65)), ix['flap_dr_start']: rx(np.radians(-30))})
        panels = []
        for yaw, posed in ((0.0, None), (np.radians(-40), None), (np.pi, None), (np.radians(-30), pose)):
            P, N, UV, tris, pages, _ = scene(pme, pwf, posed)
            lo, hi = (P.min(0), P.max(0)) if posed is None else (P.min(0) - 20, P.max(0) + 20)
            c, s_ = np.cos(yaw), np.sin(yaw)
            R = np.array([[c, 0, s_], [0, 1, 0], [-s_, 0, c]])
            ctr, scale = (lo + hi) / 2, 0.92 * S / (hi[1] - lo[1])
            Q, Nr = (P - ctr) @ R.T, N @ R.T
            scr = np.stack([S / 2 + Q[:, 0] * scale, S / 2 + Q[:, 1] * scale, Q[:, 2]], 1)
            L = np.array([-0.4, -0.6, -0.7]) / np.linalg.norm([-0.4, -0.6, -0.7])
            sh = 0.45 + 0.75 * np.abs(Nr @ L)
            img, zb = np.full((S, S, 3), 40.0), np.full((S, S), np.inf)
            pme2.raster(img, zb, scr, UV, sh, [t for t in tris if t[1] not in blend], pages)
            later = sorted([t for t in tris if t[1] in blend], key=lambda t: -scr[list(t[0]), 2].mean())
            texs = [pg.astype(float) for pg in pages]
            for t, page in later:
                tri_raster(img, zb, scr, UV, sh, t, texs[page], True)
            im = Image.fromarray(img.astype(np.uint8))
            label(im, (6, 6), '%s.pme2/.pwf, %s' % (name, {0.0: 'front', np.pi: 'back'}.get(yaw, '3/4') if posed is None
                                                       else 'posed: arm up, knee 90, head 45, flaps down'))
            panels.append(np.asarray(im))
        rows.append(np.concatenate(panels, 1))
    mka = Image.open(os.path.join(out, 'preview.png')).convert('RGB')
    mka = mka.resize((4 * S, int(mka.height * 4 * S / mka.width)), Image.LANCZOS)
    sheet = Image.new('RGB', (4 * S, mka.height + 2 * S + 24), (24, 24, 28))
    sheet.paste(mka, (0, 0))
    label(sheet, (6, mka.height + 6), 'converted (rendered from the written files, pme2.raster): row 1 layered '
                                      'cham.pme2/.pwf, row 2 opaque fallback cham_opaque.pme2/.pwf')
    for k, r in enumerate(rows):
        sheet.paste(Image.fromarray(r), (0, mka.height + 24 + k * S))
    path = os.path.join(out, 'cham_compare.png')
    sheet.save(path)
    return path


# ---------------------------------------------------------------------------------------------------- main
def build(out=OUT, body_alpha=BODY_ALPHA):
    assert 4 <= body_alpha <= 0x80, 'texels below alpha 4 are discarded'
    b = Build(out)
    b.body_alpha = body_alpha
    os.makedirs(out, exist_ok=True)
    json.dump(bonemap_doc(b.rp), open(os.path.join(out, 'bonemap.json'), 'w'), indent=1)
    report = {'scale': b.rp.scale, 'notes': b.rp.notes, 'shell_matched': len(b.shell_match),
              'shell_tris': len(b.kinds['shell']), 'variants': {}}
    for opaque, name in ((False, 'cham'), (True, 'cham_opaque')):
        rec = b.triangles(opaque)
        W = b.prune(rec)
        groups = b.meshes(rec, W, opaque)
        pme = b.model_bytes(groups, opaque)
        pages = b.pages(opaque)
        pwf = b.pwf_bytes_for(pages)
        open(os.path.join(out, name + '.pme2'), 'wb').write(pme)
        open(os.path.join(out, name + '.pwf'), 'wb').write(pwf)
        ok = check_files(pme, pwf, name)
        _, cluts = decode_pwf(pwf)
        st = b.mesh_stats
        info = {'pme2_bytes': len(pme), 'pwf_bytes': len(pwf), 'meshes': len(st),
                'vertices': sum(s[3] for s in st), 'triangles': sum(s[4] for s in st),
                'per_group': {g: [sum(1 for s in st if s[0] == g), sum(s[3] for s in st if s[0] == g),
                                  sum(s[4] for s in st if s[0] == g)] for g in sorted({s[0] for s in st})},
                'bones_per_mesh': np.bincount([s[2] for s in st]).tolist(),
                'per_material_tris': {mt: sum(s[4] for s in st if s[1] == mt) for mt in sorted({s[1] for s in st})},
                'strips': sum(s[5] for s in st), 'max_mesh_verts': max(s[3] for s in st),
                'max_mesh_tris': max(s[4] for s in st), 'max_bind_error_units': round(max(s[6] for s in st), 3),
                'prune': b.prune_stats, 'roundtrip': ok,
                'clut_fnv1a64': {p: '%016x' % fnv1a(np.asarray(cluts[p])[[swizzle(i) for i in range(256)]].tobytes())
                                 for p in range(len(cluts))}}
        if opaque:
            info['quilt_mean_abs_err_rgb'] = round(b.quilt_err, 2)
        report['variants'][name] = info
        clut_doc = {'page': 2, 'hues': HUES, 'first_index': 1, 'fixed_from': FIXED0, 'disc_phase_rows': PHASE,
                    'rule': 'index 1 + 32*block + hue shows rows (4*hue + 2 + phase) % 128 of its source: colour = k * '
                            'source[row] + add, alpha fixed per block; entries >= fixed_from never rotate. Rotating '
                            'every block by one hue = +4 rows = 62.5 frames of MKA (0.0005 v/frame). The stored CLUT '
                            'is CSM1: logical i at stored (i & ~0x18) | ((i & 8) << 1) | ((i & 0x10) >> 1).',
                    'blocks': b.blocks, 'fixed': [{'index': FIXED0 + i, 'rgb': [round(float(x)) for x in rgb],
                                                   'alpha': a} for i, (rgb, a) in enumerate(b.fixed)],
                    'cham_grad': np.rint(gradients()[0]).astype(int).tolist(),
                    'eye_sat': np.rint(gradients()[1]).astype(int).tolist()}
        json.dump(clut_doc, open(os.path.join(out, name + '_clut.json'), 'w'), indent=1)
    json.dump(report, open(os.path.join(out, 'cham_report.json'), 'w'), indent=1, default=str)
    print(json.dumps(report, indent=1, default=str))
    return report


def previews(out=OUT):
    paths = [compare_sheet(out)]
    for name, blend in (('cham', (0, 5)), ('cham_opaque', ())):
        pme = open(os.path.join(out, name + '.pme2'), 'rb').read()
        pwf = open(os.path.join(out, name + '.pwf'), 'rb').read()
        title = 'layered (skin, shell blended by CLUT alpha)' if blend else 'opaque fallback'
        paths.append(preview_sheet(out, name + '_preview.png', pme, pwf, blend, title))
    pme = open(os.path.join(out, 'cham_opaque.pme2'), 'rb').read()
    pwf = open(os.path.join(out, 'cham_opaque.pwf'), 'rb').read()
    paths.append(skeleton_sheet(out, pme, pwf))
    paths.append(posed_sheet(out, pme, pwf))
    print('\n'.join(paths))
    return paths


def main(argv):
    if not argv or argv[0] not in ('build', 'check', 'preview'):
        print(__doc__)
        return 2
    body_alpha = BODY_ALPHA
    if '--body-alpha' in argv:
        k = argv.index('--body-alpha')
        body_alpha = int(argv[k + 1], 0)
        argv = argv[:k] + argv[k + 2:]
    out = argv[1] if len(argv) > 1 else OUT
    if argv[0] == 'build':
        build(out, body_alpha)
        previews(out)
    elif argv[0] == 'check':
        ok = True
        for name in ('cham', 'cham_opaque'):
            ok &= check_files(open(os.path.join(out, name + '.pme2'), 'rb').read(),
                              open(os.path.join(out, name + '.pwf'), 'rb').read(), name)
        return 0 if ok else 1
    else:
        previews(out)
    return 0


if __name__ == '__main__':
    sys.exit(main(sys.argv[1:]))
