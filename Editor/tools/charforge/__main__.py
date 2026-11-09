"""py -3 -m tools.charforge {info,scaffold,build,validate,names} … (run from the Editor folder)."""
from __future__ import annotations

import argparse
import json
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[2]))

from jus_package.project import DataRoot  # noqa: E402

from . import forge  # noqa: E402

DEFAULT_DATA = r'D:\Library\Development\JUS\data'


def main(argv=None) -> int:
    ap = argparse.ArgumentParser(prog='charforge', description=__doc__)
    ap.add_argument('--data', default=DEFAULT_DATA, help='extracted game data root')
    sub = ap.add_subparsers(dest='cmd', required=True)
    p = sub.add_parser('census', help='audit all 74 hard-coded battle slots and their assets')
    p.add_argument('--out', default='docs/CHARFORGE_CORPUS_CENSUS_20261108.json')
    p = sub.add_parser('info', help='what a replacement for a roster slot must provide')
    p.add_argument('slot')
    p.add_argument('--out')
    p = sub.add_parser('scaffold', help='export template + effects, write brief and art folders')
    p.add_argument('template')
    p.add_argument('slot')
    p.add_argument('work')
    p.add_argument('--name', default='')
    p.add_argument('--concept', default='')
    p = sub.add_parser('draft', help='placeholder art: recolour the template frames onto concept colours')
    p.add_argument('work')
    p.add_argument('--colours', default='', help='comma-separated #rrggbb (default: concept.json)')
    p.add_argument('--overwrite', action='store_true')
    p = sub.add_parser('generate', help='source-guided pixel-art sprites, effects and Koma panel art')
    p.add_argument('work')
    p.add_argument('--overwrite', action='store_true')
    p = sub.add_parser('review', help='generate original-vs-new image gallery for all art')
    p.add_argument('work')
    p = sub.add_parser('build', help='work folder → replacement editor package')
    p.add_argument('work')
    p.add_argument('out')
    p = sub.add_parser('validate', help='dry-run import + link checks (writes nothing)')
    p.add_argument('package')
    p.add_argument('slot')
    p = sub.add_parser('names', help='set the slot display name in data/bin/chr_b_t.bin (.orig backup)')
    p.add_argument('slot')
    p.add_argument('name')
    p.add_argument('--dry-run', action='store_true')
    a = ap.parse_args(argv)
    root = DataRoot(a.data)
    if a.cmd == 'census':
        from . import census
        r = census.write(root, Path(a.out))
        print(json.dumps({'total_slots': r['total_slots'], 'slots_with_errors': r['slots_with_errors'],
                          'slots_with_warnings': r['slots_with_warnings'], 'totals': r['totals'],
                          'report': a.out}, indent=1))
        return 1 if r['slots_with_errors'] else 0
    if a.cmd == 'info':
        r = forge.info(root, a.slot)
        text = json.dumps(r, indent=1, ensure_ascii=False)
        if a.out:
            Path(a.out).write_text(text + '\n', encoding='utf-8')
        print(text)
        return 0
    if a.cmd == 'scaffold':
        b = forge.scaffold(root, a.template, a.slot, Path(a.work), name=a.name, concept_text=a.concept)
        own = [s for s in b['sprites'] if not s['shared']]
        print(f'scaffolded {a.work}: {len(own)} sprite sheets to draw '
              f'({sum(len([f for f in s["frames"] if not f.get("empty")]) for s in own)} frames), '
              f'{len(b["effects"])} effect moves. Read BRIEF.md.')
        return 0
    if a.cmd == 'draft':
        cols = [c.strip() for c in a.colours.split(',') if c.strip()]
        r = forge.draft(Path(a.work), cols or None, overwrite=a.overwrite)
        print(f'draft: wrote {r["written"]} placeholder art file(s) with colours {r["colours"]}')
        return 0
    if a.cmd == 'generate':
        from . import generator
        r = generator.generate(Path(a.work), overwrite=a.overwrite)
        print(json.dumps(r, indent=1, ensure_ascii=False))
        return 0
    if a.cmd == 'review':
        from . import review
        print(json.dumps(review.write(Path(a.work)), indent=1, ensure_ascii=False))
        return 0
    if a.cmd == 'build':
        r = forge.build(root, Path(a.work), Path(a.out))
        for e in r['errors']:
            print('ERROR', e)
        print(f'{len(r["sprites"])} sprite sheets, {len(r.get("komas", []))} Koma members, '
              f'{r.get("almt_moves_indexed", 0)} ALMT moves indexed'
              + ('' if not r['errors'] else ' — build stopped'))
        return 1 if r['errors'] else 0
    if a.cmd == 'validate':
        r = forge.validate(root, Path(a.package), a.slot)
        for k in ('ok', 'warnings', 'errors'):
            for line in r[k]:
                print(k.upper().rstrip('S'), line)
        print('import:', r['import'])
        return 1 if r['errors'] else 0
    if a.cmd == 'names':
        forge.set_display_name(root, a.slot, a.name, write=not a.dry_run)
        print(('would set' if a.dry_run else 'set') + f' {a.slot} display name to {a.name!r}')
        return 0
    return 2


if __name__ == '__main__':
    sys.exit(main())
