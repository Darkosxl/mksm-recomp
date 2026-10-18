# Native lockstep co-op (remaster step 9)

Two desktop `ps2run` instances play together with the browser's lockstep protocol (`web/lockstep.md`): the same
signalling (`server/signal.mjs`), handshake, 20-byte input packets, time sync, hash exchange and disconnect handling.
Branch `remaster-coop`, 2026-10-18.

## Use

```sh
# player 1: creates a room and prints its id
PS2_LOCKSTEP_COOKIE='__Host-mksm=…' ps2run <elf> --disc disc.iso [--load-state s.state] --lockstep ws://host:port --room new
# player 2: joins it
PS2_LOCKSTEP_COOKIE='__Host-mksm=…' ps2run <elf> --disc disc.iso [--load-state s.state] --lockstep ws://host:port --room <id>
```

- Works headless and with `--window` (keyboard/pad 1 is the local player; the window title shows the session).
- The first player in the room is the host (P1), the second the guest (P2). `--press`/`--stick` lines become the
  local player's scripted input by lockstep frame (`p1:` lines on the host, `p2:` lines on the guest), the same
  rule as the browser's `lsinput`.
- Both emulators hold at their first vblank until the handshake is done, then start together at lockstep frame 1.
- `PS2_LOCKSTEP_COOKIE` is the invite cookie `/ws` requires. With `server/host.mjs` (host mode) a native client on
  the host's own PC needs none: host.mjs adds its cookie to local `/ws` requests.
- Test hook: `PS2_LOCKSTEP_DROP=0.2` drops that fraction of outgoing input packets.

## What both peers must share (the handshake)

`hello {t, proto, build, disc, config, patchFiles}`; `proto`, `build`, `disc` and `config` are compared as JSON text,
exactly as `lockstep.js` does. A mismatch sends `{t:'refuse', reason, detail}` and both sides stop with the detail.

| Field | Native value |
|---|---|
| `build` | XXH64 of the running executable (`/proc/self/exe`). Peers must run the same binary: another compiler or flags can change float results. The signalling room is pinned to it. |
| `disc` | `size:sha256(first MB)`, the browser's `discId` format. |
| `config.patches` | XXH64 of the `PS2_PNACH` files' content, in order (`none` without patches). The widescreen pnach changes game state, so it must match; texture packs, `PS2_SCALE`, `PS2_ASPECT`, post FX and the GS renderer are local and not compared. |
| `config.start` | Boot arguments + `--load-state` file + memory card at start. Without the W4 snapshot transfer both players start from the same files. |
| `config.rate` | `auto`, or `pal`/`ntsc` when forced. |
| `config.env` | Every `PS2_*` variable that is not on the local-only list (`local_only()` in `host/lockstep.cpp`), as `NAME=value`. |
| `patchFiles` | File names of the patches, only used to word a refusal. |

The host also sends its RTC epoch in `start` (`rtc`, its `PS2_RTC` or the wall clock), and both set it before the
first frame.

## Code

| File | What |
|---|---|
| `host/lockstep.cpp` | Port of `lockstep.js` (signalling, relay switch, handshake, RTT and D, sampling, input packets, acks and resends, time sync, disconnect → solo, resync of D, hash exchange) on a network thread, and of the emulator side of `host/web.cpp` (`lockstep_vblank`: wait for both inputs, pause frames, 1/32 hash part per frame, 59.94 Hz pacing + `slow_ms`). They share the W3 struct as the browser's page and worker do; a condition variable stands in for the futex, an eventfd wakes the network thread when the emulator reaches a frame. |
| `host/lockstep_net.cpp` | `Channels` (the `in`/`ctl` pair), a minimal RFC 6455 client (`ws://`, non-blocking, `TCP_NODELAY`) and `RelayChannels`: both channels as binary frames on the signalling socket (byte 0 channel, byte 1 kind), the relay `signal.mjs` already forwards. |
| `host/lockstep_json.hpp` | JSON parse/print with `JSON.stringify` output, so configs compare as the browser compares them. |
| `host/main.cpp`, `host/window.cpp` | `--lockstep`, `--room`; the window hands pad 1 to the session and lets the session pace frames. |

Transport: the native client asks for the relay at once (`{type:'transport', mode:'relay'}`; as the room's host it
answers a browser's WebRTC offer with that message). `lockstep.js` already switches to the relay on that message or
on the first relayed frame, so the browser needs no change. Inputs go A → server → B over TCP.

## Tests (local, 2026-10-18)

`remaster/coop/test.sh pair|interop <out> <frames> <state> [host VAR=… -- guest VAR=…]` reruns them: it starts a
throwaway `signal.mjs` on 127.0.0.1, takes the heavy lock, and (interop) runs the unmodified `web/lockstep.js` in
Node (`remaster/coop/jspeer.mjs`, mock emulator `jsmock.mjs`) as the room's host against a native guest.

Local `signal.mjs` on 127.0.0.1, invite cookie from its admin API. Headless `PS2_GS=soft`, `koop.state` (2-player
Ko-op, frame 6800), scripted mashing for both players (`gen_mash.py`, p2 lines from another seed), `PS2_HASH_LOG`
on both sides (full state hash every frame).

| Test | Result |
|---|---|
| Native ↔ native, 300 frames, no patches | Handshake ok, D=2 (RTT p50 0.4 ms). Per-frame `PS2_HASH_LOG` identical 300/300, 8 protocol hash windows ok, 0 stalls. |
| Native ↔ native, 2000 frames, **both with widescreen.pnach** | Accepted (same patch set). Per-frame hash log identical **2000/2000** (game frames 6801–8800); 61 protocol hash windows ok, 0 desyncs; 13 stall frames (116–129 ms in total), 0 disconnects. The patched run differs from the unpatched one from frame 6802 on, so the patch really changes state. |
| **Patch-set mismatch**, both ways round (host none + guest widescreen, and host widescreen + guest none) | Refused on both sides within 1 s, exit code 3, both emulators stop at their first vblank, same text on both screens: `game patch set differs: P1 has widescreen.pnach (8dcd818ffc9f7c47), P2 has no game patches. Both players need the same PS2_PNACH files (both with or both without widescreen)`. |
| `web/lockstep.js` itself (unmodified, in Node with a mock emulator worker, room host P1) ↔ native guest P2, 600 frames | The browser code switched to the relay on the native's `transport` message, both handshakes accepted the other's `hello` (JSON text equal), RTT/D/`start` agreed. The 600 P2 inputs the JS side received matched the native script 600/600 (507 frames with buttons held); it received all 17 native `hash` messages (63…575, BigInt hex format). |
| Native ↔ native, 1000 frames, **host `PS2_THREADS=1`** (render + VU1 threads) **vs single-threaded guest, 20% of the guest's input packets dropped** (`PS2_LOCKSTEP_DROP=0.2`, 635 dropped) | Per-frame hash log identical **1000/1000**, 30 protocol hash windows ok, 0 desyncs, max input gap 192 ms. The threaded host ran faster and waited for the guest (946 stall frames): the session runs at the slower peer's speed. |

Throughput: headless `PS2_GS=soft` with a full state hash every frame runs ~7 fps on this laptop (CPU-bound,
~90% of a core per instance), so the faster peer waits on the slower one; with the window and the GPU renderer the
59.94 Hz pacing applies. The Node interop peer (60 fps mock) therefore stalled on 598/600 frames, as expected.

Not run: native vs browser hash comparison of the real game (needs a wasm build in headless Chromium; the protocol
side is covered by the Node test above). The window mode was built, not run (headless only).

## Not done / blocked

**Blocked on a dependency decision (nothing was added):**

1. **TLS (`wss://`).** The deployed server (Caddy) and host mode's Cloudflare tunnel are HTTPS only; the native
   client speaks `ws://` (local `signal.mjs`, LAN, or host mode on the host's own PC). Options:
   - *OpenSSL* (Apache-2.0, system `libssl`/`libcrypto` 3.6, ~7 MB, already installed as a libdatachannel and
     FFmpeg dependency): wrap the existing `WsClient` socket in an `SSL*` (~80 lines). Keeps the cookie header.
   - *libdatachannel's `rtc::WebSocket`* (has TLS): cannot send custom headers, so `signal.mjs` would need a second
     way to present the invite (query or subprotocol token), and the server change ships to the VPS.
   - *mbedTLS* (Apache-2.0, ~0.5 MB): smaller, but a new package everywhere.
2. **Direct peer-to-peer (WebRTC data channels).** Today inputs go through the server (A → server → B): it works
   behind any NAT, costs ~5 KB/s per player on the server, and adds the server detour to the RTT (D grows by 1 frame
   per ~33 ms of extra p95 RTT). P2P needs WebRTC to talk to a browser. Options:
   - *libdatachannel 0.24.5* (MPL-2.0, `libdatachannel.so` 2.8 MB + libjuice 0.2 MB + libsrtp 0.1 MB + OpenSSL):
     already installed here and already an optional dependency of `ps2run --host` (`find_package(LibDataChannel)`),
     so for this repo it is a decision to make it a lockstep dependency too, not a new package. Gets ICE/STUN/TURN
     (works with the existing coturn credentials from `/turn`), negotiated channels `in` (unordered, 0 retransmits)
     and `ctl` (reliable) exactly as `lockstep.js` creates them. Work: an `RtcChannels` behind `Channels` plus
     offer/answer/ICE in `Session::on_signal` (~300 lines); the relay stays as the fallback, as in the browser.
   - *Google libwebrtc* (BSD): tens of MB and its own build system. Not worth it for data channels.
   - *Own UDP + hole punching*: native-to-native only (browsers cannot join), and NAT traversal to write and test.
3. **W4 drop-in (the host sends its state + memory card).** Needed for browser interop (a browser guest waits for
   the host's snapshot) and to drop the "same start files" rule. The blob is gzip on the wire: zlib (Zlib licence,
   0.1 MB, already on every desktop) or an own inflate (~300 lines; sending can use stored deflate blocks).

**Remaining (no dependency question):**
- Browser interop beyond the protocol: a portable build id (the browser hashes wasm headers, native hashes the
  executable), one config schema (the browser sends `{lockstep, vuThread, gs, vuJit}`, native
  `{lockstep, rate, patches, start, env}`; `gs` is a presentation choice and should leave the browser's config,
  `patches` should join it), and proof that the wasm VU JIT and the native AOT VU code compute the same state
  (never compared; the hash-log comparison needs a headless Chromium run of the wasm build).
- Invite flow: the native client takes the cookie from `PS2_LOCKSTEP_COOKIE`; it should redeem an invite link
  itself (`/invite?t=` → `Set-Cookie`) and remember the cookie.
- UI: room code entry and display, waiting/stall/disconnect overlays, a pause key (the protocol's pause bit is
  wired: `lockstep_set_paused`), resync on demand. The window only shows the status in its title.
- NAT traversal: none needed for the relay; P2P is item 2.
- Window mode is built but was not run (headless-only rule).
- macOS/Windows: `eventfd` and POSIX sockets are Linux-only as written (a pipe and Winsock are the swaps).
