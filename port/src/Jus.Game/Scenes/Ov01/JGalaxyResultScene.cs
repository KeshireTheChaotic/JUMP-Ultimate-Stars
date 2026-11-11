using System.Buffers.Binary;
using Jus.Game.Assets;
using Jus.Game.Engine;

namespace Jus.Game.Scenes.Ov01;

/// <summary>
/// Scene 19, JGalaxyResult::JGalaxyResult_Add 0x0214DCB0: load
/// ResultMission_Create(0) (0x02167724), JGalaxyClearList_Create(currentMission,1)
/// (0x0214E6E8), common/button.aar and jgalaxy.aar, then fade in (2,1).
///
/// 0x0214E380 is the result-completion callback: for each of Stage +0x4B
/// mission requirements, check the success mask Stage +0x4C, mark fresh
/// progress at save +0x3DCC+mission, apply text/currency rewards from
/// jgalaxy mission records (+0x10 + requirement*0x14, s16 type +0x12),
/// grant koma via 0x02075F98 -> 0x02071360/0x02071240, and grant special
/// built-in deck id mission +0x0D via 0x020718FC when Stage +0x08 != 0.
/// Scores also receive six signed Stage +0x60 increments on cleanup,
/// 0x0214E1D8 -> 0x02072870, with clamp 0..99999.
/// Button callback 0x0214E328 plays SE 0x78,0 and fades out (3,1);
/// cleanup 0x0214E1D8 runs after fade. Scene 19 exit
/// 0x0206F300 handles the story chain; this scene leaves exit code 0.
///
/// STAND-IN: the animated ResultMission, JGalaxyClearList pictures,
/// ALWidget geometry at 0x0214DCB0 and message/dialog timing are not
/// in port assets as usable widget records. A plain text and pad-A
/// presentation replaces them; its button binding is INFERRED. The
/// native callback 0x0214E380 may fire later in ResultMission's own
/// timeline; the port applies its save effects after initial fade-in.
/// The native game uses on-screen reward animations, not this label list.
/// </summary>
public sealed class JGalaxyResultScene : ISceneTask
{
    private enum Phase { FadeIn, Showing, FadeOut }
    private readonly JusGame _game;
    private readonly AlftFont _font;
    private readonly byte[] _mission;
    private readonly byte[] _komaText;
    private readonly int _missionId, _stageId;
    private readonly List<string> _rewards = [];
    private Phase _phase = Phase.FadeIn;
    private bool _applied;

    public JGalaxyResultScene(JusGame game)
    {
        _game = game;
        var res = new ResourceManager(game.Platform.Assets);
        res.Mount("jgalaxy/jgalaxy.aar");
        var data = JGalaxyData.Load(res);
        _missionId = game.Globals.Save.CurrentMission;                 // DAT_020B4114
        if ((uint)_missionId >= (uint)data.Missions.Count)
            throw new InvalidDataException($"mission {_missionId} not in jgalaxy.bin");
        _mission = data.Missions[_missionId].Raw;
        _stageId = data.Missions[_missionId].Stage;
        StageName = data.Stages[_stageId].Name;
        _komaText = res.Read("bin/komatxt.bin");                       // 0x02075F60
        _font = AlftFont.Load(game.Platform.Assets, "font/jskfont.aft");
        game.Fade.Start(FadeKind.FromBlack, 1);
        game.Platform.Log("JGalaxyResult: save rewards translated; ResultMission and ClearList widget art are stand-ins");
    }

    public bool Finished { get; private set; }
    public int MissionId => _missionId;
    public string StageName { get; }
    public IReadOnlyList<string> Rewards => _rewards;
    public bool RewardsApplied => _applied;

    public void Update()
    {
        if (Finished) return;
        switch (_phase)
        {
            case Phase.FadeIn:
                if (_game.Fade.Step())
                {
                    ApplyMissionRewards();                             // 0x0214E380 callback
                    _phase = Phase.Showing;
                }
                break;
            case Phase.Showing:
                if (_game.Platform.Input.Trigger.HasFlag(PadButtons.A))
                {
                    _game.Platform.Sound.PlayEffect(0x78, 0);           // 0x0214E328
                    _game.Fade.Start(FadeKind.ToBlack, 1);
                    _phase = Phase.FadeOut;
                }
                break;
            case Phase.FadeOut:
                if (_game.Fade.Step())
                {
                    ApplyExitScoreAdjustments();                        // 0x0214E1D8
                    _game.Globals.Director.ExitCode = 0;
                    Finished = true;
                }
                break;
        }
        Draw();
    }

    private void ApplyMissionRewards()
    {
        if (_applied) return;
        _applied = true;
        var save = _game.Globals.Save;
        var raw = save.Image.Data;
        var stage = _game.Globals.Stage.Raw;
        int count = Math.Clamp((int)(sbyte)stage[0x4B], 0, Math.Min(6, (int)_mission[0x0B]));
        int success = stage[0x4C];
        int flagsOffset = 0x3DCC + _missionId;
        bool playedRewardSound = false;

        for (int i = 0; i < count; i++)
        {
            int bit = 1 << i;
            if ((raw[flagsOffset] & bit) != 0 || (success & bit) == 0) continue;
            raw[flagsOffset] |= (byte)(bit & 0x3F);                     // 0x0214E380 / 0x0214E460
            Changed(flagsOffset, 1);
            _rewards.Add($"Objective {i + 1} completed");
            int off = 0x10 + i * 0x14;
            short komaId = BinaryPrimitives.ReadInt16LittleEndian(_mission.AsSpan(off + 2));
            if (komaId == -1)
            {
                for (int j = 0; j < 6; j++)
                    AddScore(j, BinaryPrimitives.ReadUInt16LittleEndian(_mission.AsSpan(off + 4 + j * 2)));
                _rewards.Add("Points awarded");
            }
            else if (komaId >= 0 && komaId < 0x3A0)
            {
                AwardKoma(komaId);                                     // 0x02075F98
            }
            if (!playedRewardSound)
            {
                _game.Platform.Sound.PlayEffect(0x78, 0x0C);           // 0x0214E564
                playedRewardSound = true;
            }
        }

        // 0x0214E59C..634: extra built-in deck reward on stage completion.
        int bonusDeck = (sbyte)_mission[0x0D];
        if (stage[8] != 0 && bonusDeck >= 0 && bonusDeck < 4)
        {
            int owned = 0x9EC + (bonusDeck >> 5) * 4;
            uint mask = 1u << (bonusDeck & 31);
            uint bits = BinaryPrimitives.ReadUInt32LittleEndian(raw.AsSpan(owned));
            if ((bits & mask) == 0)
            {
                BinaryPrimitives.WriteUInt32LittleEndian(raw.AsSpan(owned), bits | mask);
                int justUnlocked = 0x9F8 + (bonusDeck >> 5) * 4;
                bits = BinaryPrimitives.ReadUInt32LittleEndian(raw.AsSpan(justUnlocked));
                BinaryPrimitives.WriteUInt32LittleEndian(raw.AsSpan(justUnlocked), bits | mask);
                Changed(owned, 4);
                Changed(justUnlocked, 4);
                _rewards.Add($"Deck {bonusDeck + 1} unlocked");
            }
        }
    }

    private void AwardKoma(int id)
    {
        var raw = _game.Globals.Save.Image.Data;
        int off = 0x8F4 + (id >> 5) * 4;
        uint mask = 1u << (id & 31);
        uint bits = BinaryPrimitives.ReadUInt32LittleEndian(raw.AsSpan(off));
        if ((bits & mask) != 0) return;                                // 0x02070FB4
        BinaryPrimitives.WriteUInt32LittleEndian(raw.AsSpan(off), bits | mask);
        int newly = 0x968 + (id >> 5) * 4;
        bits = BinaryPrimitives.ReadUInt32LittleEndian(raw.AsSpan(newly));
        BinaryPrimitives.WriteUInt32LittleEndian(raw.AsSpan(newly), bits | mask);
        Changed(off, 4);
        Changed(newly, 4);
        _rewards.Add($"Koma {id} unlocked");

        // FUN_02075F98 reads the byte at komatxt.bin[id * 12 + 4],
        // then FUN_02071240 sets the secondary new-item bit at save +0x8E4.
        int entry = id * 12;
        if (entry + 4 < _komaText.Length)
        {
            int companion = _komaText[entry + 4];
            int companionOff = 0x8E4 + (companion >> 5) * 4;
            if (companionOff + 4 <= raw.Length)
            {
                mask = 1u << (companion & 31);
                bits = BinaryPrimitives.ReadUInt32LittleEndian(raw.AsSpan(companionOff));
                if ((bits & mask) == 0)
                {
                    BinaryPrimitives.WriteUInt32LittleEndian(raw.AsSpan(companionOff), bits | mask);
                    Changed(companionOff, 4);
                }
            }
        }
    }

    private void AddScore(int slot, int delta)
    {
        if (delta == 0) return;
        var save = _game.Globals.Save;
        int off = SaveImage.RecordsOffset + save.Image.Record * SaveImage.RecordSize + 8 + slot * 4;
        int before = BinaryPrimitives.ReadInt32LittleEndian(save.Image.Data.AsSpan(off));
        int after = (int)Math.Clamp((long)before + delta, 0L, 99999L); // 0x02072870
        if (before == after) return;
        BinaryPrimitives.WriteInt32LittleEndian(save.Image.Data.AsSpan(off), after);
        Changed(SaveImage.RecordsOffset + save.Image.Record * SaveImage.RecordSize + 8, 0x18);
    }

    private void ApplyExitScoreAdjustments()
    {
        var stage = _game.Globals.Stage.Raw;
        for (int i = 0; i < 6; i++)
        {
            short delta = BinaryPrimitives.ReadInt16LittleEndian(stage.AsSpan(0x60 + i * 2));
            AddScore(i, delta);                                        // 0x0214E1D8 → 0x02072870
        }
    }

    private void Changed(int offset, int length)
    {
        var save = _game.Globals.Save;
        save.AutoSaveRequested = true;                                 // DAT_020B02AC
        if (!save.Dirty.Contains((offset, length)))
            save.Dirty.Add((offset, length));                           // FUN_02073114
    }

    private void Draw()
    {
        var top = _game.Platform.TopScreen;
        var bottom = _game.Platform.BottomScreen;
        top.Clear(0xFF000000);
        bottom.Clear(0xFF000000);
        var heading = new TextCanvas(_font, 248, 72);
        heading.Print(StageName);
        heading.NewLine();
        heading.Print("J Galaxy Result");
        heading.NewLine();
        heading.Print($"Mission {_missionId + 1}");
        heading.Draw(top, 8, 12);

        var list = new TextCanvas(_font, 248, 144);
        list.Print(_applied ? (_rewards.Count == 0 ? "No new rewards" : "New rewards") : "Loading result");
        foreach (string reward in _rewards.Take(8))
        {
            list.NewLine();
            list.Print(reward);
        }
        list.Draw(bottom, 8, 8);
        var control = new TextCanvas(_font, 248, 24);
        control.Print(_applied ? "A: Continue" : " ");
        control.Draw(bottom, 8, 164);
    }
}
