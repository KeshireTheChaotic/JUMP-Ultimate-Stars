"""Collider handles and local rectangle editing in the animation viewport."""
import re


CORNERS = ((0, 1), (2, 1), (2, 3), (0, 3))
HANDLE_RADIUS = 4  # screen pixels, independent of viewport zoom


def hit_collider(editor, wx, wy, selected_only=False):
    if not editor.show_collision.get():
        return None
    ox, oy = editor._animation_origin(editor.tick)
    candidates = []
    for ni, st in editor._state(editor.move, editor.tick).items():
        px, py = st.get('2DPos', [0, 0])
        for ti, tr in enumerate(editor.move.nodes[ni].tracks):
            if selected_only and (ni, ti) != editor.sel_track:
                continue
            rect = st.get(tr.field)
            if (re.fullmatch(r'CollisionRect\d+', tr.field) and not tr.opaque
                    and isinstance(rect, list) and len(rect) == 4):
                candidates.append((ni, ti, tr.field, rect, wx - ox - px, wy - oy - py))
    candidates.reverse()
    candidates.sort(key=lambda c: (c[0], c[1]) != editor.sel_track)
    radius = (HANDLE_RADIUS + 2) / editor.view.zoom
    for ni, ti, field, rect, x, y in candidates:
        for corner in CORNERS:
            if abs(x - rect[corner[0]]) <= radius and abs(y - rect[corner[1]]) <= radius:
                return ni, field, list(rect), corner
    for ni, ti, field, rect, x, y in candidates:
        left, right = sorted((rect[0], rect[2]))
        top, bottom = sorted((rect[1], rect[3]))
        if left - radius <= x <= right + radius and top - radius <= y <= bottom + radius:
            return ni, field, list(rect), None
    return None


def moved_rect(rect, corner, dx, dy):
    result = list(rect)
    if corner is None:
        # Clamp the translation as a whole so width and height stay unchanged.
        dx = max(-32768 - min(rect[0], rect[2]), min(32767 - max(rect[0], rect[2]), dx))
        dy = max(-32768 - min(rect[1], rect[3]), min(32767 - max(rect[1], rect[3]), dy))
        return [rect[0] + dx, rect[1] + dy, rect[2] + dx, rect[3] + dy]
    xi, yi = corner
    result[xi] = max(-32768, min(32767, rect[xi] + dx))
    result[yi] = max(-32768, min(32767, rect[yi] + dy))
    # Do not invert the rectangle when dragging through the opposite corner.
    result[xi] = min(result[xi], rect[2]) if xi == 0 else max(result[xi], rect[0])
    result[yi] = min(result[yi], rect[3]) if yi == 1 else max(result[yi], rect[1])
    return result
