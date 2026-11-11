using Jus.Game.Engine;

namespace Jus.Game.Scenes.Ov07;

/// <summary>
/// A widget motion recorded at run time, as CommuMenuTop builds them: FUN_02023940 starts a recording,
/// FUN_02023C60(widget, property, frame) stores the property's current value as a key at that frame
/// ("Position" and "Disp", handles from FUN_0214F2A4), FUN_02023C80 gives the "Position" track an
/// interpolator (0x494C 'LI'), FUN_02023C70(widget, id) ends it as motion <c>id</c>, and
/// FUN_02023894(widget, id, 0) + vfunc 0x6C plays it. Without an interpolator a track steps (holds the
/// last key); "Disp" (visibility, vfunc 0xD8) always steps.
/// The motion is playing until its last key frame (FUN_0214F1BC asks the player, vfunc 0x68; inferred).
/// </summary>
public sealed class RecordedMotion
{
    private readonly (int Frame, int X, int Y)[] _pos;
    private readonly (int Frame, bool On)[] _disp;
    private readonly bool _linear;

    public int Id { get; }
    public int Length { get; }

    public RecordedMotion(int id, (int Frame, int X, int Y)[] pos, (int Frame, bool On)[] disp, bool linear)
    {
        Id = id;
        _pos = pos;
        _disp = disp;
        _linear = linear;
        Length = Math.Max(pos.Length == 0 ? 0 : pos.Max(k => k.Frame), disp.Length == 0 ? 0 : disp.Max(k => k.Frame));
    }

    public void Apply(Widget w, int frame)
    {
        if (_pos.Length > 0)
        {
            int i = 0;
            while (i + 1 < _pos.Length && _pos[i + 1].Frame <= frame) i++;
            var a = _pos[i];
            if (_linear && i + 1 < _pos.Length && frame > a.Frame)
            {
                var b = _pos[i + 1];
                w.X = LinearInterpolator.Vector(LinearInterpolator.Linear, a.X, b.X, frame, a.Frame, b.Frame);
                w.Y = LinearInterpolator.Vector(LinearInterpolator.Linear, a.Y, b.Y, frame, a.Frame, b.Frame);
            }
            else
            {
                w.X = a.X;
                w.Y = a.Y;
            }
        }
        if (_disp.Length > 0)
        {
            int i = 0;
            while (i + 1 < _disp.Length && _disp[i + 1].Frame <= frame) i++;
            w.Visible = _disp[i].On;
        }
    }
}

/// <summary>The motions recorded on one widget and the one playing.</summary>
public sealed class RecordedMotionPlayer(Widget widget)
{
    private readonly Dictionary<int, RecordedMotion> _motions = [];
    private RecordedMotion? _current;

    public Widget Widget => widget;
    public int Frame { get; private set; }
    public int? Current => _current?.Id;
    public bool Playing => _current is not null && Frame < _current.Length;

    public void Add(RecordedMotion m) => _motions[m.Id] = m;

    /// <summary>FUN_02023894(widget, id, 0) + play: start at frame 0 and apply it.</summary>
    public void Play(int id)
    {
        _current = _motions[id];
        Frame = 0;
        _current.Apply(widget, 0);
    }

    public void Step()
    {
        if (!Playing) return;
        Frame++;
        _current!.Apply(widget, Frame);
    }
}
