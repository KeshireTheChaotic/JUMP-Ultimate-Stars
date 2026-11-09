"""Source-backed ALMT viewport draw orchestration; ROM behavior not invented."""
from __future__ import annotations
import re
from app import theme as T
from jus_formats import eventops
from jus_package import effectlinks,sounds,spawns
from app.renderers.collider_drag import CORNERS, HANDLE_RADIUS

def draw_node_sprites(editor,vp,move,tick,base=(0,0),alpha=None,info=None,names=None,hex_id=None):
    for ni, st in editor._state(move, tick).items():
        pos = st.get('2DPos', [0, 0])
        tid, frame = st.get('TextureID'), st.get('BoundsIndex')
        if tid is None or frame is None or frame == 0xFFFF:
            continue
        fi = editor._frame_image(tid, frame)
        name = (names or editor.almt.node_names)[ni] if ni < len(names or editor.almt.node_names) else f'N{ni}'
        if fi is None:
            if info is not None:
                info.append(f'{name}: tex {hex_id(tid, 6)} frame {frame} unavailable')
            continue
        pil, l, t = fi
        if alpha is not None:
            pil = pil.copy()
            a = pil.getchannel('A').point(lambda v: int(v * alpha))
            pil.putalpha(a)
        vp.add_image(pil, base[0] + pos[0] + l, base[1] + pos[1] + t)
        if info is not None:
            info.append(f'{name}: tex {hex_id(tid, 6)} frame {frame} @({pos[0]},{pos[1]})')


def draw_animation(editor,vp,short_cue):
    info = []
    if not editor.move or not editor.almt:
        vp.hud.configure(text='No move selected')
        return
    tick = editor.tick
    shift = editor._animation_origin(tick)
    # Transform the body, never the camera/grid. Restore even after a draw error.
    with vp.translated(*shift):
        editor._draw_animation_body(vp, tick, info, shift)
    editor._draw_motion(vp, tick, info)
    for c, played in sounds.dedupe_same_frame(editor._cues):
        if c.tick == tick:
            info.append('♪ ' + short_cue(c) + (' (duplicate)' if c.ssar is not None and not played else ''))
    if editor._effect_table_error:
        info.append('Effect table: ' + editor._effect_table_error)
    vp.hud.configure(text=f'tick {tick}/{editor.move.duration}   ' + '   '.join(info))


def draw_animation_body(editor,vp,tick,info,shift,hex_id):
    vp.text(0, 0, '+', fill=T.GOOD, font=T.UI_BOLD, tags=('animation_origin',))
    behind = editor.effect_layer.get() == 'Behind'
    if behind:
        editor._draw_spawns(vp, tick, info, marks=False)
    if editor.show_onion.get():
        prev_t = max([t for r in editor.timeline.rows if r.get('label') == 'BoundsIndex'
                      for t, _ in r.get('keys', []) if t < tick], default=None)
        if prev_t is not None:
            editor._draw_node_sprites(vp, editor.move, prev_t,
                                    base=tuple(a - b for a, b in zip(editor._animation_origin(prev_t), shift)),
                                    alpha=0.3)
    editor._draw_node_sprites(vp, editor.move, tick, info=info)
    state = editor._state(editor.move, tick)
    sel = editor.sel_track
    sel_field = editor._track().field if editor._track() is not None else None
    if editor.show_collision.get():
        for ni, st in state.items():
            pos = st.get('2DPos', [0, 0])
            for f, v in st.items():
                m = re.fullmatch(r'CollisionRect(\d+)', f)
                if not m or not isinstance(v, list):
                    continue
                ch = int(m.group(1))
                en = st.get(f'CollisionEnable{ch}', 1)
                col = T.COLLISION_COLOURS[ch % len(T.COLLISION_COLOURS)]
                hot = sel is not None and sel[0] == ni and sel_field == f
                x0, y0, x1, y1 = v
                vp.rect(pos[0] + x0, pos[1] + y0, pos[0] + x1, pos[1] + y1, outline=col,
                        dash=() if en else (3, 3), width=3 if hot else (2 if en else 1))
                for xi, yi in CORNERS:
                    sx, sy = vp.to_screen(pos[0] + v[xi], pos[1] + v[yi])
                    r = HANDLE_RADIUS
                    vp.canvas.create_rectangle(sx - r, sy - r, sx + r, sy + r,
                                               outline=col, fill=T.ACCENT if hot else T.CANVAS_BG,
                                               width=2 if hot else 1)
                if hot:
                    vp.text(pos[0] + x0, pos[1] + y0 - 2, f'{f} ({x0},{y0})-({x1},{y1})', anchor='sw',
                            fill=col, font=T.MONO_SMALL)
    for ni, st in state.items():
        name = editor.almt.node_names[ni]
        pos = st.get('2DPos', [0, 0])
        hot = sel is not None and sel[0] == ni
        vp.text(pos[0], pos[1], '+', fill=T.ACCENT if hot else T.WARN, font=T.UI_BOLD)
        vp.text(pos[0] + 2, pos[1] + 2, name, anchor='nw',
                fill=T.ACCENT if hot else T.MUTED, font=T.MONO_SMALL)
        if st.get('GenerateID'):
            info.append(f'{name}: GenerateID {hex_id(st["GenerateID"])}')
        if 'Marker' in st and st['Marker']:
            info.append(f'{name}: {eventops.marker_label(st["Marker"])}')
    editor._draw_spawns(vp, tick, info, sprites=not behind)
    editor._draw_shot_source_sprites(vp, tick, info)
    editor._draw_pursuer(vp, tick, info)


def draw_motion(editor,vp,tick,info):
    """Trajectory of the body under the NoteTrack physics (world origin = start)."""
    mo = editor._motion
    if not mo or not mo.commands or not editor.show_motion.get():
        return
    pts = []
    for f in mo.frames:
        pts.extend(vp.to_screen(*f.px))
    if len(pts) >= 4:
        vp.canvas.create_line(*pts, fill=T.WARN, width=1, dash=(2, 3))
    for f in mo.frames:
        if f.events and any(e.startswith(('impulse', 'stop')) for e in f.events):
            x, y = vp.to_screen(*f.px)
            vp.canvas.create_oval(x - 3, y - 3, x + 3, y + 3, outline=T.WARN)
    f = mo.at(tick)
    if f:
        x, y = vp.to_screen(*f.px)
        vp.canvas.create_oval(x - 5, y - 5, x + 5, y + 5, outline='#FFFFFF', width=2)
        vx, vy = f.vx / 256, f.vy / 256
        if vx or vy:
            vp.canvas.create_line(x, y, x + vx * vp.zoom * 4, y + vy * vp.zoom * 4, fill='#FFFFFF',
                                  arrow='last')
        info.append(f'phys ({f.px[0]:.0f},{f.px[1]:.0f})px v({vx:.1f},{vy:.1f})' +
                    ('' if f.gravity else ' g-off'))


def draw_spawns(editor,vp,tick,info,sprites=True,marks=True,hex_id=None):
    """GenerateID effects: sprites (front or behind pass) and origin marks (always on top)."""
    if not editor.show_spawns.get() or not editor.index:
        return
    proj = editor.spawn_projection(tick)
    hot = editor.sel_virtual.get('spawn') if editor.sel_virtual else None
    displayed = editor._visible_spawn_instances(proj)
    for inst in displayed:
        if sprites:
            editor._draw_node_sprites(vp, inst.move, inst.sub_tick, base=inst.anchor, names=inst.names)
        if not marks:
            continue
        if editor.show_effect_marks.get() or inst.spawn == hot:
            ax, ay = inst.anchor
            sx, sy = vp.to_screen(ax, ay)
            col = '#FFFFFF' if inst.spawn == hot else T.EFFECT
            vp.canvas.create_polygon(sx, sy - 5, sx + 5, sy, sx, sy + 5, sx - 5, sy, outline=col, fill='',
                                     width=2 if inst.spawn == hot else 1)
            vp.canvas.create_text(sx + 7, sy - 7, anchor='sw', fill=col, font=T.MONO_SMALL,
                                  text=f'{inst.spawn.effect_id:06X} t{inst.sub_tick}' +
                                       (' ⚑' if inst.flags & spawns.FLAG_SCREEN_REFERENCE else ''))
    if not marks:
        return
    if proj.instances:
        info.append(f'effects: {len(proj.instances)} nominal / {len(displayed)} displayed'
                    + (' (isolated)' if editor.isolate_selected_spawn.get() else ' (combat state unknown)'))
    if editor.isolate_selected_spawn.get() and hot is None:
        info.append('Select an effect row to isolate it')
    for sp in proj.missing[:3]:
        info.append(f'⚠ GenerateID {hex_id(sp.effect_id, 6)} has no move')


def draw_pursuer(editor,vp,tick,info,hex_id):
    if not editor.show_effects.get() or not editor.index:
        return
    ev = effectlinks.active_event(editor._pursuer_events, tick)
    if ev is None or not ev.animation_ids:
        return
    if ev.target_xy is None:
        info.append('Pursuer: target unknown (set by an earlier move)')
        return
    # FUN_021618E4 resolves the target against the live actor and facing,
    # then performs a capped quarter-distance follow in 24.8 units. The
    # unknown pre-move state is an explicit, selectable preview assumption.
    seed = 'origin' if editor.pursuer_start_seed.get() == 'Origin (0,0)' else 'first_target'
    pos = effectlinks.pursuer_position_at(
        editor._pursuer_events, tick, editor._animation_origin,
        facing_left=editor.facing_left.get(), seed=seed)
    if pos is None:
        return
    shift_x, shift_y = editor._animation_origin(tick)
    tx, ty = pos.target
    px, py = pos.xy
    # The Viewport has already been translated by the root motion shift.
    sx, sy = vp.to_screen(tx - shift_x, ty - shift_y)
    vp.canvas.create_oval(sx - 5, sy - 5, sx + 5, sy + 5, outline=T.GOOD, dash=(2, 2))
    if editor.pursuer_motion_preview.get() == 'Target only':
        px, py = tx, ty
    elif (px, py) != (tx, ty):
        sx2, sy2 = vp.to_screen(px - shift_x, py - shift_y)
        vp.canvas.create_line(sx2, sy2, sx, sy, fill=T.GOOD, dash=(2, 3))
    rid = ev.move_a if editor.pursuer_choice.get() == 'A' else ev.move_b
    if rid is None or rid not in editor._effect_moves:
        if rid is not None:
            info.append(f'Pursuer {hex_id(rid)}: ALMT unavailable')
        return
    effect, names, _ = editor._effect_moves[rid]
    sub_tick = effectlinks.effect_frame_tick(effect, tick - ev.tick)
    if sub_tick is None:
        return
    editor._draw_node_sprites(vp, effect, sub_tick,
                            base=(px - shift_x, py - shift_y), names=names)
    mode = ('follow (traced; seed assumed)' if editor.pursuer_motion_preview.get() != 'Target only'
            else 'target only (reference)')
    info.append(f'Pursuer {hex_id(rid, 6)} t{sub_tick} @({px:.1f},{py:.1f}) [{mode}]')

