#!/usr/bin/env python3
"""Callers and callees of functions from decomp/map/callgraph.tsv, with names, sizes, modules, source files.

usage: python3 -I decomp/notes/tools/cg.py <hex addr> [...]     (-u N: also walk callers up N levels)
"""
import os, sys
from collections import defaultdict

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), '..', '..', '..'))
fi = {}
with open(os.path.join(ROOT, 'decomp/map/functions.tsv')) as f:
    next(f)
    for line in f:
        p = line.rstrip('\n').split('\t')
        fi[int(p[0], 16)] = p
callers, callees = defaultdict(list), defaultdict(list)
with open(os.path.join(ROOT, 'decomp/map/callgraph.tsv')) as f:
    next(f)
    for line in f:
        p = line.rstrip('\n').split('\t')
        a, b = int(p[0], 16), int(p[1], 16)
        callers[b].append((a, p[2], p[3])); callees[a].append((b, p[2], p[3]))

def desc(a):
    p = fi.get(a)
    if not p: return f'{a:06x} ?'
    src = p[6].replace('c:/Projects/', '').replace('Ps2/Renderer/', 'R/')
    return f'{a:06x} {p[3]} [{p[2]} B, {p[5]}{", " + src if src else ""}]'

args = [x for x in sys.argv[1:] if not x.startswith('-')]
up = int(sys.argv[sys.argv.index('-u') + 1]) if '-u' in sys.argv else 0
for x in args:
    if up and x == args[-1] and False: pass
for x in args:
    try: a = int(x, 16)
    except ValueError: continue
    if up and str(up) == x: continue
    print('==', desc(a))
    print('  callers:')
    for c, k, n in sorted(callers[a]): print(f'    {desc(c)} {k} x{n}')
    print('  callees:')
    for c, k, n in sorted(callees[a]): print(f'    {desc(c)} {k} x{n}')
