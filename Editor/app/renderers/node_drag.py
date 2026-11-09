"""Animation viewport picking and playhead-keyed node translation."""
from jus_formats import almt
from app.renderers import collider_drag


def hit_node(editor, wx, wy, handles_only=False, selected_only=False):
    sx, sy = editor._animation_origin(editor.tick)
    wx, wy = wx - sx, wy - sy
    state = editor._state(editor.move, editor.tick)
    order = list(reversed(state))
    if selected_only:
        order = [editor.sel_track[0]] if editor.sel_track and editor.sel_track[0] in state else []
    if editor.sel_track and editor.sel_track[0] in order:
        order.remove(editor.sel_track[0])
        order.insert(0, editor.sel_track[0])
    # Handles take precedence over sprites, including nodes without graphics.
    radius = 7 / editor.view.zoom
    for ni in order:
        x, y = state[ni].get('2DPos', [0, 0])
        if abs(wx - x) <= radius and abs(wy - y) <= radius:
            return ni
    if handles_only:
        return None
    for ni in order:
        st = state[ni]
        tid, frame = st.get('TextureID'), st.get('BoundsIndex')
        if tid is None or frame is None or frame == 0xFFFF:
            continue
        image = editor._frame_image(tid, frame)
        if image is None:
            continue
        pil, left, top = image
        x, y = st.get('2DPos', [0, 0])
        ix, iy = wx - x - left, wy - y - top
        if 0 <= ix < pil.width and 0 <= iy < pil.height:
            if pil.getpixel((int(ix), int(iy)))[3]:
                return ni
    return None


def press(editor, wx, wy, _event):
    editor._node_drag = None
    if not editor.move or not editor.almt:
        return
    editor._stop_play()
    selected_collider = None
    selected_node = None
    if editor.sel_track:
        node_index, track_index = editor.sel_track
        node = editor.move.nodes[node_index] if node_index < len(editor.move.nodes) else None
        tr = node.tracks[track_index] if node and track_index < len(node.tracks) else None
        if tr is not None and tr.field.startswith('CollisionRect'):
            selected_collider = collider_drag.hit_collider(editor, wx, wy, selected_only=True)
        elif tr is not None:
            selected_node = hit_node(editor, wx, wy, selected_only=True)
    collider = collider_drag.hit_collider(editor, wx, wy) if hasattr(editor, 'show_collision') else None
    ni = hit_node(editor, wx, wy, handles_only=True)
    # Explicit selection wins overlaps, even over another element's handles.
    if selected_collider:
        ni, field, pos, corner = selected_collider
    elif selected_node is not None:
        ni, field, pos, corner = selected_node, '2DPos', None, None
    elif collider and (collider[3] is not None or ni is None):
        ni, field, pos, corner = collider
    else:
        ni = ni if ni is not None else hit_node(editor, wx, wy)
        field, corner = '2DPos', None
        pos = None
    if ni is None:
        return
    node = editor.move.nodes[ni]
    tr = node.track(field)
    if tr is not None and tr.opaque:
        return
    if field not in editor.almt.field_names and len(editor.almt.field_names) >= 255:
        editor.status.set(f'Cannot add {field}: ALMT field table is full.')
        return
    if pos is None:
        pos = list(editor._state(editor.move, editor.tick)[ni].get('2DPos', [0, 0]))
    editor._node_drag = dict(move=editor.move, tick=editor.tick, ni=ni,
                             start=(wx, wy), pos=pos, field=field, corner=corner, changed=False)
    if tr is not None:
        editor.sel_track = (ni, node.tracks.index(tr))
        editor.sel_key = editor.tick if any(k.tick == editor.tick for k in tr.keys) else None
        editor.sel_virtual = None
        editor.refresh_animation()


def drag(editor, wx, wy, _event):
    d = getattr(editor, '_node_drag', None)
    if not d:
        return
    if editor.move is not d['move'] or editor.tick != d['tick']:
        editor._node_drag = None
        return
    if d['field'] == '2DPos':
        value = [max(-32768, min(32767, p + round(v - start)))
                 for p, v, start in zip(d['pos'], (wx, wy), d['start'])]
    else:
        value = collider_drag.moved_rect(d['pos'], d['corner'],
                    round(wx - d['start'][0]), round(wy - d['start'][1]))
    if not d['changed'] and value == d['pos']:
        return
    node = editor.move.nodes[d['ni']]
    tr = node.track(d['field'])
    if not d['changed']:
        editor.checkpoint(('resize ' if d['corner'] is not None else 'move ') + d['field'])
        editor.almt.field_index(d['field'])
        if tr is None:
            tr = almt.Track(d['field'], True)
            node.tracks.append(tr)
        elif not tr.keyed:
            tr.keyed = True
            tr.keys = [almt.Key(0, list(tr.value))] if d['tick'] else []
            tr.value = None
        d['changed'] = True
    key = next((k for k in tr.keys if k.tick == d['tick']), None)
    if key is None:
        tr.keys.append(almt.Key(d['tick'], value))
        tr.keys.sort(key=lambda k: k.tick)
    else:
        key.value = value
    tr.touch()
    editor.sel_track = (d['ni'], node.tracks.index(tr))
    editor.sel_key = d['tick']
    editor.sel_virtual = None
    editor._track_done()


def release(editor, wx, wy, event):
    drag(editor, wx, wy, event)
    editor._node_drag = None
