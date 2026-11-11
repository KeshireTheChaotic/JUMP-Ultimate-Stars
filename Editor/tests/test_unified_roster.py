"""Unified Roster: source archive links, GUI navigation and grid rearrangement.

Uses original assets read-only; tests NEVER write original game data.
"""
from __future__ import annotations

import os
import sys
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT))
DATA = Path(r'D:\Library\Development\JUS\Data')
if not DATA.is_dir():
    DATA = (ROOT / '..' / '..' / '..' / 'Data').resolve()

from jus_formats import almt, animroles, roster
from jus_package.project import DataRoot, join
from app.workspaces.roster import RosterIndex


@unittest.skipUnless(DATA.is_dir(), 'original JUS Data folder not present')
class RosterSourceIntegrity(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.idx = RosterIndex(DataRoot(DATA))

    def test_all_original_card_kinds(self):
        all_cards = self.idx.cards.cards
        self.assertEqual(len(all_cards), 890)
        self.assertEqual(sum(c.raw[6] == 0 for c in all_cards), 206)
        self.assertEqual(sum(c.raw[6] == 1 for c in all_cards), 372)
        self.assertEqual(sum(c.raw[6] == 2 for c in all_cards), 312)

    def test_roster_and_original_card_art_resolves(self):
        self.assertEqual(len(roster.BATTLE_IDS), 74)
        self.assertEqual(len(roster.SUPPORT_IDS), 193)
        self.assertEqual(set(self.idx.by_form), set(roster.BATTLE_IDS) | set(roster.SUPPORT_IDS))
        self.assertEqual(sum(len(v) for v in self.idx.passive_by_series.values()), 312)
        self.assertTrue(all(self.idx.art_for_card(card) for card in self.idx.cards.cards))

    def test_each_battle_form_has_source_backed_moves(self):
        for form in roster.BATTLE_IDS:
            moves = self.idx.battle_moves(form)
            self.assertTrue(moves, form)
            keys = {(m.resource_path, m.resource_id) for m, _ in moves}
            self.assertEqual(len(keys), len(moves), form)
            self.assertEqual(sum(m.category != 'battle-special' for m, _ in moves), 12, form)
            self.assertEqual(sum(m.category == 'battle-special' for m, _ in moves),
                             2 * len({c.size for c in self.idx.by_form[form]}), form)
            self.assertTrue(all(m.form == form for m, _ in moves))
        self.assertEqual(sum(len(self.idx.moves.card_moves(card)) == 14 for card in
                             self.idx.cards.cards if card.raw[6] == 0), 206)

    def test_all_battle_almt_resources_partition_without_duplicates(self):
        """Original 74-form corpus: no source animation disappears after grouping."""
        for form in roster.BATTLE_IDS:
            grouped = self.idx.battle_animation_groups(form)
            self.assertEqual(set(grouped), {'movement', 'reaction', 'other'})
            source = join('chr/ChrArc.aar', f'chr/{form}.aar', f'{form}.amt')
            all_moves = almt.parse(self.idx.root.read(source)).moves
            mapped = {link.resource_id for link, _ in self.idx.battle_moves(form)}
            assigned = [mid for rows in grouped.values() for mid, _, _ in rows]
            self.assertEqual(len(assigned), len(set(assigned)), form)
            self.assertEqual(set(assigned),
                             {m.id for m in all_moves} - mapped, form)
            self.assertEqual({mid & 0xFF for mid, _, _ in grouped['movement']},
                             {0, 1, 2, 3}, form)
            self.assertTrue(all(animroles.battle_animation_role(mid).category == kind
                                for kind, rows in grouped.items()
                                for mid, _, _ in rows), form)
            self.assertEqual(
                tuple((mid, ticks) for mid, ticks, _ in grouped['other']),
                self.idx.other_battle_animations(form))

    def test_original_74_form_partition_totals(self):
        totals = {k: sum(len(self.idx.battle_animation_groups(form)[k])
                         for form in roster.BATTLE_IDS)
                  for k in ('movement', 'reaction', 'other')}
        self.assertEqual(totals, {'movement': 296, 'reaction': 1110, 'other': 814})
        self.assertEqual(sum(totals.values()), 2220)

    @unittest.skipUnless(
        (Path(r'D:\Library\Development\JUS\reverse_engineering\functions_layout')
         / 'arm9_ov06/arm9_ov06_0215d2e4.c').is_file(),
        'Native overlay 6 decompiled traces are unavailable')
    def test_original_movement_reaction_callback_witnesses(self):
        src = (Path(r'D:\Library\Development\JUS\reverse_engineering\functions_layout')
               / 'arm9_ov06')
        witnesses = {
            '0215d2e4': ['FUN_02157450(param_1,0);',
                         'FUN_02157450(param_1,7);',
                         'FUN_02157450(param_1,8);'],
            '0215d6f8': ['param_1 + 0x6c) & 0xc', 'FUN_0215d760'],
            '0215d760': ['FUN_02157450(param_1,1);'],
            '0215da84': ['FUN_0215a824'],
            '0215d860': ['FUN_0215d91c'],
            '0215d91c': ['FUN_02157450(param_1,2);'],
            '0215e9a0': ['param_1 + 0x6c) & 2', 'FUN_0215eaec'],
            '0215eaec': ['FUN_02157450(param_1,3);'],
            '0215af34': ['PTR_FUN_021721a0'],
            '0215ba40': ['FUN_02157450(param_1,0x13);'],
            '0215bf70': ['FUN_02157450(param_1,7);'],
            '0215bd50': ['FUN_02157450(param_1,8);'],
        }
        for address, needles in witnesses.items():
            with self.subTest(address=address):
                original = (src / f'arm9_ov06_{address}.c').read_text(encoding='utf-8')
                for needle in needles:
                    self.assertIn(needle, original)

    def test_native_reaction_table_and_dpad_only_boundaries(self):
        self.assertEqual(set(animroles.D_PAD_MOVEMENT), {0, 1, 2, 3})
        self.assertTrue(all(animroles.battle_animation_role(i).category == 'reaction'
                            for i in animroles.REACTION_OFFSETS))
        self.assertEqual(animroles.battle_animation_role(4).category, 'other')
        self.assertEqual(animroles.battle_animation_role(5).category, 'other')
        self.assertEqual(animroles.battle_animation_role(6).category, 'other')
        self.assertEqual(animroles.battle_animation_role(0x33).title,
                         'Grabbed-victim reaction pose')
        self.assertIn('0215D860', animroles.D_PAD_MOVEMENT[2].source)
        self.assertIn('0215E9A0', animroles.D_PAD_MOVEMENT[3].source)
        self.assertIn('0215AF34', animroles.battle_animation_role(0x0B).source)

    def test_support_actions_are_attached_to_koma_not_invented_moves(self):
        for form in roster.SUPPORT_IDS:
            for card in self.idx.by_form[form]:
                moves = self.idx.moves.card_moves(card)
                self.assertEqual(len(moves), 1)
                self.assertEqual(moves[0].category, 'support-action')

    def test_passive_koma_have_no_battle_move_mapping(self):
        for group in self.idx.passive_by_series.values():
            for card in group:
                self.assertEqual(card.size, 1)
                self.assertEqual(self.idx.moves.card_moves(card), ())
                self.assertIsNotNone(self.idx.art_for_card(card))


@unittest.skipUnless(DATA.is_dir() and (sys.platform == 'win32' or os.getenv('DISPLAY')),
                     'Tk display / original Data unavailable')
class RosterWorkspaceSmoke(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        from app.editor import EditorApp
        cls.app = EditorApp(str(DATA))
        cls.app.withdraw()  # no screenshot and no replacement/fake preview
        cls.app.open_root(str(DATA))
        cls.app.update_idletasks()

    @classmethod
    def tearDownClass(cls):
        cls.app.destroy()

    def test_unified_tab_and_original_koma_art_thumbnail(self):
        a = self.app
        self.assertEqual(set(a._tab_buttons), {'roster', 'level', 'screen', 'archive'})
        self.assertEqual(a._project_panel.title_label.cget('text'), 'Roster') if hasattr(
            a._project_panel, 'title_label') else None
        self.assertIsNotNone(a.roster_browser.index)
        img = a.roster_browser.index.source_icon(a.roster_browser.index.by_form['db_b_01'][0])
        self.assertIsNotNone(img)

    def test_moves_tree_navigation_and_sprite_mode(self):
        a = self.app
        b = a.roster_browser
        # Expand the first original battle character and its true move sources.
        battle_root = b.tree.get_children('')[0]
        form_node = b.tree.get_children(battle_root)[0]
        b._open_node(form_node)
        move_group = next(x for x in b.tree.get_children(form_node)
                          if b.actions[x][0] == 'moves')
        b._open_node(move_group)
        moves = [x for x in b.tree.get_children(move_group) if b.actions.get(x, ('',))[0] == 'move']
        self.assertTrue(moves)
        move = b.actions[moves[0]]
        self.assertTrue(a.open_move_resource(move[1], move[2], move[3]))
        self.assertEqual(a.workspace, 'animation')
        self.assertEqual(a.move.id, move[2])
        self.assertEqual(len(a._upper.panes()), 2)  # no duplicate internal moves column
        a.show_roster_sprite()
        self.assertEqual(a.workspace, 'sprite')
        a.show_roster_animation()
        self.assertEqual(a.workspace, 'animation')

    def test_separate_dpad_reaction_and_other_tree_categories(self):
        a = self.app
        a.open_root(str(DATA))
        browser = a.roster_browser
        form = 'db_b_01'
        battle_root = browser.tree.get_children('')[0]
        character = next(n for n in browser.tree.get_children(battle_root)
                         if browser.actions.get(n) == ('battle', form))
        browser._open_node(character)
        moves = next(n for n in browser.tree.get_children(character)
                     if browser.actions.get(n) == ('moves', form))
        browser._open_node(moves)
        branches = {browser.actions[n][2]: n
                    for n in browser.tree.get_children(moves)
                    if browser.actions.get(n, ('',))[0] == 'animation-group'}
        self.assertEqual(set(branches), {'movement', 'reaction', 'other'})
        for kind in ('movement', 'reaction', 'other'):
            browser._open_node(branches[kind])
            rows = browser.tree.get_children(branches[kind])
            expected = browser.index.battle_animation_groups(form)[kind]
            self.assertEqual(len(rows), len(expected))
            self.assertEqual([browser.actions[r][2] for r in rows],
                             [mid for mid, _, _ in expected])
        self.assertEqual({browser.actions[r][2] & 0xff
                          for r in browser.tree.get_children(branches['movement'])},
                         {0, 1, 2, 3})
        self.assertTrue(any((browser.actions[r][2] & 0xff) == 0x33
                            for r in browser.tree.get_children(branches['reaction'])))
        self.assertFalse(any((browser.actions[r][2] & 0xff) in {0x33, 0x34, 0x35, 0x36}
                             for r in browser.tree.get_children(branches['other'])))

        # Regression: changing editors must reopen the correct nested branch
        # rather than searching only the directly linked normal/special rows.
        react = browser.actions[browser.tree.get_children(branches['reaction'])[0]]
        browser.populate()  # discard all lazily opened branches
        self.assertTrue(browser.select_move(react[1], react[2], react[3]))
        selected = browser.tree.selection()
        self.assertEqual(browser.actions[selected[0]], react)
        self.assertEqual(a.root_data.dirty_files(), [])

    def test_koma_fullheight_and_original_grid_rearrangement(self):
        a = self.app
        card = next(c for c in a.roster_browser.index.cards.cards if c.raw[6] == 0 and c.size == 4)
        self.assertTrue(a.open_koma_card(card.index))
        self.assertEqual(a.workspace, 'koma')
        ws = a.suite['koma']
        self.assertIsNone(ws.bottom)  # right inspector, no bottom ribbon
        snap = ws.snapshot()
        shape = ws._shape()
        self.assertIsNotNone(shape)
        labels = list(shape.cells)
        src = labels.index(1)
        dest = labels.index(2)
        self.assertTrue(ws.rearrange_panel(0, dest, shared=True))
        self.assertEqual(ws._shape().cells[src], 2)
        self.assertEqual(ws._shape().cells[dest], 1)
        ws.restore(snap)
        self.assertEqual(ws._shape().cells, tuple(labels))

    def test_support_and_passive_tree_selection(self):
        a = self.app
        browser = a.roster_browser
        roots = browser.tree.get_children('')
        support = roots[1]
        form_node = browser.tree.get_children(support)[0]
        browser._open_node(form_node)
        group = browser.tree.get_children(form_node)[0]
        browser._open_node(group)
        child = browser.tree.get_children(group)[0]
        kind, card_index = browser.actions[child]
        self.assertEqual(kind, 'card')
        browser.tree.selection_set(child)
        browser._on_select()
        self.assertEqual(a.workspace, 'koma')
        self.assertEqual(a.suite['koma'].card.index, card_index)

        passive = roots[2]
        series = browser.tree.get_children(passive)[0]
        browser._open_node(series)
        node = browser.tree.get_children(series)[0]
        self.assertEqual(browser.actions[node][0], 'card')
        browser.tree.selection_set(node)
        browser._on_select()
        self.assertEqual(a.workspace, 'koma')
        self.assertEqual(a.suite['koma'].card.raw[6], 2)

    def test_koma_edits_stay_staged_when_switching_then_save(self):
        from unittest.mock import patch
        a = self.app
        a.open_root(str(DATA))
        c = next(card for card in a.roster_browser.index.cards.cards
                 if card.raw[6] == 0 and card.size == 4)
        self.assertTrue(a.open_koma_card(c.index))
        ws = a.suite['koma']
        dest = list(ws._shape().cells).index(2)
        self.assertTrue(ws.rearrange_panel(0, dest, shared=True))
        self.assertTrue(ws.dirty)
        a.show_roster_animation()
        self.assertTrue(ws.dirty)
        # Apply stages in DataRoot only; deliberately refuse Save-in-place.
        with patch('app.editor.messagebox.askokcancel', return_value=True), \
             patch('app.editor.messagebox.askyesno', return_value=False):
            a.save(True)
        self.assertFalse(ws.dirty)
        self.assertIn('bin/kshape.bin', a.root_data.dirty_files())
        # Abandon this test's in-memory staging; never touch extracted data.
        a.open_root(str(DATA))
        self.assertFalse(a.root_data.dirty_files())

    def test_real_treeview_clicks_do_not_loop_or_redecode(self):
        """Tk queues selection events asynchronously; direct GUI method tests
        alone missed the original infinite Roster selection/reopen loop."""
        from unittest.mock import patch

        a = self.app
        a.open_root(str(DATA))
        # Start from another Roster editor mode so this must navigate, even
        # when a previous test left the same original ALMT selected.
        a.show_workspace('koma')
        a.update()
        browser = a.roster_browser
        tree = browser.tree
        roots = tree.get_children('')

        battle = tree.get_children(roots[0])[0]
        browser._open_node(battle)
        moves = next(node for node in tree.get_children(battle)
                     if browser.actions[node][0] == 'moves')
        browser._open_node(moves)
        move = next(node for node in tree.get_children(moves)
                    if browser.actions.get(node, ('',))[0] == 'move')
        _, form, mid, member = browser.actions[move]

        original = a.open_move_resource
        count = 0

        def bounded_move(*args, **kwargs):
            nonlocal count
            count += 1
            if count > 3:
                raise AssertionError('Roster selection reopens the same move endlessly')
            return original(*args, **kwargs)

        # Both the original hidden list and the Inspector must reuse the
        # loaded ALMT, never ask MoveLinks to decompress its original archive.
        with patch.object(a, 'open_move_resource', side_effect=bounded_move), \
             patch('jus_package.movelinks.MoveLinks._source_ids',
                   side_effect=AssertionError('repeated DSCP archive decompression')):
            tree.focus(move)
            tree.selection_set(move)
            a.update()  # process actual queued <<TreeviewSelect>>, not a direct call
            self.assertEqual(count, 1)
            self.assertEqual(a.workspace, 'animation')
            self.assertEqual(a.move.id, mid)
            tree.event_generate('<<TreeviewSelect>>')
            a.update()
            self.assertEqual(count, 1)

        support = tree.get_children(roots[1])[0]
        browser._open_node(support)
        group = tree.get_children(support)[0]
        browser._open_node(group)
        support_card = tree.get_children(group)[0]
        card_id = browser.actions[support_card][1]
        original_card = a.open_koma_card
        card_calls = 0

        def bounded_card(*args, **kwargs):
            nonlocal card_calls
            card_calls += 1
            if card_calls > 3:
                raise AssertionError('Roster selection reopens the same Koma endlessly')
            return original_card(*args, **kwargs)

        with patch.object(a, 'open_koma_card', side_effect=bounded_card):
            tree.focus(support_card)
            tree.selection_set(support_card)
            a.update()
            self.assertEqual(card_calls, 1)
            self.assertEqual(a.workspace, 'koma')
            self.assertEqual(a.suite['koma'].card.index, card_id)
            tree.event_generate('<<TreeviewSelect>>')
            a.update()
            self.assertEqual(card_calls, 1)

        passive_root = roots[2]
        tree.item(passive_root, open=True)
        passive_series = tree.get_children(passive_root)[0]
        tree.focus(passive_series)
        tree.selection_set(passive_series)
        tree.event_generate('<<TreeviewSelect>>')
        a.update()  # expanding a visible passive series must not hang
        self.assertEqual(browser.actions[passive_series][0], 'passive-series')
        self.assertGreater(len(tree.get_children(passive_series)), 0)

    def test_workspace_switches_use_single_roster_tab(self):
        a = self.app
        for workspace in ('level', 'screen', 'archive', 'roster', 'koma', 'animation'):
            a.show_workspace(workspace)
            self.assertTrue(a.ws[a.workspace].winfo_exists())
        self.assertEqual(a._last_roster_view, 'animation')


if __name__ == '__main__':
    unittest.main()
