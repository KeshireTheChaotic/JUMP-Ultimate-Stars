"""Reproduce source effect counts independently of generated research CSVs.

This is a source audit: not an emulator animation/combat acceptance test.
"""
from __future__ import annotations
from collections import Counter
from pathlib import Path
import os
import unittest

from jus_formats import almt, chrbin, roster
from jus_package.project import DataRoot,join
from jus_package import dynamicgeometry, effectlinks, spawns
from jus_package.resources import ResourceIndex
from jus_package.shotvisuals import source_shots

DATA=Path(os.environ.get('JUS_DATA',r'D:\Library\Development\JUS\Data'))


@unittest.skipUnless((DATA/'chr/ChrArc.aar').is_file() and
                     (DATA/'chr/ChrBin.aar').is_file(),
                     'Original JUS data not present')
class AllOriginalEffectGeometry(unittest.TestCase):
    def test_all_authoring_paths_and_gx_source_images(self):
        root=DataRoot(DATA)
        common={}
        for arc in root.effect_archives():
            for entry in root.archive(arc).entries:
                if entry.ext == '.amt':
                    spawns.build_catalog(
                        [(join(arc,entry.name),almt.parse(entry.payload()))],common)
        self.assertEqual(len(common),108)
        counts=Counter()
        all_scoped={}
        cross_pending=[]
        for form in roster.BATTLE_IDS:
            sources=root.character_sources(form)
            scope=[entry['path'] for entry in sources
                   if entry['role'] in ('image-archive','animation-archive')]
            catalog=dict(common)
            scoped=[]
            for arc in [entry['path'] for entry in sources
                        if entry['role']=='animation-archive']:
                for entry in root.archive(arc).entries:
                    if entry.ext != '.amt':
                        continue
                    path=join(arc,entry.name)
                    table=almt.parse(entry.payload())
                    scoped.append((path,table))
                    spawns.build_catalog([(path,table)],catalog)
                    for m in table.moves:
                        all_scoped.setdefault(m.id,[]).append((form,path))
            counts['tables']+=len(scoped)
            counts['moves']+=sum(len(table.moves) for _,table in scoped)
            for path,table in scoped:
                for move in table.moves:
                    for source in spawns.keyed_spawns(move,table.node_names):
                        counts['generate']+=1
                        self.assertIn(source.effect_id,catalog,(form,hex(source.effect_id),path))
            main=almt.parse(root.read(join('chr/ChrArc.aar',
                f'chr/{form}.aar',f'{form}.amt')))
            shot_p=join('chr/ChrBin.aar',f'chr/shot/{form}.bin')
            shot_table=(chrbin.parse(root.read(shot_p),f'chr/shot/{form}.bin')
                        if root.exists(shot_p) else None)
            effect_p=join('chr/ChrBin.aar',f'chr/effect/{form}.bin')
            fx_records=effectlinks.parse_effect_records(
                root.read(effect_p)) if root.exists(effect_p) else ()
            index=ResourceIndex(root,scope)
            for move in main.moves:
                if shot_table is not None:
                    for ev in source_shots(move,main.node_names,shot_table):
                        counts['shot']+=1
                        child=catalog.get(ev.record.reference0)
                        self.assertIsNotNone(child,(form,hex(move.id),ev.record_index))
                        state=spawns.state_at(child[0],0)
                        visual=[st for st in state.values() if 'TextureID' in st]
                        self.assertEqual(len(visual),1,(form,hex(ev.record.reference0)))
                        tid=visual[0]['TextureID']
                        source=index.sprite(tid)
                        self.assertIsNotNone(source,(form,hex(tid)))
                        self.assertTrue(source[1].is_atlas,(form,hex(tid)))
                        counts[f'DSIG_0x{source[1].mode:02X}']+=1
                        if ev.handler==1:
                            counts['two_child_source_shots']+=1
                            self.assertTrue(ev.directly_constructed_animations)
                            for rid in ev.references:
                                if rid:self.assertIn(rid,catalog)
                        if ev.record.optional_reference and \
                             ev.record.optional_reference not in catalog:
                            cross_pending.append((form,ev.record.optional_reference))
                if fx_records:
                    counts['pursuer']+=len(effectlinks.pursuer_events(
                        move,main.node_names,fx_records))
        for form,rid in cross_pending:
            targets=all_scoped.get(rid,[])
            self.assertTrue(targets,(form,hex(rid)))
            self.assertTrue(all(other!=form for other,_ in targets))
        self.assertEqual(len(cross_pending),12)
        self.assertEqual(counts['tables'],315)
        self.assertEqual(counts['moves'],6839)
        self.assertEqual(counts['generate'],4351)
        self.assertEqual(counts['shot'],909)
        self.assertEqual(counts['two_child_source_shots'],46)
        self.assertEqual(counts['pursuer'],54)
        self.assertEqual(counts['DSIG_0x50'],558)
        self.assertEqual(counts['DSIG_0x20'],351)


if __name__=='__main__':
    unittest.main()
