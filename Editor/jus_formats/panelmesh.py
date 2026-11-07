"""Conditional ARM9 02043C7C DSTX panel-to-CLDS-piece conversion.

Not the same as source tile-map decoding! The original renderer's fallback
conversion synthesizes 6-byte sprite pieces from each panel descriptor and
a fixed 17-entry ROM width->piece-count table at 0x0209D81C. That table
supports widths 0..16; 59 shipped panel descriptors exceed the table.
Do not silently extrapolate for those, or claim a final DS screen capture.

These are original-code local piece offsets only. Object placement, parent
transforms, depth, scroll, LCD selection and final blend are not encoded.
"""
from __future__ import annotations

from dataclasses import dataclass
from .dstx import LayoutTable, Piece

# ARM9 main SHA256 6464c6e726cd536756476392bf21996ae7289d16e269863cd0b88c1703d09287
# Original bytes 0x0209D81C..0x0209D82C (17 entries; following bytes are unrelated).
ROM_WIDTH_PIECES = (0, 1, 1, 2, 1, 2, 2, 3, 2, 3, 3, 4, 3, 4, 4, 5, 4)


@dataclass(frozen=True)
class FallbackPanel:
    index: int
    pieces: tuple[Piece, ...]
    first_tile: int
    next_tile: int
    width_tiles: int
    height_tiles: int

    @property
    def expected_piece_count(self) -> int:
        return ROM_WIDTH_PIECES[self.width_tiles] * self.height_tiles


def _signed_byte(value: int) -> int:
    value &= 0xFF
    return value - 0x100 if value > 0x7F else value


def expand_conditional_fallback(layout: LayoutTable, panel_index: int) -> FallbackPanel:
    """Faithful local piece enumeration from a *conditional* graphics path.

    FUN_02043C7C emits horizontal 4/2/1-tile spans in that order,
    with 8-bit signed piece offsets (the original truncates to char),
    attribute bank/flip bits taken from the running u16 tile number,
    and sequential tile IDs across rows. It does not use the auxiliary
    tile-map entries in this path.

    The ROM width-count lookup ends at width16. Wider source panels must
    raise instead of accessing neighboring string bytes or guessing.
    """
    if not 0 <= panel_index < len(layout.panels):
        raise IndexError(panel_index)
    panel = layout.panels[panel_index]
    if not 0 <= panel.tiles_w < len(ROM_WIDTH_PIECES):
        raise ValueError(f'panel {panel_index} width {panel.tiles_w} exceeds '
                         'original 0x0209D81C 17-entry fallback width lookup')
    result = []
    tile = panel.first_tile
    for row in range(panel.tiles_h):
        remaining = panel.tiles_w
        column = 0
        while remaining:
            span = 4 if remaining >= 4 else (2 if remaining >= 2 else 1)
            shape = 5 if span == 4 else (4 if span == 2 else 0)
            attr = (((tile >> 12) & 0xF) << 8 |
                    ((tile >> 10) & 3) << 4 | shape)
            result.append(Piece(tile & 0xFFFF,
                                _signed_byte(column * 8),
                                _signed_byte(row * 8),
                                attr))
            column += span
            tile += span
            remaining -= span
    mesh = FallbackPanel(panel_index, tuple(result),
                         panel.first_tile, tile, panel.tiles_w, panel.tiles_h)
    if len(mesh.pieces) != mesh.expected_piece_count:
        raise AssertionError('fallback mesh differs from original ROM width count')
    return mesh
