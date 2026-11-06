# Stage collision, wall responses, and item probability: verified overlay-6 path

Source: checked-in Ghidra decompilations at
`reverse_engineering/functions_layout/arm9_ov06`. The editor does not assume
these projections are complete emulator-equivalent combat physics.

## Collision geometry and linked destructible walls

* `02166FD4` treats collision record `0x18` bytes as 24.8 fixed-point:
  `+0x00` x, `+0x04` y, `+0x08` width, `+0x0C` height.
  Its wall-contact calculation clamps a query interval to these bounds.
* `02167740` examines collision type byte `+0x14 == 2` and linked wall
  `s16 +0x16`, seeking the highest-priority candidate in its scan.
  The cell-grid indexing and stepping are still only partially identified.
* `021671E8` (`BattleMapInitWall`) constructs wall runtime entries from
  `0x14`-byte wall records. Their `s16 +0` is a collision-record ID and
  `s16 +2` is initial HP. Runtime HP is copied to a mutable field.
* `02167958` subtracts damage from current wall HP and compares thresholds
  based on **half initial HP**, **one fifth initial HP**, and **zero**.
  `02167A20` advances to destruction phase 3 and modifies linked neighboring
  collision objects, their visuals and flags. Its full cross-object propagation
  is not yet simulated.

New Level runtime controls: turn on **Collision boxes** to inspect rectangles,
and enter wall damage events as `WALL_ID@TICK:DAMAGE`, e.g.
`0@120:20,0@155:50`. The resulting HP and phase are deterministic diagnostic
states. A phase-3 box is highlighted but **not** silently removed from the
collision system: live neighbor updates, grid contacts, knockback and object
response flags require further tracing.

## Item selection: two different operations

* `021662C4` chooses a **free spawn candidate** subject to occupancy,
  cooldown, and nearby-object eligibility. The candidate choice uses a
  game RNG modulo the number of eligible points. Our seeded local preview
  is *not* that original RNG or eligibility filter.
* `0216646C` separately chooses one of **three visual item categories**
  by subtracting the three stage percentage weights (`.mob` section 1).
* `021644C4` (`BattleMapLoadItem`) opens `item/itemprob.ipf`, reads
  **4 rows × 6 signed halfword weights**, and combines them with six stage
  normal weights and six stage J-Power weights:
  `base[row][i] = stagePercent * stageWeight[i] +
  (100-stagePercent)*ipf[row][i]`.
  Normal-only weights multiply by 100. When enabled and battle rule != 3,
  normal outcomes multiply by `(100-jPowerPercent)`, while six appended
  J-Power outcomes use `jPowerPercent * jPowerWeight[i] * 100`.
* `02165944` uses a **12-bucket cumulative subtraction** for outcome choice
  against a roll modulo one million, but selects one of the four rows from
  combat/player state. That **state-to-row map**, associated item IDs, and
  game's RNG state must still be traced before claiming exact item drops.

The editor now parses the IPF table and presents all candidate normal/J-Power
outcome weight rows in the runtime panel when that file is available, without
altering any stage or item asset.

## Further high-priority verification

1. Trace grid descriptor indexing, collision type `+0x14`, neighbor links
   `+0x10/+0x12`, and `02167A20` propagation for phase-3 walls.
2. Trace gameplay contact type parameters into `02166FD4` and exact damage
   values into `02167958`; record one live wall break with debug overlays.
3. Trace `02165944` player-state → 4-row mapping, the 12 outcome IDs from
   `DAT_02171624` / `DAT_02171630`, and whether rules override item rows.
4. Use a known emulator state to match RNG draws, occupancy/cooldowns and
   item spawn order with `021662C4`, then assert reproducible selection.
