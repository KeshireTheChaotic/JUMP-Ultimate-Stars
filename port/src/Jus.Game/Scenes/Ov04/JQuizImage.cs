using Jus.Game.Assets;

namespace Jus.Game.Scenes.Ov04;

/// <summary>
/// Draws an image-only jquiz/img/*.dtx resource, as loaded by FUN_021537A4
/// (0x021537A4): a DSTX cell at x=8, y=50, with dn00.dtx fallback.
/// The native 3D sprite's priority/blend controllers are still untranslated.
/// </summary>
public sealed class JQuizImage
{
    private readonly DstxBank _bank;

    private JQuizImage(DstxBank bank) => _bank = bank;

    public static JQuizImage? Load(ResourceManager resources, string? image)
    {
        if (string.IsNullOrEmpty(image)) return null;
        if (image.Any(c => !char.IsAsciiLetterOrDigit(c) && c != '_'))
            throw new InvalidDataException("Unsafe quiz illustration name");
        byte[] data;
        try { data = resources.Read($"jquiz/img/{image}.dtx"); }
        catch (FileNotFoundException) { data = resources.Read("jquiz/img/dn00.dtx"); }
        return new JQuizImage(new DstxBank(data));
    }

    public void Draw(IScreen screen)
    {
        if (_bank.Cells.Count == 0) return;
        var tex = _bank.Texture;
        var pixels = screen.Pixels;
        var parts = _bank.Cells[0];
        // SpriteActor.Draw mirrors original AL OBJ order: earlier part is overlaid last.
        for (int i = parts.Length - 1; i >= 0; i--)
        {
            var part = parts[i];
            int code = part.Size & 15;
            if (code >= DstxBank.Sizes.Length) continue;
            var (width, height) = DstxBank.Sizes[code];
            bool flipX = (part.Size & 0x10) != 0;
            bool flipY = (part.Size & 0x20) != 0;
            int tilesPerRow = width / 8;
            for (int y = 0; y < height; y++)
            {
                int destY = 50 + part.Y + y;
                if ((uint)destY >= IScreen.Height) continue;
                int sourceY = flipY ? height - 1 - y : y;
                for (int x = 0; x < width; x++)
                {
                    int destX = 8 + part.X + x;
                    if ((uint)destX >= IScreen.Width) continue;
                    int sourceX = flipX ? width - 1 - x : x;
                    int color = tex.Pixel(part.Tile + (sourceY >> 3) * tilesPerRow +
                        (sourceX >> 3), sourceX & 7, sourceY & 7);
                    if (color == 0) continue;
                    int palette = tex.Is8Bpp ? color : part.Palette * 16 + color;
                    if ((uint)palette < tex.Palette.Length)
                        pixels[destY * IScreen.Width + destX] = tex.Palette[palette];
                }
            }
        }
    }
}
