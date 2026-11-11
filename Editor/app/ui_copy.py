"""Release-facing terminology for the Editor.

Only display labels and selector captions are changed. Never modify original
binary field names, serialized values, game identifiers or source references.
Keep technical identifiers available through explicit details/tooltips.
"""
from __future__ import annotations

import re

SECTION_TITLES = {
    'Original move text': 'Move description',
    'Original input to ALMT': 'How to use this move',
    'Native collision / status records': 'Hit effects and status',
    'D-pad movement / stance': 'Movement and stance',
    'Reaction animation': 'Reaction animation',
    'Engine-driven reaction assignments': 'When this reaction plays',
    'Engine-driven movement state': 'Movement behavior',
    'Other state transition': 'Other movement behavior',
    'Native internal move dispatch': 'Used automatically by the game',
    'Unnamed base action': 'Other animation',
    'Koma references': 'Available on these Koma',
    'Original dynamic geometry': 'How the effect moves',
    'Authored dynamic geometry (GenerateID)': 'Effect movement and attachments',
    'Source-backed loose backgrounds': 'Background artwork',
    'Sprite frame preview — read-only': 'Sprite preview',
    'Original ROM callback dispatch': 'Screen variations',
    'Native renderer — original game': 'How this screen is drawn',
    'TopMenu CharaData action selectors — engine rules': 'Character animations in this menu',
    'Emulator save-state evidence': 'Reference screenshot information',
    'Mode-selection explanations': 'Menu help messages',
    'Evidence': 'What is confirmed',
    'Collision metadata - read-only': 'Hitbox properties (view only)',
    'Shot work records': 'Projectile settings',
    'Character impact effects': 'Hit effects',
    'ALOD node relationships': 'Parent and child objects',
    'Deck companion metadata': 'Deck details',
    'Deck preset': 'Deck layout',
    'Physics (NoteTrack 0x01xx)': 'Movement preview',
    'Sound cues (NoteTrack 0x04xx)': 'Sound effects',
    'Koma evolution / purchase': 'Koma upgrades and costs',
    'Passive Stats / Native Descriptor': 'Passive ability settings',
    'Moves (BIN / ALMT)': 'Moves and abilities',
    'Card (bin/koma.bin)': 'Koma properties',
    'Shot source': 'Projectile effects',
    'Original UI overlays': 'On-screen elements',
    'Screen editor': 'Screen editor',
    'Raw tile grid': 'Tile layout',
    'Original move text': 'Move details',
}

LABELS = {
    'ID': 'Animation ID',
    'Flags': 'Options (advanced)',
    'fps': 'Playback rate',
    'Source ALMT': 'Animation file',
    'ALMT': 'Animation',
    'BIN title slot': 'Text entry (advanced)',
    'Description slots': 'Description entries (advanced)',
    'Source-derived action': 'Movement',
    'Source-derived role': 'Animation purpose',
    'Original ALMT offset': 'Animation number',
    'Selected ALMT offset': 'Animation number',
    'Native code path': 'Technical source',
    'Native transition path': 'Technical source',
    'State mode': 'While',
    'Input predicate': 'Required input',
    'Code source': 'Technical source',
    'Original code call edges': 'Connected game behaviors',
    'Verified indirect pointers': 'Linked game behaviors',
    'Code-referenced asset paths': 'Referenced artwork and data',
    'ARM9-traced functions': 'Known screen behaviors',
    'Hardware-related reachable sites': 'Possible screen hardware controls',
    'Other ROM callback slots': 'More screen variations',
    'Engine geometry / routing': 'Screen positioning and behavior',
    'Renderer status': 'Preview availability',
    'Original BG variants': 'Background choices',
    'POWCNT1 bit 15': 'Screen routing flag (advanced)',
    'Main engine (A)': 'First graphics engine',
    'Sub engine (B)': 'Second graphics engine',
    'Original UI overlays': 'Menu elements',
    'Native origin': 'Original position',
    'Display screen': 'Shown on',
    'Authored cell @ t0': 'Starting image frame',
    'Move ID': 'Animation ID',
    'Render state / collision': 'Visibility and hit area',
    'Physical LCD': 'Console screen',
    'Graphics engine': 'Graphics system',
    'Runtime animation': 'Animated in the game',
    'Runtime scroll/animation': 'Automatic movement',
    'Initial hardware BG priority': 'Background order',
    'Tile grid (hex)': 'Tile data (advanced)',
    'DSIG pixel mode': 'Image format (advanced)',
    '4bpp palette bank IDs': 'Color palette groups',
    'Distinct source tiles': 'Unique tiles',
    'Flipped cells (H,V)': 'Mirrored tiles (horizontal, vertical)',
    'Source preview window': 'Preview duration',
    'Source event': 'Created by',
    'Handler': 'Effect behavior code (advanced)',
    'Native per-frame callback': 'Movement rule (advanced)',
    'Native functions': 'Technical references',
    'ROM dispatch tables': 'Technical references',
    'Speed work +0x04': 'Speed setting (advanced)',
    'Raw source byte +0x01': 'Additional setting (advanced)',
    'Movement family': 'Movement style',
    'Required runtime state': 'When the effect can move',
    'Position logic': 'How position is calculated',
    'Original texture': 'Image used',
    'Rendered texture': 'Shown image',
    'Source ALMT': 'Animation file',
    'Primary ALMT': 'Main animation',
    'Constructed ALMT': 'Created animation',
    'ALMT duration': 'Animation length',
    'Native direction argument': 'Direction setting',
    'Native velocity formula': 'Speed calculation',
    'Card ↔ art': 'Card artwork',
    'J-Power': 'Upgrade requirements',
    'Family root': 'Base Koma',
    'Known Koma unlocks': 'Available upgrades',
    'Other unlock kinds': 'Other unlockables',
    'Unlock link': 'Upgrade',
    'Selected target': 'Unlocks',
    'Six resource costs': 'Upgrade costs',
    'Gate/placement raw': 'Unlock conditions (advanced)',
    'Cell offset': 'File position (advanced)',
    'Ability ID': 'Ability number',
    'Raw descriptor': 'Ability data (advanced)',
    'Stat magnitude': 'Ability strength',
    'Category +0': 'Ability category (advanced)',
    'Subtype +1': 'Ability subtype (advanced)',
    'Parameter +2': 'Ability value (advanced)',
    'Reserved +3': 'Unused data (advanced)',
    'Card shape': 'Koma shape',
    'Art index': 'Artwork number',
    'Series id': 'Series',
    'Raw': 'Source data (advanced)',
    'Cross-reference': 'Linked information',
    'Unclassified status (+0x36)': 'Other setting (unknown)',
    'Unclassified byte (+0x37)': 'Other setting (unknown)',
    'Metadata +0x34': 'Deck settings (advanced)',
    'Word +0x38': 'Other setting (advanced)',
    'Word +0x3C': 'Other setting (advanced)',
    'Byte length': 'File size (bytes)',
    'Mode (+0x0C)': 'Camera mode (advanced)',
    'Point count (+0x0D)': 'Camera points',
    'Unapplied camera changes': 'Unsaved camera edits',
    'Reserved (+0x0E)': 'Unused value (advanced)',
    'Raw point rectangle (unclassified)': 'Point bounds (meaning unconfirmed)',
    'Original rectangular point order': 'Points form a rectangle',
    'Stage physics/gimmicks': 'Stage objects and physics',
    'Battle stage index': 'Stage number',
    'Table words': 'Stage settings (advanced)',
    'Storage': 'File format',
    'Banks used': 'Color palette groups',
    'Map': 'Map size',
    'Entry': 'Tile value (advanced)',
    'Bank': 'Color palette group',
    'Tile image': 'Artwork source',
    'Resource id': 'Resource ID (advanced)',
    'Name hash': 'File identifier (advanced)',
    'Hash': 'File identifier (advanced)',
    'Attributes': 'File properties (advanced)',
    'Version/flags': 'Format version (advanced)',
    'Field names': 'Properties',
    'Texture ID': 'Image number',
    'Effect ID': 'Effect number',
    'Type ID': 'Type number (advanced)',
    'Frame bounds': 'Frame dimensions',
    'EffectFlags': 'Effect options (advanced)',
    'ParentLink': 'Follow parent object',
    'DrawPrio': 'Draw order',
    'Marker': 'Animation marker',
    'Editing': 'Editing mode',
    'Key frame': 'Keyframe',
    'Unknown': 'Not confirmed',
}

FIELD_NAMES = {
    'BoundsIndex': 'Sprite frame',
    'TextureID': 'Image',
    '2DPos': 'Position (2D)',
    'Position': 'Position (3D)',
    'Scale': 'Size / scale',
    '2DRot': 'Rotation',
    'Color': 'Color tint',
    'Alpha': 'Opacity',
    'DrawPrio': 'Draw order',
    'GenerateID': 'Spawn effect',
    'ParentLink': 'Follow parent effect',
    'Disp': 'Visible',
    'HFlip': 'Mirror horizontally',
    'VFlip': 'Mirror vertically',
    'ZWriteEnable': 'Write depth',
    'ZTestEnable': 'Use depth test',
    'LifeType': 'Effect lifetime',
    'PatternNo': 'Image frame',
    'BlendMode': 'Blending',
    'Marker': 'Animation marker',
    'EffectFlags': 'Effect options',
    '2DScale': 'Size (2D)',
    '2DColor': 'Color (2D)',
}

def field_label(field: str) -> str:
    for prefix, caption in (('CollisionRect', 'Hitbox area'),
                            ('CollisionEnable', 'Hitbox enabled'),
                            ('CollisionType', 'Hitbox behavior')):
        if field.startswith(prefix) and field[len(prefix):].isdigit():
            return f'{caption} {int(field[len(prefix):]) + 1}'
    return FIELD_NAMES.get(field, field)


def label(text: str) -> str:
    """Translate display strings only; leave code-defined file values intact."""
    if not isinstance(text, str):
        return text
    if text in LABELS:
        return LABELS[text]
    if text in SECTION_TITLES:
        return SECTION_TITLES[text]
    if text in FIELD_NAMES:
        return FIELD_NAMES[text]
    if text.startswith('Header signed pair '):
        return re.sub(r'^Header signed pair (\d+).*$',r'Camera setting \1 (advanced)',text)
    if text.startswith('Point ') and '(+0x' in text:
        return re.sub(r'^Point (\d+).*$',r'Camera point \1',text)
    if text.startswith('Panel ') and 'raw tile grid' in text:
        return text.replace('raw tile grid','tile layout')
    if text.startswith('ALMT ') or text.startswith('Native '):
        return text.replace('ALMT ','Animation ',1).replace('Native ','Game ',1)
    return text


def evidence_status(grade: str) -> str:
    return {
        'Direct': 'Verified',
        'Cross-checked': 'Verified against game data',
        'Inferred': 'Best available estimate',
        'Unknown': 'Not confirmed',
        'Limited': 'Partially understood',
    }.get(grade, 'Status not available')

_TECH_NOTE = re.compile(
    r'FUN_[0-9A-Fa-f]{8}|\b(?:ARM9|ARM7|ROM|ALMT|DSIG|DSTX|ALOD|CP932|NoteTrack|'
    r'ChrBin|source\+0x|actor\+0x|ov0\d)\b|0x[0-9A-Fa-f]{4,}|\+0x[0-9A-Fa-f]{2}',
    re.IGNORECASE,
)


def is_technical_note(note: str) -> bool:
    """Hide file-layout and reverse-engineering notes from the default view."""
    return bool(_TECH_NOTE.search(note))

