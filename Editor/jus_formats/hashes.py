"""16-bit name hashes used by the JUS resource containers.

Both functions were recovered from the game and validated against every
name in the shipped ``data`` tree (see ``docs/FORMATS.md``).

* :func:`resource_hash` is ARM9 ``FUN_020326b0`` (``h ^= c | (h << 1)``,
  signed chars).  It hashes ALMT field names and ALAR3 descriptor names in
  archives whose flag byte has bit 0x40 set (ChrArc, ChrBin, ChrWin, Deck,
  InfoDeck), applied to the full member path *without its extension*.
* :func:`rotl_hash` is a 16-bit rotate-left-one/XOR hash.  It is stored in
  every ALAR2 member preamble and in ALAR3 descriptors of archives without
  flag bit 0x40, applied to the member path without its extension.
"""
from __future__ import annotations


def _as_bytes(name: str | bytes) -> bytes:
    return name.encode('ascii') if isinstance(name, str) else bytes(name)


def resource_hash(name: str | bytes) -> int:
    h = 0
    for c in _as_bytes(name):
        if c >= 0x80:
            c -= 0x100           # ldrsb: sign-extended char
        h = (h ^ (((c & 0xFFFF) | (h << 1)) & 0xFFFF)) & 0xFFFF
    return h


def rotl_hash(name: str | bytes) -> int:
    h = 0
    for c in _as_bytes(name):
        h = (((h << 1) | (h >> 15)) & 0xFFFF) ^ c
    return h


def strip_extension(name: str) -> str:
    slash = name.rfind('/')
    dot = name.rfind('.')
    return name[:dot] if dot > slash else name
