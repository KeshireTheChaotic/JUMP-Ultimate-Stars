"""Original NoteTrack shot-source cross-reference and constructor sprite diagnostics."""
from __future__ import annotations

import os
import unittest
from collections import Counter
from pathlib import Path

from jus_formats import almt, chrbin, roster
from jus_package.project import DataRoot, join
from jus_package.resources import ResourceIndex
from jus_package.shotvisuals import source_shots

DATA = Path(os.environ.get('JUS_DATA', r'D:\Library\Development\JUS\Data'))


@unittest.skipUnless((DATA / 'chr/ChrBin.aar').is_file(), 'Original JUS Data not available')
class OriginalShotSource(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.root = DataRoot(DATA)

    def test_bobobo_5koma_shot_source(self):
        cid = 'bb_b_01'
        almt_source = join('chr/ChrArc.aar', f'chr/{cid}.aar', f'{cid}.amt')
        shots = join('chr/ChrBin.aar', f'chr/shot/{cid}.bin')
        table = almt.parse(self.root.read(almt_source))
        move = table.move_by_id(0x0008412B)
        self.assertIsNotNone(move)
        src = source_shots(move, table.node_names,
                           chrbin.parse(self.root.read(shots), f'chr/shot/{cid}.bin'))
        self.assertEqual(len(src), 1)
        ev = src[0]
        self.assertEqual((ev.tick, ev.record_index, ev.launch_x, ev.launch_y,
                          ev.handler), (46, 5, 46, -28, 1))
        self.assertEqual(ev.references, (0x84182, 0x84181, 0x84180))
        self.assertEqual(ev.directly_constructed_animations, (0x84180, 0x84182))
        self.assertEqual((ev.record.lifetime, ev.nominal_end), (40, 86))
        self.assertFalse(ev.nominally_active(45))
        self.assertTrue(ev.nominally_active(46))
        self.assertTrue(ev.nominally_active(86))
        self.assertFalse(ev.nominally_active(87))
        from jus_package import spawns
        scope = [s['path'] for s in self.root.character_sources(cid)
                 if s['role'] in ('animation-archive', 'image-archive')]
        index = ResourceIndex(self.root, scope)
        catalog = {}
        for arc in scope:
            for entry in self.root.archive(arc).entries:
                if entry.ext == '.amt':
                    spawns.build_catalog([(join(arc, entry.name), almt.parse(entry.payload()))],
                                         catalog)
        frames = []
        for anim_id in ev.directly_constructed_animations:
            self.assertIn(anim_id, catalog)
            child, names, source = catalog[anim_id]
            self.assertGreater(child.duration, 0)
            states = spawns.state_at(child, 0)
            for node_state in states.values():
                if 'TextureID' in node_state:
                    tid = node_state['TextureID']
                    bounds = node_state.get('BoundsIndex')
                    self.assertIsNotNone(index.sprite_ref(tid))
                    frames.append((anim_id, tid, bounds))
        self.assertEqual(frames, [(0x84180, 0x84180, 0), (0x84182, 0x84180, 4)])

    def test_entire_battle_form_shot_corpus(self):
        counts = Counter()
        missing = []
        for cid in roster.BATTLE_IDS:
            mpath = join('chr/ChrArc.aar', f'chr/{cid}.aar', f'{cid}.amt')
            table = almt.parse(self.root.read(mpath))
            p = join('chr/ChrBin.aar', f'chr/shot/{cid}.bin')
            if not self.root.exists(p):
                continue
            records = chrbin.parse(self.root.read(p), f'chr/shot/{cid}.bin')
            scope = [s['path'] for s in self.root.character_sources(cid)
                     if s['role'] in ('animation-archive', 'image-archive')]
            index = ResourceIndex(self.root, scope)
            from jus_package import spawns
            catalog = {}
            for path in scope:
                try:
                    for entry in self.root.archive(path).entries:
                        if entry.ext == '.amt':
                            spawns.build_catalog([(join(path, entry.name),
                                                   almt.parse(entry.payload()))], catalog)
                except (KeyError, ValueError, OSError):
                    continue
            for move in table.moves:
                for event in source_shots(move, table.node_names, records):
                    counts['total'] += 1
                    counts[event.handler] += 1
                    if event.handler == 1:
                        counts['handler1'] += 1
                        for rid in event.directly_constructed_animations:
                            if rid not in catalog:
                                missing.append((cid, move.id, rid))
        self.assertEqual(counts['total'], 909)
        self.assertEqual(counts['handler1'], 46)
        self.assertEqual(missing, [])

    def test_shot_nonvisual_handler_not_assigned_handler1_art(self):
        cid='bb_b_01'
        table=chrbin.parse(self.root.read(
            join('chr/ChrBin.aar',f'chr/shot/{cid}.bin')),f'chr/shot/{cid}.bin')
        self.assertFalse(table.shot_record(11).handler_id == 1)
        # This ensures a handler7's references don't silently become a fabricated beam.
        from jus_package.shotvisuals import ShotInvocation
        ev=ShotInvocation(1,0,'SP01',11,0,0,(),table.shot_record(11))
        self.assertEqual(ev.directly_constructed_animations, ())


if __name__ == '__main__':
    unittest.main()
