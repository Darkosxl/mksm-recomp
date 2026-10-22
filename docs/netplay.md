# Online co-op (netplay)

Two-player games can be played over the network with one side hosting. Only the host runs the game.
The second player opens a web page: it shows the host's picture, plays its sound, and sends the
browser's gamepad or keyboard back as controller 2. The second player needs no ISO, no ELF and no
install, only a browser (Chrome, Edge or Firefox; Safari should work but is untested).

Why streaming and not lockstep or rollback: lockstep needs both machines to run the game identically
frame for frame, and this runtime is not deterministic across machines (threaded GS/VU, wall-clock
paced audio). Streaming has one authoritative game, so it cannot desync. The cost is that player 2
sees the game one network round trip plus the encode/decode time later than player 1.

## Hosting

```sh
# with a window: you play controller 1 as usual, the browser player is controller 2
ps2run game.elf --disc game.iso --window --host

# without a window (a headless host, or for testing): frames are produced only for the stream
ps2run game.elf --disc game.iso --host 47920
```

The host prints a 6-digit session code and the links to give to player 2:

```
[netplay] hosting: session code 892617; page + signalling on TCP 47920, media on UDP 47921
[netplay]   this machine: http://127.0.0.1:47920/#code=892617
[netplay]   P2 opens:     http://192.168.1.103:47920/#code=892617  (wlo1)
```

Player 2 opens the link (the code is filled in from the link), clicks **Join**, and plays. The page shows
ping, fps, bit rate and the jitter buffer; it has buttons for fullscreen and sound. With a window, the
host's title bar shows `P2 connected, ping N ms`; every 5 s the host also logs a status line.

| Option | Meaning |
| --- | --- |
| `--host [port]` | host a session. TCP `port` (default 47920) serves the page and signalling, UDP `port+1` carries all WebRTC traffic |
| `--stun stun:host:port` | add a STUN server so the host also offers its public address (internet play through a port forward) |
| `--bitrate kbit/s` | video bit rate, default 8000 |
| `--encoder name` | force an FFmpeg H.264 encoder; default `h264_nvenc`, falling back to `libx264` |

Controller 2 is plugged in from boot whenever `--host` is given, so the game always sees two pads. It
is neutral until a player joins and goes neutral again when they leave. A second local controller is
ignored while hosting (port 2 belongs to the network player).

Player 2's controls: any gamepad the browser exposes with the standard mapping (press a button on it
once so the browser reveals it), or the keyboard: `W A S D` left stick, arrows d-pad, `Space` ✕, `Esc`
○, `J` □, `K` △, `Q` L1, `C` R1, `Shift` L2, `E` R2, `Enter` Start, `Backspace` Select.

## Playing over the internet

There is no NAT traversal server in this prototype. Pick one of:

1. **A virtual LAN (recommended): Tailscale or ZeroTier.** Both players join the same tailnet / network;
   player 2 opens the link with the host's `100.x.y.z` (Tailscale) or ZeroTier address, which the host
   lists among its "P2 opens" lines. No ports to open, traffic is encrypted end to end, and it usually
   connects directly (peer to peer) rather than through a relay.
2. **A port forward.** Forward TCP 47920 and UDP 47921 on the host's router to the host, start with
   `--host --stun stun:stun.l.google.com:19302`, and give player 2 `http://<public ip>:47920/#code=…`.
   The page is plain HTTP; the media and input are encrypted by WebRTC (DTLS-SRTP) regardless.

Bandwidth: the host uploads 6–8 Mbit/s of video (CBR at `--bitrate` for 60 fps; fewer game frames
mean proportionally less) plus ~110 kbit/s of sound; player 2 uploads ~120 kbit/s of input (125
small packets a second). On a slow uplink start the host with `--bitrate 3000`.

## How it works

```
host (ps2run --host)                                         player 2 (browser, web/netplay.html)
  emulator -> GS present -> frame tap (RGBA)
     -> encoder thread: RGBA->I420, H.264 (NVENC p1/ull,     <video>  <- H.264 RTP (PT 96)
        constrained baseline, CBR, IDR every 2 s + on PLI)
  SPU2 48 kHz stereo -> Opus 10 ms frames                    <video>  <- Opus RTP (PT 111)
  sio2 port 2 <- latest input packet                         data channel "input" <- pad state, ~125/s
  HTTP: GET /  POST /offer  POST /answer                     fetch()
```

* `host/netplay.cpp` — HTTP server, WebRTC peer (libdatachannel), video/audio encoding, input.
* `web/netplay.html` — the client page, embedded into `ps2run` at build time (no files to deploy).
* `ps2::set_frame_tap` hands every presented frame to the encoder from the render thread, both with a
  window (WebGPU surface) and headless. The encoder thread keeps only the newest frame (a mailbox), so a
  slow encode drops frames instead of adding delay.
* Frames are encoded at the console's output size (e.g. 640×448); `PS2_SCALE` upscales are halved
  until ≤1280 wide. The page stretches the picture to 4:3 like the window does.
* The host offers the RTP playout-delay header extension with min = max = 0, and the page sets
  `jitterBufferTarget = 0`, so the browser shows each frame as soon as it is decoded.
* Video and audio use different stream ids, so the browser never delays the picture to lip-sync it.
* Built only when libdatachannel, libavcodec/libavutil/libswscale and opus are found
  (`find_package(LibDataChannel)` + pkg-config); otherwise `ps2run` builds without `--host`.

### Signalling

The host makes the offer (it defines the codecs), the browser answers. Both sides gather all ICE
candidates before sending a description (no trickle), so signalling is two requests:

| Request | Body | Reply |
| --- | --- | --- |
| `GET /` | — | the client page |
| `POST /offer` | `<code>` | `200`: `<session id>\n<offer SDP>` · `403` wrong code · `429` locked out · `409` another player is connected |
| `POST /answer` | `<code>\n<session id>\n<answer SDP>` | `204` · `400` bad SDP · `409` unknown session |

ICE uses one UDP port (`port+1`, libjuice UDP mux) for every connection. The host's candidates are its
interface addresses (plus a server-reflexive one with `--stun`). Browsers hide their own addresses behind
mDNS names, which is fine: their checks reach the host and become peer-reflexive candidates.

### Data channel messages

Channel `input`, created by the host, `ordered: false, maxRetransmits: 0`. Binary, little-endian. Every
input packet carries the whole pad, so a lost packet is simply superseded by the next one 8 ms later
(latest wins: a packet whose sequence number is not newer than the last applied one is dropped).

| Type | Direction | Layout |
| --- | --- | --- |
| 1 input | P2 → host | `u8 1, u8 probe, u16 buttons, u32 seq, u8 lx, ly, rx, ry, u8 l2, r2` (14 bytes) |
| 2 ping | both | `u8 2, f64 sender time ms` (9 bytes); the receiver echoes it as a pong |
| 3 pong | both | `u8 3, f64 the ping's time` |
| text | host → P2 | JSON once a second: game fps, frames sent, video/audio kbit/s, encoder, RTT |

`buttons` uses the PS2 pad bit order with 1 = pressed (bit 0 Select, 1 L3, 2 R3, 3 Start, 4 Up,
5 Right, 6 Down, 7 Left, 8 L2, 9 R2, 10 L1, 11 R1, 12 △, 13 ○, 14 ✕, 15 □). Sticks are 0x00..0xFF with
0x80 centred (0x00 = left/up). `l2`/`r2` are pressures, 0xFF for a digital press. `probe` is 0 except in
the latency test: while it is non-zero the host paints its 8 bits as black/white bars into the top-left
64×24 pixels of the frames it encodes, and the page times how long the bars take to appear.

### Security

* A random 6-digit session code gates both signalling requests; a wrong code locks the endpoints for
  2 s (≤ 1800 guesses an hour, so ~3 weeks on average to hit a code) and is logged with the address.
* Once a player is connected, offers from any other address are refused until that player leaves; the
  same address may reconnect (page reload).
* Media and input travel inside the DTLS-SRTP/SCTP association of that one peer; packets from anyone
  else are not part of it.
* Network input is parsed as fixed-size records only (unknown types and wrong sizes are dropped) and
  only ever becomes pad state. HTTP headers are capped at 8 KiB, bodies at 64 KiB, sockets time out
  after 3 s, and the audio queue is capped at 200 ms.
* The page itself is served over plain HTTP; on an untrusted network use Tailscale/ZeroTier.

## Measured (loopback)

Host and browser on the same laptop (RTX 4050 NVENC, headless Chromium 152), MK: Shaolin Monks co-op
from a savestate, while other emulator runs and builds loaded the machine. 25–30 s per run.

| Run | input → frame shown, median / p95 | of which until packets arrived | P2 fps | video | audio |
| --- | --- | --- | --- | --- | --- |
| headless host, NVENC | 21.9 / 33.7 ms (n = 116) | 12.4 ms | 51.8 | 7.2 Mbit/s | 116 kbit/s |
| windowed host (WebGPU surface), NVENC | 22.8 / 36.1 ms (n = 115) | 13.2 ms | 50.8 | 7.1 Mbit/s | 114 kbit/s |
| headless host, libx264 | 22.7 ms median (n = 65) | 14.3 ms | 48.6 | 5.5 Mbit/s | 108 kbit/s |

* Of the ~22 ms, the host side is ~12 ms (logged as `probe arrival->sent`): on average half a frame
  waiting for the next present, then the blocking readback, RGBA→I420 and the encode (~3 ms). Network
  on loopback is under 1 ms (ping 0.5 ms median); the rest (~9 ms) is Chromium decoding and compositing.
  Zero frames were dropped and no keyframe requests were needed.
* The probe measures what streaming adds. Player 2 also has the game's own input lag, the same as
  player 1. Over a real network add the one-way delay (half the ping shown on the page).
* The stream runs at the emulator's speed. In these runs the loaded laptop emulated 50–57 fps instead
  of 60, and the browser concealed 6–10% of the audio samples for the sound the emulator did not
  produce in time; on an idle machine at full speed there is nothing to conceal.
* The frame tap reads each frame back before the next one is drawn (`PS2_NETPLAY_ASYNC=1` switches to
  the window's asynchronous readback, which shows the previous frame, one frame later); this cost no
  measurable fps (57 vs 50–53 fps game speed in an A/B run) and only runs while a player is connected.

## Limitations and next steps

* No congestion control: video is CBR at `--bitrate`; packet loss is repaired by NACK retransmission
  and keyframes on PLI, but a link slower than the bit rate will stutter. Next: adapt the bit rate from
  RTCP receiver reports (loss, jitter) or REMB.
* One remote player; no spectators. No TURN relay, so two strict NATs need Tailscale/ZeroTier.
* Hardware encoding is NVENC only (else libx264 on the CPU, ~3 ms a frame at 640×448). Next: VAAPI.
* The browser must decode H.264 (all current desktop browsers do; Chromium builds without proprietary
  codecs do not, and the page says so). No touch controls for phones yet.
* The P2 picture is not lip-synced to the sound on purpose (separate streams), so sound can trail by a
  few tens of ms.

## Testing

`scripts/netplay_loopback.sh` starts a headless host, joins it from a headless Chromium (nothing opens
on the desktop, output is muted), plays a P2 input script, and prints both sides' numbers:

```sh
scripts/netplay_loopback.sh /tmp/np 30 '5000:stickl:2000,9000:square:150' -- \
  build/native-mksm/ps2run game.elf --disc game.iso --load-state coop.state
```

The page's test mode (`#code=…&test=SECONDS&script=…`) does the measuring: it sends a new probe id
every ~250 ms and records when the matching bars are first presented (`requestVideoFrameCallback`),
which is input → host → encode → network → decode → display. `inputToReceiveMs` is the same up to the
moment the frame's packets arrived. It also reports fps, bit rates, decoded/dropped frames, Opus
packets and concealment, and ping.
