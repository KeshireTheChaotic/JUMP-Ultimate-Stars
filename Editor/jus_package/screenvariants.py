"""ROM-backed screen background instances and scene-variant descriptions.

Only actual ALTM/DSIG resources are positioned on a DS LCD. The engine/BG slot
follows source constructors, not filename heuristics. Physical LCD follows
scene-entry POWCNT1 when known; unresolved dynamic states are labelled.
No code-side positions, BG scroll speed, timing, or priority are editable.
"""
from __future__ import annotations

from jus_formats import altm
from jus_package import scenes
from jus_package.project import join
from .screencomposition import screen_for_engine


def bg(engine: str, slot: int, atm: str, dig: str, source: str,
       *, animated: bool = False, note: str = '', visible: bool = True) -> dict:
    return {'engine': engine, 'slot': slot, 'atm': atm, 'dig': dig, 'source': source,
            'animated': animated, 'note': note, 'visible': visible}


def variant(id: str, label: str, layers: list[dict], *, condition: str = '',
            palettes: tuple[str, ...] = (), note: str = '',
            palette_engine: str = 'sub', swap_at_variant: int | None = None,
            routing_source: str = '', routing_kind: str = 'Post-dispatch callback') -> dict:
    return {'id': id, 'label': label, 'layers': layers, 'condition': condition,
            'palettes': list(palettes), 'palette_engine': palette_engine, 'note': note,
            'swap_at_variant':swap_at_variant,'routing_source':routing_source,
            'routing_kind':routing_kind}


def source(ov, address, line) -> str:
    return f'functions_layout/arm9_ov{ov:02d}/arm9_ov{ov:02d}_{address}.c#L{line}'


def archive_bg(archive: str, stem: str, engine: str, slot: int, ref: str,
               *, dig_stem: str | None = None, animated: bool = False, note: str = '') -> dict:
    return bg(engine, slot, join(archive, stem + '.atm'),
              join(archive, (dig_stem or stem) + '.dig'), ref,
              animated=animated, note=note)


def loose_bg(stem: str, engine: str, slot: int, ref: str, *, animated=False) -> dict:
    return bg(engine, slot, stem + '.atm', stem + '.dig', ref, animated=animated)


def common_info(*, include_series: bool = False) -> list[dict]:
    """CommonInfo::Create(param_3=1) — sub BG1 window / sub BG2 info."""
    src = source(12, '021bcf1c', 96)
    return [
        archive_bg('info/info.aar', 'info/win', 'sub', 1, source(12, '021bcf1c', 144)),
        loose_bg('info/bg', 'sub', 2, src),
    ]


T='title/title.aar'
TOP='topmenu/topmenu.aar'
DECK='deckselect/deckselect.aar'
STAGE='stageselect/stageselect.aar'
RULE='ruleselect/ruleselect.aar'
JA='JArena/JArena.aar'
DB='database/database.aar'
OPT='option/option.aar'

TITLE_ON=[
 archive_bg(T,'title/space_top00','main',2,source(0,'0214fb6c',197),animated=True),
 archive_bg(T,'title/space_top01','main',3,source(0,'0214fb6c',201),animated=True),
 archive_bg(T,'title/space_under00','sub',2,source(0,'0214fb6c',213),animated=True),
 archive_bg(T,'title/space_under01','sub',3,source(0,'0214fb6c',217),animated=True),
]
TITLE_ALT=[
 archive_bg(T,'title/space_under00','main',2,source(0,'0214fb6c',205),animated=True),
 archive_bg(T,'title/space_under01','main',3,source(0,'0214fb6c',209),animated=True),
 archive_bg(T,'title/space_top00','sub',2,source(0,'0214fb6c',221),animated=True),
 archive_bg(T,'title/space_top01','sub',3,source(0,'0214fb6c',225),animated=True),
]
TOP_BG=[
 archive_bg(TOP,'topmenu/top_bg01','main',2,source(0,'02153cfc',196),
            note='Overlay-0 pointer table 0x02161074. BG2 source.'),
 archive_bg(TOP,'topmenu/top_bg00','main',3,source(0,'02153cfc',196),
            animated=True,note='Original palette-scroll/space backdrop. Motion disabled in editor preview.'),
]
DECK_BG=[
 archive_bg(DECK,'deckselect/deck_sel00','sub',1,source(1,'0215754c',88)),
 archive_bg(DECK,'deckselect/deck_sel01','sub',2,source(1,'0215754c',92)),
 loose_bg('deckselect/deck_base','main',2,source(1,'0215754c',96)),
 loose_bg('info/bg','sub',3,source(1,'0215754c',100)),
]
STAGE_BG=[
 archive_bg(STAGE,'stageselect/st_sel01','sub',1,source(1,'0215fc68',75)),
 archive_bg(STAGE,'stageselect/st_sel00','sub',2,source(1,'0215fc68',75)),
 loose_bg('info/bg','sub',3,source(1,'0215fc68',75)),
]
RULE_BG=[
 archive_bg(RULE,'ruleselect/rule_sel00','main',2,source(1,'02161f3c',156)),
 loose_bg('info/bg','main',3,source(1,'02161f3c',160)),
]
JA_BG=[
 loose_bg('info/bg','main',1,source(3,'0214d958',132)),
 archive_bg(JA,'JArena/arena_top','main',2,source(3,'0214d958',132)),
]
DB_MENU=[
 archive_bg(DB,'database/top_bg','main',2,source(5,'0216774c',49)),
 loose_bg('info/bg','main',1,source(5,'0216774c',55)),
]
DB_LOC=[
 archive_bg(DB,'database/home_bg','main',1,source(5,'0216c038',53)),
 archive_bg(DB,'database/home_list','main',2,source(5,'0216c038',58),
            dig_stem='database/home_bg'),
]
DB_PERSONAL=[
 archive_bg(DB,'database/personal_bg','main',1,source(5,'0216ae64',58)),
]
DB_LIST=[
 archive_bg(DB,'database/list','main',2,source(5,'021685f4',76)),
 archive_bg(DB,'database/playing','main',3,source(5,'021685f4',85)),
]
DB_COMIC=[
 archive_bg(DB,'database/story_bg0','sub',1,source(5,'0216a280',66)),
 archive_bg(DB,'database/story_bg1','main',1,source(5,'0216a280',83)),
]

DECKCHECK='deckcheck/deckcheck.aar'
INPUT='input/input.aar'
VSCALL='vscall/vscall.aar'
JPOWER='jpower/jpower.aar'

DECKCHECK_BG=[
 loose_bg('info/bg','main',2,source(2,'0215a038',108)),
 archive_bg(DECKCHECK,'deckcheck/win_g','main',1,source(2,'0215a038',134),
            dig_stem='deckcheck/win',
            note='Original default window: the code branches on constructor param1 to change its map path.'),
]
INPUT_STATIC=[
 archive_bg(INPUT,'input/input_bg0','sub',2,source(5,'0215f41c',190)),
 archive_bg(INPUT,'input/input_bg1','sub',3,source(5,'0215f41c',195),
            note='Constructed with visible=0; callback-driven visibility, not active at entry.'),
 archive_bg(INPUT,'input/input_font','sub',1,source(5,'0215f41c',200)),
]
VSCALL_BG=[
 archive_bg(VSCALL,'vscall/vs00_a','main',1,source(3,'0215b7d4',83),
            dig_stem='vscall/vs00'),
 archive_bg(VSCALL,'vscall/vs00_b','sub',1,source(3,'0215b7d4',87),
            dig_stem='vscall/vs00'),
]
JPOWER_BG=[
 loose_bg('info/bg','main',3,source(5,'02162410',183)),
 archive_bg(JPOWER,'jpower/jp','main',2,source(5,'02162410',186)),
]
COPYRIGHT_BG=[
 loose_bg('copyright/ganbari','sub',0,source(0,'0214cd20',57)),
 loose_bg('copyright/nintendo','main',1,source(0,'0214cd20',78)),
]

JPOWER_KOMA_INFO=[
 archive_bg('info/info.aar','info/win','main',1,source(12,'021bcf1c',123)),
 loose_bg('info/bg','main',2,source(12,'021bcf1c',97)),
]
COMMU='Commu/commu_pack.aar'
COMMU_WAIT=[
 loose_bg('info/bg','main',3,source(7,'02164344',151)),
 loose_bg('info/bg','sub',2,source(7,'02164344',154)),
 bg('main',2,join(COMMU,'Commu/watch_battle.atm'),
    join(COMMU,'Commu/watch_battle.dig'),source(7,'02164344',157),
    visible=False,note='Created hidden by FUN_02150F80; visibility is changed by controller callbacks.'),
]
COMMU_SURETIGAI=[
 loose_bg('info/bg','main',3,source(7,'0215d1c0',82)),
 bg('main',2,join(COMMU,'Commu/sure02.atm'),
    join(COMMU,'Commu/sure02.dig'),source(7,'0215d1c0',87),
    visible=False,note='Constructed hidden; palette animation and visibility are runtime-dependent.'),
]

DECKMAKE='deckmake/deckmake.aar'
KOMALIST_BG=[
 archive_bg(DECKMAKE,'deckmake/list00','sub',3,source(5,'0214f598',57),
            note='KomaList::KomaList_Create; original sub BG3, x scroll initialized to -8 px. '
                 'Other KomaList BGs are DSTX/dynamic map paths and are not flattened.'),
]
KOMASTATE_BG=[
 archive_bg(DECKMAKE,'deckmake/edit_bg','main',2,source(5,'021546c8',42)),
 archive_bg(DECKMAKE,'deckmake/state','main',3,source(5,'021546c8',51)),
]
DECK_TUTORIAL_BG=[
 archive_bg('info/info.aar','info/win','main',1,source(12,'021bcf1c',123)),
 loose_bg('info/bg','main',2,source(12,'021bcf1c',97)),
]+KOMALIST_BG

JGALAXY='jgalaxy/jgalaxy.aar'
JGALAXY_CLEAR_VICTORY=[
 bg('sub',2,join(JGALAXY,'jgalaxy/victory01.atm'),
    join(JGALAXY,'jgalaxy/victory00.dig'),source(1,'0214e6e8',228),
    note='Only if ClearList state bit1 is set. Other branch constructs '
         'a dynamic BG texture from victory00; source image is NOT a rendered frame.'),
]
JAMISSION='JArena/JArena.aar'
JAMISSION_BASE=[
 loose_bg('info/bg','main',1,source(1,'021507a0',26)),
 bg('main',2,join(JAMISSION,'JArena/mis01.atm'),
    join(JAMISSION,'JArena/mis01.dig'),source(1,'021507a0',26),
    visible=False,note='Loaded hidden; live mission widget later binds this BG.'),
]
JARANK_BG=[
 loose_bg('info/bg','main',1,source(1,'021546fc',20)),
 archive_bg(JAMISSION,'JArena/ranking_table00','main',2,source(1,'021546fc',20)),
 loose_bg('deckselect/deck_base','sub',3,source(1,'021560b4',38)),
]
COMMU_ENTRY=[
 loose_bg('info/bg','main',3,source(7,'021653fc',97)),
 loose_bg('deckselect/deck_base','sub',3,source(7,'021653fc',100)),
]
COMMU_WIFI_ERROR=[
 loose_bg('info/bg','main',3,source(7,'02164ee8',29)),
 loose_bg('info/bg','sub',3,source(7,'02164ee8',32)),
]
ENDING='ending/ending.aar'
ENDING_COMMON=[
 loose_bg('info/bg','main',1,source(0,'0215b084',77)),
 loose_bg('info/bg','sub',1,source(0,'0215b084',87)),
]
ENDING_PIECE_00=ENDING_COMMON+[
 bg('main',2,join(ENDING,'ending/bg_00.atm'),
    join(ENDING,'ending/bg.dig'),source(0,'0215b084',74)),
 bg('sub',2,join(ENDING,'ending/bg_00.atm'),
    join(ENDING,'ending/bg.dig'),source(0,'0215b084',80),
    visible=False,note='Sub BG2 instance is explicitly hidden immediately after construction.'),
]
ENDING_PIECE_01=ENDING_COMMON+[
 bg('main',2,join(ENDING,'ending/bg_01.atm'),
    join(ENDING,'ending/bg.dig'),source(0,'0215b084',92)),
 bg('sub',2,join(ENDING,'ending/bg_01.atm'),
    join(ENDING,'ending/bg.dig'),source(0,'0215b084',83)),
]

JQUIZ='jquiz/jquiz_pack.aar'
JQUIZ_SINGLE=[
 loose_bg('info/bg','main',3,source(4,'0214e204',31)),
 loose_bg('info/bg','sub',3,source(4,'0214e204',31)),
 archive_bg(JQUIZ,'jquiz/quiz00','main',2,source(4,'021592b0',39)),
 archive_bg(JQUIZ,'jquiz/quiz00_b','sub',2,source(4,'021592b0',43)),
]
JQUIZ_BATTLE_RULE=[
 loose_bg('info/bg','main',3,source(4,'0214e204',31)),
 archive_bg(JQUIZ,'jquiz/com_rule00','main',2,source(4,'0215da38',78)),
]

SCENE_VARIANTS = {
 17:[variant('clear-list-victory01','J-Galaxy Stage Info — conditional victory map',
             JGALAXY_CLEAR_VICTORY,
             condition='JGalaxyStageInfo_Add -> JGalaxyClearList_Create(mode0); '
                       'only if piVar2[0x1A] bit1 selects victory01 ALTM branch',
             swap_at_variant=1,
             routing_source=source(1,'0214cd20',28),
             note='The alternate branch creates victory00 using a different renderer. '
                  'The displayed source BG is conditional, not necessarily the '
                  'state currently active in a saved game.')],
 19:[variant('clear-list-victory01','J-Galaxy Result — conditional victory map',
             JGALAXY_CLEAR_VICTORY,
             condition='JGalaxyResult_Add -> JGalaxyClearList_Create(mode1); '
                       'only if piVar2[0x1A] bit1 selects victory01 ALTM branch',
             swap_at_variant=1,
             routing_kind='Inherited scene reset',
             routing_source='functions_layout/arm9_main/arm9_main_0206e064.c#L7',
             note='Runtime clear-list and result sprite widgets not drawn; '
                  'the victory01 alternative is a source-backed optional state.')],
 20:[
  variant('piece-00','Ending — Piece background 00 / source state',
          ENDING_PIECE_00,
          condition='Ending_Add -> EndingPiece_Create, first main/sub BG2 instances',
          swap_at_variant=1,
          routing_kind='Inherited scene reset',
          routing_source='functions_layout/arm9_main/arm9_main_0206e064.c#L7',
          note='Static alternative for editing real image/map assets. '
               'Runtime switches BG2 visibility and composes staff roll/credits.'),
  variant('piece-01','Ending — Piece background 01 / source state',
          ENDING_PIECE_01,
          condition='EndingPiece_Create, alternative BG2 map instances '
                    'created in the same constructor',
          swap_at_variant=1,
          routing_kind='Inherited scene reset',
          routing_source='functions_layout/arm9_main/arm9_main_0206e064.c#L7',
          note='Source-backed alternative, NOT an inferred frame or timed phase. '
               'Actual active BG2 object is governed by Ending callbacks.')],
 22:[variant('mission-try','J-Arena Mission Try — native main-engine maps',
              JAMISSION_BASE,
              condition='JAMissionTry_Add -> FUN_021507A0; index0 main BG1 '
                        'and index1 main BG2, ROM address tables 0x0216BDD8/C4',
              swap_at_variant=0,
              routing_source=source(1,'021504f0',19),
              note='Sub-engine indirect slot binding and dynamic mission panel '
                   'widgets are not included until the original values are resolved.')],
 28:[variant('rank-list','J-Arena Ranking List — native BG map slots',
              JARANK_BG,
              condition='JARankLst_Add -> FUN_0215447C + FUN_021546FC '
                        '+ FUN_021560B4',
              swap_at_variant=0,
              routing_source=source(1,'0215447c',12),
              note='Actual ranking entries and avatar sprites use runtime '
                   'data rather than a static preview.')],
 37:[variant('entry-data','Communication — deck entry data',
              COMMU_ENTRY,
              condition='CommuMenuEntryDataEnt_Add_Core -> main BG3 '
                        'and sub BG3 original maps',
              swap_at_variant=0,
              routing_source=source(7,'021653fc',51),
              palettes=('Commu/com_bg.ncl',),
              palette_engine='main',
              note='Deck preview/content is linked to saved player decks; not drawn.')],
 42:[variant('wifi-error','Communication — WiFi error branch',
              COMMU_WIFI_ERROR,
              condition='Scene42_Create -> WiFiError_Add only on WiFi '
                        'branch; error-status==7 can exit before BG loads',
              swap_at_variant=0,
              routing_source=source(7,'02164ee8',18),
              palettes=('Commu/com_bg.ncl',),
              palette_engine='both',
              note='Wireless error branch and status-dependent exit '
                   'do not imply a common drawable BG; variant is conditional.')],
 9:[variant('koma-edit','DeckMake — KomaState and KomaList native maps',
            KOMASTATE_BG+KOMALIST_BG,
            condition='DeckMake_Add -> KomaState_Create + KomaList_Create',
            swap_at_variant=1,
            routing_kind='Inherited scene reset',
            routing_source='functions_layout/arm9_main/arm9_main_0206e064.c#L7',
            note='Only paired ALTM/DIG backgrounds placed. KomaList list01 '
                 'uses original DSTX image and is not yet decoded as tile BG. '
                 'Character/koma visual contents are derived from the player\'s saved decks.')],
 10:[variant('tutorial','DeckMake tutorial — CommonInfo + KomaList',
             DECK_TUTORIAL_BG,
             condition='DeckMakeTutorial_Add -> CommonInfo_Create(0x15,-1,0,0) '
                       'and KomaList_Create(0,...); live tutorial script is separate.',
             swap_at_variant=1,
             routing_kind='Inherited scene reset',
             routing_source='functions_layout/arm9_main/arm9_main_0206e064.c#L7',
             note='The original tutorial UI is driven by editable script '
                  'commands; its DSTX widgets are not invented as BG layers.')],
 33:[variant('koma-book','KomaBook — shared KomaState and KomaList native maps',
             KOMASTATE_BG+KOMALIST_BG,
             condition='KomaIBook_Add -> KomaState_Create(mode=2) '
                       'and KomaList_Create(type=2)',
             swap_at_variant=1,
             routing_kind='Inherited scene reset',
             routing_source='functions_layout/arm9_main/arm9_main_0206e064.c#L7',
             note='Saved decks determine active koma sprites. This preview '
                  'only includes original shared 2D map backgrounds.')],
 36:[variant('wireless-watch','Communication — wireless watch/wait state',
             COMMU_WAIT,
             condition='CommuMenuWrlsWatchWait_Add constructs main BG3, sub BG2, '
                       'main BG2 watch_battle from ROM-string pairs at 0x0216A7E4',
             palettes=('Commu/com_bg.ncl',),palette_engine='both',
             note='Watch-battle BG2 is initially hidden. Original SelectStandby '
                  'animations and dynamic menu widgets require callback state.')],
 38:[variant('surechigai','Communication — pass-by mode',
             COMMU_SURETIGAI,
             condition='Scene38 CommuMenu_Add_Core(10,2,0,0) -> ROM table index10 '
                       '(Thumb 0x0215D1C1) -> CommuMenuSuretigai_Add',
             swap_at_variant=0,routing_source=source(7,'0215d1c0',69),
             palettes=('Commu/com_bg.ncl',),palette_engine='main',
             note='Main BG3 shared backdrop loaded; main BG2 sure02 initially '
                  'hidden. Character graphics/palette pulses are runtime-controlled.')],
 29: [variant('common-info','J-Power Koma list — original main-engine info background',
              JPOWER_KOMA_INFO,
              condition='JPowerKomaList_Add invokes CommonInfo_Create(0x17,-1,0,-1): '
                        'param3=0 selects MAIN BG1 and MAIN BG2',
              swap_at_variant=1,
              routing_source='functions_layout/arm9_main/arm9_main_0206e064.c#L7',
              routing_kind='Inherited scene reset',
              note='LCD assignment is inherited from original scene-reset path. '
                   'KomaList and all dynamic sprite positions remain untraced.')],
 18: [variant('jgalaxy-single','J-Quiz — J-Galaxy single play',
              JQUIZ_SINGLE,
              condition='Scene18 -> JQuiz_Add_Core(2,9,0) -> table 0x0216038C[9] '                        '-> JQuizJGalaxyMode_Add -> JQuizMainSinglePlay_Add',
              swap_at_variant=1,
              routing_source=source(4,'0214dcd4',19),
              palettes=(join(JQUIZ,'jquiz/quiz_bg.ncl'),),
              palette_engine='both',
              note='Source-backed gameplay backgrounds only. Active question mask, '
                   'answer widgets, timer, quiz text and pose are runtime-controlled.')],
 40: [variant('battle-rule','J-Quiz — battle rule display',
              JQUIZ_BATTLE_RULE+common_info(),
              condition='Scene40 -> JQuiz_Add_Core(1,5,0) -> table 0x0216038C[5] '                        '-> JQuizBattleRuleDisp_Add',
              swap_at_variant=0,
              routing_source=source(4,'0214d208',18),
              palettes=(join(JQUIZ,'jquiz/quiz_bg.ncl'),),
              palette_engine='main',
              note='Source-backed background layers and shared CommonInfo. '
                   'Dynamic rule icon and condition-specific texts remain unresolved.')],
 0: [variant('original','Copyright — original dual-LCD cards',COPYRIGHT_BG,
             condition='Copyright_Add; source literals 0x02160B60/78/90/A8',
             note='Source uses original loose ganbari/nintendo ALTM+DSIG; no fabricated scene archive or positional controls.')],
 5: [
  variant('default','Deck Check — default window',DECKCHECK_BG,
          condition='DeckCheck_Add(param1 != 1), main BG1/2; sub renderer used for deck display',
          note='Runtime deck widgets/fonts require additional composition tracing.'),
  variant('alternate','Deck Check — alternate window map',[
     DECKCHECK_BG[0],
     archive_bg(DECKCHECK,'deckcheck/win_a','main',1,source(2,'0215a038',134),
                dig_stem='deckcheck/win')],
     condition='DeckCheck_Add(param1 == 1), original string mutation branch',
     note='win_a is backed by source archive and branch at ov02 0215A038; '
          'the exact code-side transformed path requires runtime confirmation.'),
 ],
 8: [
  variant(f'mode-{i}',f'Input — mode {i}',[
    archive_bg(INPUT,f'input/mode_bg{i}','main',3,source(5,'0215f41c',73)),
    archive_bg(INPUT,f'input/txt_bg{i}','main',2,source(5,'0215f41c',86)),
    INPUT_STATIC[0],
    dict(INPUT_STATIC[1],visible=False),
    INPUT_STATIC[2],
   ],condition=f'Input_Add mode selector {i}; file suffix generated by mode byte',
   note='Original main BG1 text widgets, main BG0 3D, sub-mode widgets are '
        'runtime constructions. Sub BG3 exists but is hidden until callback.')
  for i in range(4)
 ],
 15: [variant('vs-call','VsCall — dual screens',VSCALL_BG,
             condition='VsCall_Add, two original BG1 maps',
             note='BG2/3 on both engines and character/opponent art are populated '
                  'dynamically from deck, roster and communication state; not placed here.')],
 30: [variant('jpower','J-Power — base backgrounds',JPOWER_BG,
              condition='JPower_Add main BG2/3; helper 021639D8 reads .atm/.dig',
              note='JPowerInfo, progress widgets and stage data are constructed '
                   'dynamically; base BGs only.')],

 2: [
   variant('entry','Title — active backgrounds',TITLE_ON,condition='constructor visibility enabled'),
   variant('alternate','Title — constructed alternatives',TITLE_ALT,
           condition='hidden until animation callback',
           note='These are real alternate instances, not verified simultaneously visible.'),
 ],
 3: [
   variant('menu','TopMenu — original constructor (runtime-dependent)',TOP_BG+common_info(),
           condition='TopMenu_Add creates CommonInfo(0,-1,1,-1)',
           note='ARM9 code is authoritative. Initial information icon0 and main menu widgets '
                'are code-derived; enabled/disabled icon states and current manga series '
                'are resolved at runtime. Select a series to load its original BG3 artwork.'),
   variant('captured','Captured melonDS main menu (comparison only)',TOP_BG+common_info(),
           condition='Captured main-menu state: selected button0, J-Quiz disabled',
           note='Observation only, subordinate to ARM9 code. Game state controls '
                'selected series and animated character pose; do not treat as hard-coded.'),
 ],
 4: [
   variant('default','Deck Select — standard',DECK_BG,
           condition='context selector default',
           palettes=('deckselect/deckselect.aar|deckselect/deck_t_sel00.ncl','Commu/com_bg.ncl')),
   variant('arena','Deck Select — J-Arena',DECK_BG,
           condition='selector 1 or 4',
           palettes=('deckselect/deckselect.aar|deckselect/deck_a_sel00.ncl','JArena/arena_bg.ncl')),
   variant('comic','Deck Select — selector 6',DECK_BG,
           condition='selector 6',
           palettes=('deckselect/deckselect.aar|deckselect/deck_c_sel00.ncl',)),
   variant('no-palette','Deck Select — selector 5',DECK_BG,
           condition='selector 5, no replacement palette applied'),
 ],
 6: [
   variant('solo','Stage Select — solo',STAGE_BG,condition='StageSelect_Add param1=0',
           palettes=('JArena/arena_bg.ncl',)),
   variant('multiplayer','Stage Select — communication',STAGE_BG,condition='StageSelect_Add param1!=0',
           palettes=('stageselect/stageselect.aar|stageselect/st_t_sel00.ncl',
                     'stageselect/stageselect.aar|stageselect/st_t_sel01.ncl',
                     'Commu/com_bg.ncl')),
 ],
 7: [
   variant('local-entry','Rule Select — local entry',RULE_BG+common_info(),
           condition='FUN_02162D88 mode=0, POWCNT1 bit15=0',
           palettes=('JArena/arena_bg.ncl',),palette_engine='main',
           note='Local play: J-Arena palette loaded for main BG3 info backdrop.'),
   variant('comm-entry','Rule Select — communication entry',RULE_BG+common_info(),
           condition='FUN_02162D88 mode!=0, POWCNT1 bit15=0',
           palettes=('ruleselect/ruleselect.aar|ruleselect/rule_t_sel00.ncl',
                     'Commu/com_bg.ncl'),palette_engine='main'),
   variant('local-swapped','Rule Select — local swapped LCDs',RULE_BG+common_info(),
           condition='local mode; callback FUN_021617F0 sets bit15=1',
           palettes=('JArena/arena_bg.ncl',),palette_engine='main'),
   variant('comm-swapped','Rule Select — communication swapped LCDs',RULE_BG+common_info(),
           condition='communication mode; callback FUN_021617F0 sets bit15=1',
           palettes=('ruleselect/ruleselect.aar|ruleselect/rule_t_sel00.ncl',
                     'Commu/com_bg.ncl'),palette_engine='main'),
 ],
 21: [variant('menu','J-Arena mode menu',JA_BG+common_info(),
              note='The four buttons are source-backed main-engine sprites. CommonInfo draws on the other LCD.')],
 34: [variant('options','Options — settings',[
        archive_bg(OPT,'option/option','main',1,source(0,'02157138',171)),
        loose_bg('info/bg','main',2,source(0,'02157138',174)),
        ]+common_info(),
        note='Option::Option_Add creates CommonInfo(30, -1, 1, -1); individual option handlers select description IDs 24-28.')],
 32: [
   variant('menu','Database — top menu',DB_MENU,condition='Database::Database_MenuCreate'),
   variant('locations','Database — locations',DB_LOC,condition='DatabaseLocation::Database_LocationCreate'),
   variant('list-0','Database — list 0',[
     archive_bg(DB,'database/list_bg0','main',1,source(5,'021685f4',76))]+DB_LIST,
     condition='DatabaseList::Database_ListCreate type 0'),
   variant('list-1','Database — list 1',[
     archive_bg(DB,'database/list_bg1','main',1,source(5,'021685f4',76))]+DB_LIST,
     condition='DatabaseList::Database_ListCreate type 1'),
   variant('list-2','Database — list 2',[
     archive_bg(DB,'database/list_bg2','main',1,source(5,'021685f4',76))]+DB_LIST,
     condition='DatabaseList::Database_ListCreate type 2'),
   variant('personal','Database — personal',DB_PERSONAL,condition='DatabasePersonal::Database_PersonalCreate'),
   variant('comics','Database — comic/series',DB_COMIC,condition='DatabasePiece::Database_PieceCreate',
           note='The per-series portrait image needs an explicit series selection.'),
 ],
}

# Source-backed CommonInfo text indices. These are not arbitrary translated
# strings: FUN_021bd730 takes this index and resolves the 438-word CP932 table
# from bin/InfoDeck.aar|bin/info/<series>.bin.
SCENE_TEXT_IDS = {
 29:[('jpower-koma-list',0x44)],
 3: [(i, text) for i,text in enumerate((0,1,2,3,6,5,7,8))],
 21: [(i, 41+i) for i in range(4)],
 34:[(f'option-{i}',i) for i in (24,25,26,27,28)],
 7: [
  ('rule-0',10),('rule-1',11),('rule-2',12),
  ('time',13),('ai-count',16),('items',14),('hazards',15),
  ('teamplay',19),('team',21),('ai-difficulty',17),('ai-deck',18),
 ],
}
SCENE_TEXT_SOURCE = {
 29:'functions_layout/arm9_ov05/arm9_ov05_02166994.c#L38-L40',
 3:'functions_layout/arm9_ov00/arm9_ov00_02155c68.c#L4-L8; 0x02161098',
 21:'functions_layout/arm9_ov03/arm9_ov03_0214ed1c.c#L5-L9; 0x0215D448',
 7:'functions_layout/arm9_ov01/arm9_ov01_021639b8.c#L3-L9; 0x0216CF0C',
 34:'functions_layout/arm9_ov00/arm9_ov00_021588b0.c; '
     'functions_layout/arm9_ov00/arm9_ov00_021588f8.c; '
     'functions_layout/arm9_ov00/arm9_ov00_02158940.c; '
     'functions_layout/arm9_ov00/arm9_ov00_02158988.c; '
     'functions_layout/arm9_ov00/arm9_ov00_021589b0.c',
}


def variants_for_scene(scene_id: int) -> list[dict]:
    return SCENE_VARIANTS.get(scene_id, [])


def series_codes(root, kind: str = 'info') -> list[str]:
    arc = 'info/chr/chr.aar' if kind == 'info' else 'database/comic/comic.aar'
    entries = root.archive(arc).entries
    return sorted({e.name.rsplit('/')[-1][:-4] for e in entries if e.ext == '.atm'
                   and e.name.lower().endswith('.atm')})


def scene_layers(root, scene: dict, selected_variant: str | None = None,
                 series_code: str | None = None) -> list[tuple[scenes.Layer, dict]]:
    """Real BG instances, each uniquely named by engine/BG slot and source.

    Multiple instances may reference the same ALTM without merging them.
    No source file is written and no unverified sprite X/Y is invented.
    """
    sid = int(scene['id'])
    variants = variants_for_scene(sid)
    choice = next((v for v in variants if v['id'] == selected_variant), variants[0] if variants else None)
    if choice is None:
        return []
    layers = list(choice['layers'])
    if sid == 3 and choice['id']=='captured' and not series_code:
        series_code='jp'  # ROM overlay12: index0 BG asset jp.atm, text table jump.bin
    if sid in (3, 7, 21, 34) and series_code:
        codes = series_codes(root)
        if series_code not in codes:
            raise ValueError(f'Unknown runtime manga series: {series_code}')
        layers.append(archive_bg('info/chr/chr.aar',f'info/chr/{series_code}', 'sub', 3,
                                 source(12,'021bdbd8',49)))
    if sid == 32 and choice['id'] == 'comics' and series_code:
        codes = series_codes(root, 'comic')
        if series_code not in codes:
            raise ValueError(f'Unknown comic series: {series_code}')
        layers.append(archive_bg('database/comic/comic.aar',
                                 f'database/comic/{series_code}', 'sub', 2,
                                 source(5,'0216a280',53)))
    swap = choice.get('swap_at_variant')
    variant_routing = swap in (0,1)
    if not variant_routing:
        swap = (scene.get('display_routing') or {}).get('swap_bit15_at_entry')
    inherited = swap is None and sid in (0, 2, 4, 6, 15)
    if inherited:
        # ARM9 jus_Scene_Update -> FUN_0206E064 resets bit15 to 1
        # before scene constructors. No later literal swap has been proven
        # for these constructors; unlike explicit switches, this is
        # cross-checked inherited routing and should be labeled accordingly.
        swap = 1
    if sid == 7 and choice['id'].endswith('swapped'):
        swap = 1
    results, seen = [], set()
    for item in layers:
        path = item['atm']
        pic = item['dig']
        if not root.exists(path) or not root.exists(pic):
            raise ValueError(f'Original BG resource missing: {path} / {pic}')
        key = (item['engine'],item['slot'],path,pic)
        if key in seen:
            raise ValueError(f'Duplicate engine/BG binding: {key}')
        seen.add(key)
        from jus_formats.binary import is_dscp, dscp_unwrap
        raw = root.read(path)
        loaded = altm.parse(dscp_unwrap(raw) if is_dscp(raw) else raw)
        name = f'{item["engine"].upper()} BG{item["slot"]} | {path.split("|")[-1].split("/")[-1]}'
        layer = scenes.Layer(name, path, pic, loaded)
        physical = screen_for_engine(item['engine'],swap) if swap in (0,1) else scenes.default_screen(path)
        # ARM9 startup FUN_02042D14 writes BGxCNT priority bits [1:0].
        # These survive scene reset FUN_0206E064/FUN_0203D4E4,
        # which resets BG contexts but does not write those two bits.
        # A later scene callback may override hardware priority; this is
        # the code-derived BASELINE, not a claim of a dynamic register trace.
        initial_priorities = {
            'main': (1, 0, 2, 3),  # 0x04000008,0A,0C,0E
            'sub': (3, 2, 1, 0),   # 0x04001008,0A,0C,0E
        }
        priority=initial_priorities[item['engine']][item['slot']]
        cfg={'screen':physical,'sx':0,'sy':0,'visible':item.get('visible',True),
             'native_bg':True,'engine':item['engine'],'bg_slot':item['slot'],
             'native_evidence':'Cross-checked' if variant_routing and choice.get('routing_kind')=='Inherited scene reset' else 'Direct callback variant' if variant_routing else 'Cross-checked' if inherited else 'Direct' if swap in (0,1) else 'Inferred',
             'routing_source':choice.get('routing_source','') if variant_routing else '',
             'routing_kind':choice.get('routing_kind','') if variant_routing else '',
             'source':item['source'],'animated':item.get('animated',False),
             'note':item.get('note',''),'palette_replacements':choice.get('palettes',[]),
             'palette_overrides':choice.get('palettes',[]) if choice.get('palette_engine')=='both' or item['engine']==choice.get('palette_engine','sub') else [],
             'preview_order':-priority,
             'baseline_bg_priority':priority,
             'order_evidence':'functions_layout/arm9_main/arm9_main_02042d14.c#L49-L57; '
                              'functions_layout/arm9_main/arm9_main_0206e064.c#L4-L24; '
                              'functions_layout/arm9_main/arm9_main_0203d4e4.c#L15-L44'}
        results.append((layer,cfg))
    # This is the ARM9 startup priority baseline; dynamic callback overrides,
    # affine offsets and blending still require scene-specific tracing.
    return results
