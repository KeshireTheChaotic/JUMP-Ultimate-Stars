"""Portable read/write data-structure libraries for Jump Ultimate Stars resources.

One module per on-disk format; none of them import Tkinter, Pillow or the
editor application, so other programs can use them directly::

    from jus_formats import alar, almt, dstx, dsig, sprite
    arc = alar.Archive.parse(open('ChrArc.aar', 'rb').read())
    moves = almt.parse(alar.open_nested(arc.get('chr/bb_b_01.aar').data)
                       .get('bb_b_01.amt').payload())

Modules
    binary   bounded LE reads, LZ10 compress/decompress, DSCP wrapper
    hashes   resource_hash (ARM9 FUN_020326b0) and rotl_hash name hashes
    alar     ALAR2/ALAR3 archives (parse, edit, rebuild byte-exact)
    almt     ALMT move/animation tables (tracks, keys; byte-exact rebuild)
    notetrack  ALMT NoteTrack command lists (branch/physics/sound/action opcodes)
    sdat     SDAT symbol names (sound archives referenced by NoteTrack)
    alod     ALOD node tables (read view, pass-through)
    dstx     DSTX sprite frame/piece tables v1/v2
    dsig     DSIG palettes + images (v1 tiled/linear/LZ, v2 character stream)
    sprite   frame composition/decomposition, auto piece layout
    chrbin   ChrBin gameplay tables (record views)

Every parser returns dataclasses with a ``build()`` method; see
``docs/FORMATS.md`` for layouts and the evidence behind them.
"""

__all__ = ['binary', 'hashes', 'alar', 'almt', 'notetrack', 'sdat', 'alod', 'dstx', 'dsig', 'sprite',
           'chrbin']
