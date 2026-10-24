#!/usr/bin/env bash
# AWS work boxes for MK:SM (neutral names on AWS: tag Project=mksm-w). The box mirrors $P as ~/w: ~/w/wt/<tree>,
# ~/w/remaster-data/states, ~/w/games, ~/w/logs. Code is only ever written here on the laptop and pushed; every job's
# output lives in ~/w/out/<job> on the box and is pulled back to $P/remaster-data/aws/<box>/<job> after the job.
# usage:
#   remaster/w.sh setup <box>                    disc, ELF, states, venv, wgpu on a fresh box
#   remaster/w.sh push <box> <tree>              rsync $P/wt/<tree> (no build/.git) to the box
#   remaster/w.sh run  <box> <job> <tree> <cmd>  run <cmd> detached in ~/w/wt/<tree>, log + rc in ~/w/out/<job>
#   remaster/w.sh wait <box> <job>               wait for a job's rc, print it, then pull
#   remaster/w.sh pull <box>                     pull ~/w/out to the laptop and verify nothing is left behind
#   remaster/w.sh done <box> <region> <id>       pull + verify, then terminate (only an instance tagged Project=mksm-w)
set -euo pipefail
P=/home/darkwarro/Documents/Twitter/PS2_REA
cmd=${1:?usage: w.sh push|run|wait|pull|done ...}; box=${2:?box}; shift 2
out=$P/remaster-data/aws/$box
pull() {
  mkdir -p "$out"
  rsync -a "$box:w/out/" "$out/"
  local left; left=$(rsync -an --out-format='%n' "$box:w/out/" "$out/" | grep -v '/$' || true)
  [ -z "$left" ] || { echo "pull incomplete, still on $box:"; echo "$left"; return 1; }
  echo "pulled $box:w/out -> $out ($(find "$out" -type f | wc -l) files)"
}
case $cmd in
setup)
  # disc (encrypted in the bucket, decrypted on the box), extracted + patched ELF, reference states, python venv
  B=$(cat ~/.ssh/w-aws.bucket) url=$(aws s3 presign "s3://$(cat ~/.ssh/w-aws.bucket)/b/1.bin" --region eu-west-1 --expires-in 3600)
  until ssh -o BatchMode=yes -o ConnectTimeout=5 "$box" true 2>/dev/null; do sleep 5; done
  ssh "$box" 'umask 077; cat > ~/.k' < ~/.ssh/w-aws.key
  ssh "$box" "set -e; cloud-init status --wait > /dev/null; sudo loginctl enable-linger ubuntu
    sudo apt-get -qq update > /dev/null && sudo DEBIAN_FRONTEND=noninteractive apt-get -qq install -y python3-venv clang lld \
      cmake ninja-build pkg-config libsdl2-dev zlib1g-dev libssl-dev libsoundtouch-dev libavcodec-dev libavutil-dev \
      libswscale-dev libopus-dev ffmpeg > /dev/null
    mkdir -p ~/w/wt ~/w/logs ~/w/out ~/w/remaster-data ~/w/tp ~/w/games/mksm/disc
    curl -sf '$url' | openssl enc -d -aes-256-ctr -pbkdf2 -iter 200000 -pass file:\$HOME/.k -out ~/w/games/mksm/disc.iso
    python3 -m venv ~/w/.venv-remaster && ~/w/.venv-remaster/bin/pip -q install pillow numpy"
  rsync -a "$P/remaster-data/states" "$box:w/remaster-data/"
  rsync -aL "$P/ps2-web-recomp/third_party/wgpu-native/" "$box:w/tp/wgpu-native/"
  rsync -a "$P/ps2-web-recomp/games/mksm/disc/" "$box:w/games/mksm/disc/"
  echo "set up $box" ;;
push)
  tree=${1:?tree}
  rsync -a --delete --exclude=/build/ --exclude=.git --exclude=/games --exclude=/third_party/wgpu-native \
    "$P/wt/$tree/" "$box:w/wt/$tree/"
  ssh "$box" "cd ~/w/wt/$tree && ln -sfn ~/w/games games && mkdir -p third_party && ln -sfn ~/w/tp/wgpu-native third_party/wgpu-native"
  echo "pushed $tree" ;;
run)
  job=${1:?job} tree=${2:?tree}; shift 2
  # <cmd> runs in a subshell, so compound commands and set -e all log and still leave rc; the backgrounded command must be a plain command with all three fds redirected, or ssh waits for it
  ssh "$box" "mkdir -p ~/w/out/$job && cd ~/w/wt/$tree || exit 1; rm -f ~/w/out/$job/rc
    setsid nohup bash -c $(printf '%q' "( $*
) > ~/w/out/$job/log 2>&1; echo \$? > ~/w/out/$job/rc") > /dev/null 2>&1 < /dev/null &"
  echo "started $job on $box" ;;
wait)
  job=${1:?job}
  until ssh "$box" "test -f ~/w/out/$job/rc"; do sleep 20; done
  echo "$job rc=$(ssh "$box" cat "~/w/out/$job/rc")"; pull ;;
pull) pull ;;
done)
  region=${1:?region} id=${2:?instance id}
  tag=$(aws ec2 describe-instances --region "$region" --instance-ids "$id" --query 'Reservations[0].Instances[0].Tags[?Key==`Project`].Value' --output text)
  [ "$tag" = mksm-w ] || { echo "$id is not tagged Project=mksm-w ($tag); not touching it"; exit 1; }
  pull || { echo "not terminating $box: pull failed"; exit 1; }
  aws ec2 terminate-instances --region "$region" --instance-ids "$id" --query 'TerminatingInstances[0].CurrentState.Name' --output text ;;
*) echo "unknown command $cmd" >&2; exit 2 ;;
esac
