using Jus.Video.Vx;

namespace Jus.Game.Engine;

/// <summary>Native stand-in for Movie.cpp (Movie_Create 0x02151C20, task 0x021524C4): plays an
/// Actimagine VX movie into a screen at the movie's own frame rate, timed against the display
/// refresh like the original (which paces frames by OS ticks). <see cref="FrameDecoded"/> is the
/// original's per-frame callback (+0xD4), <see cref="Ended"/> its end callback (+0xD8).
/// Each block's audio frames (128 samples each, after the video data) are decoded with
/// <see cref="VxAudioDecoder"/> and handed to <see cref="ISound.QueueStream"/> (ov00 FUN_02152d1c).</summary>
public sealed class MoviePlayer
{
    /// <summary>Display refresh the game runs at.</summary>
    public const double RefreshHz = 59.8261;

    private readonly VxFile _file;
    private readonly VxDecoder _decoder;
    private readonly VxAudioDecoder _audio;
    private readonly ISound? _sound;
    private readonly uint[] _frame;
    private readonly short[] _pcm = new short[VxAudioDecoder.FrameSamples];
    private long _vblanks;
    private bool _paused;

    public MoviePlayer(byte[] vx, ISound? sound = null)
    {
        _file = new VxFile(vx);
        _decoder = _file.CreateDecoder();
        _audio = _file.CreateAudioDecoder();
        _sound = sound;
        _frame = new uint[_file.Width * _file.Height];
    }

    /// <summary>Audio decoded so far, in samples (for tests).</summary>
    public long AudioSamples { get; private set; }

    public int FrameCount => _file.FrameCount;
    /// <summary>Frames decoded so far.</summary>
    public int Position { get; private set; }
    public bool IsFinished => Position >= _file.FrameCount;
    public bool Stopped { get; private set; }
    public ReadOnlySpan<uint> Frame => _frame;

    public event Action? FrameDecoded;
    public event Action? Ended;

    /// <summary>FUN_0214da24: stop playback (no end callback afterwards); queued audio is dropped.</summary>
    public void Stop()
    {
        Stopped = true;
        _sound?.StopStream();
    }
    public void Pause(bool paused) => _paused = paused;

    /// <summary>One display frame: decode every movie frame that is due by now.</summary>
    public void Tick()
    {
        if (Stopped || _paused) return;
        _vblanks++;
        double now = _vblanks / RefreshHz;
        while (!IsFinished && Position / _file.FrameRate <= now)
        {
            var packet = _file.Packet(Position);
            int p = _decoder.Decode(packet, _frame);
            int frames = _file.AudioFrames(Position);
            var block = new short[frames * VxAudioDecoder.FrameSamples];
            for (int f = 0; f < frames && p < packet.Length; f++)
            {
                p += _audio.DecodeFrame(packet[p..], _pcm);
                _pcm.CopyTo(block, f * VxAudioDecoder.FrameSamples);
            }
            AudioSamples += block.Length;
            _sound?.QueueStream(block, _file.SampleRate);
            Position++;
            FrameDecoded?.Invoke();
            if (Stopped) return;
        }
        if (IsFinished)
        {
            Stopped = true;
            Ended?.Invoke();
        }
    }

    public void Draw(IScreen screen) => _frame.AsSpan().CopyTo(screen.Pixels);
}
