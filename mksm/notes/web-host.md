# MKSM web: host-as-server mode (2026-10-16)

The player who opens the lobby serves everything from their own PC: the page, the wasm, the disc image and the
signalling. Friends reach it through a free Cloudflare quick tunnel (`https://<random>.trycloudflare.com`, no account),
so they get HTTPS (needed for SharedArrayBuffer) and install nothing. No VPS, no TURN server. The VPS path
(`server/deploy.sh`) still works as before.

Branch `feat/host-server`: `server/host.mjs`, `mksm/host.sh`, the binary relay in `server/signal.mjs`. The page side
(`web/lockstep.js`, `web/shell.html`) is done separately.

## For the host

Once:

```sh
mksm/build.sh <your.iso> --web      # the web build, in build/web-mksm
```

Every session:

```sh
mksm/host.sh --disc games/mksm/disc.iso          # --port N (8620), --build DIR, --no-tunnel, --open
```

The first run downloads `cloudflared` into `tools/` (a pinned release, checked against its published SHA-256; never a
system install) and runs `npm ci` in `server/` (for `ws`). Then it starts:

1. `server/host.mjs` on `127.0.0.1:8620`, which starts `server/signal.mjs` with secrets generated for this run (kept in
   memory) and its invite store in a temp directory (deleted at exit);
2. `tools/cloudflared tunnel --no-autoupdate --url http://127.0.0.1:8620`, whose `*.trycloudflare.com` URL it reads
   and passes to host.mjs.

It prints:

- your own URL, `http://localhost:8620/ps2web.html?room=new`, to open in your browser (`--open` does it). You are the
  host (P1); the game starts at once and you can play alone;
- the invite link, `https://<random>.trycloudflare.com/invite?t=<token>`. Once your page has created its room, the
  page (and host.sh) show it with `&room=<id>`, which takes your friend straight into your game.

Send that link to one friend. It works **once**. For another one (a second friend later, or if the link went to the
wrong person): `curl 'http://127.0.0.1:8620/host-info?new=1'`. A new link cancels the previous one if nobody used it yet.

Ctrl-C stops cloudflared, host.mjs and signal.mjs. Every run gets a new tunnel URL and new secrets, so old links and
old cookies stop working.

## For friends

1. Open the link in Chrome or Edge (WebGPU; on Linux `--enable-unsafe-webgpu --enable-features=Vulkan`, see
   `web-build.md`).
2. The link sets a cookie and redirects to `/ps2web.html?room=<id>`. The page, wasm (5.6 MB gzip) and data come from
   the host's PC through the tunnel; the disc is read on demand with Range requests.
3. The page joins the room through `wss://<tunnel>/ws` and the two browsers connect with WebRTC (public STUN only).
   If that fails, they relay their inputs and snapshots over the same WebSocket.

## Routes (server/host.mjs)

| Path | What | Who |
|---|---|---|
| `/`, `/ps2web.html`, other top-level `*.html/js/mjs/wasm/data` of the build | static, `.gz` when accepted, Range | host's browser, or cookie |
| `/disc.iso` | the `--disc` file, Range, never gzip | host's browser, or cookie |
| `/ws` | WebSocket to signal.mjs (rooms, signalling, binary relay) | host's browser (host.mjs adds its own cookie), or cookie + Origin = the tunnel |
| `/invite?t=<token>[&room=<id>]` | signal.mjs: cookie, then `302 /ps2web.html?room=<id>` (or `/`); a malformed room is 400 and keeps the token | anyone |
| `/auth` | signal.mjs: 200 with a valid cookie | anyone |
| `/host-info[?room=<id>][&new=1]` | `{tunnelUrl, inviteToken, inviteUrl, inviteUsed, room}`; `room` is remembered and added to `inviteUrl`, `new=1` mints a new invite | host's browser only |
| `POST /host-info/tunnel?url=https://…` | sets the tunnel URL (host.sh does this) | host's browser only |
| `/turn` | 404: no TURN in host mode, the page then uses public STUN | — |

Everything else (CMake files, dotfiles, subdirectories, `/admin`) is 404. Every response has COOP `same-origin`, COEP
`require-corp`, CORP `same-origin` and `Cache-Control: no-store`.

## Security model

- **The tunnel URL is not access control.** It is random but not secret (it is in the link, in browser history and
  in Cloudflare's logs). Everything except `/invite` needs the cookie.
- **The invite is single-use.** The token has 144 random bits; signal.mjs stores only its SHA-256. Redeeming it sets
  `__Host-mksm` (HMAC-signed, `HttpOnly; Secure; SameSite=Lax`). A used or replaced link is refused. The cookie
  works until host.mjs stops; the next run has a new `COOKIE_SECRET`, so all cookies stop working.
- **The host's own browser** needs no cookie. A request counts as "local" only if all of these hold:
  - its TCP peer is 127.0.0.1 or ::1;
  - it has no proxy header: no `Cf-*`, `X-Forwarded-*`, `Forwarded`, `X-Real-IP`, `CDN-Loop` or `Via`.
    Tunnel requests also arrive from 127.0.0.1 (cloudflared), but cloudflared always adds `Cf-Connecting-IP`,
    `X-Forwarded-For` and `Cf-Ray`;
  - its `Host` is `localhost`, `127.0.0.1` or `[::1]` with the port. This stops DNS rebinding;
  - if it has an `Origin`, that is a localhost origin. If it has `Sec-Fetch-Site`, that is `same-origin` or `none`.
    This stops other web sites the host visits from using the bypass (cross-site WebSocket, CSRF on `/host-info`).
- **`/host-info` and `/host-info/tunnel`** are local only (403 through the tunnel). The admin API of signal.mjs is never
  exposed; host.mjs calls it with an admin secret that exists only in its memory.
- **Only build outputs and the disc are served**, never other files of the build directory (`CMakeCache.txt` would
  show local paths).
- **Cloudflare sees the traffic.** TLS ends at Cloudflare's edge, so Cloudflare can read the page, the disc, the
  signalling and anything relayed over the WebSocket, cookie included. WebRTC data channels are DTLS end to end and
  do not pass through Cloudflare (only when the relay fallback is used does game traffic go through the tunnel).
- Quick tunnels are meant for testing, and Cloudflare's terms apply.

## Limits

- **No TURN.** `/turn` is 404 and the page uses public STUN only. When both players are behind strict NAT or CGNAT,
  ICE fails and the page falls back to the **WebSocket relay** in signal.mjs: binary messages are forwarded verbatim
  to the other peer in the room, at most 256 KiB each, paced to about 8 MB/s per sender by backpressure (never
  dropped). It adds the guest ↔ Cloudflare edge ↔ host round trip; the input delay D adapts as usual. Protocol:
  `server/README.md`.
- **Throughput.** The guest's first load (≈7 MB gzip) and its disc reads go up the host's upload link and through
  Cloudflare (measured below). In lockstep a disc cache miss blocks both games until the read arrives, so each miss
  costs about one guest ↔ host round trip.
- **Guest disc cache** (`web/disc-sw.js`, a service worker, only when the page is not on localhost). Every Range
  read of `disc.iso` is served from 1 MiB blocks kept in Cache Storage, so a block crosses the tunnel at most once
  per tunnel URL (the origin changes every run, so the cache does too). After Start the page prefetches the
  `GAMEDATA.WA*` extents listed in `prefetch.json` (2248 MB, written by `mksm/build.sh --web`) with 4 parallel
  fetches, pausing whenever the game itself is waiting on the disc. The first visit installs the worker and
  reloads once, so the pthread workers start under it. `?nodisccache` turns it off.
- **Tunnel tail latency.** Quick tunnels answer most 1 MiB reads in 0.5–0.8 s but stall a few for 10–15 s
  (measured: `0.57 0.67 11.46 0.81 0.48 0.71` s; on localhost `0.003–0.124` s). In lockstep that stalls both games.
  The worker hedges: a block not answered after 1.5 s gets a second request, after 4 s a third; the first
  complete answer wins and the others abort.
- One tunnel per run, and the URL changes every run.
- Quick tunnels have no uptime guarantee, do not support Server-Sent Events, and allow 200 requests in flight
  (more get `429`). The page uses neither SSE nor that many parallel requests.

## Measurements

`server/host_tunnel_test.mjs`, three runs on 2026-10-16 through real quick tunnels (Cloudflare's Frankfurt edge),
cloudflared 2026.10.1. Both ends were on this laptop, so every request crossed the laptop ↔ edge link twice (client →
edge, edge → cloudflared); a friend elsewhere pays their own link to their nearest edge plus the edge ↔ host leg.

| What | Result |
|---|---|
| cloudflared start → `trycloudflare.com` URL | 6 s |
| start → the tunnel answers from host.mjs 3 times in a row | 7–34 s (edges return `530` until they know the tunnel) |
| Gate through the tunnel | 401 without the cookie on `/`, the page, wasm, disc and `/turn`; `/host-info` 403; invite → 302 to `/ps2web.html?room=<id>` + cookie; reused invite 403 |
| 50 MiB disc, one GET through the tunnel | 3.6–4.0 s, **13.1–14.5 MB/s**, bytes identical (SHA-256), not recompressed |
| 64 KiB disc Range read (20 sequential, keep-alive) | **p50 122–145 ms**, p90 140–183 ms, exact bytes, `206`, no `Content-Encoding` |
| COOP/COEP/CORP headers | arrive intact through Cloudflare |
| Relay round trip (guest → tunnel → host → tunnel → guest, 3-byte binary) | **p50 94–113 ms** |
| Relay 20 MiB of 64 KiB messages, host → guest | 6.6–8.2 MB/s (the relay's 8 MB/s pacing), complete and in order |
| Relay 20 MiB of 64 KiB messages, guest → host | 1.7–3.0 MB/s, complete and in order (WebSocket upload into the tunnel is the slow direction) |
| Ctrl-C | host.sh, cloudflared, host.mjs and signal.mjs gone within 0.6 s; temp dirs removed |

What it means for a session: the guest's first load (≈7 MB gzip) takes about half a second plus the host's upload
time; each disc cache miss on the guest costs one round trip (≈120–150 ms here); a 6–13 MB snapshot over the relay
(host → guest) takes 1–2 s. Inputs are tiny, so only the round trip matters for them.

Tests: `cd server && node host_test.mjs` (loopback, 20 checks: the gate with cloudflared-like headers, `/host-info`,
the single-use invite and room redirect, gzip, Range, `/ws` rules, the relay through the proxy, shutdown) and
`node host_tunnel_test.mjs` (the real tunnel run above, 13 checks).

## Troubleshooting

| Problem | Fix |
|---|---|
| host.sh: no `trycloudflare.com` URL | Read the cloudflared log it prints. Outbound UDP 7844 (QUIC) blocked: try again, cloudflared falls back to HTTP/2 on TCP 7844; a strict firewall must allow TCP 7844 to Cloudflare. A `~/.cloudflared/config.yml` (named tunnel) can stop quick tunnels: move it away. |
| The tunnel URL does not resolve yet | New quick-tunnel host names take a few seconds to appear in DNS. A resolver that cached the NXDOMAIN may need a minute. host.sh checks the tunnel without looking the name up (`curl --connect-to`). |
| Cloudflare error page (HTTP 530) right after start | Cloudflare's edges learn a new tunnel over a few seconds to half a minute. host.sh waits for 3 good answers in a row before printing the invite; retry if a friend was faster. |
| Friend sees "This site is invite-only" | They have no cookie: the link was used already (by them in another browser, or by someone else), replaced, or from an earlier run. Mint a new one with `/host-info?new=1`. |
| Friend sees "This invite link is invalid, revoked or used up" | Same: send a fresh link. |
| "No disc image at disc.iso" | Pass `--disc <iso>` to host.sh. |
| `cannot listen on 127.0.0.1:8620` | Something else uses the port: `--port 8621`. The memory card lives in the page origin, so a different port means a different (empty) card for the host. |
| Players connect but the game is slow to start | The guest downloads from the host's upload link; see the measurements. |
| Both on CGNAT, "connected via relay" | Expected without TURN; latency is higher. |
