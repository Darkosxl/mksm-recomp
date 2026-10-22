// The real emulator's side of a lockstep session (W2 + W4), on top of lockstep.js (W3).
//
// - Drop-in: the guest's emulator boots held at its first vblank. After the handshake the host snapshots at vblank F
//   (no upscaled VRAM) with its memory card, sends it gzip'd on ctl, and BOTH peers load the same bytes (the host
//   reloads its own). They compare the hash of the loaded state and start at F+1.
// - Resync: on a hash mismatch the host snapshots again and both reload, the same way.
// - Overlays for waiting, stalls, disc fetches, transfers.
// The emulator interface is the struct in lockstep.md plus the W4 extension below (host/web.cpp LockstepShared).
import { Lockstep, OFF, FLAG_HOLD, FLAG_PAUSED, discId } from './lockstep.js';

export { Lockstep };

export const EXT = {
  CMD: 2088, HELD: 2092, LOAD_PTR: 2096, LOAD_SIZE: 2100, LOAD_FRAME: 2104, CARD_PTR: 2108, CARD_SIZE: 2112,
  SNAP_STATE: 2116, SNAP_PTR: 2120, SNAP_SIZE: 2124, SNAP_FRAME: 2128, CARD_OUT_PTR: 2132, CARD_OUT_SIZE: 2136,
  LOAD_HASH: 2144, LOADED_FRAME: 2152, DISC_WAIT: 2156, STALL_FRAMES: 2160, STALL_MS: 2164, PAUSED_FRAMES: 2168,
  GAME_FRAME: 2172, RTC: 2176, RTC_SET: 2184, SLICES: 2192, SIZE: 2448,
};
const CMD_SNAPSHOT = 1, CMD_LOAD = 2;
const SNAP_READY = 1, SNAP_RETRY = 2, SNAP_LOADED = 3, SNAP_FAILED = 4;
// Names of the 32 hash parts (EE RAM MB k, plus the extra state hashed with some of them), for desync reports.
export const PART_NAMES = Array.from({ length: 32 }, (_, k) => `ee${k}MB` + (k === 0 ? '+cpu,spr,events' : k === 8 ? '+iop' : k === 16 ? '+spu2' : k === 24 ? '+vu' : ''));

const sleep = (ms) => new Promise((r) => setTimeout(r, ms));
const now = () => performance.now();

// Views on the shared struct, always through the current heap buffer (the wasm memory can grow).
export class Emu {
  constructor(Module) {
    this.M = Module;
    this.base = Module._ps2web_lockstep();
  }
  get i32() { return new Int32Array(this.M.HEAPU8.buffer, this.base, EXT.SIZE >> 2); }
  get dv() { return new DataView(this.M.HEAPU8.buffer, this.base, EXT.SIZE); }
  load(off) { return Atomics.load(this.i32, off >> 2); }
  store(off, v) { Atomics.store(this.i32, off >> 2, v); }
  bump() { const a = this.i32; Atomics.add(a, OFF.SEQ >> 2, 1); Atomics.notify(a, OFF.SEQ >> 2); }
  hold(on) {
    const f = this.load(OFF.FLAGS);
    this.store(OFF.FLAGS, on ? f | FLAG_HOLD : f & ~FLAG_HOLD);
    this.bump();
  }
  slices() { const dv = this.dv; return Array.from({ length: 32 }, (_, k) => dv.getBigUint64(EXT.SLICES + k * 8, true).toString(16)); }
  stats() {
    return {
      emuFrame: this.load(OFF.EMU_FRAME), gameFrame: this.load(EXT.GAME_FRAME), stallFrames: this.load(EXT.STALL_FRAMES),
      stallMs: this.load(EXT.STALL_MS), pausedFrames: this.load(EXT.PAUSED_FRAMES), discWaitMs: this.load(EXT.DISC_WAIT),
      held: this.load(EXT.HELD),
    };
  }
  async until(pred, ms, what) {
    const t0 = now();
    while (!pred()) {
      if (now() - t0 > ms) throw new Error('timed out waiting for ' + what);
      await sleep(4);
    }
  }
  async held(ms = 60000) {
    await this.until(() => this.load(EXT.HELD) >= 0, ms, 'the emulator to hold at a vblank');
    return this.load(EXT.HELD);
  }
  // Holds the emulator, snapshots at the vblank it holds at, and copies state + card out of the heap. The
  // emulator then waits (inside its run loop) for loadState().
  async snapshot(log = () => {}) {
    this.hold(true);
    const at = await this.held();
    this.store(EXT.SNAP_STATE, 0);
    this.store(EXT.CMD, CMD_SNAPSHOT);
    this.bump();
    const t0 = now();
    let retries = 0;
    await this.until(() => {
      const s = this.load(EXT.SNAP_STATE);
      if (s === SNAP_RETRY) { retries++; this.store(EXT.SNAP_STATE, 0); log('snapshot: not at a safe point, retrying at the next vblank'); }
      return s === SNAP_READY;
    }, 60000, 'the snapshot');
    const u8 = this.M.HEAPU8;
    const ptr = this.load(EXT.SNAP_PTR), size = this.load(EXT.SNAP_SIZE);
    const cptr = this.load(EXT.CARD_OUT_PTR), csize = this.load(EXT.CARD_OUT_SIZE);
    const bytes = new Uint8Array(size + csize);
    bytes.set(u8.subarray(ptr, ptr + size));
    if (csize) bytes.set(u8.subarray(cptr, cptr + csize), size);
    return { frame: this.load(EXT.SNAP_FRAME), heldAt: at, ptr, bytes, stateSize: size, cardSize: csize, ms: now() - t0, retries };
  }
  // Loads state bytes (already in the heap at `ptr`, or copied in from `bytes`), optionally with a new card and RTC
  // epoch. Resolves with the hash of the loaded state once the emulator has loaded it.
  async loadState({ ptr = 0, bytes = null, stateSize, cardSize = null, frame, rtc = null }) {
    let mem = 0;
    if (!ptr) {
      mem = ptr = this.M._ps2web_alloc(bytes.length);
      if (!mem) throw new Error('out of memory for the state');
      this.M.HEAPU8.set(bytes, mem);
    }
    this.store(EXT.LOAD_PTR, ptr);
    this.store(EXT.LOAD_SIZE, stateSize);
    this.store(EXT.LOAD_FRAME, frame);
    if (cardSize === null) this.store(EXT.CARD_SIZE, -1);
    else { this.store(EXT.CARD_PTR, ptr + stateSize); this.store(EXT.CARD_SIZE, cardSize); }
    if (rtc !== null) { this.dv.setBigInt64(EXT.RTC, BigInt(rtc), true); this.store(EXT.RTC_SET, 1); } else this.store(EXT.RTC_SET, 0);
    this.store(EXT.SNAP_STATE, 0);
    this.store(EXT.LOADED_FRAME, -1);
    this.store(EXT.CMD, CMD_LOAD);
    this.bump();
    const t0 = now();
    try {
      await this.until(() => [SNAP_LOADED, SNAP_FAILED].includes(this.load(EXT.SNAP_STATE)), 60000, 'the state load');
    } finally {
      if (mem && this.load(EXT.SNAP_STATE) !== 0) this.M._ps2web_free(mem);
    }
    if (this.load(EXT.SNAP_STATE) === SNAP_FAILED) throw new Error('the emulator could not load the state');
    return { frame, hash: this.dv.getBigUint64(EXT.LOAD_HASH, true).toString(16), ms: now() - t0 };
  }
}

// Build id, config and patch file names for the handshake (a mismatch refuses the join), from the emulator itself
// (host/lockstep_id.cpp), so a desktop ps2run built from the same sources announces the same values:
// build = hash of the emulation sources, config = {lockstep, rate, patches, env}. Call after the runtime is
// initialized and Module.ENV is set (config.env lists the game-affecting PS2_* variables).
export function identity(M) {
  const p = M._ps2web_lockstep_identity();
  const id = JSON.parse(new TextDecoder().decode(M.HEAPU8.slice(p, M.HEAPU8.indexOf(0, p))));
  if (id.error) throw new Error(id.error);
  return id;
}
export async function discIdOf(url, size) {
  const r = await fetch(url, { headers: { Range: 'bytes=0-1048575' } });
  return discId(size, await r.arrayBuffer());
}

export class Session {
  // opts: Module, room, build, disc, config, patchFiles, readPad, signal, rtc, log, test, onStatus, overlay (bool),
  // owner + nick (personal room: owner hosts it; a guest gives room + nick), onEnd(reason) (the landing-page lobby: a
  // guest's session ends when the host leaves or kicks it, reason 'host-left' | 'kicked' | 'replaced', instead of
  // playing on alone on the host's unsaved card)
  constructor(opts) {
    this.opts = { log: console.log, overlay: true, ...opts };
    this.emu = new Emu(opts.Module);
    this.rtc = opts.rtc;
    this.resyncTimes = [];
    this.stats = { syncs: 0, resyncs: 0, loadMismatches: 0, transfers: [], desyncReports: [] };
    this.past = { hashesOk: 0, desyncs: 0, sessions: 0 }; // totals of earlier Lockstep instances (a guest left)
    this.syncing = false;
    this.lastEmuFrame = -1;
    this.lastEmuChange = now();
  }
  log(...a) { this.opts.log('[session]', ...a); }
  status(text) { this.statusText = text; this.opts.onStatus?.(text); }

  newLockstep() {
    const { Module, room, owner, nick, build, disc, config, patchFiles, readPad, signal, test } = this.opts;
    const ls = new Lockstep({
      buffer: Module.HEAPU8.buffer, base: this.emu.base, room, owner, nick, build, disc, config, patchFiles, readPad, test: test || {},
      ...(signal ? { signal } : {}),
      log: (...a) => this.opts.log('[lockstep]', ...a), overlay: this.opts.overlay,
      sync: (l, isHost) => (isHost ? this.hostSync(l) : this.guestSync(l)),
      earlyTypes: ['loaded', 'sync-result'],
      hashExtra: () => this.emu.slices(),
    });
    ls.onDesync = (d) => this.onDesync(d);
    ls.onMessage = (m) => this.onMessage(m);
    ls.onSolo = () => this.onSolo();
    ls.onStart = (d) => { this.status(`playing as P${d.slot + 1}, input delay ${d.D} frames`); this.opts.onStart?.(d); };
    ls.onRefused = ({ reason, detail }) => this.status(detail || 'the other player runs a different ' + reason);
    ls.onPeerLeft = (m) => this.onPeerLeft(m);
    ls.onDisconnect = () => this.hostClosed && this.end('host-left');
    ls.onReplaced = () => (this.opts.onEnd ? this.end('replaced') : this.status('this game was opened on another page'));
    return ls;
  }

  // Before callMain: joins the room so the role is known. A guest's emulator then boots held at its first vblank.
  async join() {
    this.ls = this.newLockstep();
    const joined = await this.ls.join();
    this.isHost = joined.host;
    this.code = joined.room;
    if (!this.isHost) this.emu.hold(true);
    this.emu.store(OFF.LOCAL_SLOT, this.ls.slot);
    this.watchdog = setInterval(() => this.watch(), 100);
    return joined;
  }

  // After callMain: connects (in the background on the host, which plays alone until a guest arrives).
  async run() {
    const ls = this.ls;
    this.status(this.isHost ? 'waiting for the other player' : 'connecting to the host');
    try {
      await ls.connect();
    } catch (e) {
      if (ls !== this.ls || this.ended) return; // a restart replaced it
      this.log('session failed:', e.message);
      this.status('could not connect: ' + e.message);
      this.failed = e;
      if (this.isHost) this.restartHost(3000);
    }
  }

  // ---- W4: snapshot transfer, both peers load the same bytes ----
  async hostSync(ls, attempt = 0) {
    this.syncing = true;
    this.status('sending the game state to the other player');
    const t0 = now();
    const snap = await this.emu.snapshot((m) => this.log(m));
    const meta = { frame: snap.frame, stateSize: snap.stateSize, cardSize: snap.cardSize, rtc: this.rtc, attempt };
    this.log(`snapshot of frame ${snap.frame}: ${(snap.stateSize / 1048576).toFixed(1)} MB + card ${(snap.cardSize / 1048576).toFixed(1)} MB in ${snap.ms.toFixed(0)} ms`);
    const loaded = ls.waitCtl('loaded', 300000);
    const sending = ls.sendBlob(snap.bytes, meta);
    const mine = await this.emu.loadState({ ptr: snap.ptr, stateSize: snap.stateSize, frame: snap.frame });
    const sent = await sending;
    const theirs = await loaded;
    const ok = theirs.h === mine.hash && theirs.f === snap.frame;
    const transfer = { frame: snap.frame, bytes: snap.bytes.length, zbytes: sent.zsize, snapMs: snap.ms, sendMs: sent.ms, loadMs: mine.ms, totalMs: now() - t0, hash: mine.hash, ok };
    this.stats.transfers.push(transfer);
    this.log(`sync frame ${snap.frame}: ${(sent.zsize / 1048576).toFixed(1)} MB gzip, ${transfer.totalMs.toFixed(0)} ms total, hash ${mine.hash} ${ok ? '=' : '!='} ${theirs.h}`);
    ls.sendCtl({ t: 'sync-result', ok, f: snap.frame });
    if (!ok) {
      this.stats.loadMismatches++;
      if (attempt >= 2) throw new Error('the loaded states differ');
      return this.hostSync(ls, attempt + 1);
    }
    this.stats.syncs++;
    this.syncing = false;
    return snap.frame + 1;
  }

  async guestSync(ls) {
    this.syncing = true;
    for (;;) {
      const blobP = ls.recvBlob(); // registered before any await, so the blob cannot arrive unseen
      this.status('receiving the game state');
      this.receiving = ls;
      const blob = await blobP;
      this.receiving = null;
      const m = blob.meta;
      if (!blob.ok) throw new Error('the state transfer was cut short');
      this.status('loading the game state');
      if (this.emu.load(EXT.HELD) < 0) await this.emu.held();
      const got = await this.emu.loadState({ bytes: blob.bytes, stateSize: m.stateSize, cardSize: m.cardSize, frame: m.frame, rtc: m.rtc });
      this.rtc = m.rtc;
      this.log(`loaded frame ${m.frame} (${(blob.zsize / 1048576).toFixed(1)} MB gzip in ${blob.ms.toFixed(0)} ms, load ${got.ms.toFixed(0)} ms), hash ${got.hash}`);
      this.stats.transfers.push({ frame: m.frame, bytes: blob.bytes.length, zbytes: blob.zsize, recvMs: blob.ms, loadMs: got.ms, hash: got.hash });
      ls.sendCtl({ t: 'loaded', f: m.frame, h: got.hash });
      const result = await ls.waitCtl('sync-result', 120000);
      if (result.ok) break;
      this.log('the host loaded a different state; it sends a new snapshot');
    }
    this.stats.syncs++;
    this.syncing = false;
  }

  // ---- desync -> resync ----
  onDesync(d) {
    const diff = d.localExtra && d.remoteExtra ? d.localExtra.map((h, k) => (h !== d.remoteExtra[k] ? PART_NAMES[k] : null)).filter(Boolean) : [];
    const report = { frame: d.frame, local: d.local, remote: d.remote, lastGood: d.lastGood, parts: diff };
    this.stats.desyncReports.push(report);
    this.log(`DESYNC at frame ${d.frame} (last good ${d.lastGood}); differing parts: ${diff.join(' ') || 'unknown'}`);
    if (this.isHost) this.resync('desync');
    else this.ls.sendCtl({ t: 'state-request', f: d.frame });
  }

  async resync(reason) {
    const ls = this.ls;
    if (!this.isHost) return ls.sendCtl({ t: 'state-request', reason });
    if (this.syncing || !ls.running) return;
    const t = now();
    this.resyncTimes = this.resyncTimes.filter((x) => t - x < 60000);
    this.resyncTimes.push(t);
    if (this.resyncTimes.length > 3) {
      this.log(`WARNING: ${this.resyncTimes.length} resyncs in the last minute`);
      this.showOverlay('The game keeps going out of sync. Resynchronising…');
    }
    this.stats.resyncs++;
    this.log(`resync (${reason}) at frame ${ls.lastFrame}`);
    ls.suspend();
    ls.sendCtl({ t: 'state-begin', reason });
    try {
      const frame = await this.hostSync(ls);
      await ls.startAt(frame);
    } catch (e) {
      this.log('resync failed:', e.message);
      this.syncing = false;
      ls.goSolo();
      this.emu.hold(false);
    }
  }

  async onMessage(msg) {
    const ls = this.ls;
    if (msg.t === 'state-request' && this.isHost) return this.resync('guest request');
    if (msg.t === 'bye' && this.isHost) return ls.running && !ls.solo ? ls.goSolo() : this.restartHost(0); // the guest left
    if ((msg.t === 'bye' || msg.t === 'kick') && !this.isHost && this.opts.onEnd) return this.end(msg.t === 'kick' ? 'kicked' : 'host-left');
    if (msg.t === 'state-begin' && !this.isHost) {
      if (this.syncing) return;
      ls.suspend();
      try {
        await this.guestSync(ls);
        await ls.awaitStart();
      } catch (e) {
        this.log('resync failed:', e.message);
        this.syncing = false;
        this.status('lost the session: ' + e.message);
      }
    }
  }

  // The other player is gone: the host keeps playing and waits in the same room for someone to drop in again.
  onSolo() {
    if (!this.isHost && this.opts.onEnd) return this.end('host-left');
    this.status('the other player left; playing alone');
    if (this.isHost) this.restartHost(1000);
  }
  // A guest in a personal room: the host's page closed the room. Its game may still run on a direct connection (only
  // its signalling dropped): play on while its inputs arrive, end once they stop.
  onPeerLeft(m) {
    if (this.isHost || !m.closed || !this.opts.onEnd) return;
    const ls = this.ls;
    if (ls.running && !ls.solo && ls.transport === 'p2p' && !ls.disconnected && now() - ls.lastRecv < 1000) this.hostClosed = true;
    else this.end('host-left');
  }
  end(reason) {
    if (this.ended) return;
    this.ended = reason;
    this.log('session ended:', reason);
    try { this.ls.close(); } catch {}
    this.opts.onEnd?.(reason);
  }
  // Host: sends the guest away (back to its landing page) and reopens the room for the next one.
  kick() {
    if (!this.isHost || !this.ls) return;
    this.ls.sendCtl({ t: 'kick' });
    this.restartHost(300);
  }
  // The page is going away: tell the peer now.
  bye() {
    this.ended ||= 'bye';
    this.ls?.bye();
  }
  restartHost(delay) {
    const old = this.ls;
    setTimeout(async () => {
      if (this.ls !== old || this.ended) return; // already restarted
      this.syncing = false;
      this.past.hashesOk += this.ls.stats.hashesOk;
      this.past.desyncs += this.ls.stats.desyncs;
      this.past.sessions++;
      try { this.ls.close(); } catch {}
      this.emu.hold(false);
      this.ls = this.newLockstep();
      await this.ls.join().catch((e) => this.log('rejoin failed', e.message));
      this.run();
    }, delay);
  }

  // ---- overlays: disc fetches, stalls, transfers ----
  watch() {
    const e = this.emu, ls = this.ls, t = now();
    const frame = e.load(OFF.EMU_FRAME);
    if (frame !== this.lastEmuFrame) { this.lastEmuFrame = frame; this.lastEmuChange = t; }
    let text = '';
    const disc = e.load(EXT.DISC_WAIT);
    if (this.receiving?.blobIn) text = `Receiving the game from the host… ${(this.receiving.blobIn.zsize / 1048576).toFixed(1)} MB`;
    else if (this.syncing) text = this.isHost ? 'Sending the game to the other player…' : 'Loading the game state…';
    else if (!this.isHost && !ls?.running && !ls?.solo) text = this.statusText ? 'Joining: ' + this.statusText + '…' : 'Joining…';
    else if (disc > 0) text = `Loading game data… ${(disc / 1000).toFixed(1)} s`;
    else if (ls?.running && !ls.disconnected && t - this.lastEmuChange > 1000 && !(e.load(OFF.FLAGS) & FLAG_PAUSED)) text = 'Waiting for the other player…';
    if (text) this.showOverlay(text); else this.hideOverlay();
  }
  showOverlay(text) {
    if (!this.opts.overlay) return;
    if (!this.overlay) {
      this.overlay = document.createElement('div');
      this.overlay.setAttribute('role', 'status');
      Object.assign(this.overlay.style, {
        position: 'fixed', left: '50%', top: '16px', transform: 'translateX(-50%)', maxWidth: 'calc(100% - 32px)', padding: '8px 16px',
        borderRadius: '6px', background: 'rgba(0,0,0,.75)', color: '#fff', font: '600 15px/1.4 system-ui, sans-serif', zIndex: 999, pointerEvents: 'none',
      });
      document.body.append(this.overlay);
    }
    this.overlay.textContent = text;
    this.overlay.hidden = false;
  }
  hideOverlay() { if (this.overlay) this.overlay.hidden = true; }

  snapshot() {
    const ls = this.ls?.snapshot();
    const total = { hashesOk: this.past.hashesOk + (ls?.hashesOk || 0), desyncs: this.past.desyncs + (ls?.desyncs || 0), sessions: this.past.sessions + 1 };
    return { host: this.isHost, syncing: this.syncing, rtc: this.rtc, ...this.stats, total, ls, emu: this.emu.stats() };
  }
}
