using Jus.Game;

namespace Jus.Game.Tests;

internal sealed class BytesSave(byte[] data) : ISaveStorage
{
    public int Size => data.Length;
    public void Read(int offset, Span<byte> destination) => data.AsSpan(offset, destination.Length).CopyTo(destination);
    public void Write(int offset, ReadOnlySpan<byte> source) => source.CopyTo(data.AsSpan(offset));
    public void Flush() { }
}

public sealed class SaveTests
{
    private static byte[] RealSave() => File.ReadAllBytes(Path.Combine(RomAssetsForTests.FindRoot(), "JUS.sav"));

    [Fact]
    public void LoadsTheRealSave()
    {
        // JUS.sav is the player's own file and changes as they play, so only structural facts are checked
        var raw = RealSave();
        var img = new SaveImage();
        Assert.Equal(SaveLoadResult.Ok, img.Load(new BytesSave(raw)));
        Assert.Equal(SaveImage.CurrentRecord(raw.AsSpan(8, SaveImage.Size)), img.Record);
        Assert.Equal(1u, img.ProgressFlags & 1);                    // the opening has been seen on this save
        Assert.Equal(BitConverter.ToUInt32(raw, 8 + SaveImage.RecordsOffset + img.Record * SaveImage.RecordSize + 0x24), img.PlayFrames);
        Assert.True(img.PlayFrames > 0);
    }

    [Fact]
    public void FallsBackToTheSecondCopy()
    {
        var data = RealSave();
        data[0x100] ^= 0xFF;                                  // break copy 0's checksum
        var img = new SaveImage();
        Assert.Equal(SaveLoadResult.OneCopyBad, img.Load(new BytesSave(data)));
        Assert.Equal(1u, img.ProgressFlags & 1);
    }

    [Fact]
    public void ErasedAndCorruptBackups()
    {
        var erased = new byte[0x10000];
        Array.Fill(erased, (byte)0xFF);
        Assert.Equal(SaveLoadResult.NoData, new SaveImage().Load(new BytesSave(erased)));

        var data = RealSave();
        data[0x100] ^= 0xFF;
        data[0x8000 + 0x100] ^= 0xFF;
        Assert.Equal(SaveLoadResult.BadChecksum, new SaveImage().Load(new BytesSave(data)));
    }

    [Fact]
    public void Crc16IsTheBiosAlgorithm()
    {
        // CRC-16/ARC check value for "123456789" with initial value 0
        Assert.Equal(0xBB3D, SaveImage.Crc16("123456789"u8));
    }

    [Fact]
    public void WithTheRealSaveTheOpeningCanBeSkippedIntoTheMenu()
    {
        var p = new FakePlatformWithSave(new BytesSave(RealSave()));
        var game = new JusGame(p, new TestExternals());
        var created = new List<(long Frame, SceneId? Id)>();
        game.Director.SceneCreated += id => created.Add((game.FrameCount, id));
        game.Start();
        // presses are held for 4 display frames: the Opening samples the pad once per movie frame
        // (30 fps), so a 1-frame press can fall between two samples, as on the real game
        var presses = new Dictionary<int, PadButtons> { [30] = PadButtons.A, [320] = PadButtons.A, [470] = PadButtons.Start };
        PadButtons Held(int f) => presses.Where(kv => f >= kv.Key && f < kv.Key + 4).Aggregate(PadButtons.None, (a, kv) => a | kv.Value);
        var prev = default(InputState);
        for (int f = 0; f < 620; f++)
        {
            prev = InputState.Next(prev, Held(f), false, 0, 0);
            p.Input = prev;
            game.Frame();
        }
        Assert.True(created.Select(c => c.Id).SequenceEqual([SceneId.Copyright, SceneId.Opening, SceneId.Title, SceneId.TopMenu]),
            string.Join(", ", created.Select(c => $"{c.Id}@{c.Frame}")));
    }

    [Fact]
    public void BootLoadsProgressIntoTheGame()
    {
        var raw = RealSave();
        var expected = new SaveImage();
        expected.Load(new BytesSave((byte[])raw.Clone()));
        var p = new FakePlatformWithSave(new BytesSave(raw));
        var game = new JusGame(p, new TestExternals());
        game.Start();
        Assert.Equal(expected.ProgressFlags, game.Globals.Save.ProgressFlags);
        Assert.Equal(expected.PlayFrames, game.Globals.Save.PlayFrames);
    }
}

internal sealed class FakePlatformWithSave(ISaveStorage save) : IPlatform
{
    public IScreen TopScreen { get; } = new FakeScreen();
    public IScreen BottomScreen { get; } = new FakeScreen();
    public InputState Input { get; set; }
    public ISaveStorage Save => save;
    public IAssetSource Assets => RomAssetsForTests.Instance;
    public ISound Sound { get; } = new RecordingSound();
    public void Log(string message) { }
}
