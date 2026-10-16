#!/usr/bin/env python3
"""Generate koop.args (lockstep test input, mksm/notes/web-lockstep.md): boot -> title (quiet window) -> Ko-op -> P2 joins -> picks -> skip intro -> 2P gameplay.
usage: gen.py <out.args> <gameplay_from> <gameplay_to>"""
import sys
out, g0, g1 = sys.argv[1], int(sys.argv[2]), int(sys.argv[3])
L = []
# boot: Midway logo, autosave notice (f600), "create save data? No/Yes" (f800, No), "card unformatted" (f1025)
L += ["--press 200:cross", "--press 400:cross", "--press 700:cross", "--press 1000:cross", "--press 1100:cross"]
# QUIET WINDOW 1106..1799: title "Press START" shown from ~f1325
L += ["--press 1800:start",        # title -> brightness screen (f1820)
      "--press 1900:cross",        # accept brightness -> main menu (f1920)
      "--press 2000:down",         # Single Player -> Ko-op
      "--press 2060:cross",        # confirm Ko-op -> Ko-op character select (f2140)
      "--press 2180:p2:cross",     # P2 joins
      "--press 2240:p2:cross",     # P2 accepts character
      "--press 2300:cross",        # P1 accepts character -> difficulty dialog (f2345)
      "--press 2420:cross"]        # P1 accepts Normal -> loading
# intro FMV starts ~f3020; 2nd start skips it; Goro's Lair in-engine cutscene ~f4000-6300
L += [f"--press {f}:start" for f in range(3100, 6000, 240)]
DIRS = {"right": (255, 128), "up": (128, 0), "left": (0, 128), "down": (128, 255)}
SEQ1 = ["right", "up", "left", "down"]
SEQ2 = ["left", "down", "right", "up"]
def player(pad, seq, start):
    pre = "" if pad == 1 else "p2:"
    stick = "--stick" if pad == 1 else "--stick2"
    k = 0
    for t in range(start, g1 - 300 + 1, 300):
        a, b = seq[k % 4], seq[(k + 1) % 4]
        L.append(f"{stick} {t}:{DIRS[a][0]},{DIRS[a][1]}:70")
        for dt, btn in ((80, "square"), (95, "square"), (110, "triangle")):
            L.append(f"--press {t + dt}:{pre}{btn}")
        L.append(f"{stick} {t + 130}:{DIRS[b][0]},{DIRS[b][1]}:50")
        for dt, btn in ((190, "square"), (205, "triangle"), (225, "cross"), (250, "square"), (265, "triangle")):
            L.append(f"--press {t + dt}:{pre}{btn}")
        k += 1
player(1, SEQ1, g0)
player(2, SEQ2, g0 + 150)
def key(s):
    return int(s.split()[1].split(":")[0])
L.sort(key=key)
open(out, "w").write("\n".join(L) + "\n")
print(len(L), "lines, last input frame", max(key(s) for s in L))
