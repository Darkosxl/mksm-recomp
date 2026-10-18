# Contact sheet of PPM/PNG frames: sheet.py <out.png> <frame files...> [--cols N] [--width W]
import sys
from pathlib import Path
from PIL import Image, ImageDraw

args = sys.argv[1:]
cols, width = 6, 320
if '--cols' in args: i = args.index('--cols'); cols = int(args[i + 1]); del args[i:i + 2]
if '--width' in args: i = args.index('--width'); width = int(args[i + 1]); del args[i:i + 2]
out, files = args[0], args[1:]
thumbs = []
for f in files:
    im = Image.open(f).convert('RGB')
    im = im.resize((width, im.height * width // im.width))
    ImageDraw.Draw(im).text((4, 4), Path(f).stem.replace('frame_', 'f'), fill=(255, 255, 0))
    thumbs.append(im)
h = thumbs[0].height
rows = (len(thumbs) + cols - 1) // cols
sheet = Image.new('RGB', (cols * width, rows * h))
for n, im in enumerate(thumbs):
    sheet.paste(im, ((n % cols) * width, (n // cols) * h))
sheet.save(out)
print(out, sheet.size)
