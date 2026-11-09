"""Regressions for extracted ChrBin inspector formatters and Tk presenter routing.

Reference output fingerprints were independently recorded from the pre-R08
EditorApp implementation against original supplied ChrBin.aar records.
"""
from __future__ import annotations
from hashlib import sha256
import json,os,unittest
from pathlib import Path
from types import SimpleNamespace
from unittest.mock import Mock

from jus_formats import chrbin
from jus_package import chrdiagnostics
from jus_package.project import DataRoot
from app.editor import EditorApp

ROOT=Path(__file__).resolve().parents[1]
GOLD=json.loads((ROOT/'tests/fixtures/audit_chrbin_format_golden.json').read_text('utf8'))


class SpyInspector:
    def __init__(self):self.records=[]
    def clear(self):self.records.clear()
    def section(self,*a,**kw):self.records.append(('section',a,kw))
    def value(self,*a,**kw):self.records.append(('value',a,kw))
    def text(self,*a,**kw):self.records.append(('text',a,kw))
    def buttons(self,*a,**kw):self.records.append(('buttons',a,kw))
    def evidence(self,*a,**kw):self.records.append(('evidence',a,kw))


class FormatterTest(unittest.TestCase):
    @unittest.skipUnless(os.environ.get('JUS_DATA_ROOT'),'Requires original unpacked ChrBin')
    def test_all_original_chrbin_formatting_matches_pre_r08(self):
        root=DataRoot(os.environ['JUS_DATA_ROOT'])
        archive=root.archive('chr/ChrBin.aar')
        hashes={kind:sha256() for kind in ('shot','col')}
        files={kind:0 for kind in hashes}
        records={kind:0 for kind in hashes}
        entries=sorted(e.name for e in archive.entries
                       if e.name.startswith(('chr/shot/','chr/col/')))
        for name in entries:
            table=chrbin.parse(root.read('chr/ChrBin.aar|'+name),name)
            kind=table.kind
            self.assertIn(kind,hashes)
            files[kind]+=1
            for index in range(table.count):
                rec=table.shot_record(index) if kind=='shot' else table.col_record(index)
                line=(chrdiagnostics.shot_record_detail(rec) if kind=='shot'
                      else chrdiagnostics.collision_record_detail(rec))
                hashes[kind].update(f'{name}:{index}\n{line}\n'.encode('utf8'))
                records[kind]+=1
        self.assertEqual(files,GOLD['files'])
        self.assertEqual(records,GOLD['records'])
        self.assertEqual({k:v.hexdigest() for k,v in hashes.items()},GOLD['sha256'])

    @unittest.skipUnless(os.environ.get('JUS_DATA_ROOT'),'Requires original ChrBin file')
    def test_member_inspector_presenter_shows_original_records_without_tk(self):
        root=DataRoot(os.environ['JUS_DATA_ROOT'])
        entries=root.archive('chr/ChrBin.aar').entries
        for kind,name in [('shot','chr/shot/bb_b_01.bin'),('col','chr/col/bb_b_01.bin')]:
            e=next(x for x in entries if x.name==name)
            ins=SpyInspector()
            actor=SimpleNamespace(
                root_data=root,container='chr/ChrBin.aar',_table=None,
                inspector=ins,member_details=ins,_selected_member=lambda:e,
                add_member=lambda:None,rebuild_check=lambda:None,
                extract_member=lambda:None,replace_member=lambda:None,
                remove_member=lambda:None)
            EditorApp._member_details(actor)
            sections=[args[0] for tag,args,_ in ins.records if tag=='section' and args]
            values=[args for tag,args,_ in ins.records if tag=='value']
            self.assertIn('Archive',sections)
            self.assertIn('Member',sections)
            self.assertIn('Shot work records - read-only' if kind=='shot'
                          else 'Collision metadata - read-only',sections)
            self.assertTrue(any(a[0]=='Count' for a in values))

    def test_shot_inspector_wrapper_retains_no_event_state(self):
        ins=SpyInspector()
        actor=SimpleNamespace(_shot_events_current=lambda:())
        EditorApp._inspect_shot_source(actor,ins)
        self.assertTrue(any(tag=='section' and args[0]=='Shot source (read-only)'
                            for tag,args,_ in ins.records))
        self.assertTrue(any(tag=='text' and 'No source shot commands' in args[0]
                            for tag,args,_ in ins.records))


if __name__=='__main__':unittest.main()
