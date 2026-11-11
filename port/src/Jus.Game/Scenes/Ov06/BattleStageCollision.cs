using System.Buffers.Binary;
using Jus.Game.Assets;

namespace Jus.Game.Scenes.Ov06;

/// <summary>A body box as the collision code reads it: {s16 x, s16 y, s16 half-width, s16 half-height} in px,
/// relative to the object's position (the y extent is y ± half-height; the x extent the collision uses is
/// a fixed ±4 px).</summary>
public readonly record struct BattleBox(short X, short Y, short HalfWidth, short HalfHeight);

/// <summary>
/// The stage collision grid and its queries (BattleMap / BattleCol, battle callbacks set by FUN_02161BBC).
///
/// Grid: the stage .bin's map info (u32 at +4) holds +4 the row stride (0x40) and, from +0x34, one 8-byte
/// cell per 16×16 px: {s16 record, u8 kind, u8 flag, u16 left px, u16 top px, u16}. Cell index =
/// (y &gt;&gt; 12)·0x40 + (x &gt;&gt; 12) (FUN_02161BAC, positions in 1/256 px). A cell collides only when its
/// flag is 0. Records (u32 at +8, 0x18 bytes) are the floor records the cells point at (+0x15 bit 8 = soft
/// friction).
/// </summary>
public sealed class BattleStageCollision
{
    private readonly byte[] _bin;
    private readonly int _grid, _cells, _records, _stride;
    private readonly JusTables.BattleCollisionTables _t;

    public BattleStageCollision(byte[] stageBin, JusTables.BattleCollisionTables tables)
    {
        _bin = stageBin;
        _t = tables;
        int info = BinaryPrimitives.ReadInt32LittleEndian(stageBin.AsSpan(4));
        _stride = BinaryPrimitives.ReadInt16LittleEndian(stageBin.AsSpan(info + 4));
        _grid = info + 0x34;
        _records = BinaryPrimitives.ReadInt32LittleEndian(stageBin.AsSpan(8));
        _cells = (Math.Min(_records, stageBin.Length) - _grid) / 8;
    }

    public int CellCount => _cells;

    /// <summary>FUN_02161BAC.</summary>
    public static int CellIndex(int x, int y) => (y >> 12) * 0x40 + (x >> 12);

    private int Cell(int i) => _grid + i * 8;
    private bool InGrid(int i) => i >= 0 && i < _cells;
    public int Record(int i) => InGrid(i) ? BinaryPrimitives.ReadInt16LittleEndian(_bin.AsSpan(Cell(i))) : -1;
    public int Kind(int i) => InGrid(i) ? _bin[Cell(i) + 2] : 0;
    public int Flag(int i) => InGrid(i) ? _bin[Cell(i) + 3] : 1;
    private int Left(int i) => InGrid(i) ? BinaryPrimitives.ReadUInt16LittleEndian(_bin.AsSpan(Cell(i) + 4)) : (i & 0x3F) * 16;
    private int Top(int i) => InGrid(i) ? BinaryPrimitives.ReadUInt16LittleEndian(_bin.AsSpan(Cell(i) + 6)) : (i >> 6) * 16;
    public byte RecordByte(int record, int offset) => _bin[_records + record * 0x18 + offset];

    /// <summary>FUN_0207E050: the kind of the cell at a point.</summary>
    public int KindAt(int x, int y) => Kind(CellIndex(x, y));

    /// <summary>FUN_02162928.</summary>
    private int Row(int y) => (y >> 12) * _stride;

    /// <summary>
    /// FUN_0216220C: sweep a box ({left, top, right, bottom}, 1/256 px) from its previous place (the previous
    /// box, clipped to the move delta) to the current one, cell by cell along three leading corners
    /// (order 0x021714E8 by the move direction). A collidable cell that is not pass-through (top corners, or
    /// all corners with <paramref name="passFlag"/>, pass 0x02171558 kinds) stops the corner: entering it
    /// sideways pushes x back (non-pass-through kinds only), downwards pushes y up (a floor; the cell is
    /// remembered), upwards pushes y down for 0x02171528 kinds; the corner then slides along the other
    /// axis. Kind 7 ends the corner. Pushes move the later corners too. <paramref name="push"/> gets the
    /// pushed edges {left, top, right, bottom}; the hit flags (1 top, 2 right, 4 bottom, 8 left) are masked
    /// per corner (0x02171524). Returns the floor cell of a bottom corner, or −1.
    /// </summary>
    public int Sweep(int[] box, int[] prev, int dx, int dy, int[] push, out uint hits, bool passFlag)
    {
        hits = 0;
        Array.Clear(push);
        int result = -1;
        int L = box[0], T = box[1], R = box[2], B = box[3];
        int pL = L - dx; if (pL <= prev[0]) pL = prev[0];
        int pR = R - dx; if (prev[2] <= pR) pR = prev[2];
        int pT = T - dy; if (pT <= prev[1]) pT = prev[1];
        int pB = B - dy; if (prev[3] <= pB) pB = prev[3];
        int[] c = [L, T, R, T, L, B, R, B];
        int[] p = [pL, pT, pR, pT, pL, pB, pR, pB];
        int oi = (dx < 0 ? 2 : 0) + (dy < 0 ? 1 : 0);
        for (int n = 0; n < 3; n++)
        {
            int k = _t.CornerOrder[oi * 3 + n];
            int cx = c[k * 2], cy = c[k * 2 + 1];
            bool onlyPass = k < 2 || passFlag;                     // local_70
            int pushX = 0, pushY = 0, found = -1;
            int rowC = Row(cy);
            int px = p[k * 2], py = p[k * 2 + 1];
            int rowP = Row(py);
            int cur = rowP + (px >> 12);
            if (rowC + (cx >> 12) != cur)
            {
                int floorCell = -1;
                int nx, dirX, distX, offX, ny, dirY, distY, offY;
                if (px < cx) { nx = (cx >> 12) - (px >> 12); dirX = 1; distX = cx - px; offX = px - Left(cur) * 0x100; }
                else { nx = (px >> 12) - (cx >> 12); dirX = -1; distX = px - cx; offX = Left(cur + 1) * 0x100 - px - 1; }
                if (py < cy) { ny = rowC - rowP; dirY = 0x40; distY = cy - py; offY = py - Top(cur) * 0x100; }
                else { ny = rowP - rowC; dirY = -0x40; distY = py - cy; offY = Top(cur + 0x40) * 0x100 - py - 1; }
                uint steps = (uint)(nx + (ny >> 6));
                int frac, slope, major, minor;
                if (distY < distX)
                {
                    int t = (offX * distY * 0x10) / distX;
                    frac = py < cy ? (py * 0x10 - t) - Top(cur) * 0x1000
                        : cy < py ? Top(cur + 0x40) * 0x1000 - (t + py * 0x10) : 0;
                    slope = (distY << 16) / distX;
                    minor = dirY; major = dirX;
                }
                else
                {
                    int t = (offY * distX * 0x10) / distY;
                    frac = px < cx ? (px * 0x10 - t) - Left(cur) * 0x1000
                        : cx < px ? Left(cur + 1) * 0x1000 - (t + px * 0x10) : 0;
                    slope = (distX << 16) / distY;
                    minor = dirX; major = dirY;
                }
                bool stopped = false;
                for (uint i = 0; i < steps;)
                {
                    int prevCell = cur;
                    frac += slope;
                    int step = major;
                    if (frac > 0xFFFF) { frac = frac - 0x10000 - slope; step = minor; }
                    cur = prevCell + step;
                    int kind = Kind(cur);
                    if (kind == 7) { found = cur; stopped = true; break; }
                    i++;
                    if (Flag(cur) != 0) continue;
                    if (onlyPass && _t.PassThrough[kind] != 0) continue;
                    if (_t.PassThrough[kind] == 0)
                    {
                        if (cur == prevCell + 1)
                        {
                            pushX = Left(cur) * 0x100 - cx - 1;
                            int c2 = CellIndex(cx + pushX, cy + pushY);
                            slope = 0; frac = 0; i = 0;
                            steps = (uint)Math.Abs((c2 >> 6) - (prevCell >> 6));
                            major = dirY; cur = prevCell;
                        }
                        else if (cur == prevCell - 1)
                        {
                            pushX = Left(cur + 1) * 0x100 - cx;
                            int c2 = CellIndex(cx + pushX, cy + pushY);
                            slope = 0; frac = 0; i = 0;
                            steps = (uint)Math.Abs((c2 >> 6) - (prevCell >> 6));
                            major = dirY; cur = prevCell;
                        }
                    }
                    if (cur == prevCell + 0x40)
                    {
                        pushY = Top(cur) * 0x100 - cy - 1;
                        int c2 = CellIndex(cx + pushX, cy + pushY);
                        steps = (uint)Math.Abs((c2 & 0x3F) - (prevCell & 0x3F));
                        slope = 0; frac = 0; i = 0;
                        major = dirX; floorCell = cur; cur = prevCell;
                    }
                    else if (cur == prevCell - 0x40 && _t.BlockFromBelow[kind] != 0)
                    {
                        pushY = Top(cur + 0x40) * 0x100 - cy;
                        int c2 = CellIndex(cx + pushX, cy + pushY);
                        steps = (uint)Math.Abs((c2 & 0x3F) - (prevCell & 0x3F));
                        slope = 0; frac = 0; i = 0;
                        major = dirX; cur = prevCell;
                    }
                }
                if (!stopped) found = floorCell;
            }
            if (k > 1 && found >= 0) result = found;
            if (pushX != 0 || pushY != 0)
            {
                for (int j = n + 1; j < 3; j++)
                {
                    int kk = _t.CornerOrder[oi * 3 + j];
                    c[kk * 2] += pushX;
                    c[kk * 2 + 1] += pushY;
                }
                uint f = 0;
                if (pushX > 0) { f = 8; push[0] = pushX + c[k * 2]; }
                else if (pushX < 0) { f = 2; push[2] = pushX + c[k * 2]; }
                if (pushY > 0) { f |= 1; push[1] = pushY + c[k * 2 + 1]; }
                else if (pushY < 0) { f |= 4; push[3] = pushY + c[k * 2 + 1]; }
                hits |= f & (uint)_t.CornerMask[k];
            }
        }
        return result;
    }

    // collision object +0x78 bits
    public const uint HitTop = 1, Grounded = 2, WallLeft = 4, WallRight = 8, SoloFloor = 0x100, WallFlag = 0x400,
        InPit = 0x400000;

    /// <summary>
    /// The stage contact of one object, the battle callback 0x0207E864 (slot +0x104): sweep its body box
    /// (x ±4 px, y by the box) from the previous position, push it out, set the contact bits (1 ceiling,
    /// 2 grounded, 4 / 8 walls) and stop the velocity into the surface. Not ported: the attached-object
    /// contacts (+0x28 list), moving floors (kind 6, FUN_02162A1C), the floor-contact record
    /// (+0x90/+0x98/+0x9C) and the display node update.
    /// </summary>
    public uint Contact(BattleMoveObject m, BattleBox? box, BattleBox? prevBox, uint flags78, out int floorKind)
    {
        floorKind = -1;
        if ((flags78 & 0x200) != 0 && m.Y == m.PrevY) m.PrevY = m.Y - m.Vy;
        int newX = m.X, newY = m.Y;
        (int top, int bottom) Span(int y, BattleBox? b) => b is { } v
            ? (y + (v.Y - v.HalfHeight) * 0x100, y + (v.Y + v.HalfHeight) * 0x100)
            : (y - 0x10, y);
        var (cT, cB) = Span(m.Y, box);
        int cL = m.X - 0x400, cR = m.X + 0x400;
        var (pT, pB) = Span(m.PrevY, prevBox);
        int pL = m.PrevX - 0x400, pR = m.PrevX + 0x400;
        int yq = m.Y > 0x3FFFF ? 0x3FF00 : m.Y;                         // literal 0x0207F01C
        int kindL = KindAt(Math.Max(cL, 0), yq);
        int kindR = KindAt(cR > 0x3FFFF ? 0x3FF00 : cR, yq);
        if ((cB & ~0xFF) <= (cT & ~0xFF)) { cB = m.Y; cT = cB - 0x800; }
        if ((pB & ~0xFF) <= (pT & ~0xFF)) { pB = m.PrevY; pT = pB - 0x800; }
        if ((cR & ~0xFF) <= (cL & ~0xFF)) { cL = m.X - 0x400; cR = m.X + 0x400; }
        if ((pR & ~0xFF) <= (pL & ~0xFF)) { pL = m.PrevX - 0x400; pR = m.PrevX + 0x400; }
        int dx = m.X - m.PrevX, dy = m.Y - m.PrevY;
        bool pass = (flags78 & 0xE0000) != 0 || (m.Flags & BattleMoveObject.FlagRising) != 0;
        var push = new int[4];
        int cell = Sweep([cL, cT, cR, cB], [pL, pT, pR, pB], dx, dy, push, out uint hits, pass);
        if ((hits & 1) != 0)
        {
            newY = m.Y - (cT - push[1]);
            flags78 |= HitTop;
            if (m.Vy < 0) m.Vy = 0;
        }
        if ((hits & 4) != 0)
        {
            newY = m.Y - (cB - push[3]);
            flags78 |= Grounded;
            if (kindL != 1 && kindR != 1 && _t.SoloFloor[kindL] == 0 && _t.SoloFloor[kindR] == 0) flags78 |= SoloFloor;
            if (m.Vy > 0) m.Vy = 0;
            flags78 &= ~0x40000u;
        }
        if ((hits & 8) != 0)
        {
            newX = m.X - (cL - push[0]);
            flags78 |= WallLeft;
            if (m.Vx < 0) m.Vx = 0;
            if (_t.WallFlag[kindL] != 0) flags78 |= WallFlag;
        }
        if ((hits & 2) != 0)
        {
            newX = m.X - (cR - push[2]);
            flags78 |= WallRight;
            if (m.Vx > 0) m.Vx = 0;
            if (_t.WallFlag[kindR] != 0) flags78 |= WallFlag;
        }
        if ((flags78 & 0x100000) == 0) { m.X = newX; m.Y = newY; }
        if (kindL == 7 || kindR == 7) flags78 |= InPit;
        else if ((hits & 4) == 0)
        {
            if ((flags78 & Grounded) != 0)
            {
                if (m.Vy > 0) m.Vy = 0;
                if (m.Vy < 0) flags78 &= ~Grounded;
            }
        }
        else if (cell >= 0)
        {
            floorKind = Kind(cell);
            int rec = Record(cell);
            if (rec >= 0 && (RecordByte(rec, 0x15) & 8) != 0) m.Flags |= BattleMoveObject.FlagSoftFriction;
        }
        return flags78;
    }
}
