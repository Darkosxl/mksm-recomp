// 2-player deterministic lockstep over WebRTC for the PS2 web build.
// The shared-memory interface with the emulator, the wire format and the session flow are in lockstep.md.
//
//   const room = await Lockstep.createRoom({ build });                 // host side, once
//   const ls = new Lockstep({ buffer, base, room, build, disc, config, readPad });
//   ls.onDesync = (d) => ...;  await ls.connect();                      // resolves once frames run

export const OFF = {
  EMU_FRAME: 0, SEQ: 4, DELAY: 8, ACTIVE: 12, FLAGS: 16, LOCAL_SLOT: 20,
  HAVE: 24, INPUT: 536, HASH_FRAME: 2072, SLOW_MS: 2076, HASH: 2080, SIZE: 2088,
};
export const RING = 64, INPUT_BYTES = 12, WIRE_BYTES = 10;
export const FLAG_PAUSED = 1, FLAG_RESYNC = 2; // OFF.FLAGS bits (written by JS)
// bit2: the emulator holds at its next vblank (or right away if it is waiting for input) and runs no frame until the
// bit clears; snapshot/load commands are taken while held (W4, lockstep-emu.js). begin() clears it after active=1.
export const FLAG_HOLD = 4;
export const INPUT_PAUSE = 1; // input flags bit0
export const FRAME_MS = 16.68;
export const PROTOCOL = 1;
export const NEUTRAL = Object.freeze({ buttons: 0, lx: 128, ly: 128, rx: 128, ry: 128, l2: 0, r2: 0, flags: 0 });
export const inputDelay = (p95) => Math.min(8, Math.max(2, Math.ceil((p95 / 2 + 8) / FRAME_MS) + 1));

const KEEPALIVE_MS = 50, STALL_RETRY_MS = 16, OVERLAY_MS = 3000, SOLO_MS = 15000;
const MAX_REDUNDANT = 32, HEADER = 20, CHUNK = 64 * 1024;
const BUF_HIGH = 4 * 1024 * 1024, BUF_LOW = 1024 * 1024;
const PKT_INPUT = 1, PKT_NEED = 1; // packet kind; packet flags bit0: the sender lacks an input it needs now or next frame
const P2P_TIMEOUT_MS = 10000;
// No TURN in host mode (/turn 404): public STUN only; peers that still can't connect fall back to the relay below.
const STUN = [{ urls: ['stun:stun.l.google.com:19302', 'stun:stun.cloudflare.com:3478'] }];

export function encodeInput(p, out = new Uint8Array(WIRE_BYTES)) {
  out[0] = p.buttons & 255;
  out[1] = (p.buttons >> 8) & 255;
  out[2] = p.lx ?? 128; out[3] = p.ly ?? 128; out[4] = p.rx ?? 128; out[5] = p.ry ?? 128;
  out[6] = p.l2 ?? 0; out[7] = p.r2 ?? 0; out[8] = p.flags ?? 0; out[9] = 0;
  return out;
}
export const decodeInput = (b) => ({ buttons: b[0] | (b[1] << 8), lx: b[2], ly: b[3], rx: b[4], ry: b[5], l2: b[6], r2: b[7], flags: b[8] });
const NEUTRAL_WIRE = encodeInput(NEUTRAL);

// Views on the shared struct. Usable from the page, a worker (the mock emulator) or a wasm heap.
export class Ring {
  constructor(buffer, base = 0) {
    this.i32 = new Int32Array(buffer, base, OFF.SIZE >> 2);
    this.u8 = new Uint8Array(buffer, base, OFF.SIZE);
    this.dv = new DataView(buffer, base, OFF.SIZE);
  }
  load(off) { return Atomics.load(this.i32, off >> 2); }
  store(off, v) { Atomics.store(this.i32, off >> 2, v); }
  bump() { Atomics.add(this.i32, OFF.SEQ >> 2, 1); Atomics.notify(this.i32, OFF.SEQ >> 2); }
  haveIndex(p, f) { return (OFF.HAVE >> 2) + p * RING + (f & (RING - 1)); }
  has(p, f) { return Atomics.load(this.i32, this.haveIndex(p, f)) === f; }
  offset(p, f) { return OFF.INPUT + (p * RING + (f & (RING - 1))) * INPUT_BYTES; }
  // The input bytes go in first; the Atomics.store of have[] publishes them.
  put(p, f, wire) { this.u8.set(wire, this.offset(p, f)); Atomics.store(this.i32, this.haveIndex(p, f), f); }
  get(p, f) { const o = this.offset(p, f); return this.u8.subarray(o, o + WIRE_BYTES); }
  clear() { for (let i = 0; i < 2 * RING; i++) Atomics.store(this.i32, (OFF.HAVE >> 2) + i, -1); }
  hash() { return this.dv.getBigUint64(OFF.HASH, true); }
}

const sleep = (ms) => new Promise((r) => setTimeout(r, ms));
const now = () => performance.now();
const percentile = (xs, p) => { const s = [...xs].sort((a, b) => a - b); return s[Math.min(s.length - 1, Math.floor(p * s.length))]; };
const deferred = () => { let resolve, reject; const p = new Promise((a, b) => { resolve = a; reject = b; }); return Object.assign(p, { resolve, reject }); };
const hex = (buf) => [...new Uint8Array(buf)].map((b) => b.toString(16).padStart(2, '0')).join('');

function openSocket(signal) {
  const url = new URL('/ws', signal);
  url.protocol = url.protocol === 'https:' ? 'wss:' : 'ws:';
  const ws = new WebSocket(url);
  return new Promise((resolve, reject) => {
    ws.onopen = () => resolve(ws);
    ws.onerror = () => reject(new Error('signalling socket failed: ' + url));
  });
}

// Stand-in for an RTCDataChannel when the peers can't connect directly: frames go through the signalling
// WebSocket as binary messages that signal.mjs forwards to the other peer in the room. Frame: u8 channel (0 in,
// 1 ctl), u8 kind (0 binary, 1 UTF-8 text), payload. Only the RTCDataChannel surface lockstep.js uses is provided.
const enc = new TextEncoder(), dec = new TextDecoder();
class RelayChannel {
  constructor(ws, id, label) { this.ws = ws; this.id = id; this.label = label; this.bufferedAmountLowThreshold = 0; this.onmessage = null; }
  get readyState() { return this.ws.readyState === 1 ? 'open' : 'closed'; }
  get bufferedAmount() { return this.ws.bufferedAmount; }
  send(data) {
    const text = typeof data === 'string';
    const body = text ? enc.encode(data) : new Uint8Array(data.buffer ? data.buffer : data, data.byteOffset || 0, data.byteLength);
    const frame = new Uint8Array(2 + body.byteLength);
    frame[0] = this.id;
    frame[1] = text ? 1 : 0;
    frame.set(body, 2);
    this.ws.send(frame);
  }
  // WebSocket has no bufferedamountlow event: poll for it (only sendBlob waits on it).
  addEventListener(type, fn) {
    if (type !== 'bufferedamountlow') return;
    const poll = () => (this.readyState !== 'open' || this.bufferedAmount <= this.bufferedAmountLowThreshold ? fn() : setTimeout(poll, 20));
    poll();
  }
  deliver(u8) {
    const body = u8.subarray(2);
    this.onmessage?.({ data: u8[1] ? dec.decode(body) : body.slice().buffer });
  }
  close() {}
}

// Disc id for the handshake: size + SHA-256 of the first MB (any Blob/File, e.g. from a Range fetch).
export async function discId(size, firstMB) {
  return `${size}:${hex(await crypto.subtle.digest('SHA-256', firstMB))}`;
}

export class Lockstep {
  // Reserves a room on the signalling server and returns its id (does not join).
  static async createRoom({ signal = location.origin, build } = {}) {
    const ws = await openSocket(signal);
    ws.send(JSON.stringify({ type: 'create', build }));
    const msg = await new Promise((resolve) => (ws.onmessage = (e) => resolve(JSON.parse(e.data))));
    ws.close();
    if (msg.type !== 'created') throw new Error('create failed: ' + msg.error);
    return msg.room;
  }

  constructor(opts) {
    this.opts = { signal: location.origin, config: {}, firstFrame: 0, overlay: true, pauseOnHidden: true, pings: 20, log: () => {}, ...opts };
    this.ring = new Ring(opts.buffer, opts.base || 0);
    this.test = { dropIn: 0, delayMs: 0, ...opts.test }; // test hooks: drop "in" packets, delay every send
    this.D = 0;
    this.slot = -1;
    this.running = false;
    this.solo = false;
    this.manualPause = false;
    this.hiddenPause = false;
    this.rtts = [];
    this.stats = { sent: 0, recv: 0, dropped: 0, needSends: 0, keepalives: 0, written: 0, hashesOk: 0, desyncs: 0, maxGapMs: 0, disconnects: 0 };
    this.localHashes = new Map();
    this.remoteHashes = new Map();
    this.localExtra = new Map();
    this.remoteExtra = new Map();
    this.ctlWaiters = new Map();
    this.ctlQueueAt = 0;
    this.blobIn = null;
    this.blobWaiters = [];
    this.pad = new Uint8Array(WIRE_BYTES);
    this.transport = 'p2p';
    this.adv = 0;
    this.localAdv = 0;
  }

  log(...a) { this.opts.log(...a); }
  emit(name, detail) {
    const fn = this['on' + name[0].toUpperCase() + name.slice(1)];
    try { fn?.call(this, detail); } catch (e) { console.error(e); }
  }
  setStatus(text) { this.status = text; this.emit('status', text); }

  // ---- connection: signalling, WebRTC, handshake, RTT, start ----
  // Joins the signalling room only: after it, isHost/slot are known (the first in the room is the host, P1).
  async join() {
    if (this.joinedMsg) return this.joinedMsg;
    const { signal, room, build } = this.opts;
    this.setStatus('connecting');
    this.ws = await openSocket(signal);
    this.ws.binaryType = 'arraybuffer';
    this.ws.onmessage = (e) => (typeof e.data === 'string' ? this.onSignal(JSON.parse(e.data)) : this.onRelay(new Uint8Array(e.data)));
    this.joined = deferred();
    this.channelsOpen = deferred();
    this.ws.send(JSON.stringify({ type: 'join', room, build }));
    const joined = (this.joinedMsg = await this.joined);
    this.isHost = joined.host;
    this.slot = this.isHost ? 0 : 1;
    this.log(`joined ${room} as ${this.isHost ? 'host' : 'guest'}`);
    return joined;
  }

  async connect() {
    const joined = await this.join();
    if (joined.peer) await this.startPeer(true); // the newcomer makes the offer (server README)
    else this.setStatus('waiting for the other player');
    await this.channelsOpen;
    await this.handshake();
    return this;
  }

  async onSignal(msg) {
    switch (msg.type) {
      case 'joined': return this.joined.resolve(msg);
      case 'error': this.log('signalling error', msg.error, msg.request); return this.joined?.reject(new Error(msg.error));
      case 'peer-joined': this.log('peer joined'); return;
      case 'peer-left': this.log('peer left the room'); this.peerLeft = true; this.emit('peerLeft', msg); return;
      case 'offer':
        if (!this.pc) await this.startPeer(false);
        await this.pc.setRemoteDescription(msg.sdp);
        await this.pc.setLocalDescription(await this.pc.createAnswer());
        this.sendSignal({ type: 'answer', sdp: this.pc.localDescription });
        return this.flushIce();
      case 'answer':
        await this.pc.setRemoteDescription(msg.sdp);
        return this.flushIce();
      case 'ice':
        if (!this.pc || !this.pc.remoteDescription) (this.pendingIce ||= []).push(msg.candidate);
        else await this.pc.addIceCandidate(msg.candidate).catch((e) => this.log('ice', e.message));
        return;
      case 'transport': if (msg.mode === 'relay') this.useRelay('peer asked'); return;
      case 'relay-throttle': this.log('relay throttled by the server'); return;
    }
  }
  sendSignal(msg) { if (this.ws?.readyState === 1) this.ws.send(JSON.stringify(msg)); }
  async flushIce() {
    for (const c of this.pendingIce || []) await this.pc.addIceCandidate(c).catch((e) => this.log('ice', e.message));
    this.pendingIce = [];
  }

  async startPeer(offer) {
    if (this.transport === 'relay') return;
    const turn = await fetch(new URL('/turn', this.opts.signal), { credentials: 'same-origin' }).then((r) => (r.ok ? r.json() : null)).catch(() => null);
    const pc = (this.pc = new RTCPeerConnection({ iceServers: turn?.iceServers ?? STUN }));
    pc.onicecandidate = (e) => e.candidate && !this.test.blockIce && this.sendSignal({ type: 'ice', candidate: e.candidate });
    pc.onconnectionstatechange = () => {
      this.log('pc', pc.connectionState);
      if (pc.connectionState === 'failed') this.useRelay('ICE failed');
    };
    // No direct path within P2P_TIMEOUT_MS (strict NATs, no TURN): use the relay instead.
    clearTimeout(this.p2pTimer);
    this.p2pTimer = setTimeout(() => this.channelsOpen.settled || this.useRelay('no direct connection'), this.opts.p2pTimeoutMs ?? this.test.p2pTimeoutMs ?? P2P_TIMEOUT_MS);
    // Negotiated ids: both sides create the same two channels, no ondatachannel race.
    this.inCh = pc.createDataChannel('in', { negotiated: true, id: 0, ordered: false, maxRetransmits: 0, priority: 'high' });
    this.ctl = pc.createDataChannel('ctl', { negotiated: true, id: 1, ordered: true, priority: 'low' });
    let open = 0;
    for (const ch of [this.inCh, this.ctl]) {
      ch.binaryType = 'arraybuffer';
      ch.onopen = () => ++open === 2 && this.transport === 'p2p' && this.openChannels();
      ch.onclose = () => this.log(`channel ${ch.label} closed`);
    }
    this.inCh.onmessage = (e) => this.onInput(e.data);
    this.ctl.onmessage = (e) => this.onCtl(e.data);
    this.ctl.bufferedAmountLowThreshold = BUF_LOW;
    if (offer) {
      await pc.setLocalDescription(await pc.createOffer());
      this.sendSignal({ type: 'offer', sdp: pc.localDescription });
    }
  }

  openChannels() {
    clearTimeout(this.p2pTimer);
    this.channelsOpen.settled = true;
    this.channelsOpen.resolve();
    this.emit('transport', this.transport);
  }

  // Switches both data channels to the WebSocket relay for the rest of the session and tells the peer to do the
  // same. Idempotent; also used when a direct connection dies mid-session (inputs resume through the relay).
  useRelay(why) {
    if (this.transport === 'relay' || !this.ws) return;
    this.log(`using the relay (${why})`);
    this.transport = 'relay';
    this.stats.relay = 1;
    this.sendSignal({ type: 'transport', mode: 'relay' });
    const pc = this.pc;
    this.pc = null;
    try { pc?.close(); } catch {}
    this.inCh = new RelayChannel(this.ws, 0, 'in');
    this.ctl = new RelayChannel(this.ws, 1, 'ctl');
    this.ctl.bufferedAmountLowThreshold = BUF_LOW;
    this.inCh.onmessage = (e) => this.onInput(e.data);
    this.ctl.onmessage = (e) => this.onCtl(e.data);
    if (this.channelsOpen && !this.channelsOpen.settled) this.openChannels();
    else this.emit('transport', this.transport);
  }
  onRelay(u8) {
    if (u8.length < 2) return;
    if (this.transport !== 'relay') this.useRelay('peer is relaying'); // its 'transport' message may come later
    (u8[0] === 0 ? this.inCh : this.ctl).deliver(u8);
  }

  async handshake() {
    this.setStatus('handshake');
    const { build, disc, config } = this.opts;
    const hello = { t: 'hello', proto: PROTOCOL, build, disc, config };
    this.sendCtl(hello);
    const peer = await this.waitCtl('hello', 10000);
    const why = ['proto', 'build', 'disc', 'config'].find((k) => JSON.stringify(peer[k]) !== JSON.stringify(hello[k]));
    if (why) {
      this.sendCtl({ t: 'refuse', reason: why });
      await sleep(200);
      this.refuse(why, true);
    }
    // opts.sync(ls, isHost) runs between the handshake and the first frame (W4: the host's snapshot is loaded by
    // both peers); on the host it returns the first frame to run.
    if (this.isHost) {
      const rtt = await this.measureRtt(this.opts.pings);
      this.D = inputDelay(rtt.p95);
      this.log(`rtt p50 ${rtt.p50.toFixed(1)} p95 ${rtt.p95.toFixed(1)} ms -> D=${this.D}`);
      this.rttAtStart = rtt;
      const frame = this.opts.sync ? await this.opts.sync(this, true) : this.opts.firstFrame;
      this.startAt(frame);
    } else {
      if (this.opts.sync) await this.opts.sync(this, false);
      await this.awaitStart();
    }
  }

  // Host: tells the guest the first frame and D, then starts both sides together.
  async startAt(frame) {
    const rtt = this.rttAtStart;
    this.sendCtl({ t: 'start', D: this.D, frame, rtt });
    await sleep(rtt.p50 / 2); // start when the guest gets 'start', so neither begins ahead
    this.begin(frame);
  }
  async awaitStart() {
    const start = await this.waitCtl('start', 60000);
    this.D = start.D;
    this.rttAtStart = start.rtt;
    this.rtts.push(start.rtt.p50); // time sync needs an RTT before our own pings come back
    this.log(`host set D=${this.D}, first frame ${start.frame}`);
    this.begin(start.frame);
  }

  // Mismatch found here (local) or by the peer: both stop; a pending connect() rejects.
  refuse(reason, local) {
    const err = new Error('lockstep handshake refused: ' + reason);
    if (!this.refused) {
      this.refused = reason;
      this.setStatus('refused: ' + reason);
      this.emit('refused', { reason, local });
      for (const list of this.ctlWaiters.values()) for (const w of list.splice(0)) w(null, err);
      this.close();
    }
    if (local) throw err;
  }

  // RTT on the reliable channel; with no loss it equals the input path's RTT.
  async measureRtt(n) {
    const samples = [];
    for (let i = 0; i < n; i++) {
      const t = now();
      this.sendCtl({ t: 'ping', i, ts: t });
      const pong = await this.waitCtl('pong', 2000).catch(() => null);
      if (pong) samples.push(now() - pong.ts);
      await sleep(5);
    }
    if (!samples.length) throw new Error('no RTT samples');
    this.rtts.push(...samples);
    return { p50: percentile(samples, 0.5), p95: percentile(samples, 0.95), n: samples.length };
  }

  // ---- session ----
  begin(F) {
    const r = this.ring;
    r.store(OFF.ACTIVE, 0);
    r.clear();
    r.store(OFF.DELAY, this.D);
    r.store(OFF.LOCAL_SLOT, this.slot);
    r.store(OFF.FLAGS, r.load(OFF.FLAGS) & FLAG_HOLD); // a hold (W4) lasts until active=1 below
    r.store(OFF.SLOW_MS, 0);
    this.stalled = false;
    this.disconnected = 0;
    this.slowMs = 0;
    this.localAdv = this.adv = 0;
    this.localHashes.clear();
    this.remoteHashes.clear();
    // Frames F..F+D-1 are neutral for both players on both sides, so nothing needs sending for them.
    for (let f = F; f < F + this.D; f++) for (const p of [0, 1]) r.put(p, f, NEUTRAL_WIRE);
    this.localHigh = this.remoteHigh = this.ackedByRemote = F + this.D - 1;
    this.lastFrame = F - 1;
    this.lastRecv = this.lastSend = now();
    this.lastHashFrame = r.load(OFF.HASH_FRAME);
    this.firstFrame = F;
    r.store(OFF.ACTIVE, 1);
    r.store(OFF.FLAGS, 0);
    r.bump();
    this.running = true;
    this.startedAt = now();
    this.setStatus('running');
    if (this.opts.pauseOnHidden && typeof document !== 'undefined' && !this.onVisibility) {
      this.onVisibility = () => { this.hiddenPause = document.hidden; };
      document.addEventListener('visibilitychange', this.onVisibility);
      this.onVisibility();
    }
    this.ticker = setInterval(() => this.tick(), 10);
    this.pinger = setInterval(() => this.running && this.sendCtl({ t: 'ping', i: -1, ts: now() }), 1000);
    this.watch();
    this.emit('start', { D: this.D, slot: this.slot, frame: F });
  }

  // Follows emu_frame with Atomics.waitAsync (falls back to polling).
  async watch() {
    const i32 = this.ring.i32, gen = (this.watchGen = (this.watchGen || 0) + 1);
    while (this.running && gen === this.watchGen) {
      const f = Atomics.load(i32, OFF.EMU_FRAME >> 2);
      if (f !== this.lastFrame) this.onFrame(f);
      if (Atomics.waitAsync) {
        const w = Atomics.waitAsync(i32, OFF.EMU_FRAME >> 2, f, 100);
        if (w.async) await w.value;
      } else await sleep(2);
    }
  }

  // Stops the session machinery (sampling, sending, the disconnect watchdog) and holds the emulator at its next
  // vblank, e.g. while a W4 snapshot moves; begin() resumes. The data channels stay open.
  suspend() {
    const r = this.ring;
    this.running = false;
    clearInterval(this.ticker);
    clearInterval(this.pinger);
    r.store(OFF.FLAGS, (r.load(OFF.FLAGS) & ~FLAG_PAUSED) | FLAG_HOLD);
    r.bump();
    if (this.disconnected) { this.disconnected = 0; this.hideOverlay(); }
    this.setStatus('suspended');
  }

  get paused() { return this.manualPause || this.hiddenPause; }
  setPaused(on) { this.manualPause = !!on; }

  // The emulator now waits for frame N: sample the local pad for N+D (and any gap after a D change).
  onFrame(N) {
    this.lastFrame = N;
    const r = this.ring;
    if (!this.solo) {
      const target = N + this.D;
      if (target > this.localHigh) {
        const pad = this.opts.readPad ? this.opts.readPad(target) : NEUTRAL;
        encodeInput({ ...pad, flags: (pad.flags || 0) | (this.paused ? INPUT_PAUSE : 0) }, this.pad);
        for (let f = this.localHigh + 1; f <= target; f++) r.put(this.slot, f, this.pad);
        this.localHigh = target;
        r.bump();
      }
      // Missing the remote input for N (a stall) or N+1 (one is coming): ask for a resend now.
      const remote = 1 - this.slot;
      this.stalled = !r.has(remote, N) || !r.has(remote, N + 1);
      this.sendInputs(this.stalled);
      this.remotePaused = r.has(remote, N) && (r.get(remote, N)[8] & INPUT_PAUSE) !== 0;
    }
    const hf = r.load(OFF.HASH_FRAME);
    if (hf !== this.lastHashFrame && hf >= 0) {
      const h = r.hash();
      if (r.load(OFF.HASH_FRAME) === hf) {
        this.lastHashFrame = hf;
        const hs = h.toString(16);
        this.localHashes.set(hf, hs);
        const extra = this.opts.hashExtra ? this.opts.hashExtra(hf) : null;
        if (extra) this.localExtra.set(hf, extra);
        if (!this.solo) this.sendCtl({ t: 'hash', f: hf, h: hs, x: extra || undefined });
        this.compareHash(hf);
        this.emit('hash', { frame: hf, hash: hs });
      }
    }
  }

  compareHash(f) {
    const a = this.localHashes.get(f), b = this.remoteHashes.get(f);
    if (a === undefined || b === undefined) {
      for (const m of [this.localHashes, this.remoteHashes, this.localExtra, this.remoteExtra]) if (m.size > 128) m.delete(m.keys().next().value);
      return;
    }
    this.localHashes.delete(f);
    this.remoteHashes.delete(f);
    const localExtra = this.localExtra.get(f), remoteExtra = this.remoteExtra.get(f);
    this.localExtra.delete(f);
    this.remoteExtra.delete(f);
    if (a === b) {
      this.stats.hashesOk++;
      this.lastGoodHash = f;
    } else {
      this.stats.desyncs++;
      this.log(`DESYNC at frame ${f}: local ${a} remote ${b}`);
      this.emit('desync', { frame: f, local: a, remote: b, lastGood: this.lastGoodHash ?? null, localExtra, remoteExtra });
    }
  }

  // Packet: u8 kind, u8 count, u8 flags, u8 slot, i32 emu_frame, i32 ack, i32 first, i16 adv*16, u16 seq,
  // then count x 10-byte inputs for frames first.. (the oldest unacked first, at most 32).
  sendInputs(need = false) {
    const first = this.ackedByRemote + 1;
    const count = Math.max(0, Math.min(MAX_REDUNDANT, this.localHigh - first + 1));
    const buf = new ArrayBuffer(HEADER + count * WIRE_BYTES);
    const dv = new DataView(buf), u8 = new Uint8Array(buf);
    dv.setUint8(0, PKT_INPUT);
    dv.setUint8(1, count);
    dv.setUint8(2, need ? PKT_NEED : 0);
    dv.setUint8(3, this.slot);
    dv.setInt32(4, this.lastFrame, true);
    dv.setInt32(8, this.remoteHigh, true);
    dv.setInt32(12, first, true);
    dv.setInt16(16, Math.max(-32768, Math.min(32767, Math.round(this.localAdv * 16))), true);
    dv.setUint16(18, (this.pktSeq = ((this.pktSeq || 0) + 1) & 0xffff), true);
    for (let i = 0; i < count; i++) u8.set(this.ring.get(this.slot, first + i), HEADER + i * WIRE_BYTES);
    this.lastSend = now();
    this.stats.sent++;
    if (need) this.stats.needSends++;
    if (this.test.dropIn && Math.random() < this.test.dropIn) return void this.stats.dropped++;
    this.sendRaw(this.inCh, buf);
  }

  onInput(buf) {
    if (!this.running || this.solo) return;
    const dv = new DataView(buf), u8 = new Uint8Array(buf);
    if (buf.byteLength < HEADER || dv.getUint8(0) !== PKT_INPUT) return;
    const t = now();
    this.stats.maxGapMs = Math.max(this.stats.maxGapMs, t - this.lastRecv);
    this.lastRecv = t;
    this.stats.recv++;
    if (this.disconnected) this.reconnected();
    const count = dv.getUint8(1), need = dv.getUint8(2) & PKT_NEED;
    const remoteFrame = dv.getInt32(4, true), ack = dv.getInt32(8, true), first = dv.getInt32(12, true);
    if (ack > this.ackedByRemote) this.ackedByRemote = Math.min(ack, this.localHigh);
    const remote = 1 - this.slot, limit = this.lastFrame + RING - 8; // never overwrite an unconsumed slot
    let wrote = false;
    for (let i = 0; i < count; i++) {
      const f = first + i;
      if (f <= this.remoteHigh) continue;
      if (f !== this.remoteHigh + 1 || f > limit) break;
      this.ring.put(remote, f, u8.subarray(HEADER + i * WIRE_BYTES, HEADER + (i + 1) * WIRE_BYTES));
      this.remoteHigh = f;
      this.stats.written++;
      wrote = true;
    }
    if (wrote) this.ring.bump();
    this.timeSync(remoteFrame, dv.getInt16(16, true) / 16);
    // The peer lacks one of our inputs it needs now or next frame: resend at once.
    if (need && this.ackedByRemote < this.localHigh && t - this.lastSend > 4) this.sendInputs(this.stalled);
  }

  // Frame advantage: (mine - theirs) / 2 cancels the one-way latency estimate. The peer that is ahead
  // by more than a frame stretches each frame by 1-2 ms (OFF.SLOW_MS, read by the emulator's pacing).
  timeSync(remoteFrame, remoteAdv) {
    const rtt = this.rtts.length ? percentile(this.rtts.slice(-20), 0.5) : 0;
    const local = this.lastFrame - (remoteFrame + rtt / 2 / FRAME_MS);
    this.localAdv += (local - this.localAdv) * 0.1;
    this.adv = (this.localAdv - remoteAdv) / 2;
    const slow = this.adv > 1 ? (this.adv > 2 ? 2 : 1) : 0;
    if (slow !== this.slowMs) {
      this.slowMs = slow;
      this.ring.store(OFF.SLOW_MS, slow);
    }
  }

  tick() {
    if (!this.running || this.solo) return;
    const t = now();
    const r = this.ring, N = this.lastFrame, remote = 1 - this.slot;
    if (this.stalled && r.has(remote, N) && r.has(remote, N + 1)) this.stalled = false;
    if (this.stalled && t - this.lastSend >= STALL_RETRY_MS) this.sendInputs(true);
    else if (t - this.lastSend >= KEEPALIVE_MS) { this.stats.keepalives++; this.sendInputs(false); }
    const silent = t - this.lastRecv;
    if (silent > OVERLAY_MS && !this.disconnected) {
      this.disconnected = t;
      this.stats.disconnects++;
      r.store(OFF.FLAGS, r.load(OFF.FLAGS) | FLAG_PAUSED);
      r.bump();
      this.log(`no packets for ${(silent / 1000).toFixed(1)} s`);
      this.emit('disconnect', { frame: N, silentMs: silent });
    }
    if (this.disconnected) {
      this.showOverlay(`Connection lost. Waiting for the other player... ${Math.ceil((SOLO_MS - silent) / 1000)}`);
      if (silent > SOLO_MS) this.goSolo();
    }
  }

  reconnected() {
    this.disconnected = 0;
    this.ring.store(OFF.FLAGS, this.ring.load(OFF.FLAGS) & ~FLAG_PAUSED);
    this.ring.bump();
    this.hideOverlay();
    this.log('packets again');
    this.emit('reconnect', { frame: this.lastFrame });
  }

  // The remote player is gone: the emulator runs free with the remote slot neutral (active=0).
  goSolo() {
    const r = this.ring;
    this.solo = true;
    r.store(OFF.ACTIVE, 0);
    r.store(OFF.FLAGS, 0);
    r.store(OFF.SLOW_MS, 0);
    r.bump();
    this.setStatus('solo');
    this.log(`continuing solo at frame ${this.lastFrame}`);
    this.showOverlay('The other player left. Continuing solo.');
    setTimeout(() => this.hideOverlay(), 3000);
    this.emit('solo', { frame: this.lastFrame });
    try { this.pc?.close(); } catch {}
  }

  showOverlay(text) {
    if (!this.opts.overlay || typeof document === 'undefined') return;
    if (!this.overlay) {
      this.overlay = document.createElement('div');
      this.overlay.className = 'lockstep-overlay';
      this.overlay.setAttribute('role', 'status');
      Object.assign(this.overlay.style, {
        position: 'fixed', inset: '0', display: 'flex', alignItems: 'center', justifyContent: 'center', padding: '16px',
        background: 'rgba(0,0,0,.6)', color: '#fff', font: '600 20px/1.4 system-ui, sans-serif', textAlign: 'center', zIndex: 1000,
      });
      document.body.append(this.overlay);
    }
    this.overlay.textContent = text;
    this.overlay.hidden = false;
  }
  hideOverlay() { if (this.overlay) this.overlay.hidden = true; }
  get overlayVisible() { return !!this.overlay && !this.overlay.hidden; }

  // Host only: re-measure RTT and announce a new D. Each side fills the gap with its current pad
  // (D up) or skips sampling until it catches up (D down), so the change needs no agreed frame.
  async resync() {
    if (!this.isHost) return this.sendCtl({ t: 'resync-request' });
    const r = this.ring;
    r.store(OFF.FLAGS, r.load(OFF.FLAGS) | FLAG_RESYNC);
    this.sendCtl({ t: 'resync-begin' });
    const rtt = await this.measureRtt(this.opts.pings);
    const D = inputDelay(rtt.p95);
    this.sendCtl({ t: 'delay', D, rtt });
    this.setDelay(D);
    r.store(OFF.FLAGS, r.load(OFF.FLAGS) & ~FLAG_RESYNC);
    this.log(`resync: rtt p95 ${rtt.p95.toFixed(1)} ms -> D=${D}`);
    this.emit('resync', { D, rtt });
    return { D, rtt };
  }
  setDelay(D) {
    this.D = D;
    this.ring.store(OFF.DELAY, D);
  }

  // ---- ctl channel: JSON control messages + binary blob chunks ----
  sendCtl(msg) { this.sendRaw(this.ctl, JSON.stringify(msg), true); }

  sendRaw(ch, data, ordered) {
    const go = () => { try { if (ch?.readyState === 'open') ch.send(data); } catch (e) { this.log('send', e.message); } };
    if (!this.test.delayMs) return go();
    // Latency test hook. ctl keeps its order even when the delay changes.
    let at = now() + this.test.delayMs;
    if (ordered) at = this.ctlQueueAt = Math.max(at, this.ctlQueueAt);
    setTimeout(go, at - now());
  }

  waitCtl(type, ms) {
    return new Promise((resolve, reject) => {
      const list = this.ctlWaiters.get(type) || [];
      const timer = setTimeout(() => { list.splice(list.indexOf(entry), 1); reject(new Error(`no ${type} within ${ms} ms`)); }, ms);
      const entry = (msg, err) => { clearTimeout(timer); err ? reject(err) : resolve(msg); };
      list.push(entry);
      this.ctlWaiters.set(type, list);
      if (this.ctlEarly?.[type]) { const m = this.ctlEarly[type]; delete this.ctlEarly[type]; list.shift()(m); }
    });
  }

  onCtl(data) {
    if (typeof data !== 'string') return this.onBlobChunk(data);
    const msg = JSON.parse(data);
    switch (msg.t) {
      case 'ping': return this.sendCtl({ t: 'pong', i: msg.i, ts: msg.ts });
      case 'pong':
        if (msg.i < 0) { this.rtts.push(now() - msg.ts); if (this.rtts.length > 200) this.rtts.splice(0, 100); return; }
        break;
      case 'hash':
        if (!this.running || msg.f < (this.firstFrame ?? 0)) return; // from before the last (re)start
        this.remoteHashes.set(msg.f, msg.h);
        if (msg.x) this.remoteExtra.set(msg.f, msg.x);
        return this.compareHash(msg.f);
      case 'refuse': return this.refuse(msg.reason, false);
      case 'delay': this.setDelay(msg.D); this.rtts.push(msg.rtt.p50); this.emit('resync', { D: msg.D, rtt: msg.rtt }); return this.log(`host set D=${msg.D}`);
      case 'resync-request': if (this.isHost) this.resync(); return;
      case 'resync-begin': return;
      case 'blob': return this.onBlobBegin(msg);
      case 'blob-end': return this.onBlobEnd(msg);
    }
    const waiter = this.ctlWaiters.get(msg.t)?.shift();
    if (waiter) waiter(msg);
    else if (msg.t === 'hello' || msg.t === 'start' || this.opts.earlyTypes?.includes(msg.t)) (this.ctlEarly ||= {})[msg.t] = msg; // arrived before we waited
    else this.emit('message', msg); // session-level messages (lockstep-emu.js)
  }

  // ---- W4 hook: chunked gzip blob transfer on ctl with backpressure ----
  // Resolves when the last chunk is queued in the channel; the receiver gets onBlob / recvBlob().
  async sendBlob(bytes, meta = {}) {
    const t0 = now(), id = (this.blobId = (this.blobId || 0) + 1);
    this.sendCtl({ t: 'blob', id, size: bytes.byteLength, meta });
    const reader = new Blob([bytes]).stream().pipeThrough(new CompressionStream('gzip')).getReader();
    let pending = [], pendingBytes = 0, zsize = 0;
    const flush = async (all) => {
      while (pendingBytes >= CHUNK || (all && pendingBytes)) {
        const n = Math.min(CHUNK, pendingBytes), chunk = new Uint8Array(n);
        for (let o = 0; o < n;) {
          const head = pending[0], take = Math.min(head.length, n - o);
          chunk.set(head.subarray(0, take), o);
          o += take;
          if (take === head.length) pending.shift(); else pending[0] = head.subarray(take);
        }
        pendingBytes -= n;
        zsize += n;
        if (this.ctl.bufferedAmount > BUF_HIGH) await new Promise((r) => this.ctl.addEventListener('bufferedamountlow', r, { once: true }));
        if (this.ctl.readyState !== 'open') throw new Error('ctl closed during blob send');
        this.sendRaw(this.ctl, chunk, true);
      }
    };
    for (;;) {
      const { value, done } = await reader.read();
      if (done) break;
      pending.push(value);
      pendingBytes += value.length;
      await flush(false);
    }
    await flush(true);
    this.sendCtl({ t: 'blob-end', id, zsize });
    return { id, size: bytes.byteLength, zsize, ms: now() - t0 };
  }

  recvBlob() { return new Promise((resolve) => this.blobWaiters.push(resolve)); }

  onBlobBegin(msg) {
    const ds = new DecompressionStream('gzip');
    const out = new Response(ds.readable).arrayBuffer();
    this.blobIn = { ...msg, t0: now(), writer: ds.writable.getWriter(), out, zsize: 0 };
  }
  onBlobChunk(buf) {
    if (!this.blobIn) return;
    this.blobIn.zsize += buf.byteLength;
    this.blobIn.writer.write(new Uint8Array(buf)).catch(() => {});
  }
  async onBlobEnd(msg) {
    const b = this.blobIn;
    this.blobIn = null;
    if (!b || b.id !== msg.id) return;
    b.writer.close().catch(() => {});
    const bytes = new Uint8Array(await b.out);
    const blob = { id: b.id, meta: b.meta, bytes, zsize: b.zsize, ms: now() - b.t0, ok: bytes.byteLength === b.size };
    this.emit('blob', blob);
    this.blobWaiters.shift()?.(blob);
  }

  // ---- teardown ----
  close() {
    this.running = false;
    clearInterval(this.ticker);
    clearInterval(this.pinger);
    if (this.onVisibility) document.removeEventListener('visibilitychange', this.onVisibility);
    this.ring.store(OFF.ACTIVE, 0);
    this.ring.bump();
    try { this.inCh?.close(); this.ctl?.close(); this.pc?.close(); } catch {}
    try { this.sendSignal({ type: 'leave' }); this.ws?.close(); } catch {}
  }

  snapshot() {
    return {
      status: this.status, host: this.isHost, slot: this.slot, D: this.D, solo: this.solo,
      transport: this.transport, emuFrame: this.lastFrame, localHigh: this.localHigh, remoteHigh: this.remoteHigh, ackedByRemote: this.ackedByRemote,
      rttStart: this.rttAtStart, rttP50: this.rtts.length ? percentile(this.rtts.slice(-20), 0.5) : null,
      adv: this.adv, slowMs: this.slowMs || 0, paused: this.paused, remotePaused: !!this.remotePaused, disconnected: !!this.disconnected,
      overlay: this.overlayVisible, ...this.stats,
    };
  }
}
