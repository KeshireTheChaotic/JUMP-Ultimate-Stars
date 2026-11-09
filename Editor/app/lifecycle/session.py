"""Original Tk editor document and viewer state initialization (R08).

Must be invoked only after Tk and theme boot, immediately before menu
construction. Never reorder source-bound variables or user callbacks.
"""
from __future__ import annotations
import tkinter as tk
from app.history import History
from jus_formats import almt,dsig as dsigmod,dstx as dstxmod
from jus_package.project import DataRoot
from jus_package.resources import ResourceIndex

def initialize_editor_state(editor):
    # document state
    editor.root_data: DataRoot | None = None
    editor.container: str | None = None
    editor.scope: list[str] = []
    editor.index: ResourceIndex | None = None
    editor.almt_path: str | None = None
    editor.almt: almt.AlmtFile | None = None
    editor.almt_dirty = False
    editor._clean: dict = {}          # undo doc -> bytes at the last load/apply (clears dirty on undo)
    editor.move: almt.Move | None = None
    editor.sprite_path: str | None = None
    editor.sprite_g_path: str | None = None
    editor.sprite_d: dstxmod.DstxFile | None = None
    editor.sprite_g: dsigmod.DsigFile | None = None
    editor.sprite_dirty = False
    editor._sprite_paths: dict[str, str] = {}
    editor.history = History()
    # animation view state
    editor.tick = 0
    editor.playing = False
    editor._play_job = None
    editor.loop = tk.BooleanVar(value=True)
    editor.speed = tk.StringVar(value='1×')
    editor.show_collision = tk.BooleanVar(value=True)
    editor.show_ai_profile = tk.BooleanVar(value=True)    # chr/ai AIPM boxes for the move's input selector
    editor._ai_profiles = {}                               # cid -> AttackProfile | None
    editor._move_xrefs = None                               # read-only BIN/ALMT/Koma lookup
    editor._move_xrefs_error = ''
    editor.show_effects = tk.BooleanVar(value=True)      # pursuer (chara_action 13/14)
    editor.show_spawns = tk.BooleanVar(value=True)       # GenerateID effects
    editor.show_shot_sources = tk.BooleanVar(value=True) # source ALMT frames
    editor.show_shot_repeat_model = tk.BooleanVar(value=True) # no-contact cardinal source model
    editor.isolate_selected_spawn = tk.BooleanVar(value=False)  # viewport diagnostic, not saved
    editor.show_effect_marks = tk.BooleanVar(value=True)
    editor.effect_layer = tk.StringVar(value='Front')    # viewport occlusion override; high-first submission verified
    editor.parent_link_preview = tk.BooleanVar(value=True)  # owner translation only; no scale/facing
    editor.effect_teardown = tk.BooleanVar(value=True)   # chara_action(4/5) tear GN effects down
    editor._teardowns = {}
    # NoteTrack physics (jus_package.motion) and sound cues (jus_package.sounds)
    editor.show_motion = tk.BooleanVar(value=True)       # trajectory overlay
    editor.root_motion = tk.BooleanVar(value=True)      # move the character by the simulated offset
    editor.facing_left = tk.BooleanVar(value=False)
    editor.motion_floor = tk.BooleanVar(value=True)
    editor._motion = None
    editor._cues = []
    editor._sounds = None
    editor.sound_form = tk.StringVar(value='Auto')       # preview choice for base-archive 0x0402 cues
    editor._sound_koma_card = None              # original Koma chosen as sound form, if known
    editor._audio = None
    editor.sound_enabled = tk.BooleanVar(value=True)
    editor._audio_request = 0
    editor.show_onion = tk.BooleanVar(value=False)
    editor.pursuer_choice = tk.StringVar(value='A')
    editor.pursuer_motion_preview = tk.StringVar(value='Follow (traced)')
    editor.pursuer_start_seed = tk.StringVar(value='First target')
    editor.sel_track: tuple[int, int] | None = None
    editor.sel_key: int | None = None
    editor.sel_virtual: dict | None = None
    editor._collapsed: set = set()
    editor._pursuer_events = ()
    editor._effect_moves = {}
    editor._common_tables = None      # [(path, AlmtFile)] from efc/*.aar, cached per data root
    editor._effect_table_error = ''
    editor._frame_cache: dict = {}
    # sprite view state
    editor.frame_i: int | None = None
    editor.piece_i: int | None = None
    editor.show_pieces = tk.BooleanVar(value=True)
    editor.show_sprite_onion = tk.BooleanVar(value=False)
    editor.bank_override = tk.StringVar(value='Auto')
    editor.flip_fps = tk.StringVar(value='12')
    editor.flip_playing = False
    editor._piece_drag = None
    editor.status = tk.StringVar(value='Open a data root to begin.')
    editor.workspace = 'animation'
