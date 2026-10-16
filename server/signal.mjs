#!/usr/bin/env node
// Invite links, cookie auth (for Caddy forward_auth), 2-player WebRTC signalling rooms and coturn
// credentials for the MKSM site. Node >= 20 plus `ws`. Configuration and protocol: README.md.
import { createServer } from 'node:http';
import { createHash, createHmac, randomBytes, randomInt, timingSafeEqual } from 'node:crypto';
import { mkdirSync, readFileSync, renameSync, writeFileSync } from 'node:fs';
import { join } from 'node:path';
import { WebSocketServer } from 'ws';

const env = process.env;
const secret = (name) => {
  if ((env[name] || '').length < 32) {
    console.error(`${name} must be set to at least 32 characters`);
    process.exit(1);
  }
  return env[name];
};
const COOKIE_SECRET = secret('COOKIE_SECRET'), ADMIN_SECRET = secret('ADMIN_SECRET'), TURN_SECRET = secret('TURN_SECRET');
const HOST = env.HOST || '127.0.0.1', PORT = Number(env.PORT ?? 8787);
const ORIGIN = env.PUBLIC_ORIGIN || ''; // https://your.domain, used for invite links and the WebSocket Origin check
const TURN_HOST = env.TURN_HOST || (ORIGIN ? new URL(ORIGIN).hostname : '127.0.0.1');
const TURN_PORT = Number(env.TURN_PORT || 3478), TURN_TTL = Number(env.TURN_TTL || 3600);
const GRACE_MS = Number(env.ROOM_GRACE_MS || 600_000);
const COOKIE = '__Host-mksm', COOKIE_AGE = 400 * 86400; // 400 days is Chrome's cap
const MAX_ROOMS = 1000, ROOM_CHARS = 'abcdefghijkmnpqrstuvwxyz23456789'; // 12 chars of 32 = 60 bits
const ROOM_ID = new RegExp(`^[${ROOM_CHARS}]{12}$`);
// Where /invite?room=<id> lands: a same-site path template. The VPS site serves /play/<room>.
const ROOM_URL = env.ROOM_URL || '/play/{room}';
if (!ROOM_URL.startsWith('/') || ROOM_URL.startsWith('//') || /[\s\\]/.test(ROOM_URL) || !ROOM_URL.includes('{room}')) {
  console.error(`ROOM_URL must be a path starting with a single / and containing {room}, got ${JSON.stringify(ROOM_URL)}`);
  process.exit(1);
}
const positive = (name, fallback) => {
  const value = Number(env[name] || fallback);
  if (!(value > 0)) {
    console.error(`${name} must be a positive number`);
    process.exit(1);
  }
  return value;
};
// Binary relay (the fallback when WebRTC cannot connect): per-message cap, per-sender rate and burst, and
// how much may queue towards a receiver before its sender is held back. All in bytes.
const RELAY_MAX = positive('RELAY_MAX', 256 * 1024), RELAY_RATE = positive('RELAY_RATE', 8_000_000);
const RELAY_BURST = positive('RELAY_BURST', 1 << 20), RELAY_BACKLOG = positive('RELAY_BACKLOG', 4 << 20);
const TEXT_MAX = 64 * 1024; // JSON frames

// Invites persist in DATA_DIR/invites.json, keyed by id. Only a hash of each token is stored.
const DATA_DIR = env.DATA_DIR || './data', FILE = join(DATA_DIR, 'invites.json');
mkdirSync(DATA_DIR, { recursive: true });
let invites = {};
try {
  invites = JSON.parse(readFileSync(FILE, 'utf8'));
} catch (e) {
  if (e.code !== 'ENOENT') throw e;
}
const save = () => {
  writeFileSync(FILE + '.tmp', JSON.stringify(invites, null, 1) + '\n', { mode: 0o600 });
  renameSync(FILE + '.tmp', FILE);
};
const sha256 = (s) => createHash('sha256').update(s).digest('hex');
const same = (a, b) => timingSafeEqual(Buffer.from(sha256(String(a))), Buffer.from(sha256(String(b))));
const sign = (s) => createHmac('sha256', COOKIE_SECRET).update(s).digest('base64url');

// Cookie value: <invite id>.<issued unix seconds>.<HMAC>. Revoking the invite logs its users out.
function user(req) {
  const m = (req.headers.cookie || '').match(/(?:^|;\s*)__Host-mksm=([\w-]+)\.(\d+)\.([\w-]+)/);
  if (!m || !same(m[3], sign(`${m[1]}.${m[2]}`))) return null;
  const invite = invites[m[1]];
  if (!invite || invite.revoked || Date.now() / 1000 - Number(m[2]) > COOKIE_AGE) return null;
  return m[1];
}

const DENIED = '<!doctype html><meta charset="utf-8"><title>Invite only</title><p>This site is invite-only. Open the invite link you were sent.</p>\n';
const BAD_INVITE = '<!doctype html><meta charset="utf-8"><title>Invite only</title><p>This invite link is invalid, revoked or used up. Ask for a new one.</p>\n';
const BAD_ROOM = '<!doctype html><meta charset="utf-8"><title>Bad room</title><p>The room in this invite link is malformed. Ask for a new link.</p>\n';

function send(res, status, body, type = 'text/plain; charset=utf-8', headers = {}) {
  if (typeof body === 'object') [body, type] = [JSON.stringify(body, null, 1) + '\n', 'application/json'];
  res.writeHead(status, { 'Content-Type': type, 'Cache-Control': 'no-store', ...headers }).end(body);
}

function admin(req, res, url) {
  const auth = req.headers.authorization || '';
  if (!auth.startsWith('Bearer ') || !same(auth.slice(7), ADMIN_SECRET)) return send(res, 401, 'admin secret required\n');
  const route = `${req.method} ${url.pathname}`;
  if (route === 'POST /admin/invite') {
    const uses = Math.min(Math.max(parseInt(url.searchParams.get('uses') || '1', 10) || 1, 1), 1000);
    const note = (url.searchParams.get('note') || '').slice(0, 100);
    let id;
    do id = randomBytes(6).toString('base64url'); while (invites[id]);
    const token = randomBytes(18).toString('base64url');
    invites[id] = { hash: sha256(token), uses, used: 0, note, created: new Date().toISOString(), revoked: false };
    save();
    const origin = ORIGIN || `${req.headers['x-forwarded-proto'] || 'http'}://${req.headers.host}`;
    console.log(`invite ${id} minted: ${uses} use(s) ${note}`);
    return send(res, 201, { id, uses, note, link: `${origin}/invite?t=${token}` });
  }
  if (route === 'GET /admin/invites') {
    return send(res, 200, Object.entries(invites).map(([id, { hash, ...rest }]) => ({ id, ...rest })));
  }
  if (route === 'POST /admin/revoke') {
    const invite = invites[url.searchParams.get('id')];
    if (!invite) return send(res, 404, 'no such invite\n');
    invite.revoked = true;
    save();
    return send(res, 200, { id: url.searchParams.get('id'), revoked: true });
  }
  if (route === 'GET /admin/status') {
    const peers = [...rooms.values()].reduce((n, room) => n + room.peers.length, 0);
    return send(res, 200, { rooms: rooms.size, peers, sockets: wss.clients.size, relay: relayed });
  }
  send(res, 404, 'not found\n');
}

const server = createServer((req, res) => {
  const url = new URL(req.url, 'http://local');
  if (url.pathname === '/admin' || url.pathname.startsWith('/admin/')) return admin(req, res, url);
  if (url.pathname === '/auth') return user(req) ? send(res, 200, 'ok\n') : send(res, 401, DENIED, 'text/html; charset=utf-8');
  if (url.pathname === '/invite') {
    // ?room= must be a well-formed room id, so the redirect stays on this site; a bad one does not use the token.
    const room = url.searchParams.get('room');
    if (room !== null && !ROOM_ID.test(room)) return send(res, 400, BAD_ROOM, 'text/html; charset=utf-8');
    const location = room === null ? '/' : ROOM_URL.replaceAll('{room}', room);
    if (user(req)) return send(res, 302, '', undefined, { Location: location });
    const hash = sha256(url.searchParams.get('t') || '');
    const id = Object.keys(invites).find((k) => same(invites[k].hash, hash));
    const invite = invites[id];
    if (!invite || invite.revoked || invite.used >= invite.uses) return send(res, 403, BAD_INVITE, 'text/html; charset=utf-8');
    invite.used++;
    save();
    console.log(`invite ${id} used (${invite.used}/${invite.uses})`);
    const cookie = `${COOKIE}=${id}.${Math.floor(Date.now() / 1000)}`;
    return send(res, 302, '', undefined, {
      Location: location,
      'Set-Cookie': `${cookie}.${sign(cookie.slice(COOKIE.length + 1))}; Path=/; Max-Age=${COOKIE_AGE}; HttpOnly; Secure; SameSite=Lax`,
      'Referrer-Policy': 'no-referrer',
    });
  }
  if (url.pathname === '/turn') {
    const id = user(req);
    if (!id) return send(res, 401, DENIED, 'text/html; charset=utf-8');
    // coturn use-auth-secret: username = expiry:id, credential = base64(HMAC-SHA1(static-auth-secret, username)).
    const username = `${Math.floor(Date.now() / 1000) + TURN_TTL}:${id}`;
    const credential = createHmac('sha1', TURN_SECRET).update(username).digest('base64');
    const at = `${TURN_HOST}:${TURN_PORT}`;
    return send(res, 200, {
      username, credential, ttl: TURN_TTL,
      iceServers: [{ urls: [`stun:${at}`] }, { urls: [`turn:${at}?transport=udp`, `turn:${at}?transport=tcp`], username, credential }],
    });
  }
  send(res, 404, 'not found\n');
});

// Rooms: in memory only. A room holds at most 2 sockets; it is dropped GRACE_MS after it becomes empty.
const rooms = new Map();
// maxPayload admits relay frames up to RELAY_MAX so they can be refused politely; JSON frames over TEXT_MAX and
// anything over maxPayload close the socket (1009).
const wss = new WebSocketServer({ noServer: true, maxPayload: Math.max(1 << 20, RELAY_MAX) });
const relayed = { bytes: 0, peakBacklog: 0 }; // /admin/status
const out = (ws, msg) => ws.readyState === ws.OPEN && ws.send(JSON.stringify(msg));
const fail = (ws, error, request) => out(ws, { type: 'error', error, request });
const idle = (room) => {
  clearTimeout(room.timer);
  room.timer = setTimeout(() => rooms.delete(room.id), GRACE_MS);
};

server.on('upgrade', (req, socket, head) => {
  socket.on('error', () => socket.destroy());
  const path = new URL(req.url, 'http://local').pathname;
  const reject =(status) => socket.end(`HTTP/1.1 ${status}\r\nConnection: close\r\nContent-Length: 0\r\n\r\n`);
  if (path === '/auth') return reject(user(req) ? '200 OK' : '401 Unauthorized'); // forward_auth of a WebSocket request
  if (path !== '/ws') return reject('404 Not Found');
  const id = user(req);
  if (!id) return reject('401 Unauthorized');
  if (ORIGIN && req.headers.origin && req.headers.origin !== ORIGIN) return reject('403 Forbidden');
  wss.handleUpgrade(req, socket, head, (ws) => {
    Object.assign(ws, { id: randomBytes(6).toString('base64url'), user: id, room: null, alive: true });
    Object.assign(ws, { tokens: RELAY_BURST, refilled: performance.now(), flowTimer: null }); // relay flow()
    ws.on('pong', () => (ws.alive = true));
    ws.on('error', () => {}); // e.g. an oversized frame (code 1009); 'close' follows
    ws.on('close', () => leave(ws));
    ws.on('message', (data, binary) => {
      if (ws.readyState !== ws.OPEN) return; // closing, e.g. after the 1009 below
      ws.alive = true; // a pong can queue behind relay data that is being paced
      if (binary) return relay(ws, data);
      if (data.length > TEXT_MAX) return ws.close(1009);
      let msg;
      try {
        msg = JSON.parse(data);
      } catch {}
      if (!msg || typeof msg.type !== 'string') return fail(ws, 'bad-request');
      handle(ws, msg);
    });
  });
});

function handle(ws, msg) {
  const room = ws.room;
  switch (msg.type) {
    case 'create': {
      if (rooms.size >= MAX_ROOMS) return fail(ws, 'busy', 'create');
      const build = typeof msg.build === 'string' && /^[0-9a-f]{1,64}$/.test(msg.build) ? msg.build : null;
      let id;
      do id = Array.from({ length: 12 }, () => ROOM_CHARS[randomInt(ROOM_CHARS.length)]).join('');
      while (rooms.has(id));
      const created = { id, build, peers: [], timer: null };
      rooms.set(id, created);
      idle(created);
      return out(ws, { type: 'created', room: id, build });
    }
    case 'info': {
      const found = rooms.get(msg.room);
      if (!found) return fail(ws, 'not-found', 'info');
      return out(ws, { type: 'info', room: found.id, build: found.build, peers: found.peers.length });
    }
    case 'join': {
      if (room) return fail(ws, 'already-joined', 'join');
      const target = rooms.get(msg.room);
      if (!target) return fail(ws, 'not-found', 'join');
      if (target.peers.length >= 2) return fail(ws, 'full', 'join');
      if (msg.build && target.build && msg.build !== target.build) return fail(ws, 'build-mismatch', 'join');
      const peer = target.peers[0];
      clearTimeout(target.timer);
      target.peers.push(ws);
      ws.room = target;
      ws.host = !peer;
      out(ws, { type: 'joined', room: target.id, id: ws.id, host: ws.host, peer: peer ? peer.id : null, build: target.build });
      if (peer) out(peer, { type: 'peer-joined', peer: ws.id });
      return;
    }
    case 'leave':
      leave(ws);
      return out(ws, { type: 'left' });
    case 'offer':
    case 'answer':
    case 'ice':
    case 'ctl':
    case 'transport': {
      if (!room) return fail(ws, 'not-joined', msg.type);
      const peer = room.peers.find((p) => p !== ws);
      if (!peer) return fail(ws, 'no-peer', msg.type);
      return out(peer, { ...msg, from: ws.id });
    }
    default:
      return fail(ws, 'bad-request', msg.type);
  }
}

function leave(ws) {
  const room = ws.room;
  if (!room) return;
  ws.room = null;
  flow(ws); // no room: released
  room.peers = room.peers.filter((p) => p !== ws);
  const peer = room.peers[0];
  if (!peer) return idle(room);
  flow(peer); // alone: released
  peer.host = true; // the one still running the game owns the session
  out(peer, { type: 'peer-left', peer: ws.id, host: true });
}

// Binary frames from a joined socket go verbatim to the other peer (the client's data channels, when WebRTC
// cannot connect). Contents are opaque. Nothing is dropped for rate: flow() slows the sender instead.
function relay(ws, data) {
  if (!ws.room) return fail(ws, 'not-joined', 'relay');
  if (data.length > RELAY_MAX) return fail(ws, 'too-big', 'relay');
  const peer = ws.room.peers.find((p) => p !== ws);
  if (!peer) return; // alone (the peer just left, or the next one has not joined yet): dropped
  if (peer.readyState === peer.OPEN) peer.send(data, { binary: true });
  relayed.bytes += data.length;
  relayed.peakBacklog = Math.max(relayed.peakBacklog, peer.bufferedAmount);
  flow(ws, data.length);
}

// Relay flow control: charges `bytes` to the sender's token bucket (RELAY_RATE/s, capacity RELAY_BURST), then
// stops reading the sender while the bucket is in debt or the peer has more than RELAY_BACKLOG bytes queued,
// re-checking on a timer. TCP then pushes back to the sender. Frames ws already read still arrive and are
// relayed. A socket without a peer (or not open) is always released.
function flow(ws, bytes = 0) {
  const now = performance.now();
  ws.tokens = Math.min(RELAY_BURST, ws.tokens + ((now - ws.refilled) * RELAY_RATE) / 1000) - bytes;
  ws.refilled = now;
  clearTimeout(ws.flowTimer);
  ws.flowTimer = null;
  const peer = ws.readyState === ws.OPEN ? ws.room?.peers.find((p) => p !== ws) : null;
  const wait = !peer ? 0
    : ws.tokens < 0 ? Math.ceil((-ws.tokens * 1000) / RELAY_RATE)
    : peer.bufferedAmount > RELAY_BACKLOG ? 15 : 0;
  if (wait) {
    ws.pause();
    ws.flowTimer = setTimeout(flow, wait, ws);
  } else if (ws.isPaused) ws.resume();
}

// Dead connections (sleeping laptops, dropped Wi-Fi) are noticed within 2 intervals and count as leaving.
const heartbeat = setInterval(() => {
  for (const ws of wss.clients) {
    if (ws.isPaused) ws.alive = true; // held by flow(): its pong cannot be read until it is released
    else if (!ws.alive) ws.terminate();
    else {
      ws.alive = false;
      ws.ping();
    }
  }
}, 20_000);

server.listen(PORT, HOST, () => console.log(`listening on http://${HOST}:${server.address().port}`));
for (const signal of ['SIGINT', 'SIGTERM'])
  process.on(signal, () => {
    clearInterval(heartbeat);
    for (const ws of wss.clients) ws.close(1001, 'server restart');
    server.close(() => process.exit(0));
    setTimeout(() => process.exit(0), 1000).unref();
  });
