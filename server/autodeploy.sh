#!/usr/bin/env bash
# Rebuilds and redeploys the web game whenever the tracked branch moves. Runs on the laptop from a systemd user timer:
# the build needs your disc image, so it cannot run on the VPS or in CI.
# usage: server/autodeploy.sh [run|install|uninstall]
#   config: ~/.config/mksm/autodeploy.env (KEY=VALUE): HOST, DOMAIN, WORKTREE (a clean worktree only this script
#   touches), ISO, EMSDK, LOCK (shared heavy-job lock), optional BRANCH, REMOTE, PACK_DIR, EXTERNAL_IP, MEM_MB
#   log + state: ~/.local/state/mksm-autodeploy/
set -euo pipefail
conf=${XDG_CONFIG_HOME:-$HOME/.config}/mksm/autodeploy.env
state=${XDG_STATE_HOME:-$HOME/.local/state}/mksm-autodeploy
. "$conf"
BRANCH=${BRANCH:-shaolin-monks-decomp} REMOTE=${REMOTE:-private} MEM_MB=${MEM_MB:-3000}
units=${XDG_CONFIG_HOME:-$HOME/.config}/systemd/user

case ${1:-run} in
install)
    mkdir -p "$units"
    cat >"$units/mksm-autodeploy.service" <<EOF
[Unit]
Description=Rebuild and redeploy the MKSM web game when $REMOTE/$BRANCH moves
[Service]
Type=oneshot
Nice=19
IOSchedulingClass=idle
MemoryMax=5G
Environment=PATH=$PATH
ExecStart=$(realpath "$0") run
EOF
    printf '[Unit]\nDescription=Check %s/%s for new commits\n[Timer]\nOnBootSec=5min\nOnUnitInactiveSec=10min\n[Install]\nWantedBy=timers.target\n' \
        "$REMOTE" "$BRANCH" >"$units/mksm-autodeploy.timer"
    systemctl --user daemon-reload
    systemctl --user enable --now mksm-autodeploy.timer
    exit ;;
uninstall)
    systemctl --user disable --now mksm-autodeploy.timer || true
    rm -f "$units/mksm-autodeploy.service" "$units/mksm-autodeploy.timer"
    systemctl --user daemon-reload
    exit ;;
run) ;;
*) echo "usage: $0 [run|install|uninstall]" >&2; exit 2 ;;
esac

umask 077
mkdir -p "$state"
exec >>"$state/log" 2>&1
say() { echo "$(date -Is) $*"; }

git -C "$WORKTREE" fetch -q "$REMOTE" "$BRANCH"
want=$(git -C "$WORKTREE" rev-parse FETCH_HEAD)
# Already live, or already failed: a broken commit is tried once, not rebuilt every tick.
for f in deployed failed; do [ "$want" != "$(cat "$state/$f" 2>/dev/null)" ] || exit 0; done
avail=$(awk '/^MemAvailable:/ { print int($2 / 1024) }' /proc/meminfo)
[ "$avail" -ge "$MEM_MB" ] || { say "${want:0:7}: only $avail MB free, next tick"; exit 0; }
exec 9>"$LOCK"
flock -n 9 || { say "${want:0:7}: heavy-job lock busy, next tick"; exit 0; }

say "deploying ${want:0:7} $(git -C "$WORKTREE" log -1 --format=%s "$want")"
trap 'rc=$?; [ $rc = 0 ] || { echo "$want" >"$state/failed"; say "FAILED ${want:0:7} (exit $rc); next commit retries"; }' EXIT
git -C "$WORKTREE" checkout -q --detach "$want"
cd "$WORKTREE"
[ -d server/node_modules ] || (cd server && npm ci --no-audit --no-fund)
node server/test.mjs --no-caddy | tail -1
EMSDK=$EMSDK mksm/build.sh "$ISO" --web --jobs 2
PACK_DIR=${PACK_DIR:-} EXTERNAL_IP=${EXTERNAL_IP:-} server/deploy.sh "$HOST" "$DOMAIN"
echo "$want" >"$state/deployed"
say "live: ${want:0:7}"
