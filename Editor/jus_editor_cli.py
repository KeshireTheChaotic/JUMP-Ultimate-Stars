"""Command-line front end for JUS sprite/animation packages.

    py -3 jus_editor_cli.py list      [--data ROOT]
    py -3 jus_editor_cli.py export    bb_b_01 OUT_DIR [--data ROOT] [--zip] [--no-tables] [--no-window]
    py -3 jus_editor_cli.py export-archive efc/comm_a.aar OUT_DIR [--data ROOT]
    py -3 jus_editor_cli.py import    PACKAGE --data ROOT (--out OUT_ROOT | --in-place) [--dry-run]
    py -3 jus_editor_cli.py rebuild   efc/comm_a.aar --data ROOT --out OUT_ROOT     (parse + rebuild check)
"""
from __future__ import annotations

import argparse
import os
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))

from jus_package import package  # noqa: E402
from jus_package.project import DataRoot  # noqa: E402

DEFAULT_DATA = os.environ.get('JUS_DATA_ROOT', r'D:\Library\Development\JUS\data')


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    sub = ap.add_subparsers(dest='cmd', required=True)
    p = sub.add_parser('list')
    p.add_argument('--data', default=DEFAULT_DATA)
    p = sub.add_parser('export')
    p.add_argument('character')
    p.add_argument('out')
    p.add_argument('--data', default=DEFAULT_DATA)
    p.add_argument('--zip', action='store_true')
    p.add_argument('--no-tables', action='store_true', help='skip ChrBin gameplay tables')
    p.add_argument('--no-window', action='store_true', help='skip ChrWin window sprites')
    p = sub.add_parser('export-archive')
    p.add_argument('archive', help='resource path, e.g. efc/comm_a.aar or chr/ChrArc.aar|chr/bb_b_01.aar')
    p.add_argument('out')
    p.add_argument('--data', default=DEFAULT_DATA)
    p.add_argument('--zip', action='store_true')
    p = sub.add_parser('import')
    p.add_argument('package')
    p.add_argument('--data', default=DEFAULT_DATA)
    g = p.add_mutually_exclusive_group(required=True)
    g.add_argument('--out', help='write rebuilt archives under this root')
    g.add_argument('--in-place', action='store_true', help='overwrite the data root (keeps .orig backups)')
    g.add_argument('--dry-run', action='store_true')
    p = sub.add_parser('rebuild')
    p.add_argument('archive')
    p.add_argument('--data', default=DEFAULT_DATA)
    p.add_argument('--out', required=True)
    a = ap.parse_args(argv)
    root = DataRoot(a.data)
    say = lambda s: print('  ' + s)  # noqa: E731
    if a.cmd == 'list':
        print('Characters:', ' '.join(root.characters()))
        print('Effect archives:', ' '.join(root.effect_archives()))
    elif a.cmd == 'export':
        out = package.export_character(root, a.character, Path(a.out), zip_output=a.zip, progress=say,
                                       ) if not (a.no_tables or a.no_window) else \
            package.export_package(root, package.character_sources(root, a.character, not a.no_tables,
                                                                   not a.no_window),
                                   Path(a.out), name=a.character, kind='character', zip_output=a.zip,
                                   progress=say)
        print('Exported', out)
    elif a.cmd == 'export-archive':
        out = package.export_effect(root, a.archive, Path(a.out), zip_output=a.zip, progress=say)
        print('Exported', out)
    elif a.cmd == 'import':
        rep = package.import_package(Path(a.package), root, out_root=None if a.in_place else a.out,
                                     write=not a.dry_run, progress=say)
        print(rep.summary())
        for m in rep.changed_members:
            print('  changed', m)
        for m in rep.added:
            print('  added  ', m)
        for w in rep.warnings:
            print('  warning', w)
        for f in rep.written:
            print('  wrote  ', f)
    elif a.cmd == 'rebuild':
        root.mark_archive_dirty(a.archive)
        for f in root.save(a.out):
            print('wrote', f)


if __name__ == '__main__':
    main()
