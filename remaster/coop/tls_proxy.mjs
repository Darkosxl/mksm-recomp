// Local TLS terminator for the wss:// test: https/wss on 127.0.0.1:<listen> -> plain signal.mjs on 127.0.0.1:<target>.
// usage: node tls_proxy.mjs <listen port> <target port> <key.pem> <cert.pem>
import { createServer } from 'node:tls';
import { connect } from 'node:net';
import { readFileSync } from 'node:fs';
const [listen, target, key, cert] = process.argv.slice(2);
const server = createServer({ key: readFileSync(key), cert: readFileSync(cert) }, (socket) => {
  const upstream = connect(Number(target), '127.0.0.1');
  socket.pipe(upstream).pipe(socket);
  const end = () => { socket.destroy(); upstream.destroy(); };
  socket.on('error', end);
  upstream.on('error', end);
});
server.on('tlsClientError', (e) => console.log('tls client error:', e.message));
server.listen(Number(listen), '127.0.0.1', () => console.log(`tls proxy on 127.0.0.1:${listen} -> ${target}`));
for (const s of ['SIGINT', 'SIGTERM']) process.on(s, () => process.exit(0));
