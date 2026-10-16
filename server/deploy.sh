#!/usr/bin/env bash
# Deploys the MKSM web build, disc image, signalling server and Caddy/coturn config to a VPS.
# usage: server/deploy.sh <user@host> <domain>
#   env: BUILD_DIR (default build/web-mksm), DISC (default games/mksm/disc.iso)
# The ssh user must be root or have passwordless sudo. Safe to rerun: unchanged pieces are skipped.
set -euo pipefail

die() { printf 'deploy: %s\n' "$*" >&2; exit 1; }
say() { printf '\n==> %s\n' "$*"; }

[ $# -eq 2 ] || die "usage: $0 <user@host> <domain>"
host=$1 domain=$2
[[ $domain =~ ^[A-Za-z0-9]([A-Za-z0-9.-]*[A-Za-z0-9])?$ ]] || die "invalid domain: $domain"
here=$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)
repo=$(dirname "$here")
BUILD_DIR=${BUILD_DIR:-$repo/build/web-mksm}
DISC=${DISC:-$repo/games/mksm/disc.iso}

# One multiplexed ssh connection for every step below.
ctl=$(mktemp -d)
trap 'ssh -o ControlPath="$ctl/s" -O exit "$host" >/dev/null 2>&1 || true; rm -rf "$ctl"' EXIT
SSH=(ssh -o ControlMaster=auto -o ControlPath="$ctl/s" -o ControlPersist=300)
remote() { "${SSH[@]}" "$host" "$@"; }
push() { rsync -e "${SSH[*]}" "$@"; }  # -rlpt, not -a: never copy local uid/gid
# Runs the script on stdin as root on the host; arguments must be shell-safe words.
remote_root() { remote "if [ \"\$(id -u)\" = 0 ]; then bash -s -- $*; else sudo -n bash -s -- $*; fi"; }

say "preflight"
command -v rsync >/dev/null || die "rsync is not installed locally"
for f in ps2web.wasm ps2web.js ps2web.html; do
    [ -f "$BUILD_DIR/$f" ] || die "missing $BUILD_DIR/$f (run scripts/build_web.sh mksm)"
done
for z in "$BUILD_DIR"/ps2web.*.gz "$BUILD_DIR"/ps2web.*.br; do
    [ -e "$z" ] || continue
    if [ "${z%.*}" -nt "$z" ]; then die "$z is older than ${z%.*}; rebuild or delete it"; fi
done
[ -f "$DISC" ] || die "missing disc image $DISC"
for f in signal.mjs package.json package-lock.json mksm-signal.service mksm-invite Caddyfile turnserver.conf site/index.html; do
    [ -f "$here/$f" ] || die "missing server/$f"
done
# The build id covers every served artifact (not only the wasm), so a page-only change still gets a new
# immutable directory instead of being skipped as "already on the server".
hash=$(cd "$BUILD_DIR" && sha256sum ps2web.html ps2web.js ps2web.wasm $(ls ps2web.data 2>/dev/null) | sha256sum | cut -d' ' -f1)
[[ $hash =~ ^[0-9a-f]{64}$ ]] || die "could not hash the build"
disc_size=$(stat -c%s "$DISC")
echo "build $hash, disc $disc_size bytes -> $host ($domain)"

say "bootstrap (user, directories, secrets)"
remote_root "$domain" <<'BOOT'
set -euo pipefail
domain=$1
login=${SUDO_USER:-$(id -un)}
missing=0
need() { echo "missing on server: $*" >&2; missing=1; }
for c in caddy turnserver rsync npm curl; do command -v "$c" >/dev/null || need "$c"; done
if command -v node >/dev/null; then
    major=$(node -p 'process.versions.node.split(".")[0]')
    [ "$major" -ge 20 ] || need "node >= 20 (found $major)"
else
    need "node >= 20"
fi
# Caddy 2.10.x answers precompressed (.br/.gz) files with 206 Partial Content (caddy#7250, fixed in 2.11).
if command -v caddy >/dev/null; then
    cv=$(caddy version | sed -n 's/^v\([0-9]*\)\.\([0-9]*\).*/\1 \2/p')
    read -r cmaj cmin <<<"${cv:-0 0}"
    [ "$cmaj" -gt 2 ] || { [ "$cmaj" -eq 2 ] && [ "$cmin" -ge 11 ]; } || need "caddy >= 2.11 (found $(caddy version | cut -d' ' -f1))"
fi
if [ "$missing" = 1 ]; then
    cat >&2 <<'HELP'
Install the prerequisites (Debian 12 / Ubuntu 24.04), then rerun deploy.sh:
  sudo apt install --yes debian-keyring debian-archive-keyring apt-transport-https curl gnupg coturn rsync openssl
  curl -1sLf 'https://dl.cloudsmith.io/public/caddy/stable/gpg.key' | sudo gpg --dearmor -o /usr/share/keyrings/caddy-stable-archive-keyring.gpg
  curl -1sLf 'https://dl.cloudsmith.io/public/caddy/stable/debian.deb.txt' | sudo tee /etc/apt/sources.list.d/caddy-stable.list
  sudo chmod o+r /usr/share/keyrings/caddy-stable-archive-keyring.gpg /etc/apt/sources.list.d/caddy-stable.list
  sudo apt update && sudo apt install --yes caddy
  curl -fsSL https://deb.nodesource.com/setup_24.x | sudo -E bash - && sudo apt install --yes nodejs
HELP
    exit 1
fi

id mksm >/dev/null 2>&1 ||
    useradd --system --user-group --no-create-home --home-dir /nonexistent --shell /usr/sbin/nologin mksm
mkdir -p /srv/mksm/v /opt/mksm/etc /etc/mksm
chown "$login:$(id -gn "$login")" /srv/mksm /srv/mksm/v /opt/mksm /opt/mksm/etc
chmod 0755 /srv/mksm /srv/mksm/v /opt/mksm /opt/mksm/etc /etc/mksm

env=/etc/mksm/signal.env
rand() { openssl rand -hex 32 2>/dev/null || head -c32 /dev/urandom | od -An -tx1 | tr -d ' \n'; }
if [ ! -f "$env" ]; then
    admin=$(rand)
    tmp=$(mktemp /etc/mksm/.signal.env.XXXXXX)
    cat >"$tmp" <<ENV
COOKIE_SECRET=$(rand)
ADMIN_SECRET=$admin
TURN_SECRET=$(rand)
PUBLIC_ORIGIN=https://$domain
TURN_HOST=$domain
HOST=127.0.0.1
PORT=8787
DATA_DIR=/var/lib/mksm
ENV
    chown root:mksm "$tmp"
    chmod 0640 "$tmp"
    mv "$tmp" "$env"
    printf '\n*** First deploy. ADMIN_SECRET=%s\n*** Store it in a password manager now; it is not printed again (it stays in %s).\n' "$admin" "$env"
else
    sed -i -e "s|^PUBLIC_ORIGIN=.*|PUBLIC_ORIGIN=https://$domain|" -e "s|^TURN_HOST=.*|TURN_HOST=$domain|" "$env"
fi
printf 'DOMAIN=%s\nMKSM_ROOT=/srv/mksm\nSIGNAL_ADDR=127.0.0.1:8787\n' "$domain" >/etc/mksm/caddy.env
chmod 0644 /etc/mksm/caddy.env
BOOT

say "signalling server -> /opt/mksm"
push -rlpt --chmod=D755,F644 "$here/signal.mjs" "$here/package.json" "$here/package-lock.json" "$host:/opt/mksm/"
push -rlpt --chmod=D755,F644 "$here/mksm-signal.service" "$here/mksm-invite" "$here/Caddyfile" "$here/turnserver.conf" "$host:/opt/mksm/etc/"
remote 'umask 022 && cd /opt/mksm && npm ci --omit=dev --no-audit --no-fund'

say "landing page -> /srv/mksm"
push -rlpt --chmod=D755,F644 "$here/site/" "$host:/srv/mksm/"

say "build $hash"
if remote "test -d /srv/mksm/v/$hash"; then
    echo "already on the server, skipping"
else
    push -rlpt --chmod=D755,F644 --include='ps2web.*' --exclude='*' "$BUILD_DIR/" "$host:/srv/mksm/v/.incoming-$hash/"
    remote "mv /srv/mksm/v/.incoming-$hash /srv/mksm/v/$hash"
fi

say "disc image"
read -r remote_size part_size avail < <(remote 'for f in /srv/mksm/disc.iso /srv/mksm/disc.iso.part; do
    stat -c%s "$f" 2>/dev/null || echo 0; done | tr "\n" " "; df -P -B1 /srv/mksm | awk "NR == 2 { print \$4 }"')
if [ "$remote_size" = "$disc_size" ]; then
    echo "same size on the server, skipping"
else
    # --inplace resumes an interrupted upload of disc.iso.part without a second 3 GB temp copy.
    [ "$avail" -gt $((disc_size - part_size + 256 * 1024 * 1024)) ] || die "only $avail bytes free in /srv/mksm"
    push --inplace --partial --info=progress2 --perms --chmod=F644 "$DISC" "$host:/srv/mksm/disc.iso.part"
    remote 'mv -f /srv/mksm/disc.iso.part /srv/mksm/disc.iso'
fi

say "current.json -> $hash"
remote "printf '{\"build\": \"%s\"}\\n' $hash >/srv/mksm/.current.json.tmp && chmod 644 /srv/mksm/.current.json.tmp && mv -f /srv/mksm/.current.json.tmp /srv/mksm/current.json"

say "install units and config (root)"
remote_root "$domain" <<'INSTALL'
set -euo pipefail
domain=$1
src=/opt/mksm/etc

# Caddy: validate the new Caddyfile before it replaces the live one.
out=$(set -a && . /etc/mksm/caddy.env && set +a && caddy validate --config "$src/Caddyfile" --adapter caddyfile 2>&1) ||
    { echo "$out" >&2; echo "Caddyfile is invalid; nothing installed" >&2; exit 1; }
install -m 0644 "$src/Caddyfile" /etc/caddy/Caddyfile
mkdir -p /etc/systemd/system/caddy.service.d
dropin=/etc/systemd/system/caddy.service.d/mksm.conf
caddy_restart=0
if ! printf '[Service]\nEnvironmentFile=/etc/mksm/caddy.env\n' | cmp -s - "$dropin"; then
    printf '[Service]\nEnvironmentFile=/etc/mksm/caddy.env\n' >"$dropin"
    caddy_restart=1
fi

# coturn: render the secret and realm (via the environment, not argv) into /etc/turnserver.conf.
secret=$(sed -n 's/^TURN_SECRET=//p' /etc/mksm/signal.env)
[ -n "$secret" ] || { echo "TURN_SECRET missing from /etc/mksm/signal.env" >&2; exit 1; }
group=root
getent group turnserver >/dev/null && group=turnserver
tmp=$(mktemp /etc/.turnserver.conf.XXXXXX)
TURN_SECRET=$secret REALM=$domain awk \
    '{ gsub(/@TURN_SECRET@/, ENVIRON["TURN_SECRET"]); gsub(/@REALM@/, ENVIRON["REALM"]); print }' \
    "$src/turnserver.conf" >"$tmp"
chown "root:$group" "$tmp"
chmod 0640 "$tmp"
coturn_restart=0
if cmp -s "$tmp" /etc/turnserver.conf; then rm -f "$tmp"; else mv -f "$tmp" /etc/turnserver.conf; coturn_restart=1; fi
if [ -f /etc/default/coturn ]; then
    if grep -q '^#\?TURNSERVER_ENABLED=' /etc/default/coturn; then
        sed -i 's/^#\?TURNSERVER_ENABLED=.*/TURNSERVER_ENABLED=1/' /etc/default/coturn
    else
        echo TURNSERVER_ENABLED=1 >>/etc/default/coturn
    fi
fi

install -m 0644 "$src/mksm-signal.service" /etc/systemd/system/mksm-signal.service
install -m 0755 "$src/mksm-invite" /usr/local/bin/mksm-invite
systemctl daemon-reload
systemctl enable --quiet mksm-signal coturn caddy

# Restart only what changed, so a build-only deploy does not drop running rooms or relays.
stamp=$(cat /opt/mksm/signal.mjs /opt/mksm/package-lock.json /etc/systemd/system/mksm-signal.service /etc/mksm/signal.env | sha256sum)
if [ "$stamp" != "$(cat /etc/mksm/.signal.stamp 2>/dev/null)" ] || ! systemctl is-active --quiet mksm-signal; then
    systemctl restart mksm-signal
    echo "$stamp" >/etc/mksm/.signal.stamp
fi
if [ "$coturn_restart" = 1 ] || ! systemctl is-active --quiet coturn; then systemctl restart coturn; fi
if [ "$caddy_restart" = 1 ]; then systemctl restart caddy; else systemctl reload caddy || systemctl restart caddy; fi

sleep 2
for unit in mksm-signal coturn caddy; do
    systemctl is-active --quiet "$unit" ||
        { journalctl -u "$unit" -n 30 --no-pager >&2; echo "$unit is not running" >&2; exit 1; }
done
INSTALL

say "done"
cat <<EOF
  site:   https://$domain/
  build:  $hash
  invite: ssh $host sudo mksm-invite 1 friend
EOF
