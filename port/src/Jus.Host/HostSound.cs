using System.Runtime.InteropServices;
using Jus.Game;
using Jus.Sound;

namespace Jus.Host;

/// <summary>
/// Game sound through the native SDAT player (<see cref="SoundEngine"/>), played on the default Windows
/// output device with winmm waveOut (4 × 1024-frame buffers, ≈125 ms latency).
/// PlayEffect(id, arg) = NNS_SndArcPlayerStartSeqArc(id, arg) (FUN_0207342c → FUN_0205daac);
/// PlayMusic(id) = NNS_SndArcPlayerStartSeq(id) (FUN_0207361c → FUN_0205db34).
/// </summary>
internal sealed partial class HostSound : ISound, IDisposable
{
    private const int Buffers = 4, FramesPerBuffer = 1024;
    private readonly SoundEngine _engine;
    private readonly SdatArchive _sdat;
    private readonly Action<string> _log;
    private readonly Thread? _thread;
    private volatile bool _stop;
    private int _musicPlayer = -1;

    private HostSound(SdatArchive sdat, SoundTables tables, bool output, Action<string> log)
    {
        _sdat = sdat;
        _engine = new SoundEngine(sdat, tables);
        _log = log;
        if (output)
        {
            _thread = new Thread(Pump) { IsBackground = true, Name = "JUS audio", Priority = ThreadPriority.AboveNormal };
            _thread.Start();
        }
    }

    /// <summary>The sound player, or null when the sound archive is not available from <paramref name="assets"/>.</summary>
    public static HostSound? TryCreate(IAssetSource assets, bool output, Action<string> log)
    {
        try
        {
            var sdat = new SdatArchive(assets.Read("sound/JS2_sound.sdat"));
            return new HostSound(sdat, new SoundTables(), output, log);
        }
        catch (Exception ex) when (ex is IOException or InvalidDataException or ArgumentException)
        {
            log($"sound: disabled ({ex.Message})");
            return null;
        }
    }

    public void PlayEffect(int id, int arg) => _engine.StartSequenceArchive(id, arg);

    public void PlayMusic(int id, int arg)
    {
        if (id >= 0 && id < _sdat.Sequences.Count && _sdat.Sequences[id] is { } info) _musicPlayer = info.Player;
        _engine.StartSequence(id);
    }

    /// <summary>Fade over <paramref name="frames"/> display frames (≈3.2 sound frames each); 0 = stop now.</summary>
    public void FadeOutMusic(int frames)
    {
        if (_musicPlayer >= 0) _engine.Stop(_musicPlayer, frames * 192 / 60);
    }

    public void StopAll() => _engine.Stop();

    private void Pump()
    {
        var fmt = new WaveFormat { FormatTag = 1, Channels = 2, SamplesPerSec = SoundEngine.OutputRate,
            AvgBytesPerSec = SoundEngine.OutputRate * 4, BlockAlign = 4, BitsPerSample = 16 };
        if (waveOutOpen(out nint dev, -1, ref fmt, 0, 0, 0) != 0) { _log("sound: no output device"); return; }
        int bytes = FramesPerBuffer * 4;
        var hdr = new nint[Buffers];
        var pcm = new short[FramesPerBuffer * 2];
        int size = Marshal.SizeOf<WaveHdr>();
        try
        {
            for (int i = 0; i < Buffers; i++)
            {
                hdr[i] = Marshal.AllocHGlobal(size);
                var h = new WaveHdr { Data = Marshal.AllocHGlobal(bytes), BufferLength = (uint)bytes };
                Marshal.StructureToPtr(h, hdr[i], false);
                waveOutPrepareHeader(dev, hdr[i], size);
                Fill(hdr[i], pcm, bytes);
                waveOutWrite(dev, hdr[i], size);
            }
            while (!_stop)
            {
                bool wrote = false;
                for (int i = 0; i < Buffers; i++)
                {
                    var h = Marshal.PtrToStructure<WaveHdr>(hdr[i]);
                    if ((h.Flags & 1) == 0) continue;          // WHDR_DONE
                    Fill(hdr[i], pcm, bytes);
                    waveOutWrite(dev, hdr[i], size);
                    wrote = true;
                }
                if (!wrote) Thread.Sleep(4);
            }
        }
        finally
        {
            waveOutReset(dev);
            foreach (var p in hdr.Where(p => p != 0))
            {
                waveOutUnprepareHeader(dev, p, size);
                Marshal.FreeHGlobal(Marshal.PtrToStructure<WaveHdr>(p).Data);
                Marshal.FreeHGlobal(p);
            }
            waveOutClose(dev);
        }
    }

    private void Fill(nint hdr, short[] pcm, int bytes)
    {
        _engine.Render(pcm);
        var h = Marshal.PtrToStructure<WaveHdr>(hdr);
        Marshal.Copy(pcm, 0, h.Data, pcm.Length);
        h.Flags &= ~1u;
        Marshal.StructureToPtr(h, hdr, false);
    }

    public void Dispose()
    {
        _stop = true;
        _thread?.Join(500);
    }

    [StructLayout(LayoutKind.Sequential, Pack = 2)]
    private struct WaveFormat
    {
        public ushort FormatTag, Channels;
        public int SamplesPerSec, AvgBytesPerSec;
        public ushort BlockAlign, BitsPerSample, Size;
    }

    [StructLayout(LayoutKind.Sequential)]
    private struct WaveHdr
    {
        public nint Data;
        public uint BufferLength, BytesRecorded;
        public nint User;
        public uint Flags, Loops;
        public nint Next, Reserved;
    }

    [LibraryImport("winmm.dll")] private static partial int waveOutOpen(out nint device, int deviceId, ref WaveFormat format, nint callback, nint instance, int flags);
    [LibraryImport("winmm.dll")] private static partial int waveOutPrepareHeader(nint device, nint header, int size);
    [LibraryImport("winmm.dll")] private static partial int waveOutUnprepareHeader(nint device, nint header, int size);
    [LibraryImport("winmm.dll")] private static partial int waveOutWrite(nint device, nint header, int size);
    [LibraryImport("winmm.dll")] private static partial int waveOutReset(nint device);
    [LibraryImport("winmm.dll")] private static partial int waveOutClose(nint device);
}
