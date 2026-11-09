"""Safe edits to JUS's self-relative CP932 UI explanation tables.

Unlike a naive text-table rebuild, an edit leaves all original string bytes,
other pointers, shared targets, and opaque table slots intact. Replacement
NUL-terminated CP932 text is appended and only the selected u32 self-relative
pointers change. The loaded archive can then be saved normally by DataRoot.

Menu explanations reside in 42 individual bin/info/*.bin members of
bin/InfoDeck.aar. Every one of the 42 shipped members has the identical SHA-256 and 438-word
text table. All 42 must be updated together so runtime series selection
cannot switch to inconsistent text.
"""
from __future__ import annotations

import struct
from typing import Sequence


INFO_ARCHIVE = 'bin/InfoDeck.aar'
INFO_PREFIX = 'bin/info/'
INFO_CANONICAL = INFO_ARCHIVE + '|bin/info/jump.bin'
SHARED_RECORD_COUNT = 146
RECORD_WIDTH = 3
REQUIRED_MEMBER_COUNT = 42


def _table_count(blob: bytes) -> int:
    if len(blob) < 4:
        raise ValueError('Truncated self-relative text table')
    first = struct.unpack_from('<I', blob)[0]
    if first <= 0 or first % 4 or first > len(blob):
        raise ValueError('Invalid self-relative table length')
    return first // 4


def _text_at(blob: bytes, index: int) -> str:
    count = _table_count(blob)
    if not 0 <= index < count:
        raise IndexError(f'Text word {index} outside table of {count} words')
    position = 4 * index + struct.unpack_from('<I', blob, index*4)[0]
    if position < 4*count or not position < len(blob):
        raise ValueError(f'Text word {index} has a non-string reference')
    end = blob.find(b'\0', position)
    if end < position:
        raise ValueError(f'Text word {index} has no terminator')
    return blob[position:end].decode('cp932', 'strict')


def read_group(blob: bytes, group: int, width: int = RECORD_WIDTH) -> tuple[str, ...]:
    return tuple(_text_at(blob, width * group + i) for i in range(width))


def _repack_with_first_word(blob: bytes, replacements: dict[int, str],
                            count: int) -> bytes:
    """Retain the first text pointer at the table boundary.

    The first pointer doubles as the table-length marker. Replacing record 0
    by appending would corrupt that implicit length. This exceptional path
    rebuilds *only* validated homogeneous self-relative string tables.
    """
    first = 4 * count
    positions = [4*i + struct.unpack_from('<I', blob, 4*i)[0] for i in range(count)]
    if min(positions) != first or max(positions) >= len(blob):
        raise ValueError('Cannot relocate non-homogeneous self-relative text table')
    raw_strings = {}
    for pos in sorted(set(positions)):
        end = blob.find(b'\0', pos)
        if end < 0:
            raise ValueError('Unterminated text string')
        raw_strings[pos] = blob[pos:end+1]
    def validate_unreferenced(start: int, end: int) -> None:
        # After an earlier edit, the original string can become unreferenced.
        # A safe repeat edit accepts gaps only if they consist entirely of
        # complete, CP932-decodable, NUL-terminated prior strings.
        cursor = start
        while cursor < end:
            terminator = blob.find(b'\0', cursor, end)
            if terminator < cursor:
                raise ValueError('Unrecognized bytes in unreferenced text-table data')
            blob[cursor:terminator].decode('cp932','strict')
            cursor = terminator + 1
        if cursor != end:
            raise ValueError('Unrecognized padding in text-table data')
    previous_end = first
    for pos, encoded in raw_strings.items():
        if pos < previous_end:
            raise ValueError('Overlapping referenced strings')
        validate_unreferenced(previous_end, pos)
        previous_end = pos + len(encoded)
    validate_unreferenced(previous_end, len(blob))
    pool = bytearray()
    destinations = {}
    first_replacement = replacements[0].encode('cp932', 'strict') + b'\0'
    pool += first_replacement
    # Leave all other pointer semantics, including shared string targets,
    # intact. If record 0's old string is referenced elsewhere, retain it.
    for pos, raw in raw_strings.items():
        if any(i != 0 and p == pos and i not in replacements
               for i, p in enumerate(positions)):
            destinations[pos] = first + len(pool)
            pool += raw
    out = bytearray(blob[:first])
    for i, pos in enumerate(positions):
        if i == 0:
            destination = first
        elif i in replacements and replacements[i] != _text_at(blob, i):
            destination = first + len(pool)
            pool += replacements[i].encode('cp932', 'strict') + b'\0'
        else:
            destination = destinations[pos]
        struct.pack_into('<I', out, 4*i, destination - 4*i)
    return bytes(out + pool)


def patch_text_words(blob: bytes, replacements: dict[int, str],
                     minimum_words: int | None = None) -> bytes:
    """Modify selected text pointers without disturbing unrelated entries."""
    count = _table_count(blob)
    if minimum_words is not None and count < minimum_words:
        raise ValueError(f'Text table unexpectedly short: {count} < {minimum_words}')
    if not replacements:
        return bytes(blob)
    for index, replacement in replacements.items():
        _text_at(blob, index)
        if not isinstance(replacement, str) or '\0' in replacement:
            raise ValueError('Explanation must be Unicode text without embedded NULs')
        replacement.encode('cp932', 'strict')
    updates = {i:s for i,s in replacements.items() if s != _text_at(blob,i)}
    if not updates:
        return bytes(blob)
    if 0 in updates:
        return _repack_with_first_word(blob, updates, count)
    # The first pointer continues to encode the original table size.
    # Appending a text for any nonzero word preserves every original byte
    # except the changed self-relative pointer.
    new = bytearray(blob)
    for index, replacement in sorted(updates.items()):
        relative = len(new) - index * 4
        if relative >= (1 << 32):
            raise ValueError('Table offset overflow')
        struct.pack_into('<I', new, index*4, relative)
        new += replacement.encode('cp932', 'strict') + b'\0'
    return bytes(new)


def _members(root) -> list[str]:
    archive = root.archive(INFO_ARCHIVE)
    result = [e.name for e in archive.entries
              if e.name.startswith(INFO_PREFIX) and e.name.endswith('.bin')
              and len(e.payload()) > 0]
    if len(result) != REQUIRED_MEMBER_COUNT:
        raise ValueError(f'Expected {REQUIRED_MEMBER_COUNT} series info tables, got {len(result)}')
    return sorted(result)


def read_shared_explanation(root, record_id: int) -> tuple[str, str, str]:
    if not 0 <= record_id < SHARED_RECORD_COUNT:
        raise ValueError(f'Info message ID {record_id} is outside the verified shared table')
    return read_group(root.read(INFO_CANONICAL), record_id)


def stage_shared_explanation(root, record_id: int, lines: Sequence[str]) -> int:
    """Apply an original UI mode message to every manga info context, in memory.

    Raises on inconsistent original strings *before* any DataRoot.write call.
    The editor's Save action commits the staged changes; no direct file write.
    """
    if not 0 <= record_id < SHARED_RECORD_COUNT:
        raise ValueError('Text record outside the verified 146-record shared table')
    if len(lines) != RECORD_WIDTH:
        raise ValueError('An explanation has exactly three original line fields')
    new_lines = tuple(lines)
    for value in new_lines:
        if not isinstance(value, str) or '\0' in value:
            raise ValueError('Explanation line contains invalid characters')
        value.encode('cp932', 'strict')
    expected = read_shared_explanation(root, record_id)
    members = _members(root)
    patches = {}
    for name in members:
        full_path = INFO_ARCHIVE + '|' + name
        raw = root.read(full_path)
        if _table_count(raw) != 438:
            raise ValueError(f'{name}: expected 438 self-relative text entries')
        if read_group(raw, record_id) != expected:
            raise ValueError(f'{name}: explanation text differs from canonical file; edit not staged')
        replacement = {RECORD_WIDTH * record_id + i: text for i, text in enumerate(new_lines)}
        edited = patch_text_words(raw, replacement, minimum_words=438)
        if read_group(edited, record_id) != new_lines:
            raise ValueError(f'{name}: edited table failed self-check')
        patches[full_path] = edited
    changed = 0
    for path, payload in patches.items():
        if payload != root.read(path):
            root.write(path, payload)
            changed += 1
    return changed


# Verified ARM9 overlay-0 menu selection -> CommonInfo text-record table at
# ov0 0x02161098. ROM entries 8 and 9 are fallback/cancel states (not buttons).
TOPMENU_TEXT_BY_WIDGET = (0, 1, 2, 3, 6, 5, 7, 8)
TOPMENU_TEXT_SOURCE = (
    'functions_layout/arm9_ov00/arm9_ov00_02155c68.c#L4-L7; '
    'overlay 00 0x02161098; '
    'functions_layout/arm9_ov12/arm9_ov12_021bd730.c#L2-L16; '
    'functions_layout/arm9_ov12/arm9_ov12_021bda94.c#L11-L28'
)
