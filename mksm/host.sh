#!/usr/bin/env bash
# Host MK:SM from this PC for the browser build: server/host.mjs serves the game + your disc on 127.0.0.1 only, and a
# free Cloudflare quick tunnel (cloudflared, no account) gives friends an https://*.trycloudflare.com address for it.
# usage: mksm/host.sh [--port N] [--no-tunnel] [--open] [--build DIR] [--disc ISO] [--pack DIR | --no-pack]
#   --port N      local port for host.mjs (default 8620)
#   --no-tunnel   don't download or start cloudflared: only this PC can reach the game
#   --open        open your own game page in the default browser (xdg-open)
#   --build DIR   browser build to serve (default build/web-mksm, made by  mksm/build.sh <your.iso> --web)
#   --disc ISO    disc image to stream (default games/mksm/disc.iso, linked by mksm/build.sh)
#   --pack DIR    HD texture pack (default <checkout>/../../remaster-data/textures/web, made by remaster/webpack.py;
#                 skipped with a note when it is missing). Friends get the 2x variant, each texture only when the game
#                 asks for it (no background download over a home uplink)
#   --no-pack     original textures only
# Ctrl-C stops the tunnel and the server. Environment: HOST_MJS replaces server/host.mjs (tests).
set -euo pipefail
ROOT="$(cd "$(dirname "$0")/.." && pwd)"

# pinned cloudflared: GitHub's asset digest and the checksum list in the release notes agree on this sha256
CLOUDFLARED_VERSION=2026.10.1
CLOUDFLARED_SHA256=3bfc539f45d2620c71debb7a86be0efa737ed5ccbad9eb85c787116900e5c586
CF="$ROOT/tools/cloudflared"
HOST_MJS=${HOST_MJS:-$ROOT/server/host.mjs}

port=8620; tunnel=1; open=0; build="$ROOT/build/web-mksm"; disc="$ROOT/games/mksm/disc.iso"
pack="$(cd "$ROOT/../.." && pwd)/remaster-data/textures/web"; pack_given=0
while [ $# -gt 0 ]; do
  case "$1" in
    --port) port=${2:?--port needs a number}; shift ;;
    --no-tunnel) tunnel=0 ;;
    --open) open=1 ;;
    --build) build=${2:?--build needs a directory}; shift ;;
    --disc) disc=${2:?--disc needs a disc image}; shift ;;
    --pack) pack=${2:?--pack needs a directory}; pack_given=1; shift ;;
    --no-pack) pack= ;;
    -h|--help) sed -n '2,14s/^# \{0,1\}//p' "$0"; exit 0 ;;
    *) echo "unknown option $1 (see mksm/host.sh --help)" >&2; exit 2 ;;
  esac
  shift
done

die() { echo "host.sh: $*" >&2; exit 1; }
host_pid=; cf_pid=; dl_tmp=; logdir=

# fail <host|cloudflared> <message>: print the message and that log's tail, then exit (the EXIT trap tears down)
fail() {
  echo "host.sh: $2" >&2
  if [ -s "$logdir/$1.log" ]; then echo "--- last lines of $logdir/$1.log:" >&2; tail -n 20 "$logdir/$1.log" >&2; fi
  exit 1
}
# died <host|cloudflared> <name> <pid>: a child exited on its own; report how, then fail
died() {
  local rc=0 how
  wait "$3" 2>/dev/null || rc=$?
  how="exited with status $rc"; [ "$rc" -gt 128 ] && how="was killed by signal $((rc - 128))"
  fail "$1" "$2 $how"
}
# host.mjs's children (signal.mjs), refreshed while it runs so they can be stopped even if host.mjs dies first
host_kids=()
remember_kids() { mapfile -t host_kids < <(pgrep -P "$host_pid" || true); }
# stop <pid>...: TERM them, KILL whatever (incl. their children) is left after ~3 s, reap
stop() {
  local p k pids=() alive
  for p in "$@"; do [ -n "$p" ] && kill -0 "$p" 2>/dev/null && pids+=("$p"); done
  [ ${#pids[@]} -gt 0 ] || return 0
  for p in "${pids[@]}"; do while read -r k; do pids+=("$k"); done < <(pgrep -P "$p" || true); done
  kill -TERM "${pids[@]}" 2>/dev/null || true
  for _ in $(seq 30); do
    alive=0
    for p in "${pids[@]}"; do kill -0 "$p" 2>/dev/null && alive=1; done
    [ "$alive" = 0 ] && break
    sleep 0.1
  done
  kill -KILL "${pids[@]}" 2>/dev/null || true
  wait "${pids[@]}" 2>/dev/null || true
}
cleanup() {
  local rc=$? k orphans=()
  trap - INT TERM EXIT
  [ -z "$dl_tmp" ] || rm -f "$dl_tmp"
  for k in "${host_kids[@]}"; do grep -qa node "/proc/$k/cmdline" 2>/dev/null && orphans+=("$k"); done
  # background jobs of a non-interactive shell ignore SIGINT, so Ctrl-C has to be passed on explicitly
  stop "$cf_pid" "$host_pid" "${orphans[@]}"
  # logs are kept only when something failed
  if [ -n "$logdir" ] && { [ "$rc" = 130 ] || [ "$rc" = 143 ]; }; then rm -rf "$logdir"; fi
}
trap cleanup EXIT
trap 'echo; exit 130' INT
trap 'exit 143' TERM

# --- checks (before any download)
command -v node > /dev/null || die "node is not on PATH: install Node.js 20 or newer (https://nodejs.org)"
[ "$(node -p 'process.versions.node.split(".")[0]')" -ge 20 ] || die "node $(node --version) is too old: Node.js 20 or newer is needed"
command -v curl > /dev/null || die "curl is not on PATH"
[ -f "$build/ps2web.html" ] || die "no browser build in $build (ps2web.html is missing): build it with  mksm/build.sh <your.iso> --web"
if [ ! -f "$disc" ]; then
  [ -L "$disc" ] && die "$disc links to $(readlink "$disc"), which is gone: re-run  mksm/build.sh <your.iso> --web  or pass --disc <your.iso>"
  die "no disc image at $disc: run  mksm/build.sh <your.iso> --web  (it links games/mksm/disc.iso) or pass --disc <your.iso>"
fi
[ -f "$HOST_MJS" ] || die "missing $HOST_MJS"
[[ $port =~ ^[0-9]+$ ]] && [ "$port" -ge 1 ] && [ "$port" -le 65535 ] || die "--port must be a number from 1 to 65535"
if (exec 3<> "/dev/tcp/127.0.0.1/$port") 2> /dev/null; then
  die "something is already listening on 127.0.0.1:$port (another mksm/host.sh?): stop it or pick another --port"
fi
build=$(realpath "$build"); disc=$(realpath "$disc")
pack_args=()
if [ -n "$pack" ] && [ -f "$pack/current.json" ]; then
  pack_args=(--pack "$(realpath "$pack")" --pack-variants 2)
  echo "== HD texture pack $pack (2x variant, each texture sent when a game asks for it)"
elif [ -n "$pack" ]; then
  [ "$pack_given" = 0 ] || die "no texture pack at $pack (current.json is missing): make it with remaster/webpack.py, or leave out --pack"
  echo "== no HD texture pack at $pack: original textures only (make it with remaster/webpack.py)"
fi

if [ ! -d "$ROOT/server/node_modules/ws" ]; then
  echo "== installing the server's dependencies (npm ci in server/)"
  (cd "$ROOT/server" && npm ci --omit=dev --no-audit --no-fund) || die "npm ci failed in $ROOT/server"
fi

# --- cloudflared, downloaded once into tools/ and checked against the pinned sha256
if [ "$tunnel" = 1 ] && [ ! -x "$CF" ]; then
  [ "$(uname -s) $(uname -m)" = "Linux x86_64" ] || die "only the Linux x86_64 cloudflared is pinned here (this is $(uname -s) $(uname -m)):
  install cloudflared yourself and put it (or a symlink) at $CF, or run with --no-tunnel"
  echo "== downloading cloudflared $CLOUDFLARED_VERSION into tools/"
  mkdir -p "$ROOT/tools"
  dl_tmp=$(mktemp "$ROOT/tools/.cloudflared.XXXXXX")
  curl -fL# --retry 3 --proto '=https' -o "$dl_tmp" \
    "https://github.com/cloudflare/cloudflared/releases/download/$CLOUDFLARED_VERSION/cloudflared-linux-amd64" ||
    die "downloading cloudflared failed"
  sum=$(sha256sum "$dl_tmp" | cut -d' ' -f1)
  [ "$sum" = "$CLOUDFLARED_SHA256" ] || die "cloudflared checksum mismatch (got $sum, expected $CLOUDFLARED_SHA256); deleted the download"
  chmod 755 "$dl_tmp"
  mv -f "$dl_tmp" "$CF"; dl_tmp=
fi

# --- host.mjs
logdir=$(mktemp -d "${TMPDIR:-/tmp}/mksm-host.XXXXXX")
info() { curl -fsS --max-time "${2:-3}" "http://127.0.0.1:$port/host-info${1:-}"; }
# /host-info JSON on stdin -> "inviteUrl|room|inviteUsed|tunnelUrl" (missing/null fields empty)
fields() {
  node -e 'const j = JSON.parse(require("fs").readFileSync(0, "utf8"));
    console.log([j.inviteUrl, j.room, j.inviteUsed, j.tunnelUrl].map(v => v == null ? "" : String(v)).join("|"))'
}
node "$HOST_MJS" --port "$port" --build "$build" --disc "$disc" "${pack_args[@]}" > "$logdir/host.log" 2>&1 &
host_pid=$!
for i in $(seq 150); do # ~15 s
  kill -0 "$host_pid" 2> /dev/null || died host host.mjs "$host_pid"
  info "" 1 > /dev/null 2>&1 && break
  [ "$i" = 150 ] && fail host "host.mjs did not answer http://127.0.0.1:$port/host-info within 15 s"
  sleep 0.1
done
remember_kids
echo "== host.mjs is serving $build on 127.0.0.1:$port   (logs: $logdir, removed on Ctrl-C)"

# --- quick tunnel
tunnel_url=
if [ "$tunnel" = 1 ]; then
  echo "== starting a Cloudflare quick tunnel"
  "$CF" tunnel --no-autoupdate --url "http://127.0.0.1:$port" > "$logdir/cloudflared.log" 2>&1 &
  cf_pid=$!
  t0=$SECONDS
  for i in $(seq 120); do # ~60 s
    # the URL sits in a boxed banner ("|  https://four-random-words.trycloudflare.com  |"); api.trycloudflare.com is the
    # endpoint that hands it out and only shows up in error messages
    tunnel_url=$(grep -oE 'https://[a-z0-9-]+\.trycloudflare\.com' "$logdir/cloudflared.log" | grep -vm1 '^https://api\.' || true)
    [ -n "$tunnel_url" ] && break
    kill -0 "$cf_pid" 2> /dev/null || died cloudflared cloudflared "$cf_pid"
    [ "$i" = 120 ] && fail cloudflared "cloudflared gave no trycloudflare.com URL within 60 s"
    sleep 0.5
  done
  curl -fsS --max-time 5 -X POST -G --data-urlencode "url=$tunnel_url" "http://127.0.0.1:$port/host-info/tunnel" > /dev/null ||
    fail host "host.mjs did not accept the tunnel URL $tunnel_url"
  echo "== tunnel $tunnel_url is up after $((SECONDS - t0)) s; waiting until it reaches this PC"
  # The new hostname is NXDOMAIN for the first few seconds, and resolvers cache that for 60 s (the zone's SOA minimum),
  # so looking it up early would hide the tunnel from this PC for a minute. Instead connect to trycloudflare.com's own
  # (same Cloudflare edge) address and send the tunnel's name: the edge answers 530 until the tunnel is registered
  # (502 while the origin is unreachable); anything else (host.mjs answers / with 401 without an invite) came from here.
  # Edges learn a new tunnel over a few seconds (530 from some after the first success), so wait for 3 in a row.
  reached=; code=; streak=0
  for _ in $(seq 120); do # ~60 s
    kill -0 "$cf_pid" 2> /dev/null || died cloudflared cloudflared "$cf_pid"
    code=$(curl -s -o /dev/null -w '%{http_code}' --max-time 5 \
      --connect-to "${tunnel_url#https://}:443:trycloudflare.com:443" "$tunnel_url/" || true)
    case "$code" in 000 | 502 | 530) streak=0 ;; *) streak=$((streak + 1)) ;; esac
    [ "$streak" -lt 3 ] || { reached=$code; break; }
    sleep 0.5
  done
  if [ -n "$reached" ]; then
    echo "== tunnel reaches this PC (HTTP $reached) $((SECONDS - t0)) s after start"
  else
    echo "host.sh: warning: $tunnel_url did not answer within 60 s (last status $code); friends may need to retry in a minute" >&2
  fi
fi

# --- tell the host what to do
local_url="http://localhost:$port/ps2web.html?room=new"
json=$(info) || fail host "http://127.0.0.1:$port/host-info stopped answering"
IFS='|' read -r invite room used _ <<< "$(fields <<< "$json")"
last="$invite|$used"
echo
echo "  You (host):  $local_url"
if [ "$tunnel" = 1 ]; then
  echo "  Tunnel:      $tunnel_url"
  echo "  Invite:      ${invite:-(none yet)}"
  echo "               single-use: send it to one friend. When your game page opens its room, the invite with"
  echo "               &room=<id> is printed below (and shown on the page). Another invite:"
  echo "               curl 'http://127.0.0.1:$port/host-info?new=1'"
else
  echo "  --no-tunnel: only this PC can reach the game (host.mjs listens on 127.0.0.1 only)"
fi
echo "  Ctrl-C stops everything."
echo
if [ "$open" = 1 ]; then
  if command -v xdg-open > /dev/null; then (xdg-open "$local_url" > /dev/null 2>&1 &); else echo "host.sh: no xdg-open; open $local_url yourself" >&2; fi
fi

# --- stay up: report new invites, fall over if either process dies
while :; do
  sleep 2
  kill -0 "$host_pid" 2> /dev/null || died host host.mjs "$host_pid"
  [ -z "$cf_pid" ] || kill -0 "$cf_pid" 2> /dev/null || died cloudflared cloudflared "$cf_pid"
  remember_kids
  json=$(info "" 2 2> /dev/null) || continue
  IFS='|' read -r invite room used _ <<< "$(fields <<< "$json")"
  [ "$invite|$used" != "$last" ] || continue
  last="$invite|$used"
  [ -n "$invite" ] || continue
  if [ "$used" = true ]; then
    echo "[$(date +%T)] invite used. Another one: curl 'http://127.0.0.1:$port/host-info?new=1'"
  else
    echo "[$(date +%T)] invite${room:+ for room $room} (single-use): $invite"
  fi
done
