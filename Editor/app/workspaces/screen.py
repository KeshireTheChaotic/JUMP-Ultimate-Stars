"""Screen Editor: metadata-backed scene navigation and resource composition.

Scenes mode shows native scene IDs, typed transitions and verified UI widgets
at their traced (immutable) origins; original DSTX/DSIG/ALMT resource frames
can be selected in the composed viewport and opened in the existing Sprite
editor. Runtime hardware screen routing is still inferred where noted.

Screens mode retains the ALTM/DSIG background preview (slot, screen and scroll
are not persisted). Elements mode retains exact source sprite-frame and
DSTX 0x05/0x06 tile-panel inspection without invented placements.
"""
from __future__ import annotations

import re
import tkinter as tk
from tkinter import ttk

from PIL import Image, ImageTk

from jus_package import scenes, screencomposition, screenvariants, screenextras, sourceassets, sourceauthority, nativescenes
from jus_formats import infotext, aft
from jus_package.project import join, split

from .. import theme as T
from ..widgets.layers import LayerList
from .base import SuiteWorkspace

SW, SH, GAP = 256, 192, 28
ORIGIN = {'Top': (0, 0), 'Bottom': (0, SH + GAP)}


class ScreenWorkspace(SuiteWorkspace):
    key = 'screen'
    title = 'Screen'
    browser_title = 'Screens'

    def __init__(self, app, host, browser_host, k):
        self.archive: str | None = None
        self.layers: list[scenes.Layer] = []
        self.images: dict[str, Image.Image | None] = {}
        self.cfg: dict[str, dict] = {}          # name -> {screen, sx, sy, visible}
        self.order: list[str] = []
        self.sel: str | None = None
        self.selected_resource: int | None = None
        self.sprite_info = None
        self.sprite_dtx = None
        self.sprite_source = None
        self.sprite_image = None
        self.sprite_error: str | None = None
        self.sprite_frame = tk.StringVar(value='0')
        self.layout_panel_index = tk.StringVar(value='0')
        self.selected_layout = None
        self.layout_image = None
        self.layout_render_info = None
        self.show_outside = tk.BooleanVar(value=False)
        self.mode = tk.StringVar(value='Scenes')
        self.scene_id: int | None = None
        self._scene_manifest = None
        self._scene_by_id: dict[int, dict] = {}
        self._scene_edges: dict[int, list] = {}
        self._scene_widgets = []
        self._scene_extras = []
        self._selected_runtime_character: int | None = None
        self.selected_widget_id: int | str | None = None
        self.scene_variant = tk.StringVar(value='')
        self.scene_series = tk.StringVar(value='')
        self._variant_options: dict[str, str] = {}
        self._selected_explanation: str | None = None
        self._explanation_display = tk.StringVar(value='')
        self._text_vars: list[tk.StringVar] = []
        self._aft_font = None
        self._aft_caption_font = None
        self._aft_source = None
        self._element_paths = None
        self._code_refs = {}
        self._atlas_photos = []
        super().__init__(app, host, browser_host, k)

    # ------------------------------------------------------------ layout
    def build(self, host):
        ws = self.standard_layout(host, layers=True, bottom_ratio=0.7)
        h = self.view_panel.header
        for choice in ('Scenes', 'Screens', 'Elements'):
            ttk.Radiobutton(h, text=choice, value=choice, variable=self.mode,
                            command=self._mode_changed).pack(side='left', padx=3)
        ttk.Label(h, text='Variant').pack(side='left', padx=(8, 2))
        self.variant_combo = ttk.Combobox(h, textvariable=self.scene_variant,
                                          state='disabled', width=25)
        self.variant_combo.pack(side='left', padx=2)
        self.variant_combo.bind('<<ComboboxSelected>>', self._scene_variant_changed)
        ttk.Label(h, text='Series').pack(side='left', padx=(8, 2))
        self.series_combo = ttk.Combobox(h, textvariable=self.scene_series,
                                         state='disabled', width=14)
        self.series_combo.pack(side='left', padx=2)
        self.series_combo.bind('<<ComboboxSelected>>', self._scene_variant_changed)
        ttk.Button(h, text='Edit selected sprite', style='Accent.TButton',
                   command=self._edit_selected_widget).pack(side='left', padx=(8, 2))
        ttk.Button(h, text='Edit source data…', style='Accent.TButton',
                   command=self._edit_source_assets).pack(side='left', padx=2)
        ttk.Button(h, text='Edit InfoDeck text…', style='Tool.TButton',
                   command=self._edit_info_text).pack(side='left', padx=2)
        ttk.Button(h, text='Rebuild scene', style='Tool.TButton',
                   command=self._refresh_scene_widgets).pack(side='left', padx=2)
        ttk.Label(h, text='Atlas cell').pack(side='left', padx=(8, 2))
        self.frame_spin = ttk.Spinbox(h, from_=0, to=0, width=5,
                                      textvariable=self.sprite_frame, command=self._frame_changed)
        self.frame_spin.pack(side='left', padx=2)
        self.frame_spin.bind('<Return>', self._frame_changed)
        self.frame_spin.bind('<FocusOut>', self._frame_changed)
        ttk.Label(h, text='Tile panel').pack(side='left', padx=(8, 2))
        self.panel_spin = ttk.Spinbox(h, from_=0, to=0, width=5, state='disabled',
                                      textvariable=self.layout_panel_index,
                                      command=self._layout_panel_changed)
        self.panel_spin.pack(side='left', padx=2)
        self.panel_spin.bind('<Return>', self._layout_panel_changed)
        self.panel_spin.bind('<FocusOut>', self._layout_panel_changed)
        ttk.Checkbutton(h, text='Whole layers', variable=self.show_outside, style='Toolbar.TCheckbutton',
                        command=lambda: self.view.redraw()).pack(side='right', padx=6)
        ttk.Button(h, text='Frame', style='Tool.TButton', command=self.frame_view).pack(side='right', padx=6)
        self.view = self.make_viewport(on_draw=self._draw, on_press=self._scene_press,
                                       origin_frac=(0.3, 0.06), zoom=2)
        self.view.canvas.bind('<Double-Button-1>', self._scene_double_click)
        self.view.show_grid.set(False)
        self.layer_list = LayerList(self.layers_panel.body, on_select=self._select_layer, on_toggle=self._toggle)
        self.layer_list.pack(fill='both', expand=True, padx=4, pady=4)
        page = self.bottom.add('resources', 'Resources')
        from ..theme import tree as mktree
        rf, self.res_tree = mktree(page, ('name', 'type', 'size', 'decoder', 'evidence'),
                                   (220, 60, 70, 300, 90), height=6, style='Mono.Treeview')
        rf.pack(fill='both', expand=True, padx=4, pady=4)
        self.res_tree.tag_configure('Unknown', foreground=T.BAD)
        self.res_tree.tag_configure('Inferred', foreground=T.WARN)
        self.res_tree.bind('<Double-1>', self._open_resource)
        self.res_tree.bind('<<TreeviewSelect>>', self._select_resource)
        # ARM9 symbols do not necessarily correspond to visible resources.
        # Keep them in a separate inspector table, with original code paths.
        code_page = self.bottom.add('arm9_sources', 'ARM9 Code References')
        sf,self.code_tree=mktree(code_page,
                   ('asset','function','line','evidence'),(310,360,55,110),
                   height=7,style='Mono.Treeview')
        sf.pack(fill='both',expand=True,padx=4,pady=4)
        self.code_tree.bind('<<TreeviewSelect>>',self._select_code_reference)
        self.code_tree.bind('<Double-1>',self._open_code_reference)
        act=ttk.Frame(code_page)
        act.pack(fill='x',padx=6,pady=3)
        ttk.Button(act,text='Edit selected source asset bytes…',
                   command=self._open_code_reference).pack(side='left')
        self.code_tree.tag_configure('Unknown',foreground=T.WARN)
        atlas = self.bottom.add('atlas', 'Element cell atlas')
        self.atlas_canvas = tk.Canvas(atlas, bg=T.CANVAS_BG, highlightthickness=0)
        self.atlas_scroll = ttk.Scrollbar(atlas, orient='vertical', command=self.atlas_canvas.yview)
        self.atlas_canvas.configure(yscrollcommand=self.atlas_scroll.set)
        self.atlas_scroll.pack(side='right', fill='y')
        self.atlas_canvas.pack(side='left', fill='both', expand=True)
        self.atlas_canvas.bind('<Button-1>', self._atlas_click)
        self.problems = self.problems_page()
        return ws

    def build_browser(self, parent):
        self.tree = self.browser_tree(parent, ('n',), (40,), ('Layers',))
        self.tree.bind('<<TreeviewSelect>>', self._browse)
        self.tree.bind('<<TreeviewOpen>>', self._expand)
        self.filter_var.trace_add('write', lambda *_: self.populate())

    # ------------------------------------------------------------ browser
    def on_root(self):
        root = self.app.root_data
        # Screens mode: archives with backgrounds; data-only and sprite-only archives are excluded
        self._archives = scenes.screen_archives(root) if root else []
        self._kind = {p: scenes.classify_archive(root, p) for p in self._archives} if root else {}
        self._element_roots = scenes.screen_archives(root, ('screen', 'elements')) if root else []
        self._nested_catalog = None
        self._element_paths = None
        self._scene_manifest = screencomposition.load_manifest()
        self._scene_by_id = {int(v['id']): v for v in self._scene_manifest['scenes']}
        self._scene_edges = {}
        for edge in self._scene_manifest['edges']:
            self._scene_edges.setdefault(int(edge['from']), []).append(edge)
        self.populate()
        if self.mode.get() == 'Scenes' and self.app.root_data:
            self.load_scene(3)
            if self.tree.exists('scene:3'):
                self.tree.selection_set('scene:3')
                self.tree.see('scene:3')

    def _mode_changed(self):
        self.scene_variant.set('')
        self.scene_series.set('')
        self.variant_combo.configure(values=(),state='disabled')
        self.series_combo.configure(values=(),state='disabled')
        self.archive = None
        self.layers, self.images, self.cfg, self.order, self.sel = [], {}, {}, [], None
        self._clear_sprite()
        self.scene_id = None
        self._scene_widgets = []
        self.selected_widget_id = None
        self.populate()
        if self.mode.get() == 'Scenes' and self.app.root_data:
            self.load_scene(3)
            self.tree.selection_set('scene:3')
        if hasattr(self, 'view'):
            self.view.redraw()

    def _element_archives(self):
        if self._element_paths is not None:
            return self._element_paths
        paths = list(getattr(self, '_element_roots', ()))
        try:
            paths += scenes.nested_screen_archives(self.app.root_data, paths) if self.app.root_data else []
            self._element_paths = []
            for p in paths:
                try:
                    arc = self.app.root_data.archive(p)
                    if any(e.ext == '.dtx' for e in arc.entries):
                        self._element_paths.append(p)
                except (ValueError, KeyError, OSError):
                    continue
        except (ValueError, KeyError, OSError):
            self._element_paths = paths
        return self._element_paths

    def populate(self):
        t = self.tree
        t.delete(*t.get_children())
        flt = self.filter_var.get().strip().lower()
        groups = {}
        if self.mode.get() == 'Scenes':
            self._populate_scene_graph(flt)
            return
        if self.mode.get() == 'Elements':
            paths = self._element_archives()
        else:
            paths = list(getattr(self, '_archives', ()))
            if flt:
                if self._nested_catalog is None and self.app.root_data:
                    self._nested_catalog = scenes.nested_screen_archives(self.app.root_data, paths)
                paths += self._nested_catalog or []
        for path in paths:
            if flt and flt not in path.lower():
                continue
            folder = path.split('/')[0]
            if self.mode.get() == 'Screens' and getattr(self, '_kind', {}).get(path.split('|')[0]) == 'library':
                folder = 'Picture libraries'
            if folder not in groups:
                groups[folder] = t.insert('', 'end', 'f:' + folder, text=folder, open=bool(flt))
            label = path.split('|')[-1].split('/')[-1]
            if flt and '|' in path:
                label = path.split('|')[0].split('/')[-1] + ' › ' + label
            iid = t.insert(groups[folder], 'end', path, text=label, values=('',))
            if self.mode.get() == 'Screens' and not flt:
                t.insert(iid, 'end', path + '|…', text='…')

    def _expand(self, _e=None):
        iid = self.tree.focus()
        kids = self.tree.get_children(iid)
        if len(kids) == 1 and kids[0].endswith('|…'):
            self.tree.delete(kids[0])
            try:
                arc = self.app.root_data.archive(iid)
                for e in arc.entries:
                    if e.ext == '.aar':
                        sub = join(iid, e.name)
                        self.tree.insert(iid, 'end', sub, text=e.name.split('/')[-1], values=('',))
                        self.tree.insert(sub, 'end', sub + '|…', text='…')
            except (ValueError, KeyError, OSError) as exc:
                self.app.status.set(f'{iid}: {exc}')

    def _browse(self, _e=None):
        sel = self.tree.selection()
        if not sel:
            return
        selected = sel[0]
        if self.mode.get() == 'Scenes':
            if selected.startswith('scene:'):
                self.load_scene(int(selected.split(':', 1)[1]))
            elif selected.startswith('edge:'):
                try:
                    _tag, _source, index = selected.split(':')
                    edge = self._scene_edges[int(_source)][int(index)]
                    if edge.get('to') is not None:
                        self.load_scene(int(edge['to']))
                except (ValueError, KeyError, IndexError):
                    pass
            return
        if not selected.startswith('f:') and not selected.endswith('|…'):
            if selected != self.archive:
                self.load(selected)

    def _populate_scene_graph(self, flt=''):
        t = self.tree
        all_scenes = self._scene_by_id
        for sid, scene in sorted(all_scenes.items()):
            native = nativescenes.scene_info(sid)
            renderer_kind = 'BG' if native['background_variants'] else 'runtime'
            label = f'{sid:02d}  {scene["name"]} [{renderer_kind}]'
            outgoing = self._scene_edges.get(sid, [])
            if flt and flt not in label.lower() and not any(
                    flt in str(e.get('action', '')).lower() for e in outgoing):
                continue
            iid = f'scene:{sid}'
            t.insert('', 'end', iid, text=label, values=(str(len(scene.get('widgets', []))),),
                     open=bool(flt or sid == self.scene_id))
            for ix, edge in enumerate(outgoing):
                target = edge.get('to')
                if target is None:
                    continue
                target_label = all_scenes.get(target, {}).get('name', 'unresolved')
                action = edge.get('action', f'selector {edge.get("selector")}')
                method = edge.get('method', '')
                t.insert(iid, 'end', f'edge:{sid}:{ix}',
                         text=f'{action} → {target:02d} {target_label} [{method}]',
                         values=('',))

    def _configure_scene_variants(self, scene):
        variants = screenvariants.variants_for_scene(int(scene['id']))
        self._variant_options = {v['label']: v['id'] for v in variants}
        options = list(self._variant_options)
        if self.scene_variant.get() not in options:
            self.scene_variant.set(options[0] if options else '')
        self.variant_combo.configure(values=options,
                                     state='readonly' if len(options) > 1 else 'disabled')
        sid = int(scene['id'])
        current_id = self._variant_options.get(self.scene_variant.get())
        if sid in (3, 7, 21, 34) or (sid == 32 and current_id == 'comics'):
            kind = 'comic' if sid == 32 else 'info'
            choices = ['(selected by game at runtime)']
            try:
                choices.extend(screenvariants.series_codes(self.app.root_data, kind))
            except (ValueError, OSError, KeyError):
                pass
            self.series_combo.configure(values=choices, state='readonly')
            if self.scene_series.get() not in choices:
                self.scene_series.set(choices[0])
        else:
            self.series_combo.configure(values=(), state='disabled')
            self.scene_series.set('')

    def _scene_variant_changed(self, _event=None):
        if self.mode.get() == 'Scenes' and self.scene_id is not None:
            self.load_scene(self.scene_id, preserve_selection=True)

    def _native_aft_font(self):
        """Load the original AFT/DSIG pixels, not an installed substitute font."""
        root = self.app.root_data
        if root is None:
            raise ValueError('No original game data loaded')
        if self._aft_source is not root or self._aft_font is None:
            self._aft_font = aft.parse(root.read('font/jskfont.aft'))
            self._aft_caption_font = None
            self._aft_source = root
        return self._aft_font

    def _scene_text_id(self):
        if self.mode.get() != 'Scenes' or self.scene_id is None:
            return None
        mappings = dict(screenvariants.SCENE_TEXT_IDS.get(self.scene_id, ()))
        if self.scene_id in (3, 21):
            if isinstance(self.selected_widget_id,str) and self.selected_widget_id.startswith('label:'):
                return mappings.get(int(self.selected_widget_id.split(':',1)[1]))
            return mappings.get(self.selected_widget_id)
        return mappings.get(self._selected_explanation)

    def _scene_text_selected(self, _event=None):
        choices = getattr(self, '_explanation_options', {})
        self._selected_explanation = choices.get(self._explanation_display.get())
        self.refresh_inspector()
        self.view.redraw()

    def _apply_scene_explanation(self, message_id: int):
        root = self.app.root_data
        if root is None or not self._text_vars:
            return
        lines = tuple(v.get() for v in self._text_vars)
        try:
            count = infotext.stage_shared_explanation(root, message_id, lines)
        except (ValueError, KeyError, UnicodeError, IndexError) as exc:
            from tkinter import messagebox
            messagebox.showerror('Explanation text', str(exc), parent=self.app)
            return
        self.app.status.set(
            f'Message {message_id}: {count} original info tables staged; '
            'use Save to commit the modified InfoDeck.aar.')
        self.refresh_inspector()
        self.view.redraw()

    def _load_source_only_scene_layers(self, scene):
        """Render verified loose ALTM/DSIG BGs when there is no .aar scene container.

        Only native instances resolved from the original ARM9 constructor are
        admitted here. Never fabricate a nonexistent scene archive to load them.
        """
        root=self.app.root_data
        self.archive=None
        self.layers,self.images,self.cfg,self.order,self.sel=[],{},{},[],None
        self._clear_sprite()
        self._probs=[]
        try:
            choice=self._variant_options.get(self.scene_variant.get())
            traced=screenvariants.scene_layers(root,scene,choice)
            for layer,cfg in traced:
                img,problems=scenes.render_layer(
                    root,layer,palette_override_paths=cfg.get('palette_overrides',()))
                self.layers.append(layer)
                self.images[layer.name]=img
                self.cfg[layer.name]=dict(cfg,visible=cfg['visible'] and img is not None)
                self.order.append(layer.name)
                self._probs.extend((f'{layer.name}: {issue}','warn')
                                   for issue in layer.problems+problems)
            self.order.sort(key=lambda name:self.cfg[name].get('preview_order',0))
            self.sel=self.order[0] if self.order else None
            if not traced:
                native=nativescenes.scene_info(int(scene['id']))
                self._probs.append((
                    'Native renderer: '+native['native_family']+'. '
                    'No original-code-backed static ALTM/DIG map placement. '
                    'Inspect the source resources or runtime callback trace.', 'warn'))
        except (ValueError,KeyError,IndexError,OSError) as exc:
            self._probs.append((f'Source-backed scene composition failed: {exc}','bad'))
        self._refresh_scene_widgets(redraw=False)
        self.refresh(frame=True)

    def load_scene(self, scene_id: int, preserve_selection: bool = False):
        scene = self._scene_by_id.get(scene_id)
        if scene is None:
            return
        same_scene = self.scene_id == scene_id
        if not preserve_selection or not same_scene:
            self.scene_variant.set('')
            self.scene_series.set('')
            self._selected_explanation = None
        old_widget = self.selected_widget_id if preserve_selection and same_scene else None
        self.scene_id = scene_id
        self._selected_runtime_character = None
        self._configure_scene_variants(scene)
        if scene_id==3 and self._variant_options.get(self.scene_variant.get())=='captured':
            if not self.scene_series.get() or self.scene_series.get().startswith('('):
                self.scene_series.set('jp')  # original 0-series BG name, while info text table is jump.bin
        self.selected_widget_id = old_widget if old_widget is not None else (
            0 if scene_id in (3, 21) else None)
        if scene_id in (7, 34, 29) and self._selected_explanation is None:
            self._selected_explanation = (
                'rule-0' if scene_id==7 else 'option-24' if scene_id==34 else 'jpower-koma-list')
        self._scene_widgets = []
        self._scene_extras = []
        archive = scene.get('archive')
        if archive and self.app.root_data and self.app.root_data.exists(archive):
            self.load(archive)
        else:
            self._load_source_only_scene_layers(scene)
        self.view_panel.set_title(f'Viewport — {scene_id:02d} {scene["name"]}')
        self._fill_code_references(scene_id)
        self.refresh_inspector()

    def _refresh_scene_widgets(self, redraw=True):
        self._scene_widgets = []
        self._scene_extras = []
        if self.mode.get() == 'Scenes' and self.scene_id is not None and self.app.root_data:
            scene = self._scene_by_id.get(self.scene_id, {})
            variant = self._variant_options.get(self.scene_variant.get())
            effective = screenextras.scene_widgets_override(scene,variant)
            self._scene_widgets, failures = screencomposition.visible_widgets(
                self.app.root_data,effective)
            self._scene_extras, extra_failures = screenextras.visible_extras(
                self.app.root_data,scene,variant)
            failures.extend(extra_failures)
            if failures:
                self._probs = list(getattr(self, '_probs', [])) + [(m, 'warn') for m in failures]
        if redraw and hasattr(self, 'view'):
            self.refresh()

    def on_show(self):
        super().on_show()
        if self.mode.get() == 'Scenes' and self.scene_id is not None:
            # Original archive may have been edited with the main Sprite workspace.
            self._refresh_scene_widgets()

    def _scene_selected(self):
        return next((w for w in self._scene_widgets + self._scene_extras
                     if w.spec['id'] == self.selected_widget_id),None)

    def _scene_press(self, wx, wy, _event=None):
        if self.mode.get() != 'Scenes':
            return
        target = None
        for item in reversed(self._scene_widgets + self._scene_extras):
            ox, oy = ORIGIN[item.screen]
            if item.contains_pixel(wx - ox, wy - oy):
                target = item
                break
        self.selected_widget_id = target.spec['id'] if target else None
        self._selected_runtime_character = None
        self.refresh_inspector()
        self.view.redraw()

    def _scene_double_click(self, _event=None):
        if self.mode.get() == 'Scenes':
            self._edit_selected_widget()

    def _edit_selected_widget(self):
        widget = self._scene_selected()
        if widget is None:
            self.app.status.set('Select a visible scene sprite before choosing Edit selected sprite.')
            return
        editor = self.app
        if (editor.sprite_dirty or editor.almt_dirty) and not editor.confirm_discard():
            return
        archive, _member = split(widget.dtx_path)[:-1], split(widget.dtx_path)[-1]
        container = join(*archive)
        editor.select_container(container)
        choice = next((label for label, path in editor._sprite_paths.items()
                       if path == widget.dtx_path), None)
        if choice is None:
            editor.status.set(f'No editable DSTX entry found for {widget.dtx_path}')
            return
        editor.sprite_combo.set(choice)
        editor.load_sprite(choice, force=True)
        editor.show_workspace('sprite')
        editor.select_frame(widget.frame)
        editor.status.set(f'Editing original sprite {widget.dtx_path}; immutable scene layout unchanged.')

    def _fill_code_references(self,scene_id):
        t=self.code_tree
        t.delete(*t.get_children())
        self._code_refs={}
        record=sourceauthority.scene_sources(scene_id)
        n=0
        for ref in record['asset_references']:
            paths=ref['asset_paths'] or [None]
            for path in paths:
                key=f'arm9ref:{n}'
                n+=1
                self._code_refs[key]={'path':path,'source':ref['source'],
                     'line':ref['line'],'symbol':ref['symbol'],
                     'depth':ref['code_call_depth']}
                status='Referenced' if path is not None else 'Unresolved asset'
                t.insert('','end',key,
                         values=(path or ref['symbol'],
                                 ref['source'],ref['line'],status),
                         tags=('Unknown',) if path is None else ())

    def _select_code_reference(self,_event=None):
        rows=self.code_tree.selection()
        entry=self._code_refs.get(rows[0]) if rows else None
        if entry:
            source=entry['source']+'#L'+str(entry['line'])
            self.app.status.set(
                f'ARM9 source: {source} | symbol {entry["symbol"]}. '
                'Code reference is not proof of on-screen visibility.')

    def _open_code_reference(self,_event=None):
        rows=self.code_tree.selection()
        ref=self._code_refs.get(rows[0]) if rows else None
        if not ref:return
        source=ref['source']+'#L'+str(ref['line'])
        path=ref['path']
        if path is None or not self.app.root_data.exists(path):
            self.app.status.set(f'Unresolved code-only asset symbol: {source}; '
                                'no original resource path can yet be edited.')
            return
        from ..widgets.source_asset_editor import SourceAssetEditor
        SourceAssetEditor(self.app,self.app.root_data,[path],
                          on_staged=self._asset_staged)

    def _scene_source_paths(self):
        root=self.app.root_data
        if root is None:
            return []
        selected=self._scene_selected()
        current=next((l for l in self.layers if l.name == self.sel),None)
        first=[]
        if selected:
            first.extend(sourceassets.edit_paths_for_widget(selected,root))
        if current:
            first.extend(sourceassets.edit_paths_for_layer(current,self.cfg[current.name]))
        if self.selected_resource is not None and self.archive:
            try:
                member=root.archive(self.archive).entries[self.selected_resource]
                first.append(join(self.archive,member.name))
            except (KeyError,IndexError,ValueError,OSError):
                pass
        sid=self.scene_id
        if sid is not None:
            first.extend(sourceauthority.code_asset_paths(root,sid))
            if sid in (3,7,21,34):
                first.append(infotext.INFO_CANONICAL)
            if sid==3 and self._variant_options.get(self.scene_variant.get())=='captured':
                # These source archives are linked by original CharaData/roster
                # code. Only character *selection* comes from the savestate.
                for char in screenextras.load_metadata()['snapshot']['characters']:
                    for container in (char['resource_archive'],char['source_texture_archive']):
                        if root.exists(container):
                            first.extend(sourceassets.archive_member_paths(
                                root,container,depth=0,limit=300))
        if self.archive and root.exists(self.archive):
            first.extend(sourceassets.archive_member_paths(root,self.archive))
        if sid is not None:
            scene=self._scene_by_id.get(sid,{})
            alt_archive=scene.get('archive')
            if alt_archive and alt_archive != self.archive and root.exists(alt_archive):
                first.extend(sourceassets.archive_member_paths(root,alt_archive))
        return list(dict.fromkeys(p for p in first if root.exists(p)))

    def _edit_source_assets(self):
        root=self.app.root_data
        if root is None:
            return
        paths=self._scene_source_paths()
        if not paths:
            from tkinter import simpledialog
            chosen=simpledialog.askstring('Original JUS asset path',
                'Enter a game-data-relative resource path (nested archives separated by |):',
                parent=self.app)
            if not chosen:
                return
            try:
                sourceassets.validate_asset_path(chosen)
                if not root.exists(chosen):
                    raise FileNotFoundError(chosen)
                paths=[chosen]
            except (ValueError,KeyError,OSError) as exc:
                from tkinter import messagebox
                messagebox.showerror('Source asset',str(exc),parent=self.app)
                return
        from ..widgets.source_asset_editor import SourceAssetEditor
        SourceAssetEditor(self.app,root,paths,on_staged=self._asset_staged)

    def _edit_info_text(self):
        root=self.app.root_data
        if root is None:
            return
        from ..widgets.source_asset_editor import InfoRecordEditor
        message=self._scene_text_id()
        InfoRecordEditor(self.app,root,on_staged=self._asset_staged,
                         record=message if message is not None else 0)

    def _asset_staged(self,path):
        self.app.update_dirty()
        self.app.status.set(f'Original source asset staged: {path}. Engine layout unchanged; use Save to commit.')
        if self.mode.get()=='Scenes' and self.scene_id is not None:
            self.load_scene(self.scene_id,preserve_selection=True)
        elif self.archive:
            self.load(self.archive)

    def load(self, path):
        self.archive = path
        self.layers, self.images, self.cfg, self.order, self.sel = [], {}, {}, [], None
        self.selected_resource = None
        self._clear_sprite()
        probs = []
        traced = None
        if self.mode.get() == 'Scenes' and self.scene_id is not None:
            variants = screenvariants.variants_for_scene(self.scene_id)
            if variants:
                try:
                    self._configure_scene_variants(self._scene_by_id[self.scene_id])
                    series = self.scene_series.get()
                    series = series if series and not series.startswith('(') else None
                    traced = screenvariants.scene_layers(
                        self.app.root_data, self._scene_by_id[self.scene_id],
                        self._variant_options.get(self.scene_variant.get()), series)
                    self.layers = [layer for layer, _cfg in traced]
                except (ValueError, KeyError, OSError) as exc:
                    self.layers, traced = [], []
                    probs.append((f'Native BG trace: {exc}', 'bad'))
        if traced is None:
            if self.mode.get() == 'Scenes':
                # Original ARM9 does not establish the BG binding here:
                # do not rasterize a guessed pile of unrelated ALTM members.
                # Inspect the original source assets in Screens/Elements or
                # the ROM Code References browser, but never imply visibility.
                self.layers=[]
                traced=[]
                probs.append(('Native BG assignment not traced in ARM9. '
                              'Original source resources remain editable; '
                              'no filename-guessed layers are displayed.', 'warn'))
            elif self.mode.get() == 'Elements':
                self.layers=[]
                traced=[]
            else:
                try:
                    self.layers=scenes.find_layers(self.app.root_data,path)
                except (ValueError,KeyError,OSError) as exc:
                    probs.append((str(exc),'bad'))
        if self.mode.get() == 'Elements':
            self.layers = []
            traced = []
        evidence_cfg = {l.name: c for l, c in traced} if traced is not None else {}
        for l in self.layers:
            cfg = dict(evidence_cfg.get(l.name) or
                       {'screen': 'Hidden' if self.mode.get() == 'Scenes' else scenes.default_screen(l.name),
                        'sx': 0,'sy': 0,'visible': self.mode.get() != 'Scenes'})
            img, p = scenes.render_layer(self.app.root_data,l,
                                         palette_override_paths=cfg.get('palette_overrides',()))
            self.images[l.name] = img
            cfg['visible'] = cfg['visible'] and img is not None
            self.cfg[l.name] = cfg
            self.order.append(l.name)
            probs += [(f'{l.name}: {x}', 'warn') for x in l.problems + p]
        if traced is not None:
            # ARM9 FUN_02042D14 initializes BGxCNT priority bits;
            # priority 0 is frontmost. Runtime callbacks can override it.
            self.order.sort(key=lambda n: self.cfg[n].get('preview_order',
                                     -self.cfg[n].get('bg_slot',-1)))
        self.sel = self.order[0] if self.order else None
        # Nested UI-object archives normally have DSTX + ALMT but no ALTM.
        # Automatically preview the first drawable sprite instead of leaving
        # the viewport blank when the archive loads successfully.
        if self.mode.get() == 'Elements':
            try:
                arc = self.app.root_data.archive(path)
                first = next((i for i, e in enumerate(arc.entries)
                              if e.ext == '.dtx' and e.payload()[:4] == b'DSTX'
                              and e.payload()[5] & 0x7f == 3), None)
                if first is None:
                    # Archives containing only panel maps should open their
                    # actual tile grid rather than a fabricated sprite preview.
                    first = next((i for i, e in enumerate(arc.entries)
                                  if e.ext == '.dtx' and e.payload()[:4] == b'DSTX'
                                  and e.payload()[5] in (5, 6)), None)
                if first is not None:
                    self.selected_resource = first
                    self._load_sprite(first)
                    self._load_layout(first)
            except (ValueError, KeyError, OSError, IndexError) as exc:
                probs.append((f'Sprite preview: {exc}', 'warn'))
        if self.tree.exists(path):
            self.tree.set(path, 'n', str(len(self.layers)))
        self._fill_resources(probs)
        if self.selected_resource is not None and self.res_tree.exists(str(self.selected_resource)):
            self.res_tree.selection_set(str(self.selected_resource))
        self._probs = probs
        if self.mode.get() == 'Scenes':
            self._refresh_scene_widgets(redraw=False)
        self.refresh(frame=True)
        self.app.status.set(f'{path}: {len(self.layers)} background layers')

    def _fill_resources(self, probs):
        t = self.res_tree
        t.delete(*t.get_children())
        try:
            arc = self.app.root_data.archive(self.archive)
        except (ValueError, KeyError, OSError):
            return
        for i, e in enumerate(arc.entries):
            ext = e.ext
            label, grade = scenes.STATUS.get(ext, ('unknown', 'Unknown'))
            if ext == '.dtx':
                kind = scenes.dtx_kind(e.payload())
                label = f'DSTX {kind}'
                if 'sprite pieces' in kind:
                    label += ' (atlas cells; select in Elements)'
                if 'tile panels (maps decoded' in kind:
                    grade = 'Direct'  # 4-byte descriptors verified by ARM9 loader; positioning still unknown
                elif 'dedicated' in kind or 'malformed' in kind:
                    grade = 'Unknown'
                    probs.append((f'{e.name}: {kind}', 'muted'))
            elif ext == '.atm':
                label = 'ALTM tile map (shown as a layer)'
            t.insert('', 'end', str(i), values=(e.name.split('/')[-1], ext, len(e.data), label, grade), tags=(grade,))

    def _select_resource(self, _e=None):
        chosen = self.res_tree.selection()
        try:
            self.selected_resource = int(chosen[0]) if chosen else None
        except (ValueError, TypeError):
            self.selected_resource = None
        self._load_sprite(self.selected_resource)
        self._load_layout(self.selected_resource)
        self.refresh_inspector()
        self.view.redraw()

    def _open_resource(self, _e=None):
        sel = self.res_tree.selection()
        if not sel:
            return
        arc = self.app.root_data.archive(self.archive)
        item = arc.entries[int(sel[0])]
        if item.ext == '.aar':
            self.load(join(self.archive, item.name))
        elif item.ext == '.dtx':
            self.selected_resource = int(sel[0])
            self._load_sprite(self.selected_resource)
            self._load_layout(self.selected_resource)
            self.refresh_inspector()
            self.view.redraw()

    def _load_layout(self, index):
        self.selected_layout = None
        self.layout_image = None
        self.layout_render_info = None
        self.layout_panel_index.set('0')
        if hasattr(self, 'panel_spin'):
            self.panel_spin.configure(to=0, state='disabled')
        if index is None or not self.archive:
            return
        try:
            from jus_formats.dstx import parse_layout
            entry = self.app.root_data.archive(self.archive).entries[index]
            blob = entry.payload()
            if entry.ext != '.dtx' or blob[:4] != b'DSTX' or blob[5] not in (5, 6):
                return
            self.selected_layout = parse_layout(blob)
            n = len(self.selected_layout.panel_maps)
            self.panel_spin.configure(to=max(0, n-1), state='normal' if n else 'disabled')
            self._render_layout_panel()
        except (ValueError, IndexError, KeyError, OSError) as exc:
            self.sprite_error = str(exc)

    def _render_layout_panel(self):
        self.layout_image = None
        self.layout_render_info = None
        if self.selected_layout is None:
            return
        try:
            idx = int(self.layout_panel_index.get())
            self.layout_image, self.layout_render_info = scenes.render_screen_tile_panel(
                self.selected_layout, idx)
            self.sprite_error = None
        except (ValueError, IndexError, OSError) as exc:
            self.sprite_error = str(exc)

    def _layout_panel_changed(self, _event=None):
        # Actual DSIG source pixels only. No guessed screen coordinates.
        self._render_layout_panel()
        self.refresh_inspector()
        if hasattr(self, 'view'):
            self.view.redraw()

    # --------------------------------------------------------- sprite preview
    def _clear_sprite(self):
        self.sprite_info = None
        self.sprite_dtx = None
        self.sprite_source = None
        self.sprite_image = None
        self.sprite_error = None
        self.sprite_frame.set('0')
        self.selected_layout = None
        self.layout_image = None
        self.layout_render_info = None
        self.layout_panel_index.set('0')
        if hasattr(self, 'panel_spin'):
            self.panel_spin.configure(to=0, state='disabled')
        self._atlas_photos = []
        if hasattr(self, 'atlas_canvas'):
            self.atlas_canvas.delete('all')
        if hasattr(self, 'frame_spin'):
            self.frame_spin.configure(to=0, state='disabled')

    def _load_sprite(self, index):
        self._clear_sprite()
        if index is None or not self.archive:
            return
        try:
            arc = self.app.root_data.archive(self.archive)
            member = arc.entries[index]
            if member.ext in ('.amt', '.dig'):
                # ALMT/DSIG are companions to a sprite, not stand-alone
                # drawables.  Show the linked DSTX resource for inspection;
                # this is frame browsing, not ALMT time-driven playback.
                stem = member.name.rsplit('.', 1)[0].lower().rstrip('_')
                paired = next((e for e in arc.entries if e.ext == '.dtx' and
                               e.name.rsplit('.', 1)[0].lower().rstrip('_') == stem), None)
                if paired is None:
                    paired = next((e for e in arc.entries if e.ext == '.dtx' and
                                   e.resource_id == member.resource_id), None)
                if paired is None:
                    return
                member = paired
            if member.ext != '.dtx' or member.payload()[:4] != b'DSTX' or \
                    (member.payload()[5] & 0x7F) != 3:
                return
            self.sprite_info, self.sprite_dtx, self.sprite_source = scenes.screen_sprite(
                self.app.root_data, self.archive, member.name)
            self.frame_spin.configure(to=max(0, self.sprite_info.frame_count - 1),
                                      state='normal' if self.sprite_info.frame_count else 'disabled')
            if self.sprite_info.frame_count:
                self.sprite_image = scenes.render_screen_sprite(self.sprite_dtx, self.sprite_source, 0)
            if hasattr(self, 'atlas_canvas'):
                self._draw_atlas()
        except (ValueError, KeyError, IndexError, OSError) as exc:
            self.sprite_error = str(exc)

    def _frame_changed(self, _e=None):
        if self.sprite_dtx is None or self.sprite_source is None:
            return
        try:
            frame = int(self.sprite_frame.get())
            self.sprite_image = scenes.render_screen_sprite(self.sprite_dtx, self.sprite_source, frame)
            self.sprite_error = None
        except (ValueError, IndexError) as exc:
            self.sprite_error = str(exc)
            self.sprite_image = None
        self._atlas_highlight()
        self.refresh_inspector()
        self.view.redraw()

    def _draw_atlas(self):
        c = self.atlas_canvas
        c.delete('all')
        self._atlas_photos = []
        if self.sprite_dtx is None or self.sprite_source is None:
            return
        # DSTX stores cell frames. This atlas is not an ALMT motion timeline.
        size, cols = 86, 9
        for i in range(min(self.sprite_info.frame_count, 256)):
            try:
                frame, left, top = scenes.render_screen_sprite(self.sprite_dtx, self.sprite_source, i)
                frame.thumbnail((66, 62))
                photo = ImageTk.PhotoImage(frame, master=c)
                self._atlas_photos.append(photo)
                x, y = (i % cols) * size, (i // cols) * size
                c.create_rectangle(x+2, y+2, x+size-3, y+size-3, outline=T.LINE, tags=('cell',))
                c.create_image(x+size//2, y+32, image=photo, tags=('cell',))
                c.create_text(x+size//2, y+73, text=str(i), fill=T.FG, tags=('cell',))
            except (ValueError, IndexError, OSError):
                continue
        c.configure(scrollregion=(0, 0, cols*size, ((min(self.sprite_info.frame_count,256)+cols-1)//cols)*size))
        self._atlas_highlight()

    def _atlas_highlight(self):
        if not hasattr(self, 'atlas_canvas'):
            return
        c = self.atlas_canvas
        c.delete('current_cell')
        try:
            i = int(self.sprite_frame.get())
        except ValueError:
            return
        size, cols = 86, 9
        x, y = (i%cols)*size, (i//cols)*size
        c.create_rectangle(x+1,y+1,x+size-2,y+size-2, outline=T.ACCENT, width=2, tags='current_cell')

    def _atlas_click(self, event):
        if self.sprite_info is None:
            return
        size, cols = 86, 9
        x = self.atlas_canvas.canvasx(event.x)
        y = self.atlas_canvas.canvasy(event.y)
        index = int(y//size)*cols + int(x//size)
        if 0 <= index < self.sprite_info.frame_count:
            self.sprite_frame.set(str(index))
            self._frame_changed()

    # ------------------------------------------------------------ view
    def _rows(self):
        title = 'Pictures (select one to view)' if self._library() else 'Backgrounds (back → front)'
        rows = [{'id': 'g', 'name': title, 'kind': 'group'}]
        for n in self.order:
            c = self.cfg[n]
            native = c.get('native_bg')
            status = (f'{c["engine"].upper()} BG{c["bg_slot"]} — '
                      + ('scrolls/animates in game; static here' if c.get('animated') else 'fixed source')) \
                     if native else f'scroll {c["sx"]},{c["sy"]}'
            rows.append({'id': n, 'parent': 'g', 'name': n, 'kind': c['screen'],
                         'visible': self._shown(n),
                         'available': self.images.get(n) is not None,
                         'status': status})
        if self.mode.get() == 'Scenes' and self.scene_id in (7, 34):
            rows.append({'id':'explanations','name':'Selector explanation modes (text)', 'kind':'group'})
            for key, msg in screenvariants.SCENE_TEXT_IDS.get(self.scene_id,()):
                try:
                    title = infotext.read_shared_explanation(self.app.root_data,msg)[0].replace('|',' ')
                except (ValueError,KeyError,IndexError,OSError):
                    title = f'Message {msg}'
                rows.append({'id':f'text:{key}','parent':'explanations','name':title,
                             'kind':'text','visible':True,'available':True,'status':f'message {msg}'})
        if self.mode.get() == 'Scenes' and self._scene_widgets:
            rows.append({'id': 'widgets', 'name': 'Widgets — code-backed origins', 'kind': 'group'})
            for w in self._scene_widgets:
                rows.append({'id': f'widget:{w.spec["id"]}', 'parent': 'widgets',
                             'name': f'{w.spec["id"]} {w.spec["name"]}',
                             'kind': w.screen, 'visible': True, 'available': True,
                             'status': f'move {w.spec["move_id"]}, frame {w.frame}'})
        if self.mode.get() == 'Scenes' and self._scene_extras:
            rows.append({'id': 'extras', 'name': 'Original scene overlays', 'kind': 'group'})
            for w in self._scene_extras:
                rows.append({'id': f'widget:{w.spec["id"]}', 'parent': 'extras',
                             'name': w.spec["name"],'kind':w.screen,
                             'visible':True,'available':True,
                             'status':f'{w.spec["move_id"]} / cell {w.frame}'})
        if (self.mode.get() == 'Scenes' and self.scene_id == 3 and
                self._variant_options.get(self.scene_variant.get()) == 'captured'):
            rows.append({'id':'runtime-chara','name':'Captured dynamic character slots',
                         'kind':'group'})
            for char in screenextras.load_metadata()['snapshot']['characters']:
                rows.append({'id':f'runtime-chara:{char["slot"]}', 'parent':'runtime-chara',
                             'name':f'{char["slot"]} {char["roster_name"]} (3-koma)',
                             'kind':'runtime','visible':False,'available':True,
                             'status':f'x={char["live_x"]}, source traced; pose unresolved'})
        return rows

    def refresh(self, frame=False):
        self.layer_list.set_layers(self._rows())
        if self.sel:
            self.layer_list.tree.selection_set(self.sel)
        self.view_panel.set_title(f'Viewport — {self.archive}' if self.archive else 'Viewport')
        self.problems.set_lines(self._probs or [('No problems.', 'good')])
        self.refresh_inspector()
        if frame:
            self.frame_view()
        else:
            self.view.redraw()

    def frame_view(self):
        self.view.frame_rect((-8, -14, SW + 8, 2 * SH + GAP + 8))

    def _crop(self, img, sx, sy):
        """256×192 window at scroll (sx, sy), wrapping like a DS text BG."""
        out = Image.new('RGBA', (SW, SH), (0, 0, 0, 0))
        w, h = img.size
        y = -(sy % h)
        while y < SH:
            x = -(sx % w)
            while x < SW:
                out.alpha_composite(img, (max(0, x), max(0, y)), (max(0, -x), max(0, -y)))
                x += w
            y += h
        return out

    def _library(self) -> bool:
        return getattr(self, '_kind', {}).get(self.archive) == 'library' and self.mode.get() == 'Screens'

    @staticmethod
    def _picture(name: str) -> str:
        """Library layers drawn together: a portrait's head (…aa) and body (…ab)."""
        return name[:-1] if re.search(r'_\d\d[a-z]{2}$', name) and name[-2] == 'a' else name

    def _shown(self, n) -> bool:
        c = self.cfg[n]
        if self.images.get(n) is None or c['screen'] == 'Hidden':
            return False
        if self._library():          # a picture collection: one picture at a time
            return bool(self.sel) and self._picture(n) == self._picture(self.sel)
        return c['visible']

    def _draw(self, vp):
        for name, (ox, oy) in ORIGIN.items():
            vp.rect(ox, oy, ox + SW, oy + SH, fill='#000000', outline='')
        if self.show_outside.get():
            for n in self.order:
                c, img = self.cfg[n], self.images.get(n)
                if not self._shown(n):
                    continue
                ox, oy = ORIGIN[c['screen']]
                faded = img.copy()
                faded.putalpha(faded.getchannel('A').point(lambda v: v // 4))
                vp.add_image(faded, ox - c['sx'], oy - c['sy'])
                vp.rect(ox - c['sx'], oy - c['sy'], ox - c['sx'] + img.width, oy - c['sy'] + img.height,
                        outline=T.LINE, dash=(3, 3))
        # library pictures: body (…ab) behind, head (…aa) in front
        names = sorted(self.order, key=lambda n: n[-1] == 'a') if self._library() else self.order
        for n in names:
            c, img = self.cfg[n], self.images.get(n)
            if not self._shown(n):
                continue
            ox, oy = ORIGIN[c['screen']]
            vp.add_image(self._crop(img, c['sx'], c['sy']), ox, oy)
        if self.layout_image is not None and self.mode.get() == 'Elements':
            # Genuine source tile pixels, centered only as an inspection image.
            # This is NOT a gameplay screenshot or traced screen position.
            img = self.layout_image
            x = SW // 2 - img.width // 2
            y = SH // 2 - img.height // 2
            vp.add_image(img, ORIGIN['Top'][0] + x, ORIGIN['Top'][1] + y)
            vp.text(4, 4, f'SOURCE TILE PANEL {self.layout_panel_index.get()} '
                          '(no runtime X/Y)', anchor='nw', fill=T.ACCENT, font=T.MONO_SMALL)
        if self.sprite_image is not None and self.mode.get() == 'Elements':
            # Sprite-space origin is centered as a resource preview, *not*
            # presented as a traced menu screen position or runtime layer.
            frame_image, left, top = self.sprite_image
            preview = Image.new('RGBA', (SW, SH), (0, 0, 0, 0))
            preview.alpha_composite(frame_image, (SW // 2 + left, SH // 2 + top))
            vp.add_image(preview, *ORIGIN['Top'])
            vp.text(4, 4, f'ELEMENT CELL {self.sprite_frame.get()} (atlas, no motion playback)',
                    anchor='nw', fill=T.ACCENT, font=T.MONO_SMALL)
        if self.mode.get() == 'Scenes' and (self._scene_widgets or self._scene_extras):
            for name, (ox, oy) in ORIGIN.items():
                pixels = screencomposition.sprite_layer(
                    self._scene_widgets + self._scene_extras,name)
                vp.add_image(pixels,ox,oy)
            chosen = self._scene_selected()
            if chosen:
                ox, oy = ORIGIN[chosen.screen]
                x0, y0 = max(0, chosen.image_x), max(0, chosen.image_y)
                x1, y1 = min(SW, chosen.image_x + chosen.image.width), min(SH, chosen.image_y + chosen.image.height)
                if x0 < x1 and y0 < y1:
                    vp.rect(ox+x0, oy+y0, ox+x1, oy+y1, outline=T.ACCENT, width=2)
        if self.mode.get() == 'Scenes' and self.scene_id==3:
            variant = self._variant_options.get(self.scene_variant.get())
            caption = screenextras.captured_deck_caption(variant)
            if caption:
                try:
                    if self._aft_source is not self.app.root_data:
                        self._native_aft_font()
                    if self._aft_caption_font is None:
                        self._aft_caption_font = aft.parse(
                            self.app.root_data.read('font/js8font.aft'))
                    bitmap = self._aft_caption_font.line(
                        caption,bank=0,clip_width=256,line_height=8)
                    vp.add_image(bitmap,*(
                        ORIGIN['Bottom'][0],ORIGIN['Bottom'][1]+184))
                except (ValueError,IndexError,KeyError,OSError):
                    pass
        if self.mode.get() == 'Scenes' and self._scene_text_id() is not None:
            try:
                message = infotext.read_shared_explanation(self.app.root_data,
                                                           self._scene_text_id())
                scene = self._scene_by_id.get(self.scene_id, {})
                swap = (scene.get('display_routing') or {}).get('swap_bit15_at_entry')
                if self.scene_id == 7 and (self._variant_options.get(self.scene_variant.get()) or '').endswith('swapped'):
                    swap = 1
                if swap not in (0, 1):
                    swap = 0  # unknown default is never presented as hardware verified
                lcd = screencomposition.screen_for_engine('sub', swap)
                ox, oy = ORIGIN[lcd]
                native_font = self._native_aft_font()
                for index, line in enumerate(message):
                    if line:
                        # CommonInfo::Create param_15=1 places source 224x16
                        # ALTextDS nodes at x=16, y=128+16*i on the sub LCD.
                        # Preserve the game's original CP932 and blank-| glyph,
                        # and rasterize the real AFT/DSIG cell pixels.
                        pixels = native_font.line(line,bank=0,clip_width=224,line_height=16)
                        vp.add_image(pixels,ox+16,oy+128+16*index)
            except (ValueError,KeyError,IndexError,OSError):
                pass
        for name, (ox, oy) in ORIGIN.items():
            hot = self.sel and self.cfg.get(self.sel, {}).get('screen') == name
            vp.rect(ox, oy, ox + SW, oy + SH, outline=T.ACCENT if hot else T.MUTED, width=2 if hot else 1)
            vp.text(ox, oy - 2, f'{name.upper()} SCREEN  256×192', anchor='sw', fill=T.MUTED, font=T.MONO_SMALL)
        vp.hud.configure(text=(
            'Original ALFT/DSIG glyph pixels + traced native BG/OBJ; scrolling frozen; hardware tint/priority/blend approximate.'
            if self.mode.get() == 'Scenes' else
            'Original DSIG panel pixels (isolated resource; not a hardware screenshot).'
            if self.layout_image is not None else
            'Sprite centered for resource preview (not runtime screen placement).'
            if self.sprite_image is not None else
            'Screen assignment, scroll and order are a preview (not traced, not saved).')
            if self.archive else 'Select a screen archive in the browser.')

    def _select_layer(self, row):
        if row and str(row.get('id', '')).startswith('runtime-chara:'):
            self._selected_runtime_character=int(str(row['id']).split(':')[-1])
            self.selected_widget_id=None
            self.refresh_inspector()
            self.view.redraw()
            return
        if row and str(row.get('id', '')).startswith('text:'):
            self._selected_explanation = str(row['id']).split(':', 1)[1]
            self._selected_runtime_character = None
            self.selected_widget_id = None
            self.refresh_inspector()
            self.view.redraw()
            return
        if row and str(row.get('id', '')).startswith('widget:'):
            identifier = str(row['id']).split(':',1)[1]
            self.selected_widget_id = int(identifier) if identifier.isdigit() else identifier
            self._selected_runtime_character = None
            self.refresh_inspector()
            self.view.redraw()
            return
        if row and row.get('kind') not in ('group', 'overlay'):
            changed = self.sel != str(row['id'])
            self.sel = str(row['id'])
            if self._library():
                if changed:          # the eye column follows the shown picture
                    self.refresh()   # (re-selects the row; unchanged sel ends the loop)
                return
            self.refresh_inspector()
            self.view.redraw()

    def _toggle(self, row):
        n = str(row['id'])
        if n in self.cfg:
            self.cfg[n]['visible'] = row['visible']
            if row['visible'] and self.cfg[n]['screen'] == 'Hidden':
                self.cfg[n]['screen'] = scenes.default_screen(n)
            self.view.redraw()

    # ------------------------------------------------------------ inspector
    def refresh_inspector(self):
        ins = self.inspector
        ins.clear()
        if self.mode.get() == 'Scenes' and self.scene_id is not None:
            scene = self._scene_by_id.get(self.scene_id, {})
            ins.section(f'Scene {self.scene_id:02d} — {scene.get("name", "Unknown")}')
            ins.value('Overlay', str(scene.get('overlay', 'unknown')))
            ins.value('Engine geometry / routing', 'HARD-CODED (read-only)')
            ins.text('Original asset pixels, animation records, color data and CP932 text '
                     'are editable. Overlay-defined positions, BG slots, callback rules, '
                     'hit regions and scene transitions cannot be changed here.')
            native=nativescenes.scene_info(self.scene_id)
            ins.section('Native renderer — original game',note=native['native_family'])
            ins.value('Renderer status',native['composition_status'])
            ins.value('Original BG variants',str(native['background_variant_count']))
            ins.evidence('Renderer entry','Direct',native['code_source'])
            ins.text(native['native_explanation'])
            ins.text('Roster and character graphics are loaded from the player saved '
                     'decks at runtime. Static character rendering is intentionally omitted.')
            if native['dynamic_state_unknown']:
                ins.evidence('Active runtime state','Unknown',native['dynamic_state_unknown'])
            trace=sourceauthority.scene_sources(self.scene_id)
            ins.value('ARM9-traced functions',str(len(trace['constructor_files'])))
            ins.value('Code-referenced asset paths',str(len(trace['confirmed_resource_paths'])))
            ins.value('Verified indirect pointers',
                      str(sum(bool(p.get('verified')) for p in trace.get('indirect_pointers',()))))
            ins.value('Original code call edges',str(len(trace.get('call_edges',()))))
            if trace.get('unresolved'):
                ins.evidence('Remaining callgraph edges','Unknown',
                             str(len(trace['unresolved']))+
                             ' unresolved or out-of-budget sites; no inferred assets')
            for callback in sourceauthority.runtime_scene_modes(self.scene_id):
                ins.section('Original ROM callback dispatch',note=callback['family'])
                ins.value('Selection mechanism',callback['selection'])
                # Avoid overwhelming the inspector with 100+ branch rows.
                seen=set()
                entries=[]
                for branch in callback['branches']:
                    entry=branch.get('table_entry') or {}
                    key=(branch['selected_state_index'],entry.get('raw_target'))
                    if key not in seen:
                        entries.append(branch)
                        seen.add(key)
                for branch in entries[:15]:
                    entry=branch.get('table_entry') or {}
                    fn=entry.get('target_path')
                    selector=branch['selected_state_index']
                    origin=entry.get('assembly_dispatch') or {}
                    source=(f"{branch['wrapper_path']}#L{branch['line']}; "
                            f"ROM table [{selector}] at {entry.get('table_word_address','unknown')}, "
                            f"target {entry.get('raw_target','unknown')}")
                    if origin:
                        source+=(f"; {origin.get('status','ARM binary stub')}; "
                                 f"onward {origin.get('onward_target','runtime')}")
                        if origin.get('onward_source'):
                            source+=f"; {origin['onward_source']}"
                    label=('Possible' if branch.get('possible') else 'Selected')+f' state {selector}'
                    evidence='Cross-checked' if fn or origin else 'Unknown'
                    ins.evidence(label,evidence,source+' -> '+(fn or 'no exported C target'))
                if len(entries)>15:
                    ins.value('Other ROM callback slots',str(len(entries)-15))
                ins.text('Original callback table values prove possible renderer '
                         'methods, not a static execution state or guaranteed '
                         'sprite pose, coordinates, priority or visibility.')
            if self.scene_id==3:
                ins.section('TopMenu CharaData action selectors — engine rules')
                offsets={}
                for site in sourceauthority.topmenu_action_sites():
                    offsets.setdefault(site['offset'],[]).append(
                        f"{site['source']}#L{site['line']}")
                for offset,evidence in sorted(offsets.items()):
                    ins.evidence(f'CharaData base move +{offset}', 'Direct',
                                 '; '.join(evidence))
                ins.text('These ROM-derived action offsets are not DSTX frames. '
                         'Current animation tick/pose and positions depend on '
                         'CharaData/ComicDeck and gameplay callback state. '
                         'No active frame is fabricated.')
            register=sourceauthority.hardware_scene(self.scene_id)
            ins.value('Hardware-related reachable sites',
                      str(register['register_site_count'])+' (static callgraph)')
            categories={}
            for statement in register['source_reachable_register_sites']:
                categories.setdefault(statement['register_class'],[]).append(statement)
            for kind,sites in sorted(categories.items()):
                first=sites[0]
                ins.evidence('Potential '+kind,'Inferred',
                             f"{first['source']}#L{first['line']} "
                             f"({len(sites)} statically reachable sites; "
                             'actual callback execution not established)')
            for fn in trace['constructor_files']:
                if fn['depth'] != 0:continue
                ins.evidence('Scene constructor','Direct',fn['path']+' (0x'+
                             fn['path'].rsplit('_',1)[-1].split('.')[0]+')')
            if not trace['constructor_files']:
                ins.evidence('Scene constructor','Unknown',
                             'Scene dispatch wrapper requires a downstream function trace')
            if trace['confirmed_resource_paths']:
                ins.text('Code-referenced resources are available through Edit source data. '
                         'A reference is NOT proof the resource is visible in this scene.')
            ins.value('Archive', scene.get('archive') or 'not resolved')
            ins.evidence('Archive link', 'Direct' if scene.get('archive_evidence', '').startswith('direct')
                         else 'Inferred' if scene.get('archive') else 'Unknown',
                         scene.get('archive_evidence', 'not traced'))
            routing = scene.get('display_routing') or {}
            if routing.get('swap_bit15_at_entry') in (0, 1):
                ins.value('Main engine (A)', routing['main_lcd'])
                ins.value('Sub engine (B)', routing['sub_lcd'])
                ins.value('POWCNT1 bit 15', str(routing['swap_bit15_at_entry']))
                ins.evidence('LCD routing at scene entry', 'Direct', routing['source'])
                if routing.get('dynamic_swap'):
                    ins.text('The scene changes LCD routing later via a callback; '
                             'the entry mapping is not valid for every state.')
            else:
                v_id=self._variant_options.get(self.scene_variant.get())
                mode=next((v for v in screenvariants.variants_for_scene(self.scene_id)
                           if v['id']==v_id),{})
                if mode.get('swap_at_variant') in (0,1):
                    bit=mode['swap_at_variant']
                    inherited=mode.get('routing_kind')=='Inherited scene reset'
                    ins.value('Inherited Main LCD' if inherited else 'Post-dispatch Main LCD',
                              'Top' if bit else 'Bottom')
                    ins.value('Inherited Sub LCD' if inherited else 'Post-dispatch Sub LCD',
                              'Bottom' if bit else 'Top')
                    ins.evidence('Scene-reset LCD routing' if inherited else 'Variant LCD routing',
                                 'Cross-checked' if inherited else 'Direct',
                                 mode.get('routing_source',''))
                    ins.text(('Reset initializes POWCNT1, but no constructor-specific '
                              'LCD swap has been proven for this scene.')
                             if inherited else
                             ('ROM callback table chooses the state-specific constructor; '
                              'the entry wrapper may have a different initial LCD arrangement.'))
                else:
                    ins.evidence('LCD routing','Unknown','No verified constructor swap for this scene')
            ins.value('Mapped widgets', str(len(self._scene_widgets)))
            if self._scene_extras:
                ins.value('Original UI overlays',str(len(self._scene_extras)))
            if self.scene_id == 3 and self._variant_options.get(self.scene_variant.get())=='captured':
                capture = screenextras.load_metadata()['snapshot']
                ins.section('Emulator save-state evidence')
                ins.value('Selected menu mode',str(capture['selected_button']))
                ins.value('Selected manga series',capture['series_code'])
                ins.value('Original series art',capture['series_bg_code']+' (BG3)')
                ins.value('Active characters',str(capture['chara_count']))
                ins.value('Live character X',', '.join(map(str,capture['character_x_pixels']))+' px')
                ins.value('Deck caption',capture['deck_caption'])
                ins.evidence('Character geometry','Direct',
                             'JUS.ml2 mainRAM + TopMenuChara::TopMenu_CharaCreate 02155CB4 / tick callback 021561D0')
                ins.evidence('Character sprite frame','Unknown',
                             'CharaData animation is runtime dependent; no fabricated characters rendered')
            if (self.scene_id==3 and self._selected_runtime_character is not None and
                    self._variant_options.get(self.scene_variant.get())=='captured'):
                for ch in screenextras.load_metadata()['snapshot']['characters']:
                    if ch['slot'] != self._selected_runtime_character:
                        continue
                    ins.section(f'Captured character {ch["slot"]}: {ch["roster_name"]}')
                    ins.value('Original roster index',str(ch['character_index']))
                    ins.value('Battle koma size',str(ch['koma_size']))
                    ins.value('Resource base',ch['base_resource_id'])
                    ins.value('Engine / LCD',ch['engine']+' / '+ch['lcd'])
                    ins.value('Captured X',str(ch['live_x'])+' px')
                    ins.value('Source animation',ch['resource_archive']+'|'+ch['animation_member'])
                    ins.value('Sprite geometry',ch['resource_archive']+'|'+ch['sprite_member'])
                    ins.value('Source texture',ch['source_texture_archive']+'|'+ch['source_texture_member'])
                    ins.evidence('Original loading','Direct',ch['source'])
                    ins.evidence('Active position / character','Direct',ch['live_index_evidence'])
                    ins.evidence('Captured pose / Y','Unknown',ch['render_status'])
                    break
            ins.text('Runtime-derived widget origins are locked. Select a visible sprite '
                     'in the canvas or Layers dock, then edit its real DSTX/DSIG resource.')
            selected = self._scene_selected()
            if selected:
                w = selected.spec
                ins.section(f'Widget {w["id"]} — {w["name"]}')
                ins.value('Native origin', f'{selected.origin_x}, {selected.origin_y} (hard-coded ARM9)')
                ins.value('Render state / collision', 'HARD-CODED engine / callbacks')
                native_route = w.get('engine') in ('main', 'sub') and routing.get('swap_bit15_at_entry') in (0, 1)
                ins.value('Display screen', selected.screen + (' (source-backed)' if native_route else ' (preview only)'))
                if w.get('engine'):
                    ins.value('Renderer', w['engine'] + ' engine')
                ins.value('Move ID', str(w['move_id']))
                ins.value('Authored cell @ t0', str(selected.frame))
                ins.value('Sprite path', selected.dtx_path)
                ins.value('Next scene', str(w.get('destination', 'unresolved')))
                ins.evidence('Position', 'Direct', w['layout_evidence'] + '; ' + w['source'])
                ins.evidence('DS screen routing', 'Direct' if native_route else 'Inferred',
                             w['screen_evidence'])
                if w.get('note'):
                    ins.text(w['note'])
                if w.get('snapshot_evidence'):
                    ins.evidence('Captured sprite state','Direct',w['snapshot_evidence'])
                if w.get('state_condition'):
                    ins.evidence('Conditional display','Direct',w['state_condition'])
                ins.buttons(('Edit actual sprite…', self._edit_selected_widget),
                            ('Edit source bytes / ALMT…',self._edit_source_assets))
            if self.scene_id in (7, 34):
                ins.section('Mode-selection explanations')
                self._explanation_options = {}
                for key, number in screenvariants.SCENE_TEXT_IDS.get(self.scene_id,()):
                    try:
                        heading = infotext.read_shared_explanation(self.app.root_data,number)[0]
                    except (ValueError,KeyError,IndexError,OSError):
                        heading = str(key)
                    label = f'{number:02d} — {heading.replace("|"," ")}'
                    self._explanation_options[label] = key
                current_key = self._selected_explanation or ('rule-0' if self.scene_id == 7 else 'option-24')
                chosen_label = next((x for x,v in self._explanation_options.items()
                                     if v == current_key),None)
                self._explanation_display.set(chosen_label or next(iter(self._explanation_options),''))
                ins.combo('Active explanation', self._explanation_display,
                          tuple(self._explanation_options), on_change=self._scene_text_selected)
                ins.text('The original game chooses these records from its rule selector '
                         'and current rule type; choose the associated element or message.')
            message_id = self._scene_text_id()
            if message_id is not None and self.app.root_data:
                ins.section(f'Explanation text — record {message_id}')
                try:
                    lines = infotext.read_shared_explanation(self.app.root_data,message_id)
                    self._text_vars = [tk.StringVar(value=line) for line in lines]
                    for j,var in enumerate(self._text_vars):
                        ins.entry(f'Line {j+1}',var,
                                  tip='Source CP932 text: | is the authored word separator. '
                                      'Edits stage in all 42 game info tables.')
                    ins.evidence('Text source','Direct',
                                 screenvariants.SCENE_TEXT_SOURCE.get(self.scene_id,'')
                                 + '; bin/InfoDeck.aar|bin/info/*.bin')
                    try:
                        font = self._native_aft_font()
                        ins.value('Font','font/jskfont.aft — original 6×14 AFT glyphs')
                        ins.value('Rasterization',font.bitmap_mode+'; original glyph lookup')
                        ins.value('Palette', 'Original DSIG bank 0 (runtime tint may vary)')
                        ins.evidence('Font pixels / glyph map','Direct',
                                     'ALFont::Create 021CB140; ALFont::MakeFixBounds 021CB33C; '
                                     'ALTextDS::vfunc_25 021C8B18')
                        ins.evidence('CommonInfo line placement','Direct',
                                     'CommonInfo::Create 021BCF1C lines 168–199: '
                                     'x16, y128+16*i, 224×16')
                        ins.text('Original AFT pixels are shown. The runtime palette tint, '
                                 'BG blending and scroll phase may still differ from an emulator capture.')
                    except (ValueError,KeyError,OSError) as exc:
                        ins.evidence('Native AFT font','Unknown',str(exc))
                    ins.buttons(('Apply explanation to game data',
                                 lambda m=message_id: self._apply_scene_explanation(m)))
                except (ValueError,IndexError,KeyError,OSError) as exc:
                    ins.evidence('Explanation text','Unknown',str(exc))
        if not self.archive and not (self.mode.get() == 'Scenes' and self.scene_id is not None and self.layers):
            if self.mode.get() != 'Scenes':
                ins.section('Screen editor')
                ins.text('Pick a menu/scene archive to preview source tilemaps.')
            return
        if self.archive:
            ins.section('Archive', note=self.archive)
        else:
            ins.section('Source-backed loose backgrounds',note='No scene archive exists; original asset files only')
        ins.buttons(('Edit selected original source asset…', self._edit_source_assets))
        ins.value('Layers', str(len(self.layers)))
        if self.sprite_info is not None:
            ins.section('Sprite frame preview — read-only', note=self.sprite_info.dtx_path)
            ins.value('Frame', f'{self.sprite_frame.get()} / {self.sprite_info.frame_count - 1}')
            ins.value('Texture', 'embedded DSIG' if self.sprite_info.embedded else
                      self.sprite_info.image_path)
            ins.value('DSIG mode', f'0x{self.sprite_info.dsig_mode:02X}')
            if self.sprite_image is not None:
                im, x, y = self.sprite_image
                ins.value('Frame bounds', f'({x}, {y})  {im.width}×{im.height} pixels')
            ins.evidence('Sprite image', 'Direct', 'DSTX frame + DSIG pixel decoder')
            ins.evidence('Runtime position', 'Unknown', 'centered for inspection only')
        if self.sprite_error:
            ins.section('Sprite preview error')
            ins.value('Detail', self.sprite_error)
        if self.selected_resource is not None:
            try:
                arc = self.app.root_data.archive(self.archive)
                item = arc.entries[self.selected_resource]
                data = item.payload()
                if item.ext == '.ncl':
                    from jus_formats import ncl
                    nc = ncl.parse(data)
                    ins.section('NCCL — Nitro RGB555 palette',note=item.name)
                    ins.value('Version',f'0x{nc.version:04X}')
                    ins.value('Color bank format',f'{len(nc.banks)} × {nc.bank_size} colors')
                    used=[i for i,bank in enumerate(nc.banks) if any(bank)]
                    ins.value('Populated banks',', '.join(map(str,used)) if used else '(all black)')
                    ins.evidence('Palette layout','Direct','NCCL → PALT + CMNT; source-byte exact round-trip')
                    ins.evidence('Screen X/Y','Unknown','Palette entries carry no layout coordinates')
                if item.ext == '.amt':
                    ins.section('ALMT — animation timing not projected', note=item.name)
                    ins.text('The associated sprite frames are previewable above. The frame number '
                             'is a DSTX index, not an ALMT playback tick.')
                if item.ext == '.dtx' and data[:4] == b'DSTX' and data[5] in (5, 6):
                    from jus_formats.dstx import parse_layout
                    layout = (self.selected_layout if self.selected_layout is not None
                              else parse_layout(data))
                    ins.section('DSTX 0x05/0x06 - tilemap inspection', note=item.name)
                    ins.value('Mode', f'0x{layout.flags:02X}; unsigned {layout.cell_bytes * 8}-bit cells')
                    ins.value('Panels', str(len(layout.panel_maps)))
                    ins.value('Offset table', f'{len(layout.map_offsets)} relative u16 offsets')
                    ins.value('Auxiliary', f'{len(layout.auxiliary)} bytes, '
                              f'{len(layout.padding)} final zero padding bytes')
                    ins.value('DSIG', f'{len(layout.embedded)} embedded bytes'
                              if layout.embedded[:4] == b'DSIG' else 'not found')
                    try:
                        panel_index = int(self.layout_panel_index.get())
                    except ValueError:
                        panel_index = -1
                    if 0 <= panel_index < len(layout.panel_maps):
                        grid = layout.panel_maps[panel_index]
                        panel = layout.panels[panel_index]
                        ins.section(f'Panel {panel_index} - raw tile grid',
                                    note='row-major; read-only; local coordinates')
                        ins.value('Descriptor', f'first tile {panel.first_tile}, '
                                  f'{grid.tiles_w} x {grid.tiles_h} tile cells')
                        base = 8 + 4 * (len(layout.panels) + 1)
                        ins.value('Data offset', f'aux +0x{grid.offset:04X}, '
                                  f'DSTX +0x{base + grid.offset:04X}')
                        ins.value('Stored cells', f'{len(grid.cells)} x u{grid.cell_bytes * 8}')
                        # Conditional ARM9 02043C7C CLDS-conversion geometry.
                        # This path does not necessarily run for a given resource.
                        from jus_formats.panelmesh import expand_conditional_fallback
                        try:
                            fallback = expand_conditional_fallback(layout, panel_index)
                            ins.value('Conditional CLDS pieces', str(len(fallback.pieces)))
                            ins.value('CLDS tile sequence',
                                      f'{fallback.first_tile} .. {fallback.next_tile - 1}')
                            ins.evidence('Conditional CLDS mesh', 'Direct',
                                         'ARM9 02043C7C when branch selected; '
                                         'not proven as active display path')
                        except ValueError as exc:
                            ins.value('Conditional CLDS mesh', str(exc))
                            ins.evidence('Conditional CLDS mesh', 'Unknown',
                                         'ROM width lookup ends at 16; wider panels '
                                         'need another runtime branch')
                        digits = grid.cell_bytes * 2
                        lines = [' '.join(f'{v:0{digits}X}' for v in grid.row(y)[:16])
                                 for y in range(min(grid.tiles_h, 16))]
                        ins.value('Tile grid (hex)', '\n'.join(lines) if lines else '(empty)')
                        if self.layout_render_info is not None:
                            info = self.layout_render_info
                            ins.value('Rendered pixels', f'{info.width} x {info.height} RGBA')
                            ins.value('DSIG pixel mode', f'0x{info.dsig_mode:02X}')
                            ins.value('Distinct source tiles', str(len(info.referenced_tiles)))
                            ins.value('4bpp palette bank IDs', ', '.join(map(str, info.palette_banks)))
                            ins.value('Flipped cells (H,V)',
                                      f'{info.hflip_cells}, {info.vflip_cells}')
                            ins.evidence('Rendered panel', 'Inferred',
                                         'Original DSIG pixels + NDS text-BG map bits; '
                                         'hardware frame capture pending')
                        elif self.sprite_error:
                            ins.value('Render problem', self.sprite_error)
                        if grid.tiles_w > 16 or grid.tiles_h > 16:
                            ins.text('Only the first 16 columns and 16 rows are shown here. '
                                     'The parser retains the complete original panel map.')
                    else:
                        ins.value('Selected panel', 'Choose a valid tile-panel index above.')
                    ins.evidence('Map offsets and cells', 'Direct',
                                 '50 original files; ARM9 0x020433EC / 0x02043C7C')
                    ins.evidence('Screen placement', 'Unknown',
                                 'panel cells do not encode scene-level X/Y')
                    ins.evidence('Palette/flip interpretation', 'Inferred',
                                 'NDS text-BG bit interpretation, validated for all 50 files; '
                                 'hardware frame capture pending')
            except (ValueError, KeyError, IndexError) as exc:
                ins.section('Resource')
                ins.value('Parse problem', str(exc))
        l = next((x for x in self.layers if x.name == self.sel), None)
        if l is None:
            return
        c = self.cfg[l.name]
        m = l.map
        ins.section(f'Layer {l.name}')
        self._v = {'screen': tk.StringVar(value=c['screen']), 'sx': tk.StringVar(value=str(c['sx'])),
                   'sy': tk.StringVar(value=str(c['sy']))}
        if c.get('native_bg'):
            ins.value('Engine BG slot / physical LCD','HARD-CODED ARM9 (read-only)')
            ins.value('Physical LCD',c['screen']+' (code-derived)')
            ins.value('Graphics engine',f'{c["engine"].upper()} BG{c["bg_slot"]}')
            ins.evidence('Hardware engine / slot','Direct',c['source'])
            ins.evidence('Physical LCD',c.get('native_evidence','Inferred'),
                         ((('Inherited POWCNT1 scene reset: ' if
                             c.get('routing_kind')=='Inherited scene reset' else
                             'POWCNT1 set by post-dispatch callback: ')+c['routing_source'])
                          if c.get('routing_source') else
                          'POWCNT1 swap at entry; later callbacks may change the mapping'))
            if c.get('animated'):
                ins.value('Runtime scroll/animation','Yes — static snapshot in editor')
                ins.text('The original game animates this background. No scene-layout '
                         'or scroll-speed editing is exposed.')
            else:
                ins.value('Runtime animation','Not confirmed for this layer')
            ins.value('Initial hardware BG priority',str(c['baseline_bg_priority'])+' (0 = frontmost)')
            ins.evidence('Initial BGxCNT register priority','Direct',c['order_evidence'])
            ins.evidence('Runtime priority/scroll/blend','Unknown',
                         'Callbacks may override initial priority; exact scroll phase and blending are not fully traced')
            for path in c.get('palette_replacements',()):
                ins.value('Variant palette',path)
            if c.get('note'):
                ins.text(c['note'])
            ins.buttons(('Edit original ALTM map data…',self._edit_source_assets),
                        ('Edit tile image / palette source…',self._edit_source_assets))
        else:
            ins.combo('Screen', self._v['screen'], ('Top', 'Bottom', 'Hidden'),
                      'Preview only: the real BG assignment is set in code (not traced)',
                      self._apply_cfg,width=10)
            ins.spin('Scroll X', self._v['sx'], 0, 4096,
                     'Preview scroll (wraps like a DS text BG)',self._apply_cfg)
            ins.spin('Scroll Y', self._v['sy'], 0, 4096,
                     'Preview scroll (wraps like a DS text BG)',self._apply_cfg)
            ins.buttons(('▲ Forward',lambda: self._move(1)),
                        ('▼ Back',lambda: self._move(-1)))
        ins.value('Map', f'{m.width}×{m.height} tiles = {m.pixel_size[0]}×{m.pixel_size[1]} px')
        ins.value('Storage', 'packed rows' if m.packed else 'raw')
        ins.value('Tile image', split(l.image_path)[-1] if l.image_path else '— (no pair)')
        ins.value('Banks used', ', '.join(map(str, sorted(m.used_banks()))))
        ins.section('Evidence')
        ins.evidence('ALTM map', 'Inferred', 'structure validated on all 1,558 ALTM files')
        ins.evidence('Tiles/palette', 'Inferred', '8bpp sets with >16 banks use the entry bank as an '
                                                  'extended-palette slot (renders coherently)')
        if c.get('native_bg'):
            ins.evidence('Screen routing',c.get('native_evidence','Inferred'),c['source'])
            ins.evidence('Scroll phase / layering','Unknown',
                         'Frozen source frame, not an emulator-validated live composition')
        else:
            ins.evidence('Screen/scroll','Unknown','name heuristic + your preview settings')

    def _apply_cfg(self):
        if not self.sel:
            return
        c = self.cfg[self.sel]
        if c.get('native_bg'):
            self.app.status.set('Native BG routing and scroll are hard-coded; edit source pixels/tiles instead.')
            return
        try:
            c['sx'], c['sy'] = int(self._v['sx'].get()), int(self._v['sy'].get())
        except ValueError:
            return
        c['screen'] = self._v['screen'].get()
        c['visible'] = c['screen'] != 'Hidden'
        self.layer_list.set_layers(self._rows())
        self.view.redraw()

    def _move(self, d):
        if self.sel not in self.order:
            return
        if self.cfg.get(self.sel,{}).get('native_bg'):
            self.app.status.set('Engine BG priority/order is hard-coded; cannot reorder native layers.')
            return
        i = self.order.index(self.sel)
        j = max(0, min(len(self.order) - 1, i + d))
        self.order[i], self.order[j] = self.order[j], self.order[i]
        self.refresh()