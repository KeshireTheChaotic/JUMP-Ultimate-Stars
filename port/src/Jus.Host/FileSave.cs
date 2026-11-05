using Jus.Game;

namespace Jus.Host;

/// <summary>The 64 KB cartridge backup as a file under %LOCALAPPDATA%\JUS. On first run it is
/// seeded from a JUS.sav next to the ROM if there is one, otherwise filled with 0xFF (erased EEPROM).</summary>
internal sealed class FileSave : ISaveStorage
{
    private readonly byte[] _data = new byte[0x10000];
    private readonly string _path;
    private bool _dirty;

    public FileSave(string path, string? seed)
    {
        _path = path;
        if (File.Exists(path)) Load(path);
        else if (seed is not null && File.Exists(seed)) Load(seed);
        else Array.Fill(_data, (byte)0xFF);
    }

    private void Load(string file)
    {
        var bytes = File.ReadAllBytes(file);
        bytes.AsSpan(0, Math.Min(bytes.Length, _data.Length)).CopyTo(_data);
    }

    public int Size => _data.Length;
    public void Read(int offset, Span<byte> destination) => _data.AsSpan(offset, destination.Length).CopyTo(destination);

    public void Write(int offset, ReadOnlySpan<byte> source)
    {
        source.CopyTo(_data.AsSpan(offset));
        _dirty = true;
    }

    public void Flush()
    {
        if (!_dirty && File.Exists(_path)) return;
        Directory.CreateDirectory(Path.GetDirectoryName(_path)!);
        string tmp = _path + ".tmp";
        File.WriteAllBytes(tmp, _data);
        File.Move(tmp, _path, overwrite: true);
        _dirty = false;
    }
}
