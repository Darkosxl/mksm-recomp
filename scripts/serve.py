#!/usr/bin/env python3
"""Serves a web build and a disc image with HTTP range requests.

usage: serve.py <build dir> <disc image> [port] [--record <dir for unrecorded VU1 programs>]
                [--files <dir of extra flat files, e.g. lockstep input scripts>]
                [--disc-delay <ms>[,<jitter ms>]] [--disc-fail <fraction>]
                [--pack <HD texture pack dir: current.json, <id>.txt, obj/ (remaster/webpack.py)>]

--disc-delay and --disc-fail throttle disc.iso reads (every Range request waits ms + random(0..jitter), and a
fraction of them answer 503) to test the lockstep host's blocking disc fetch.

--pack serves /pack/current.json, /pack/<id>.txt, /pack/obj/<key>.<sha>.tex and /pack/obj/<name>.<sha>.txt (fx.txt and
its LUTs) as stored (the .tex files are gzip bytes the page decompresses itself, so never with Content-Encoding).
"""

import http.server
import os
import random
import re
import shutil
import sys
import time


def option(name, default=None):
    if name not in sys.argv:
        return default
    at = sys.argv.index(name)
    value = sys.argv[at + 1]
    del sys.argv[at:at + 2]
    return value


RECORD = option('--record')
RECORD = RECORD and os.path.abspath(RECORD)
FILES = option('--files')
FILES = FILES and os.path.abspath(FILES)
PACK = option('--pack')
PACK = PACK and os.path.abspath(PACK)
PACK_FILE = re.compile(r'/pack/(current\.json|[0-9a-f]{16}\.txt|obj/[0-9a-f]{16}\.[0-9a-f]{12}\.tex|obj/[\w-]+\.[0-9a-f]{12}\.txt)')
DELAY = [float(x) for x in option('--disc-delay', '0').split(',')] + [0.0]
FAIL = float(option('--disc-fail', '0'))
BUILD = os.path.abspath(sys.argv[1])
DISC = os.path.abspath(sys.argv[2])
PORT = int(sys.argv[3]) if len(sys.argv) > 3 else 8620
TYPES = {'.html': 'text/html', '.js': 'text/javascript', '.mjs': 'text/javascript', '.wasm': 'application/wasm',
         '.data': 'application/octet-stream', '.args': 'text/plain', '.txt': 'text/plain', '.json': 'application/json'}


def in_pack(path):
    return bool(PACK) and path.startswith(PACK + os.sep)


class Handler(http.server.BaseHTTPRequestHandler):
    def target(self):
        path = self.path.split('?', 1)[0]
        if path in ('/', '/index.html'):
            path = '/ps2web.html'
        if path == '/disc.iso':
            return DISC
        if path.startswith('/pack/'):
            match = PACK and PACK_FILE.fullmatch(path)
            full = match and os.path.join(PACK, match.group(1))
            return full if full and os.path.isfile(full) else None
        name = os.path.normpath(path.lstrip('/'))
        if name.startswith('..') or os.sep in name:
            return None
        full = os.path.join(BUILD, name)
        if not os.path.isfile(full) and FILES:
            full = os.path.join(FILES, name)
        return full if os.path.isfile(full) else None

    def headers_for(self, path, length, encoding=None):
        ext = os.path.splitext(path)[1]
        raw = in_pack(path) and ext != '.json'  # pack .txt/.tex: opaque bytes
        self.send_header('Content-Type', 'application/octet-stream' if raw else TYPES.get(ext, 'application/octet-stream'))
        if encoding:
            self.send_header('Content-Encoding', encoding)
            self.send_header('Vary', 'Accept-Encoding')
        self.send_header('Content-Length', str(length))
        self.send_header('Accept-Ranges', 'bytes')
        self.send_header('Cache-Control', 'no-cache')
        self.send_header('Cross-Origin-Opener-Policy', 'same-origin')
        self.send_header('Cross-Origin-Embedder-Policy', 'require-corp')
        self.send_header('Cross-Origin-Resource-Policy', 'same-origin')
        self.end_headers()

    def do_HEAD(self):
        path = self.target()
        if not path:
            self.send_error(404)
            return
        self.send_response(200)
        self.headers_for(path, os.path.getsize(path))

    def do_GET(self):
        path = self.target()
        if not path:
            self.send_error(404)
            return
        packed = path + '.gz'
        if ('Range' not in self.headers and 'gzip' in self.headers.get('Accept-Encoding', '') and os.path.isfile(packed)
                and os.path.getmtime(packed) >= os.path.getmtime(path) and not in_pack(path)):
            self.send_response(200)
            self.headers_for(path, os.path.getsize(packed), 'gzip')
            with open(packed, 'rb') as f:
                shutil.copyfileobj(f, self.wfile, 1 << 20)
            return
        if path == DISC and 'Range' in self.headers and (DELAY[0] or DELAY[1] or FAIL):
            time.sleep((DELAY[0] + random.random() * DELAY[1]) / 1000.0)
            if random.random() < FAIL:
                self.send_error(503)
                return
        size = os.path.getsize(path)
        match = re.match(r'bytes=(\d+)-(\d*)', self.headers.get('Range', ''))
        start, end = 0, size - 1
        if match:
            start = int(match.group(1))
            end = min(int(match.group(2)) if match.group(2) else size - 1, size - 1)
            self.send_response(206)
            self.send_header('Content-Range', 'bytes %d-%d/%d' % (start, end, size))
        else:
            self.send_response(200)
        self.headers_for(path, end - start + 1)
        with open(path, 'rb') as f:
            f.seek(start)
            left = end - start + 1
            while left > 0:
                chunk = f.read(min(left, 1 << 20))
                if not chunk:
                    break
                self.wfile.write(chunk)
                left -= len(chunk)

    def do_PUT(self):
        match = re.match(r'^/vu1/([0-9A-F]{16}_[0-9A-F]{4}\.bin)$', self.path.split('?', 1)[0])
        length = int(self.headers.get('Content-Length', '0'))
        if not RECORD or not match or length != 16384:
            self.send_error(501 if not RECORD else 400)
            return
        data = self.rfile.read(length)
        target = os.path.join(RECORD, match.group(1))
        if not os.path.exists(target):
            os.makedirs(RECORD, exist_ok=True)
            with open(target, 'wb') as f:
                f.write(data)
            print('recorded', match.group(1), flush=True)
        self.send_response(201)
        self.send_header('Content-Length', '0')
        self.end_headers()

    def log_message(self, fmt, *args):
        pass


print('serving %s and %s%s on http://127.0.0.1:%d/' % (BUILD, DISC, PACK and ' and pack ' + PACK or '', PORT))
http.server.ThreadingHTTPServer(('127.0.0.1', PORT), Handler).serve_forever()
