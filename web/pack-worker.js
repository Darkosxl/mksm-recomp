// HD texture pack files (remaster/webpack.py) for the game, off the page's main thread (a plain worker, started by
// pack.js): Cache Storage first, else the network, hedged like disc-sw.js; inflated by the browser's own
// DecompressionStream straight into the wasm heap, rows un-filtered (PNG Up) in place, then the request's state word set
// the way ps2web_fetch does (3 in, 4 failed; texpack.cpp service). Only a whole file that inflates to exactly the
// index's size is cached. While no game request waits it caches the rest of the pack, 2 files at a time.
const CACHE = 'pack-v1';
let cache = null, game = 0;
const inflight = new Map(); // url -> Promise<Uint8Array>, game and background share a download
const stats = { hits: 0, fetched: 0, failed: 0, background: 0 };
const store = () => (cache ??= caches.open(CACHE));

// free tunnels stall some requests for 10-15 s: a second and third copy go out after 1.5 s and 4 s, the first wins
function download(url) {
  return new Promise((resolve, reject) => {
    const controllers = [];
    let done = false, failures = 0;
    const attempt = () => {
      if (done || controllers.length >= 6) return;
      const controller = new AbortController();
      controllers.push(controller);
      fetch(url, { credentials: 'same-origin', signal: controller.signal })
        .then(async (r) => {
          if (r.status !== 200) throw new Error(`status ${r.status}`);
          const bytes = new Uint8Array(await r.arrayBuffer()), length = r.headers.get('content-length');
          if (length !== null && Number(length) !== bytes.length) throw new Error(`${bytes.length} of ${length} bytes`);
          return bytes;
        })
        .then((bytes) => {
          if (done) return;
          done = true;
          for (const c of controllers) if (c !== controller) c.abort();
          resolve(bytes);
        })
        .catch((e) => {
          if (done) return;
          if (++failures >= 4) { done = true; reject(e); } else setTimeout(attempt, 250);
        });
    };
    attempt();
    setTimeout(attempt, 1500);
    setTimeout(attempt, 4000);
  });
}

// Inflates body into heap[ptr, ptr + bytes) (heap null: only checks the size), adding each row to the one above
// (stride bytes) as rows complete.
async function inflate(body, heap, ptr, bytes, stride) {
  const reader = body.pipeThrough(new DecompressionStream('gzip')).getReader();
  const words = heap && new Uint32Array(heap, ptr, bytes >> 2), row = stride >> 2;
  let at = 0, rows = 1;
  for (;;) {
    const { done, value } = await reader.read();
    if (done) break;
    if (at + value.length > bytes) throw new Error(`more than ${bytes} bytes`);
    if (heap) new Uint8Array(heap, ptr + at, value.length).set(value);
    at += value.length;
    if (!heap) continue;
    for (const full = Math.floor(at / stride); rows < full; rows++) {
      // four bytes at a time, each its own sum mod 256
      for (let i = rows * row, end = i + row; i < end; i++) {
        const a = words[i], b = words[i - row];
        words[i] = ((a & 0x7f7f7f7f) + (b & 0x7f7f7f7f)) ^ ((a ^ b) & 0x80808080);
      }
    }
  }
  if (at !== bytes) throw new Error(`${at} of ${bytes} bytes`);
}

function shared(url) {
  let pending = inflight.get(url);
  if (!pending) {
    pending = download(url).finally(() => inflight.delete(url));
    inflight.set(url, pending);
  }
  return pending;
}

async function fill(url, heap, ptr, bytes, stride) {
  const c = await store();
  const hit = await c.match(url).catch(() => null);
  if (hit) {
    try {
      await inflate(hit.body, heap, ptr, bytes, stride);
      ++stats.hits;
      return;
    } catch (e) {
      await c.delete(url).catch(() => {});
    }
  }
  const data = await shared(url);
  await inflate(new Blob([data]).stream(), heap, ptr, bytes, stride);
  ++stats.fetched;
  await c.put(url, new Response(data, { headers: { 'Content-Type': 'application/octet-stream', 'Content-Length': String(data.length) } })).catch(() => {});
}

let todo = [], total = 0, cached = 0, running = 0;
const progress = () => postMessage({ progress: { done: cached, total }, stats });

function pump() {
  while (!game && running < 2 && todo.length) {
    const [url, bytes] = todo.shift();
    ++running;
    (async () => {
      const c = await store();
      if (!(await c.match(url))) {
        const data = await shared(url);
        await inflate(new Blob([data]).stream(), null, 0, bytes, 0);
        await c.put(url, new Response(data, { headers: { 'Content-Type': 'application/octet-stream', 'Content-Length': String(data.length) } }));
        ++stats.background;
      }
    })()
      .catch((e) => console.warn('texture pack: background', url, e.message))
      .finally(() => {
        --running;
        ++cached;
        progress();
        pump();
      });
  }
}

onmessage = async ({ data: m }) => {
  if (m.background) {
    const have = new Set((await (await store()).keys()).map((r) => r.url));
    total = m.background.length;
    todo = m.background.filter(([url]) => !have.has(url));
    cached = total - todo.length;
    progress();
    pump();
    return;
  }
  ++game;
  let ok = false;
  try {
    if (m.ptr + m.bytes > m.buffer.byteLength) throw new Error('outside the heap');
    await fill(m.url, m.buffer, m.ptr, m.bytes, m.stride);
    ok = true;
  } catch (e) {
    ++stats.failed;
    console.warn('texture pack:', m.url, e.message);
  }
  const state = new Int32Array(m.buffer);
  Atomics.store(state, m.state, ok ? 3 : 4);
  Atomics.notify(state, m.state);
  --game;
  progress();
  pump();
};
