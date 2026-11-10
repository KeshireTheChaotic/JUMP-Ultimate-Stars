"""Round-trip full ALTM background artwork to/from indexed PNG images.

Tile-pixel editing is source-backed.  No display routing, BG priority, scene
layout, scroll, palette values, or native pixel depth is rewritten.
"""
from __future__ import annotations

from collections import Counter, defaultdict
from dataclasses import dataclass
from pathlib import Path
import hashlib
import struct

from PIL import Image
from PIL.PngImagePlugin import PngInfo

from jus_formats import altm, dsig as dsigmod, ncl
from jus_package import scenes, tilemap
from jus_formats.binary import u16, is_dscp, dscp_unwrap, dscp_wrap
from jus_package.project import DataRoot, split


def _unpack_asset(raw: bytes) -> bytes:
    return dscp_unwrap(raw) if is_dscp(raw) else raw


def _rewrap_asset(raw: bytes, original: bytes) -> bytes:
    return dscp_wrap(raw) if is_dscp(original) else raw


class PaletteMismatch(ValueError):
    """A PNG contains colours absent from its selected source palette."""
    def __init__(self, count, example):
        self.count = count
        self.example = example
        super().__init__(f'{count} PNG pixels do not match the existing DSIG/NCCL '
                         f'palette (first: {example}). You may snap them to '
                         'nearest existing palette colours; palette data stays unchanged.')


@dataclass(frozen=True)
class BackgroundPatch:
    atm_path: str
    image_path: str
    atm_bytes: bytes
    image_bytes: bytes
    changed_map_cells: int
    changed_tile_slots: int
    quantized_pixels: int
    native_bpp: int


def _source_image(blob: bytes):
    """Return (DSIG, prefix, suffix) for plain DIG or embedded DSTX."""
    if blob[:4] == b'DSIG':
        return dsigmod.parse(blob), b'', b''
    if blob[:4] == b'DSTX' and len(blob) >= 10:
        at = u16(blob, 8)
        if blob[at:at+4] != b'DSIG':
            raise ValueError('DSTX has no DSIG at its declared data end; unsafe to edit')
        return dsigmod.parse(blob[at:]), blob[:at], b''
    raise ValueError('Background image must be direct DSIG or DSTX with embedded DSIG')


def _effective_palettes(root: DataRoot, g: dsigmod.DsigFile, override_paths=()):
    banks = [list(bank) for bank in g.palettes]
    for path in override_paths:
        source = ncl.parse(_unpack_asset(root.read(path)))
        if source.bank_size != 16:
            raise ValueError(f'{path}: override is not a 16-colour NCCL palette')
        for i, bank in enumerate(source.banks):
            if i < len(banks) and any(bank):
                banks[i] = list(bank)
    return banks


def _palette_colours(banks):
    return [dsigmod.rgb555_to_rgb(value) for bank in banks for value in bank]


def _tile_unflip(values: list[int], hflip: bool, vflip: bool):
    if not hflip and not vflip:
        return values
    return [values[(7-y if vflip else y)*8 + (7-x if hflip else x)]
            for y in range(8) for x in range(8)]


def _tile_pixels(blob: bytes, eight: bool):
    if eight:
        return list(blob)
    return [(blob[y*4+x//2] >> (4*(x&1))) & 15
            for y in range(8) for x in range(8)]


def _tile_pack(colours, eight):
    if eight:
        return bytes(colours)
    output = bytearray(32)
    for j, c in enumerate(colours):
        output[j // 8 * 4 + (j % 8) // 2] |= (c & 15) << ((j & 1)*4)
    return bytes(output)


def _palette_slot(entry, g):
    bank = altm.entry_bank(entry)
    if g.mode == dsigmod.MODE_TILED8:
        start = bank * 256 if g.banks > 16 else 0
        return start, 256
    return bank * 16, 16


def _validate(m, g):
    if g.version != 1 or g.mode not in (dsigmod.MODE_TILED4, dsigmod.MODE_TILED8):
        raise ValueError('Background frame import needs DSIG v1 tiled 4bpp/8bpp')
    if m.tile_w != 8 or m.tile_h != 8:
        raise ValueError('Only original 8x8 background tiles are writable')
    if m.width*m.height != len(m.entries):
        raise ValueError('ALTM map has an invalid cell count')
    per = 64 if g.mode == dsigmod.MODE_TILED8 else 32
    raw = g.pixels()
    capacity = min(1024, g.width*g.height//64)
    if g.width % 8 or g.height % 8 or len(raw) % per or len(raw)//per > capacity:
        raise ValueError('DSIG tile payload does not fit declared atlas dimensions')
    if any(altm.entry_tile(v) >= len(raw)//per for v in m.entries):
        raise ValueError('ALTM references a tile beyond the current DSIG payload')
    for v in m.entries:
        start, count = _palette_slot(v, g)
        # Some original 8bpp DSIG sheets contain fewer than 256 palette
        # entries even though their tile indices remain full u8 values.
        if (start >= g.banks*16 or
                (g.mode == dsigmod.MODE_TILED4 and start+count > g.banks*16)):
            raise ValueError(f'ALTM palette bank {altm.entry_bank(v)} not in DSIG')
    return per, capacity


def export_background_png(root: DataRoot, layer: scenes.Layer,
                          target: Path, override_paths=()) -> None:
    """Export complete native map canvas, not the cropped 256x192 LCD view."""
    if not layer.image_path:
        raise ValueError('Selected background has no original DSIG image')
    g, _, _ = _source_image(_unpack_asset(root.read(layer.image_path)))
    m = altm.parse(_unpack_asset(root.read(layer.atm_path)))
    per, _ = _validate(m, g)
    colours = _effective_palettes(root, g, override_paths)
    eight = g.mode == dsigmod.MODE_TILED8
    width, height = m.pixel_size
    data = g.pixels()
    # PNG P stores source-index values exactly for 4bpp bank*16 or ordinary
    # 8bpp. Extended 8bpp palette sets use RGBA because >256 colours cannot
    # be represented in a single 8-bit indexed PNG.
    extended = eight and g.banks > 16
    pixels = bytearray(width*height) if not extended else None
    rgba = bytearray(width*height*4) if extended else None
    palette = _palette_colours(colours)
    if eight and len(palette) < 256:
        palette.extend([(255,0,255)] * (256-len(palette)))
    for i, entry in enumerate(m.entries):
        tile = altm.entry_tile(entry)
        indices = _tile_pixels(data[tile*per:(tile+1)*per], eight)
        indices = _tile_unflip(indices, altm.entry_hflip(entry), altm.entry_vflip(entry))
        start, _ = _palette_slot(entry, g)
        ox, oy = (i % m.width)*8, (i // m.width)*8
        for y in range(8):
            for x in range(8):
                ci = indices[y*8+x]
                idx = start+ci
                k = (oy+y)*width+ox+x
                if extended:
                    r, green, blue = palette[idx]
                    rgba[4*k:4*k+4] = bytes((r, green, blue, 255 if ci else 0))
                else:
                    pixels[k] = idx if ci else 0
    if extended:
        png = Image.frombytes('RGBA',(width,height),bytes(rgba))
    else:
        png = Image.frombytes('P',(width,height),bytes(pixels))
        flat = [v for col in palette[:256] for v in col]
        png.putpalette(flat + [0]*(768-len(flat)))
    meta = PngInfo()
    meta.add_text('JUS_BG_ALTM',layer.atm_path)
    meta.add_text('JUS_BG_DSIG',layer.image_path)
    meta.add_text('JUS_BG_Map_SHA256',hashlib.sha256(root.read(layer.atm_path)).hexdigest())
    meta.add_text('JUS_BG_NativeBPP','8' if eight else '4')
    meta.add_text('JUS_BG_Overrides',';'.join(override_paths))
    target = Path(target)
    target.parent.mkdir(parents=True,exist_ok=True)
    if extended:
        png.save(target, pnginfo=meta, optimize=False)
    else:
        alpha = bytes(0 if x % (256 if eight else 16) == 0 else 255 for x in range(256))
        png.save(target, pnginfo=meta, transparency=alpha, optimize=False)


def _other_map_references(root, layer, other_layers):
    reserved = set()
    for other in other_layers:
        if other.atm_path == layer.atm_path or other.image_path != layer.image_path:
            continue
        try:
            m = altm.parse(_unpack_asset(root.read(other.atm_path)))
            reserved.update(m.used_tiles())
        except (OSError, ValueError, KeyError):
            # Unresolved companion map: do not silently overwrite its image.
            raise ValueError(f'Cannot safely inspect other ALTM map {other.atm_path}')
    return reserved


def plan_background_import(root: DataRoot, layer: scenes.Layer,
                           png_path: Path, *, override_paths=(),
                           other_layers=(), allow_nearest=False) -> BackgroundPatch:
    """Build a complete validated ALTM+DSIG patch without altering DataRoot.

    Source tile IDs are reused if their data matches, otherwise the target
    ALTM is remapped to spare tile IDs. Tile bytes used by other maps sharing
    this DSIG remain untouched. Metadata, width, height and native BPP stay.
    """
    if not layer.image_path:
        raise ValueError('This background has no writable DSIG source')
    atm_old, image_old = root.read(layer.atm_path), root.read(layer.image_path)
    atm_body = _unpack_asset(atm_old)
    image_body = _unpack_asset(image_old)
    m = altm.parse(atm_body)
    g, prefix, suffix = _source_image(image_body)
    per, capacity = _validate(m, g)
    eight = g.mode == dsigmod.MODE_TILED8
    palette = _palette_colours(_effective_palettes(root, g, override_paths))
    if eight and len(palette) < 256:
        palette.extend([(255,0,255)] * (256-len(palette)))
    original = g.pixels()
    original_tiles = [bytes(original[i:i+per]) for i in range(0,len(original),per)]
    width, height = m.pixel_size
    png_path = Path(png_path)
    with Image.open(png_path) as file:
        file.load()
        info = dict(file.info)
        if file.size != (width,height):
            raise ValueError(f'PNG is {file.width}x{file.height}; the complete '
                             f'ALTM layer must be {width}x{height}, not a cropped LCD preview')
        if info.get('JUS_BG_ALTM') and info['JUS_BG_ALTM'] != layer.atm_path:
            raise ValueError(f'PNG was exported from {info["JUS_BG_ALTM"]}; '
                             f'you selected {layer.atm_path}')
        if info.get('JUS_BG_DSIG') and info['JUS_BG_DSIG'] != layer.image_path:
            raise ValueError(f'PNG references a different DSIG: {info["JUS_BG_DSIG"]}')
        if info.get('JUS_BG_NativeBPP') and info['JUS_BG_NativeBPP'] != ('8' if eight else '4'):
            raise ValueError('PNG source bit depth does not match selected DSIG mode')
        if info.get('JUS_BG_Overrides','') != ';'.join(override_paths) and info.get('JUS_BG_Overrides'):
            raise ValueError('PNG was exported with different native palette override sources')
        # A palette-indexed PNG may retain original indices without ambiguity.
        exact_indexed = False
        if file.mode == 'P' and g.banks <= 16:
            rawpal = file.getpalette() or []
            flat = [v for colour in palette[:256] for v in colour]
            exact_indexed = rawpal[:len(flat)] == flat
        original_indices = file.tobytes() if exact_indexed else None
        rgba = file.convert('RGBA').tobytes()

    colour_lut: dict[tuple[int,int,int], int] = {}
    tile_requests = []
    palette_errors = 0
    first_error = None
    adjusted = 0
    for index, entry in enumerate(m.entries):
        bank_start, available = _palette_slot(entry,g)
        candidates = palette[bank_start:bank_start+available]
        if len(candidates) != available:
            raise ValueError('Palette entries missing for ALTM map')
        # Prefer original source texel for duplicate RGB555 colours so an
        # unchanged RGBA export/import is a no-op.
        old_blob = original_tiles[altm.entry_tile(entry)]
        old_colors = _tile_pixels(old_blob, eight)
        old_display = _tile_unflip(old_colors, altm.entry_hflip(entry),
                                   altm.entry_vflip(entry))
        requested = []
        ox, oy = (index % m.width)*8, (index // m.width)*8
        for y in range(8):
            for x in range(8):
                px_index = (oy+y)*width + ox+x
                r, green, blue, alpha = rgba[4*px_index:4*px_index+4]
                if alpha not in (0, 255):
                    palette_errors += 1
                    if first_error is None:
                        first_error = f'({ox+x},{oy+y}) uses partial alpha {alpha}'
                    requested.append(0)
                    continue
                if alpha == 0:
                    requested.append(0)
                    continue
                rgb = (r,green,blue)
                original_ci = old_display[y*8+x]
                if (original_indices is not None and
                        original_indices[px_index] == bank_start + original_ci and
                        original_ci and candidates[original_ci] == rgb):
                    requested.append(original_ci)
                    continue
                if original_ci and candidates[original_ci] == rgb:
                    requested.append(original_ci)
                    continue
                if original_indices is not None:
                    v = original_indices[px_index] - bank_start
                    if 1 <= v < available and candidates[v] == rgb:
                        requested.append(v)
                        continue
                if rgb in candidates[1:]:
                    requested.append(candidates.index(rgb, 1))
                    continue
                if not allow_nearest:
                    palette_errors += 1
                    if first_error is None:
                        first_error = f'({ox+x},{oy+y}) colour RGB{rgb}, bank {bank_start//16}'
                    requested.append(0)
                    continue
                nearest = min(range(1, available),
                              key=lambda c: sum((a-b)**2 for a,b in zip(candidates[c],rgb)))
                adjusted += 1
                requested.append(nearest)
        canonical = _tile_unflip(requested, altm.entry_hflip(entry), altm.entry_vflip(entry))
        tile_requests.append(_tile_pack(canonical, eight))
    if palette_errors:
        raise PaletteMismatch(palette_errors, first_error)

    preserved = _other_map_references(root, layer, other_layers)
    original_uses = defaultdict(list)
    for i, value in enumerate(m.entries):
        original_uses[altm.entry_tile(value)].append(i)
    # No in-place writes on protected tiles. For mutable originals choose the
    # most popular desired blob, preferring the original on ties. This avoids
    # needless remaps when a tile's multiple onscreen uses diverge.
    resulting = dict(enumerate(original_tiles))
    for tile, uses in original_uses.items():
        if tile in preserved:
            continue
        counts = Counter(tile_requests[i] for i in uses)
        if not counts:
            continue
        chosen = max(counts, key=lambda b:(counts[b], b==original_tiles[tile]))
        resulting[tile] = chosen

    occupied = set(original_uses) | preserved
    reverse: dict[bytes,int] = {}
    for tile,blob in resulting.items():
        reverse.setdefault(blob,tile)
    new_ids = set()
    changed_entries = list(m.entries)
    # Only allocate zeroed or not-yet-materialized slots. Even an unreferenced
    # nonzero source tile might be used by a runtime tile animation not
    # captured in this ALTM's static map; never destroy its original art.
    free_slots = [i for i in range(capacity) if i not in occupied
                  and (i >= len(original_tiles) or not any(original_tiles[i]))]
    free_slots.sort()
    for i, blob in enumerate(tile_requests):
        old_id = altm.entry_tile(m.entries[i])
        if resulting[old_id] == blob:
            continue
        new_id = reverse.get(blob)
        if new_id is None:
            if not free_slots:
                raise ValueError('The atlas has no unreferenced 8x8 tile slots '
                                 'for this translation. No source data was changed.')
            new_id = free_slots.pop(0)
            previous = resulting.get(new_id)
            if previous is not None and reverse.get(previous) == new_id:
                del reverse[previous]
            resulting[new_id] = blob
            reverse[blob] = new_id
            new_ids.add(new_id)
        changed_entries[i] = (m.entries[i] & ~0x3FF) | new_id

    max_id = max(resulting) if resulting else -1
    if max_id >= capacity:
        raise ValueError('The edited tile index exceeds the unchanged DSIG atlas dimensions')
    packed = bytearray(original)
    if max_id >= len(original_tiles):
        packed.extend(bytes((max_id + 1 - len(original_tiles))*per))
    changed_tiles = 0
    for tile, blob in resulting.items():
        start = tile*per
        if packed[start:start+per] != blob:
            packed[start:start+per] = blob
            changed_tiles += 1

    edited = altm.parse(atm_body)
    edited.entries = changed_entries
    edited.dirty = edited.entries != m.entries
    new_map = _rewrap_asset(edited.build(), atm_old) if edited.dirty else atm_old
    if changed_tiles:
        g.set_pixels(bytes(packed))
        new_image = _rewrap_asset(prefix + g.build() + suffix, image_old)
    else:
        new_image = image_old
    if new_map != atm_old or new_image != image_old:
        verify_map = altm.parse(_unpack_asset(new_map))
        verify_g, _, _ = _source_image(_unpack_asset(new_image))
        verify_raw = verify_g.pixels()
        for i,blob in enumerate(tile_requests):
            pos = altm.entry_tile(verify_map.entries[i])*per
            if verify_raw[pos:pos+per] != blob:
                raise ValueError(f'Round-trip tile mismatch at ALTM entry {i}')
        if verify_g.mode != (dsigmod.MODE_TILED8 if eight else dsigmod.MODE_TILED4):
            raise ValueError('Image mode changed during rebuild')
        if (verify_g.width,verify_g.height,verify_g.palettes) != (
                g.width,g.height,g.palettes):
            raise ValueError('DSIG dimensions or palette changed during rebuild')
    return BackgroundPatch(layer.atm_path, layer.image_path, new_map, new_image,
                           sum(a!=b for a,b in zip(m.entries,changed_entries)),
                           changed_tiles, adjusted, 8 if eight else 4)


def _stage_source(root: DataRoot, path: str, data: bytes) -> None:
    if len(split(path)) == 1:
        root.write_file(path, data)
    else:
        root.write(path, data)


def stage_background_patch(root: DataRoot, patch: BackgroundPatch):
    """Stage complete validated new bytes; source files change only at Save."""
    old_map = root.read(patch.atm_path)
    old_image = root.read(patch.image_path)
    try:
        if patch.atm_bytes != old_map:
            _stage_source(root, patch.atm_path, patch.atm_bytes)
        if patch.image_bytes != old_image:
            _stage_source(root, patch.image_path, patch.image_bytes)
    except Exception:
        if root.read(patch.atm_path) != old_map:
            _stage_source(root, patch.atm_path, old_map)
        if root.read(patch.image_path) != old_image:
            _stage_source(root, patch.image_path, old_image)
        raise
