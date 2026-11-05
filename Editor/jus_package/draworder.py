"""ARM9-verified DrawPrio storage/dispatch diagnostics, *not* DS occlusion.

DrawPrio is authored in signed 20.12 units. The drawable setter
FUN_02014DC4 stores a 16-bit priority at draw-link +0x06 after
arithmetic right shift by 4. FUN_0201CCA0 maintains the sorted list;
FUN_02031EAC visits it from high-priority links toward low-priority
links and invokes the virtual +0x1C draw callback.

This does not tell us which polygon wins depth/alpha tests or what BG/OBJ
layer is visible, and does not authorize sorting sprites across separate
renderer roots. Keep Front/Behind as an explicit viewport override.
"""


def renderer_priority(drawprio_raw: int) -> int:
    """Stored unsigned 16-bit draw-link priority for a signed 20.12 input.

    Exact storage conversion used in FUN_02014DC4, including truncation
    to 16 bits; this does *not* assign a visual z-order.
    """
    return (int(drawprio_raw) >> 4) & 0xFFFF


def submission_note(drawprio_raw: int | None) -> str:
    """Diagnostic showing what the verified priority traversal consumes."""
    if drawprio_raw is None:
        return 'not authored (runtime/default priority not recovered)'
    return f'0x{renderer_priority(drawprio_raw):04X} (high-priority links visited first)'
