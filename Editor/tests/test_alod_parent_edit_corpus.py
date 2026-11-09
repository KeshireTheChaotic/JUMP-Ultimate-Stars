"""ALOD original-corpus field census and safe parent-value editing."""
from pathlib import Path
import unittest
from jus_formats import alar,alod

DATA=Path(r"D:\Library\Development\JUS\Data")
CHAR=DATA/"chr/ChrArc.aar"


class AlodFieldTests(unittest.TestCase):
    @unittest.skipUnless(CHAR.is_file(),"Original ChrArc unavailable")
    def test_change_one_original_parent_value_without_repacking(self):
        outer=alar.open_nested(CHAR.read_bytes())
        inner=alar.open_nested(outer.get("chr/bb_b_01.aar").data)
        original=inner.get("bb_b_01.aod").payload()
        parsed=alod.parse(original)
        self.assertIn("ParentNodeID",parsed.field_names)
        self.assertEqual([n.name for n in parsed.nodes],["SP01","GN01","GN02","GN03"])
        self.assertEqual(parsed.nodes[1].parent,"SP01")
        changed=parsed.replace_parent("GN01","GN02")
        self.assertEqual(changed.nodes[1].parent,"GN02")
        self.assertEqual(changed.build()[:20],original[:20])
        differing=[i for i,(a,b) in enumerate(zip(original,changed.build())) if a!=b]
        self.assertEqual(differing,[0x44,0x45,0x47])
        self.assertEqual(len(changed.build()),len(original))
        self.assertEqual(alod.parse(changed.build()).nodes[1].parent,"GN02")
        self.assertEqual(parsed.nonstandard_parent_links(),[])
        self.assertEqual(changed.nonstandard_parent_links(),[("GN01","GN02","GN  ")])
        self.assertEqual(inner.get("bb_b_01.aod").payload(),original)

    @unittest.skipUnless(CHAR.is_file(),"Original ChrArc unavailable")
    def test_reject_missing_parent_and_undeclared_parent_field(self):
        outer=alar.open_nested(CHAR.read_bytes())
        inner=alar.open_nested(outer.get("chr/bb_b_01.aar").data)
        parsed=alod.parse(inner.get("bb_b_01.aod").payload())
        with self.assertRaises(ValueError):parsed.replace_parent("GN01","MISS")
        with self.assertRaises(ValueError):parsed.replace_parent("GN01","GN01")
        with self.assertRaises(ValueError):parsed.replace_parent("GNXX","SP01")

    @unittest.skipUnless(DATA.is_dir(),"Original JUS data absent")
    def test_1247_original_alods_and_only_proven_descriptor(self):
        count=0
        properties=0
        kinds=set()
        field_counts={}
        def visit(payload,depth=0):
            nonlocal count,properties
            self.assertLessEqual(depth,3)
            archive=alar.open_nested(payload)
            for m in archive.entries:
                if m.name.lower().endswith(".aar"):
                    visit(m.data,depth+1)
                elif m.name.lower().endswith(".aod"):
                    count+=1
                    raw=m.payload()
                    entry=alod.parse(raw)
                    self.assertEqual(entry.build(),raw)
                    self.assertEqual(entry.nonstandard_parent_links(),[])
                    for key in entry.field_names:
                        field_counts[key]=field_counts.get(key,0)+1
                    for node in entry.nodes:
                        kinds.add(node.kind)
                        for descriptor,value in node.properties:
                            properties+=1
                            self.assertEqual(descriptor,0x10)
                            self.assertEqual(len(value),4)
                            self.assertEqual(value.decode("ascii"),node.parent)
                            self.assertIn(node.parent,{x.name for x in entry.nodes})
        for path in DATA.rglob("*.aar"):visit(path.read_bytes())
        self.assertEqual(count,1247)
        self.assertEqual(properties,1078)
        self.assertEqual(field_counts,{"ParentNodeID":529})
        self.assertEqual(kinds,{"SP  ","GN  "})


if __name__=="__main__":unittest.main()
