#!/usr/bin/env python3
"""Minimal PCSX2 PINE client (raw UNIX socket, no deps).

Wire format: request  = [u32 total_size LE][u8 opcode][args...]
             reply    = [u32 total_size LE][u8 result (0=OK, 0xFF=FAIL)][payload...]

Usage:
  pine.py version | status | title | id | uuid | gamever
  pine.py read8|read16|read32|read64 ADDR [COUNT]
  pine.py write8|write16|write32|write64 ADDR VALUE
  pine.py savestate SLOT | loadstate SLOT
Env: PINE_SLOT (default 28011), PINE_SOCK (explicit path override).
"""
import os
import socket
import struct
import sys

OP = dict(read8=0, read16=1, read32=2, read64=3, write8=4, write16=5, write32=6, write64=7,
          version=8, savestate=9, loadstate=10, title=11, id=12, uuid=13, gamever=14, status=15)
WIDTH = dict(read8=1, read16=2, read32=4, read64=8, write8=1, write16=2, write32=4, write64=8)
FMT = {1: "<B", 2: "<H", 4: "<I", 8: "<Q"}
STATUS = {0: "Running", 1: "Paused", 2: "Shutdown"}


def sock_path(slot=None):
    if os.environ.get("PINE_SOCK"):
        return os.environ["PINE_SOCK"]
    slot = int(slot or os.environ.get("PINE_SLOT", 28011))
    base = os.environ.get("XDG_RUNTIME_DIR") or "/tmp"
    return os.path.join(base, "pcsx2.sock" if slot == 28011 else f"pcsx2.sock.{slot}")


class Pine:
    def __init__(self, path=None, timeout=10.0):
        self.s = socket.socket(socket.AF_UNIX, socket.SOCK_STREAM)
        self.s.settimeout(timeout)
        self.s.connect(path or sock_path())

    def close(self):
        self.s.close()

    def _recvn(self, n):
        buf = b""
        while len(buf) < n:
            chunk = self.s.recv(n - len(buf))
            if not chunk:
                raise ConnectionError("PINE socket closed")
            buf += chunk
        return buf

    def call(self, opcode, args=b""):
        msg = struct.pack("<IB", 5 + len(args), opcode) + args
        self.s.sendall(msg)
        size = struct.unpack("<I", self._recvn(4))[0]
        body = self._recvn(size - 4)
        if body[0] != 0:
            raise RuntimeError(f"PINE opcode {opcode} failed (result=0x{body[0]:02x})")
        return body[1:]

    def _string(self, opcode):
        p = self.call(opcode)
        n = struct.unpack("<I", p[:4])[0]
        return p[4:4 + n].rstrip(b"\0").decode("utf-8", "replace")

    def version(self): return self._string(OP["version"])
    def title(self): return self._string(OP["title"])
    def game_id(self): return self._string(OP["id"])
    def uuid(self): return self._string(OP["uuid"])
    def game_version(self): return self._string(OP["gamever"])
    def status(self): return struct.unpack("<I", self.call(OP["status"]))[0]
    def save_state(self, slot): self.call(OP["savestate"], struct.pack("<B", slot))
    def load_state(self, slot): self.call(OP["loadstate"], struct.pack("<B", slot))

    def read(self, width, addr):
        op = {1: 0, 2: 1, 4: 2, 8: 3}[width]
        return struct.unpack(FMT[width], self.call(op, struct.pack("<I", addr)))[0]

    def write(self, width, addr, value):
        op = {1: 4, 2: 5, 4: 6, 8: 7}[width]
        self.call(op, struct.pack("<I", addr) + struct.pack(FMT[width], value))


def main(argv):
    if not argv:
        print(__doc__)
        return 2
    cmd = argv[0].lower()
    p = Pine()
    try:
        if cmd == "version": print(p.version())
        elif cmd == "status":
            st = p.status(); print(f"{st} ({STATUS.get(st, '?')})")
        elif cmd == "title": print(p.title())
        elif cmd == "id": print(p.game_id())
        elif cmd == "uuid": print(p.uuid())
        elif cmd == "gamever": print(p.game_version())
        elif cmd in ("savestate", "loadstate"):
            slot = int(argv[1]); (p.save_state if cmd == "savestate" else p.load_state)(slot)
            print(f"{cmd} slot {slot}: OK")
        elif cmd.startswith("read"):
            w = WIDTH[cmd]; addr = int(argv[1], 0); count = int(argv[2], 0) if len(argv) > 2 else 1
            for i in range(count):
                a = addr + i * w
                print(f"0x{a:08x}: 0x{p.read(w, a):0{w * 2}x}")
        elif cmd.startswith("write"):
            p.write(WIDTH[cmd], int(argv[1], 0), int(argv[2], 0)); print("OK")
        else:
            print(__doc__); return 2
    finally:
        p.close()
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
