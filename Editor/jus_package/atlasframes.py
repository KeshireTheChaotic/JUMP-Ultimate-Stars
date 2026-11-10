"""Patch one DSTX frame's texels inside a DSIG 0x20/0x50 atlas.

The original GX UV mapping is authoritative: piece.index is an 8x8
texture-cell coordinate (32 columns), with attr bit 6 selecting a 2bpp
view of the *same* source bytes.  The atlas dimensions, other referenced texels and palette remain unchanged.
When replacement art exceeds original piece rectangles, spare atlas cells
are assigned to new pieces in only the selected DSTX frame.
"""
from __future__ import annotations

from copy import copy
from dataclasses import dataclass

from jus_formats import sprite
from jus_formats.dsig import DsigFile
from jus_formats.dstx import DstxFile, Frame, Piece


@dataclass(frozen=True)
class AtlasFramePatch:
    """Validated, unapplied atlas patch; shared frame IDs are informational."""
    data: bytes
    changed_bytes: int
    shared_frames: tuple[int, ...]
    replacement_frame: Frame | None = None


def _pixel_address(g: DsigFile, p: Piece, lx: int, ly: int) -> tuple[int, int, int]:
    """Byte offset, bitmask and bit shift for a GX texture texel."""
    tw = g.width * (2 if p.two_bpp else 1)
    u, v = sprite.texture_piece_origin(p)
    x, y = u + lx, v + ly
    if x < 0 or y < 0 or x >= tw or y >= g.height:
        raise ValueError(
            f'Atlas piece cell {p.index} samples ({x},{y}) outside '
            f'{tw}x{g.height} ({2 if p.two_bpp else 4}bpp)')
    bits = 2 if p.two_bpp else 4
    k = y * tw + x
    return k // (8 // bits), ((1 << bits) - 1) << ((k % (8 // bits)) * bits), \
        ((k % (8 // bits)) * bits)


def _source_texel(raw: bytes, g: DsigFile, p: Piece, x: int, y: int) -> int:
    lx, ly = x - p.x, y - p.y
    if p.hflip:
        lx = p.width - 1 - lx
    if p.vflip:
        ly = p.height - 1 - ly
    off, mask, shift = _pixel_address(g, p, lx, ly)
    if off >= len(raw):
        raise ValueError(f'Atlas piece {p.index} reads beyond DSIG data')
    return (raw[off] & mask) >> shift


def _reference_mask(g: DsigFile, p: Piece, changes: dict[int, int]) -> bool:
    """Does this piece observe any bit that actually changed?"""
    u, v = sprite.texture_piece_origin(p)
    tw = g.width * (2 if p.two_bpp else 1)
    for ly in range(p.height):
        y = v + ly
        if y < 0 or y >= g.height:
            continue
        for lx in range(p.width):
            x = u + lx
            if x < 0 or x >= tw:
                continue
            off, mask, _ = _pixel_address(g, p, lx, ly)
            if changes.get(off, 0) & mask:
                return True
    return False


def _plan_fixed_atlas_frame(d: DstxFile, g: DsigFile, i: int,
                            image: sprite.IndexedImage) -> AtlasFramePatch:
    """Encode a selected *composited frame* into its existing atlas cells.

    No mutation is performed.  Retains palettes, 4bpp atlas dimensions, all
    other atlas bytes, pieces, references, bounds and drawing order.

    Opaque pixels must use the palette bank selected by an eligible piece.
    Overlapping pieces are handled using the game's last-piece-on-top rule.
    If a new colour cannot be represented without modifying an unrelated
    opaque area or conflicting with another use of the same texel, reject
    instead of silently corrupting a sprite.
    """
    if g.version != 1 or g.mode not in sprite.ATLAS_MODES:
        raise ValueError('Frame patch requires a DSIG 0x20/0x50 atlas')
    if not 0 <= i < len(d.frames):
        raise IndexError('Frame index out of range')
    frame = d.frames[i]
    if not frame.pieces:
        raise ValueError('Frame has no atlas pieces; create its layout first')
    if not g.width or not g.height or g.width % 16:
        raise ValueError('Atlas needs positive dimensions and a width divisible by 16')
    l, t, r, b = frame.computed_bounds()
    if (image.left > l or image.top > t or
            image.left + image.width < r or image.top + image.height < b):
        raise ValueError(
            f'PNG canvas ({image.left},{image.top},'
            f'{image.left + image.width},{image.top + image.height}) '
            f'does not cover frame bounds ({l},{t},{r},{b}); '
            'export the frames and keep frames.json beside the PNG')
    for p in frame.pieces:
        w, h = p.size
        u, v = sprite.texture_piece_origin(p)
        tw = g.width * (2 if p.two_bpp else 1)
        if u + w > tw or v + h > g.height:
            raise ValueError(
                f'Frame {i} has an off-atlas piece {p.index} '
                f'({u},{v}) {w}x{h}; cannot patch it safely')

    raw = g.pixels()
    expected = g.width * g.height // 2
    if len(raw) < expected:
        raise ValueError(f'Atlas data truncated: {len(raw)} bytes, expected {expected}')
    staged = bytearray(raw)
    planned: dict[int, tuple[int, int]] = {}

    def assign(p: Piece, x: int, y: int, colour: int):
        lx, ly = x - p.x, y - p.y
        if p.hflip:
            lx = p.width - 1 - lx
        if p.vflip:
            ly = p.height - 1 - ly
        off, mask, shift = _pixel_address(g, p, lx, ly)
        bits = 2 if p.two_bpp else 4
        if colour >= (1 << bits):
            raise ValueError(f'{bits}bpp piece {p.index} cannot encode colour {colour}')
        encoded = colour << shift
        previous_mask, previous_value = planned.get(off, (0, 0))
        if ((previous_value ^ encoded) & previous_mask & mask):
            raise ValueError(
                f'Frame {i} maps incompatible replacement pixels to '
                f'the same atlas byte at {off:#x}')
        planned[off] = (previous_mask | mask,
                        (previous_value & ~mask) | encoded)

    original = sprite.compose(frame, sprite.SpriteSource(g),
                              canvas=(image.left, image.top,
                                      image.left + image.width,
                                      image.top + image.height))
    # Work in sprite-space. Unchanged pixels are left alone even if several
    # frames reuse the same underlying texture.
    for y in range(image.top, image.top + image.height):
        for x in range(image.left, image.left + image.width):
            desired = image.get(x, y)
            if desired == original.get(x, y):
                continue
            cover = [p for p in frame.pieces
                     if p.x <= x < p.x + p.width and p.y <= y < p.y + p.height]
            if not cover:
                if desired & 15:
                    raise ValueError(
                        f'PNG has an opaque pixel at ({x},{y}) outside '
                        f'frame {i} pieces; atlas frame layouts are fixed')
                continue
            if desired & 15:
                bank, colour = desired >> 4, desired & 15
                # Atlas pieces are drawn from first to last; last wins.
                eligible = [k for k, p in enumerate(cover)
                            if p.bank == bank and colour < (4 if p.two_bpp else 16)]
                if not eligible:
                    raise ValueError(
                        f'Pixel at ({x},{y}) uses palette bank {bank}/'
                        f'colour {colour}, but no covering atlas piece supports it')
                chosen = eligible[-1]
                for p in cover[chosen + 1:]:
                    if _source_texel(raw, g, p, x, y):
                        assign(p, x, y, 0)
                assign(cover[chosen], x, y, colour)
            else:
                # Transparency has to clear every visible/underlying piece.
                for p in cover:
                    if _source_texel(raw, g, p, x, y):
                        assign(p, x, y, 0)

    for off, (mask, encoded) in planned.items():
        staged[off] = (staged[off] & ~mask) | (encoded & mask)

    changes = {k: raw[k] ^ v for k, v in enumerate(staged) if v != raw[k]}
    if changes:
        # Verify the full rendered frame *before* mutating the caller.
        candidate = copy(g)
        candidate._cache = {}
        candidate.set_pixels(bytes(staged))
        result = sprite.compose(frame, sprite.SpriteSource(candidate),
                                canvas=(image.left, image.top,
                                        image.left + image.width,
                                        image.top + image.height))
    else:
        result = original
    if result.pixels != image.pixels:
        for idx, (actual, wanted) in enumerate(zip(result.pixels, image.pixels)):
            if actual != wanted:
                x = image.left + idx % image.width
                y = image.top + idx // image.width
                raise ValueError(
                    f'Frame cannot match imported PNG at ({x},{y}): '
                    f'encoded {actual:#x}, requested {wanted:#x}. '
                    'Atlas texels may be reused by multiple overlapping pieces.')
        raise ValueError('Imported atlas frame dimensions/pixels do not match')

    shared = set()
    if changes:
        for j, other in enumerate(d.frames):
            if j == i:
                continue
            if any(_reference_mask(g, p, changes) for p in other.pieces):
                shared.add(j)
    return AtlasFramePatch(bytes(staged), len(changes), tuple(sorted(shared)))


def _unused_atlas_cells(d: DstxFile, g: DsigFile) -> list[tuple[int, tuple[int, ...]]]:
    """8x8 4bpp slots whose bytes are never sampled by any DSTX frame.

    A byte used by a 2bpp piece is also occupied: 2bpp views reinterpret
    the same physical bytes, so separate texel indices are not necessarily
    independent.  Prefer unused slots that are already all transparent.
    """
    occupied = set()
    for frame in d.frames:
        for piece in frame.pieces:
            u, v = sprite.texture_piece_origin(piece)
            tex_width = g.width * (2 if piece.two_bpp else 1)
            for y in range(max(0, v), min(v + piece.height, g.height)):
                for x in range(max(0, u), min(u + piece.width, tex_width)):
                    off, _, _ = _pixel_address(g, piece, x - u, y - v)
                    occupied.add(off)

    raw = g.pixels()
    candidates = []
    for y in range(0, g.height - 7, 8):
        for x in range(0, min(g.width, 256) - 7, 8):
            cell = (y // 8) * 32 + (x // 8)
            offsets = tuple((yy * g.width + xx) // 2
                            for yy in range(y, y + 8)
                            for xx in range(x, x + 8, 2))
            if all(off not in occupied and off < len(raw) for off in offsets):
                candidates.append((cell, offsets))
    candidates.sort(key=lambda item: (
        any(raw[off] for off in item[1]), item[0]))
    return candidates


def plan_atlas_frame_image(d: DstxFile, g: DsigFile, i: int,
                           image: sprite.IndexedImage) -> AtlasFramePatch:
    """Patch one atlas frame, allocating free 8x8 cells for larger artwork.

    Existing texture cells are kept at the exact same coordinates. If the
    replacement has opaque pixels outside the old piece rectangles, new
    8x8 pieces are appended only to the selected frame and reference
    otherwise unused atlas texture bytes.  Never resizes or repacks the
    shared atlas.  Insufficient free cells is a non-mutating error.
    """
    if not 0 <= i < len(d.frames):
        raise IndexError('Frame index out of range')
    frame = d.frames[i]
    if not frame.pieces:
        return _plan_fixed_atlas_frame(d, g, i, image)
    # Determine the extra coverage in sprite space, not texture space.
    uncovered = {}
    l, t, _, _ = frame.computed_bounds()
    for py in range(image.height):
        y = image.top + py
        for px in range(image.width):
            x = image.left + px
            value = image.pixels[py * image.width + px]
            if not value & 15:
                continue
            if any(p.x <= x < p.x + p.width and
                   p.y <= y < p.y + p.height for p in frame.pieces):
                continue
            bank = value >> 4
            if bank >= g.banks:
                raise ValueError(f'New pixel ({x},{y}) needs missing palette bank {bank}')
            sx = l + ((x - l) // 8) * 8
            sy = t + ((y - t) // 8) * 8
            if not (-128 <= sx <= 119 and -128 <= sy <= 119):
                raise ValueError('Extended frame piece position is outside DSTX signed-byte bounds')
            # Multiple bank variants in one destination cell require multiple
            # transparent overlays; the final composed pixels are validated.
            uncovered.setdefault((sy, sx, bank), None)
    if not uncovered:
        return _plan_fixed_atlas_frame(d, g, i, image)

    slots = _unused_atlas_cells(d, g)
    if len(slots) < len(uncovered):
        raise ValueError(
            f'Frame {i} needs {len(uncovered)} additional 8x8 atlas cells '
            f'for its larger PNG, but only {len(slots)} unused cells exist. '
            'No atlas pixels or frame layouts were changed.')
    raw = g.pixels()
    cleared = bytearray(raw)
    pieces = list(frame.pieces)
    for (y, x, bank), (index, offsets) in zip(sorted(uncovered), slots):
        for off in offsets:
            cleared[off] = 0
        pieces.append(Piece(index, x, y, (bank << 8) | 0))
    extended = Frame(pieces)
    if d.version == 2:
        extended.bounds = extended.computed_bounds()

    # Plan against a *copy* of the atlas with the new cells transparent.
    # This lets the fixed-layout mapper validate all original/new pieces
    # using exactly the same source-derived GX texture indexing.
    temp_g = copy(g)
    temp_g._cache = {}
    temp_g.set_pixels(bytes(cleared))
    temp_d = copy(d)
    temp_d.frames = list(d.frames)
    temp_d.frames[i] = extended
    temp_d.frame_refs = None
    temp_d.build()  # reject impossible frame-table layouts before changes
    patch = _plan_fixed_atlas_frame(temp_d, temp_g, i, image)
    changed = sum(a != b for a, b in zip(raw, patch.data))
    return AtlasFramePatch(patch.data, changed, patch.shared_frames, extended)


def set_atlas_frame_image(d: DstxFile, g: DsigFile, i: int,
                          image: sprite.IndexedImage, *,
                          allow_shared: bool = False) -> AtlasFramePatch:
    """Apply one frame. Shared texels require explicit caller approval."""
    patch = plan_atlas_frame_image(d, g, i, image)
    if patch.shared_frames and not allow_shared:
        raise ValueError('Atlas pixels are shared by frames '
                         + ', '.join(str(j) for j in patch.shared_frames[:20])
                         + '; pass allow_shared=True after user confirmation')
    if patch.changed_bytes:
        g.set_pixels(patch.data)
    if patch.replacement_frame is not None:
        d.frames[i] = patch.replacement_frame
        d.frame_refs = None
    return patch
