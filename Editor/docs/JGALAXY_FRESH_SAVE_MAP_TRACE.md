# J-Galaxy map ↔ mission/battle ↔ stage: fresh-save authoring

## Verified executable reads

Source: checked-in ARM9 and overlay-1 Ghidra decompilations. These are **source
and binary-format facts**, not a successful emulator run.

* `arm9_ov01_0214cd20.c` (`JGalaxyStageInfo_Add`) opens
  `jgalaxy/jgalaxy.aar|jgalaxy/jgalaxy.bin`. The active global node ID
  (`DAT_020B4114`) indexes `node_base + id*0x88`.
* Node `+0x0A` is a **planet ID**. It selects a 0x40-byte planet record;
  planet `+0x2C` selects a 0x48-byte location record, whose `+0x42` byte
  chooses the scene's audio table entry. Thus the mission's planet determines
  its location presentation.
* Node `+0x0C & 0x04`: select `mission.bin` (when set) or `battle.bin`
  (when clear). Node `+0x08` is the definition index. Definitions have
  `0xA4`-byte stride. Definition `+0x75` selects the battle stage.
* Node `+0x0C & 0x08` switches the stage-view creation mode argument from
  `0` to `3` in `func_0x021c2b58`; exact visual/mission semantics remain
  **unclassified** and the editor preserves this flag.
* `arm9_ov01_0214e380.c` accesses the same node ID and its
  `+0x10 + 0x14*slot` rewards. Newly completed objective slots set
  per-node clear-state bits and grant the decoded Koma/resource quantities.
  Node `+0x0D` is also consumed at mission end (additional unlock/event
  path); its meaning is **unclassified** and preserved verbatim.
* `arm9_main_02075298.c` (`MissionData_Create`) loads each definition
  count from the first 4 bytes, then advances through 0xA4-byte records.

## Fresh-save editor operations on this branch

* Edit: planet assignment, definition reference, mission/battle selector,
  shared stage ID, stage-environment flag, ASCII title, raw objective condition,
  and six known reward slots.
* Add: clone an existing 0xA4-byte definition and append a 0x88-byte
  progression node cloned from an existing map node. Retain all unknown
  bytes from the source node. The node table grows **before** the planet
  table; the header's node count and planet offset are updated together.
* Remove: delete a map node and compact higher node indices. Delete an
  **unused** mission/battle definition and compact matching definition
  references. Objective removal only deactivates the last slot (reversible).
* Existing node IDs, definition IDs, and objective slots may change.
  **All players must start a new save** after structural edits. The editor
  does not promise compatibility with old saves.

### Mandatory limitations

The live J-Galaxy map's full node-enumeration, graph-edge storage, map-screen
visibility/availability checks, any fixed RAM sizing, and save-bitset capacities
are not completely reconstructed. A parser-valid append **does not** prove that
a new node appears on the map, that a deleted node has no external reference,
or that >142 nodes is safe in-game. Definition count may also be constrained
by consumers other than `MissionData_Create`. The UI labels structural
operations experimental; save/apply still validates known references.

Do **not** label graph expansion as ROM-safe before melonDS testing or further
ARM9/overlay-1 xref tracing. Do not auto-rewrite currently unclassified
planet/location fields. Prefer a clone of a working nearby node, then edit its
planet and stage, and test with a brand-new save.

## Remaining targeted traces

1. Find every consumer of `DAT_020B4114` (global node ID) and the
   `jgalaxy.bin` node-count header, especially selectors for accessible nodes
   and planet map hit-testing; verify whether iteration is dynamic or bounded.
2. Decode the galaxy/location/planet parent-child link arrays/edge references
   (galaxy 0x3C, location 0x48, planet 0x40), including map positioning and
   adjacency. Prove every field which can contain a **node index** before
   general renumbering/deletion.
3. Trace the save allocation and new-game initialization of clear flags and
   the `DAT_020B4114` range so custom node counts can be safely supported.
4. Test clone→save→ROM rebuild→new-save map enumeration, selecting the added
   node, completing an objective, and deleting a nonterminal node. Verify
   both manual and scripted mission-entry paths.
