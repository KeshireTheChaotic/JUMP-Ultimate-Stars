"""Original ALMT NoteTrack text input round-trip parser (R08 Phase 11)."""
from __future__ import annotations

from jus_formats import notetrack

def text_to_notes(text: str, old_raw: bytes) -> bytes:
    old = notetrack.parse(old_raw)
    keys: list[notetrack.NoteKey] = []
    for line in text.splitlines():
        line = line.split('#', 1)[0].strip()
        if not line:
            continue
        parts = line.split()
        tick = int(parts[0], 0)
        if not keys or keys[-1].tick != tick:
            keys.append(notetrack.NoteKey(tick))
        if len(parts) == 1 or parts[1] == '-':
            continue
        op = int(parts[1], 0)
        rest = parts[2:]
        if rest and rest[0].startswith('hex:'):
            cmd = notetrack.Command(op, bytes.fromhex(rest[0][4:]))
        else:
            cmd = notetrack.Command.from_values(op, [int(x, 0) for x in rest])
        keys[-1].commands.append(cmd)
    if notetrack.NoteTrack(keys, old.tail).build() == old_raw:
        return old_raw
    return notetrack.NoteTrack(keys).build()
