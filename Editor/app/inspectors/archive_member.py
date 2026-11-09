"""Source-backed JUS _member_details presenter (R08). No native behavior simulated."""
import struct
from app import theme as T
from jus_formats import alod,battleai,battleinput,bintables,chrbin,deckcompanion,gametables
from jus_package import chrdiagnostics

def render_archive_member_details(editor, hex_id):
    ins = editor.member_details
    ins.clear()
    if getattr(editor, '_table', None):
        editor._table_details(ins, *editor._table)
        return
    if not editor.container:
        ins.section('Archive')
        ins.text('Select an archive in the Project panel.')
        return
    arc = editor.root_data.archive(editor.container)
    ins.section('Archive', note=editor.container)
    ins.value('Version', f'ALAR{arc.version}  flags {hex_id(arc.flags, 2)}')
    ins.value('Members', str(len(arc.entries)))
    ins.value('Name hash', 'resource_hash' if arc.uses_resource_hash() else 'rotl_hash')
    ins.buttons(('Add…', editor.add_member), ('Rebuild check', editor.rebuild_check))
    e = editor._selected_member()
    if e is None:
        return
    ins.section('Member', note=e.name)
    ins.value('Type', f'{hex_id(e.type_byte, 2)}  ({e.ext or "?"})')
    ins.value('Resource id', hex_id(e.resource_id, 6))
    a = e.attributes
    ins.value('Attributes', f'{hex_id(a)}\nspan {e.span}' + ('  · bit30 (span>1)' if a & 0x40000000 else '') +
              ('  · bit24' if a & 0x01000000 else ''))
    ok = arc.expected_hash(e) == e.name_hash if e.name_hash is not None else None
    ins.value('Hash', f'{(e.name_hash or 0):04X}  ' + ('ok' if ok else 'MISMATCH' if ok is False else ''),
              colour=T.GOOD if ok else T.BAD if ok is False else None)
    ins.value('Size', f'{len(e.data):,} bytes' + ('  (DSCP)' if e.compressed else ''))
    ins.buttons(('Extract…', editor.extract_member), ('Replace…', editor.replace_member),
                ('Remove', editor.remove_member))
    if e.ext == '.aod':
        node_table = alod.parse(e.payload())
        ins.section('ALOD node relationships',
                    note=f'{len(node_table.nodes)} nodes · {len(node_table.field_names)} declared fields')
        ins.value('Version/flags', f'{node_table.version} / 0x{node_table.flags:02X}')
        ins.value('Field names', ', '.join(node_table.field_names) or 'none')
        for node in node_table.nodes:
            ins.value(node.name, f'class {node.kind!r}; parent {node.parent or "—"}; '
                      f'{len(node.properties)} properties')
        deviations = node_table.nonstandard_parent_links()
        if deviations:
            ins.value('Non-original parent classes', str(deviations), colour=T.WARN)
            ins.text('This hierarchy is outside all shipped GN-to-SP relationships; '
                     'engine support for other parent classes is unverified.')
        else:
            ins.value('Original hierarchy pattern', 'GN → SP only (or unparented)')
        ins.evidence('Observed descriptors', 'Cross-checked',
                     '1,247 original ALOD files: all 1,078 observed property descriptors '
                     'are 0x00000010 ParentNodeID (4-byte source node names). '
                     'ARM9 main 02020F7C registers ParentNodeID; unknown bytes preserved.')
        ins.text('A source-preserving parent-value editing operation exists in '
                 'jus_formats.alod, but arbitrary runtime reparenting is unverified.')
    if editor.container.endswith('deck/Deck.aar') and len(e.payload()) == 0x40:
        companion = deckcompanion.parse(e.payload())
        ins.section('Deck companion metadata',
                    note='64-byte pNNN.bin — ARM9 main FUN_02070B5C copies all 0x40 bytes')
        ins.value('Name (UTF-16LE +0x00)', companion.name)
        ins.value('Comment (CP932 +0x14)', companion.comment)
        try:
            pname = gametables.view('bin/pname.bin', editor.root_data.read('bin/pname.bin'))
            locations = gametables.view('bin/location.bin', editor.root_data.read('bin/location.bin'))
            if pname is None or locations is None:
                raise ValueError('Profile-name or location table is unavailable')
            pidx, lidx = companion.profile_name_index, companion.location_index
            pname_text = (pname.records[pidx].label.partition(': ')[2]
                          if pidx < len(pname.records) else 'OUT OF RANGE')
            loc_text = (locations.records[lidx].label.partition(': ')[2]
                        if lidx < len(locations.records) else 'OUT OF RANGE')
            ins.value('Profile name (+0x34)', f'{pidx} → {pname_text}')
            ins.value('Location (+0x35)', f'{lidx} → {loc_text}')
            ins.evidence('Profile and location indexes', 'Direct',
                         'DeckSelect ov01 0215EE38 reads +0x34/+0x35 and calls '
                         'main 02075788 (pname.bin) / 02075678 (location.bin); '
                         '75/75 original indexes valid')
        except (OSError, ValueError, IndexError) as exc:
            ins.value('Profile and location text lookup', f'Unavailable: {exc}', colour=T.WARN)
        ins.value('Unclassified status (+0x36)', f'0x{companion.runtime_status_byte:02X}')
        ins.value('Unclassified byte (+0x37)', f'0x{companion.raw[0x37]:02X}')
        ins.value('Metadata +0x34', f'0x{companion.metadata_words[0]:08X} '
                  f'· bytes {companion.raw[0x34:0x38].hex(" ")}')
        ins.value('Word +0x38', f'0x{companion.metadata_words[1]:08X} (all 75 original: zero)')
        ins.value('Word +0x3C', f'0x{companion.metadata_words[2]:08X} '
                  '(nonzero/check in FUN_020725AC/020725BC)')
        ins.evidence('Profile-name index setter +0x34', 'Direct',
                     'FUN_0207263C updates +0x34 from overlay6 0216002C; '
                     'DeckSelect 0215EE38 resolves it via pname.bin getter 02075788')
        ins.evidence('Location index setter +0x35', 'Direct',
                     'FUN_0207265C updates +0x35 from Database/overlay5; '
                     'DeckSelect 0215EE38 resolves it via location.bin getter 02075678')
        ins.evidence('Metadata byte +0x36', 'Direct',
                     'FUN_0207267C writes +0x36 on the overlay7 data path; '
                     'original +0x36 is 1 in all 75 files')
        ins.text('The paired 92-byte deck controls Koma slots. This 64-byte companion '
                 'contains a UTF-16 name, CP932 comment, and 12 original metadata bytes; '
                 'the numeric metadata is retained without invented enum names.')
    if editor.container.endswith('deck/Deck.aar') and len(e.payload()) == 0x5C:
        deck = bintables.parse_deck(e.payload())
        names = bintables.koma_names(editor.root_data)
        ins.section('Deck preset', note=f'{deck.name} — FUN_02070A28 copies 0x5C bytes')
        for i, s in enumerate(deck.slots):
            if s.empty:
                continue
            label = names[s.koma].replace('|', ' ').strip() if s.koma < len(names) else '?'
            ins.value(f'Slot {i}', f'Koma {s.koma} {label} · column {s.column}, row {s.row}'
                                   + (f' · extra {s.extra}' if s.extra else '') + (' · flag 0x1000' if s.flag else ''))
        ins.text('Column/row are the 5×4 deck board position (checked: every preset fits with the cards\' '
                 'shapes). Extra bits 8–11 and the 0x1000 flag are not traced.')
    if e.ext == '.bin':
        try:
            tv = gametables.view(e.name, e.payload())
        except (ValueError, struct.error) as exc:
            tv = None
            ins.value('Table', f'layout check failed: {exc}', colour=T.BAD)
        if tv is not None:
            ins.section(tv.title, note=f'{len(tv.records)} records · {tv.source}')
            for r in tv.records[:40]:
                ins.value(r.label.split(':')[0], r.label.split(': ', 1)[-1] + ''.join(
                    f'\n  {k}: {v}' for k, v in r.fields[:6] if not r.label.endswith(v)))
            if len(tv.records) > 40:
                ins.value('', f'… {len(tv.records) - 40} more')
            if tv.note:
                ins.text(tv.note)
    payload = e.payload() if e.name.startswith('chr/ai/') else b''
    if payload[:4] == b'AIPM':
        prof = battleai.parse_aipm(payload)
        ins.section('AI attack profile (AIPM)', note='index i = input selector i+1 (overlay 11)')
        for i, block in sorted(prof.blocks.items()):
            ctrl = next((c[0] for c in battleinput.MOVE_CONTROLS.values() if c[1] == block.selector),
                        f'selector {block.selector}')
            ins.value(f'#{i}', f'{ctrl}: {len(block.records)} hit(s)' +
                      ''.join(f'\n  {r.rect} ticks {r.active[0]}–{r.active[1]} power {r.power}'
                              for r in block.records[:3]))
    elif payload[:4] == b'AIMV':
        g = battleai.parse_aimv(payload)
        ins.section('AI navigation graph (AIMV)', note='node i = stage collider i (overlay 11)')
        ins.value('Nodes', str(len(g.nodes)))
        for row in range(battleai.AIMV_ROWS):
            ins.value(f'Row {row}', f'{len(g.edges(row))} links')
    elif e.name.endswith('ai_param.bin'):
        p = battleai.parse_ai_param(payload)
        ins.section('AI parameters', note='0x30-byte records; +0x2E rating (ov12 0x021C56D0)')
        ins.value('Records', str(p.count))
        ins.value('Ratings', ', '.join(str(p.rating(i)) for i in range(min(p.count, 24))))
    if chrbin.kind_of(e.name) in ('shot', 'col', 'effect'):
        table = chrbin.parse(e.payload(), e.name)
        if table.kind == 'shot' and table.stride == 32:
            ins.section('Shot work records - read-only',
                        note='0x20 stride; byte0 selects ov06 callback table at 0x02172864')
            ins.value('Count', str(table.count))
            for i in range(min(table.count, 24)):
                rec = table.shot_record(i)
                ins.value(f'#{i}', chrdiagnostics.shot_record_detail(rec))
                ins.value(f'#{i} · additional native source fields',
                          chrdiagnostics.shot_source_extensions(rec))
                nested=rec.handler_16_nested_shot_index
                if nested is not None:
                    if 0<=nested<table.count:
                        next_shot=table.shot_record(nested)
                        ins.value(f'#{i} · on-contact next shot #{nested}',
                                  f'handler 0x{next_shot.handler_id:02X}; '
                                  f'ALMT 0x{next_shot.primary_animation_id:08X}; '
                                  f'+0x1E→row*0x20 proven in ov06 0216F8D8')
                    else:
                        ins.value(f'#{i} · on-contact shot index',
                                  f'UNRESOLVED row {nested}, count {table.count}',colour=T.WARN)
            if table.count > 24:
                ins.value('Additional', f'{table.count - 24} records not listed')
            ins.evidence('Shot duration/flags', 'Direct',
                         'overlay6 02158470/0216ACC8 and per-handler callbacks')
            ins.evidence('Handler operation', 'Direct',
                         'mechanical code paths, not canonical move names')
            ins.evidence('Named gameplay attack types', 'Unknown',
                         'require original collision/runtime verification')
            ins.text('The +0x1D selector is context-dependent (coordinate, audio, or '
                     'target slot). Unknown flag bits and record bytes are retained.')
        elif table.kind == 'effect' and table.stride == 8:
            ins.section('Character impact effects',
                        note='0x08 source row; src+0x00 animation, +0x04 sound slot, +0x06 argument')
            ins.value('Effect entries', str(table.count))
            for i in range(table.count):
                ins.value(f'Effect index {i} · col selector {i+0x40}',
                          chrdiagnostics.effect_record_detail(table.effect_record(i)))
            ins.evidence('Effect animation/audio dispatch', 'Direct',
                         'ov06 02153CE8 reads BattlePrmData+0x14 effect table; '
                         '0206C7FC selects ALMT, and +0x04/+0x06 feed 0207342C sound')
            ins.evidence('Effect selection', 'Direct',
                         'col+0x0E/0x0F: -1=disabled; 0..63=builtin; '
                         '64+ = row in this table (native ov06 02153CE8)')
            ins.text('Original 66 tables contain 113 effect rows. No rendered projectile '
                     'shape, lifetime or collision geometry is inferred from this record.')
        elif table.kind == 'col' and table.stride == 20:
            ins.section('Collision metadata - read-only',
                        note='0x14 stride; not ALMT CollisionType work IDs')
            ins.value('Count', str(table.count))
            fx_member = arc.find(e.name.replace('chr/col/', 'chr/effect/'))
            fx_table = (chrbin.parse(fx_member.payload(), fx_member.name)
                        if fx_member is not None else None)
            for i in range(min(table.count, 24)):
                rec = table.col_record(i)
                ins.value(f'#{i} - ALMT work 0x{0x100+i:04X}',
                          chrdiagnostics.collision_record_detail(rec))
                ins.value(f'#{i} · additional contact fields',
                          chrdiagnostics.collision_source_extensions(rec))
                for label, selected in zip(('First', 'Second'), rec.impact_effect_resolution):
                    if selected.character_record is None:
                        continue
                    if fx_table is not None and fx_table.stride == 8 and selected.character_record < fx_table.count:
                        obj = fx_table.effect_record(selected.character_record)
                        ins.value(f'  {label} effect · char row {selected.character_record}',
                                  chrdiagnostics.effect_record_detail(obj))
                    else:
                        ins.value(f'  {label} effect link', 'UNRESOLVED effect row', colour=T.WARN)
            if table.count > 24:
                ins.value('Additional', f'{table.count - 24} records not listed')
            ins.evidence('Signed score term', 'Direct',
                         'overlay11 opponent threat scoring')
            ins.evidence('Impact status / knockback / linked effects', 'Direct',
                         'main 02080F14: source+0x03 status lane, +0x0C/+0x0D '
                         'knockback, +0x0E/+0x0F impact selectors; '
                         'ov06 02153CE8: built-in and character effect routing')
            ins.evidence('ALMT work to source row', 'Direct',
                         'ARM9 main 0207D440: work 0x100+i -> chr/col row i;'
                         ' 0x0000..0x00FF use builtin ROM table')
            ins.evidence('Class zero/nonzero branch', 'Direct',
                         'ARM9 main 0207D440; human gameplay class labels unknown')
            ins.evidence('+0x08 OR-mask contributions', 'Direct',
                         'Original ARM9 32-entry mask tables; output is not final flags')
            ins.evidence('Class/selector gameplay names', 'Unknown',
                         'byte0 and byte1 are distinct from the ALMT work ID')
