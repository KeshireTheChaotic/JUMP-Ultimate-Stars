"""Additional atlas frame actions layered over the preserved R08 inspector."""
from __future__ import annotations

from jus_formats import sprite
from .sprite import render_sprite_inspector as _original_inspector


def render_sprite_inspector(editor, hex_id, shape_label) -> None:
    _original_inspector(editor, hex_id, shape_label)
    g = editor.sprite_g
    if g is None or not sprite.SpriteSource(g).is_atlas:
        return
    ins = editor.details
    ins.section('Atlas frame replacement')
    ins.buttons(('Replace selected frame from PNG…',
                 lambda: editor.import_frame(False)))
    ins.text('Updates this DSTX frame in the existing atlas. Larger art '
             'uses unused texture cells; shared cells require confirmation.')
