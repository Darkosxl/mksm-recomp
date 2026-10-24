# MKSM server

Public hosting for the browser build: Caddy (TLS, the auth gate, static files) in front of `signal.mjs` (invites, cookie auth, 2-player rooms, TURN credentials), plus coturn for relayed WebRTC.
Pages, discs, multiplayer and TURN work without an invite by default. Admin endpoints still require their bearer secret. `PUBLIC_ACCESS=0` explicitly enables the legacy private mode. Public report/probe limits use a stable identity per client IP.

No VPS? See [Host mode](#host-mode): the player who opens the lobby serves everything from their own PC through a Cloudflare quick tunnel.

## VPS requirements

- Debian 12 / Ubuntu 24.04 or similar, with a public IPv4 address.
- A domain (or subdomain) whose A record points at that address.
- Open ports: 80/tcp (ACME + redirect), 443/tcp (443/udp optional, for HTTP/3), 3478/udp+tcp (STUN/TURN), 49160–49200/udp (TURN relays).
- ≥20 GB disk (3.3 GB disc image, 1.4 GB HD texture pack (both variants) plus the changed textures of every later pack version, ~100 MB per build kept), ≥100 Mbps uplink. 1 vCPU / 1 GB RAM is enough.
- Traffic: a new player who lets everything download pulls ~4 GB (disc ~2.4 GB + texture pack 1.09 GB (4x) / 0.31 GB (2x)); returning players read their browser caches. Check the VPS plan's traffic allowance before sharing invites widely.
- An ssh login that is root or has passwordless sudo.
- Caddy ≥ 2.11. 2.10.x answers precompressed `.br`/`.gz` files with `206 Partial Content` ([caddy#7250](https://github.com/caddyserver/caddy/issues/7250)); `deploy.sh` refuses it.

## First-time setup

Install the packages on the VPS. Caddy comes from its official apt repo; Debian 12 and Ubuntu 24.04 ship Node 18, so Node comes from NodeSource:

```sh
sudo apt install --yes debian-keyring debian-archive-keyring apt-transport-https curl gnupg coturn rsync openssl
curl -1sLf 'https://dl.cloudsmith.io/public/caddy/stable/gpg.key' | sudo gpg --dearmor -o /usr/share/keyrings/caddy-stable-archive-keyring.gpg
curl -1sLf 'https://dl.cloudsmith.io/public/caddy/stable/debian.deb.txt' | sudo tee /etc/apt/sources.list.d/caddy-stable.list
sudo chmod o+r /usr/share/keyrings/caddy-stable-archive-keyring.gpg /etc/apt/sources.list.d/caddy-stable.list
sudo apt update && sudo apt install --yes caddy
curl -fsSL https://deb.nodesource.com/setup_24.x | sudo -E bash - && sudo apt install --yes nodejs
```

Open the firewall (ufw shown; mirror it in the provider's firewall if there is one):

```sh
sudo ufw allow OpenSSH
sudo ufw allow 80/tcp && sudo ufw allow 443/tcp && sudo ufw allow 443/udp
sudo ufw allow 3478/udp && sudo ufw allow 3478/tcp && sudo ufw allow 49160:49200/udp
sudo ufw enable
```

Then, from the repo on your machine:

```sh
scripts/build_web.sh mksm
server/deploy.sh user@host your.domain
```

The first deploy generates `COOKIE_SECRET`, `ADMIN_SECRET` and `TURN_SECRET` on the VPS in `/etc/mksm/signal.env`; they never leave it. The admin secret is printed once, on that first run: put it in a password manager. Open the domain directly; no invite is required.

## Deploying a new build

Rebuild (`scripts/build_web.sh mksm`) and rerun `server/deploy.sh user@host your.domain`.

- Builds are immutable under `/v/<hash>/`, where the hash is a SHA-256 over every file uploaded there: `ps2web.*` (the `.gz`/`.br` sidecars aside), the page's `*.js` modules (`lockstep.js`, `lockstep-emu.js`, `disc-sw.js`, …) and `prefetch.json` (not only the wasm, so a page-only change still gets a new directory). A running session keeps loading the build it started with, and a room stays pinned to the build it was created on.
- `current.json` (`{"build": "<hash>"}`) flips atomically, only after the new build directory is complete.
- The disc image is uploaded only when its size differs from the copy on the server (resumable).
- Services restart only when their code or config changed; Caddy is reloaded gracefully.
- Old builds are not pruned. To prune by hand: `cat /srv/mksm/current.json; ls -t /srv/mksm/v`, then `rm -r` the directories the current pointer does not name.

## HD texture pack

Optional; the game runs with the original textures without it. Make both variants into one directory (unchanged textures keep their object, so a rerun only adds what changed), then deploy with `PACK_DIR`:

```sh
/usr/bin/python3 remaster/webpack.py <pack-v2> <out> --scale 4    # <out>: normally remaster-data/textures/web, never in git
/usr/bin/python3 remaster/webpack.py <pack-v2> <out> --scale 2
PACK_DIR=<out> server/deploy.sh user@host your.domain
```

- Layout: `obj/<key>.<sha12>.tex` (gzip of the texture, content-named), `<id>.txt` (one index per variant, content-named), `current.json` (`{"2": "<id>", "4": "<id>"}`). Size from pack-v2 (1211 textures): 1.09 GB (4x), 0.31 GB (2x).
- `deploy.sh` checks that `current.json` names indexes that exist, checks free disk against what a dry run of the upload would send (+256 MB), uploads only new objects (resumable, `.partial/`), then the indexes, then flips `/srv/mksm/pack/current.json` atomically. Objects and indexes of older pack versions stay (a page still on an old index keeps working); prune by hand.
- Objects and indexes are served as stored (`application/octet-stream`, `immutable`, never a `Content-Encoding`: the page decompresses them itself and keeps them compressed in Cache Storage); `current.json` is `no-cache`.

## Server layout

| Path | What |
|---|---|
| `/srv/mksm/` | Web root: `index.html`, `current.json`, `disc.iso`, `v/<hash>/` builds, `pack/` HD textures |
| `/opt/mksm/` | `signal.mjs`, `package.json`, `node_modules/`; `etc/` holds the staged unit and configs |
| `/etc/mksm/signal.env` | Secrets and settings for `signal.mjs` (root:mksm, 0640) |
| `/etc/mksm/caddy.env` | `DOMAIN`, `MKSM_ROOT`, `SIGNAL_ADDR` for the Caddyfile (no secrets) |
| `/var/lib/mksm/invites.json` | Invite store (`DATA_DIR`; token hashes only) |
| `/var/lib/mksm/reports/` | Player bug reports, `<time>-<rand>.png` + `.json` (0600, dir 0700) |
| `/etc/caddy/Caddyfile`, `/etc/systemd/system/caddy.service.d/mksm.conf` | Caddy config and the drop-in that loads `caddy.env` |
| `/etc/turnserver.conf` | Rendered coturn config (contains the TURN secret) |
| `/usr/local/bin/mksm-invite` | Mints an invite from the VPS shell |
| `mksm-signal`, `caddy`, `coturn` | systemd units |

Logs: `journalctl -u mksm-signal -u caddy -u coturn`.

## Legacy private mode

The site is public by default. The invite behavior below applies only when `PUBLIC_ACCESS=0` is explicitly set in `signal.env`.

```sh
ssh user@host sudo mksm-invite 1 alice      # single-use link
ssh user@host sudo mksm-invite 5 "lan party" # 5 uses
```

Each prints JSON with a `link` (`https://your.domain/invite?t=…`). Opening it sets a signed, httpOnly, `Secure`, `SameSite=Lax` cookie (`__Host-mksm`, 400 days) and redirects to `/`; reopening it with a valid cookie does not use it up. Only a SHA-256 of each token is stored.

Append `&room=<id>` to land the invitee in a room: the redirect goes to `ROOM_URL` with `{room}` replaced (default `/play/{room}`), for fresh and already-signed-in visitors alike. The id must be a 12-char room id or an 8-char personal code (room-id characters); anything else is `400` with no cookie and the token is not used. `ROOM_URL` must be a same-site path (starts with one `/`, contains `{room}`) or `signal.mjs` refuses to start, so the redirect can never leave the site.

Over HTTPS from anywhere, with the admin secret:

```sh
curl -X POST -H "Authorization: Bearer $ADMIN_SECRET" "https://your.domain/admin/invite?uses=1&note=alice"
curl -H "Authorization: Bearer $ADMIN_SECRET" https://your.domain/admin/invites       # list (uses, used, revoked)
curl -X POST -H "Authorization: Bearer $ADMIN_SECRET" "https://your.domain/admin/revoke?id=<id>"
curl -H "Authorization: Bearer $ADMIN_SECRET" https://your.domain/admin/status        # rooms, peers, sockets, relay {bytes, peakBacklog}
```

Revoking an invite also signs out everyone who joined through it. Changing `COOKIE_SECRET` signs out everyone.

## Routes

| Path | Served by | Auth |
|---|---|---|
| `/`, `/play/<code or room>` | `site/index.html` (landing page: nickname, personal code, join, controller check, settings) | cookie |
| `/current.json` | `{"build": "<hash>"}`, `no-cache` | cookie |
| `/v/<hash>/ps2web.*` | build, `immutable`, `.br`/`.gz` when accepted | cookie |
| `/disc.iso` | disc image, Range requests | cookie |
| `/pack/current.json` | `{"<variant>": "<index id>"}`, `no-cache` | cookie |
| `/pack/<id>.txt`, `/pack/obj/<key>.<sha12>.tex` | pack indexes and objects, `immutable`, raw bytes | cookie |
| `/ws`, `/turn` | `signal.mjs` | cookie (checked by Caddy and again by `signal.mjs`) |
| `POST /report` | `signal.mjs`: player bug report (below) | cookie (Caddy and `signal.mjs`) |
| `/invite?t=[&room=]` | `signal.mjs`: token → cookie → `302 /` (or `ROOM_URL` with the room) | none |
| `/admin/*` | `signal.mjs` | `Authorization: Bearer <ADMIN_SECRET>` |
| `/auth` | `signal.mjs`: 200 with a valid cookie, else 401 (Caddy `forward_auth`) | — |

Every response carries COOP `same-origin`, COEP `require-corp` and CORP `same-origin`. The game page is opened as `/v/<hash>/ps2web.html?disc=/disc.iso&room=<room>` (`room` omitted for solo play).

## Signalling protocol

For the lockstep page (`web/lockstep.js`) and the landing page. JSON text frames over `wss://your.domain/ws`, plus binary frames for the relay fallback (below); the cookie is required, text frames over 64 KiB and any frame over 1 MiB close the socket (1009), and a socket that does not answer a ping within 20–40 s is dropped (counts as leaving; a socket held by relay flow control is exempt). A socket is in at most one room; a room holds at most 2 sockets.

`GET /turn` → `{username, credential, ttl, iceServers}`; pass `iceServers` to `new RTCPeerConnection({iceServers})`. `username` is `<expiry unix s>:<invite id>`, `credential` is base64 HMAC-SHA1 of it with coturn's `static-auth-secret`, valid for `ttl` = 3600 s. Fetch a fresh one before each connection attempt.

Client → server:

| Message | Reply |
|---|---|
| `{type:'code', owner}` | `{type:'code', code}`: the personal code of `owner` (below) |
| `{type:'create', build?}` | `{type:'created', room, build}`. Reserves a room id (12 chars of `a-z2-9` minus look-alikes, 60 bits) pinned to `build` (the `/v/<hash>` the page runs). Does not join. |
| `{type:'info', room}` | `{type:'info', room, build, peers}` (`peers` = 0–2); for a personal code also `nick` (the host's) |
| `{type:'join', owner, nick?, build?, tab?}` | Hosts the owner's personal room (below): `{type:'joined', room: <code>, id, host:true, peer:null, build, nick:null}` |
| `{type:'join', room, nick?, build?, tab?}` | `{type:'joined', room, id, host, peer, build, nick?}`; `id` is this socket's peer id, `peer` the other peer's id or `null`, `host` is true for the first one in, `nick` the other peer's nickname when it sent one. The peer already in receives `{type:'peer-joined', peer, nick?}`. |
| `{type:'leave'}` | `{type:'left'}`; the other peer receives `peer-left` |
| `{type:'offer', sdp}`, `{type:'answer', sdp}`, `{type:'ice', candidate}`, `{type:'ctl', …}`, `{type:'transport', mode}` | none; the other peer receives the same object plus `from: <sender id>`. `ctl` is free-form, for small messages before the data channels are up. `transport` (`mode`: `'relay'` or `'p2p'`) announces which path the data channels use. |
| binary frame | none; relayed verbatim to the other peer (below) |

Server → client, unprompted: `{type:'peer-joined', peer, nick?}` and `{type:'peer-left', peer, host:true}` (the one left behind owns the running session and becomes host), or in a personal room `{type:'peer-left', peer, closed:true}` (the owner left: the room is gone and the guest is out of it), and `{type:'replaced'}` (a newer page of the same owner took the room). Closing the socket counts as leaving.

Personal codes (the landing page's lobby):
- `owner` is 16 random bytes as 32 lowercase hex chars, made and kept by the player's browser (`localStorage` `mksm-owner`). Its code is the first 40 bits of HMAC-SHA256(`COOKIE_SECRET`, `'code:' + owner`) as 8 room-id characters, shown as `ABCD-EFGH`; without the owner key nobody can work out a player's code, so changing `COOKIE_SECRET` changes every code. No storage: the room exists only while its owner is in it.
- `join` with `owner` creates the room on demand; the owner is always the host (P1, whose memory card the session uses). A second page of the same owner wins: the older one gets `replaced` and its guest `peer-left closed`. `join` with `room: <code>` is the guest (P2), or `offline` when the owner is not there.
- The owner leaving (or its socket dropping) closes the room: the guest gets `peer-left` with `closed:true`; there is no promotion. A guest leaving keeps the room.
- `tab` (8–32 hex chars, random per page session): a `join` whose `tab` matches a peer already in that room is the same page reconnecting, possibly before its old socket was noticed dead: the new socket takes the old one's place and peer id, and the other peer is not told.
- Guesses are rate-limited per invite: `info` and `join` by code draw from a bucket of `PROBE_BURST` (30) refilled at `PROBE_PER_MIN` (20) per minute, else `rate-limited`. `code` and owner joins are not limited.
- `nick`: NFKC-normalised, control and format characters (bidi overrides, zero-width) removed, whitespace collapsed, at most 20 characters; empty → `Player`. Clients render it as text only.

Errors: `{type:'error', error, request}` with `error` one of `not-found` (no such room, or it expired), `offline` (nobody hosts that personal code), `rate-limited`, `full`, `build-mismatch` (join with a `build` different from the room's), `already-joined`, `not-joined` (relay before join), `no-peer` (relay while alone), `too-big` (binary frame over `RELAY_MAX`), `busy` (1000 rooms open), `bad-request`. Binary frames report as `request:'relay'`.

Relay fallback: when ICE fails, the client carries its two data channels over this WebSocket. Every binary frame from a joined socket goes to the other peer as one binary frame, byte for byte, with nothing added (no sender id). The server does not look inside; the client's framing is byte 0 = channel (`0` in, `1` ctl), byte 1 = kind (`0` binary, `1` UTF-8 text), then the payload.

| Case | Behaviour |
|---|---|
| Frame ≤ `RELAY_MAX` (256 KiB) | relayed |
| Frame > `RELAY_MAX` | dropped, sender gets `{type:'error', error:'too-big', request:'relay'}`; the socket stays open |
| Sender not in a room | `{type:'error', error:'not-joined', request:'relay'}` |
| Sender alone in the room | dropped silently (normal while a peer leaves or drops in) |
| Rate / slow receiver | never dropped: each sender has a token bucket of `RELAY_RATE` bytes/s (8 MB/s) holding up to `RELAY_BURST` (1 MiB). While the bucket is in debt, or the receiver has more than `RELAY_BACKLOG` (4 MiB) queued, the server stops reading the sender, so TCP pushes back to the sender's `bufferedAmount`. The sender's later JSON frames wait behind its binary ones. |

Session flow:

1. The landing page asks for its `code` and shares `/play/<code>`. **Play** opens the build from `current.json` as `ps2web.html?disc=/disc.iso&room=<code>&host=1&lobby=/` (the page joins with `owner`, read from `localStorage`); a friend's `/play/<code>` uses `info` for the host's nickname and build and opens that build's page with `?room=<code>&lobby=/`. (Host mode still uses 12-char rooms: `create`, then `?room=`.)
2. Each game page fetches `/turn`, opens `/ws` and sends `join`. A room with nobody in it is kept for `ROOM_GRACE_MS` (10 min) before it is dropped.
3. The peer whose `joined` reply has a non-null `peer` (the newcomer) creates the `RTCPeerConnection` and data channels (`in`: `ordered:false, maxRetransmits:0`; `ctl`: reliable), sends `offer`, and both sides trickle `ice`. The other side answers.
4. The W3 handshake (build hash, disc id, lockstep config, input delay) and the W4 snapshot transfer run over the `ctl` data channel, not the WebSocket. The host is the one that runs the session and sends the snapshot.
5. On `peer-left`, the remaining page keeps the socket open and waits for a new `peer-joined` (drop-in); it then gets the next `offer`.

## Bug reports

`POST /report` (same origin, `Content-Type: application/json`): `{"title": ≤120 chars, "text": 1–4000 chars, "png": base64 PNG ≤ 6 MiB, "meta": object ≤ 4 KB as JSON}`, body ≤ 9 MiB (413 as soon as it passes that). 5 reports per hour per invite (429 after), 3 in flight at once (503). Each report is saved in `DATA_DIR/reports/` (`.png`, and `.json` with the meta plus invite id and note, user agent, time and the forward result) and, when both `FEMME_REPORT_URL` (e.g. `https://<board>/api/reports`) and `FEMME_REPORT_TOKEN` are set in `/etc/mksm/signal.env`, POSTed there with `Authorization: Bearer <token>` as `{title, text, png, meta}` (meta + `invite`, `server: "vps"`), 20 s timeout. Answer: `200 {"ok": true, "id": <FEMME id or null>, "forwarded": <bool>}`; a failed forward is still 200 (the copy is kept). Either variable unset: local copy only. The token is never logged or sent to the browser. Code: `report.mjs` (shared with host mode). To set the token: add both lines to `/etc/mksm/signal.env` (root:mksm 0640), then `sudo systemctl restart mksm-signal`.

## Host mode

`mksm/host.sh` runs the whole site on the host player's PC, without Caddy, coturn or a VPS. Guide, security model and troubleshooting: [`mksm/notes/web-host.md`](../mksm/notes/web-host.md).

- `host.mjs` listens on 127.0.0.1 only (default port 8620). It serves the build (`--build`, top-level `*.html/js/mjs/wasm/data` only, `.gz` when accepted) and the disc (`--disc`, at `/disc.iso`, Range) with COOP/COEP/CORP, using the static server exported by `scripts/lockstep_env.mjs`. It spawns `signal.mjs` with per-run random secrets (memory only), `DATA_DIR` in a temp directory and `ROOM_URL=/ps2web.html?room={room}`, and proxies `/ws`, `/auth` and `/invite` to it. `/admin` is not exposed; `/turn` is 404 (no TURN: the page uses public STUN and falls back to the binary relay above).
- **Gate:** every path except `/invite` needs the cookie, except for the host's own browser: TCP peer 127.0.0.1/::1, no proxy header (`Cf-*`, `X-Forwarded-*`, `Forwarded`, `X-Real-IP`, `CDN-Loop`, `Via`; cloudflared always adds `Cf-Connecting-IP` and `X-Forwarded-For`), a loopback `Host`, and `Origin`/`Sec-Fetch-Site` (when present) not naming another site. host.mjs adds its own cookie to that browser's `/ws` and `/auth` requests. A remote WebSocket with an `Origin` must come from the tunnel URL.
- **`/host-info`** (local only) → `{tunnelUrl, inviteToken, inviteUrl, inviteUsed, room}`. `?room=<id>` records the host's room and adds `&room=<id>` to `inviteUrl`; `?new=1` mints a new single-use invite (revoking the previous one if it is unused). `POST /host-info/tunnel?url=https://…` (local only) sets the tunnel URL; `host.sh` calls it once cloudflared prints its `*.trycloudflare.com` URL.
- `--pack <dir>` serves a texture pack at `/pack/` (same routes and headers as above, strict file names). Its `current.json` is answered with only the `--pack-variants` (comma list, default all) and `"background": false`, so the page fetches a texture only when the game asks for it. `host.sh` passes `--pack <checkout>/../../remaster-data/textures/web --pack-variants 2` (the 2x variant: a home uplink) when that pack exists; `--pack DIR` / `--no-pack` change it.
- **`POST /report`** is answered by host.mjs itself (same checks as above; rate limit per visitor: the host, or the guest's invite), saved in `--report-dir` (default `server/data/reports`, gitignored) and forwarded with `server: "host"` when `FEMME_REPORT_URL` and `FEMME_REPORT_TOKEN` are in the environment or in `${XDG_CONFIG_HOME:-~/.config}/mksm/report.env` (`KEY=VALUE` lines, chmod 600; the environment wins). `signal.mjs` does not get them.
- `host.sh` downloads `tools/cloudflared` (pinned release, SHA-256 checked) on first use, runs `npm ci` here if `node_modules` is missing, starts host.mjs and `cloudflared tunnel --no-autoupdate --url http://127.0.0.1:<port>`, prints the host's URL and the invite, and stops all of it on Ctrl-C.

Tests: `node host_test.mjs` (host.mjs on loopback: the gate with cloudflared-like headers, `/host-info`, single-use invite and room redirect, gzip, Range, the `/pack/` routes, `/ws` rules, relay through the proxy) and `node host_tunnel_test.mjs` (needs internet: `host.sh` with a real quick tunnel, then the gate, invite, Range, throughput and relay through it).

## Local test

```sh
cd server && npm install && node test.mjs        # or CADDY=/path/to/caddy-2.11 node test.mjs, or --no-caddy
```

Starts `signal.mjs` on a free loopback port with throwaway secrets (and, when `caddy` is installed, Caddy with this Caddyfile and a temp web root holding a fake build and disc) and checks invites (including `&room=` and `ROOM_URL`), cookies, `/auth`, `/turn`, rooms (create, join, relay, third-peer reject, leave notifications, drop-in, expiry), personal codes (derivation, join by owner and by code, offline, info, replaced, same-page rejoin, owner leaving closes the room, nickname sanitising, probe rate limit), `/report` (auth, validation, 413 early, rate limit, saved copy, forwarding to a stub FEMME, FEMME down or unset), the binary relay (byte-exact, size cap, 20 MiB paced by the rate limit and held by a stalled receiver, lossless and in order), and through Caddy the auth gate on every path, the isolation and cache headers, precompressed wasm, disc Range reads and the texture pack (`no-cache` pointer; immutable raw objects with no `Content-Encoding`, even with a stray `.gz` beside them).

`signal.mjs` alone: `COOKIE_SECRET=… ADMIN_SECRET=… TURN_SECRET=… node signal.mjs` (each ≥ 32 characters; also `HOST`, `PORT` 8787, `DATA_DIR` ./data, `PUBLIC_ORIGIN`, `TURN_HOST`, `TURN_PORT` 3478, `TURN_TTL` 3600, `ROOM_GRACE_MS` 600000, `ROOM_URL` `/play/{room}`, `RELAY_MAX` 262144, `RELAY_RATE` 8000000 bytes/s, `RELAY_BURST` 1048576, `RELAY_BACKLOG` 4194304, `PROBE_BURST` 30, `PROBE_PER_MIN` 20, `FEMME_REPORT_URL`, `FEMME_REPORT_TOKEN`).
