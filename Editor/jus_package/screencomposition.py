"""Read-only scene graph and placed sprite previews from traced JUS UI metadata.

The original pixel sources are DSTX/DSIG and ALMT.  Widget origins, action IDs,
and scene transitions come from the verified ARM9 trace manifest; this module
never writes those origins or synthesizes positions for unresolved widgets.
"""
from __future__ import annotations

import json
from dataclasses import dataclass
from pathlib import Path

from PIL import Image

from jus_formats import almt
from jus_package.project import join
from jus_package import scenes

MANIFEST_PATH = Path(__file__).with_name('screen_metadata.json')


def load_manifest() -> dict:
    meta = json.loads(MANIFEST_PATH.read_text(encoding='utf-8'))
    if meta.get('version') != 1 or len(meta.get('scenes', [])) != 46:
        raise ValueError('Screen metadata manifest is incompatible or incomplete')
    return meta


def selection_frame(move: almt.Move, tick: int = 0) -> int:
    """First authored BoundsIndex at tick, not the low byte of a move ID."""
    for node in move.nodes:
        if node is None:
            continue
        track = node.track('BoundsIndex')
        if track is None:
            continue
        if not track.keyed:
            return int(track.value)
        previous = [key for key in track.keys if key.tick <= tick]
        if previous:
            return int(previous[-1].value)
    raise ValueError(f'ALMT 0x{move.id:08X}: no authored BoundsIndex at tick {tick}')


@dataclass
class PlacedWidget:
    spec: dict
    image: Image.Image
    frame: int
    origin_x: int
    origin_y: int
    image_x: int
    image_y: int
    dtx_path: str

    @property
    def screen(self) -> str:
        return self.spec.get('screen', 'Bottom')

    def contains_pixel(self, x: float, y: float) -> bool:
        """Hit actual source-image alpha, NOT an inferred native collision box."""
        px, py = int(x) - self.image_x, int(y) - self.image_y
        return 0 <= px < self.image.width and 0 <= py < self.image.height and self.image.getpixel((px, py))[3] > 0


def place_widget(root, spec: dict, tick: int = 0) -> PlacedWidget:
    if spec.get('allow_layout_edit') is not False:
        raise ValueError('Only immutable, evidence-backed layout entries are supported')
    archive = spec['resource_archive']
    amt_entry = root.archive(archive).get(spec['animation'])
    anim = almt.parse(amt_entry.payload())
    target_id = int(str(spec['move_id']), 0)
    move = next((m for m in anim.moves if m.id == target_id), None)
    if move is None:
        raise ValueError(f'{archive}: missing authored ALMT move 0x{target_id:08X}')
    frame = selection_frame(move, tick)
    sprite, dtx, source = scenes.screen_sprite(root, archive, spec['sprite'])
    if frame < 0 or frame >= sprite.frame_count:
        raise ValueError(f'{archive}: frame {frame} outside 0..{sprite.frame_count - 1}')
    image, left, top = scenes.render_screen_sprite(dtx, source, frame)
    x, y = (int(v) for v in spec['origin'])
    return PlacedWidget(spec, image, frame, x, y, x + left, y + top,
                        join(archive, spec['sprite']))


def screen_for_engine(engine: str, swap_bit15: int) -> str:
    """Resolve an engine to its physical LCD using DS POWCNT1 bit 15.

    The code is scene-entry metadata. Animated/conditional swaps require
    tracking their callbacks; do not apply one swap setting to all ticks.
    """
    if engine not in ('main', 'sub') or swap_bit15 not in (0, 1):
        raise ValueError(f'Unknown LCD routing engine={engine!r} swap_bit15={swap_bit15!r}')
    return ('Top' if swap_bit15 else 'Bottom') if engine == 'main' else (
        'Bottom' if swap_bit15 else 'Top')


def visible_widgets(root, scene: dict, tick: int = 0) -> tuple[list[PlacedWidget], list[str]]:
    placed, problems = [], []
    routing = scene.get('display_routing') or {}
    for item in scene.get('widgets', []):
        try:
            spec = dict(item)
            if spec.get('engine') in ('main', 'sub') and routing.get('swap_bit15_at_entry') in (0, 1):
                spec['screen'] = screen_for_engine(spec['engine'], routing['swap_bit15_at_entry'])
            placed.append(place_widget(root, spec, tick))
        except (ValueError, KeyError, IndexError, OSError) as exc:
            problems.append(f'Widget {item.get("id")}: {exc}')
    return placed, problems


def sprite_layer(widgets: list[PlacedWidget], screen: str, width: int = 256,
                 height: int = 192) -> Image.Image:
    """Compose only source sprite pixels, clipped to the actual DS viewport."""
    out = Image.new('RGBA', (width, height), (0, 0, 0, 0))
    for w in widgets:
        if w.screen != screen:
            continue
        # Pillow alpha_composite accepts signed offsets and clips their canvas intersection.
        out.alpha_composite(w.image, (w.image_x, w.image_y))
    return out
