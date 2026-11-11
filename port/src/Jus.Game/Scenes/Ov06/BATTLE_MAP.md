# Battle (overlay 6): function map

Scenes 11, 12 and 44 all create `Battle::Battle_Add` (ov06 0x0214CD20). The battle core (collision,
movement, objects, map BG, props, deck) is in arm9_main; ov06 holds the scene layer. ov12 (AL engine) is
swapped out in most battles (`jus_Overlay_SelectEngine` loads the stub ov13 when 0x020AFEA0 ≠ 3);
ov10 (WiFiGame) is resident and ov06 calls into it for the CPU/communication controllers.

Addresses are ov06 unless marked "main". "(Thumb)" functions are not decoded by the Ghidra export
(their bodies are split into bogus ARM functions); they were read with capstone from the overlay file.

## Entry and create wrappers (main)

| Scene | Create | Battle_Add argument (work +0x154 "kind") | Exit |
|---|---|---|---|
| 11 | 0x0206ECA8 | 5 | 0x0206ECB8: code 3 → scene 0xB, else director +0x17 = 1, scene 9 |
| 12 | 0x0206ECE0 | director +0x80; after exit code 4 (+0x16 set): 9 (kind 1), 7 (kind 6), 8 (others) | 0x0206ED80 (`SceneExits.Exit_0206ed80`) |
| 44 | 0x02070340 | 6 (after FUN_02070878) | 0x02070354: scene 0x2D |

Scene 12's create also fills the battle decks first: FUN_0207069C (kinds 0/2/3), FUN_02070714 (6),
FUN_02070758 (4/5/others). FUN_02070758: count = (+0x83 or 1) + 1; player 0 from (+0x70 source, +0x74
index), players 1.. from (+0x20+i, +0x24+i) of a second block; each through FUN_020708E4.

## Battle_Add 0x0214CD20 (work 0x170 bytes, global 0x02172960)

1. Sound/comm prep: FUN_0207367C(0) if 0x020AFEB9, FUN_0207379C, FUN_02073778, `CommWrap_Loading_Create`,
   FUN_02087F58/48/20; 0x020A0C4D = 1.
2. Work: +0x154 kind, +0x164 exit code = 0, +0x144 main task (FUN_02026F94, priority 0x9A000).
3. +0x16E "uses ov10 controllers": 0 when wireless (thunk_FUN_0208C51C), kinds 6/7 → 0x020AFEC3 > 0, else 1.
4. +0x158 player count = 0x020AFE90, +0x15C local player = 0x020AFE98.
5. Rule/mode switch on the kind → r6 (rule index into the table at 0x02170EAC, 12-byte rows
   {init, check, result}) and uVar12 (row of the 2-byte table 0x02170D88: pause kind, window kind).
   Default: 0x02170D9C[0x020AFEA0 * 2] = {rule, row}. Kind 1 → row 3; 3 → row 4, rule +4 if 0x020AFEBD;
   4 → rule 8, row 5/6 by player count, 0x020AFEBA = 1; 5 → count 2, local 0, rule 8, row 7; 6 → row 8
   (9 if FUN_02087724() == 2), rule +4 if 0x020AFEBD; 7 → rule 3 (7 if 0x020AFEBD), row 8. Kind 2 forces
   pause kind 3.
6. Main task update: FUN_0214DAA4 (Thumb; kind 5: 0x0214DB94, kind 7: 0x0214DAC0); +0x160 stage id =
   0x020AFE9C (kind 5: 0xD); decks: FUN_02070CA4(i) = 0x020B0134 + i*0x5C (kind 5: FUN_02070D14 =
   0x020AFF4C + i*0x5C; rule 0x16 uses deck 0 for everybody).
7. BG layer setup of both engines (FUN_0203B414 = main layers, FUN_0203B424 = sub layers; FUN_0203D0B4
   mode, FUN_0203D478 depth, FUN_0203CFBC size in tiles, vfunc 0x90 VRAM, vfunc 0x10 priority).
8. Music: FUN_020734E0(0x26 if 0x020AFEB9, 0x25 if 0x020AFF25, else stage table +4); SE archive 0x7A.
9. `ComicDeckCreate(0, count)` (main 0x02075FBC, +0x114) and one deck object per player
   (FUN_02076908 → +0x118+4i, FUN_020769CC(deck, deckData) builds it).
10. `Battle_CharaParamCreate` 0x021614B0, `Battle_CameraCreate` 0x02151BE8, `CommonEffect_Init`,
    FUN_02153BC8, `Battle_MarkerCreate` 0x02167F20 (+0xF0), `Battle_ComicDeckCreate` 0x02152110 (+0xF4,
    the local player's deck on the touch screen; not for FUN_02087724() == 2).
11. Mount chr/ChrBin.aar; `Battle_ObjManCreate` (main 0x02083204, +0x108); `BattleMapInit` 0x02161CB4
    (+0x104); FUN_02161BBC; when +0x16E: `jus_Overlay_SelectSlot2(1)` and ov10 0x02172A60 (+0x128).
12. Per player: start position/facing FUN_02162B60 (map info), controller pair (FUN_02028920/FUN_020208EC
    pad, FUN_020875B0/D8 wireless, or ov10 0x02173004/14 CPU), `Battle_CharaCreate` 0x02156A38
    (+0xDC+4i), marker link, camera target FUN_02151FF4(i, &phys.pos), ov10 AI object 0x02173024
    (+0x12C+4i; level 0x020AFEC4+i, 0x020AFEC8+i, 0x020AFECC+4i).
13. `Battle_PauseWiFiCreate` (+0xD8), `Battle_PauseCreate(pause kind)` (+0xD4), `Battle_DemoKoCreate`
    (+0xD0), `Battle_WindowCreate(window kind, local, count, deck)` (+0xEC), `Battle_ObjCtrlManCreate`
    (+0x10C), `Battle_ObjShotManCreate` (+0x110), rule setup FUN_0214F804(work, rule, count), camera on the
    local player FUN_02152078, `Battle_TutorialCreate` for rule 0xC, fade in FUN_02073EBC(2, 1).

## Main loop (task callbacks, set with FUN_02028384)

| State | Address | What it does |
|---|---|---|
| fade-in | 0x0214DAA4 / 0x0214DAC0 / 0x0214DB94 → 0x0214DADC | waits for the fade; FUN_0214D9C8 (top display blend + stage music, table +6), marker, start demo FUN_02153108, FUN_0215FAA8(0) |
| start demo | 0x0214DB20 | waits 0x0217296D, then FUN_0214DA44 (enable HUD/markers/players +0xF5) |
| pause wait | 0x0214DB60 | waits 0x0217296C, then the main state |
| main | 0x0214DBCC (Thumb) | frame counter 0x020A0F10; hit-stop counter work +0x168 (FUN_02083810(1), FUN_02162D18, FUN_0216AC78, FUN_02168CCC, per-player FUN_02156F6C) or the normal frame (FUN_02083810(0), map FUN_02162D28, shots FUN_0216ACA0, obj ctrl FUN_02168CE0, players FUN_02156F6C(.., 0)); rule check `work[0]()` (FUN_0214F948); on end: FUN_0214F938, pause off, KO state 0x0214DDBC; comm error FUN_0214DEEC |
| KO / end | 0x0214DDBC … → FUN_0214DF14 | stop the main task, sleep the world task |
| end wait | 0x0214DF64 | FUN_02026FD0(task, 0x14) (wait, inferred) |
| fade out | 0x0214DF88 | FUN_02073EBC(3, 1) |
| fade wait | 0x0214DFB0 | code 0 and rule result (FUN_0214F950) 0 → code 4 |
| cleanup | 0x0214DFFC | destroys everything in reverse |
| leave | 0x0214E11C | director +8 = work +0x164; music fade FUN_0207367C(0), FUN_020735E4 |

Exit codes (work +0x164): 0 battle over (result ≠ 0); 1 quit (pause case 5, comm error FUN_0214DEEC);
2 deck select (pause cases 6/7); 3 retry (pause case 8; also FUN_0214EA40 when 0x020AFF4A changes);
4 battle over with result 0 (scene 12 again via director +0x16).

FUN_0214F950 (result): `0x02170EB4[rule * 0xC]()` and, per player, FUN_020789C0(deck) → 0x020AFEEE + i
(stage work +0x12 + i), which the result scenes read.

## Subsystems

| Area | Functions |
|---|---|
| Rules | table 0x02170EAC (init/check/result per rule), FUN_0214F804 setup (time limit 0x020AFEAC or 0x116F for rules 3/7), FUN_02150F64 default check |
| Camera | Battle_CameraCreate 0x02151BE8 (two nodes), FUN_02152078 (target = player), update FUN_02151E2C (quarter-step ease, node A = (0x80 − x, 0x78 − y), quake +0x2A with MT19937 FUN_02031070) |
| Character | Battle_CharaCreate 0x02156A38 (work 0x1F0): task FUN_02156DDC, deck hook FUN_021574CC, object FUN_02083624 → callback FUN_021570EC, position FUN_02157024 (pos &lt;&lt; 4 into the node or the physics object), pursuer FUN_02161608, note track FUN_021553E0, state setup FUN_02157114 / 02159C90 / 0215D2E4 / 0215DA64 / 0215DDEC / 021586D0, input FUN_021610D4 |
| Character data | Battle_CharaDataInit 0x0215F050, FUN_0215F3E0 (battle koma 0xA2, support 0xA1), FUN_0215F540, FUN_0215F578 (CharaData_Create main 0x02074580 → FUN_02074728 battle / FUN_02074CF4 help, Battle_PrmDataInit 0x021702BC from 0x021714A4[type]) |
| Physics / collision | main: Battle_MoveManCreate 0x02082A38, Battle_ColManCreate 0x0207AD3C, Battle_ColObjCreate 0x0207AEDC, Battle_ColJointManCreate 0x0207BD40, Battle_ColPrmManCreate 0x0207C4C0, Battle_ObjManCreate 0x02083204 |
| Hit / damage / shots | Battle_ObjShotManCreate 0x0216A7BC, Battle_ObjCtrlManCreate 0x02168B88, Battle_CharaPropInit main 0x0207AA7C |
| Map | BattleMapInit 0x02161CB4, BattleMapBG_Create main 0x02083FCC, BattleMapMoveFloorCreate main 0x02085704, BattleMapLoadItem 0x021644C4, BattleMapGripLoad 0x02166B48, BattleMapInitWall 0x021671E8, BattleMapGimmick_Create 0x02163188 |
| HUD | Battle_WindowCreate 0x02153F68, Battle_MarkerCreate 0x02167F20, Battle_ComicDeckCreate 0x02152110, Battle_CharaInfoCreate 0x0215FFE0, Battle_DemoKoCreate 0x021537E0, Battle_PauseCreate 0x0214E388 (menu FUN_0214EC78), Battle_PauseWiFiCreate 0x0214F524, Battle_TutorialCreate 0x02150FA0 |

## Battle logic (in progress, 2026-11-10)

Character task FUN_02156DDC (chara work 0x1F0; per player, set by FUN_02156F6C: hit-stop frames use
FUN_02156F48 instead):

1. Input FUN_02161134 → the controller callback at chara +0x1C+8. It fills +0x6C (pad bits; 0xC =
   left/right, 8 = left), +0x88 / +0xA0 (status ids checked by FUN_02159930/10/D0: 0x22, 0x15, 0x1E).
2. Unless state 0x1B: deck bytes (+0x74..+0x76 → deck +0x5F3..), FUN_02077BB4 by +0x6C bits 0x4000/0x8000,
   FUN_02158B20, FUN_0215C278, FUN_0215C360, FUN_0215A978 (damage/invincibility), FUN_0215EF24 (counter +0x102).
3. **State machine** FUN_02159CC4 (`BattleStateSlot`): +4 current, +8 exit, +0xC/+0x10 requested state/exit,
   +0x14 flags (bit 0 = entered), +0x18/+0x19/+0x1A ids. Requests: FUN_02157494(chara, id, state, exit,
   flags) = FUN_02159D34 + deck object +0x56C +0x3C bit 2 from flags bit 0x10.
4. Position out: deck +0x56C (+0x16, +0x18) → FUN_0215F0FC (CharaData), stats +0x176..+0x17C.

States (id → state function, exit). These come from the 28 FUN_02157494 call sites, read from the assembly:
0 stand 0x0215D3B4 / 0x0215D530 · 1 walk 0x0215D760 · 2 jump 0x0215D91C / 0x0215DA48 · 3 0x0215EAEC / 0x0215EED8
· 4 0x0215DBA4 · 5 0x0215E2DC · 6 fall 0x0215DF18 / 0x0215E0C8 · 7 0x0215E118 / 0x0215E1CC · 8 0x0215AF34
· 0xD 0x0215D564 / 0x0215D6D4 · 0xE 0x0215DD48 · 0xF 0x0215E4AC · 0x10 0x0215E5C0 / 0x0215E724 / 0x0215E854 /
0x0215E94C · 0x11 0x0215BDF0 · 0x12 0x0215BE34 · 0x13 0x0215BF34 · 0x14 0x0215C090 · 0x15 0x0215C2F8 · 0x16
0x0215BFF0 · 0x17 0x0215C488 · 0x18 0x0215CA44 / 0x0215C704 · 0x19 0x0215CC54 · 0x1B 0x0215CD84 (+ 0x02159EF8,
0x0215C5D4 with no id).
- Stand (0): on entry FUN_0215D53C resets the air counters; it then tries, in order: fall (FUN_0215DEC8: not
  grounded → state 6), attacks FUN_02159D7C(2) and (0), FUN_0215DCAC, FUN_0215E9A0, FUN_0215DB50,
  jump FUN_0215D860 (+0x1D4 jump-input check; air jumps +0xD8 max / +0xD9 count), walk FUN_0215D6F8 (left/
  right or status 0x15/0x1E → state 1); motion set FUN_02157450(chara, n) (0 stand, 1 walk, 2 jump, 7/8).
- Walk (1): the same checks, then FUN_0215EF58 → FUN_0215EFC0(chara, speed, 1). The speed comes from
  FUN_02158A68: +0xB8, ±25 % for +0x88 = 8 / 0x24, −70 % for +0xA0 = 0x16. It goes into the move object's input
  vx (sign by direction, the facing via FUN_02083950). Without input it returns to stand (FUN_0215D2E4).
- Grounded = collision object +0x78 bit 2 (FUN_0215D904). Motion end = +0x90 bit 0x10000000 (FUN_02155620).

**Move objects** (BattleMove.cpp, translated in `BattleMove.cs`): see `BattleMoveObject.Step` =
FUN_02082E10, read from the assembly because the decompiler drops its stores. Gravity is the manager's
+0x2C; **the code that sets it is not found yet**. Jump states write an input vy (+0x2E, e.g. 0xFB43); the
collision-parameter callback 0x0207D9AC zeroes vy on contact.

**Stage collision** (translated in `BattleStageCollision.cs`, tested on bg_op):
- The collision-parameter update FUN_0207F480 sorts objects into category lists, then runs the passes
  FUN_0207FBD0 / 02080C70 / 02080E5C / 020801FC / 02080510 / 020805E8 / 020802D0 / 02080C28. Callbacks sit at
  +0xFC…+0x148.
- In battle, FUN_02161BBC replaces those callbacks with the battle versions (pointers at ov06 0x02161C68):
  +0xFC 0x0207E664, +0x100 0x0207F050, **+0x104 0x0207E864 = stage contact**, +0x108 0x0207F2CC, … The
  generic +0x104 0x0207D9AC is only the world clamp (y 0…512 px, x 64…960 px).
- Grid: stage .bin map info (u32 +4) +0x34. Cells are 8 bytes, 16×16 px, 0x40 per row:
  {s16 record, u8 kind, u8 flag (0 = collides), u16 left, u16 top}. FUN_02161BAC gives the index;
  FUN_0207E050 gives the kind at a point.
- FUN_0216220C: the swept three-corner DDA, with push-back and slide.
  - Kind tables (ov06): pass-through 0x02171558 (kinds 4, 5, 6, 12 = one-way platforms), block-from-below
    0x02171528, floor-contact 0x02171548, solo floor 0x02171568, wall flag 0x02171578.
  - Corner order 0x021714E8, masks 0x02171524. All are exported in the JUS tables (`battleCollision`).
- 0x0207E864: the body box = collision object +0x70/+0x74 (current/previous: the first collision box from
  the motion, else the default 0x02092E50 = {0, −8, 4, 8}), x ±4 px. It sets +0x78 bits: 1 ceiling,
  2 grounded, 4/8 walls, 0x100 solo floor, 0x400 wall flag, 0x400000 kind-7 pit; stops velocity into the
  surface; floor record +0x15 bit 8 → soft friction. Not ported: attached objects, moving floors (kind 6),
  the floor-contact record.
- Move object allocation FUN_02082C34 (from the assembly): position, friction x 0x20 / y 8, max speed 0x20,
  flags 1 | 8 (| 0x200 when the manager is frozen).

**Gravity** = move manager +0x2C = **0x29**, stored by Battle_MoveManCreate at 0x02082B68 (+0x2E = 0x20
at 0x02082B70). The decompiler drops these stores; they were found with an assembly scan. Note type 6
toggles an object's no-gravity flag 2.

**Note track** (BattleNoteTrack.cpp, Battle_NoteTrackCreate 0x021553E0, update FUN_02155688): each motion
frame dispatches the motion's note events through the handler table 0x0217200C by **type**
(record byte 1, types 0–4), then each type's sub-table by **subtype** (byte 0); there are also 7
conditional slots at 0x02172040. Records are {u8 subtype, u8 type, args…}. Notes are the ALMT keyed track
named "NoteTrack"; property names are in the motion set at u16[0xC + 4·targets + 4·motions + 2·i]. The
engine finds "NoteTrack" and "Marker" by name (FUN_0201EB60). A key is {u16 frame, u16 offset to a group
{u16 count, u16 offsets}}, all in halfwords from the key (FUN_02020064 / 02020258), and the notes passed
between the previous and current time are dispatched.
- Type 0 (0x02172084, 30 subtypes), type 2 (0x02171FEC), type 3 (0x02172000) and type 4 (0x02171FF4) are
  actions: effects, sounds, attacks (not read yet).
- **Type 1 = movement** (0x02172020): sub 0 stop (held velocity off, vx = vy = 0, move flag 0x1000);
  sub 1 gravity off/on (move flag 2); sub 2 FUN_02155604 toggle; sub 3 velocity now (vx = s8·0x20,
  mirrored by facing; vy = s8·−0x7E); sub 4 hold a velocity for N frames (+0x9C/+0x9E/+0xA0 → move
  +0x2C/+0x2E each frame); sub 5 / sub 7 wall- / 0x400-contact watches (+0x90 bits); sub 6 FUN_0207D11C toggle.
- Use across all 474 battle motion sets with notes: type 1 subs 0–4 = 1837 / 660 / 1238 / 1567 / 426;
  type 3 sub 0 = 3909; type 4 sub 0 = 3228.

Translated in `BattleNoteTrack.cs` (2026-11-11), tested on bb_b_01:
- reading the notes;
- type 1 (movement), including the held velocity; types 0/2/3/4 are raised as events;
- the body box from CollisionRect0 (target 0) as {x, y, half-w, half-h} (rect → box conversion inferred).

`AlmtMotionSet` gained `PropertyNames`, `PropertyIndex` and `MotionTracks` (all targets, cumulative blocks
from version 2).

Battle motion sets (targets SP01, GN01–03) also have the properties CollisionType0/1, CollisionEnable0/1,
CollisionRect0/1, 2DPos, Marker, EffectFlags, ParentLink, DrawPrio, GenerateID and TextureID.

The motion also supplies the body box (+0x70/+0x74). The jump launch (state 4, frame 4) sets vy 0xFB43, or
+0xBA with bit 0x20; fall (state 6) uses +0xB8 for air control and goes back to stand when grounded.

Next:
- the note types 0/2/3/4 (effects, sounds, attacks) and the 7 conditional slots 0x02172040;
- the controller → +0x6C mapping (FUN_02028920);
- the character parameters (+0xB8 walk speed …, Battle_PrmDataInit 0x021702BC);
- then the stand/walk/jump/fall states, with the motions.

## Data path: selection → participants

1. Deck select / story setup fills 0x020B0134 + i*0x5C (FUN_020708E4: save decks 0x020B0DBC, or
   deck/Deck.aar "deck/&lt;group&gt;/NNN.bin").
2. FUN_020769CC orders the deck's koma into the deck object's list (+0x558): flagged battle koma first,
   then kind/row/column order (`Ov06Deck.BuildOrder`).
3. FUN_0215F3E0 registers the list's battle koma (deck entry +0x40 = koma +6 == 0) and support koma;
   FUN_0215F578 creates each CharaData (type = koma +8, character = koma +7) and makes the first current.
4. CharaData FUN_02074728: base = arm9 0x020924B4[character] &amp; 0xFFFF00 — derived from koma.bin in
   `Ov06KomaTable.BattleCharacterBase` (series &lt;&lt; 14 | rank &lt;&lt; 8; verified for all 74). Archives
   "chr/" + name (ChrArc.aar) and + "c.aar"; type variant "_" + (type + 1) (0x0209F198); sprites base
   (2D OBJ, DSTX 0x83 with the FFL4 texture of the same id), base + 0x40 (3D display), base + 0x41..0x50,
   base + type*0x20 .. +7 (variant), base + off(type) (variant main sprite, off = 0x0209249C[type]),
   motion set base (ALMT, 4 targets SP01/GN01–03, ALOD node tree), SP01 node with bank base.
5. Stage: stage id → name/music table arm9 0x02092D08 (not derivable from NitroFS; `IOv06StageTable`).

## Formats

- stage/&lt;name&gt;.bin: u32 offsets {+0 BG layer records, +4 map info, +8 0x18-byte records (count map
  info +0x2E), +0xC walls}. Layer record {s16 x, s16 y, u16 size, u8 priority, mode, depth, VRAM, anim
  count, anims}; anim kinds 0/1 palette (CommonPaletteAnime), 2/3 sprite strips, 4 priority swap, 5 object.
  Map info: +8 x[4], +0x18 y[4] (24.8 px), +0x28 facing[4], +0x2C wall flag, +0x2E record count.
- stage/&lt;name&gt;.aar: maps 0x400000–0x400003 (ALTM format 7, `Ov06PackedMap`), images 0x400100 (DSTX
  with an embedded DSIG), 0x400101 (4bpp), 0x400102 (8bpp).
- stage/&lt;name&gt;.mob: u32 offsets to moving floors, items, grips. .cam: camera data (not read).
- ALTM format 7: row offset table + pattern runs (see `Ov06PackedMap`).

## Open questions

- Stage → name table (0x02092D08) and its music: needs the arm9 image or a decision to ship it as data.
- Character table bit 0 (CharaData +0x8E, texture swap when flipped) for characters 14, 23, 36, 45.
- The battle's initial character state/motion (the slice uses motion base + 0, TopMenu's idle).
- BG layer modes 1/3 (affine) and the camera never scaling: rendered as plain text layers.
- Draw order between the stage layers and the OBJ characters (slice: characters in front).
- The pause menu item → exit code mapping, and the rule result functions.
