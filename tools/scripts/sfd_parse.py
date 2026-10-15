#!/usr/bin/env python3
"""sfd_parse.py - CRI Sofdec (.SFD) analyser (stdlib only).

Demuxes the MPEG-1/2 program (pack) stream, reassembles the video elementary
stream and gathers MPEG-1/MPEG-2 video header statistics (sequence/GOP/picture
headers, all extensions, slice start codes), and decodes ADX/AHX audio headers
found in the audio/private streams.  Purpose: decide which PS2 IPU decode paths
(alternate_scan, q_scale_type, intra_vlc_format, field pictures/DCT,
intra_dc_precision, custom quant matrices, P/B pictures) are exercised.

Usage:
  sfd_parse.py [FILE|-] [--name NAME] [--json OUT.json] [--mb N] [--quiet]
      Analyse one stream (stdin when FILE is omitted or '-').
      --mb N   full macroblock VLC parse of the first N I pictures (dct_type,
               macroblock_type, quantiser_scale_code usage; MPEG-2 4:2:0 only).
  sfd_parse.py --summary A.json B.json ...
      Print a compact per-file table plus the union of features.

Example (streamed straight from the ISO, nothing written to disk):
  bsdtar -xOf iso/mksm.iso FRONT/MOVIES/MIDWAY.SFD | python3 -I sfd_parse.py
"""
import sys
import json
import zlib
import argparse
from collections import Counter, OrderedDict

ZIGZAG = [0, 1, 8, 16, 9, 2, 3, 10, 17, 24, 32, 25, 18, 11, 4, 5,
          12, 19, 26, 33, 40, 48, 41, 34, 27, 20, 13, 6, 7, 14, 21, 28,
          35, 42, 49, 56, 57, 50, 43, 36, 29, 22, 15, 23, 30, 37, 44, 51,
          58, 59, 52, 45, 38, 31, 39, 46, 53, 60, 61, 54, 47, 55, 62, 63]
DEFAULT_INTRA = [8, 16, 19, 22, 26, 27, 29, 34,
                 16, 16, 22, 24, 27, 29, 34, 37,
                 19, 22, 26, 27, 29, 34, 34, 38,
                 22, 22, 26, 27, 29, 34, 37, 40,
                 22, 26, 27, 29, 32, 35, 40, 48,
                 26, 27, 29, 32, 35, 40, 48, 58,
                 26, 27, 29, 34, 38, 46, 56, 69,
                 27, 29, 35, 38, 46, 56, 69, 83]
DEFAULT_NONINTRA = [16] * 64
FRAME_RATES = {1: 23.976, 2: 24.0, 3: 25.0, 4: 29.97, 5: 30.0, 6: 50.0, 7: 59.94, 8: 60.0}
PCT = {1: 'I', 2: 'P', 3: 'B', 4: 'D'}
PSTRUCT = {1: 'top_field', 2: 'bottom_field', 3: 'frame'}
EXT_NAMES = {1: 'sequence', 2: 'sequence_display', 3: 'quant_matrix', 4: 'copyright',
             5: 'sequence_scalable', 7: 'picture_display', 8: 'picture_coding',
             9: 'picture_spatial_scalable', 10: 'picture_temporal_scalable'}
NO_PES_HEADER = {0xBC, 0xBE, 0xBF, 0xF0, 0xF1, 0xF2, 0xF8, 0xFF}
PCE_FIELDS = ['f_code', 'intra_dc_precision', 'picture_structure', 'top_field_first',
              'frame_pred_frame_dct', 'concealment_motion_vectors', 'q_scale_type',
              'intra_vlc_format', 'alternate_scan', 'repeat_first_field',
              'chroma_420_type', 'progressive_frame', 'composite_display_flag']


class Bits:
    """MSB-first bit reader over a bytes object (peek up to 32 bits)."""
    __slots__ = ('d', 'p', 'n')

    def __init__(self, data, bytepos=0):
        self.d = bytes(data) + b'\x00' * 8
        self.p = bytepos * 8
        self.n = len(data) * 8

    def peek(self, k):
        p = self.p
        i = p >> 3
        w = int.from_bytes(self.d[i:i + 5], 'big')
        return (w >> (40 - (p & 7) - k)) & ((1 << k) - 1)

    def u(self, k):
        if k > 32:
            hi = self.u(k - 32)
            return (hi << 32) | self.u(32)
        v = self.peek(k)
        self.p += k
        return v

    def skip(self, k):
        self.p += k

    def left(self):
        return self.n - self.p


def read_matrix(b):
    zz = [b.u(8) for _ in range(64)]
    nat = [0] * 64
    for i, v in enumerate(zz):
        nat[ZIGZAG[i]] = v
    return nat


def mat_rows(m):
    return [' '.join('%3d' % m[r * 8 + c] for c in range(8)) for r in range(8)]


def hist(c):
    return OrderedDict(sorted((str(k), v) for k, v in c.items()))


# --------------------------------------------------------------------------
# Optional macroblock-level parser (I pictures only, MPEG-2, 4:2:0)
# --------------------------------------------------------------------------
def _build_vlc(table):
    """table: list of (bitstring, value) -> dict keyed by (length, code)."""
    d = {}
    maxlen = 0
    for bits, val in table:
        d[(len(bits), int(bits, 2))] = val
        maxlen = max(maxlen, len(bits))
    return d, maxlen


# B.1 macroblock_address_increment ('ESC' = 0000 0001 000 -> +33)
_MBA = [('1', 1), ('011', 2), ('010', 3), ('0011', 4), ('0010', 5), ('00011', 6),
        ('00010', 7), ('0000111', 8), ('0000110', 9), ('00001011', 10),
        ('00001010', 11), ('00001001', 12), ('00001000', 13), ('00000111', 14),
        ('00000110', 15), ('0000010111', 16), ('0000010110', 17),
        ('0000010101', 18), ('0000010100', 19), ('0000010011', 20),
        ('0000010010', 21), ('00000100011', 22), ('00000100010', 23),
        ('00000100001', 24), ('00000100000', 25), ('00000011111', 26),
        ('00000011110', 27), ('00000011101', 28), ('00000011100', 29),
        ('00000011011', 30), ('00000011010', 31), ('00000011001', 32),
        ('00000011000', 33), ('00000001000', 'ESC'), ('00000001111', 'STUFF')]
# B.12 / B.13 dct_dc_size
_DCL = [('100', 0), ('00', 1), ('01', 2), ('101', 3), ('110', 4), ('1110', 5),
        ('11110', 6), ('111110', 7), ('1111110', 8), ('11111110', 9),
        ('111111110', 10), ('111111111', 11)]
_DCC = [('00', 0), ('01', 1), ('10', 2), ('110', 3), ('1110', 4), ('11110', 5),
        ('111110', 6), ('1111110', 7), ('11111110', 8), ('111111110', 9),
        ('1111111110', 10), ('1111111111', 11)]
# B.14 (run, level) without sign bit; '10' = EOB (not first coeff), '000001' = ESC
_B14 = [('11', (0, 1)), ('011', (1, 1)), ('0100', (0, 2)), ('0101', (2, 1)),
        ('00101', (0, 3)), ('00111', (3, 1)), ('00110', (4, 1)),
        ('000110', (1, 2)), ('000111', (5, 1)), ('000101', (6, 1)), ('000100', (7, 1)),
        ('0000110', (0, 4)), ('0000100', (2, 2)), ('0000111', (8, 1)), ('0000101', (9, 1)),
        ('00100110', (0, 5)), ('00100001', (0, 6)), ('00100101', (1, 3)), ('00100100', (3, 2)),
        ('00100111', (10, 1)), ('00100011', (11, 1)), ('00100010', (12, 1)), ('00100000', (13, 1)),
        ('0000001010', (0, 7)), ('0000001100', (1, 4)), ('0000001011', (2, 3)),
        ('0000001111', (4, 2)), ('0000001001', (5, 2)), ('0000001110', (14, 1)),
        ('0000001101', (15, 1)), ('0000001000', (16, 1)),
        ('000000011101', (0, 8)), ('000000011000', (0, 9)), ('000000010011', (0, 10)),
        ('000000010000', (0, 11)), ('000000011011', (1, 5)), ('000000010100', (2, 4)),
        ('000000011100', (3, 3)), ('000000010010', (4, 3)), ('000000011110', (6, 2)),
        ('000000010101', (7, 2)), ('000000010001', (8, 2)), ('000000011111', (17, 1)),
        ('000000011010', (18, 1)), ('000000011001', (19, 1)), ('000000010111', (20, 1)),
        ('000000010110', (21, 1)),
        ('0000000011010', (0, 12)), ('0000000011001', (0, 13)), ('0000000011000', (0, 14)),
        ('0000000010111', (0, 15)), ('0000000010110', (1, 6)), ('0000000010101', (1, 7)),
        ('0000000010100', (2, 5)), ('0000000010011', (3, 4)), ('0000000010010', (5, 3)),
        ('0000000010001', (9, 2)), ('0000000010000', (10, 2)), ('0000000011111', (22, 1)),
        ('0000000011110', (23, 1)), ('0000000011101', (24, 1)), ('0000000011100', (25, 1)),
        ('0000000011011', (26, 1)),
        ('00000000011111', (0, 16)), ('00000000011110', (0, 17)), ('00000000011101', (0, 18)),
        ('00000000011100', (0, 19)), ('00000000011011', (0, 20)), ('00000000011010', (0, 21)),
        ('00000000011001', (0, 22)), ('00000000011000', (0, 23)), ('00000000010111', (0, 24)),
        ('00000000010110', (0, 25)), ('00000000010101', (0, 26)), ('00000000010100', (0, 27)),
        ('00000000010011', (0, 28)), ('00000000010010', (0, 29)), ('00000000010001', (0, 30)),
        ('00000000010000', (0, 31)),
        ('000000000011000', (0, 32)), ('000000000010111', (0, 33)), ('000000000010110', (0, 34)),
        ('000000000010101', (0, 35)), ('000000000010100', (0, 36)), ('000000000010011', (0, 37)),
        ('000000000010010', (0, 38)), ('000000000010001', (0, 39)), ('000000000010000', (0, 40)),
        ('000000000011111', (1, 8)), ('000000000011110', (1, 9)), ('000000000011101', (1, 10)),
        ('000000000011100', (1, 11)), ('000000000011011', (1, 12)), ('000000000011010', (1, 13)),
        ('000000000011001', (1, 14)),
        ('0000000000010011', (1, 15)), ('0000000000010010', (1, 16)), ('0000000000010001', (1, 17)),
        ('0000000000010000', (1, 18)), ('0000000000010100', (6, 3)), ('0000000000011010', (11, 2)),
        ('0000000000011001', (12, 2)), ('0000000000011000', (13, 2)), ('0000000000010111', (14, 2)),
        ('0000000000010110', (15, 2)), ('0000000000010101', (16, 2)), ('0000000000011111', (27, 1)),
        ('0000000000011110', (28, 1)), ('0000000000011101', (29, 1)), ('0000000000011100', (30, 1)),
        ('0000000000011011', (31, 1))]
# B.15 differs from B.14 for these codes (identical for the 0000 0000 01..0000 0000 0001 1111 tail
# except listed); built as full table for intra_vlc_format=1. '0110' = EOB.
_B15 = [('10', (0, 1)), ('010', (1, 1)), ('110', (0, 2)), ('00101', (2, 1)), ('0111', (0, 3)),
        ('00111', (3, 1)), ('000110', (4, 1)), ('00110', (1, 2)), ('000111', (5, 1)),
        ('0000110', (6, 1)), ('0000100', (7, 1)), ('11100', (0, 4)), ('0000111', (2, 2)),
        ('0000101', (8, 1)), ('1111000', (9, 1)), ('11101', (0, 5)), ('000101', (0, 6)),
        ('1111001', (1, 3)), ('00100110', (3, 2)), ('1111010', (10, 1)), ('00100001', (11, 1)),
        ('00100101', (12, 1)), ('00100100', (13, 1)), ('000100', (0, 7)), ('00100111', (1, 4)),
        ('11111100', (2, 3)), ('11111101', (4, 2)), ('000000100', (5, 2)), ('000000101', (14, 1)),
        ('000000111', (15, 1)), ('0000001101', (16, 1)), ('1111011', (0, 8)), ('1111100', (0, 9)),
        ('00100011', (0, 10)), ('00100010', (0, 11)), ('00100000', (1, 5)), ('0000001100', (2, 4)),
        ('000000011100', (3, 3)), ('000000010010', (4, 3)), ('000000011110', (6, 2)),
        ('000000010101', (7, 2)), ('000000010001', (8, 2)), ('000000011111', (17, 1)),
        ('000000011010', (18, 1)), ('000000011001', (19, 1)), ('000000010111', (20, 1)),
        ('000000010110', (21, 1)), ('11111010', (0, 12)), ('11111011', (0, 13)),
        ('11111110', (0, 14)), ('11111111', (0, 15)), ('0000000010110', (1, 6)),
        ('0000000010101', (1, 7)), ('0000000010100', (2, 5)), ('0000000010011', (3, 4)),
        ('0000000010010', (5, 3)), ('0000000010001', (9, 2)), ('0000000010000', (10, 2)),
        ('0000000011111', (22, 1)), ('0000000011110', (23, 1)), ('0000000011101', (24, 1)),
        ('0000000011100', (25, 1)), ('0000000011011', (26, 1))]
_B15 += [e for e in _B14 if len(e[0]) >= 14]
_VLC = {}


def _vlc(name):
    if name not in _VLC:
        _VLC[name] = _build_vlc({'mba': _MBA, 'dcl': _DCL, 'dcc': _DCC,
                                 'b14': _B14, 'b15': _B15}[name])
    return _VLC[name]


def _get(b, name):
    d, maxlen = _vlc(name)
    for n in range(1, maxlen + 1):
        v = d.get((n, b.peek(n)))
        if v is not None:
            b.skip(n)
            return v
    raise ValueError('bad VLC %s at bit %d' % (name, b.p))


def _intra_block(b, chroma, b15, st):
    """Parse one intra block; returns number of AC coefficients."""
    size = _get(b, 'dcc' if chroma else 'dcl')
    if size > st['dc_size_max']:
        st['dc_size_max'] = size
    b.skip(size)
    n = 0
    tab = 'b15' if b15 else 'b14'
    eob = '0110' if b15 else '10'
    el = len(eob)
    eobv = int(eob, 2)
    idx = 1
    while True:
        if b.peek(el) == eobv:
            b.skip(el)
            return n
        if b.peek(6) == 1:  # escape: 6 run + 12 level
            b.skip(6)
            st['escapes'] += 1
            run = b.u(6)
            lvl = b.u(12)
            if lvl == 0 or lvl == 0x800:
                raise ValueError('forbidden escape level')
        else:
            run, lvl = _get(b, tab)
            b.skip(1)  # sign
        idx += run + 1
        n += 1
        if idx > 64:
            raise ValueError('coefficient index overflow')


def parse_intra_slice(data, pic, seq_mpeg2, qscale_type):
    """Parse all macroblocks of an I-picture slice. data = bytes after slice start code."""
    b = Bits(data)
    st = Counter()
    b.skip(5)  # quantiser_scale_code
    if b.peek(1):
        b.skip(1 + 1 + 1 + 7)  # intra_slice_flag, intra_slice, reserved
        while b.peek(1):
            b.skip(9)
    b.skip(1)
    pce = pic.get('pce') or {}
    fpfd = pce.get('frame_pred_frame_dct', 1)
    pstruct = pce.get('picture_structure', 3)
    b15 = pce.get('intra_vlc_format', 0)
    conceal = pce.get('concealment_motion_vectors', 0)
    first = True
    j = len(data) - 1
    while j >= 0 and data[j] == 0:
        j -= 1
    end_bit = j * 8 + 8 - ((data[j] & -data[j]).bit_length() - 1) if j >= 0 else 0
    nmb = 0
    while b.p < end_bit:
        inc = 0
        while True:
            v = _get(b, 'mba')
            if v == 'ESC':
                inc += 33
            elif v == 'STUFF':
                continue
            else:
                inc += v
                break
        if not first and inc != 1:
            st['skipped_mb_in_I(!)'] += 1
        first = False
        # macroblock_type for I pictures: '1' intra, '01' intra+quant
        if b.peek(1):
            b.skip(1)
            quant = 0
        elif b.peek(2) == 1:
            b.skip(2)
            quant = 1
        else:
            raise ValueError('bad I macroblock_type')
        st['mb'] += 1
        nmb += 1
        if seq_mpeg2 and pstruct == 3 and not fpfd:
            dt = b.u(1)
            st['dct_type=%d' % dt] += 1
        if quant:
            st['mb_quant'] += 1
            st['qsc=%d' % b.u(5)] += 1
        if conceal:
            raise ValueError('concealment MVs not supported by this parser')
        for blk in range(6):
            st['ac_coeffs'] += _intra_block(b, blk >= 4, b15 and seq_mpeg2, st)
    st['mbs_per_slice=%d' % nmb] += 1
    if b.p - end_bit > 8:
        raise ValueError('overran slice end by %d bits' % (b.p - end_bit))
    return st


# --------------------------------------------------------------------------
# Video elementary stream analyser
# --------------------------------------------------------------------------
class Video:
    def __init__(self, mb_pics=0, mb_every=1):
        self.buf = bytearray()
        self.total = 0
        self.units = Counter()
        self.seq_count = 0
        self.seq_variants = OrderedDict()   # json key -> count
        self.seq_ext = OrderedDict()
        self.seq_disp = OrderedDict()
        self.quant_ext = OrderedDict()
        self.matrices = OrderedDict()       # (kind, tuple) -> count
        self.ext_ids = Counter()
        self.user_data = Counter()
        self.gops = []
        self.pics = []
        self.cur = None
        self.after = None                   # 'seq' | 'gop' | 'pic'
        self.slice_q = Counter()
        self.slice_extra = Counter()
        self.seq_end = 0
        self.mpeg2 = False
        self.vsize = 0
        self.errors = Counter()
        self.mb_pics = mb_pics
        self.mb_every = max(1, mb_every)
        self.n_i = 0
        self.mb_done = 0
        self.mb_stats = Counter()
        self.mb_errors = []
        self.mb_slice_buf = None

    def feed(self, chunk):
        self.buf += chunk
        self.total += len(chunk)
        if len(self.buf) >= (1 << 20):
            self._process(False)

    def finish(self):
        self._process(True)
        self._close_pic()
        if self.gops:
            self.gops[-1]['types'] = self.gops[-1]['types']

    def _process(self, final):
        buf = self.buf
        find = buf.find
        pos = find(b'\x00\x00\x01')
        if pos < 0:
            if final:
                self.errors['trailing_garbage_bytes'] += len(buf)
                buf.clear()
            else:
                del buf[:max(0, len(buf) - 3)]
            return
        if pos > 0:
            self.errors['bytes_before_startcode'] += pos
        while True:
            k = find(b'\x00\x00\x01', pos + 4)
            if k < 0:
                if final and len(buf) > pos + 3:
                    self._unit(buf[pos + 3], buf, pos + 4, len(buf))
                    pos = len(buf)
                break
            self._unit(buf[pos + 3], buf, pos + 4, k)
            pos = k
        del buf[:pos]

    # ---- per start code ---------------------------------------------------
    def _close_pic(self):
        if self.cur is not None:
            if self.cur.get('mb_parsed'):
                self.mb_done += 1
            self.pics.append(self.cur)
            if self.gops:
                self.gops[-1]['types'] += PCT.get(self.cur['type'], '?')
            self.cur = None

    def _unit(self, code, buf, s, e):
        self.units[code] += 1
        if 0x01 <= code <= 0xAF:
            self._slice(code, buf, s, e)
            return
        data = bytes(buf[s:min(e, s + 400)])
        b = Bits(data)
        if code == 0x00:
            self._close_pic()
            tr = b.u(10)
            t = b.u(3)
            b.u(16)
            p = {'tr': tr, 'type': t, 'slices': 0, 'rows': set(), 'q0': None, 'intra_slice_flag': 0,
                 'pce': None}
            if t in (2, 3):
                p['fwd'] = (b.u(1), b.u(3))
            if t == 3:
                p['bwd'] = (b.u(1), b.u(3))
            if t == 1:
                p['i_index'] = self.n_i
                self.n_i += 1
            self.cur = p
            self.after = 'pic'
        elif code == 0xB3:
            self._close_pic()
            self.seq_count += 1
            h = OrderedDict()
            h['horizontal_size'] = b.u(12)
            h['vertical_size'] = b.u(12)
            h['aspect_ratio_information'] = b.u(4)
            h['frame_rate_code'] = b.u(4)
            h['bit_rate_value'] = b.u(18)
            h['marker'] = b.u(1)
            h['vbv_buffer_size_value'] = b.u(10)
            h['constrained_parameters_flag'] = b.u(1)
            h['load_intra_quantiser_matrix'] = b.u(1)
            if h['load_intra_quantiser_matrix']:
                m = read_matrix(b)
                self._mat('seq_intra', m)
                h['intra_matrix_default'] = (m == DEFAULT_INTRA)
            h['load_non_intra_quantiser_matrix'] = b.u(1)
            if h['load_non_intra_quantiser_matrix']:
                m = read_matrix(b)
                self._mat('seq_non_intra', m)
                h['non_intra_matrix_default'] = (m == DEFAULT_NONINTRA)
            self.vsize = h['vertical_size']
            k = json.dumps(h)
            self.seq_variants[k] = self.seq_variants.get(k, 0) + 1
            self.after = 'seq'
        elif code == 0xB5:
            eid = b.u(4)
            self.ext_ids['%s(%d)/after_%s' % (EXT_NAMES.get(eid, 'ext'), eid, self.after)] += 1
            if eid == 1:
                self.mpeg2 = True
                x = OrderedDict()
                x['profile_and_level_indication'] = '0x%02X' % b.u(8)
                x['progressive_sequence'] = b.u(1)
                x['chroma_format'] = b.u(2)
                x['horizontal_size_extension'] = b.u(2)
                x['vertical_size_extension'] = b.u(2)
                x['bit_rate_extension'] = b.u(12)
                b.u(1)
                x['vbv_buffer_size_extension'] = b.u(8)
                x['low_delay'] = b.u(1)
                x['frame_rate_extension_n'] = b.u(2)
                x['frame_rate_extension_d'] = b.u(5)
                k = json.dumps(x)
                self.seq_ext[k] = self.seq_ext.get(k, 0) + 1
            elif eid == 2:
                x = OrderedDict()
                x['video_format'] = b.u(3)
                cd = b.u(1)
                if cd:
                    x['colour_primaries'] = b.u(8)
                    x['transfer_characteristics'] = b.u(8)
                    x['matrix_coefficients'] = b.u(8)
                x['display_horizontal_size'] = b.u(14)
                b.u(1)
                x['display_vertical_size'] = b.u(14)
                k = json.dumps(x)
                self.seq_disp[k] = self.seq_disp.get(k, 0) + 1
            elif eid == 3:
                x = OrderedDict()
                for nm in ('intra', 'non_intra', 'chroma_intra', 'chroma_non_intra'):
                    f = b.u(1)
                    x['load_' + nm] = f
                    if f:
                        self._mat('qmx_' + nm, read_matrix(b))
                k = json.dumps(x)
                self.quant_ext[k] = self.quant_ext.get(k, 0) + 1
            elif eid == 8:
                x = OrderedDict()
                x['f_code'] = '%X%X%X%X' % (b.u(4), b.u(4), b.u(4), b.u(4))
                x['intra_dc_precision'] = 8 + b.u(2)
                x['picture_structure'] = b.u(2)
                for nm in PCE_FIELDS[3:]:
                    x[nm] = b.u(1)
                if self.cur is not None:
                    self.cur['pce'] = x
                else:
                    self.errors['pce_without_picture'] += 1
        elif code == 0xB8:
            self._close_pic()
            tc = b.u(25)
            g = {'closed_gop': b.u(1), 'broken_link': b.u(1), 'types': '',
                 'time_code': '%02d:%02d:%02d.%02d%s' % ((tc >> 19) & 31, (tc >> 13) & 63,
                                                        (tc >> 6) & 63, tc & 63,
                                                        ' df' if tc >> 24 else '')}
            self.gops.append(g)
            self.after = 'gop'
        elif code == 0xB2:
            self.user_data['after_%s' % self.after] += 1
            if self.user_data['samples'] < 3:
                self.user_data['samples'] += 1
                self.user_data['sample:' + data[:32].hex()] += 1
        elif code == 0xB7:
            self._close_pic()
            self.seq_end += 1
            self.after = None
        else:
            self.errors['unexpected_startcode_%02X' % code] += 1

    def _mat(self, kind, m):
        k = (kind, tuple(m))
        self.matrices[k] = self.matrices.get(k, 0) + 1

    def _slice(self, code, buf, s, e):
        p = self.cur
        if p is None:
            self.errors['slice_without_picture'] += 1
            return
        p['slices'] += 1
        p['rows'].add(code)
        b0 = buf[s]
        b1 = buf[s + 1] if e > s + 1 else 0
        q = b0 >> 3
        self.slice_q[q] += 1
        extra = (b0 >> 2) & 1
        if p['q0'] is None:
            p['q0'] = q
            p['intra_slice_flag'] = extra
        if extra:
            # MPEG-2: intra_slice_flag=1 then intra_slice bit; MPEG-1: extra_information_slice
            self.slice_extra['extra_bit_set' + ('/intra_slice=%d' % ((b0 >> 1) & 1) if self.mpeg2 else '')] += 1
        else:
            self.slice_extra['no_extra'] += 1
        if (self.mb_pics and self.mb_done < self.mb_pics and p['type'] == 1
                and p['i_index'] % self.mb_every == 0):
            try:
                st = parse_intra_slice(bytes(buf[s:e]), p, self.mpeg2, None)
                dmax = st.pop('dc_size_max', 0)
                self.mb_stats.update(st)
                if dmax > self.mb_stats['dc_size_max']:
                    self.mb_stats['dc_size_max'] = dmax
                self.mb_stats['slices_ok'] += 1
            except Exception as ex:  # noqa: BLE001
                self.mb_stats['slices_failed'] += 1
                if len(self.mb_errors) < 5:
                    self.mb_errors.append('pic#%d row %d: %s' % (len(self.pics), code, ex))
            p['mb_parsed'] = True

    # ---- summarising ------------------------------------------------------
    def summary(self):
        out = OrderedDict()
        out['es_bytes'] = self.total
        out['mpeg'] = 'MPEG-2' if self.mpeg2 else 'MPEG-1'
        out['sequence_headers'] = self.seq_count
        out['sequence_header_variants'] = [dict(json.loads(k), count=v) for k, v in self.seq_variants.items()]
        out['sequence_extension_variants'] = [dict(json.loads(k), count=v) for k, v in self.seq_ext.items()]
        out['sequence_display_extension_variants'] = [dict(json.loads(k), count=v) for k, v in self.seq_disp.items()]
        out['quant_matrix_extension_variants'] = [dict(json.loads(k), count=v) for k, v in self.quant_ext.items()]
        mats = []
        for (kind, m), v in self.matrices.items():
            dflt = list(m) == (DEFAULT_INTRA if 'non' not in kind else DEFAULT_NONINTRA)
            mats.append({'kind': kind, 'count': v, 'is_default': dflt, 'natural_order': mat_rows(m)})
        out['quant_matrices_loaded'] = mats
        out['custom_quant_matrix'] = any(not x['is_default'] for x in mats)
        out['extension_ids'] = hist(self.ext_ids)
        out['user_data'] = hist(self.user_data)
        out['sequence_end_codes'] = self.seq_end
        out['startcode_counts'] = OrderedDict(
            [('picture', self.units[0]), ('slice', sum(v for k, v in self.units.items() if 1 <= k <= 0xAF)),
             ('user_data', self.units[0xB2]), ('sequence_header', self.units[0xB3]),
             ('extension', self.units[0xB5]), ('sequence_end', self.units[0xB7]), ('gop', self.units[0xB8])])
        out['errors'] = hist(self.errors)
        pics = self.pics
        out['pictures'] = len(pics)
        out['all'] = self._pic_stats(pics)
        out['first100'] = self._pic_stats(pics[:100])
        out['first100_differs'] = any(
            set(out['all'][k]) != set(out['first100'][k]) for k in out['all'] if isinstance(out['all'][k], dict))
        # GOPs
        gl = Counter(len(g['types']) for g in self.gops)
        gp = Counter(g['types'] for g in self.gops)
        out['gops'] = len(self.gops)
        out['gop_closed'] = hist(Counter(g['closed_gop'] for g in self.gops))
        out['gop_broken_link'] = hist(Counter(g['broken_link'] for g in self.gops))
        out['gop_length_hist'] = hist(gl)
        out['gop_patterns_coded_order_top'] = [[k, v] for k, v in gp.most_common(6)]
        out['first_gop_time_code'] = self.gops[0]['time_code'] if self.gops else None
        out['slice_quantiser_scale_code_hist_all_slices'] = hist(self.slice_q)
        out['slice_extra_bits'] = hist(self.slice_extra)
        # duration
        fr = None
        if self.seq_variants:
            fr = FRAME_RATES.get(json.loads(next(iter(self.seq_variants)))['frame_rate_code'])
        if fr:
            fields = 0
            for p in pics:
                x = p['pce']
                if x is None:
                    fields += 2
                elif x['picture_structure'] != 3:
                    fields += 1
                else:
                    fields += 2 + x['repeat_first_field']
            out['duration_s'] = round(fields / 2 / fr, 3)
        if self.mb_pics:
            out['mb_parse'] = OrderedDict([('I_pictures_parsed', self.mb_done), ('every_nth_I', self.mb_every),
                                           ('stats', hist(self.mb_stats)), ('errors', self.mb_errors)])
        return out

    @staticmethod
    def _pic_stats(pics):
        s = OrderedDict()
        s['picture_coding_type'] = hist(Counter(PCT.get(p['type'], str(p['type'])) for p in pics))
        s['slices_per_picture'] = hist(Counter(p['slices'] for p in pics))
        s['slice_rows_span'] = hist(Counter('%d-%d' % (min(p['rows']), max(p['rows'])) if p['rows'] else 'none'
                                            for p in pics))
        s['first_slice_quantiser_scale_code'] = hist(Counter(p['q0'] for p in pics))
        s['first_slice_extra_bit'] = hist(Counter(p['intra_slice_flag'] for p in pics))
        s['picture_coding_extension_present'] = hist(Counter(p['pce'] is not None for p in pics))
        s['mpeg1_forward_f_code'] = hist(Counter('%s:full_pel=%d,f=%d' % (PCT[p['type']], *p['fwd'])
                                                 for p in pics if 'fwd' in p))
        s['mpeg1_backward_f_code'] = hist(Counter('full_pel=%d,f=%d' % p['bwd'] for p in pics if 'bwd' in p))
        for f in PCE_FIELDS:
            c = Counter()
            for p in pics:
                if p['pce'] is not None:
                    v = p['pce'][f]
                    if f == 'f_code':
                        t = PCT.get(p['type'], '?')
                        for i, nm in enumerate(('f00', 'f01', 'f10', 'f11')):
                            c['%s.%s=%s' % (t, nm, v[i])] += 1
                        continue
                    c[v] += 1
            s['pce.' + f] = hist(c)
        return s


# --------------------------------------------------------------------------
# ADX header
# --------------------------------------------------------------------------
def parse_adx(d):
    if len(d) < 20 or d[0] != 0x80 or d[1] != 0x00:
        return None
    off = int.from_bytes(d[2:4], 'big')
    r = OrderedDict()
    r['copyright_offset'] = off
    r['data_offset'] = off + 4
    r['copyright'] = bytes(d[off - 2:off + 4]).decode('latin1') if off + 4 <= len(d) else None
    enc = d[4]
    r['encoding_type'] = enc
    r['encoding_name'] = {2: 'ADX fixed-coef', 3: 'ADX standard', 4: 'ADX exponential',
                          0x10: 'AHX', 0x11: 'AHX'}.get(enc, 'unknown')
    r['block_size'] = d[5]
    r['bits_per_sample'] = d[6]
    r['channels'] = d[7]
    r['sample_rate'] = int.from_bytes(d[8:12], 'big')
    r['total_samples'] = int.from_bytes(d[12:16], 'big')
    r['highpass_freq'] = int.from_bytes(d[16:18], 'big')
    r['version'] = d[18]
    r['flags'] = d[19]
    if r['sample_rate']:
        r['duration_s'] = round(r['total_samples'] / r['sample_rate'], 3)
    if r['version'] in (3, 4) and len(d) >= 0x2C:
        lo = 0x14 if r['version'] == 3 else 0x20
        r['loop_enabled'] = int.from_bytes(d[lo + 4:lo + 8], 'big') if lo + 24 <= len(d) else None
    return r


AC3_KBPS = [32, 40, 48, 56, 64, 80, 96, 112, 128, 160, 192, 224, 256, 320, 384, 448, 512, 576, 640]
AC3_ACMOD = ['1+1', '1/0', '2/0', '3/0', '2/1', '3/1', '2/2', '3/2']


def parse_ac3(d):
    """Detect an A/52 (AC-3) elementary stream (sync word 0x0B77)."""
    if len(d) < 8 or d[0] != 0x0B or d[1] != 0x77:
        return None
    fscod = d[4] >> 6
    frmsizecod = d[4] & 63
    if fscod != 0 or frmsizecod >> 1 >= len(AC3_KBPS):
        return {'sync': True, 'fscod': fscod, 'frmsizecod': frmsizecod}
    kbps = AC3_KBPS[frmsizecod >> 1]
    fb = kbps * 4  # 48 kHz: words = 2*kbps -> bytes = 4*kbps
    b = Bits(d[5:16])
    bsid = b.u(5)
    bsmod = b.u(3)
    acmod = b.u(3)
    if (acmod & 1) and acmod != 1:
        b.u(2)
    if acmod & 4:
        b.u(2)
    if acmod == 2:
        b.u(2)
    lfe = b.u(1)
    syncs = sum(1 for o in range(0, len(d) - 1, fb) if d[o] == 0x0B and d[o + 1] == 0x77)
    return OrderedDict([('codec', 'AC-3'), ('sample_rate', 48000), ('bitrate_kbps', kbps), ('frame_bytes', fb),
                        ('bsid', bsid), ('bsmod', bsmod), ('acmod', AC3_ACMOD[acmod]), ('lfeon', lfe),
                        ('channels', [2, 1, 2, 3, 3, 4, 4, 5][acmod] + lfe),
                        ('syncs_at_frame_spacing_in_head', syncs)])


# --------------------------------------------------------------------------
# Program stream demuxer
# --------------------------------------------------------------------------
class Demux:
    def __init__(self, video):
        self.video = video
        self.streams = {}
        self.packs = Counter()
        self.mux_rate = Counter()
        self.pack_sizes = Counter()
        self.sys_hdr = None
        self.sys_hdr_count = 0
        self.end_codes = 0
        self.resync_bytes = 0
        self.post_end_bytes = 0
        self.unexpected = Counter()
        self.offset = 0
        self.last_pack_off = None
        self.buf = bytearray()

    def _stream(self, sid):
        st = self.streams.get(sid)
        if st is None:
            st = self.streams[sid] = {'packets': 0, 'bytes': 0, 'payload': 0, 'hdr': Counter(),
                                      'pts': 0, 'dts': 0, 'first_pts': None, 'last_pts': None,
                                      'head': bytearray(), 'tail': bytearray(), 'crc': 0}
        return st

    def feed(self, chunk):
        self.buf += chunk
        self._run(False)

    def finish(self):
        self._run(True)
        if self.buf:
            self._junk(self.buf, 0, len(self.buf))

    def _junk(self, buf, pos, n):
        if self.end_codes and set(buf[pos:pos + n]) <= {0x00, 0xFF}:
            self.post_end_bytes += n
        else:
            self.resync_bytes += n

    def _run(self, final):
        buf = self.buf
        n = len(buf)
        pos = 0
        while True:
            if n - pos < 6:
                break
            if not (buf[pos] == 0 and buf[pos + 1] == 0 and buf[pos + 2] == 1):
                k = buf.find(b'\x00\x00\x01', pos)
                if k < 0:
                    skip = max(0, n - 2 - pos)
                    self._junk(buf, pos, skip)
                    pos += skip
                    break
                self._junk(buf, pos, k - pos)
                pos = k
                continue
            code = buf[pos + 3]
            if code == 0xBA:
                if n - pos < 16:
                    break
                b4 = buf[pos + 4]
                if (b4 >> 4) == 2:
                    self.packs['MPEG-1 (0010)'] += 1
                    mr = ((buf[pos + 9] & 0x7F) << 15) | (buf[pos + 10] << 7) | (buf[pos + 11] >> 1)
                    ln = 12
                elif (b4 >> 6) == 1:
                    self.packs['MPEG-2 (01)'] += 1
                    mr = (buf[pos + 10] << 14) | (buf[pos + 11] << 6) | (buf[pos + 12] >> 2)
                    ln = 14 + (buf[pos + 13] & 7)
                else:
                    self.packs['unknown'] += 1
                    mr = 0
                    ln = 4
                self.mux_rate[mr * 50] += 1
                o = self.offset + pos
                if self.last_pack_off is not None:
                    self.pack_sizes[o - self.last_pack_off] += 1
                self.last_pack_off = o
                pos += ln
            elif code == 0xB9:
                self.end_codes += 1
                pos += 4
            elif code >= 0xBB:
                ln = (buf[pos + 4] << 8) | buf[pos + 5]
                if n - pos < 6 + ln:
                    break
                body = buf[pos + 6:pos + 6 + ln]
                if code == 0xBB:
                    self.sys_hdr_count += 1
                    if self.sys_hdr is None:
                        self.sys_hdr = self._parse_sys(bytes(body))
                else:
                    self._pes(code, body, ln)
                pos += 6 + ln
            else:
                self.unexpected['startcode_%02X' % code] += 1
                pos += 3
        del buf[:pos]
        self.offset += pos

    @staticmethod
    def _parse_sys(b):
        r = OrderedDict()
        if len(b) < 6:
            return r
        r['rate_bound'] = ((b[0] & 0x7F) << 15 | b[1] << 7 | b[2] >> 1) * 50
        r['audio_bound'] = b[3] >> 2
        r['fixed_flag'] = (b[3] >> 1) & 1
        r['CSPS_flag'] = b[3] & 1
        r['system_audio_lock'] = b[4] >> 7
        r['system_video_lock'] = (b[4] >> 6) & 1
        r['video_bound'] = b[4] & 31
        ent = []
        i = 6
        while i + 3 <= len(b) and b[i] & 0x80:
            scale = (b[i + 1] >> 5) & 1
            size = ((b[i + 1] & 31) << 8) | b[i + 2]
            ent.append('0x%02X:%dB' % (b[i], size * (1024 if scale else 128)))
            i += 3
        r['stream_buffers'] = ent
        return r

    def _pes(self, sid, body, ln):
        st = self._stream(sid)
        st['packets'] += 1
        st['bytes'] += 6 + ln
        i = 0
        pts = None
        if sid in NO_PES_HEADER:
            st['hdr']['none'] += 1
        elif ln and (body[0] & 0xC0) == 0x80:
            st['hdr']['MPEG-2'] += 1
            flags = body[1] >> 6
            hdl = body[2]
            if flags & 2:
                pts = self._ts(body, 3)
            if flags == 3:
                st['dts'] += 1
            i = 3 + hdl
        else:
            kinds = []
            while i < ln and body[i] == 0xFF:
                i += 1
            if i:
                kinds.append('stuff')
            if i < ln and (body[i] & 0xC0) == 0x40:
                kinds.append('STD')
                i += 2
            c = body[i] if i < ln else -1
            if (c & 0xF0) == 0x20:
                pts = self._ts(body, i)
                kinds.append('PTS')
                i += 5
            elif (c & 0xF0) == 0x30:
                pts = self._ts(body, i)
                st['dts'] += 1
                kinds.append('PTS+DTS')
                i += 10
            elif c == 0x0F:
                kinds.append('0x0F')
                i += 1
            else:
                kinds.append('BAD')
            st['hdr']['MPEG-1:' + '+'.join(kinds)] += 1
        if pts is not None:
            st['pts'] += 1
            if st['first_pts'] is None:
                st['first_pts'] = pts
            st['last_pts'] = pts
        payload = body[i:]
        st['payload'] += len(payload)
        if len(st['head']) < 16384:
            st['head'] += payload[:16384 - len(st['head'])]
        if sid != 0xE0 and sid != 0xBE:
            st['tail'] = (st['tail'] + payload)[-64:]
            st['crc'] = zlib.crc32(payload, st['crc'])
        if sid == 0xE0:
            self.video.feed(payload)

    @staticmethod
    def _ts(b, i):
        return (((b[i] >> 1) & 7) << 30) | (b[i + 1] << 22) | ((b[i + 2] >> 1) << 15) | \
               (b[i + 3] << 7) | (b[i + 4] >> 1)

    def summary(self):
        out = OrderedDict()
        out['pack_headers'] = hist(self.packs)
        out['mux_rate_bps'] = hist(self.mux_rate)
        out['pack_size_hist'] = hist(Counter(dict(self.pack_sizes.most_common(4))))
        out['system_headers'] = self.sys_hdr_count
        out['system_header'] = self.sys_hdr
        out['program_end_codes'] = self.end_codes
        out['resync_bytes'] = self.resync_bytes
        out['pad_after_end_code'] = self.post_end_bytes
        out['unexpected'] = hist(self.unexpected)
        ss = OrderedDict()
        for sid in sorted(self.streams):
            st = self.streams[sid]
            d = OrderedDict()
            d['packets'] = st['packets']
            d['bytes'] = st['bytes']
            d['payload_bytes'] = st['payload']
            d['pes_header_forms'] = hist(st['hdr'])
            d['pts_count'] = st['pts']
            d['dts_count'] = st['dts']
            if st['first_pts'] is not None:
                d['pts_first_last_s'] = [round(st['first_pts'] / 90000, 3), round(st['last_pts'] / 90000, 3)]
            if sid != 0xE0 and sid != 0xBE:
                h = bytes(st['head'])
                d['head_hex'] = h[:32].hex()
                d['head_ascii'] = ''.join(chr(c) if 32 <= c < 127 else '.' for c in h[:64])
                d['payload_crc32'] = '%08X' % st['crc']
                ac3 = parse_ac3(h)
                if ac3:
                    ac3['est_duration_s'] = round(st['payload'] / ac3['frame_bytes'] * 1536 / ac3['sample_rate'], 3)
                    d['ac3'] = ac3
                adx = parse_adx(h)
                if adx:
                    bs = adx['block_size'] * adx['channels']
                    if bs:
                        spb = (adx['block_size'] - 2) * 8 // max(1, adx['bits_per_sample'])
                        blocks = (st['payload'] - adx['data_offset']) // bs
                        adx['payload_blocks'] = blocks
                        adx['payload_samples_est'] = blocks * spb
                    t = bytes(st['tail'])
                    adx['end_marker_0x8001_in_tail'] = b'\x80\x01' in t
                    d['adx'] = adx
            ss['0x%02X' % sid] = d
        out['streams'] = ss
        return out


# --------------------------------------------------------------------------
def analyse(f, name, mb, mb_every=1):
    v = Video(mb, mb_every)
    dm = Demux(v)
    size = 0
    while True:
        c = f.read(1 << 22)
        if not c:
            break
        size += len(c)
        dm.feed(c)
    dm.finish()
    v.finish()
    out = OrderedDict()
    out['name'] = name
    out['size'] = size
    out['system'] = dm.summary()
    out['video'] = v.summary()
    return out


def print_report(r):
    w = sys.stdout.write
    w('=== %s  (%d bytes)\n' % (r['name'], r['size']))
    s = r['system']
    w('packs: %s  mux_rate: %s  pack_size: %s  sys_hdr: %d  end_codes: %d  resync: %d  pad_after_end: %d %s\n' % (
        dict(s['pack_headers']), dict(s['mux_rate_bps']), dict(s['pack_size_hist']), s['system_headers'],
        s['program_end_codes'], s['resync_bytes'], s['pad_after_end_code'], dict(s['unexpected']) or ''))
    if s['system_header']:
        w('system_header: %s\n' % json.dumps(s['system_header']))
    for sid, d in s['streams'].items():
        w('  stream %s: pkts=%d bytes=%d payload=%d pts=%d dts=%d hdr=%s%s\n' % (
            sid, d['packets'], d['bytes'], d['payload_bytes'], d['pts_count'], d['dts_count'],
            dict(d['pes_header_forms']),
            (' pts=%s' % d['pts_first_last_s']) if 'pts_first_last_s' in d else ''))
        if 'head_ascii' in d:
            w('    head: %s | %s\n' % (d['head_hex'], d['head_ascii']))
        if 'adx' in d:
            w('    ADX: %s\n' % json.dumps(d['adx']))
        if 'ac3' in d:
            w('    AC-3: %s\n' % json.dumps(d['ac3']))
        if 'payload_crc32' in d:
            w('    payload crc32: %s\n' % d['payload_crc32'])
    v = r['video']
    w('video: %s  ES=%d bytes  seq_hdrs=%d  pictures=%d  GOPs=%d  duration=%ss  seq_end=%d\n' % (
        v['mpeg'], v['es_bytes'], v['sequence_headers'], v['pictures'], v['gops'], v.get('duration_s'),
        v['sequence_end_codes']))
    for x in v['sequence_header_variants']:
        w('  seq_header: %s\n' % json.dumps(x))
    for x in v['sequence_extension_variants']:
        w('  seq_ext: %s\n' % json.dumps(x))
    for x in v['sequence_display_extension_variants']:
        w('  seq_display_ext: %s\n' % json.dumps(x))
    for x in v['quant_matrix_extension_variants']:
        w('  quant_matrix_ext: %s\n' % json.dumps(x))
    w('  custom_quant_matrix: %s\n' % v['custom_quant_matrix'])
    for m in v['quant_matrices_loaded']:
        w('  matrix %s count=%d default=%s\n' % (m['kind'], m['count'], m['is_default']))
        for row in m['natural_order']:
            w('      %s\n' % row)
    w('  ext ids: %s\n' % json.dumps(v['extension_ids']))
    w('  startcodes: %s  user_data: %s  errors: %s\n' % (
        json.dumps(v['startcode_counts']), json.dumps(v['user_data']), json.dumps(v['errors'])))
    w('  GOP: closed=%s broken=%s len=%s first_tc=%s\n' % (
        json.dumps(v['gop_closed']), json.dumps(v['gop_broken_link']), json.dumps(v['gop_length_hist']),
        v['first_gop_time_code']))
    for pat, c in v['gop_patterns_coded_order_top']:
        w('    x%-4d %s\n' % (c, pat))
    for label in ('all', 'first100'):
        if label == 'first100' and not v['first100_differs']:
            w('  [first100: same value sets as all]\n')
            continue
        w('  [%s]\n' % label)
        for k, h in v[label].items():
            if h:
                w('    %-38s %s\n' % (k, json.dumps(h)))
    w('  slice qscale_code (all slices): %s\n' % json.dumps(v['slice_quantiser_scale_code_hist_all_slices']))
    w('  slice extra bits: %s\n' % json.dumps(v['slice_extra_bits']))
    if 'mb_parse' in v:
        w('  MB parse: %s\n' % json.dumps(v['mb_parse']))


def summarize(paths):
    rows = []
    union = OrderedDict()

    def add(k, val):
        union.setdefault(k, set()).add(val)

    for p in paths:
        with open(p) as fh:
            r = json.load(fh)
        v = r['video']
        sh = v['sequence_header_variants'][0] if v['sequence_header_variants'] else {}
        se = v['sequence_extension_variants'][0] if v['sequence_extension_variants'] else {}
        a = v['all']
        auds = []
        for sid, d in r['system']['streams'].items():
            if 'adx' in d:
                x = d['adx']
                auds.append('%s %s v%d %dch %dHz %ds' % (sid, x['encoding_name'], x['version'], x['channels'],
                                                         x['sample_rate'], round(x.get('duration_s', 0))))
                add('audio', 'ADX enc=%d ver=%d ch=%d rate=%d bs=%d bps=%d hp=%d' % (
                    x['encoding_type'], x['version'], x['channels'], x['sample_rate'],
                    x['block_size'], x['bits_per_sample'], x['highpass_freq']))
            if 'ac3' in d:
                x = d['ac3']
                auds.append('%s AC-3 %s%s %dkbps' % (sid, x.get('acmod'), '+LFE' if x.get('lfeon') else '',
                                                    x.get('bitrate_kbps', 0)))
                add('audio', 'AC-3 %s lfe=%s %skbps bsid=%s' % (x.get('acmod'), x.get('lfeon'),
                                                                x.get('bitrate_kbps'), x.get('bsid')))
        pce = OrderedDict((k[4:], list(h.keys())) for k, h in a.items()
                          if k.startswith('pce.') and h and k != 'pce.f_code')
        fc = OrderedDict()
        for key in a.get('pce.f_code', {}):
            comp, val = key.split('=')
            fc.setdefault(comp, []).append(val)
        pce['f_code'] = ' '.join('%s=%s' % (k, ''.join(sorted(v))) for k, v in fc.items())
        mbs = ''
        if 'mb_parse' in v:
            m = v['mb_parse']['stats']
            mbs = 'I_pics=%d mbs=%d dct_type1=%d dct_type0=%d mb_quant=%d escapes=%d dc_size_max=%d failed_slices=%d' % (
                v['mb_parse']['I_pictures_parsed'], m.get('mb', 0), m.get('dct_type=1', 0), m.get('dct_type=0', 0),
                m.get('mb_quant', 0), m.get('escapes', 0), m.get('dc_size_max', 0), m.get('slices_failed', 0))
        rows.append((r['name'], r['size'], '%sx%s ar%s fr%s br%d %s' % (
            sh.get('horizontal_size'), sh.get('vertical_size'), sh.get('aspect_ratio_information'),
            sh.get('frame_rate_code'), sh.get('bit_rate_value', 0) * 400, se.get('profile_and_level_indication', v['mpeg'])),
            v['pictures'], dict(a['picture_coding_type']), pce, v['custom_quant_matrix'], auds,
            v['gop_patterns_coded_order_top'][0][0] if v['gop_patterns_coded_order_top'] else '', mbs))
        add('mpeg', v['mpeg'])
        for x in v['sequence_header_variants']:
            add('seq', '%dx%d ar=%d frc=%d cpf=%d liqm=%d lniqm=%d' % (
                x['horizontal_size'], x['vertical_size'], x['aspect_ratio_information'], x['frame_rate_code'],
                x['constrained_parameters_flag'], x['load_intra_quantiser_matrix'],
                x['load_non_intra_quantiser_matrix']))
        for x in v['sequence_extension_variants']:
            add('seq_ext', 'pli=%s prog_seq=%d chroma=%d low_delay=%d' % (
                x['profile_and_level_indication'], x['progressive_sequence'], x['chroma_format'], x['low_delay']))
        add('custom_quant_matrix', v['custom_quant_matrix'])
        for k, h in a.items():
            if h and (k.startswith('pce.') or k in ('picture_coding_type', 'slices_per_picture',
                                                    'first_slice_extra_bit', 'slice_rows_span')):
                for val in h:
                    add(k, val)
        for k in v['extension_ids']:
            add('extension_ids', k)
        for k in v['gop_closed']:
            add('gop_closed', k)
        for k in v['slice_extra_bits']:
            add('slice_extra_bits', k)
        for k in v['slice_quantiser_scale_code_hist_all_slices']:
            add('slice_qscale_code', int(k))
        if 'mb_parse' in v:
            for k in v['mb_parse']['stats']:
                if k.startswith('dct_type') or k in ('mb_quant', 'escapes', 'slices_failed') or \
                        k.startswith('mbs_per_slice') or k.startswith('skipped'):
                    add('mb_parse', k)
    w = sys.stdout.write
    for row in rows:
        w('%-13s %10d | %s | pics=%d %s | custom_qm=%s\n' % (row[0], row[1], row[2], row[3],
                                                            json.dumps(row[4]), row[6]))
        w('    pce values: %s\n' % json.dumps(row[5]))
        w('    audio: %s | GOP: %s\n' % ('; '.join(row[7]) or 'none', row[8]))
        if row[9]:
            w('    MB parse: %s\n' % row[9])
    w('UNION:\n')
    for k, s in union.items():
        vals = sorted(s, key=lambda x: (0, int(x), '') if str(x).isdigit() else (1, 0, str(x)))
        if k == 'slice_qscale_code':
            vals = '%d..%d (%d distinct)' % (min(s), max(s), len(s))
        w('  %-28s %s\n' % (k, vals))


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument('file', nargs='*')
    ap.add_argument('--name')
    ap.add_argument('--json')
    ap.add_argument('--mb', type=int, default=0, help='macroblock-parse up to N I pictures')
    ap.add_argument('--mb-every', type=int, default=1, help='only every K-th I picture (sampling)')
    ap.add_argument('--quiet', action='store_true')
    ap.add_argument('--summary', action='store_true', help='summarise JSON files given as arguments')
    a = ap.parse_args()
    if a.summary:
        summarize(a.file)
        return
    path = a.file[0] if a.file else '-'
    if path == '-':
        r = analyse(sys.stdin.buffer, a.name or 'stdin', a.mb, a.mb_every)
    else:
        with open(path, 'rb') as fh:
            r = analyse(fh, a.name or path, a.mb, a.mb_every)
    if a.json:
        with open(a.json, 'w') as fh:
            json.dump(r, fh, indent=1)
    if not a.quiet:
        print_report(r)


if __name__ == '__main__':
    main()
