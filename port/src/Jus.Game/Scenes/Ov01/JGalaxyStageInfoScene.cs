using System.Buffers.Binary;
using Jus.Game.Assets;
using Jus.Game.Engine;

namespace Jus.Game.Scenes.Ov01;

/// <summary>
/// Scene 17, JGalaxyStageInfo.cpp (ov01): JGalaxyStageInfo_Add 0x0214CD20.
/// Work +0x34 takes the mission id from save +0x3E5C; the mission entry is 0x88 bytes from
/// jgalaxy/jgalaxy.bin, and +0x08 selects the entry in jgalaxy/{battle,mission}.bin.
/// CONFIRM: 0x0214D3D4 copies the selected mission into StageWork and selects exit 0/1 based on
/// mission flag +0x0C bit 3; CANCEL: 0x0214D3A4 selects exit 2. Both call 0x0214D318
/// (fade out at speed 1), then 0x0214D1E0 writes the exit code and frees the scene.
/// 0x0214D594/0x0214D6CC switch to the clear-list screen; 0x0214D50C/0x0214D61C
/// return. 0x0214D184 handles the initial fade-in.
/// 
/// STAND-IN: widget records at ov01 0x0216BA7C/0x0216BACC are overlay static data (not
/// available as runtime assets); their original positions, sprites, event bindings and the
/// clear-list image/background are not copied into source. The native font renders a plainly
/// labelled information panel with pad A/B/X controls pending a data-backed widget loader.
/// X for the two-page control is inferred, not a claimed original button binding.
/// MissionData's 0xA4-byte records are loaded from Data at runtime, never hardcoded.
/// </summary>
public sealed class JGalaxyStageInfoScene : ISceneTask
{
    private enum Phase { FadeIn, Viewing, FadeToOtherPage, FadeFromOtherPage, FadeOut }
    private readonly JusGame _game;
    private readonly AlftFont _font;
    private readonly JGalaxyData _data;
    private readonly byte[] _missionRecord;
    private readonly byte[] _battleRecord;
    private readonly int _missionId, _stageId, _planetId, _galaxyId;
    private readonly int _sourceKind;
    private Phase _phase = Phase.FadeIn;
    private bool _clearListPage;
    private int _exitCode = -1;

    public JGalaxyStageInfoScene(JusGame game)
    {
        _game = game;
        var res = new ResourceManager(game.Platform.Assets);
        res.Mount("jgalaxy/jgalaxy.aar");                      // JGalaxyStageInfo_Add
        _data = JGalaxyData.Load(res);
        _missionId = game.Globals.Save.CurrentMission;         // DAT_020B4114
        if ((uint)_missionId >= (uint)_data.Missions.Count)
            throw new InvalidDataException($"mission id {_missionId} outside jgalaxy.bin");
        _missionRecord = _data.Missions[_missionId].Raw;
        _stageId = _data.Missions[_missionId].Stage;
        _planetId = _data.Stages[_stageId].Planet;
        _galaxyId = _data.Planets[_planetId].Galaxy;
        _sourceKind = (_missionRecord[0x0C] & 4) == 0 ? 1 : 0; // MissionData_Create(1 / 0)
        byte[] source = res.Read(_sourceKind == 1 ? "jgalaxy/battle.bin" : "jgalaxy/mission.bin");
        int count = BinaryPrimitives.ReadInt32LittleEndian(source);
        int index = _missionRecord[8];                          // FUN_0207538C index
        if (index >= count || 4 + (index + 1) * 0xA4 > source.Length)
            throw new InvalidDataException($"mission-data entry {index} outside jgalaxy/{(_sourceKind == 1 ? "battle" : "mission")}.bin");
        _battleRecord = source.AsSpan(4 + index * 0xA4, 0xA4).ToArray();
        _font = AlftFont.Load(game.Platform.Assets, "font/jskfont.aft");

        // The original music table is at 0x02169CE0. Its relation to the galaxy music table
        // is not yet proven; use the already-translated galaxy track as an INFERRED stand-in.
        game.PlayMusic(Scenes.Ov02.JGalaxyRules.GalaxyMusic[_galaxyId], 0);
        game.Fade.Start(FadeKind.FromBlack, 1);                 // FUN_02073EBC(2,1)
        game.Platform.Log("JGalaxyStageInfo: mission details and transitions translated; native widget/clear-list art requires overlay data");
    }

    public bool Finished { get; private set; }
    public int MissionId => _missionId;
    public int StageId => _stageId;
    public int PlanetId => _planetId;
    public int GalaxyId => _galaxyId;
    public bool ClearListPage => _clearListPage;
    public int MissionDataKind => _sourceKind;

    public void Update()
    {
        if (Finished) return;
        switch (_phase)
        {
            case Phase.FadeIn:
                if (_game.Fade.Step()) _phase = Phase.Viewing;         // FUN_0214D184
                break;
            case Phase.Viewing:
                HandleInput();
                break;
            case Phase.FadeToOtherPage:
                if (_game.Fade.Step())
                {
                    _clearListPage = !_clearListPage;
                    // Original: 0x0214D6CC/0x0214D61C switches hardware screen and
                    // clear-list visibility, then 0x0214D748/0x0214D698 waits for fade-in.
                    _game.Fade.Start(FadeKind.FromBlack, 1);
                    _phase = Phase.FadeFromOtherPage;
                }
                break;
            case Phase.FadeFromOtherPage:
                if (_game.Fade.Step()) _phase = Phase.Viewing;
                break;
            case Phase.FadeOut:
                if (_game.Fade.Step()) Finish();                        // FUN_0214D1E0
                break;
        }
        Draw();
    }

    private void HandleInput()
    {
        // Stand-in bindings until the actual ALWidget records and collision shapes
        // (0x0216BA7C/0x0216BACC) are available from a native data file.
        var trigger = _game.Platform.Input.Trigger;
        if (_clearListPage)
        {
            if (trigger.HasFlag(PadButtons.B) || trigger.HasFlag(PadButtons.X))
                ChangePage();                                         // 0x0214D50C
        }
        else
        {
            if (trigger.HasFlag(PadButtons.A)) Confirm();               // 0x0214D3D4
            else if (trigger.HasFlag(PadButtons.B)) Cancel();           // 0x0214D3A4
            else if (trigger.HasFlag(PadButtons.X)) ChangePage();      // 0x0214D594
        }
    }

    private void ChangePage()
    {
        _game.Platform.Sound.PlayEffect(0x78, 0);                      // 0x0214D594 / D50C
        _game.Fade.Start(FadeKind.ToBlack, 1);
        _phase = Phase.FadeToOtherPage;
    }

    private void Cancel()
    {
        _game.Platform.Sound.PlayEffect(0x78, 1);                      // 0x0214D3A4
        Leave(2);
    }

    private void Confirm()
    {
        CopyMissionToStage();                                         // 0x0214D3D4 → 0x0207538C
        _game.Platform.Sound.PlayEffect(0x78, 0);
        Leave((_missionRecord[0x0C] & 8) == 0 ? 0 : 1);
    }

    private void Leave(int code)
    {
        _exitCode = code;
        _game.Fade.Start(FadeKind.ToBlack, 1);                          // FUN_0214D318
        _phase = Phase.FadeOut;
    }

    /// <summary>
    /// Direct translation of the 0x0214D3D4 stage/session assignments. 0x0207538C
    /// constructs the battle parameters from the selected 0xA4-byte MissionData record.
    /// The unresolved 0x0216446C battle-type-dependent timer and optional player-slot
    /// callbacks in 0x0207538C are explicitly omitted rather than guessed.
    /// </summary>
    private void CopyMissionToStage()
    {
        var save = _game.Globals.Save;
        var stage = _game.Globals.Stage.Raw;
        var battle = _game.Globals.Battle.Raw;
        var m = _missionRecord;
        var r = _battleRecord;

        // FUN_0207538C: non-battle mission keeps the selected entry index; battle uses -1.
        stage[0] = _sourceKind == 0 ? m[8] : (byte)0xFF;
        stage[2] = r[0x77];                                            // 0x020AFEDE
        BinaryPrimitives.WriteInt32LittleEndian(battle.AsSpan(0x0C), r[0x75]);
        BinaryPrimitives.WriteInt32LittleEndian(battle.AsSpan(0x10), r[0x76]);
        BinaryPrimitives.WriteInt32LittleEndian(battle.AsSpan(0x14), (sbyte)r[0x78]);
        r.AsSpan(0x70, 4).CopyTo(battle.AsSpan(0x18));
        battle[0] = (byte)(r[0x79] + 1);
        battle[8] = 0;
        battle[0x2B] = (byte)((r[0x7C] & 1) != 0 ? 1 : 0);
        battle[0x2C] = (byte)((r[0x7C] & 2) != 0 ? 1 : 0);
        battle[0x2D] = (byte)((r[0x7C] & 4) != 0 ? 1 : 0);
        battle[0x2E] = 0;
        battle[0x33] = r[0x79];                                        // 0x020AFEC3

        if ((sbyte)m[7] != -1 && (save.ProgressFlags & 0x20) == 0)
            stage[5] = m[7];                                          // 0x020AFEE1
        if ((m[0x0C] & 1) != 0) stage[6] = 1;                          // 0x020AFEE2
        stage[0x4B] = m[0x0B];                                        // 0x020AFF27
        for (int i = 0; i < m[0x0B] && i < 5; i++)
            stage[0x4D + i] = m[0x10 + 0x14 * i];                      // 0x020AFF29
        if (!save.MissionCleared(_missionId))
        {
            if ((sbyte)m[5] != -1) stage[3] = m[5];                   // 0x020AFEDF
            if ((sbyte)m[6] != -1) stage[4] = m[6];                   // 0x020AFEE0
        }
    }

    private void Finish()
    {
        _game.Platform.Sound.FadeOutMusic(0);                         // 0x0214D1E0
        _game.Globals.Director.ExitCode = _exitCode;                  // DAT_020AFCB8
        Finished = true;
    }

    private void Draw()
    {
        var p = _game.Platform;
        p.TopScreen.Clear(0xFF000000);
        p.BottomScreen.Clear(0xFF000000);
        if (_clearListPage)
        {
            // The original JGalaxyClearList_Create is 0x0214E6E8, using the mission's
            // up-to-six subgoals at +0x0B/+0x10 and save +0x3DCC bit flags.
            var panel = new TextCanvas(_font, 248, 160);
            panel.Print(_data.Stages[_stageId].Name);
            panel.NewLine();
            panel.Print("Mission progress");
            for (int i = 0; i < _missionRecord[0x0B] && i < 6; i++)
            {
                panel.NewLine();
                panel.Print($"{i + 1}: {(((_game.Globals.Save.Image.Data[0x3DCC + _missionId] >> i) & 1) != 0 ? "Clear" : "--")}");
            }
            panel.Draw(p.BottomScreen, 8, 8);
            Label(p.BottomScreen, 164, "B/X: Return");
        }
        else
        {
            var panel = new TextCanvas(_font, 248, 128);
            panel.Print(_data.Planets[_planetId].Name);
            panel.NewLine();
            panel.Print(_data.Stages[_stageId].Name);
            panel.NewLine();
            panel.Print($"Mission {_missionId + 1}");
            panel.Draw(p.TopScreen, 8, 8);
            Label(p.BottomScreen, 12, "Stage information");
            Label(p.BottomScreen, 145, "A: Start  B: Back  X: Details");
        }
    }

    private void Label(IScreen screen, int y, string text)
    {
        var canvas = new TextCanvas(_font, 248, 24);
        canvas.Print(text);
        canvas.Draw(screen, 8, y);
    }
}
