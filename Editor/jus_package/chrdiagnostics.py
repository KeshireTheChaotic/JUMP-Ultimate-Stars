"""Pure ChrBin diagnostics for the Archive inspector (R08).

Formats original decoded, source-backed shot and collision records without
Tk/Inspector dependencies. Does not assign gameplay names to unknown bytes
or infer a projectile's native runtime motion or contact behavior.

R08 original diagnostic strings are compatibility contracts: use the distinct
source_extensions below for newer discoveries, never change their output.
"""


from jus_formats.chrbin_semantics import native_reaction_route, native_shot_flags
from jus_package.dynamicgeometry import SHOT_UPDATE_HANDLERS


def shot_record_detail(rec) -> str:
    """Preserve existing read-only original chr/shot record description."""
    detail = (f'handler 0x{rec.handler_id:02X} -> {rec.handler_address}'
              f' | {rec.handler_behavior}'
              f'\n  +0x02 spawn cap {rec.spawn_limit} (only with active counter);'
              f' duration {rec.lifetime} '
              f'(effective {rec.effective_lifetime})'
              f' | +0x04 0x{rec.work_param:04X}'
              f'\n  flags 0x{rec.flags:08X} : '
              f'{", ".join(rec.known_flags) or "no global flags"}'
              f'\n  handler flags: '
              f'{", ".join(rec.handler_scoped_flags) or "none traced"}'
              f' | unclassified 0x{rec.unknown_flags:08X}'
              f'\n  +0x0C 0x{rec.reference0:08X},'
              f' +0x10 0x{rec.reference1:08X},'
              f' +0x14 0x{rec.optional_reference:08X}'
              f' ({"enabled" if rec.optional_reference_active else "inactive"})'
              f'\n  +0x01 0x{rec.byte1:02X},'
              f' +0x1D 0x{rec.selector_byte:02X}'
              f' (s8 {rec.selector_signed}),'
              f' +0x1E 0x{rec.handler_parameter_1e:04X}')
    if rec.handler_0b_update is not None:
        detail += f' | handler 0x0B update {rec.handler_0b_update}'
    if rec.sound_route is not None:
        detail += f'\n  audio: {rec.sound_route}'
    return detail


def collision_record_detail(rec) -> str:
    """Preserve the chr/col record's independent ALMT-work namespace."""
    contribution = rec.work_mask_contributions
    return (f'col+0x00 class 0x{rec.class_byte:02X} (gameplay label unknown);'
            f' +0x01 secondary 0x{rec.selector_byte:02X};'
            f' +0x02 u16 0x{rec.word02:04X};'
            f' +0x04 signed power/score {rec.power}'
            f'\n  class: {rec.runtime_class_branch}'
            f'\n  +0x08 bit flags 0x{rec.raw_word08:08X};'
            f' runtime OR masks (+14,+18,+1C):'
            f' {contribution[0]:08X}, {contribution[1]:08X},'
            f' {contribution[2]:08X}'
            f'\n  +0x08 bit23: '
            f'{"add work+0x14 flag 0x100" if rec.special_work_flag_100 else "clear"}'
            f'\n  unclassified +0x0C 0x{rec.raw_word0c:08X};'
            f' +0x10 0x{rec.raw_word10:08X}')


def effect_record_detail(rec) -> str:
    """Original impact effect ALMT and its sound slot/argument (ov06 02153CE8)."""
    sound=rec.original_default_sound_value
    sound_note=('initial sound disabled' if sound==0xFFFF else
                f'initial sound group 0x{sound:04X}' if sound is not None else
                'sound slot outside original initialized range')
    return (f'ALMT effect 0x{rec.animation_id:08X}'
            f'\n  sound slot +0x04: {rec.sound_slot} ({sound_note})'
            f'\n  sound argument +0x06: {rec.sound_argument}'
            f'\n  native: ov06 02153CE8 -> 0206C7FC / conditional 0207342C')


def shot_source_extensions(rec) -> str:
    """Additional decoded source fields, separate from original R08 formatting."""
    detail=f'byte +0x1C: 0x{rec.raw_byte1c:02X} (per-handler semantics unknown)'
    if rec.beam01_repeat_segment is not None:
        detail+=(f'\n  handler01 repeat ALMT +0x10: 0x{rec.beam01_repeat_segment:08X}'
                 f'; conditional initial child +0x14: '
                 f'{rec.beam01_spawn_child:#010x}' if rec.beam01_spawn_child is not None
                 else f'\n  handler01 repeat ALMT +0x10: 0x{rec.beam01_repeat_segment:08X}; '
                      'initial child +0x14 absent')
    if rec.handler05_terminal_animation is not None:
        detail+=f'\n  handler05 terminal ALMT +0x18: 0x{rec.handler05_terminal_animation:08X}'
    if rec.handler_16_nested_shot_index is not None:
        detail += (f'\n  handler0x16 contact-triggered nested shot index +0x1E: '
                   f'{rec.handler_16_nested_shot_index} (same 0x20-byte table; '
                   'ov06 0216F8D8 -> 0216AB58)')
    if 0 <= rec.handler_id < len(SHOT_UPDATE_HANDLERS):
        detail += f'\n  native per-update callback: 0x{SHOT_UPDATE_HANDLERS[rec.handler_id]:08X}'
    proof=native_shot_flags(rec.handler_id,rec.flags)
    if proof:
        detail += '\n  Additional executable-backed flag semantics:'
        for item in proof:
            detail += f'\n    0x{item.mask:08X}: {item.explanation} [{item.source}]'
    return detail


def collision_source_extensions(rec) -> str:
    """Native 02080F14 contact fields, without inventing canonical move names."""
    r0, r1=rec.impact_effect_resolution
    status=(f'ID {rec.status_id} ({("positive" if rec.signed_status_selector>0 else "negative")} lane)'
            if rec.status_id else 'none')
    reaction=(native_reaction_route(rec.selector_byte)
              if 0<=rec.selector_byte<16 else None)
    reaction_detail=(
        f'\n  +0x01 native reaction {rec.selector_byte}: {reaction.interpretation}'
        f'; primary ALMT resource 0x{reaction.primary_resource:02X}, '
        f'alternate 0x{reaction.alternate_resource:02X}; '
        f'callback 0x{reaction.callback_address:08X}'
        if reaction else f'\n  +0x01 reaction index {rec.selector_byte}: outside native 16-state table')
    return (f'collision class precedence code {rec.class_byte} '
            f'(0 separate work-mask branch; 1..7 undergo ordered comparisons in 0207FBD0)'
            + reaction_detail
            + f'\n  +0x02 u8 flash priority: {rec.impact_flash_priority}'
            f'; +0x03 s8 status: {rec.signed_status_selector} ({status})'
            f'\n  +0x04 s32 AI score term: {rec.power}'
            f'; +0x05 s8 contact magnitude: {rec.direct_contact_magnitude}'
            f'; +0x07 s8 contact accumulator: {rec.contact_accumulator_delta}'
            f'\n  +0x01 selector6 state-dependent scaling: {rec.uses_selector6_special_scale}'
            f'\n  +0x0C/+0x0D signed source knockback coefficients: {rec.signed_knockback}'
            f'\n  +0x0E/+0x0F effect selectors: {rec.impact_effect_selectors}'
            f' ({r0.category}; {r1.category})'
            f'\n  +0x10/+0x11 visual mode bytes: {rec.impact_effect_modifier_bytes}'
            f'; +0x12/+0x13: {rec.raw[18]:02X}{rec.raw[19]:02X} (zero in 2837 originals)')
