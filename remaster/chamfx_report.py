# chamfx_report.py <run dir> [<baseline run dir>]: what a chamfx.sh move run heard and drew.
#   fx.txt     sound-cue lookups (FUN_0031AE78) and event-114 calls (FUN_002E9700) from the call frame on: count, and how
#              many returned 0 (not found / nothing built)
#   stems.wav  voices-only loudness (core 0 + core 1 dry voices, stems 4-7) per 10-frame window from the call, in dBFS;
#              with a baseline run (same start state, no call): the energy the move added over it
#   frames     sheet.png: every 4th frame from the call to call + 80
# Writes <run dir>/report.txt and sheet.png; prints the report.
import glob, math, os, re, struct, sys

import numpy as np
from PIL import Image, ImageDraw

run = sys.argv[1]
base = sys.argv[2] if len(sys.argv) > 2 else None
cmd = open(os.path.join(run, 'cmd.txt')).read()
m = re.search(r'PS2_CALL=(\d+):303340:(\w+):(\w+)', cmd)
call = int(m.group(1)) if m else None
f0 = call - 10 if call else None  # the start state's frame: chamfx.sh calls at f0 + 10
out = []


def say(s=''):
    out.append(s)


say(f'{run}: call frame {call} state {int(m.group(3), 16) if m else "-"}')


def fx(path, since):
    cue = ev = cue0 = ev0 = 0
    hashes = {}
    for line in open(path):
        p = line.split()
        if not p or int(p[0]) < since:
            continue
        name = p[1].split('(')[0]
        v = line.rsplit('->', 1)[-1].strip()
        if name == 'cue':
            cue += 1
            cue0 += v == '00000000'
            h = re.search(r'cue\((\w+), (\w+), (\w+), (\w+)\)', line)
            hashes.setdefault(h.group(1) + '/' + h.group(2) if h else '?', []).append(v)
        elif name == 'ev114':
            ev += 1
            ev0 += v == '00000000'
    return cue, cue0, ev, ev0, hashes


since = call if call else 0
if os.path.exists(os.path.join(run, 'fx.txt')):
    cue, cue0, ev, ev0, hashes = fx(os.path.join(run, 'fx.txt'), since)
    say(f'cue lookups {cue} ({cue0} returned 0), event-114 calls {ev} ({ev0} returned 0)')
    for k, v in hashes.items():
        say(f'  cue {k}: ' + ' '.join(v[:8]) + (' ...' if len(v) > 8 else ''))


def voices(path):
    d = open(path, 'rb').read()
    pos, ch, rate = 12, 12, 48000
    pcm = None
    while pos + 8 <= len(d):
        cid, size = d[pos:pos + 4], struct.unpack_from('<I', d, pos + 4)[0]
        if cid == b'fmt ':
            _, ch, rate = struct.unpack_from('<HHI', d, pos + 8)
        elif cid == b'data':
            pcm = d[pos + 8:pos + 8 + size]
        pos += 8 + size + (size & 1)
    a = np.frombuffer(pcm[:len(pcm) // (2 * ch) * 2 * ch], dtype='<i2').reshape(-1, ch).astype(np.float64)
    return a[:, 4:8].sum(axis=1) / 4.0, rate


def windows(sig, rate, start, n=12, w=10):
    spf = rate / 59.94
    r = []
    for k in range(n):
        a, b = int((start + k * w) * spf), int((start + (k + 1) * w) * spf)
        x = sig[a:b]
        r.append(float(np.mean(x * x)) if len(x) else 0.0)
    return r


st = os.path.join(run, 'stems.wav')
if os.path.exists(st) and call:
    sig, rate = voices(st)
    rel = call - f0  # frames from the start of the recording
    e = windows(sig, rate, rel)
    db = lambda p: 10 * math.log10(p / 32768.0 ** 2) if p > 0 else -120.0
    say('voices dBFS per 10 frames from the call: ' + ' '.join(f'{db(p):.0f}' for p in e))
    if base and os.path.exists(os.path.join(base, 'stems.wav')):
        bs, _ = voices(os.path.join(base, 'stems.wav'))
        eb = windows(bs, rate, rel)
        say('baseline (no call)                     : ' + ' '.join(f'{db(p):.0f}' for p in eb))
        n = min(len(sig), len(bs))
        spf = rate / 59.94
        a, b = int(rel * spf), min(n, int((rel + 120) * spf))
        diff = sig[a:b] - bs[a:b]
        say(f'added by the move over 120 frames: {db(float(np.mean(diff * diff))):.1f} dBFS rms, peak {np.abs(diff).max():.0f}')

fr = sorted(glob.glob(os.path.join(run, 'frames', '*.png')))
if fr and call:
    pick = []
    for p in fr:
        k = int(re.findall(r'(\d+)', os.path.basename(p))[-1])
        if call <= k <= call + 80 and (k - call) % 4 == 0:
            pick.append((k, p))
    thumbs = []
    for k, p in pick:
        im = Image.open(p).convert('RGB')
        im = im.resize((320, im.height * 320 // im.width))
        ImageDraw.Draw(im).text((4, 4), f'+{k - call}', fill=(255, 255, 0))
        thumbs.append(im)
    if thumbs:
        cols = 7
        h = thumbs[0].height
        sheet = Image.new('RGB', (cols * 320, ((len(thumbs) + cols - 1) // cols) * h))
        for i, im in enumerate(thumbs):
            sheet.paste(im, ((i % cols) * 320, (i // cols) * h))
        sheet.save(os.path.join(run, 'sheet.png'))
        say(f'sheet.png: {len(thumbs)} frames')
open(os.path.join(run, 'report.txt'), 'w').write('\n'.join(out) + '\n')
print('\n'.join(out))
