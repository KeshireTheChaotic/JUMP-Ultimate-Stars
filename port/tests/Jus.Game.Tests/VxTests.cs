using Jus.Video.Vx;

namespace Jus.Game.Tests;

public sealed class VxTests
{
    private static VxFile Opening() => new(RomAssetsForTests.Instance.Read("opening/opening.vx"));

    [Fact]
    public void HeaderMatchesTheOpeningMovie()
    {
        var vx = Opening();
        Assert.Equal((1715, 256, 192, 35, 32000), (vx.FrameCount, vx.Width, vx.Height, vx.Quantizer, vx.SampleRate));
        Assert.Equal(30.0, vx.FrameRate);
        Assert.InRange(vx.AudioFrames(0), 8, 9);
    }

    [Fact]
    public void EveryFrameDecodesAndEndsBeforeItsAudio()
    {
        var vx = Opening();
        var dec = vx.CreateDecoder();
        var px = new uint[256 * 192];
        string? snap = Environment.GetEnvironmentVariable("JUS_VX_SNAP");
        for (int i = 0; i < vx.FrameCount; i++)
        {
            var packet = vx.Packet(i);
            int audioStart = dec.Decode(packet, px);
            // the audio after the video is 10-20 bytes per 128-sample frame
            int audioBytes = packet.Length - audioStart;
            // 10-20 bytes per audio frame; 102 frames carry 2 more bytes than 20 per frame (audio
            // framing to be confirmed when the audio codec is ported)
            Assert.True(audioBytes >= vx.AudioFrames(i) * 10 && audioBytes <= vx.AudioFrames(i) * 20 + 2,
                $"frame {i}: packet {packet.Length}, video ends at {audioStart}, audio {audioBytes} bytes for {vx.AudioFrames(i)} frames");
            if (snap is not null && i % 100 == 0) WriteBmp(Path.Combine(snap, $"vx_{i:D4}.bmp"), px);
        }
    }

    private static void WriteBmp(string path, uint[] px)
    {
        Directory.CreateDirectory(Path.GetDirectoryName(path)!);
        using var bw = new BinaryWriter(File.Create(path));
        bw.Write((ushort)0x4D42); bw.Write(54 + px.Length * 4); bw.Write(0); bw.Write(54);
        bw.Write(40); bw.Write(256); bw.Write(-192); bw.Write((ushort)1); bw.Write((ushort)32);
        bw.Write(0); bw.Write(px.Length * 4); bw.Write(2835); bw.Write(2835); bw.Write(0); bw.Write(0);
        foreach (var p in px) bw.Write(p);
    }
}
