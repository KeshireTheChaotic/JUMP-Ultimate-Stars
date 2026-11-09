"""Original type-based ALMT Inspector value hints (R08 Phase 11)."""
from __future__ import annotations

from jus_formats import almt

def _value_hint(field):
    kind = almt.value_kind(field)
    if kind == 's16x2':
        return 'JSON list [x, y]'
    if kind == 's16x4':
        return 'JSON list [x0, y0, x1, y1]'
    if kind.startswith('u32x'):
        return f'JSON list of {kind[4:]} u32 values'
    return 'Integer (0x… hex allowed)'
