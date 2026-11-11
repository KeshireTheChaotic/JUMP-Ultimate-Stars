using Jus.Game.Assets;

namespace Jus.Game.Engine;

/// <summary>A battle character's 'SP01' sprite node: a DSTX bank (type 0x83, texture by resource id, e.g.
/// the FFL4 frames of chr/&lt;name&gt;c.aar) with an ALMT motion picking the cell. Like
/// <see cref="SpriteActor"/>, plus the whole-cell horizontal flip the battle needs: the facing set through
/// FUN_02083950 → FUN_0207506C → sprite vfunc 0x5C. The flip mirrors the cell around the node origin
/// (inferred: a mirrored node scale, as the AL engine's sprite nodes do). Motions advance one frame per
/// display frame (rate 60) and loop when the ALMT loop flag is set (wrap point as in SpriteActor, inferred).</summary>
public sealed class Ov06CharaSprite(DstxBank bank, AlmtMotionSet motions, int motionId)
{
    private SpriteMotion _motion = motions.Get(motionId);
    private int _frame;

    public DstxBank Bank => bank;
    public bool Flipped { get; set; }
    public bool Visible { get; set; } = true;
    public int MotionId => _motion.Id;
    public int Cell => _motion.ValueAt(_frame);
    public int Frame => _frame;

    public void SetMotion(int id)
    {
        _motion = motions.Get(id);
        _frame = 0;
    }

    public void Update()
    {
        if (_frame < _motion.Length) _frame++;
        else if (_motion.Loop && _motion.Length > 0) _frame = 1;
    }

    /// <summary>Draw the current cell with its origin at screen (x, y). Earlier parts have the higher OBJ
    /// priority, so they are drawn last.</summary>
    public void Draw(IScreen screen, int x, int y)
    {
        if (!Visible) return;
        int cell = Cell;
        if (cell < 0 || cell >= bank.Cells.Count) return;
        var parts = bank.Cells[cell];
        var tex = bank.Texture;
        var px = screen.Pixels;
        // FFL4: the first part's u16 selects the frame; the parts' tiles follow each other in it
        // (FUN_0203F5C8 / FUN_0203F440)
        byte[]? frame = tex.IsFrames && parts.Length > 0 ? tex.Frame(parts[0].Tile) : null;
        var frameBase = new int[parts.Length];
        if (frame is not null)
            for (int k = 1; k < parts.Length; k++)
            {
                var (pw, ph) = DstxBank.Sizes[Math.Min(parts[k - 1].Size & 0xF, DstxBank.Sizes.Length - 1)];
                frameBase[k] = frameBase[k - 1] + pw * ph / 64;
            }
        for (int k = parts.Length - 1; k >= 0; k--)
        {
            var part = parts[k];
            int code = part.Size & 0xF;
            if (code >= DstxBank.Sizes.Length) continue;
            var (w, h) = DstxBank.Sizes[code];
            bool hflip = ((part.Size & 0x10) != 0) ^ Flipped, vflip = (part.Size & 0x20) != 0;
            int left = Flipped ? x - part.X - w : x + part.X, top = y + part.Y;
            int tilesPerRow = w / 8;
            for (int py = 0; py < h; py++)
            {
                int dy = top + py;
                if ((uint)dy >= IScreen.Height) continue;
                int sy = vflip ? h - 1 - py : py;
                for (int pxl = 0; pxl < w; pxl++)
                {
                    int dx = left + pxl;
                    if ((uint)dx >= IScreen.Width) continue;
                    int sx = hflip ? w - 1 - pxl : pxl;
                    int c = frame is not null
                        ? FramePixel(frame, frameBase[k] + (sy >> 3) * tilesPerRow + (sx >> 3), sx & 7, sy & 7)
                        : tex.IsLinear
                        ? tex.PixelAt((part.Tile & 31) * 8 + sx, (part.Tile >> 5) * 8 + sy)
                        : tex.Pixel(part.Tile + (sy >> 3) * tilesPerRow + (sx >> 3), sx & 7, sy & 7);
                    if (c == 0) continue;
                    int index = tex.Is8Bpp ? c : part.Palette * 16 + c;
                    if (index < tex.Palette.Length) px[dy * IScreen.Width + dx] = tex.Palette[index];
                }
            }
        }
    }

    private static int FramePixel(byte[] frame, int tile, int x, int y)
    {
        int o = tile * 32 + y * 4 + (x >> 1);
        return o < frame.Length ? (frame[o] >> ((x & 1) * 4)) & 0xF : 0;
    }
}
