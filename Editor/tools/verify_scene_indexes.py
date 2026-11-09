"""CI/CLI verification of portable original JUS 46-scene code indexes."""
from __future__ import annotations
import sys
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
if str(ROOT) not in sys.path:sys.path.insert(0,str(ROOT))
from jus_package.screenintegrity import validate_indexes

def main() -> int:
    issues=validate_indexes()
    if not issues:
        print('OK: 46 native scene IDs, overlays, names, 2D variants, '
              'visibility and ROM callback catalogs agree.')
        return 0
    for issue in issues:
        print('SCENE INDEX MISMATCH:',issue,file=sys.stderr)
    return 1

if __name__=='__main__':
    raise SystemExit(main())
