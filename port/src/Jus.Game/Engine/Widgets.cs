using Jus.Game.Assets;

namespace Jus.Game.Engine;

/// <summary>
/// Native widget layer standing in for the AL engine's ALNode / ALWidgetBaseImp tree (ov12). It is a
/// native replacement, not a copy of the engine's object layout: it keeps the observable behaviour the
/// translated scenes rely on.
///
/// - Positions, scale, opacity and draw priority are 20.12 fixed point, as the engine's properties are
///   ("Position", "Scale", "Alpha", "DrawPrio").
/// - A child's world position is its parent's world position plus its own position times the parent's
///   world scale; scale multiplies down the tree; a hidden parent hides its children (vfunc 0xD8).
///   Opacity is not inherited (inferred: the translated scenes only set it on leaves).
/// - "DrawPrio" (jus_Prop_DrawPrio, vtable 0x020989A8) ranges 1.0 (vfunc_02 = 0x1000) … 254.0 (vfunc_03 =
///   0xFE000) and is stored as a float depth (vfunc_09: value · 4096.0f). A higher value is further back:
///   TopMenu's galaxy objects (0xE0) sit behind the menu sprites. Equal priorities draw in creation order,
///   later in front (inferred).
/// - <see cref="Layer"/> is the 2D plane the widget belongs to, so scenes can interleave hardware BG maps
///   (drawn by <see cref="TileBackground"/>) with widgets: <see cref="Stage.Draw(IScreen, int)"/> draws
///   one plane.
/// </summary>
public class Widget
{
    private static long _sequence;
    private readonly List<Widget> _children = [];
    private readonly List<Tween> _controllers = [];

    /// <summary>Creation order, the tie-break for equal draw priority.</summary>
    public long Sequence { get; } = Interlocked.Increment(ref _sequence);
    public Widget? Parent { get; private set; }
    public IReadOnlyList<Widget> Children => _children;
    public IReadOnlyList<Tween> Controllers => _controllers;

    /// <summary>Local position, 20.12.</summary>
    public int X { get; set; }
    public int Y { get; set; }
    /// <summary>Uniform scale, 20.12 (FUN_020235dc).</summary>
    public int Scale { get; set; } = 0x1000;
    /// <summary>Opacity, 20.12 (widget vfunc 0xF8).</summary>
    public int Alpha { get; set; } = 0x1000;
    public int DrawPrio { get; set; } = 0x1000;
    public bool Visible { get; set; } = true;
    public int Layer { get; set; }
    /// <summary>Touch box relative to the widget's world position, in pixels, inclusive (ALCollision box).</summary>
    public (int X0, int Y0, int X1, int Y1)? TouchBox { get; set; }
    /// <summary>Per-frame callback (the widget's update function pointer, e.g. TopMenu's galaxy parent 0x02155890).</summary>
    public Action<Widget>? OnUpdate { get; set; }
    /// <summary>Set by <see cref="Destroy"/>; the stage drops the widget at the end of the frame.</summary>
    public bool Destroyed { get; private set; }

    /// <summary>Pixel position helpers (20.12 → integer pixels, floor).</summary>
    public void SetPixelPosition(int x, int y) { X = x << 12; Y = y << 12; }

    public T Add<T>(T child) where T : Widget
    {
        child.Parent?._children.Remove(child);
        child.Parent = this;
        _children.Add(child);
        return child;
    }

    public void Destroy()
    {
        Destroyed = true;
        foreach (var c in _children) c.Destroy();
    }

    public Tween Attach(Tween tween)
    {
        _controllers.Add(tween);
        return tween;
    }

    public void Detach(Tween tween) => _controllers.Remove(tween);

    public int WorldScale => Parent is null ? Scale : LinearInterpolator.FxMul(Parent.WorldScale, Scale);

    public (int X, int Y) WorldPosition
    {
        get
        {
            if (Parent is null) return (X, Y);
            var (px, py) = Parent.WorldPosition;
            int s = Parent.WorldScale;
            return (px + LinearInterpolator.FxMul(X, s), py + LinearInterpolator.FxMul(Y, s));
        }
    }

    public bool WorldVisible => Visible && !Destroyed && (Parent is null || Parent.WorldVisible);

    /// <summary>One frame: update callback, controllers (in attach order), then the widget's own step.</summary>
    internal void Tick()
    {
        if (Destroyed) return;
        OnUpdate?.Invoke(this);
        for (int i = 0; i < _controllers.Count; i++)
        {
            var c = _controllers[i];
            c.Step();
            if (c.Destroyed) { _controllers.RemoveAt(i); i--; }
        }
        Step();
        for (int i = 0; i < _children.Count; i++) _children[i].Tick();
        _children.RemoveAll(c => c.Destroyed);
    }

    protected virtual void Step() { }

    /// <summary>Draw this widget alone (no children); the stage orders the calls.</summary>
    public virtual void Draw(IScreen screen) { }

    public bool Contains(int px, int py)
    {
        if (TouchBox is not { } b) return false;
        var (x, y) = WorldPosition;
        int dx = px - (x >> 12), dy = py - (y >> 12);
        return dx >= b.X0 && dx <= b.X1 && dy >= b.Y0 && dy <= b.Y1;
    }
}

/// <summary>A sprite widget ('SP01'): a <see cref="SpriteActor"/> placed by the widget tree.</summary>
public sealed class SpriteWidget(DstxBank bank, AlmtMotionSet motions, int motionId) : Widget
{
    public SpriteActor Actor { get; } = new(bank, motions, motionId);

    public void SetMotion(int id) => Actor.SetMotion(id);
    public int MotionId => Actor.MotionId;
    public int Cell => Actor.Cell;
    public bool AtEnd => Actor.AtEnd;

    protected override void Step() => Actor.Update();

    public override void Draw(IScreen screen)
    {
        var (x, y) = WorldPosition;
        Actor.X = x >> 12;
        Actor.Y = y >> 12;
        Actor.Scale = WorldScale / 4096.0;
        Actor.Alpha = Alpha / 4096.0;
        Actor.Visible = true;
        Actor.Draw(screen);
    }
}

/// <summary>A widget drawn by a callback (scene-specific drawing that still takes part in the ordering).</summary>
public sealed class CustomWidget(Action<CustomWidget, IScreen> draw) : Widget
{
    public override void Draw(IScreen screen) => draw(this, screen);
}

/// <summary>
/// An interpolation controller with the semantics of jus_TagIPCT (ctor 0x02013264, init 0x02013AEC,
/// update vfunc_22 0x0201383C); <c>ALControllerImp::Create</c> builds one per property binding.
///
/// Fields: duration D (+0x38; the constructor halves it, rounding up, unless flag 2), time (+0x3C,
/// 20.12, here whole frames), flags (+0x40), direction (+0x44, forward when set).
/// - Init: flag 4 starts at the end going backwards, else at 0 going forwards.
/// - Forward step: time + 1; on reaching D: if the controller does not repeat (vfunc 0xA8 = 0) and
///   (flag 2 or flag 4) it finishes at D; otherwise flag 2 wraps (time − D), else it turns round at D.
/// - Backward step: time − 1; on reaching 0: if not repeating and (flag 2 or not flag 4) it finishes at
///   0; otherwise flag 2 wraps (time + D), else it turns round at 0.
/// - Finishing applies the value, stops the controller (vfunc 0x70) and, with flag 8, destroys it.
/// - The value is applied after every step: the curve between <c>from</c> and <c>to</c> at time / D.
/// So without flag 2 a non-repeating controller goes there and back once.
/// </summary>
public sealed class Tween
{
    public const int FlagWrap = 2, FlagReverse = 4, FlagDestroy = 8;

    private readonly int[] _from, _to, _value;
    private readonly Action<int[]> _apply;
    private bool _forward;

    public int Curve { get; }
    public int Duration { get; }
    public int Flags { get; }
    /// <summary>vfunc 0xA8 ≠ 0: never finishes.</summary>
    public bool Repeat { get; }
    public int Time { get; private set; }
    public bool Running { get; private set; } = true;
    public bool Destroyed { get; private set; }
    /// <summary>The integer (1/2-byte) evaluator instead of the vector one (FX_Mul) — for small integer properties.</summary>
    public bool Integer { get; init; }

    public Tween(int curve, int[] from, int[] to, int frames, int flags, bool repeat, Action<int[]> apply)
    {
        Curve = curve;
        _from = from;
        _to = to;
        _value = new int[from.Length];
        Flags = flags;
        Repeat = repeat;
        _apply = apply;
        Duration = (flags & FlagWrap) != 0 ? frames : (frames + 1) / 2;
        bool reverse = (flags & FlagReverse) != 0;
        Time = reverse ? Duration : 0;
        _forward = !reverse;
    }

    /// <summary>A "Scale" controller on a widget (uniform: one component).</summary>
    public static Tween Scale(Widget w, int to, int frames, int flags, bool repeat, int curve = LinearInterpolator.Linear, int? from = null)
        => new(curve, [from ?? w.Scale], [to], frames, flags, repeat, v => w.Scale = v[0]);

    public static Tween Position(Widget w, int toX, int toY, int frames, int flags, bool repeat, int curve = LinearInterpolator.Linear)
        => new(curve, [w.X, w.Y], [toX, toY], frames, flags, repeat, v => { w.X = v[0]; w.Y = v[1]; });

    public static Tween Alpha(Widget w, int to, int frames, int flags, bool repeat, int curve = LinearInterpolator.Linear)
        => new(curve, [w.Alpha], [to], frames, flags, repeat, v => w.Alpha = v[0]);

    public IReadOnlyList<int> Value => _value;

    public void Step()
    {
        if (!Running || Destroyed) return;
        if (_forward)
        {
            Time++;
            if (Time >= Duration)
            {
                if (!Repeat && ((Flags & FlagWrap) != 0 || (Flags & FlagReverse) != 0)) { Time = Duration; Finish(); return; }
                if ((Flags & FlagWrap) == 0) { _forward = false; Time = Duration; }
                else Time -= Duration;
            }
        }
        else
        {
            Time--;
            if (Time < 1)
            {
                if (!Repeat && ((Flags & FlagWrap) != 0 || (Flags & FlagReverse) == 0)) { Time = 0; Finish(); return; }
                if ((Flags & FlagWrap) == 0) { _forward = true; Time = -Time; }
                else Time += Duration;
            }
        }
        Apply();
    }

    /// <summary>vfunc 0x70: stop where it is (the value stays).</summary>
    public void Stop() => Running = false;

    private void Finish()
    {
        Apply();
        Running = false;
        if ((Flags & FlagDestroy) != 0) Destroyed = true;
    }

    private void Apply()
    {
        for (int i = 0; i < _value.Length; i++)
            _value[i] = Duration == 0 ? _to[i]
                : Integer ? LinearInterpolator.Integer(_from[i], _to[i], Time, 0, Duration)
                : LinearInterpolator.Vector(Curve, _from[i], _to[i], Time, 0, Duration);
        _apply(_value);
    }
}

/// <summary>A display's widget tree: one root per screen, updated once per frame, drawn back to front.</summary>
public sealed class Stage
{
    public Widget Root { get; } = new();

    public T Add<T>(T widget) where T : Widget => Root.Add(widget);

    public void Update() => Root.Tick();

    /// <summary>All visible widgets of one plane in drawing order: higher DrawPrio first (further back),
    /// equal priority by creation order.</summary>
    public List<Widget> DrawOrder(int layer)
    {
        var list = new List<Widget>();
        void Walk(Widget w)
        {
            if (!w.Visible || w.Destroyed) return;
            if (w != Root && w.Layer == layer) list.Add(w);
            foreach (var c in w.Children) Walk(c);
        }
        Walk(Root);
        return [.. list.OrderByDescending(w => w.DrawPrio).ThenBy(w => w.Sequence)];
    }

    public void Draw(IScreen screen, int layer = 0)
    {
        foreach (var w in DrawOrder(layer)) w.Draw(screen);
    }

    /// <summary>The front-most visible widget whose touch box contains the point.</summary>
    public Widget? HitTest(int x, int y, int? layer = null)
    {
        Widget? hit = null;
        void Walk(Widget w)
        {
            if (!w.Visible || w.Destroyed) return;
            if ((layer is null || w.Layer == layer) && w.Contains(x, y)
                && (hit is null || w.DrawPrio < hit.DrawPrio || (w.DrawPrio == hit.DrawPrio && w.Sequence > hit.Sequence)))
                hit = w;
            foreach (var c in w.Children) Walk(c);
        }
        Walk(Root);
        return hit;
    }
}
