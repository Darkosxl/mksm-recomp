# MKSM server

Private, invite-only hosting for the browser build: Caddy (TLS, the auth gate, static files) in front of `signal.mjs` (invites, cookie auth, 2-player rooms, TURN credentials), plus coturn for relayed WebRTC.
Everything, the disc image included, is behind the invite cookie.

## VPS requirements

- Debian 12 / Ubuntu 24.04 or similar, with a public IPv4 address.
- A domain (or subdomain) whose A record points at that address.
- Open ports: 80/tcp (ACME + redirect), 443/tcp (443/udp optional, for HTTP/3), 3478/udp+tcp (STUN/TURN), 49160–49200/udp (TURN relays).
- ≥10 GB disk (3.3 GB disc image + ~100 MB per build kept), ≥100 Mbps uplink. 1 vCPU / 1 GB RAM is enough.
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

The first deploy generates `COOKIE_SECRET`, `ADMIN_SECRET` and `TURN_SECRET` on the VPS in `/etc/mksm/signal.env`; they never leave it. The admin secret is printed once, on that first run: put it in a password manager. Then mint the first invite (below) and open it in your own browser.

## Deploying a new build

Rebuild (`scripts/build_web.sh mksm`) and rerun `server/deploy.sh user@host your.domain`.

- Builds are immutable under `/v/<hash>/`, where the hash is a SHA-256 over `ps2web.{html,js,wasm,data}` (not only the wasm, so a page-only change still gets a new directory). A running session keeps loading the build it started with, and a room stays pinned to the build it was created on.
- `current.json` (`{"build": "<hash>"}`) flips atomically, only after the new build directory is complete.
- The disc image is uploaded only when its size differs from the copy on the server (resumable).
- Services restart only when their code or config changed; Caddy is reloaded gracefully.
- Old builds are not pruned. To prune by hand: `cat /srv/mksm/current.json; ls -t /srv/mksm/v`, then `rm -r` the directories the current pointer does not name.

## Server layout

| Path | What |
|---|---|
| `/srv/mksm/` | Web root: `index.html`, `current.json`, `disc.iso`, `v/<hash>/` builds |
| `/opt/mksm/` | `signal.mjs`, `package.json`, `node_modules/`; `etc/` holds the staged unit and configs |
| `/etc/mksm/signal.env` | Secrets and settings for `signal.mjs` (root:mksm, 0640) |
| `/etc/mksm/caddy.env` | `DOMAIN`, `MKSM_ROOT`, `SIGNAL_ADDR` for the Caddyfile (no secrets) |
| `/var/lib/mksm/invites.json` | Invite store (`DATA_DIR`; token hashes only) |
| `/etc/caddy/Caddyfile`, `/etc/systemd/system/caddy.service.d/mksm.conf` | Caddy config and the drop-in that loads `caddy.env` |
| `/etc/turnserver.conf` | Rendered coturn config (contains the TURN secret) |
| `/usr/local/bin/mksm-invite` | Mints an invite from the VPS shell |
| `mksm-signal`, `caddy`, `coturn` | systemd units |

Logs: `journalctl -u mksm-signal -u caddy -u coturn`.

## Invites

```sh
ssh user@host sudo mksm-invite 1 alice      # single-use link
ssh user@host sudo mksm-invite 5 "lan party" # 5 uses
```

Each prints JSON with a `link` (`https://your.domain/invite?t=…`). Opening it sets a signed, httpOnly, `Secure`, `SameSite=Lax` cookie (`__Host-mksm`, 400 days) and redirects to `/`; reopening it with a valid cookie does not use it up. Only a SHA-256 of each token is stored. Over HTTPS from anywhere, with the admin secret:

```sh
curl -X POST -H "Authorization: Bearer $ADMIN_SECRET" "https://your.domain/admin/invite?uses=1&note=alice"
curl -H "Authorization: Bearer $ADMIN_SECRET" https://your.domain/admin/invites       # list (uses, used, revoked)
curl -X POST -H "Authorization: Bearer $ADMIN_SECRET" "https://your.domain/admin/revoke?id=<id>"
curl -H "Authorization: Bearer $ADMIN_SECRET" https://your.domain/admin/status        # rooms, peers, sockets
```

Revoking an invite also signs out everyone who joined through it. Changing `COOKIE_SECRET` signs out everyone.

## Routes

| Path | Served by | Auth |
|---|---|---|
| `/`, `/play/<room>` | `site/index.html` | cookie |
| `/current.json` | `{"build": "<hash>"}`, `no-cache` | cookie |
| `/v/<hash>/ps2web.*` | build, `immutable`, `.br`/`.gz` when accepted | cookie |
| `/disc.iso` | disc image, Range requests | cookie |
| `/ws`, `/turn` | `signal.mjs` | cookie (checked by Caddy and again by `signal.mjs`) |
| `/invite?t=` | `signal.mjs`: token → cookie → `302 /` | none |
| `/admin/*` | `signal.mjs` | `Authorization: Bearer <ADMIN_SECRET>` |
| `/auth` | `signal.mjs`: 200 with a valid cookie, else 401 (Caddy `forward_auth`) | — |

Every response carries COOP `same-origin`, COEP `require-corp` and CORP `same-origin`. The game page is opened as `/v/<hash>/ps2web.html?disc=/disc.iso&room=<room>` (`room` omitted for solo play).

## Signalling protocol

For the lockstep page (`web/lockstep.js`, a later milestone). JSON text frames over `wss://your.domain/ws`; the cookie is required, frames over 64 KiB close the socket, and a socket that does not answer a ping within 20–40 s is dropped (counts as leaving). A socket is in at most one room; a room holds at most 2 sockets.

`GET /turn` → `{username, credential, ttl, iceServers}`; pass `iceServers` to `new RTCPeerConnection({iceServers})`. `username` is `<expiry unix s>:<invite id>`, `credential` is base64 HMAC-SHA1 of it with coturn's `static-auth-secret`, valid for `ttl` = 3600 s. Fetch a fresh one before each connection attempt.

Client → server:

| Message | Reply |
|---|---|
| `{type:'create', build?}` | `{type:'created', room, build}`. Reserves a room id (12 chars of `a-z2-9` minus look-alikes, 60 bits) pinned to `build` (the `/v/<hash>` the page runs). Does not join. |
| `{type:'info', room}` | `{type:'info', room, build, peers}` (`peers` = 0–2) |
| `{type:'join', room, build?}` | `{type:'joined', room, id, host, peer, build}`; `id` is this socket's peer id, `peer` the other peer's id or `null`, `host` is true for the first one in. The peer already in receives `{type:'peer-joined', peer}`. |
| `{type:'leave'}` | `{type:'left'}`; the other peer receives `peer-left` |
| `{type:'offer', sdp}`, `{type:'answer', sdp}`, `{type:'ice', candidate}`, `{type:'ctl', …}` | none; the other peer receives the same object plus `from: <sender id>`. `ctl` is free-form, for small messages before the data channels are up. |

Server → client, unprompted: `{type:'peer-joined', peer}` and `{type:'peer-left', peer, host:true}` (the one left behind owns the running session and becomes host). Closing the socket counts as leaving.

Errors: `{type:'error', error, request}` with `error` one of `not-found` (no such room, or it expired), `full`, `build-mismatch` (join with a `build` different from the room's), `already-joined`, `not-joined` (relay before join), `no-peer` (relay while alone), `busy` (1000 rooms open), `bad-request`.

Session flow:

1. The landing page sends `create` with the hash from `current.json` and goes to `/play/<room>`; the room link is shared. `/play/<room>` uses `info` to find the room's build and opens that build's game page with `?room=`.
2. Each game page fetches `/turn`, opens `/ws` and sends `join`. A room with nobody in it is kept for `ROOM_GRACE_MS` (10 min) before it is dropped.
3. The peer whose `joined` reply has a non-null `peer` (the newcomer) creates the `RTCPeerConnection` and data channels (`in`: `ordered:false, maxRetransmits:0`; `ctl`: reliable), sends `offer`, and both sides trickle `ice`. The other side answers.
4. The W3 handshake (build hash, disc id, lockstep config, input delay) and the W4 snapshot transfer run over the `ctl` data channel, not the WebSocket. The host is the one that runs the session and sends the snapshot.
5. On `peer-left`, the remaining page keeps the socket open and waits for a new `peer-joined` (drop-in); it then gets the next `offer`.

## Local test

```sh
cd server && npm install && node test.mjs        # or CADDY=/path/to/caddy-2.11 node test.mjs, or --no-caddy
```

Starts `signal.mjs` on a free loopback port with throwaway secrets (and, when `caddy` is installed, Caddy with this Caddyfile and a temp web root holding a fake build and disc) and checks invites, cookies, `/auth`, `/turn`, rooms (create, join, relay, third-peer reject, leave notifications, drop-in, expiry), and through Caddy the auth gate on every path, the isolation and cache headers, precompressed wasm and disc Range reads.

`signal.mjs` alone: `COOKIE_SECRET=… ADMIN_SECRET=… TURN_SECRET=… node signal.mjs` (each ≥ 32 characters; also `HOST`, `PORT` 8787, `DATA_DIR` ./data, `PUBLIC_ORIGIN`, `TURN_HOST`, `TURN_PORT` 3478, `TURN_TTL` 3600, `ROOM_GRACE_MS` 600000).
