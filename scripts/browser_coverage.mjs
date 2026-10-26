// Desktop coverage of the game's hard requirements from StatCounter's per-version CSV.
// usage: node scripts/browser_coverage.mjs mksm/notes/statcounter-desktop-version-2026-09.csv
// (StatCounter: gs.statcounter.com/chart.php?device=Desktop&device_hidden=desktop&statType_hidden=browser_version&region_hidden=ww&granularity=monthly&statType=Browser%20Version&region=Worldwide&fromInt=YYYYMM&toInt=YYYYMM&fromMonthYear=YYYY-MM&toMonthYear=YYYY-MM&csv=1)
// Thresholds and the reasoning: mksm/notes/browser-support.md.
import { readFileSync } from 'node:fs';
const rows = readFileSync(process.argv[2], 'utf8').trim().split('\n').slice(1).map((l) => {
  const m = /^"(.+?)",([\d.]+)$/.exec(l); return { name: m[1], share: Number(m[2]) };
});
// first version with the feature on by default (desktop); null = never / unknown
const T = {
  chrome:  { jspi: 137, exnref: 137, tail: 112, simd: 91, threads: 92, webgpu: 113 },
  edge:    { jspi: 137, exnref: 137, tail: 112, simd: 91, threads: 92, webgpu: 113 },
  firefox: { jspi: 153, exnref: 131, tail: 121, simd: 89, threads: 79, webgpu: 141 },
  safari:  { jspi: 27, exnref: 18.4, tail: 18.2, simd: 16.4, threads: 15.2, webgpu: 26 },
  opera:   { jspi: 121, exnref: 121, tail: 98, simd: 77, threads: 62, webgpu: 99 },
};
const FEATS = ['threads', 'simd', 'tail', 'exnref', 'jspi'];
function classify({ name }) {
  const m = /^(.*?) ([\d.]+)$/.exec(name); if (!m) return { fam: 'other', ver: null };
  let [, fam, ver] = m; ver = Number(ver);
  if (fam === 'Chrome for Android') return { fam: 'android', ver };
  if (fam === 'Safari' && ver >= 100) return { fam: 'other', ver }; // 605.1 etc.: WebKit build numbers from odd user agents
  if (fam === 'Brave') return { fam: 'chrome', ver: 155, pinned: false };   // StatCounter reports Brave as 0; current Brave is Chromium 155
  if (fam === 'Coc Coc') return { fam: 'chrome', ver };                      // Chromium-based, same major
  fam = fam.toLowerCase();
  if (!T[fam]) return { fam: 'other', ver };
  // pinned by an OS that cannot move on: Win7/8.1 (Chrome/Edge 109, Firefox 115), macOS before Safari 16
  const pinned = ((fam === 'chrome' || fam === 'edge') && ver <= 109) || (fam === 'firefox' && ver <= 115) || (fam === 'safari' && ver < 16);
  return { fam, ver, pinned };
}
const has = (c, f) => c.fam in T && c.ver >= T[c.fam][f];
const total = rows.reduce((a, r) => a + r.share, 0);
const classified = rows.map((r) => ({ ...r, c: classify(r) }));
const updatable = classified.filter((r) => !r.c.pinned && r.c.fam !== 'android');
const sum = (list, pred) => list.reduce((a, r) => a + (pred(r) ? r.share : 0), 0);
function report(list, label) {
  const den = list.reduce((a, r) => a + r.share, 0);
  const pct = (x) => (100 * x / den).toFixed(1).padStart(5) + '%';
  console.log(`\n== ${label}: ${den.toFixed(2)} of ${total.toFixed(2)} points ==`);
  for (const f of FEATS) console.log(`${f.padEnd(8)} ${pct(sum(list, (r) => has(r.c, f)))}`);
  const opens = (r) => FEATS.every((f) => has(r.c, f));
  console.log(`${'opens'.padEnd(8)} ${pct(sum(list, opens))}   (all five)`);
  console.log(`${'+webgpu'.padEnd(8)} ${pct(sum(list, (r) => opens(r) && has(r.c, 'webgpu')))}   (upper bound: Firefox Linux/Intel Mac and Safari on Sonoma have no WebGPU)`);
  console.log(`${'unknown'.padEnd(8)} ${pct(sum(list, (r) => r.c.fam === 'other'))}   (browsers StatCounter does not version: Mozilla 0, Yandex, 360, Samsung...)`);
  console.log('lost to:');
  const lost = {};
  for (const r of list) if (!opens(r)) { const k = r.c.fam === 'other' ? 'unknown' : `${r.c.fam} < ${r.c.fam in T ? T[r.c.fam].jspi : '?'}`; lost[k] = (lost[k] || 0) + r.share; }
  for (const [k, v] of Object.entries(lost).sort((a, b) => b[1] - a[1])) console.log(`  ${k.padEnd(14)} ${pct(v)}`);
}
report(classified, 'all desktop sessions');
report(updatable, 'updatable (no Win7/8.1-pinned Chrome/Edge 109, Firefox 115, Safari <16, no Android)');
