#!/usr/bin/env python3
"""Per-window loudness stats for 16-bit PCM WAVs (stdlib only).

usage: wav_stats.py A.wav [B.wav] [--win 5] [--pairs 0:1,2:3]

For each file prints per-window RMS/peak (dBFS) per channel, and for
stereo L/R correlation. With two files, also prints the per-window RMS
difference (B - A, dB) per channel. --pairs computes the per-window
normalized correlation between channel pairs (e.g. stems c0in vs c1in)
to detect the same PCM arriving twice.
"""
import array, math, struct, sys


def read_wav(path):
    with open(path, 'rb') as f:
        data = f.read()
    assert data[:4] == b'RIFF' and data[8:12] == b'WAVE', path
    pos, ch, rate, bits, pcm = 12, 2, 48000, 16, None
    while pos + 8 <= len(data):
        cid, size = data[pos:pos + 4], struct.unpack_from('<I', data, pos + 4)[0]
        body = data[pos + 8:pos + 8 + size]
        if cid == b'fmt ':
            _, ch, rate, _, _, bits = struct.unpack_from('<HHIIHH', body)
        elif cid == b'data':
            pcm = body
        pos += 8 + size + (size & 1)
    assert bits == 16
    a = array.array('h')
    a.frombytes(pcm[:len(pcm) // (2 * ch) * 2 * ch])
    return ch, rate, a


def db(x):
    return 20 * math.log10(x / 32768) if x > 0 else -120.0


def windows(ch, rate, a, win):
    n = len(a) // ch
    step = int(rate * win)
    out = []
    for w0 in range(0, n, step):
        w1 = min(n, w0 + step)
        stats = []
        for c in range(ch):
            s = a[w0 * ch + c:w1 * ch:ch]
            if not s:
                stats.append((0, 0))
                continue
            ss = sum(v * v for v in s)
            stats.append((math.sqrt(ss / len(s)), max(abs(min(s)), abs(max(s)))))
        out.append((w0 / rate, w1 / rate, stats, w0, w1))
    return out


def corr(a, ch, c0, c1, w0, w1):
    x = a[w0 * ch + c0:w1 * ch:ch]
    y = a[w0 * ch + c1:w1 * ch:ch]
    sxy = sum(p * q for p, q in zip(x, y))
    sxx = sum(p * p for p in x)
    syy = sum(q * q for q in y)
    return sxy / math.sqrt(sxx * syy) if sxx and syy else 0.0


def main():
    args = sys.argv[1:]
    win, pairs, files = 5.0, [], []
    i = 0
    while i < len(args):
        if args[i] == '--win':
            win = float(args[i + 1]); i += 2
        elif args[i] == '--pairs':
            pairs = [tuple(int(v) for v in p.split(':')) for p in args[i + 1].split(',')]; i += 2
        else:
            files.append(args[i]); i += 1
    loaded = [read_wav(f) for f in files]
    stats = [windows(ch, rate, a, win) for ch, rate, a in loaded]
    for f, (ch, rate, a), st in zip(files, loaded, stats):
        print(f'== {f}: {ch} ch, {rate} Hz, {len(a) // ch / rate:.1f} s')
        tot = [0.0] * ch
        for t0, t1, s, w0, w1 in st:
            cols = ' '.join(f'c{c} rms {db(r):6.1f} pk {db(p):6.1f}' for c, (r, p) in enumerate(s))
            extra = ''
            if ch == 2:
                extra = f' LRcorr {corr(a, ch, 0, 1, w0, w1):+.2f}'
            for c0, c1 in pairs:
                extra += f' corr{c0}:{c1} {corr(a, ch, c0, c1, w0, w1):+.2f}'
            print(f'{t0:6.1f}-{t1:6.1f}s {cols}{extra}')
            for c, (r, _) in enumerate(s):
                tot[c] += r * r * (t1 - t0)
        dur = len(a) // ch / rate
        print('overall rms dB: ' + ' '.join(f'c{c} {db(math.sqrt(v / dur)):6.1f}' for c, v in enumerate(tot)))
    if len(stats) == 2:
        print('== B - A per window (dB, rms)')
        for (t0, t1, sa, _, _), (_, _, sb, _, _) in zip(*stats):
            print(f'{t0:6.1f}-{t1:6.1f}s ' + ' '.join(f'c{c} {db(rb) - db(ra):+6.1f}' for c, ((ra, _), (rb, _)) in enumerate(zip(sa, sb))))


if __name__ == '__main__':
    main()
