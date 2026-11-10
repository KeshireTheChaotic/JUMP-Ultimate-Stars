"""JUS Editor — animation, sprite and archive editor (Tkinter + Pillow).

Layout follows 2D animation editors in Unity (Animation window + Inspector),
Godot (AnimationPlayer dock, SpriteFrames) and Unreal (Paper2D Flipbook /
Sprite editors):

* **Project** panel (left): characters, effect archives, other archives.
* **Animation** workspace: Moves list | Viewport | Inspector, with a dock-style
  dope-sheet Timeline underneath (transport, ruler, playhead, key diamonds,
  NoteTrack event flags, Marker labels with jump/branch arcs, effect rows).
* **Sprite** workspace: Viewport with selectable/draggable pieces | Details,
  and a thumbnail Filmstrip with flipbook playback.
* **Archive** workspace: member table | Details.

All edits stay in memory with undo/redo until *Apply* writes them into the
archive tree; *Save* writes rebuilt archive files.
"""
from __future__ import annotations

import os
import re
import sys
import tkinter as tk
from pathlib import Path
from tkinter import messagebox  # compatibility: tests and callers patch app.editor.messagebox

HERE = Path(__file__).resolve().parent.parent
if str(HERE) not in sys.path:
    sys.path.insert(0, str(HERE))

from jus_formats import dstx as dstxmod, notetrack  # noqa: E402
from jus_package import motion, timelineprojection  # noqa: E402
from jus_package.project import split  # noqa: E402

from app import theme as T  # noqa: E402
from app.dialogs import SHORTCUTS, TextDialog  # noqa: E402

DEFAULT_DATA = os.environ.get('JUS_DATA', os.environ.get('JUS_DATA_ROOT', r'D:\Library\Development\JUS\data'))
SPEEDS = ('0.25×', '0.5×', '1×', '2×')
# Branch opcodes: argument positions holding Marker-label targets (seek via vtable+0xEC).
BRANCH_TARGET_ARGS = timelineprojection.BRANCH_TARGET_ARGS  # legacy public alias


def hx(v: int, w: int = 8) -> str:
    return f'0x{v:0{w}X}'


def _short_cue(c) -> str:
    """Timeline/HUD text for a sound cue; details stay in the tooltip and Inspector."""
    if c.ssar is not None:
        return c.label
    return '?' if c.evidence == 'Unknown' else '–'


def shape_label(code: int) -> str:
    w, h = dstxmod.SHAPES[code]
    kind = 'square' if w == h else ('wide' if w > h else 'tall')
    return f'{code:2d}: {w}×{h} {kind}'


class EditorApp(tk.Tk):
    def __init__(self, data_root: str | None = None):
        T.dpi_aware()
        super().__init__()
        self.title('JUS Editor')
        self.geometry('1680x1000')
        self.minsize(1240, 760)
        self.configure(bg=T.BG)
        T.apply_styles(self)
        # Initialize original document/view variables before constructing Tk widgets.
        from app.lifecycle.session import initialize_editor_state
        initialize_editor_state(self)
        self._build_menu()
        self._build_layout()
        self._bind_shortcuts()
        self.after(60, lambda: self.open_root(data_root or DEFAULT_DATA, quiet=True))
        self._audio_poll_job = self.after(100, self._poll_audio)
        self.protocol("WM_DELETE_WINDOW", self.destroy)

    # ================================================================ layout
    def _build_menu(self):
        """Original File/Edit/Animation/Sprite/View/Help menus and callbacks."""
        from app.lifecycle.shell import build_menu
        return build_menu(self)


    def _build_layout(self):
        """Create top toolbar, status, and workspace shells in original order."""
        from app.lifecycle.shell import build_layout
        return build_layout(self)


    def _build_project(self, body, k):
        """Build the project/roster file browser with existing callbacks."""
        from app.lifecycle.shell import build_project
        return build_project(self, body, k)


    # ------------------------------------------------------ animation tab
    def _build_animation(self, host, k):
        """Construct the original animation pane and bind existing callbacks."""
        from app.layouts.animation import build_animation
        return build_animation(self, host, k, SPEEDS)


    # --------------------------------------------------------- sprite tab
    def _build_sprite(self, host, k):
        """Construct the sprite/filmstrip pane with original editor bindings."""
        from app.layouts.sprite import build_sprite
        return build_sprite(self, host, k)


    # -------------------------------------------------------- archive tab
    def _build_archive(self, host, k):
        """Construct the source-archive member inspector pane."""
        from app.layouts.archive import build_archive
        return build_archive(self, host, k)


    def _set_roster_clips(self, hidden=True):
        from app.lifecycle.ui_helpers import _set_roster_clips as _helper
        return _helper(self, hidden)

    def show_roster_animation(self):
        self.show_workspace('animation')

    def show_roster_sprite(self):
        from app.lifecycle.roster_navigation import show_roster_sprite as _controller
        return _controller(self)

    def show_workspace(self, name):
        """Retain original workspace activation, playback and browser order."""
        from app.lifecycle.navigation import activate_workspace
        return activate_workspace(self, name)


    # ============================================================ shortcuts
    def _bind_shortcuts(self):
        """Attach original keyboard shortcuts and focus guards."""
        from app.lifecycle.navigation import bind_shortcuts
        return bind_shortcuts(self)


    def _arrow(self, dx, dy, e, big=False):
        from app.lifecycle.ui_helpers import _arrow as _helper
        return _helper(self, dx, dy, e, big)

    def show_shortcuts(self):
        TextDialog(self, 'Keyboard shortcuts', SHORTCUTS, lambda t: True)

    def _open_doc(self, name):
        from app.lifecycle.ui_helpers import _open_doc as _helper
        return _helper(self, name)

    @staticmethod
    def _int(text, default):
        from app.parsing import _int as _helper
        return _helper(text, default)

    # ============================================================ data root
    def choose_root(self):
        from app.lifecycle.resource_ops import choose_root as _controller
        return _controller(self)


    def open_root(self, path, quiet=False):
        from app.lifecycle.resource_ops import open_root as _controller
        return _controller(self, path, quiet)


    def populate_tree(self):
        from app.lifecycle.resource_ops import populate_tree as _controller
        return _controller(self)


    def on_resource_open(self, _e=None):
        from app.lifecycle.resource_ops import on_resource_open as _controller
        return _controller(self, _e)


    def on_resource_select(self, _e=None):
        from app.lifecycle.resource_ops import on_resource_select as _controller
        return _controller(self, _e)


    def _project_context(self, e):
        from app.lifecycle.resource_ops import _project_context as _controller
        return _controller(self, e)


    def open_table(self, path):
        from app.lifecycle.resource_ops import open_table as _controller
        return _controller(self, path)


    def select_container(self, path, char_id=None):
        from app.lifecycle.resource_ops import select_container as _controller
        return _controller(self, path, char_id)


    @staticmethod
    def _short(path):
        parts = split(path)
        return f'{parts[-1]}   ({" › ".join(parts[:-1])})'

    def _char_of(self, path):
        m = re.search(r'([a-z]{2}_[bsh]_\d{2})', path, re.I)
        return m.group(1).lower() if m else None

    # =========================================================== dirty/save
    def update_dirty(self):
        from app.lifecycle.document_ops import update_dirty as _controller
        return _controller(self)


    def confirm_discard(self):
        from app.lifecycle.document_ops import confirm_discard as _controller
        return _controller(self)


    def apply_current(self):
        from app.lifecycle.document_ops import apply_current as _controller
        return _controller(self)


    def save(self, in_place):
        from app.lifecycle.document_ops import save as _controller
        return _controller(self, in_place)


    def revert(self):
        from app.lifecycle.document_ops import revert as _controller
        return _controller(self)


    # ============================================================= packages
    def export_package(self):
        from app.lifecycle.document_ops import export_package as _controller
        return _controller(self)


    def import_package(self):
        from app.lifecycle.document_ops import import_package as _controller
        return _controller(self)


    def run_task(self, label, work, done):
        from app.lifecycle.document_ops import run_task as _controller
        return _controller(self, label, work, done)


    # ============================================================ undo/redo
    def _doc(self):
        from app.lifecycle.history_ops import _doc as _controller
        return _controller(self)


    def _almt_snapshot(self):
        from app.lifecycle.history_ops import _almt_snapshot as _controller
        return _controller(self)


    def _sprite_snapshot(self):
        from app.lifecycle.history_ops import _sprite_snapshot as _controller
        return _controller(self)


    def checkpoint(self, label, kind='almt', snap=None):
        from app.lifecycle.history_ops import checkpoint as _controller
        return _controller(self, label, kind, snap)


    def _restore_almt(self, snap):
        from app.lifecycle.history_ops import _restore_almt as _controller
        return _controller(self, snap)


    def _restore_sprite(self, snap):
        from app.lifecycle.history_ops import _restore_sprite as _controller
        return _controller(self, snap)


    def undo(self):
        from app.lifecycle.history_ops import undo as _controller
        return _controller(self)


    def redo(self):
        from app.lifecycle.history_ops import redo as _controller
        return _controller(self)


    def _history_step(self, fn, verb):
        from app.lifecycle.history_ops import _history_step as _controller
        return _controller(self, fn, verb)


    def _update_undo_label(self):
        from app.lifecycle.history_ops import _update_undo_label as _controller
        return _controller(self)


    # ================================================================ ALMT
    def _switch_almt(self, name):
        from app.lifecycle.roster_navigation import _switch_almt as _controller
        return _controller(self, name)

    def load_almt(self, name):
        from app.lifecycle.resource_ops import load_almt as _controller
        return _controller(self, name)


    def _ai_block(self):
        from app.lifecycle.roster_navigation import _ai_block as _controller
        return _controller(self)

    def _move_xref(self):
        from app.lifecycle.roster_navigation import _move_xref as _controller
        return _controller(self)

    def _move_source_form(self):
        from app.lifecycle.roster_navigation import _move_source_form as _controller
        return _controller(self)

    def _move_control_and_title(self, move):
        from app.lifecycle.roster_navigation import _move_control_and_title as _controller
        return _controller(self, move)

    def open_move_resource(self, form: str, resource_id: int, member: str, card_index: int | None = None):
        from app.lifecycle.roster_navigation import open_move_resource as _controller
        return _controller(self, form, resource_id, member, card_index, hx=hx)

    def open_koma_card(self, card_index: int):
        from app.lifecycle.roster_navigation import open_koma_card as _controller
        return _controller(self, card_index)

    def _battle_base_table(self) -> bool:
        from app.lifecycle.roster_navigation import _battle_base_table as _controller
        return _controller(self)

    def populate_moves(self, keep=False, select=None):
        from app.lifecycle.move_list import populate_moves as _controller
        return _controller(self, keep, select, hx=hx)

    def on_move_select(self, _e=None):
        from app.lifecycle.move_list import on_move_select as _controller
        return _controller(self, _e)

    def _move_row(self, i):
        from app.lifecycle.move_list import _move_row as _controller
        return _controller(self, i, hx=hx)

    def mark_almt(self):
        from app.lifecycle.apply_ops import mark_almt as _controller
        return _controller(self)


    def duplicate_move(self):
        from app.lifecycle.move_list import duplicate_move as _controller
        return _controller(self, hx=hx)

    def delete_move(self):
        from app.lifecycle.move_list import delete_move as _controller
        return _controller(self, hx=hx)

    def apply_almt(self):
        from app.lifecycle.apply_ops import apply_almt as _controller
        return _controller(self)


    def export_almt_json(self):
        from app.lifecycle.apply_ops import export_almt_json as _controller
        return _controller(self)


    def import_almt_json(self):
        from app.lifecycle.apply_ops import import_almt_json as _controller
        return _controller(self)


    def apply_move_props(self):
        from app.lifecycle.apply_ops import apply_move_props as _controller
        return _controller(self)


    # --------------------------------------------------------------- notes
    def command_text(self, c: notetrack.Command, short=False):
        from app.timeline.interactions import command_text as _operation
        return _operation(self, c, short)


    def notes_to_text(self, raw: bytes):
        from app.timeline.interactions import notes_to_text as _operation
        return _operation(self, raw)


    @staticmethod
    def text_to_notes(text: str, old_raw: bytes) -> bytes:
        from app.timeline.note_text import text_to_notes as _helper
        return _helper(text, old_raw)

    # --------------------------------------------------------------- tracks
    def _track(self, sel=None):
        from app.timeline.interactions import _track as _operation
        return _operation(self, sel)


    def _track_done(self, label='edit track', snap=None):
        from app.timeline.interactions import _track_done as _operation
        return _operation(self, label, snap)


    def edit_track(self):
        from app.timeline.interactions import edit_track as _operation
        return _operation(self)


    def add_track(self):
        from app.timeline.interactions import add_track as _operation
        return _operation(self)


    def delete_track(self):
        from app.timeline.interactions import delete_track as _operation
        return _operation(self)


    def _active_value(self, tr, tick):
        from app.timeline.interactions import _active_value as _operation
        return _operation(self, tr, tick)


    def add_key_at_playhead(self):
        from app.timeline.interactions import add_key_at_playhead as _operation
        return _operation(self)


    def delete_selected_key(self):
        from app.timeline.interactions import delete_selected_key as _operation
        return _operation(self)


    def set_key(self, tick_text, value_text):
        from app.timeline.interactions import set_key as _operation
        return _operation(self, tick_text, value_text)


    # ----------------------------------------------------- NoteTrack events
    def _note_track_for_selection(self, create=False):
        from app.timeline.interactions import _note_track_for_selection as _operation
        return _operation(self, create)


    def _note_dialog(self, ni, track, tick, operation='edit'):
        from app.timeline.interactions import _note_dialog as _operation
        return _operation(self, ni, track, tick, operation)


    def edit_note_events(self):
        from app.timeline.interactions import edit_note_events as _operation
        return _operation(self)


    def add_note_event(self):
        from app.timeline.interactions import add_note_event as _operation
        return _operation(self)


    # ------------------------------------------------------- pursuer links
    def _amt_tables(self, paths):
        from app.lifecycle.effect_sources import _amt_tables as _operation
        return _operation(self, paths)

    def _load_effect_catalog(self):
        from app.lifecycle.effect_sources import _load_effect_catalog as _operation
        return _operation(self)

    def _refresh_pursuer_links(self):
        from app.lifecycle.effect_sources import _refresh_pursuer_links as _operation
        return _operation(self)

    # ============================================================= timeline
    def _timeline_rows(self):
        """Build original authored timeline rows through the row presenter."""
        from app.timeline.rows import build_timeline_rows
        return build_timeline_rows(self, hx)


    def open_effect_move(self, eid, path):
        from app.lifecycle.effect_sources import open_effect_move as _operation
        return _operation(self, eid, path, hx=hx)

    # ------------------------------------------- NoteTrack physics and sound
    def _motion_params(self):
        return motion.Params(facing_left=self.facing_left.get(), floor=self.motion_floor.get())

    def _refresh_notetrack_effects(self):
        from app.timeline.presentation_ops import _refresh_notetrack_effects as _operation
        return _operation(self)

    def _motion_changed(self):
        from app.timeline.presentation_ops import _motion_changed as _operation
        return _operation(self)

    def _notetrack_effect_rows(self):
        """Display original physics/sound commands without runtime interpolation."""
        from app.timeline.rows import build_notetrack_effect_rows
        return build_notetrack_effect_rows(self, _short_cue)


    def _physics_tooltip(self, tick):
        from app.timeline.presentation_ops import _physics_tooltip as _operation
        return _operation(self, tick)

    def _sound_tooltip(self, tick):
        from app.timeline.presentation_ops import _sound_tooltip as _operation
        return _operation(self, tick)

    def _spawn_rows(self):
        """Map original GenerateID keys to diagnostic clip rows."""
        from app.timeline.rows import build_spawn_rows
        return build_spawn_rows(self)


    @staticmethod
    def _branch_targets(cmd):
        """Original editor entrypoint retained for external caller compatibility."""
        return timelineprojection.branch_targets(cmd)

    def _event_tooltip(self, tick, payload):
        from app.timeline.presentation_ops import _event_tooltip as _operation
        return _operation(self, tick, payload)

    def _fmt(self, field, v):
        from app.timeline.presentation_ops import _fmt as _operation
        return _operation(self, field, v, hx=hx)

    def _fmt_short(self, field, v):
        from app.timeline.presentation_ops import _fmt_short as _operation
        return _operation(self, field, v, hx=hx)

    def _timeline_select(self, row, tick, payload):
        from app.timeline.interactions import _timeline_select as _operation
        return _operation(self, row, tick, payload)


    def _timeline_move_key(self, row, start, end):
        from app.timeline.interactions import _timeline_move_key as _operation
        return _operation(self, row, start, end)


    def _timeline_context(self, e, row, tick, key_tick):
        from app.timeline.interactions import _timeline_context as _operation
        return _operation(self, e, row, tick, key_tick)


    def _timeline_activate(self, row, key_tick):
        from app.timeline.interactions import _timeline_activate as _operation
        return _operation(self, row, key_tick)


    def _toggle_group(self, row):
        from app.timeline.interactions import _toggle_group as _operation
        return _operation(self, row)


    def _set_collapsed(self, s):
        from app.timeline.interactions import _set_collapsed as _operation
        return _operation(self, s)


    def jump_key(self, direction):
        from app.timeline.interactions import jump_key as _operation
        return _operation(self, direction)


    # ============================================================ playback
    def set_tick(self, t):
        from app.timeline.interactions import set_tick as _operation
        return _operation(self, t)


    def _poll_audio(self):
        from app.lifecycle.playback import _poll_audio as _operation
        return _operation(self)


    def _sound_changed(self):
        from app.lifecycle.playback import _sound_changed as _operation
        return _operation(self)


    def _play_sound_tick(self, tick):
        from app.lifecycle.playback import _play_sound_tick as _operation
        return _operation(self, tick)


    def _begin_play(self):
        from app.lifecycle.playback import _begin_play as _operation
        return _operation(self)


    def _schedule_frame(self):
        from app.lifecycle.playback import _schedule_frame as _operation
        return _operation(self)


    def _audition_tick(self):
        from app.lifecycle.playback import _audition_tick as _operation
        return _operation(self)


    def destroy(self):
        self._stop_play()
        if getattr(self, '_audio_poll_job', None):
            self.after_cancel(self._audio_poll_job)
        if self._audio:
            self._audio.close()
        super().destroy()

    def toggle_play(self):
        from app.lifecycle.playback import toggle_play as _operation
        return _operation(self)


    def _stop_play(self):
        from app.lifecycle.playback import _stop_play as _operation
        return _operation(self)


    def _animate(self):
        from app.lifecycle.playback import _animate as _operation
        return _operation(self)


    # ============================================================ viewport
    def refresh_animation(self):
        from app.renderers.viewport_ops import refresh_animation as _operation
        return _operation(self)

    def _state(self, move, tick, names=None):
        """Original authored-ALMT step interpolation (names retained for callers)."""
        return timelineprojection.editor_state_at(move, tick)

    def _frame_image(self, tid, frame):
        from app.renderers.viewport_ops import _frame_image as _operation
        return _operation(self, tid, frame)

    def redraw_view(self):
        if self.workspace == 'animation':
            self.view.redraw()

    def frame_view_if_needed(self):
        if getattr(self, '_need_frame', False) and self.move:
            self._need_frame = False
            self.frame_view()

    def _init_sashes(self):
        """Preserve deferred original docking measurements."""
        from app.lifecycle.shell import init_sashes
        return init_sashes(self)


    def fit_timeline(self):
        from app.renderers.viewport_ops import fit_timeline as _operation
        return _operation(self)

    def _init_sprite_sashes(self):
        """Preserve source Sprite/Archive sash positions."""
        from app.lifecycle.shell import init_sprite_sashes
        return init_sprite_sashes(self)


    def frame_view(self):
        from app.renderers import projection as _projection
        return _projection.frame_view(self)

    def _move_scope_extent(self):
        from app.renderers import projection as _projection
        return _projection._move_scope_extent(self)

    def _handler00_launch_extents(self):
        from app.renderers import projection as _projection
        return _projection._handler00_launch_extents(self)

    def _move_extent(self):
        from app.renderers import projection as _projection
        return _projection._move_extent(self)

    def _draw_node_sprites(self, vp, move, tick, base=(0, 0), alpha=None, info=None, names=None):
        from app.renderers.animation import draw_node_sprites
        return draw_node_sprites(self, vp, move, tick, base, alpha, info, names, hx)


    def _draw_animation(self, vp):
        from app.renderers.animation import draw_animation
        return draw_animation(self, vp, _short_cue)


    def _animation_origin(self, tick):
        from app.renderers import projection as _projection
        return _projection._animation_origin(self, tick)

    def _draw_animation_body(self, vp, tick, info, shift):
        from app.renderers.animation import draw_animation_body
        return draw_animation_body(self, vp, tick, info, shift, hx)


    def _inspect_spawn(self, ins, row):
        from app.inspectors.events import _inspect_spawn as _render
        return _render(self, ins, row, hx)


    def _draw_motion(self, vp, tick, info):
        from app.renderers.animation import draw_motion
        return draw_motion(self, vp, tick, info)


    def _inspect_physics(self, ins):
        from app.inspectors.events import _inspect_physics as _render
        return _render(self, ins)


    def _inspect_sound(self, ins):
        from app.inspectors.events import _inspect_sound as _render
        return _render(self, ins)


    def spawn_projection(self, tick=None):
        from app.renderers import projection as _projection
        return _projection.spawn_projection(self, tick)

    def _shot_events_current(self):
        from app.renderers import projection as _projection
        return _projection._shot_events_current(self)

    def _draw_shot_source_sprites(self, vp, tick, info):
        """Draw source-confirmed projectile sprites; dynamic physics unmodeled."""
        from app.renderers.shot_source import draw_original_shot_sources
        return draw_original_shot_sources(self, vp, tick, info, hx)


    def _shot_rows(self):
        """Display source-backed chr/shot timeline events."""
        from app.timeline.rows import build_shot_rows
        return build_shot_rows(self, hx)


    def _inspect_shot_source(self, ins):
        """Present source-backed original shot diagnostics (read-only)."""
        from app.inspectors.shot_source import render_shot_source_inspector
        return render_shot_source_inspector(self, ins, hx)


    def _visible_spawn_instances(self, projection):
        from app.renderers import projection as _projection
        return _projection._visible_spawn_instances(self, projection)

    def _draw_spawns(self, vp, tick, info, sprites=True, marks=True):
        from app.renderers.animation import draw_spawns
        return draw_spawns(self, vp, tick, info, sprites, marks, hx)


    def _draw_pursuer(self, vp, tick, info):
        from app.renderers.animation import draw_pursuer
        return draw_pursuer(self, vp, tick, info, hx)


    # ============================================================ inspector
    def refresh_inspector(self, focus_value=False):
        """Present authored ALMT move and selected-source inspector."""
        from app.inspectors.move import render_move_inspector
        return render_move_inspector(self, hx, focus_value)


    @staticmethod
    def _value_hint(field):
        from app.inspectors.value_hint import _value_hint as _helper
        return _helper(field)

    def _inspect_notes(self, ins, tr):
        from app.inspectors.events import _inspect_notes as _render
        return _render(self, ins, tr)


    # ============================================================== sprites
    def load_sprite(self, label, force=False):
        from app.lifecycle.resource_ops import load_sprite as _controller
        return _controller(self, label, force)


    def _frame_sprite_if_needed(self):
        from app.lifecycle.sprite_controls import _frame_sprite_if_needed as _operation
        return _operation(self)


    def populate_frames(self, select=None):
        from app.lifecycle.sprite_controls import populate_frames as _operation
        return _operation(self, select)


    def _bank(self):
        from app.lifecycle.sprite_controls import _bank as _operation
        return _operation(self)


    def _compose(self, i, canvas=None):
        from app.lifecycle.sprite_controls import _compose as _operation
        return _operation(self, i, canvas)


    def _thumb_for(self, i):
        from app.lifecycle.sprite_controls import _thumb_for as _operation
        return _operation(self, i)


    def select_frame(self, i):
        from app.lifecycle.sprite_controls import select_frame as _operation
        return _operation(self, i)


    def _piece(self):
        from app.lifecycle.sprite_controls import _piece as _operation
        return _operation(self)


    def redraw_sprite(self, thumbs=False):
        from app.lifecycle.sprite_controls import redraw_sprite as _operation
        return _operation(self, thumbs)


    def frame_sprite(self):
        from app.lifecycle.sprite_controls import frame_sprite as _operation
        return _operation(self)


    def _draw_sprite(self, vp):
        from app.renderers.sprite import draw_sprite
        return draw_sprite(self, vp)


    def _hit_piece(self, wx, wy):
        from app.lifecycle.sprite_controls import _hit_piece as _operation
        return _operation(self, wx, wy)


    def _sprite_press(self, wx, wy, e):
        from app.lifecycle.sprite_controls import _sprite_press as _operation
        return _operation(self, wx, wy, e)


    def _sprite_drag(self, wx, wy, e):
        from app.lifecycle.sprite_controls import _sprite_drag as _operation
        return _operation(self, wx, wy, e)


    def _sprite_release(self, wx, wy, e):
        from app.lifecycle.sprite_controls import _sprite_release as _operation
        return _operation(self, wx, wy, e)


    def nudge_piece(self, dx, dy):
        from app.lifecycle.sprite_controls import nudge_piece as _operation
        return _operation(self, dx, dy)


    def _after_piece_edit(self):
        from app.lifecycle.apply_ops import _after_piece_edit as _controller
        return _controller(self)


    def refresh_details(self):
        """Present original DSTX/DSIG sprite details."""
        from app.inspectors.atlas_sprite import render_sprite_inspector
        return render_sprite_inspector(self, hx, shape_label)


    def _palette_widget(self, parent):
        from app.lifecycle.sprite_controls import _palette_widget as _operation
        return _operation(self, parent)


    def apply_piece(self):
        from app.lifecycle.apply_ops import apply_piece as _controller
        return _controller(self)


    def toggle_flipbook(self):
        from app.lifecycle.sprite_controls import toggle_flipbook as _operation
        return _operation(self)


    def _stop_flipbook(self):
        from app.lifecycle.sprite_controls import _stop_flipbook as _operation
        return _operation(self)


    def _flip_step(self):
        from app.lifecycle.sprite_controls import _flip_step as _operation
        return _operation(self)


    def _film_context(self, e, i):
        from app.lifecycle.sprite_controls import _film_context as _operation
        return _operation(self, e, i)


    def mark_sprite(self):
        from app.lifecycle.apply_ops import mark_sprite as _controller
        return _controller(self)


    def apply_sprite(self):
        from app.lifecycle.apply_ops import apply_sprite as _controller
        return _controller(self)


    def export_frames(self):
        from app.lifecycle.apply_ops import export_frames as _controller
        return _controller(self)


    def _ask_png_origin(self, path):
        from app.lifecycle.apply_ops import _ask_png_origin as _controller
        return _controller(self, path)


    def import_frame(self, append):
        from app.lifecycle.atlas_frame_ops import import_frame as _controller
        return _controller(self, append)


    def relayout_frame(self):
        from app.lifecycle.apply_ops import relayout_frame as _controller
        return _controller(self)


    def delete_frame(self):
        from app.lifecycle.apply_ops import delete_frame as _controller
        return _controller(self)


    def export_atlas(self):
        from app.lifecycle.apply_ops import export_atlas as _controller
        return _controller(self)


    def import_atlas(self):
        from app.lifecycle.apply_ops import import_atlas as _controller
        return _controller(self)


    def edit_palette(self):
        from app.lifecycle.apply_ops import edit_palette as _controller
        return _controller(self)


    def _palette_done(self, text):
        from app.lifecycle.apply_ops import _palette_done as _controller
        return _controller(self, text)


    # ============================================================== archive
    def populate_archive(self):
        from app.lifecycle.archive_navigation import populate_archive as _controller
        return _controller(self, hx=hx)

    def _selected_member(self):
        from app.lifecycle.archive_navigation import _selected_member as _controller
        return _controller(self)

    def _table_details(self, ins, path, tv):
        from app.lifecycle.archive_navigation import _table_details as _controller
        return _controller(self, ins, path, tv)

    def _member_details(self):
        """Render original archive-member diagnostics with archive presenter."""
        from app.inspectors.archive_member import render_archive_member_details
        return render_archive_member_details(self, hx)


    def extract_member(self):
        from app.lifecycle.apply_ops import extract_member as _controller
        return _controller(self)


    def replace_member(self):
        from app.lifecycle.apply_ops import replace_member as _controller
        return _controller(self)


    def add_member(self):
        from app.lifecycle.apply_ops import add_member as _controller
        return _controller(self)


    def remove_member(self):
        from app.lifecycle.apply_ops import remove_member as _controller
        return _controller(self)


    def after_archive_edit(self):
        from app.lifecycle.apply_ops import after_archive_edit as _controller
        return _controller(self)


    def rebuild_check(self):
        from app.lifecycle.archive_navigation import rebuild_check as _controller
        return _controller(self)


def main():
    import argparse
    ap = argparse.ArgumentParser(description='JUS Editor')
    ap.add_argument('--data', default=None, help='data root (default: JUS_DATA / JUS_DATA_ROOT or the project data folder)')
    a = ap.parse_args()
    EditorApp(a.data).mainloop()


if __name__ == '__main__':
    main()
