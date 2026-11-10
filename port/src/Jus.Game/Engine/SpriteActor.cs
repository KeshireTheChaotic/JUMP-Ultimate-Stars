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
    /// <summary>When set, this cell is drawn instead of the motion's (engine code that picks cells directly).</summary>
    public int? FixedCell { get; set; }
    public int Cell => FixedCell ?? _motion.ValueAt(_frame);
    public bool AtEnd => _frame >= _motion.Length;

    /// <summary>FUN_02023894(widget, id, 0) + play.</summary>
    public void SetMotion(int id)
    {
        _motion = motions.Get(id);
        _frame = 0;
    }

    /// <summary>Advance one frame. A motion without the ALMT loop flag (record +7 bit 0) holds its last
    /// frame when it reaches its length (Title's 0x710001 is a 4-frame white flash that settles on the
    /// normal logo); one with the flag starts again from frame 0 (wrap point inferred).</summary>
    public void Update()
    {
        if (_frame < _motion.Length) _frame++;
        else if (_motion.Loop && _motion.Length > 0) _frame = 1;
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
        // FFL4 (format 0x40): the first part's u16 is the frame; the parts' 4bpp tiles follow each other
        // in that frame (FUN_0203F5C8 / FUN_0203F440)
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
            // linear (3D, jus_TagSPD3) textures: size byte = size code | 0x10 h-flip | 0x20 v-flip |
            // 0x40 4-colour (2bpp) at double width; the tile is (column = bits 0–4, row = bits 5+) in 8 px
            bool linear = tex.IsLinear;
            int code = part.Size & 0xF;
            if (code >= DstxBank.Sizes.Length) continue;
            bool hflip = (part.Size & 0x10) != 0, vflip = (part.Size & 0x20) != 0;
            bool twoBpp = linear && (part.Size & 0x40) != 0;
            var (w, h) = DstxBank.Sizes[code];
            int tilesPerRow = w / 8;
            int u0 = (part.Tile & 31) * 8, v0 = (part.Tile >> 5) * 8;
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
                    // OBJ textures use 1D tile mapping; linear textures are a 2D region at (u0, v0)
                    int sx = hflip ? w - 1 - x : x, sy = vflip ? h - 1 - y : y;
                    int c = frame is not null
                        ? FramePixel(frame, frameBase[k] + (sy >> 3) * tilesPerRow + (sx >> 3), sx & 7, sy & 7)
                        : linear
                        ? (twoBpp ? tex.PixelAt2Bpp(u0 + sx, v0 + sy) : tex.PixelAt(u0 + sx, v0 + sy))
                        : tex.Pixel(part.Tile + (sy >> 3) * tilesPerRow + (sx >> 3), sx & 7, sy & 7);
                    if (c == 0) continue;
                    int index = tex.Is8Bpp ? c : part.Palette * 16 + c;
                    if (index >= tex.Palette.Length) continue;
                    ref uint dst = ref px[dy * IScreen.Width + dx];
                    dst = a >= 256 ? tex.Palette[index] : Blend(tex.Palette[index], dst, a);
                }
            }
        }
    }

    private static int FramePixel(byte[] frame, int tile, int x, int y)
    {
        int o = tile * 32 + y * 4 + (x >> 1);
        return o < frame.Length ? (frame[o] >> ((x & 1) * 4)) & 0xF : 0;
    }

    private static uint Blend(uint src, uint dst, int a)
    {
        uint Ch(int shift) => (uint)((((src >> shift) & 0xFF) * a + ((dst >> shift) & 0xFF) * (256 - a)) >> 8);
        return 0xFF000000 | Ch(16) << 16 | Ch(8) << 8 | Ch(0);
    }
}
