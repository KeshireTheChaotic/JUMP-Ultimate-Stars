"""Native VM tutorial editing, mission bindings and in-memory Level integration.

All original JUS data is read-only on disk. Editor GUI tests stage in-memory
modifications without invoking DataRoot.save or changing source archives.
"""
from pathlib import Path
import hashlib,os,struct,sys,unittest

EDITOR=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(EDITOR))
DATA=Path(r"D:\Library\Development\JUS\Data")
if not DATA.is_dir():
    DATA=(EDITOR/".."/".."/".."/"Data").resolve()
ORIGINAL=DATA.is_dir()

from jus_formats import tutorial
from jus_formats.progression import DefinitionTable
from jus_package.project import DataRoot
from jus_package.progression import ProgressionCatalog
from jus_package import tutorials


@unittest.skipUnless(ORIGINAL,"Original JUS Data not available")
class TutorialSourceTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.root=DataRoot(DATA)
        cls.catalog=ProgressionCatalog.load(cls.root)

    def test_all_seven_original_scripts_roundtrip_byte_exact(self):
        counts=[157,99,195,136,70,143,569]
        commands=messages=0
        for path,total in zip(tutorial.TUTORIAL_FILES,counts):
            source=self.root.read(path)
            s=tutorial.Script.parse(source)
            self.assertEqual(len(s.commands),total)
            self.assertEqual(s.build(),source)
            self.assertEqual(s.commands[-1].opcode,13)
            commands+=len(s.commands)
            messages+=sum(cmd.opcode==9 for cmd in s.commands)
        self.assertEqual((commands,messages),(1369,317))

    def test_message_text_edit_copy_on_write_cp932_and_bytes(self):
        path=tutorial.TUTORIAL_FILES[0]
        source=self.root.read(path)
        original=tutorial.Script.parse(source)
        index=next(i for i,c in enumerate(original.commands) if c.opcode==9)
        new=original.edit_message(index,"テスト　変数 123")
        self.assertEqual(new.message(new.commands[index].arg1),"テスト　変数 123")
        self.assertEqual(new.pool[:len(original.pool)],original.pool)
        self.assertEqual(len(new.pool),len(original.pool)+len("テスト　変数 123".encode("cp932"))+1)
        self.assertEqual(tutorial.Script.parse(new.build()).build(),new.build())
        self.assertEqual(tutorial.Script.parse(source).build(),source)
        with self.assertRaises(UnicodeError):
            original.edit_message(index,"Unsupported emoji 🫠")
        with self.assertRaises(ValueError):
            original.edit_message(index,"bad\0NUL")

    def test_commands_can_edit_insert_delete_with_native_cleanup_preserved(self):
        original=tutorial.Script.parse(self.root.read("battle/tutorial1.bin"))
        updated=original.edit(2,tutorial.Instruction(10,0x33,0))
        self.assertEqual(updated.commands[2].arg1,0x33)
        inserted=updated.insert(2,tutorial.Instruction(11,0xfffe0007,0x11223344))
        self.assertEqual(inserted.commands[2].action_id,7)
        self.assertEqual(inserted.commands[2].action_parameter,-2)
        rebuilt=tutorial.Script.parse(inserted.build())
        self.assertEqual(rebuilt.commands,inserted.commands)
        self.assertEqual(rebuilt.delete(2).commands,updated.commands)
        with self.assertRaises(ValueError):
            rebuilt.delete(len(rebuilt.commands)-1)
        with self.assertRaises(ValueError):
            rebuilt.edit(len(rebuilt.commands)-1,tutorial.Instruction(0,0,0))
        with self.assertRaises(ValueError):
            rebuilt.insert(0,tutorial.Instruction(13,0,0))
        with self.assertRaises(ValueError):
            rebuilt.edit(0,tutorial.Instruction(16,0,0))

    def test_seven_tutorial_definitions_and_18_nodes(self):
        c=self.catalog
        expected={0:0,1:1,2:2,3:0,72:3,73:4,74:5}
        names={0:"Tutorial 1",1:"Tutorial 2",2:"Tutorial 3",3:"Tutorial 4",
               72:"Tutorial 5",73:"Tutorial 6",74:"Tutorial 7"}
        for i,slot in expected.items():
            b=c.battles.get(i)
            self.assertEqual(b.rule,3)
            self.assertEqual(b.name,names[i])
            self.assertEqual(tutorials.slot_for_definition(b),slot)
            self.assertEqual(tutorials.script_for_definition(b),tutorials.BATTLE_FILES[slot])
        nodes=tutorials.links_for_catalog(c)
        self.assertEqual(len(nodes),18)
        self.assertEqual([x.node_id for x in nodes if x.definition_id==0],
                         [0,4,5,6,29,30,66,67,100,101,118,134])
        self.assertEqual([x.node_id for x in nodes if x.definition_id==72],[139])
        self.assertEqual(len([i for i in range(c.missions.count)
                              if tutorials.script_for_definition(c.missions.get(i),is_battle=False)]),0)
        self.assertEqual(len(tutorials.consumer_summary(c,"battle/tutorial0.bin")),13)
        self.assertEqual(tutorials.binding_for_node(c,0),"battle/tutorial0.bin")
        self.assertEqual(tutorials.binding_for_node(c,3),"battle/tutorial0.bin")
        self.assertEqual(tutorials.binding_for_node(c,140),"battle/tutorial4.bin")

    def test_mission_format_can_reuse_six_slots_not_allocate_seventh(self):
        table=self.catalog.battles
        original=table.build()
        trial=DefinitionTable.parse(original)
        before=trial.get(72).data
        trial.set_tutorial_slot(72,5)
        after=trial.get(72).data
        self.assertEqual(after[:0x70],before[:0x70])
        self.assertEqual(after[0x74:],before[0x74:])
        self.assertEqual(int.from_bytes(after[0x70:0x74],"little"),5)
        self.assertEqual(tutorials.script_for_definition(trial.get(72)),"battle/tutorial5.bin")
        self.assertEqual(table.build(),original)
        with self.assertRaises(ValueError):
            trial.set_tutorial_slot(72,6)
        with self.assertRaises(ValueError):
            trial.set_tutorial_slot(72,0xffffffff)
        # Original fixed 6-entry table: executable does not derive an
        # extra filename from a new J-Galaxy definition.
        rom=Path(r"D:\Library\Development\JUS\reverse_engineering\verified_binaries\52e262163e0d304c\arm9_overlay_0006.bin")
        if rom.exists():
            b=rom.read_bytes()
            offset=0x02171c20-0x0214cd20
            ptrs=struct.unpack_from("<6I",b,offset)
            self.assertEqual(len(set(ptrs)),6)
            self.assertTrue(all(0x0214cd20<=p<0x0214cd20+len(b) for p in ptrs))
        self.assertEqual(len(tutorials.BATTLE_FILES),6)
        self.assertEqual(tutorials.DECK_FILE,"deckmake/tutorial.bin")


@unittest.skipUnless(ORIGINAL and (sys.platform=="win32" or os.getenv("DISPLAY")),
                     "Original source files or graphical Tk desktop missing")
class TutorialLevelIntegration(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        from app.editor import EditorApp
        cls.app=EditorApp(str(DATA))
        cls.app.withdraw()
        cls.app.open_root(str(DATA))
        cls.app.update_idletasks()
    @classmethod
    def tearDownClass(cls):
        cls.app.destroy()

    def test_level_tutorial_panel_script_selection_and_shared_node_mapping(self):
        ws=self.app.suite["level"]
        self.assertIn("tutorial",ws.bottom.pages)
        self.assertEqual(len(ws.tutorials.scripts),7)
        self.assertFalse(ws.tutorials.dirty)
        ws.select_mission(0)
        self.assertEqual(ws.tutorials.current,"battle/tutorial0.bin")
        ws.select_mission(1)
        self.assertEqual(ws.tutorials.current,"battle/tutorial1.bin")
        ws.select_mission(3)
        self.assertEqual(ws.tutorials.current,"battle/tutorial0.bin")
        ws.select_mission(139)
        self.assertEqual(ws.tutorials.current,"battle/tutorial3.bin")
        ws.tutorials.choose("deckmake/tutorial.bin")
        self.assertIn("Deckmaking",ws.tutorials.context_var.get())

    def test_command_text_editor_apply_only_to_in_memory_source_and_undo_snapshot(self):
        a=self.app
        ws=a.suite["level"]
        ws.select_mission(1)
        panel=ws.tutorials
        path=panel.current
        self.assertEqual(path,"battle/tutorial1.bin")
        baseline=(DATA/path).read_bytes()
        sha=hashlib.sha256(baseline).hexdigest()
        self.assertEqual(panel.originals[path],baseline)
        snap=panel.snapshot()
        panel.table.selection_set("2")
        panel.select_instruction()
        self.assertEqual(panel.scripts[path].commands[2].opcode,10)
        panel.op_var.set("10")
        panel.arg1_var.set("0x13")
        panel.arg2_var.set("0")
        panel.update_command()
        self.assertTrue(panel.dirty)
        self.assertTrue(ws.dirty)
        self.assertEqual(panel.scripts[path].commands[2].arg1,0x13)
        self.assertEqual(ws.doc(),"level-tutorial")
        self.assertEqual(panel.apply(),[path])
        self.assertFalse(panel.dirty)
        self.assertEqual(tutorial.Script.parse(a.root_data.read(path)).commands[2].arg1,0x13)
        self.assertIn(path,a.root_data.dirty_files())
        # No .save() invoked: all testing remains in-session only.
        self.assertEqual(hashlib.sha256((DATA/path).read_bytes()).hexdigest(),sha)
        # Undo source blobs can restore the original in-memory script.
        panel.originals[path]=baseline
        panel.restore(snap)
        self.assertEqual(panel.scripts[path].build(),baseline)
        self.assertFalse(panel.dirty)
        # Reset DataRoot in-memory staged loose bytes; no disk writes.
        a.root_data.write_file(path,baseline)
        self.assertEqual(a.root_data.read(path),baseline)

    def test_selected_battle_definition_shows_conditional_script_slot(self):
        ws=self.app.suite["level"]
        ws.select_mission(140)
        self.assertEqual(ws.missions.tutorial_slot_var.get(),"4")
        self.assertIn("battle/tutorial4.bin",ws.missions.tutorial_link_label.cget("text"))
        self.assertEqual(str(ws.missions.tutorial_slot_entry.cget("state")),"normal")


if __name__=="__main__":
    unittest.main()
