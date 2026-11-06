using Jus.Game.Assets;

namespace Jus.Game.Engine;

/// <summary>Native stand-in for an AL sprite widget ('SP01', created by e.g. Title's FUN_02151238):
/// a DSTX bank drawn as DS OBJ pieces at an integer position, with an ALMT motion choosing the cell.
/// Motions advance one frame per display frame (their rate is 60) and hold at the end; <see cref="AtEnd"/>
/// reports that the current motion has reached its length (the widget's motion "end" query).</summary>
public sealed class SpriteActor(DstxBank bank, AlmtMotionSet motions, int motionId)
{
    private SpriteMotion _motion = motions.Get(motionId);
    private int _frame;

    public DstxBank Bank => bank;
    public int X { get; set; }
    public int Y { get; set; }
    public bool Visible { get; set; } = true;
    /// <summary>Uniform scale (the node scale set by FUN_020235dc), 1 = original size.</summary>
    public double Scale { get; set; } = 1.0;
    /// <summary>Opacity 0..1 (widget vfunc 0xF8); below 1 the sprite is blended over what is drawn.</summary>
    public double Alpha { get; set; } = 1.0;
    public int MotionId => _motion.Id;
    public int Cell => _motion.ValueAt(_frame);
    public bool AtEnd => _frame >= _motion.Length;

    /// <summary>FUN_02023894(widget, id, 0) + play.</summary>
    public void SetMotion(int id)
    {
        _motion = motions.Get(id);
        _frame = 0;
    }

    /// <summary>Advance one frame; a motion holds its last frame when it reaches its length
    /// (Title's 0x710001 is a 4-frame white flash, cell 5 in the all-white palette 4, that settles on
    /// the normal logo, cell 6 - looping it would strobe).</summary>
    public void Update()
    {
        if (_frame < _motion.Length) _frame++;
    }

    /// <summary>Draw the current cell, scaled around the actor's origin. Earlier parts have higher OBJ
    /// priority, so they are drawn last.</summary>
    public void Draw(IScreen screen)
    {
        if (!Visible || Scale <= 0 || Alpha <= 0) return;
        int cell = Cell;
        if (cell < 0 || cell >= bank.Cells.Count) return;
        var parts = bank.Cells[cell];
        var tex = bank.Texture;
        var px = screen.Pixels;
        double s = Scale;
        int a = (int)Math.Round(Math.Clamp(Alpha, 0, 1) * 256);
        for (int k = parts.Length - 1; k >= 0; k--)
        {
            var part = parts[k];
            var (w, h) = DstxBank.Sizes[part.Size];
            int tilesPerRow = w / 8;
            // destination rectangle of this part
            int x0 = (int)Math.Floor(X + part.X * s), y0 = (int)Math.Floor(Y + part.Y * s);
            int x1 = (int)Math.Ceiling(X + (part.X + w) * s), y1 = (int)Math.Ceiling(Y + (part.Y + h) * s);
            for (int dy = Math.Max(0, y0); dy < Math.Min(IScreen.Height, y1); dy++)
            {
                int y = (int)Math.Floor((dy + 0.5 - Y) / s) - part.Y;
                if (y < 0 || y >= h) continue;
                for (int dx = Math.Max(0, x0); dx < Math.Min(IScreen.Width, x1); dx++)
                {
                    int x = (int)Math.Floor((dx + 0.5 - X) / s) - part.X;
                    if (x < 0 || x >= w) continue;
                    // OBJ textures use 1D tile mapping; linear (format 0x20) textures are addressed as a
                    // 2D region starting at the part's tile position
                    int c = tex.IsLinear
                        ? tex.Pixel(part.Tile, x, y)
                        : tex.Pixel(part.Tile + (y >> 3) * tilesPerRow + (x >> 3), x & 7, y & 7);
                    if (c == 0) continue;
                    int index = tex.Is8Bpp ? c : part.Palette * 16 + c;
                    if (index >= tex.Palette.Length) continue;
                    ref uint dst = ref px[dy * IScreen.Width + dx];
                    dst = a >= 256 ? tex.Palette[index] : Blend(tex.Palette[index], dst, a);
                }
            }
        }
    }

    private static uint Blend(uint src, uint dst, int a)
    {
        uint Ch(int shift) => (uint)((((src >> shift) & 0xFF) * a + ((dst >> shift) & 0xFF) * (256 - a)) >> 8);
        return 0xFF000000 | Ch(16) << 16 | Ch(8) << 8 | Ch(0);
    }
}
