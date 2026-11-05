"""Snapshot undo/redo for in-memory edits (move tables and sprites).

Each entry stores the exact serialized bytes of the edited object, so undo is
lossless (both formats rebuild byte-exactly).  Stacks are per document key
(e.g. the ALMT resource path) and cleared when the document is reloaded.
"""
from __future__ import annotations

from dataclasses import dataclass, field


@dataclass
class _Stack:
    undo: list = field(default_factory=list)
    redo: list = field(default_factory=list)


class History:
    LIMIT = 80

    def __init__(self):
        self._stacks: dict[str, _Stack] = {}

    def _s(self, doc):
        return self._stacks.setdefault(doc, _Stack())

    def push(self, doc: str, label: str, snapshot) -> None:
        s = self._s(doc)
        s.undo.append((label, snapshot))
        if len(s.undo) > self.LIMIT:
            del s.undo[0]
        s.redo.clear()

    def undo(self, doc: str, current):
        s = self._s(doc)
        if not s.undo:
            return None
        label, snap = s.undo.pop()
        s.redo.append((label, current))
        return label, snap

    def redo(self, doc: str, current):
        s = self._s(doc)
        if not s.redo:
            return None
        label, snap = s.redo.pop()
        s.undo.append((label, current))
        return label, snap

    def peek(self, doc: str):
        s = self._s(doc)
        return (s.undo[-1][0] if s.undo else None, s.redo[-1][0] if s.redo else None)

    def reset(self, doc: str) -> None:
        self._stacks.pop(doc, None)
