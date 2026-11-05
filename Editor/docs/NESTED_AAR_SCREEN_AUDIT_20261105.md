# Screen workspace — nested AAR repair (2026-11-05)

## Reproduction and root cause

With the extracted JUS game-data corpus, the Screen browser can navigate nested
`ALAR2` members in archives such as:

- `deckmake/deckmake.aar|deckmake/edit_obj.aar`
- `JArena/JArena.aar|JArena/arena_top_obj.aar`
- `Commu/commu_pack.aar|Commu/top_obj_3d.aar`
- `battle/ChrWin.aar|battle/chr/bb_b_01.aar`

These are valid archives. Most carry `.dtx`/`.amt` resources (sometimes a `.dig`
image, otherwise a DSIG embedded in DSTX), but *no* `.atm` background map. The
previous Screen workspace called only `scenes.find_layers`, so opening one
resulted in an empty viewport despite successful extraction.

## Corrections

1. `scenes.screen_sprite` resolves a selected DSTX sprite and its DSIG image,
   preferring embedded DSIG, then resource-id pairing, then same-stem fallback.
   It reuses the verified `jus_formats.sprite` decoder instead of introducing
   a second pixel codec.
2. The Screen workspace previews the first frame of sprite-only archives,
   exposes a frame picker, previews the companion sprite when ALMT or DSIG is
   selected, and labels the result as a *resource preview*, not a reconstructed
   screen placement or authored ALMT animation.
3. Nested-archive browser entries now support search by full member path.
   Resource-list double-click opens the precise member name instead of the
   first resource with an equal basename.
4. `DataRoot._flush` now preserves an outer DSCP wrapper on compressed
   top-level `.aar` files, just as nested member writes already retain their
   DSCP compression. This matters for `Commu/challenge_3d.aar` and
   `Commu/error_2d.aar`.

## Full-corpus validation

- 317 top-level `.aar` files; 1,232 nested AAR members; **1,549 archives** all
  parsed successfully.
- 12,733 combined archive-member records examined.
- All 1,549 archives rebuilt and reparsed with **identical member names, IDs,
  attributes and stored member bytes**. 1,547 raw rebuilds were byte-identical
  before accounting for the two top-level DSCP wrappers.
- 366 nested AARs are inside the 60 top-level Screen-candidate archives.
- All **368 nested DSTX sprite resources** rendered frame 0 with no failure.
- Two top-level compressed screen AARs were explicitly forced through the new
  save path; each retained its DSCP wrapper and exact archive member contents.
- Regression tests cover nested DSCP edit/save, top-level DSCP preservation,
  pixel preview, full-resource-path search and GUI frame changes. Existing
  Screen ALTM background and DSTX 0x05/0x06 descriptor tests also pass.

## Current limits

- ALMT animation timing for these UI objects is **not** simulated in the Screen
  viewport. Choosing an ALMT member shows the associated sprite's manually
  selected DSTX frame, not the appropriate frame at a given animation tick.
- DSTX 0x05/0x06 layout-panel *placement* is still unknown; descriptors remain
  inspectable and read-only but are not composited into the scene.
- The preview centers a sprite on the top 256×192 screen for inspection; it
  does not establish actual DS screen selection, background priority, or
  runtime coordinates. A runtime or emulator capture is still needed.
- This is an editor/read-write roundtrip audit, not an in-game validation.

## Local verification

```powershell
py -3 -m unittest discover -s tests -p "test_*.py"
py -3 tests\gui_screen_nested_smoke.py D:\Library\Development\JUS\data
py -3 tests\gui_screen_layout_smoke.py
```

Open Screen (Ctrl+6), expand `deckmake/deckmake.aar`, choose `edit_obj.aar`
(or filter `edit_obj.aar`), then use **Sprite frame** in the viewport toolbar.
Selecting `deck_obj00.amt` preserves the paired image preview; its animation
is not yet time-driven.
