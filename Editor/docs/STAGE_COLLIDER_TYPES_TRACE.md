# Stage collider types, movement grid and 8bpp BG transparency (2026-11-06)

Evidence: overlay 6 (SHA-verified `arm9_overlay_0006.bin`), Ghidra exports, all 36
shipped stage `.bin` files. Static analysis; no emulator capture.

## Where collision happens

Character-vs-stage movement is the grid sweep `FUN_0216220C`. It never reads the
collider records, only the **64×64 grid** of 16 px cells in `.bin` section 1
(0x8000 bytes after the 0x34-byte header):

| Cell bytes | Meaning |
|---|---|
| +0 u16 | owning collider index (0xFFFF = none) |
| +2 u8 | collider type (= the collider's +0x14 on all 147,456 cells) |
| +3 u8 | off: the sweep skips the cell (set exactly for types 0, 7, 11) |
| +4/+6 u16 | cell x / y in pixels |

Every collider except type 12 owns exactly the cells its rectangle covers (sampled
every 16 px from its top-left), on all 1,046 such colliders. Type 12 is never in
the grid.

## Per-type tables (overlay 6)

| Table | Used by | Types set | Meaning |
|---|---|---|---|
| 0x02171558 | `FUN_0216220C` | 4, 5, 6, 12 | one-way: ignored by head points, and by foot points when asked (drop-through) |
| 0x02171528 | `FUN_0216220C` | 2, 3, 8, 9, 10 | blocks upward movement (ceiling) |
| 0x02171548 | `FUN_02167A20` (wall break) | 1, 2, 4, 5, 6, 10, 12 | collider above a broken wall gets +0x15 bit 2 |
| type 7 | `FUN_0216220C` | — | ends the sweep in that direction |

## Enumeration (`stagephysics.COLLIDER_TYPES`)

| Type | Name | Solid | Evidence |
|---:|---|---|---|
| 0 | Empty | — | grid filler |
| 1 | Ground | sides, top | Direct |
| 2 | Breakable wall | all (wall record +0x16) | Direct |
| 3 | Solid block | all | Direct |
| 4 | One-way platform | top | Direct |
| 5 | One-way platform (wall-linked) | top | Direct |
| 6 | One-way platform (conveyor) | top (only bg_bb, bg_old_bu) | Direct |
| 7 | Lower out-of-play zone | none | Inferred from placement |
| 8 / 9 | Left / right boundary wall | all | Direct |
| 10 | Bottom boundary | all | Direct |
| 11 | Side out-of-play zone | none | Inferred from placement |
| 12 | Wall-top platform | top, not in grid | Inferred; consumer not traced |

+0x15 bits: 0x01/0x02 neighbour exposed, 0x04 surface off (broken wall, blink or
crumble floor), 0x08 gimmick collider (cleared at load unless definition +0x7C bit 1).

## Editor

* Map Objects: the collider type is a dropdown of the names above, with solidity,
  flags and wall link shown.
* Viewport colliders are coloured by behaviour: breakable, solid, one-way, no
  collision.
* A type or rectangle edit rewrites the collider's grid cells
  (`stageauthoring.sync_collider_grid`); an edit that would take another
  collider's cells is refused.

## 8bpp background transparency

`tilemap._palette_rgba` used to give colour 0 of every 16-colour bank zero
alpha. That is right for 4bpp tiles but wrong for 8bpp: pixels with colour index
16, 32, … 240 went transparent (the black specks and see-through gaps on
bg_op_00's ship). On the DS only index 0 is transparent in 8bpp. 71 of 127 stage
layers are 8bpp. Transparency is now decided per pixel in `tilemap.render`.
