// Player bug reports (POST /report), shared by signal.mjs (VPS) and host.mjs (host mode). The page sends JSON
// {title, text, png (base64), meta}; a copy is kept in <dir>/<time>-<rand>.png + .json and, when FEMME_REPORT_URL and
// FEMME_REPORT_TOKEN are set, the report is forwarded to the FEMME board. The token is never logged or sent back.
import { randomBytes } from 'node:crypto';
import { chmodSync, mkdirSync, readFileSync, statSync, writeFileSync } from 'node:fs';
import { join } from 'node:path';

const BODY_MAX = 9 << 20, PNG_MAX = 6 << 20, TITLE_MAX = 120, TEXT_MAX = 4000, META_MAX = 4096;
const PER_HOUR = 5, IN_FLIGHT_MAX = 3, FORWARD_MS = 20_000, LINGER_MS = 2000, LINGER_MAX = 64 << 20;
const PNG_SIG = Buffer.from([0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a]), BASE64 = /^[A-Za-z0-9+/]*={0,2}$/;
const object = (v) => v !== null && typeof v === 'object' && !Array.isArray(v);
const fail = (status, error, headers = {}) => ({ status, body: { ok: false, error }, headers });

// KEY=VALUE lines of an optional env file (host mode: ~/.config/mksm/report.env); {} when it does not exist.
export function readEnvFile(file) {
  let text;
  try {
    text = readFileSync(file, 'utf8');
  } catch (e) {
    if (e.code === 'ENOENT') return {};
    throw e;
  }
  if (statSync(file).mode & 0o077) console.error(`${file} is readable by others; chmod 600 it`);
  const env = {};
  for (const m of text.matchAll(/^\s*(?:export\s+)?([A-Za-z_]\w*)=(.*?)\s*$/gm)) env[m[1]] = m[2].replace(/^(['"])(.*)\1$/, '$2');
  return env;
}

// The body, or null as soon as it passes `max` bytes (the caller answers 413 and drops the rest).
const readBody = (req, max) => new Promise((resolve, reject) => {
  const chunks = [];
  let size = 0;
  req.on('data', (c) => {
    if ((size += c.length) <= max) return chunks.push(c);
    drop(req);
    resolve(null);
  });
  req.on('end', () => resolve(Buffer.concat(chunks)));
  req.on('error', reject);
  req.on('close', () => reject(new Error('client went away')));
});

// A refused request's body is read and thrown away for up to LINGER_MS / LINGER_MAX bytes, then the connection is
// cut. Closing at once would reset it under a client that is still sending, and the client would lose the answer.
function drop(req) {
  if (req.complete) return;
  let extra = 0;
  const cut = () => req.socket?.destroy(), timer = setTimeout(cut, LINGER_MS).unref();
  req.removeAllListeners('data').on('data', (c) => (extra += c.length) > LINGER_MAX && cut()).once('end', () => clearTimeout(timer)).resume();
}

// -> report(req, who) resolving to {status, body, headers}; who = {id, note?} of a let-in visitor, or null. Never rejects.
export function reportRoute({ dir, server, url, token, log = console.log }) {
  const protocol = (() => { try { return new URL(url).protocol; } catch { return null; } })();
  if (url && protocol !== 'http:' && protocol !== 'https:') {
    console.error('FEMME_REPORT_URL must be an http(s):// URL');
    process.exit(1);
  }
  const forwarding = Boolean(url && token);
  log(`reports: ${dir}, ${forwarding ? `forwarded to ${new URL(url).host}` : 'local copy only (FEMME_REPORT_URL / FEMME_REPORT_TOKEN unset)'}`);
  const recent = new Map(); // who.id -> report times (ms) in the last hour, a slot taken while a report is in flight
  let inFlight = 0;

  async function forward(report) {
    if (!forwarding) return { forwarded: false, id: null, why: 'not configured' };
    try {
      const r = await fetch(url, {
        method: 'POST', redirect: 'error', signal: AbortSignal.timeout(FORWARD_MS),
        headers: { Authorization: `Bearer ${token}`, 'Content-Type': 'application/json' }, body: JSON.stringify(report),
      });
      const reply = await r.json().catch(() => null);
      const id = ['number', 'string'].includes(typeof reply?.id) ? reply.id : null;
      return { forwarded: r.ok, id: r.ok ? id : null, why: `HTTP ${r.status}` };
    } catch (e) {
      return { forwarded: false, id: null, why: e.name === 'TimeoutError' ? 'timeout' : e.cause?.code || e.message };
    }
  }

  async function handle(req, who) {
    const refuse = (status, error, headers) => (drop(req), fail(status, error, headers)); // before the body is read
    if (!who) return refuse(401, 'invite required');
    if (req.method !== 'POST') return refuse(405, 'POST only', { Allow: 'POST' });
    if (!/^application\/json\s*(;|$)/i.test(req.headers['content-type'] || '')) return refuse(415, 'Content-Type must be application/json');
    if (Number(req.headers['content-length']) > BODY_MAX) return refuse(413, 'report too large');
    const now = Date.now(), times = (recent.get(who.id) || []).filter((t) => now - t < 3600_000);
    recent.set(who.id, times);
    if (times.length >= PER_HOUR) return refuse(429, `at most ${PER_HOUR} reports an hour`, { 'Retry-After': String(Math.ceil((times[0] + 3600_000 - now) / 1000)) });
    if (inFlight >= IN_FLIGHT_MAX) return refuse(503, 'busy, try again in a minute', { 'Retry-After': '60' });
    times.push(now); // taken now so parallel requests count; given back if this one is refused
    inFlight++;
    try {
      const result = await accept(req, who, now);
      if (result.status !== 200) times.splice(times.indexOf(now), 1);
      return result;
    } finally {
      inFlight--;
    }
  }

  async function accept(req, who, now) {
    let raw;
    try {
      raw = await readBody(req, BODY_MAX);
    } catch {
      return fail(400, 'incomplete body');
    }
    if (!raw) return fail(413, 'report too large');
    let j;
    try {
      j = JSON.parse(raw);
    } catch {
      return fail(400, 'body is not JSON');
    }
    raw = null;
    if (!object(j)) return fail(400, 'body must be a JSON object');
    const { title = '', text, png, meta = {} } = j;
    if (typeof title !== 'string' || title.length > TITLE_MAX) return fail(400, `title: a string of at most ${TITLE_MAX} characters`);
    if (typeof text !== 'string' || !text.trim() || text.length > TEXT_MAX) return fail(400, `text: 1 to ${TEXT_MAX} characters`);
    if (!object(meta) || Buffer.byteLength(JSON.stringify(meta)) > META_MAX) return fail(400, `meta: an object of at most ${META_MAX} bytes as JSON`);
    if (typeof png !== 'string' || png.length % 4 || !BASE64.test(png)) return fail(400, 'png: base64 expected');
    if ((png.length / 4) * 3 - (png.endsWith('==') ? 2 : png.endsWith('=') ? 1 : 0) > PNG_MAX) return fail(413, `png: at most ${PNG_MAX} bytes`);
    const image = Buffer.from(png, 'base64');
    if (!image.subarray(0, 8).equals(PNG_SIG)) return fail(400, 'png: not a PNG image');

    const name = `${new Date(now).toISOString().replace(/[-:]|\.\d+/g, '')}-${randomBytes(4).toString('hex')}`;
    const head = title.replace(/\s+/g, ' ').trim() || text.trim().split('\n')[0].slice(0, TITLE_MAX);
    const record = {
      id: name, time: new Date(now).toISOString(), server, invite: who.id, note: who.note ?? null,
      userAgent: String(req.headers['user-agent'] || '').slice(0, 512), title: head, text, meta,
    };
    let saved = false;
    try {
      mkdirSync(dir, { recursive: true, mode: 0o700 });
      chmodSync(dir, 0o700);
      writeFileSync(join(dir, name + '.png'), image, { mode: 0o600, flag: 'wx' });
      writeFileSync(join(dir, name + '.json'), JSON.stringify(record, null, 1) + '\n', { mode: 0o600, flag: 'wx' });
      saved = true;
    } catch (e) {
      log(`report ${name}: could not save a copy: ${e.message}`);
    }
    const sent = await forward({ title: head, text, png, meta: { ...meta, invite: who.id, server } });
    if (saved) {
      try {
        writeFileSync(join(dir, name + '.json'), JSON.stringify({ ...record, forwarded: sent.forwarded, femmeId: sent.id }, null, 1) + '\n', { mode: 0o600 });
      } catch {}
    }
    log(`report ${name} from ${who.id}: ${image.length} B png, ${saved ? 'saved' : 'NOT saved'}, ${sent.forwarded ? `forwarded (FEMME id ${sent.id})` : `not forwarded (${sent.why})`}`);
    if (!saved && !sent.forwarded) return fail(500, 'could not store the report');
    return { status: 200, body: { ok: true, id: sent.id, forwarded: sent.forwarded }, headers: {} };
  }

  return (req, who) => handle(req, who).catch((e) => {
    log(`report: ${e.message}`);
    drop(req);
    return fail(500, 'internal error');
  });
}
