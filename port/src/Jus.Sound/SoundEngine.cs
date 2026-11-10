namespace Jus.Sound;

/// <summary>
/// Native SDAT sequence player: a sequencer for SSEQ/SSAR data, NitroSDK-style channels (PCM / PSG /
/// noise with ADSR envelopes, LFO, sweep, portamento) and a 16-channel mixer producing 16-bit stereo at
/// <see cref="OutputRate"/>. Replaces the ARM7 sound driver; nothing is emulated, it is rendered.
/// <para>Timing follows the driver: one sound frame every 64·2728 ARM7 cycles (≈5.2095 ms). Per frame
/// each player adds its tempo to a counter and runs one sequencer tick per 240 (48 ticks per beat).
/// Envelopes, LFOs and channel parameters update once per frame.</para>
/// <para>Levels are summed in 0.1 dB (envelope >> 7, velocity, track volume and expression, sequence
/// volume through the DecibelSquare table) and converted with the driver's channel-volume table.</para>
/// </summary>
public sealed partial class SoundEngine
{
    public const int OutputRate = 32768;
    private const double FrameSeconds = 64.0 * 2728 / 33513982;
    private const int ChannelClock = 33513982 / 2;
    private const int PsgBaseTimer = 8006;
    private const int EnvMin = -92544;            // −723 << 7

    private readonly SdatArchive _sdat;
    private readonly SoundTables _t;
    private readonly Channel[] _ch = new Channel[16];
    private readonly List<SeqPlayer> _players = [];
    private readonly Dictionary<int, Bank> _banks = [];
    private readonly Dictionary<int, WaveArchive> _waves = [];
    private readonly Dictionary<int, SequenceData> _seqFiles = [];
    private readonly short[] _globalVars = new short[16];
    private readonly Random _rng = new(1);
    private double _frameAcc;
    private uint _noiseSeed = 1;

    public SoundEngine(SdatArchive sdat, SoundTables tables)
    {
        _sdat = sdat;
        _t = tables;
        for (int i = 0; i < 16; i++) _ch[i] = new Channel(i);
        for (int i = 0; i < 16; i++) _globalVars[i] = -1;
    }

    /// <summary>Number of sequences still playing (for tests and hosts).</summary>
    public int ActiveSequences { get { lock (_players) return _players.Count; } }

    /// <summary>NNS_SndArcPlayerStartSeq: play sequence <paramref name="seq"/> of the archive.</summary>
    public void StartSequence(int seq)
    {
        var info = seq >= 0 && seq < _sdat.Sequences.Count ? _sdat.Sequences[seq] : null;
        if (info is null) return;
        var data = SeqFile(info.FileId);
        Start(new SeqPlayer(this, data.Data, 0, info.Bank, info.Volume, info.ChannelPriority, info.PlayerPriority, info.Player, (seq, -1)));
    }

    /// <summary>NNS_SndArcPlayerStartSeqArc: play sequence <paramref name="index"/> of sequence archive
    /// <paramref name="archive"/> (e.g. 0x78 = SEQ_STATIC, the system sound effects).</summary>
    public void StartSequenceArchive(int archive, int index)
    {
        int file = archive >= 0 && archive < _sdat.SequenceArchives.Count ? _sdat.SequenceArchives[archive] : -1;
        if (file < 0) return;
        var data = SeqFile(file);
        var e = index >= 0 && index < data.Entries.Count ? data.Entries[index] : null;
        if (e is null) return;
        Start(new SeqPlayer(this, data.Data, e.Offset, e.Bank, e.Volume, e.ChannelPriority, e.PlayerPriority, e.Player, (archive, index)));
    }

    /// <summary>Stops every sequence on <paramref name="player"/> (-1 = all); <paramref name="fadeFrames"/>
    /// fades it out over that many sound frames first.</summary>
    public void Stop(int player = -1, int fadeFrames = 0)
    {
        lock (_players)
        {
            foreach (var p in _players.Where(p => player < 0 || p.Player == player))
            {
                if (fadeFrames <= 0) p.Finish(true);
                else p.FadeOut(fadeFrames);
            }
            _players.RemoveAll(p => p.Done);
        }
    }

    private void Start(SeqPlayer p)
    {
        lock (_players)
        {
            int max = p.Player < _sdat.Players.Count ? Math.Max(1, _sdat.Players[p.Player].MaxSequences) : 1;
            var same = _players.Where(x => x.Player == p.Player).OrderBy(x => x.PlayerPriority).ToList();
            while (same.Count >= max)
            {
                if (same[0].PlayerPriority > p.PlayerPriority) return;   // a higher-priority sequence keeps the player
                same[0].Finish(true);
                _players.Remove(same[0]);
                same.RemoveAt(0);
            }
            _players.Add(p);
        }
    }

    private SequenceData SeqFile(int id) => _seqFiles.TryGetValue(id, out var s) ? s : _seqFiles[id] = new SequenceData(_sdat.File(id));

    internal Bank? LoadBank(int bank)
    {
        if (_banks.TryGetValue(bank, out var b)) return b;
        var info = bank >= 0 && bank < _sdat.Banks.Count ? _sdat.Banks[bank] : null;
        return info is null ? null : _banks[bank] = new Bank(_sdat.File(info.FileId));
    }

    internal WaveArchive? LoadWaves(int bank, int slot)
    {
        var info = _sdat.Banks[bank];
        int wa = info is null || slot < 0 || slot > 3 ? -1 : info.WaveArchives[slot];
        if (wa < 0 || wa >= _sdat.WaveArchives.Count || _sdat.WaveArchives[wa] < 0) return null;
        return _waves.TryGetValue(wa, out var w) ? w : _waves[wa] = new WaveArchive(_sdat.File(_sdat.WaveArchives[wa]));
    }

    /// <summary>Renders interleaved stereo samples (L, R, L, R …), advancing the sequencer in real time.</summary>
    public void Render(Span<short> stereo)
    {
        lock (_players)
        {
            for (int i = 0; i + 1 < stereo.Length; i += 2)
            {
                _frameAcc -= 1.0 / OutputRate;
                if (_frameAcc <= 0)
                {
                    _frameAcc += FrameSeconds;
                    Frame();
                }
                int l = 0, r = 0;
                foreach (var c in _ch)
                {
                    if (!c.Active) continue;
                    int s = c.NextSample(ref _noiseSeed);
                    // channel volume register × data shift, then linear pan (DS mixer)
                    int v = s * c.Volume >> 7 >> c.ShiftBits;
                    l += v * (127 - c.Pan) >> 7;
                    r += v * c.Pan >> 7;
                }
                // 16 channels at full scale fill the DS DAC (one channel ≤ 1/16); ×4 here so music sits
                // around −30 dBFS on a PC instead of −40.
                stereo[i] = (short)Math.Clamp(l >> 2, short.MinValue, short.MaxValue);
                stereo[i + 1] = (short)Math.Clamp(r >> 2, short.MinValue, short.MaxValue);
            }
        }
    }

    /// <summary>Advances one sound frame: sequencer ticks, then envelopes / LFO / channel registers.</summary>
    internal void Frame()
    {
        foreach (var p in _players) p.Frame();
        _players.RemoveAll(p => p.Done && !_ch.Any(c => c.Active && c.Owner == p));
        foreach (var c in _ch)
        {
            if (!c.Active) continue;
            UpdateChannel(c);
        }
    }

    private void UpdateChannel(Channel c)
    {
        // envelope
        switch (c.Stage)
        {
            case EnvStage.Attack:
                c.Env = -((-c.Env * c.AttackRate) >> 8);
                if (c.Env == 0) c.Stage = EnvStage.Decay;
                break;
            case EnvStage.Decay:
                c.Env -= c.DecayRate;
                if (c.Env <= c.SustainLevel) { c.Env = c.SustainLevel; c.Stage = EnvStage.Sustain; }
                break;
            case EnvStage.Release:
                c.Env -= c.ReleaseRate;
                if (c.Env <= EnvMin) { c.Active = false; return; }
                break;
        }
        var tr = c.Track;
        // LFO (modulation): starts after its delay; speed advances a 16-bit phase (128 steps = one period)
        int lfo = 0;
        if (tr is not null && c.ModDepth > 0)
        {
            if (c.ModDelayCount < c.ModDelay) c.ModDelayCount++;
            else
            {
                c.ModPhase = (c.ModPhase + (c.ModSpeed << 6)) & 0x7FFF;
                lfo = _t.SinIndex(c.ModPhase >> 8) * c.ModDepth * c.ModRange;   // −127·127·range … +
            }
        }
        // sweep / portamento: linear from the start pitch over SweepLength frames
        int sweep = 0;
        if (c.SweepLength > 0 && c.SweepCount < c.SweepLength)
        {
            sweep = (int)((long)c.SweepPitch * (c.SweepLength - c.SweepCount) / c.SweepLength);
            c.SweepCount++;
        }
        int seqDb = c.Owner?.LevelDb ?? 0;
        int trackDb = tr is null ? 0 : _t.DecibelSquare[tr.Volume] + _t.DecibelSquare[tr.Expression];
        int dB = (c.Env >> 7) + c.VelocityDb + trackDb + seqDb;
        if (c.ModType == 1) dB += lfo >> 14;                 // volume modulation (≈ ±range dB)
        (c.Volume, int shift) = _t.ChannelVolume(dB);
        c.ShiftBits = shift == 3 ? 4 : shift;
        int pan = (tr?.Pan ?? 64) + c.InstrumentPan - 64;
        if (c.ModType == 2) pan += lfo >> 14;
        c.Pan = Math.Clamp(pan, 0, 127);
        int bend = tr is null ? 0 : tr.Bend * tr.BendRange * 64 / 128;
        int pitch = (c.Key - c.BaseNote) * 64 + bend + sweep + (c.ModType == 0 ? lfo >> 8 : 0);
        int timer = SoundTables.CalcTimer(c.BaseTimer, pitch);
        c.SetRate(timer, OutputRate, ChannelClock);
    }

    /// <summary>Allocates a channel that can play <paramref name="kind"/>: PCM on any, PSG on 8–13, noise on
    /// 14–15; a free one first, else the lowest-priority (releasing first) of the same or lower priority.</summary>
    internal Channel? Allocate(NoteKind kind, int priority, int mask)
    {
        IEnumerable<Channel> pool = kind switch
        {
            NoteKind.Psg => _ch.Skip(8).Take(6),
            NoteKind.Noise => _ch.Skip(14).Take(2),
            _ => _ch,
        };
        pool = pool.Where(c => (mask >> c.Index & 1) != 0);
        var free = pool.FirstOrDefault(c => !c.Active);
        if (free is not null) return free;
        var victim = pool.OrderBy(c => c.Priority).ThenBy(c => c.Stage == EnvStage.Release ? 0 : 1).ThenBy(c => c.Env).FirstOrDefault();
        return victim is not null && victim.Priority <= priority ? victim : null;
    }

    internal void NoteOn(SeqPlayer p, Track tr, int key, int velocity, int length)
    {
        var bank = p.Bank;
        var def = bank?.Find(tr.Program, key);
        if (def is null || def.Value.Kind == NoteKind.None) return;
        var d = def.Value;
        Wave? wave = null;
        if (d.Kind == NoteKind.Pcm)
        {
            var wa = LoadWaves(p.BankNo, d.WaveArchive);
            if (wa is null || d.Wave >= wa.Count) return;
            wave = wa.Get(d.Wave);
        }
        int prio = Math.Clamp(p.ChannelPriority + tr.Priority - 64, 0, 255);
        Channel? c = null;
        if (tr.Tie && tr.LastChannel is { Active: true } last && last.Track == tr) c = last;
        bool legato = c is not null;
        c ??= Allocate(d.Kind, prio, p.ChannelMask);
        if (c is null) return;
        if (!legato)
        {
            c.Start(d.Kind, wave, d.Kind == NoteKind.Psg ? d.Wave : 0);
            c.Env = EnvMin;
            c.Stage = EnvStage.Attack;
            c.ModDelayCount = 0;
            c.ModPhase = 0;
        }
        c.Owner = p;
        c.Track = tr;
        c.Priority = prio;
        c.Key = key;
        c.BaseNote = d.BaseNote;
        c.BaseTimer = d.Kind == NoteKind.Pcm ? wave!.Timer : PsgBaseTimer;
        c.InstrumentPan = d.Pan;
        c.VelocityDb = _t.DecibelSquare[Math.Clamp(velocity, 0, 127)];
        c.AttackRate = _t.AttackRate(tr.Attack != 0xFF ? tr.Attack : d.Attack);
        c.DecayRate = SoundTables.DecayRate(tr.Decay != 0xFF ? tr.Decay : d.Decay);
        c.SustainLevel = _t.SustainLevel(tr.Sustain != 0xFF ? tr.Sustain : d.Sustain);
        c.ReleaseRate = SoundTables.DecayRate(tr.Release != 0xFF ? tr.Release : d.Release);
        c.Length = length;
        c.ModDepth = tr.ModDepth; c.ModSpeed = tr.ModSpeed; c.ModType = tr.ModType; c.ModRange = tr.ModRange; c.ModDelay = tr.ModDelay;
        // sweep: explicit sweep pitch plus portamento from the previous key
        c.SweepPitch = tr.SweepPitch;
        if (tr.Portamento && tr.PortamentoKey >= 0)
            c.SweepPitch += (tr.PortamentoKey - key) * 64;
        c.SweepLength = c.SweepPitch == 0 ? 0 : tr.PortamentoTime == 0 ? Math.Max(1, length) : tr.PortamentoTime * tr.PortamentoTime * Math.Abs(c.SweepPitch) >> 11;
        c.SweepCount = 0;
        tr.PortamentoKey = key;
        tr.LastChannel = c;
        UpdateChannel(c);
    }

    internal void TickChannels(SeqPlayer p)
    {
        foreach (var c in _ch)
        {
            if (!c.Active || c.Owner != p || c.Length <= 0) continue;
            if (--c.Length == 0) c.Release();
        }
    }

    internal void ReleaseTrack(Track tr, bool kill)
    {
        foreach (var c in _ch)
            if (c.Active && c.Track == tr) { if (kill) c.Active = false; else c.Release(); }
    }

    internal short GlobalVar(int i) => _globalVars[i & 15];
    internal void SetGlobalVar(int i, short v) => _globalVars[i & 15] = v;
    internal int Random(int min, int max) => min >= max ? min : _rng.Next(min, max + 1);
}
