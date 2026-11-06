"""Write translated sprite frames (Translation/catalog_master.csv) into the game data.

Each finished catalog row names a DSTX member (``archive!…!member.dtx``), a frame
index and an English 8-bit indexed PNG with the same size and palette as the
Japanese render.  That render equals ``sprite.compose(frame)`` pixel for pixel
(checked for all rows), so every PNG pixel maps to one piece texel:

* DSIG 0x10 (4bpp 1D tiles): tile data at ``piece.index * 32``;
* DSIG 0x20 / 0x50 (4bpp linear GX texture, 0x50 LZ10): texel at
  ``texture_piece_origin(piece)`` in the texture.

Only texels of the piece that is visible at that pixel are written; texels
hidden under an overlapping piece keep their bytes.  Each frame is then
re-composed and must equal the English PNG.  Other frames of the same sheet
whose pixels change because they share texels are listed.

    py -3 tools/apply_translations.py --data D:\\…\\data --catalog D:\\…\\Translation\\catalog_master.csv [--write]

Without ``--write`` nothing is saved.  With it, the changed archives are written
in place (DataRoot.save); keep a backup of the data folder.
"""
from __future__ import annotations

import argparse
import csv
import json
import sys
from collections import defaultdict
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))

from PIL import Image

from jus_formats import dsig as dsigmod, sprite
from jus_package import scenes
from jus_package.project import DataRoot, join, split

DONE = ('translated',)


def _indices(path: str) -> Image.Image:
    with Image.open(path) as im:
        if im.mode != 'P':
            raise ValueError(f'{path}: not an indexed PNG')
        return im.copy()


def _owners(frame, source, rect):
    """Frame pixel → index of the piece that is visible there (compose order)."""
    l, t, r, b = rect
    owner = {}
    order = list(range(len(frame.pieces)))
    if source.is_obj:
        order.reverse()
    slots = sprite.charstream_slots(frame) if source.mode == sprite.MODE_CHARSTREAM else None
    for k in order:
        p = frame.pieces[k]
        w, h = p.size
        cols = sprite.flip(source.piece_colours(frame, k, slots), w, h, p.hflip, p.vflip)
        for y in range(h):
            for x in range(w):
                if cols[y * w + x]:
                    owner[(p.x + x, p.y + y)] = k
    return owner


class _BufferDsig:
    """A DSIG view whose pixels come from a working buffer (no LZ10 round trip)."""

    def __init__(self, dsig, buf):
        self._d, self._buf = dsig, buf

    def __getattr__(self, name):
        return getattr(self._d, name)

    def pixels(self):
        return bytes(self._buf)


def _write_linear2(buf: bytearray, start_px: int, stride: int, w: int, h: int, colours: list[int]) -> None:
    """Inverse of sprite.read_linear2: four 2-bit texels per byte, LSB first."""
    for y in range(h):
        for x in range(w):
            k = start_px + y * stride + x
            sh = 2 * (k & 3)
            buf[k >> 2] = (buf[k >> 2] & ~(3 << sh) & 0xFF) | ((colours[y * w + x] & 3) << sh)


def _pixels(im):
    f = getattr(im, 'get_flattened_data', None)
    return list(f() if f else im.getdata())


def _matches(frame, source, px) -> int:
    got = sprite.compose(frame, source).pixels
    return sum(1 for a, b in zip(got, px) if (a & 15) != (b & 15))


def apply_sheet(root: DataRoot, dtx_path: str, frames: dict[int, str], report: dict) -> bool:
    parts = split(dtx_path)
    info, d, source = scenes.screen_sprite(root, join(*parts[:-1]), parts[-1])
    g = source.dsig
    if source.mode not in (dsigmod.MODE_TILED4,) and not source.is_atlas:
        report['skipped'].append(f'{dtx_path}: DSIG mode {source.mode:#x} not supported')
        return False
    before = {i: sprite.compose(fr, source).pixels[:] for i, fr in enumerate(d.frames) if fr.pieces}
    buf = bytearray(g.pixels())
    work = sprite.SpriteSource(_BufferDsig(g, buf))
    width = g.width if source.is_atlas else 0
    applied = []
    for index, png in sorted(frames.items()):
        fr = d.frames[index]
        ref = sprite.compose(fr, source)
        eng = _indices(png)
        if eng.size != (ref.width, ref.height):
            report['skipped'].append(f'{dtx_path} frame {index}: PNG {eng.size} ≠ frame {ref.width}×{ref.height}')
            continue
        px = _pixels(eng)
        snapshot = bytes(buf)
        rect = (ref.left, ref.top, ref.left + ref.width, ref.top + ref.height)
        owner = _owners(fr, source, rect)
        # Pixels transparent in the Japanese render have no owner; a new opaque
        # pixel there is assigned to the topmost piece covering it.
        for k, p in enumerate(fr.pieces):
            w, h = p.size
            for y in range(h):
                for x in range(w):
                    owner.setdefault((p.x + x, p.y + y), None)
        cover = {}
        order = list(range(len(fr.pieces)))
        if source.is_obj:
            order.reverse()
        for k in order:
            p = fr.pieces[k]
            w, h = p.size
            for y in range(h):
                for x in range(w):
                    cover[(p.x + x, p.y + y)] = k
        bank_fixes = 0
        for k, p in enumerate(fr.pieces):
            w, h = p.size
            old = sprite.flip(source.piece_colours(fr, k), w, h, p.hflip, p.vflip)
            new = old[:]
            for y in range(h):
                for x in range(w):
                    pos = (p.x + x, p.y + y)
                    vis = owner.get(pos)
                    if (vis if vis is not None else cover.get(pos)) != k:
                        continue
                    v = px[(pos[1] - ref.top) * ref.width + (pos[0] - ref.left)]
                    if v and (v >> 4) != (p.bank if p.bank < g.banks else 0):
                        v = sprite.nearest_in_bank(g.palettes, p.bank, v)
                        bank_fixes += 1
                    new[y * w + x] = v & 15
            cols = sprite.flip(new, w, h, p.hflip, p.vflip)       # back to texel order
            if source.is_atlas:
                tx, ty = sprite.texture_piece_origin(p)
                if p.two_bpp:
                    _write_linear2(buf, ty * (2 * width) + tx, 2 * width, w, h, cols)
                else:
                    sprite.write_linear4(buf, ty * width + tx, width, w, h, cols)
            else:
                tile = sprite.write_tiled4(cols, w, h)
                buf[p.index * 32:p.index * 32 + len(tile)] = tile
        # Accept the frame only if it, and every frame accepted before it, now
        # renders exactly as its English PNG (repeated or shared pieces can make
        # a layout impossible to store).
        bad = _matches(fr, work, px)
        broken = [i for i, q, _ in applied if _matches(d.frames[i], work, q)]
        # Another frame that changes must have been the same picture as this one
        # (another state of the same label); otherwise it would gain stray letters.
        own = [v & 15 for v in before[index]]
        collateral = [i for i, f2 in enumerate(d.frames)
                      if f2.pieces and i != index and i not in frames
                      and sprite.compose(f2, work).pixels != before[i]
                      and [v & 15 for v in before[i]] != own]
        if bad or broken or collateral:
            buf[:] = snapshot
            why = (f'{bad} pixels cannot be stored (the English art spans pieces that repeat or are shared)'
                   if bad else f'would change accepted frame(s) {broken}' if broken
                   else f'would alter different graphic(s) in frame(s) {collateral} that share its texels')
            report['skipped'].append(f'{dtx_path} frame {index}: {why}')
            continue
        applied.append((index, px, bank_fixes))
    if not applied:
        return False
    g.set_pixels(bytes(buf))
    check = sprite.SpriteSource(g)
    for index, px, fixes in applied:
        report['frames'].append({'sheet': dtx_path, 'frame': index,
                                 'mismatched_pixels': _matches(d.frames[index], check, px),
                                 'bank_remapped_pixels': fixes})
    done = {i for i, _, _ in applied}
    for i, fr in enumerate(d.frames):
        if fr.pieces and i not in done and sprite.compose(fr, check).pixels != before[i]:
            report['shared_changes'].append(f'{dtx_path} frame {i} (shares texels with a translated frame)')
    if info.embedded:
        d.embedded = g.build()
        root.write(dtx_path, d.build())
    else:
        root.write(info.image_path, g.build())
    return True


def main(argv=None) -> int:
    ap = argparse.ArgumentParser(description=__doc__.split('\n\n')[0])
    ap.add_argument('--data', required=True)
    ap.add_argument('--catalog', required=True)
    ap.add_argument('--write', action='store_true', help='save the changed archives in place')
    ap.add_argument('--report', help='write a JSON report here')
    ap.add_argument('--exclude', help='JSON list of {"member": archive!…!dtx, "frames": [..], "reason": ..} to skip')
    a = ap.parse_args(argv)
    root = DataRoot(a.data)
    excluded = {}
    if a.exclude:
        for item in json.loads(Path(a.exclude).read_text(encoding='utf-8')):
            for f in item['frames']:
                excluded[(join(*item['member'].split('!')), int(f))] = item.get('reason', 'excluded')
    sheets: dict[str, dict[int, str]] = defaultdict(dict)
    pending = 0
    with open(a.catalog, encoding='utf-8-sig') as fh:
        for row in csv.DictReader(fh):
            if row['english_image'] and row['status'].startswith(DONE) and row['frame'] != '':
                sheets[join(*row['archive_and_member'].split('!'))][int(row['frame'])] = row['english_image']
            elif not row['english_image']:
                pending += 1
    report = {'sheets': len(sheets), 'frames': [], 'skipped': [], 'shared_changes': [], 'pending_rows': pending}
    for (path, frame), reason in excluded.items():
        if sheets.get(path, {}).pop(frame, None) is not None:
            report['skipped'].append(f'{path} frame {frame}: excluded — {reason}')
    sheets = {p: f for p, f in sheets.items() if f}
    changed = 0
    for path, frames in sorted(sheets.items()):
        try:
            changed += apply_sheet(root, path, frames, report)
        except (ValueError, KeyError, IndexError, OSError) as exc:
            report['skipped'].append(f'{path}: {exc}')
    bad = [f for f in report['frames'] if f['mismatched_pixels']]
    report['summary'] = {'sheets_changed': changed, 'frames_written': len(report['frames']),
                         'frames_with_mismatch': len(bad), 'skipped': len(report['skipped']),
                         'shared_frame_changes': len(report['shared_changes']),
                         'dirty_files': root.dirty_files()}
    if a.write and not bad:
        report['written'] = [str(p) for p in root.save(None)]
    elif a.write:
        report['written'] = []
        report['summary']['not_written'] = 'frames failed the re-compose check'
    if a.report:
        Path(a.report).write_text(json.dumps(report, indent=1, ensure_ascii=False), encoding='utf-8')
    print(json.dumps(report['summary'], indent=1, ensure_ascii=False))
    return 1 if bad else 0


if __name__ == '__main__':
    sys.exit(main())
