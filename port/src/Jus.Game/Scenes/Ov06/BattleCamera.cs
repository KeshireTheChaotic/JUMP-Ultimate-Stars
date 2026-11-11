namespace Jus.Game.Scenes.Ov06;

/// <summary>
/// BattleCamera.cpp (overlay 6). Battle_CameraCreate 0x02151BE8 allocates a 0x34-byte work (global
/// 0x02172968) with a task (priority 0x99000, update FUN_02151E2C) and two display nodes (FUN_02020D90),
/// both at (0, 0) with scale 1.0 (FUN_02151DA8) and shown (vfunc 0xD8):
/// <list type="bullet">
/// <item>node A (+4): the parent of the stage layers, effects and characters (CommonEffect_Init, the BG
/// layers' parent in BattleMapInit, the item/shot objects through FUN_021544C8). Its position is
/// (0x80 − cx, 0x78 − cy) px, so a world point p appears on screen at p + node A.</item>
/// <item>node B (+8): (−cx, −cy) px; read back by FUN_021686D8 (marker).</item>
/// </list>
/// Work: +0xC..+0x18 one target per player (a pointer to the move object's position +0xC/+0x10, set in
/// Battle_Add with FUN_02151FF4), +0x1C current target, +0x20/+0x24 camera position (24.8 px), +0x28 quake
/// length, +0x2A quake frames left, +0x2C/+0x2D quake amplitude x/y (px), +0x2E flags (bit 0 = hold: the
/// position is not updated; set and cleared by character states 0x0215C360 / 0x0215C488 / 0x0215C5D4 /
/// 0x0215C664 / 0x0215C824 / 0x0215F744 when they belong to the followed player), +0x30 followed player.
///
/// There is no stage-bounds clamp in the camera: it follows the target position directly; the target
/// itself is kept inside the world by the collision pass (the generic world clamp 0x0207D9AC). The
/// stage's <c>.cam</c> files are not read by the battle (the only ".cam" string is in ov12, the AL engine).
/// </summary>
public sealed class BattleCamera
{
    private readonly Func<(int X, int Y)>?[] _targets = new Func<(int X, int Y)>?[4];
    private Func<(int X, int Y)>? _target;   // +0x1C
    private readonly Mt19937 _rng;

    /// <summary>+0x20/+0x24: camera position, 24.8 fixed-point px.</summary>
    public int X { get; private set; }
    public int Y { get; private set; }
    /// <summary>Node A position, 20.12 fixed-point px.</summary>
    public int NodeAX { get; private set; }
    public int NodeAY { get; private set; }
    /// <summary>Node B position, 20.12 fixed-point px.</summary>
    public int NodeBX { get; private set; }
    public int NodeBY { get; private set; }
    /// <summary>+0x28 quake length (set, never read by the update).</summary>
    public short QuakeLength { get; private set; }
    /// <summary>+0x2A quake frames left.</summary>
    public short QuakeLeft { get; private set; }
    /// <summary>+0x2C / +0x2D quake amplitudes (px).</summary>
    public byte QuakeX { get; private set; }
    public byte QuakeY { get; private set; }
    /// <summary>+0x2E.</summary>
    public byte Flags { get; private set; }
    /// <summary>+0x30: the followed player.</summary>
    public int Player { get; private set; }

    /// <param name="rng">The game's global generator (0x020A0DA8 + 4).</param>
    public BattleCamera(Mt19937 rng) => _rng = rng;

    /// <summary>FUN_02151FF4(player, &amp;pos): register a player's position (Battle_Add passes the move
    /// object's +0xC, i.e. its X/Y in 24.8 px).</summary>
    public void SetTarget(int player, Func<(int X, int Y)> position) => _targets[player] = position;

    /// <summary>FUN_0215200C(player): forget a player's target (a player that is out).</summary>
    public void ClearTarget(int player) => _targets[player] = null;

    /// <summary>FUN_02152078(player): follow a player and jump straight to it. Returns 1 while held
    /// (+0x2E bit 0, nothing changes), 0 when the player has no target.</summary>
    public bool Follow(int player)
    {
        if ((Flags & 1) != 0) return true;
        var t = _targets[player];
        if (t is null) return false;
        _target = t;
        Player = player;
        (X, Y) = t();
        return true;
    }

    /// <summary>FUN_02152028: follow the next player that has a target ((+0x30 + 1) mod 4, at most 4 tries;
    /// a held camera stops at the first try).</summary>
    public void FollowNext()
    {
        int p = Player;
        for (int i = 0; i < 4; i++)
        {
            p = (p + 1) & 3;
            if (Follow(p)) return;
        }
    }

    /// <summary>FUN_021520DC(frames, ax, ay): start a quake. Callers: main 0x0207E664 (8, 8, 0),
    /// ov06 0x0215B910 / 0x0215BAB8 (8, 4, 8).</summary>
    public void Quake(short frames, byte ax, byte ay)
    {
        QuakeLength = frames;
        QuakeLeft = frames;
        QuakeX = ax;
        QuakeY = ay;
    }

    /// <summary>Set or clear the hold bit (+0x2E bit 0). The character states do this only when the
    /// character is the followed player (chara +0x1E0 == +0x30); pass that player.</summary>
    public void Hold(int player, bool on)
    {
        if (player != Player) return;
        Flags = on ? (byte)(Flags | 1) : (byte)(Flags & 0xFE);
    }

    /// <summary>FUN_02151E2C, once per frame (camera task).</summary>
    public void Update()
    {
        if ((Flags & 1) == 0 && _target is not null)
        {
            var (tx, ty) = _target();
            int dx = tx - X;
            X += dx >> 2;
            int dy = ty - Y;
            Y += dy >> 2;
            if (dx > 0 && X > tx) X = tx;           // never overshoot
            if (dx < 0 && X < tx) X = tx;
            if (dy > 0 && Y > ty) Y = ty;
            if (dy < 0 && Y < ty) Y = ty;
            int cy = Y >> 8, cx = X >> 8;
            NodeBX = -cx * 0x1000;
            NodeBY = -cy * 0x1000;
            NodeAX = (0x80 - cx) * 0x1000;
            NodeAY = (0x78 - cy) * 0x1000;
        }
        if (QuakeLeft != 0)
        {
            QuakeLeft--;
            int n = QuakeLeft;
            int baseX = NodeAX, baseY = NodeAY;       // node A's current position (r7/r8)
            // amplitude · n / n with the runtime divide: the amplitude, or 0 on the last frame (n = 0)
            int ax = BattleDiv.Div((short)QuakeX * n, n);
            if (ax > 0x20) ax = 0x20;
            int ay = BattleDiv.Div(QuakeY * n, n);
            if (ay > 0x20) ay = 0x20;
            int ox = (int)BattleDiv.UMod(_rng.Next(), (uint)ax);
            int oy = (int)BattleDiv.UMod(_rng.Next(), (uint)ay);
            // added to node A as it is: while the camera is held the offsets accumulate
            NodeAX = baseX + (ox << 12);
            NodeAY = baseY + (oy << 12);
        }
    }

    /// <summary>Screen position (px) of a point given in node A's space (world px).</summary>
    public (int X, int Y) ToScreen(int wx, int wy) => (wx + (NodeAX >> 12), wy + (NodeAY >> 12));
}
