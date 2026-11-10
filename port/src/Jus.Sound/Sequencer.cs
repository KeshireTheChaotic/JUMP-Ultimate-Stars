namespace Jus.Sound;

internal enum EnvStage { Attack, Decay, Sustain, Release }

/// <summary>One of the 16 voices (replaces a DS sound channel).</summary>
internal sealed class Channel(int index)
{
    public readonly int Index = index;
    public bool Active;
    public NoteKind Kind;
    public SeqPlayer? Owner;
    public Track? Track;
    public int Priority, Key, BaseNote, BaseTimer, InstrumentPan, VelocityDb, Length;
    public EnvStage Stage;
    public int Env, AttackRate, DecayRate, SustainLevel, ReleaseRate;
    public int Volume, ShiftBits, Pan = 64;
    public int ModDepth, ModSpeed, ModType, ModRange = 1, ModDelay, ModDelayCount, ModPhase;
    public int SweepPitch, SweepLength, SweepCount;

    private Wave? _wave;
    private int _duty;
    private double _pos, _step;
    private ushort _lfsr = 0x7FFF;

    public void Start(NoteKind kind, Wave? wave, int duty)
    {
        Kind = kind; _wave = wave; _duty = duty; _pos = 0; _lfsr = 0x7FFF; Active = true;
    }

    public void Release() { if (Stage != EnvStage.Release) Stage = EnvStage.Release; }

    /// <summary>The DS channel steps once per timer overflow: rate = clock / timer (PSG/noise: 8 steps per
    /// period for PSG).</summary>
    public void SetRate(int timer, int outRate, int clock) => _step = (double)clock / timer / outRate;

    public int NextSample(ref uint noiseSeed)
    {
        int s;
        switch (Kind)
        {
            case NoteKind.Pcm:
                {
                    var w = _wave!;
                    int i = (int)_pos;
                    if (i >= w.Samples.Length)
                    {
                        if (!w.Loop) { Active = false; return 0; }
                        _pos = w.LoopStart + (_pos - w.LoopStart) % w.LoopLength;
                        i = (int)_pos;
                    }
                    s = w.Samples[i];
                    break;
                }
            case NoteKind.Psg:
                // duty 0–6: (duty + 1)/8 high; 7 = always low (silence in the original hardware)
                s = _duty >= 7 ? -0x7FFF : ((int)_pos & 7) <= _duty ? 0x7FFF : -0x7FFF;
                break;
            case NoteKind.Noise:
                {
                    int before = (int)_pos;
                    _pos += _step;
                    for (int k = before; k < (int)_pos; k++)
                    {
                        bool carry = (_lfsr & 1) != 0;
                        _lfsr >>= 1;
                        if (carry) _lfsr ^= 0x6000;
                    }
                    return (_lfsr & 1) != 0 ? -0x7FFF : 0x7FFF;
                }
            default:
                return 0;
        }
        _pos += _step;
        return s;
    }
}

/// <summary>Sequencer track state (one of up to 16 per sequence).</summary>
internal sealed class Track(int start)
{
    public int Pos = start;
    public bool Ended;
    public int Wait;
    public readonly int[] CallStack = new int[3];
    public int CallDepth;
    public readonly (int Count, int Pos)[] Loops = new (int, int)[3];
    public int LoopDepth;
    public int Program, Volume = 127, Expression = 127, Pan = 64, Transpose, Bend, BendRange = 2, Priority = 64;
    public bool NoteWait = true, Tie, Portamento, Compare = true;
    public int PortamentoKey = -1, PortamentoTime;
    public int ModDepth, ModSpeed = 16, ModType, ModRange = 1, ModDelay;
    public int Attack = 0xFF, Decay = 0xFF, Sustain = 0xFF, Release = 0xFF;
    public int SweepPitch;
    public Channel? LastChannel;
}

/// <summary>One playing sequence: tempo, tracks, local variables and the SSEQ command interpreter.</summary>
internal sealed class SeqPlayer
{
    private readonly SoundEngine _e;
    private readonly byte[] _d;
    private readonly List<Track> _tracks = [];
    private readonly short[] _vars = Enumerable.Repeat((short)-1, 16).ToArray();
    private int _tempo = 120, _counter = 240;
    private int _fadeFrames, _fadeLeft;

    public readonly Bank? Bank;
    public readonly int BankNo, Volume, ChannelPriority, PlayerPriority, Player, ChannelMask;
    public readonly (int A, int B) Id;
    public int MasterVolume = 127;
    public bool Done { get; private set; }

    public SeqPlayer(SoundEngine e, byte[] data, int offset, int bank, int volume, int channelPriority, int playerPriority, int player, (int, int) id)
    {
        _e = e; _d = data; BankNo = bank; Volume = volume; ChannelPriority = channelPriority;
        PlayerPriority = playerPriority; Player = player; Id = id;
        Bank = e.LoadBank(bank);
        ChannelMask = e.PlayerChannelMask(player);
        _tracks.Add(new Track(offset));
    }

    /// <summary>Sequence-level attenuation in 0.1 dB: info volume, master volume (0xC2) and a fade-out.</summary>
    public int LevelDb
    {
        get
        {
            var t = _e.Tables;
            int db = t.DecibelSquare[Volume] + t.DecibelSquare[MasterVolume];
            if (_fadeFrames > 0) db += t.DecibelSquare[Math.Clamp(127 * _fadeLeft / _fadeFrames, 0, 127)];
            return db;
        }
    }

    public void FadeOut(int frames) { _fadeFrames = frames; _fadeLeft = frames; }

    public void Finish(bool kill)
    {
        Done = true;
        foreach (var t in _tracks) _e.ReleaseTrack(t, kill);
    }

    public void Frame()
    {
        if (Done) return;
        if (_fadeFrames > 0 && --_fadeLeft <= 0) { Finish(true); return; }
        while (_counter >= 240)
        {
            _counter -= 240;
            Tick();
            if (Done) return;
        }
        _counter += _tempo;
    }

    private void Tick()
    {
        _e.TickChannels(this);
        for (int i = 0; i < _tracks.Count; i++)
        {
            var t = _tracks[i];
            if (t.Ended) continue;
            if (t.Wait > 0 && --t.Wait > 0) continue;
            int guard = 0;
            while (t.Wait == 0 && !t.Ended && guard++ < 10000) Step(t);
        }
        if (_tracks.All(t => t.Ended)) Done = true;
    }

    private int U8(Track t) => _d[t.Pos++];
    private int U16(Track t) { int v = _d[t.Pos] | _d[t.Pos + 1] << 8; t.Pos += 2; return v; }
    private int U24(Track t) { int v = _d[t.Pos] | _d[t.Pos + 1] << 8 | _d[t.Pos + 2] << 16; t.Pos += 3; return v; }
    private int VarLen(Track t)
    {
        int v = 0, b;
        do { b = U8(t); v = v << 7 | (b & 0x7F); } while ((b & 0x80) != 0);
        return v;
    }

    private enum Arg { U8, S16, VarLen }

    /// <summary>Reads a command argument, honouring a random (0xA0) or variable (0xA1) prefix.</summary>
    private int ReadArg(Track t, Arg kind, int prefix)
    {
        if (prefix == 0xA0) { int lo = (short)U16(t), hi = (short)U16(t); return _e.Random(lo, hi); }
        if (prefix == 0xA1) return Var(U8(t));
        return kind switch { Arg.U8 => U8(t), Arg.S16 => (short)U16(t), _ => VarLen(t) };
    }

    private short Var(int i) => i < 16 ? _vars[i] : _e.GlobalVar(i - 16);
    private void SetVar(int i, int v) { if (i < 16) _vars[i] = (short)v; else _e.SetGlobalVar(i - 16, (short)v); }

    private void Step(Track t)
    {
        if (t.Pos >= _d.Length) { t.Ended = true; return; }
        int cmd = U8(t);
        int prefix = 0;
        bool run = true;
        if (cmd == 0xA2) { run = t.Compare; cmd = U8(t); }
        if (cmd is 0xA0 or 0xA1) { prefix = cmd; cmd = U8(t); }
        if (cmd < 0x80)
        {
            int vel = U8(t);
            int len = ReadArg(t, Arg.VarLen, prefix);
            if (!run) return;
            int key = Math.Clamp(cmd + t.Transpose, 0, 127);
            _e.NoteOn(this, t, key, vel, len == 0 ? -1 : len);
            if (t.NoteWait) t.Wait = len;
            return;
        }
        switch (cmd)
        {
            case 0x80: { int w = ReadArg(t, Arg.VarLen, prefix); if (run) t.Wait = w; return; }
            case 0x81: { int p = ReadArg(t, Arg.VarLen, prefix); if (run) t.Program = p; return; }
            case 0x93:
                {
                    int no = U8(t), off = U24(t);
                    if (run) _tracks.Add(new Track(off) { });
                    _ = no;
                    return;
                }
            case 0x94: { int off = U24(t); if (run) t.Pos = off; return; }
            case 0x95:
                {
                    int off = U24(t);
                    if (run && t.CallDepth < 3) { t.CallStack[t.CallDepth++] = t.Pos; t.Pos = off; }
                    return;
                }
            case >= 0xB0 and <= 0xBD:
                {
                    int v = U8(t), val = ReadArg(t, Arg.S16, prefix);
                    if (!run) return;
                    short cur = Var(v);
                    switch (cmd)
                    {
                        case 0xB0: SetVar(v, val); break;
                        case 0xB1: SetVar(v, cur + val); break;
                        case 0xB2: SetVar(v, cur - val); break;
                        case 0xB3: SetVar(v, cur * val); break;
                        case 0xB4: if (val != 0) SetVar(v, cur / val); break;
                        case 0xB5: SetVar(v, val >= 0 ? cur << val : cur >> -val); break;
                        case 0xB6: SetVar(v, val < 0 ? -_e.Random(0, -val) : _e.Random(0, val)); break;
                        case 0xB8: t.Compare = cur == val; break;
                        case 0xB9: t.Compare = cur >= val; break;
                        case 0xBA: t.Compare = cur > val; break;
                        case 0xBB: t.Compare = cur <= val; break;
                        case 0xBC: t.Compare = cur < val; break;
                        case 0xBD: t.Compare = cur != val; break;
                    }
                    return;
                }
            case >= 0xC0 and <= 0xD6:
                {
                    int v = ReadArg(t, Arg.U8, prefix);
                    if (!run) return;
                    switch (cmd)
                    {
                        case 0xC0: t.Pan = Math.Clamp(v, 0, 127); break;
                        case 0xC1: t.Volume = Math.Clamp(v, 0, 127); break;
                        case 0xC2: MasterVolume = Math.Clamp(v, 0, 127); break;
                        case 0xC3: t.Transpose = (sbyte)v; break;
                        case 0xC4: t.Bend = (sbyte)v; break;
                        case 0xC5: t.BendRange = v; break;
                        case 0xC6: t.Priority = v; break;
                        case 0xC7: t.NoteWait = v != 0; break;
                        case 0xC8: t.Tie = v != 0; if (!t.Tie) _e.ReleaseTrack(t, false); t.LastChannel = null; break;
                        case 0xC9: t.PortamentoKey = Math.Clamp(v + t.Transpose, 0, 127); t.Portamento = true; break;
                        case 0xCA: t.ModDepth = v; break;
                        case 0xCB: t.ModSpeed = v; break;
                        case 0xCC: t.ModType = v; break;
                        case 0xCD: t.ModRange = v; break;
                        case 0xCE: t.Portamento = v != 0; break;
                        case 0xCF: t.PortamentoTime = v; break;
                        case 0xD0: t.Attack = v; break;
                        case 0xD1: t.Decay = v; break;
                        case 0xD2: t.Sustain = v; break;
                        case 0xD3: t.Release = v; break;
                        case 0xD4: if (t.LoopDepth < 3) t.Loops[t.LoopDepth++] = (v, t.Pos); break;
                        case 0xD5: t.Expression = Math.Clamp(v, 0, 127); break;
                        case 0xD6: break;   // print variable (debug)
                    }
                    return;
                }
            case 0xE0: { int v = ReadArg(t, Arg.S16, prefix); if (run) t.ModDelay = v; return; }
            case 0xE1: { int v = ReadArg(t, Arg.S16, prefix); if (run) _tempo = Math.Max(1, v); return; }
            case 0xE3: { int v = ReadArg(t, Arg.S16, prefix); if (run) t.SweepPitch = v; return; }
            case 0xFC:
                {
                    if (!run || t.LoopDepth == 0) return;
                    ref var l = ref t.Loops[t.LoopDepth - 1];
                    if (l.Count == 0) { t.Pos = l.Pos; return; }          // 0 = loop forever
                    if (--l.Count > 0) t.Pos = l.Pos; else t.LoopDepth--;
                    return;
                }
            case 0xFD: if (run && t.CallDepth > 0) t.Pos = t.CallStack[--t.CallDepth]; return;
            case 0xFE: U16(t); return;                                   // track allocation mask
            case 0xFF: if (run) t.Ended = true; return;
            default:
                t.Ended = true;                                           // unknown command: stop this track
                return;
        }
    }
}

public sealed partial class SoundEngine
{
    internal SoundTables Tables => _t;

    /// <summary>The channels a player may use (SDAT PLAYER record; 0 = no restriction). In this archive the
    /// BGM player 1 has 0xCFFF (channels 0–11, 14, 15) and the system-SE player 6 has 0x3000 (12–13), so
    /// effects never steal music voices.</summary>
    internal int PlayerChannelMask(int player)
    {
        int mask = player >= 0 && player < _sdat.Players.Count ? _sdat.Players[player].ChannelMask : 0;
        return mask == 0 ? 0xFFFF : mask;
    }

    /// <summary>For tests: which channels are sounding, as a bit mask.</summary>
    public int ActiveChannels { get { lock (_players) return _ch.Where(c => c.Active).Aggregate(0, (m, c) => m | 1 << c.Index); } }
}
