"""Original source-backed editor refresh_details responsibility (R08)."""
import tkinter as tk
from app import theme as T
from jus_formats import dsig as dsigmod,dstx as dstxmod,sprite
from jus_package.project import split

def render_sprite_inspector(editor, hex_id, shape_label):
    ins = editor.details
    ins.clear()
    d, g = editor.sprite_d, editor.sprite_g
    if d is None:
        ins.section('Sprite')
        ins.text('Select an archive with sprites in the Project panel.')
        return
    ins.section('Sprite', note=split(editor.sprite_path)[-1] if editor.sprite_path else None)
    ins.value('Format', f'DSTX v{d.version}, {len(d.frames)} frames')
    if g is not None:
        mode = g.mode if g.version == 1 else dsigmod.MODE_CHARSTREAM
        ins.value('Image', f'{dsigmod.MODE_NAMES.get(mode, hex(mode))}' +
                  (f'\natlas {g.width}×{g.height}' if mode in sprite.ATLAS_MODES else '') +
                  (' (embedded)' if d.embedded else ''))
        ins.value('Banks', str(g.banks))
    if editor.frame_i is not None:
        fr = d.frames[editor.frame_i]
        ins.section(f'Frame {editor.frame_i}')
        r = sprite.frame_rect(fr)
        ins.value('Pieces', str(len(fr.pieces)))
        ins.value('Rect', f'{r}' if r else 'empty')
        if fr.bounds is not None:
            ins.value('Bounds', str(tuple(fr.bounds)))
    p = editor._piece()
    if p is not None:
        ins.section(f'Piece {editor.piece_i}', note='attr: bits 0-3 shape · 4 H-flip · 5 V-flip · '
                                                  '6 2bpp (textured path) · 8-15 palette bank')
        editor._pv = {'index': tk.StringVar(value=str(p.index)), 'x': tk.StringVar(value=str(p.x)),
                    'y': tk.StringVar(value=str(p.y)),
                    'shape': tk.StringVar(value=shape_label(p.shape) if p.shape in dstxmod.SHAPES else str(p.shape)),
                    'h': tk.BooleanVar(value=p.hflip), 'v': tk.BooleanVar(value=p.vflip),
                    'b2': tk.BooleanVar(value=bool(p.attr & 0x40)), 'bank': tk.StringVar(value=str(p.bank))}
        ins.entry('Index', editor._pv['index'], 'Frame number (0x40), tile number (0x10) or texture cell (atlas)',
                  on_return=editor.apply_piece)
        ins.spin('X', editor._pv['x'], -128, 127, on_change=editor.apply_piece)
        ins.spin('Y', editor._pv['y'], -128, 127, on_change=editor.apply_piece)
        ins.combo('Shape', editor._pv['shape'], [shape_label(c) for c in sorted(dstxmod.SHAPES)],
                  on_change=editor.apply_piece)
        ins.check('Flip H', editor._pv['h'], on_change=editor.apply_piece)
        ins.check('Flip V', editor._pv['v'], on_change=editor.apply_piece)
        ins.check('2bpp', editor._pv['b2'], 'Attribute bit 6: 4-colour texture view on the textured path',
                  on_change=editor.apply_piece)
        ins.spin('Bank', editor._pv['bank'], 0, 255, on_change=editor.apply_piece)
        ins.value('Attr', hex_id(p.attr, 4), colour=T.MUTED)
        if g is not None and sprite.SpriteSource(g).is_atlas:
            ins.value('Texture', f'cell ({(p.index & 31) * 8}, {(p.index >> 5) * 8})', colour=T.MUTED)
    if g is not None:
        ins.section('Palette', note='Click a bank to assign it to the selected piece.')
        ins.widget(editor._palette_widget)
        ins.buttons(('Edit palette…', editor.edit_palette))
        if sprite.SpriteSource(g).is_atlas:
            ins.section('Atlas')
            ins.buttons(('Export atlas…', editor.export_atlas), ('Import atlas…', editor.import_atlas))
