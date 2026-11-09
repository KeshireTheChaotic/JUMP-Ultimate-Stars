"""Pure bounds projection of original ALMT sprite node states.

This helper owns only source-frame rectangle resolution. Caller-specific
coordinate systems (source shot launch, nested child state, actor world
position and viewport), collision rectangles and runtime geometry remain in
their respective battle/editor functions.
"""
from __future__ import annotations

from typing import Callable, Iterable, Iterator, Mapping

def sprite_bounds(
    states: Iterable[Mapping],
    frame_image: Callable[[int, int], tuple | None],
    origin: tuple[int | float, int | float] = (0, 0),
) -> Iterator[tuple[int | float, int | float, int | float, int | float]]:
    """Return source-frame RGBA bounds with the caller's explicit translation.

    Original TextureID/BoundsIndex state controls frame choice; no fallback
    animation frame is fabricated. Missing frames, 0xFFFF and missing texture
    IDs are omitted exactly as before. This does not apply engine camera
    transforms, inferred motion, facing, or native collision geometry.
    """
    bx, by = origin
    for state in states:
        texture_id, frame = state.get('TextureID'), state.get('BoundsIndex')
        if texture_id is None or frame in (None, 0xFFFF):
            continue
        rendered = frame_image(texture_id, frame)
        if not rendered:
            continue
        image, left, top = rendered
        x, y = state.get('2DPos', [0, 0])
        px, py = bx + x + left, by + y + top
        yield (px, py, px + image.width, py + image.height)
