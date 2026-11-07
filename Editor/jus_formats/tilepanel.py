"""Read-only RGBA renderer for original DSTX 0x05/0x06 panel tilemaps.

Uses the *actual* embedded DSIG tile bytes and palette banks. Unlike the
DSTX 0x03 sprite composer, these are BG-style panel maps, not OAM pieces:
0x05 stores u8 tile indices, and 0x06 stores u16 LE screen-map entries.

The original ARM9 loader (0x020433EC / 0x02043C7C) has distinct
modes for the two variants. Map bit interpretation follows DS text-BG
hardware: low 10 = tile index, bit10/11 = flips, high nibble = 4bpp palette.
All 50 shipped files obey tile capacity/bank bounds. 8bpp uses the flattened
palette rather than (bank<<4)|pixel; high nibble is not an 8bpp bank.

This renderer returns only the locally indexed panel pixels. It never
guesses scene position, scroll, LCD assignment or overlay composition.
Those are separate original scene graph properties. No image is generated
or substituted for game data.
"""
from __future__ import annotations

from dataclasses import dataclass

from .dsig import DsigFile, MODE_TILED4, MODE_TILED8, rgb555_to_rgb, parse as parse_dsig
from .dstx import LayoutTable
from .sprite import read_tiled4, read_tiled8

CELL_PIXELS = 8
MAX_PANEL_PIXELS = 4_000_000


@dataclass(frozen=True)
class RenderedTilePanel:
    panel_index: int
    width: int
    height: int
    rgba: bytes
    dsig_mode: int
    referenced_tiles: tuple[int, ...]
    palette_banks: tuple[int, ...]
    hflip_cells: int
    vflip_cells: int


def render_layout_panel(layout: LayoutTable, panel_index: int) -> RenderedTilePanel:
    """Return original DSIG-derived RGBA8888 pixels of a selected panel.

    Throws ValueError for missing/invalid tiles or palettes. Never draws fake
    pixels or reinterprets 8bpp as 4bpp, and retains the source untouched.
    """
    if not 0 <= panel_index < len(layout.panel_maps):
        raise IndexError(panel_index)
    grid = layout.panel_maps[panel_index]
    texture = parse_dsig(layout.embedded)
    if texture.version != 1 or texture.mode not in (MODE_TILED4, MODE_TILED8):
        raise ValueError('Tile-panel preview requires DSIG v1 tiled 0x10 or 0x11')
    if not texture.palettes:
        raise ValueError('DSIG has no source palettes')
    bpp8 = texture.mode == MODE_TILED8
    tile_size = 64 if bpp8 else 32
    source = texture.pixels()
    capacity = len(source) // tile_size
    colour_table = [rgb555_to_rgb(col) for bank in texture.palettes for col in bank]
    rgba = bytearray(grid.tiles_w * CELL_PIXELS * grid.tiles_h * CELL_PIXELS * 4)
    width = grid.tiles_w * CELL_PIXELS
    height = grid.tiles_h * CELL_PIXELS
    if width * height > MAX_PANEL_PIXELS:
        raise ValueError(f'Panel {panel_index} image exceeds preview pixel limit')
    # Strictly preserve tile/palette addresses; no modulo or auto-bank fallback.
    tile_cache: dict[int, list[int]] = {}
    tiles: set[int] = set()
    banks: set[int] = set()
    hcount = vcount = 0
    for cy in range(grid.tiles_h):
        for cx in range(grid.tiles_w):
            entry = grid.cells[cy * grid.tiles_w + cx]
            tile = entry & (0x3FF if layout.mode6 else 0xFF)
            hflip = layout.mode6 and bool(entry & 0x0400)
            vflip = layout.mode6 and bool(entry & 0x0800)
            bank = (entry >> 12) if (layout.mode6 and not bpp8) else 0
            if not 0 <= tile < capacity:
                raise ValueError(f'Panel {panel_index} tile ({cx},{cy})={tile} '
                                 f'outside DSIG {capacity}-tile data')
            if not bpp8 and bank >= texture.banks:
                raise ValueError(f'Panel {panel_index} palette bank {bank} '
                                 f'outside {texture.banks} DSIG banks')
            tiles.add(tile)
            banks.add(bank)
            hcount += int(hflip)
            vcount += int(vflip)
            if tile not in tile_cache:
                reader = read_tiled8 if bpp8 else read_tiled4
                tile_cache[tile] = reader(source, tile * tile_size, 8, 8)
            colours = tile_cache[tile]
            for py in range(8):
                y = cy * 8 + py
                sy = 7 - py if vflip else py
                for px in range(8):
                    x = cx * 8 + px
                    sx = 7 - px if hflip else px
                    index = colours[sy * 8 + sx]
                    if index == 0:
                        continue  # Source colour zero is transparent in panel overlay
                    palette_index = index if bpp8 else bank * 16 + index
                    if palette_index >= len(colour_table):
                        raise ValueError(f'Panel {panel_index} colour index {palette_index} '
                                         f'outside {len(colour_table)} source colours')
                    off = (y * width + x) * 4
                    r, g, b = colour_table[palette_index]
                    rgba[off:off + 4] = bytes((r, g, b, 255))
    return RenderedTilePanel(panel_index, width, height, bytes(rgba), texture.mode,
                             tuple(sorted(tiles)), tuple(sorted(banks)), hcount, vcount)
