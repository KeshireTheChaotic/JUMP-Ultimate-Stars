"""Read-only NoteTrack shot invocations and proven source sprite constructor refs.

Battle NoteTrack 0x0300 subaction 2 passes its shot index to original overlay6
FUN_02157A44 -> FUN_02158470 -> FUN_0216A944 -> FUN_0216ACC8, which dispatches
through the original shot handler table 0x02172864. Handler 0x01 uses original
FUN_0216B514 -> FUN_0216C5F0, constructing visual objects with record+0x14
(if nonzero) then +0x0C. The +0x10 reference is NOT created by the constructor; the native
per-frame callback FUN_0216BA2C creates repeat segments from that reference
when spacing counters cross their thresholds, before collision/termination.

The Editor can display these EXACT original source ALMT sprite frames at a documented
launch-anchor assumption. It cannot reconstruct live projectile travel, repeat
geometry, hit contact, dynamic graphics transforms, or marker-conditional spawns
from an isolated static ALMT timeline. ALMT animation IDs resolve through the scoped effect catalog to their real
TextureID and BoundsIndex tracks. No art or frames are synthesized.
"""
from __future__ import annotations

from dataclasses import dataclass

from jus_formats import almt, chrbin, notetrack


@dataclass(frozen=True)
class ShotInvocation:
    move_id: int
    tick: int
    node: str
    record_index: int
    launch_x: int
    launch_y: int
    extra_args: tuple[int, ...]
    record: chrbin.ShotRecord

    @property
    def handler(self) -> int:
        return self.record.handler_id

    @property
    def nominal_end(self) -> int:
        return self.tick + self.record.effective_lifetime

    @property
    def references(self) -> tuple[int, int, int]:
        return (self.record.reference0, self.record.reference1,
                self.record.optional_reference)

    @property
    def directly_constructed_animations(self) -> tuple[int, ...]:
        """Only animation resources constructed in a traced handler, not guesses.

        Handler 1: FUN_0216B514 calls FUN_0216C5F0 once for +0x14 (if
        nonzero) and once for +0x0C, in that order. Other handler behaviors
        may use distinct constructors/particle render paths; they are not
        assigned invented animation resources without individual proof.
        """
        # Hiei's handler05 FUN_0216B910 calls the exact shared
        # FUN_0216B514 constructor. It creates the original +0x0C head
        # at birth; the live D-pad/history trail remains unavailable.
        if self.handler not in (1, 5):
            return ()
        return tuple(ref for ref in (self.record.optional_reference,
                                     self.record.reference0) if ref)

    @property
    def handler1_source_roles(self) -> tuple[tuple[str, int, str], ...]:
        '''Exact ALMT field/call phase for original handler 0x01.

        Text names are mechanical, NOT verified original gameplay move names.
        +0x0C is constructed on launch even with no hit; +0x10 is used by
        original per-frame 0216BA2C, not the 0216B514 constructor.
        '''
        if self.handler != 1:
            return ()
        roles = []
        if self.record.optional_reference:
            roles.append(('+0x14', self.record.optional_reference,
                          'initial child; stationary/anchored via work flag4'))
        if self.record.reference0:
            roles.append(('+0x0C', self.record.reference0,
                          'initial moving child; NOT contact-gated construction'))
        if self.record.reference1:
            roles.append(('+0x10', self.record.reference1,
                          'repeat segment; spawned by per-frame 0216BA2C as spacing threshold is crossed'))
        return tuple(roles)

    @property
    def handler05_source_roles(self) -> tuple[tuple[str, int, str], ...]:
        if self.handler != 5:
            return ()
        return tuple(row for row in (
            ('+0x0C',self.record.reference0,'initial head via 0216B910/0216B514'),
            ('+0x10',self.record.reference1,'history-following trail via 0216BE0C'),
            ('+0x18',self.record.handler05_terminal_animation or 0,
             'final trail segment #12 via 0216BE0C'),
        ) if row[1])

    @property
    def handler05_timer_exemption_is_code_proven(self) -> bool:
        '''FUN_0216B910 sets work+0x26 bit1; scheduler 0216AF04 skips timer.'''
        return self.handler == 5

    @property
    def handler01_timer_exemption_is_code_proven(self) -> bool:
        '''Only asserts the verified handler01 timer exception.

        Wrapper 0216B4F4 sets work+0x26 bit2; scheduler 0216AF04
        skips countdown when bit2 is set. No rule is asserted here for
        other handlers and their own constructor work flags.
        '''
        return self.handler == 1

    def nominally_active(self, tick: int) -> bool:
        # STATIC PREVIEW cutoff, not a simulation of native shot retirement.
        return self.tick <= tick <= self.nominal_end


def source_shots(move: almt.Move, node_names: list[str],
                 shot_table: chrbin.RecordTable) -> tuple[ShotInvocation, ...]:
    """Record exact shot-action source events; no runtime branch execution.

    Command values in original NoteTrack 0x0300:
    (sub_action, table_index, x, y, more_params...). Data uses no hidden
    deduplication: two events sharing an index remain two invocations.
    """
    if shot_table.kind != 'shot' or shot_table.stride != 32:
        raise ValueError('Expected original 0x20-byte chr/shot table')
    found: list[ShotInvocation] = []
    for ni, node in enumerate(move.nodes):
        if node is None:
            continue
        tr = node.track('NoteTrack')
        if tr is None or not tr.opaque:
            continue
        parsed = notetrack.parse(tr.encoded())
        for key in parsed.keys:
            for command in key.commands:
                if command.opcode != 0x0300:
                    continue
                vals = command.values()
                if vals is None or vals[0] != 2:
                    continue
                if len(vals) < 4:
                    raise ValueError(f'shot action in 0x{move.id:08X}: missing coordinate fields')
                index = vals[1]
                if not 0 <= index < shot_table.count:
                    raise ValueError(f'shot action in 0x{move.id:08X} tick {key.tick}: '
                                     f'index {index} outside {shot_table.count} records')
                name = node_names[ni] if ni < len(node_names) else f'N{ni}'
                found.append(ShotInvocation(move.id, key.tick, name, index, vals[2], vals[3],
                                            tuple(vals[4:]), shot_table.shot_record(index)))
    return tuple(sorted(found, key=lambda row: row.tick))
