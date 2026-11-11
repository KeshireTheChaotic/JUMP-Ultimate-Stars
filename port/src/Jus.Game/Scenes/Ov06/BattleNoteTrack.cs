using System.Buffers.Binary;
using Jus.Game.Assets;

namespace Jus.Game.Scenes.Ov06;

/// <summary>One note record of a motion's NoteTrack: {u8 subtype, u8 type, args…} at <see cref="Offset"/> in
/// the motion set file.</summary>
public readonly record struct BattleNote(int Frame, int Offset, byte[] Data)
{
    public int Subtype => Data[Offset];
    public int Type => Data[Offset + 1];
    public sbyte S8(int i) => (sbyte)Data[Offset + i];
    public byte U8(int i) => Data[Offset + i];
    public short S16(int i) => BinaryPrimitives.ReadInt16LittleEndian(Data.AsSpan(Offset + i));
}

/// <summary>
/// BattleNoteTrack.cpp (ov06): the per-motion note events of a battle object.
///
/// Data: the ALMT keyed track whose property is named "NoteTrack" (looked up by name, FUN_0201EB60). A key
/// is {u16 frame, u16 v}; the group at key + v halfwords is {u16 count, u16 offsets[count]}; note i is at
/// key + (v + offsets[i]) halfwords (FUN_02020064 / FUN_02020258).
///
/// Dispatch (update FUN_02155688): the notes passed since the last frame go through the table 0x0217200C
/// by type (byte 1), then that type's sub-table by subtype (byte 0). **Type 1 (0x02172020) is translated here**
/// (movement); the other types (0, 2, 3, 4: effects, sounds, attacks…) are raised through <see cref="Note"/>.
/// The held velocity (+0x9C/+0x9E, frames +0xA0) is written into the move object's input velocity once per
/// new motion frame while it counts down.
/// </summary>
public sealed class BattleNoteTrack
{
    /// <summary>All notes of a motion, by key frame.</summary>
    public static List<BattleNote> Read(AlmtMotionSet set, int motionId)
    {
        var list = new List<BattleNote>();
        int prop = set.PropertyIndex("NoteTrack");
        if (prop < 0) return list;
        var d = set.Data;
        foreach (var (_, t) in set.MotionTracks(motionId))
        {
            if (!t.Keyed || t.Property != prop) continue;
            for (int p = t.Offset; ; p += 4)
            {
                int frame = BinaryPrimitives.ReadUInt16LittleEndian(d.AsSpan(p));
                if (frame == 0xFFFF) break;
                int v = BinaryPrimitives.ReadUInt16LittleEndian(d.AsSpan(p + 2));
                int g = p + v * 2;
                int count = BinaryPrimitives.ReadUInt16LittleEndian(d.AsSpan(g));
                for (int i = 0; i < count; i++)
                {
                    int rel = BinaryPrimitives.ReadUInt16LittleEndian(d.AsSpan(g + 2 + 2 * i));
                    list.Add(new BattleNote(frame, p + 2 * (v + rel), d));
                }
            }
        }
        return list;
    }

    /// <summary>
    /// The body box of a motion at a frame from its "CollisionRect0" track (target 0): {s16 left, top, right,
    /// bottom} in px, converted to the {x, y, half-width, half-height} box the stage contact uses. The
    /// conversion is inferred from the data shape (e.g. {−12, −54, 10, 0} = a 22×54 px body with its feet at 0);
    /// the property setter is not read yet. Null when the motion has no such track.
    /// </summary>
    public static BattleBox? BodyBox(AlmtMotionSet set, int motionId, int frame)
    {
        int prop = set.PropertyIndex("CollisionRect0");
        if (prop < 0) return null;
        var d = set.Data;
        foreach (var (target, t) in set.MotionTracks(motionId))
        {
            if (target != 0 || t.Property != prop) continue;
            int at = t.Offset;
            if (t.Keyed)
            {
                // keys {u16 frame, 4 × s16}; the last key at or before the frame (step)
                int best = -1;
                for (int p = t.Offset; ; p += 10)
                {
                    int f = BinaryPrimitives.ReadUInt16LittleEndian(d.AsSpan(p));
                    if (f == 0xFFFF || f > frame) break;
                    best = p + 2;
                }
                if (best < 0) return null;
                at = best;
            }
            short l = BinaryPrimitives.ReadInt16LittleEndian(d.AsSpan(at)), top = BinaryPrimitives.ReadInt16LittleEndian(d.AsSpan(at + 2));
            short r = BinaryPrimitives.ReadInt16LittleEndian(d.AsSpan(at + 4)), b = BinaryPrimitives.ReadInt16LittleEndian(d.AsSpan(at + 6));
            return new BattleBox((short)((l + r) / 2), (short)((top + b) / 2), (short)((r - l) / 2), (short)((b - top) / 2));
        }
        return null;
    }

    private readonly AlmtMotionSet _set;
    private List<BattleNote> _notes = [];
    private int _lastFrame = -1;
    private short _holdVx, _holdVy;      // +0x9C, +0x9E
    private byte _holdFrames;            // +0xA0

    public BattleNoteTrack(AlmtMotionSet set) => _set = set;

    public int MotionId { get; private set; } = -1;
    /// <summary>+0x90 flags set by the notes (0x200000 gravity-off note seen, 0x1000000 sub 2, 0x800000 sub 6,
    /// 0x10000 / 0x40000 contact watches).</summary>
    public uint Flags { get; set; }
    /// <summary>The notes of types 0, 2, 3 and 4 (not translated here: effects, sounds, attacks).</summary>
    public event Action<BattleNote>? Note;

    /// <summary>FUN_021554E0 on a motion change: load its notes and restart.</summary>
    public void SetMotion(int motionId)
    {
        MotionId = motionId;
        _notes = Read(_set, motionId);
        _lastFrame = -1;
    }

    /// <summary>
    /// One update at motion frame <paramref name="frame"/>: dispatch the notes whose frame was reached since the
    /// last call, then apply the held velocity when the frame changed. <paramref name="facingLeft"/> mirrors the
    /// x velocities (FUN_02155C9C).
    /// </summary>
    public void Update(int frame, BattleMoveObject move, bool facingLeft)
    {
        if (frame == _lastFrame) return;
        foreach (var n in _notes)
            if (n.Frame > _lastFrame && n.Frame <= frame) Dispatch(n, move, facingLeft);
        _lastFrame = frame;
        if (_holdFrames != 0)
        {
            _holdFrames--;
            if (_holdVx != 0) move.InVx = _holdVx;
            if (_holdVy != 0) move.InVy = _holdVy;
        }
    }

    private void Dispatch(BattleNote n, BattleMoveObject move, bool facingLeft)
    {
        if (n.Type != 1) { Note?.Invoke(n); return; }
        switch (n.Subtype)
        {
            case 0:                                              // 0x021565C0
                _holdFrames = 0; _holdVx = _holdVy = 0;
                move.Vx = move.Vy = 0;
                move.Flags |= 0x1000;
                break;
            case 1:                                              // 0x021565F4
                if (n.S16(2) != 0) Flags |= 0x200000;
                if (n.S16(2) == 0) move.Flags &= ~BattleMoveObject.FlagNoGravity;
                else move.Flags |= BattleMoveObject.FlagNoGravity;
                break;
            case 2:                                              // 0x02156630 (+ FUN_02155604, not ported)
                if (n.S16(2) != 0) Flags |= 0x1000000;
                break;
            case 3:                                              // 0x0215669C
                if (n.S8(2) != 0)
                {
                    short vx = (short)((n.S8(2) << 0x15) >> 0x10);
                    move.InVx = facingLeft ? (short)-vx : vx;
                }
                if (n.S8(3) != 0) move.InVy = (short)(n.S8(3) * -0x7E);
                break;
            case 4:                                              // 0x02156710
                _holdFrames = n.U8(4);
                if (n.S8(2) != 0)
                {
                    _holdVx = (short)(n.S8(2) << 5);
                    if (facingLeft) _holdVx = (short)-_holdVx;
                }
                if (n.S8(3) != 0) _holdVy = (short)(n.S8(3) * -0x7E);
                break;
            case 5:                                              // 0x0215676C
                Flags = n.S16(2) == 0 ? Flags | 0x10000 : Flags & ~0x10000u;
                Flags &= ~0x20000u;
                break;
            case 6:                                              // 0x02156664 (+ FUN_0207D11C, not ported)
                if (n.S16(2) != 0) Flags |= 0x800000;
                break;
            case 7:                                              // 0x02156794
                Flags = n.S16(2) == 0 ? Flags | 0x40000 : Flags & ~0x40000u;
                Flags &= ~0x80000u;
                break;
        }
    }
}
