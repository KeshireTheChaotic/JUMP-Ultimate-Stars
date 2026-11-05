"""Synthetic tests for staged saves, rollback and unsaved index snapshots."""
import tempfile
import unittest
from pathlib import Path
from unittest.mock import patch

from jus_formats import alar, altm
from jus_package.project import DataRoot
from jus_package import registry


class AtomicSaveTests(unittest.TestCase):
    def setUp(self):
        self.tmp = tempfile.TemporaryDirectory()
        self.addCleanup(self.tmp.cleanup)
        self.path = Path(self.tmp.name)

    def test_in_place_save_has_replayable_backup(self):
        target = self.path / 'test.bin'
        target.write_bytes(b'before')
        root = DataRoot(self.path)
        root.write_file('test.bin', b'after')
        self.assertEqual(root.save(), [target])
        self.assertEqual(target.read_bytes(), b'after')
        self.assertEqual((self.path / 'test.bin.orig').read_bytes(), b'before')
        root.write_file('test.bin', b'changed again')
        root.save()
        self.assertEqual((self.path / 'test.bin.orig').read_bytes(), b'before')
        self.assertEqual(root.dirty_files(), [])

    def test_multiple_files_are_rolled_back_on_replace_error(self):
        (self.path / 'a.bin').write_bytes(b'old A')
        (self.path / 'b.bin').write_bytes(b'old B')
        root = DataRoot(self.path)
        root.write_file('a.bin', b'new A')
        root.write_file('b.bin', b'new B')
        from jus_package import project
        real_replace = project.os.replace
        errors = []

        def fail_b_once(src, dst):
            if Path(dst).name == 'b.bin' and not errors:
                errors.append('failed')
                raise OSError('synthetic final rename failure')
            return real_replace(src, dst)

        with patch('jus_package.project.os.replace', side_effect=fail_b_once):
            with self.assertRaisesRegex(OSError, 'synthetic final rename'):
                root.save()
        self.assertEqual((self.path / 'a.bin').read_bytes(), b'old A')
        self.assertEqual((self.path / 'b.bin').read_bytes(), b'old B')
        self.assertEqual(root.dirty_files(), ['a.bin', 'b.bin'])
        self.assertEqual(list(self.path.glob('.*.tmp')), [])
        root.save()
        self.assertEqual((self.path / 'a.bin').read_bytes(), b'new A')
        self.assertEqual((self.path / 'b.bin').read_bytes(), b'new B')

    def test_output_root_failed_commit_restores_destination(self):
        out = self.path / 'out'
        out.mkdir()
        for n in ('a', 'b'):
            (self.path / (n + '.bin')).write_bytes(b'source ' + n.encode())
            (out / (n + '.bin')).write_bytes(b'out ' + n.encode())
        root = DataRoot(self.path)
        root.write_file('a.bin', b'new a')
        root.write_file('b.bin', b'new b')
        from jus_package import project
        real_replace = project.os.replace
        once = []

        def fail(src, dst):
            if Path(dst).name == 'b.bin' and not once:
                once.append(1)
                raise OSError('synthetic commit error')
            return real_replace(src, dst)

        with patch('jus_package.project.os.replace', side_effect=fail):
            with self.assertRaises(OSError):
                root.save(out)
        self.assertEqual((out / 'a.bin').read_bytes(), b'out a')
        self.assertEqual((out / 'b.bin').read_bytes(), b'out b')
        self.assertEqual(root.dirty_files(), ['a.bin', 'b.bin'])

    def test_index_snapshot_sees_applied_nested_change_but_not_disk(self):
        from jus_package import project
        original = altm.AltmFile(width=1, height=1, entries=[1]).build()
        edited_map = altm.AltmFile(width=1, height=1, entries=[0x2B9]).build()
        inner = alar.Archive(version=2, entries=[alar.Entry('foo.atm', original, 0x46000001)]).build()
        outer = alar.Archive(version=2, entries=[alar.Entry('inner.aar', inner, 0x47000001)]).build()
        (self.path / 'stage.aar').write_bytes(outer)
        root = DataRoot(self.path)
        name = 'stage.aar|inner.aar|foo.atm'
        root.write(name, edited_map)
        self.assertEqual(root.read(name), edited_map)
        self.assertEqual(DataRoot(self.path).read(name), original)
        snap = root.index_snapshot()
        self.assertEqual(snap.read(name), edited_map)
        self.assertEqual(DataRoot(self.path).read(name), original)
        reg = registry.build(snap)
        self.assertIn(name, reg.resources)
        self.assertEqual(reg.resources[name].size, len(edited_map))
        self.assertEqual(root.dirty_files(), ['stage.aar'])
        root.save()
        self.assertEqual(DataRoot(self.path).read(name), edited_map)


if __name__ == '__main__':
    unittest.main()
