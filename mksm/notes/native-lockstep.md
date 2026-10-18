# Native lockstep co-op (remaster step 9)

Two desktop `ps2run` instances play together with the browser's lockstep protocol (`web/lockstep.md`): the same
signalling (`server/signal.mjs`), handshake, 20-byte input packets, time sync, hash exchange and disconnect handling.
Branch `remaster-coop`, 2026-10-18.

## Use

```sh
# player 1 (host): redeems the invite, creates a room, prints its id, plays alone until player 2 drops in
ps2run <elf> --disc disc.iso [--load-state s.state] --invite 'https://host/invite?t=…'
# player 2 (guest): no state file needed, it receives the host's game
ps2run <elf> --disc disc.iso --invite 'https://host/invite?t=…&room=<id>'
# or without an invite link: --lockstep ws[s]://host[:port] --room new|<id> (cookie stored earlier, or PS2_LOCKSTEP_COOKIE)
```

- Works headless and with `--window` (keyboard/pad 1 is the local player; the window title shows the session).
- The first player in the room is the host (P1), the second the guest (P2). `--press`/`--stick` lines become the
  local player's scripted input by lockstep frame (`p1:` lines on the host, `p2:` lines on the guest), the same
  rule as the browser's `lsinput`.
- **Drop-in (W4):** the host plays alone until a guest connects, then holds at a vblank F, snapshots state + memory
  card, sends them gzipped (zlib; `lockstep.js` `blob`/`blob-end` framing, meta `{frame, stateSize, cardSize, rtc,
  attempt}`), reloads its own bytes; the guest loads them, answers `loaded {f, h}`, the host answers `sync-result`;
  both start at F+1. The guest's copy of the card goes to `<--memcard>.session`, its own card is untouched.
- **Invite links:** `--invite` opens the link like a browser, stores the cookie per origin in
  `~/.config/ps2run/lockstep-cookies` (0600; `PS2_LOCKSTEP_COOKIE_FILE` moves it), takes server and room from the
  link. `PS2_LOCKSTEP_COOKIE` overrides. Host mode (`server/host.mjs`) needs no cookie on the host's own PC.
- **Transport:** WebRTC data channels via libdatachannel (ICE servers from `/turn`, else public STUN;
  `PS2_LOCKSTEP_STUN=none|url,…` replaces that fallback), the signalling relay as fallback, switched like
  `lockstep.js` (ICE failed, no direct connection in 10 s, peer asks or relays first). `wss://`/`https://` through
  OpenSSL (`PS2_LOCKSTEP_CA=<pem>` trusts an extra certificate). Both libraries are optional at configure time,
  like `--host`; without libdatachannel the relay is used. Lockstep itself needs zlib.
- Test hooks: `PS2_LOCKSTEP_DROP=0.2` (drop input packets), `PS2_LOCKSTEP_BLOCK_ICE=1` (never send our ICE
  candidates), `PS2_LOCKSTEP_RELAY=1` (no WebRTC), `PS2_LOCKSTEP_P2P_TIMEOUT_MS`.

## What both peers must share (the handshake)

`hello {t, proto, build, disc, config, patchFiles}`; `proto`, `build`, `disc` and `config` are compared as JSON text,
exactly as `lockstep.js` does. A mismatch sends `{t:'refuse', reason, detail}` and both sides stop with the detail
(the page shows a desktop peer's `detail` too). `build`, `config` and `patchFiles` come from one function,
`lockstep::identity()` (`host/lockstep_id.cpp`), which the desktop calls directly and the browser through the wasm
export `ps2web_lockstep_identity()` (`lockstep-emu.js` `identity(Module)`), so a desktop and a browser built from
the same sources announce the same values.

| Field | Value (desktop and browser) |
|---|---|
| `build` | 16 hex digits of a SHA-256 over the emulation sources: `runtime/src`, `runtime/include` (without the GPU renderer `gs/gpu/` and the texture pack, which only change pixels) and the game's generated C++ (`cmake/build_id.cmake`, regenerated when one of them changes). The signalling room is pinned to it. The executable's own XXH64 is only logged (`[lockstep] binary …`). Everything is compiled with `-ffp-contract=off`, so a `-march` with FMA cannot change float results. |
| `disc` | `size:sha256(first MB)`, the browser's `discId` format. |
| `config.lockstep` | `1`. |
| `config.rate` | `auto`, or `pal`/`ntsc` when forced (`--pal`/`--ntsc`; the browser cannot force it). |
| `config.patches` | XXH64 of the `PS2_PNACH` files' content, in order (`none` without patches). The widescreen pnach changes game state, so it must match. The page passes no patch today, so a browser peer only plays with an unpatched desktop. |
| `config.env` | Every `PS2_*` variable that is not on the local-only list (`local_only()`), as `NAME=value`, sorted. The page now copies every `PS2_*` URL parameter into the environment in lockstep mode too, so the same rule applies on both sides. Local-only: renderer, scale, aspect, texture packs, deinterlace, hash/trace/profile/dump logging, threading (`PS2_THREADS`, `PS2_NO_VU_THREAD`, the page's `lsvu=0`), `PS2_VU_JIT` (pinned in the browser's lockstep mode, absent on the desktop), `PS2_PNACH` (compared by content), `PS2_RTC`. |
| `patchFiles` | File names of the patches, only used to word a refusal. |

The browser's old fields are gone: `gs` (presentation), `vuThread` (threaded and single-threaded peers compute the
same state; measured natively and browser against desktop below) and `vuJit` (always on in the browser's lockstep
mode; the browser runs the same AOT VU1 programs and JITs only programs missing from them, where the desktop
interprets). The old browser build id (a hash of the wasm's HTTP headers) is replaced by the source hash.

The host's RTC epoch (its `PS2_RTC` or the wall clock) travels in the drop-in meta and the guest installs it with the
state.

## Code

| File | What |
|---|---|
| `host/lockstep.cpp` | Port of `lockstep.js` (signalling, relay switch, handshake, RTT and D, sampling, input packets, acks and resends, time sync, disconnect → solo, resync of D, hash exchange) on a network thread, and of the emulator side of `host/web.cpp` (`lockstep_vblank`: wait for both inputs, pause frames, 1/32 hash part per frame, 59.94 Hz pacing + `slow_ms`). They share the W3 struct as the browser's page and worker do; a condition variable stands in for the futex, an eventfd wakes the network thread when the emulator reaches a frame. |
| `host/lockstep_net.cpp` | `Channels` (the `in`/`ctl` pair), a TCP/TLS connection, a small HTTP GET (`/turn`, `/invite`), a minimal RFC 6455 client (non-blocking, `TCP_NODELAY`) and `RelayChannels`: both channels as binary frames on the signalling socket (byte 0 channel, byte 1 kind). |
| `host/lockstep_rtc.cpp` | `RtcChannels`: libdatachannel peer connection with negotiated `in` (id 0, unordered, 0 retransmits) and `ctl` (id 1, reliable), offer/answer/ICE in the browser's JSON shapes; callbacks are queued for the network thread. |
| `host/lockstep_json.hpp` | JSON parse/print with `JSON.stringify` output, so configs compare as the browser compares them. |
| `host/main.cpp`, `host/window.cpp` | `--lockstep`, `--room`; the window hands pad 1 to the session and lets the session pace frames. |


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

Second round (P2P, wss, drop-in, invites; guest boots with **no state file**, hashes compared after the drop-in
frame; `PS2_LOCKSTEP_STUN=none`, so nothing left the machine in these runs):

| Test | Result |
|---|---|
| P2P over localhost, wss through a local TLS proxy (self-signed cert on 127.0.0.1), both join with `--invite` links | WebRTC connected with the `/turn` servers, state sent over the data channel (48.3 MB, 14.1 MB gzip in 0.46 s), load hashes equal, per-frame hashes identical **795/795**, 24 windows ok. Cookies stored 0600 per origin. |
| Relay fallback: both block their ICE candidates, P2P timeout 4 s | Guest: `using the relay (no direct connection)`, host follows on the peer's request; drop-in over the relay (0.8 s), identical **769/769**. |
| Build without libdatachannel, OpenSSL, FFmpeg, SDL (compiled by hand against the same libraries) | `relay only (built without libdatachannel)`, drop-in over the relay, identical **497/497**. |
| `web/lockstep.js` in Node as host sends `koop.state` with the browser's `CompressionStream` gzip | Native guest (relay) inflated 14.8 MB, loaded it at frame 1000, its `loaded` hash reached the JS side; 300 frames, P2 inputs 300/300 as scripted. |

The first P2P run of this round (before `PS2_LOCKSTEP_STUN=none` existed, and with a `/turn` parsing bug that is now
fixed) fell back to the public STUN servers (`stun.l.google.com`, `stun.cloudflare.com`): two STUN lookups left the
laptop. No other outbound traffic.

Third round: **browser against desktop** (merged with `shaolin-monks-remastered`, step 8). `remaster/coop/webpeer.mjs`
runs the real web build (`build/web-mksm`, emsdk 6.0.11 from `tools/emsdk`) in headless Chromium 152
(`--headless=new`, a private Xvfb DISPLAY so the NVIDIA PRIME Vulkan driver shows WebGPU, a MemoryMax=3G scope)
against a headless native `ps2run` (`PS2_GS=soft`, single-threaded), on a throwaway `signal.mjs` behind the
same-origin proxy of `scripts/lockstep_env.mjs`. Local only: the page's ICE servers come from the local `/turn`
(stun/turn at 127.0.0.1, nothing listens there, host candidates connect), Chromium resolves no host name but
127.0.0.1, the native side has `PS2_LOCKSTEP_STUN=none`. Both sides write `PS2_HASH_LOG` + `PS2_HASH_SPLIT` every
frame (the page's copy is read out of MEMFS with `FS.readFile`); `koop.state`, `gen_mash.py` scripts as above. Both
builds announced the same build id each time (`45e7dea5672268ae`, `b07c22d926d50f85`, `39ceec43055382bb` as the
sources changed) and config `{"lockstep":1,"rate":"auto","patches":"none","env":[]}`.

| Test | Result |
|---|---|
| Native ↔ native after the merge, 600 frames, P2P | Identical **797/797**, 24 windows ok, 0 desyncs. |
| Desktop hosts, browser (WebGPU on the RTX 4060 via Dawn/Vulkan, VU1 thread on) drops in over **WebRTC** (Chromium's RTCPeerConnection ↔ libdatachannel) | Handshake accepted, state 48.3 MB → 14.1 MB gzip in 0.6 s, load hash equal on both (`6597b2b665a01cc8`). Per-frame hashes identical **432/432** (game frames 6807–7238), 12 protocol windows ok, 0 desyncs. |
| Same with the **relay forced** (`PS2_LOCKSTEP_RELAY=1` on the desktop, the page follows: `using the relay (peer asked)`) | Identical **444/444**, 13 windows ok, 0 desyncs. |
| **Browser hosts** (loads `koop.state` with `?state=`), desktop guest drops into the browser's snapshot, WebRTC | The wasm-made state loads natively with the same hash; identical **446/446**, 12 windows ok. |
| **VU JIT:** browser with `PS2_VU_JIT=all` (all **31** VU1 programs of the scene JIT-compiled to wasm, counted by `ps2web_vu_jit_programs()`), without a GPU (`--disable-gpu`, CPU GS), against the desktop's compiled VU1 code | Identical **442/442** and **413/413** (two runs), 0 desyncs, 0 interpreted VU1 calls. |
| **Patch mismatch:** desktop host with `widescreen.pnach`, browser without | Refused within 1 s on both sides; the browser noticed first and now words it like the desktop: `game patch set differs: P2 has no game patches, P1 has widescreen.pnach (8dcd818ffc9f7c47). Both players need …`; the desktop stops with exit 3. |
| Native ↔ native on the final binary, 600 frames | Identical **796/796**, 24 windows ok, 0 desyncs (`-ffp-contract=off` changes nothing on x86-64 without FMA). |
| `web/lockstep.js` in Node (test.sh interop) against the final native, 300 frames | Handshake accepted (same build and config text), drop-in over the relay, 300 frames, 0 desyncs. |

So the browser and the desktop compute the same machine state frame by frame across WebGPU vs the CPU GS, the VU1
thread vs none, and the wasm VU JIT vs the compiled VU1 code. A `--solo` comparison (each side alone from the state,
no session) diverges at frame 6827 in EE RAM/IOP/SIF but not in VU state: outside lockstep the page streams the disc
asynchronously, so disc timing differs; lockstep mode blocks on the disc (`chunk_blocking`) and is deterministic.
Rerun: `flock logs/heavy.lock node remaster/coop/webpeer.mjs --out <dir> --state koop.state [--relay]
[--browser-host] [--no-gpu] [--web-params PS2_VU_JIT=all]` (needs `build/web-mksm` from `scripts/build_web.sh mksm`
with `PS2_GENERATED=mksm/generated`, and `server/node_modules`).

The window mode was built, not run (headless only).

## Not done

- **Browser widescreen:** the page passes no `PS2_PNACH`, so a browser only plays with an unpatched desktop. A
  browser widescreen option needs the pnach in MEMFS and `PS2_PNACH` set before the identity is read.
- **Longer and other scenes:** the browser runs covered ~430 frames of Ko-op gameplay each; story maps, FMVs (the
  IPU IDCT table comes from `std::cos`, glibc vs musl) and the VU1 EFU ops (`std::sin/atan/exp`) were not exercised
  against a browser.
- **Resync after a desync** (`state-request`/`state-begin`, lockstep-emu.js) and **re-hosting** after the guest
  leaves are not ported: a desync is reported, not repaired; after a guest leaves the host continues solo.
- **UI:** room code entry/display, waiting/stall/disconnect overlays, a pause key (`lockstep_set_paused` is wired),
  resync on demand. The window only shows the status in its title; window mode was built, not run.
- **NAT traversal:** whatever ICE/TURN gives; the relay works everywhere both can reach the server.
- **macOS/Windows:** `eventfd` and POSIX sockets are Linux-only as written (CMake only builds lockstep on Linux).
