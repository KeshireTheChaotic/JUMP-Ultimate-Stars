"""Interactive-window smoke test against the real data (not part of unittest discovery).

    py -3 tests\\gui_smoke.py [data root]

Opens the editor, drives the Animation, Sprite and Archive workspaces
(selection, key retime + undo, piece nudge + undo, pursuer preview) and
reports any Tk callback exceptions.  Exit code 1 on failure.
"""
from __future__ import annotations

import os
import shutil
import sys
import tempfile
import time
import traceback
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent.parent))

from app.editor import EditorApp  # noqa: E402

DATA = sys.argv[1] if len(sys.argv) > 1 else os.environ.get('JUS_DATA', r'D:\Library\Development\JUS\data')


def main():
    errors = []
    # A modal prompt (e.g. "apply edits before switching?") would block an unattended run:
    # record it as a failure and answer Cancel/No instead.
    from tkinter import messagebox
    prompts = []
    for name in ('askyesnocancel', 'askyesno', 'askokcancel', 'showinfo', 'showwarning', 'showerror'):
        setattr(messagebox, name, lambda *a, _n=name, **k: prompts.append(f'{_n}: {a[:2]}') or None)
    app = EditorApp(DATA)
    app.report_callback_exception = lambda *exc: errors.append(''.join(traceback.format_exception(*exc)))

    def pump(t=0.3):
        end = time.time() + t
        while time.time() < end:
            app.update()
            time.sleep(0.02)

    checks = []
    pump(0.8)
    app.select_container('chr/ChrArc.aar|chr/bb_b_01.aar', 'bb_b_01')
    pump(0.5)
    app.moves_tree.selection_set('3')
    app.moves_tree.focus('3')
    app.on_move_select()
    pump(0.3)
    bi = next(r for r in app.timeline.rows if r.get('label') == 'BoundsIndex')
    t0 = bi['keys'][1][0]
    app._timeline_select(bi, t0, bi['keys'][1][1])
    before = [k.tick for k in app._track().keys]
    app._timeline_move_key(bi, t0, t0 + 1)
    app.undo()
    checks.append(('retime+undo', [k.tick for k in app._track().keys] == before))
    marker = next((r for r in app.timeline.rows if r.get('label') == 'Marker'), None)
    checks.append(('marker jump arc', bool(marker and marker.get('arcs'))))
    app.select_container('chr/ChrArc.aar|chr/dg_b_01.aar', 'dg_b_01')
    pump(0.5)
    app.moves_tree.selection_set('24')
    app.moves_tree.focus('24')
    app.on_move_select()
    app.set_tick(8)
    pump(0.3)
    checks.append(('pursuer rows', any(r.get('id') == ('virt', 'pursuer') for r in app.timeline.rows)))
    # GenerateID effects: gt_b_02 move 40 spawns a character effect at tick 0
    app.select_container('chr/ChrArc.aar|chr/gt_b_02.aar', 'gt_b_02')
    pump(0.5)
    app.moves_tree.selection_set('40')
    app.moves_tree.focus('40')
    app.on_move_select()
    app.set_tick(6)
    pump(0.3)
    srows = [r for r in app.timeline.rows if r.get('spawn') is not None]
    live = app.spawn_projection().instances
    checks.append(('spawn rows + live effect', bool(srows) and bool(live) and all('⚠' not in r['label'] for r in srows)))
    app._timeline_select(srows[0], 6, None)
    app.effect_layer.set('Behind')
    app.redraw_view()
    pump(0.2)
    app.effect_layer.set('Front')
    app.show_workspace('sprite')
    pump(0.4)
    app.select_frame(20)
    p = app.sprite_d.frames[20].pieces[0]
    app._sprite_press(p.x + 1, p.y + 1, None)
    x0 = app._piece().x
    app.nudge_piece(2, 0)
    moved = app._piece().x
    app.undo()
    # undoing back to the loaded bytes must leave nothing unapplied (else switching would prompt)
    checks.append(('nudge+undo', moved == x0 + 2 and app._piece().x == x0 and not app.sprite_dirty))
    # real work: edit, Apply, Save (to a scratch folder, never the data root) before switching
    app.nudge_piece(1, 0)
    app.apply_current()
    out = tempfile.mkdtemp(prefix='jus_smoke_')
    try:
        written = app.root_data.save(out)
        app.update_dirty()
        saved = bool(written) and not app.root_data.dirty_files() and not app.sprite_dirty
    finally:
        shutil.rmtree(out, ignore_errors=True)
    checks.append(('apply+save before switch', saved and not app.almt_dirty))
    app.show_workspace('archive')
    pump(0.3)
    # suite workspaces
    app.show_workspace('koma')
    pump(0.4)
    km = app.suite['koma']
    km.load('koma/bb_02.dtx')
    km.select_panel(1)
    km.tool.set('pencil')
    km.colour = 3
    before = km.kf.build()
    x0, y0 = km._origin(1)
    km._press(x0 + 5, y0 + 5, None)
    km._release(x0 + 5, y0 + 5, None)
    painted = km.kf.build() != before
    app.undo()
    checks.append(('koma paint+undo', painted and km.kf.build() == before and not km.dirty))
    # card shape (bin/koma.bin): bb_02 is card 691, 3 cells; change the variant, then undo
    km.tool.set('select')
    cards_before = km.cat.cards.build() if km.cat else None
    card_ok = bool(km.card) and km.card.index == 691 and km.layout_mode.get() == 'Card'
    other = next(v for v in range(len(km.cat.shapes.groups[2])) if v != km.card.variant) if card_ok else 0
    km.set_shape(3, other)
    changed = km.card.variant == other and km.dirty and bytes(km.card.raw[:8]) == cards_before[691 * 12:691 * 12 + 8]
    app.undo()
    checks.append(('koma card shape+undo', card_ok and changed and km.cat.cards.build() == cards_before
                   and not km.dirty))
    km.load('koma/is_00.dtx')       # series id 2 → 'is' via the ARM9 prefix table (no ambiguity)
    checks.append(('koma card from prefix table', [c.series_id for c, _ in km.card_choices] == [2]))
    app.show_workspace('level')
    pump(0.4)
    lv = app.suite['level']
    lv.load('bg_bb')
    pump(0.3)
    checks.append(('level layers', len(lv.layers) == 4 and all(lv.images[n] is not None for n in lv.images)))
    # J-Galaxy missions live in the Level workspace: node 12 = mission #1 "Wall Breaker",
    # definition +0x75 = 8 → bg_hh in the ARM9 stage table
    mp = lv.missions
    lv.tree.selection_set('n:12')
    pump(0.4)
    linked = (mp.node_id == 12 and lv.stage is not None and lv.stage.stem == 'bg_hh' and
              lv.right_tabs.index('current') == 0 and 12 in lv._by_stage.get('bg_hh', []))
    graph_before = mp.catalog.graph.build() if mp.catalog else None
    mp.slot = 0
    mp.kind_var.set('Koma')
    mp.koma_var.set('1')
    mp.update_reward()
    edited = lv.dirty and mp.catalog.graph.get(12).rewards[0].koma_id == 1
    app.undo()
    checks.append(('mission ↔ stage link + reward undo', linked and edited and
                   mp.catalog.graph.build() == graph_before and not lv.dirty))
    app.show_workspace('screen')
    pump(0.4)
    sc = app.suite['screen']
    sc.load('title/title.aar')
    pump(0.3)
    checks.append(('screen layers', [sc.cfg[n]['screen'] for n in sc.order] == ['Top', 'Top', 'Bottom', 'Bottom']))
    sc.load('Common/chr/chr.aar')
    pump(0.3)
    sc._select_layer({'id': 'bb_b_01ab', 'kind': 'Top'})
    shown = [n for n in sc.order if sc._shown(n)]
    checks.append(('library shows one picture', shown == ['bb_b_01aa', 'bb_b_01ab']
                   and all(sc.images[n] is not None for n in sc.order)))
    sc.load('title/title.aar')
    pump(0.2)
    checks.append(('screen list has no data archives',
                   'deck/Deck.aar' not in sc._archives and 'title/title.aar' in sc._archives))
    app.open_table('bin/commwin.bin')
    pump(0.3)
    app.member_tree.focus('t0')
    app.member_tree.selection_set('t0')
    pump(0.2)
    checks.append(('game table view', len(app.member_tree.get_children()) == 129 and app._table is not None))
    app._table = None
    # the session above leaves no unapplied work (undo returned every edit to clean)
    pending = app.almt_dirty or app.sprite_dirty or any(w.dirty for w in app.suite.values())
    checks.append(('no unapplied work at end', not pending))
    checks.append(('no references workspace', 'references' not in app.suite and 'missions' not in app.suite))
    app.destroy()
    checks.append(('no unexpected dialogs', not prompts))
    for p in prompts:
        print('DIALOG', p)
    ok = all(c for _, c in checks) and not errors
    for name, c in checks:
        print(('PASS ' if c else 'FAIL ') + name)
    for e in errors:
        print(e)
    return 0 if ok else 1


if __name__ == '__main__':
    sys.exit(main())
