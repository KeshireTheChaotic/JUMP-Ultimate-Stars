using Jus.Game.Assets;
using Jus.Game.Engine;

namespace Jus.Game.Scenes.Ov00;

/// <summary>
/// Scene 20, Ending.cpp (overlay 0): Ending_Add 0x0214E860, work 0x20 bytes, archive ending/ending.aar.
///
/// Three parts run one after the other (+0x19 current, +0x1A next), each with create / start / end
/// functions: 0 EndingPiece (create FUN_0215B8B8, start FUN_0215BDA0, end FUN_0215BEB4), 1
/// EndingStaffRoll (FUN_0215E2BC, 0x0215EBC4, FUN_0215ED2C), 2 EndingCopyright (0x0215F6E4,
/// FUN_0215FDA0, FUN_0215FE08). Ending_Add creates part 0, starts music 1 (FUN_020734e0(1) +
/// FUN_0207361c(1, 0)) and fades in from black (2, 1).
/// - Task 0x0214E9A8: when the fade is done, start the current part; parts 0 and 1 then get the skip
///   task 0x0214EA34, part 2 none.
/// - Skip 0x0214EA34: only with progress flag 8 (ending seen, set by the scene's exit 0x0206F3A8): the
///   pad trigger exactly Start (0x8000), or a touch (FUN_020208EC(0) vfunc 0x130, inferred) → go to part 2.
/// - FUN_0214EC4C(next) (also called by a part when it ends): unless a change is already under way
///   (+0x18), fade to black (3, 1) and switch with task 0x0214EAC0: end the current part, create the
///   next, fade in again (2, 1); after part 2 (next = 3) stop the music (FUN_020735e4) and finish.
///
/// Part 2 (EndingCopyright) is translated: top screen BG2 ending/hyouki_bg over BG3
/// ending/hyouki_galaxy, shown when the part starts; bottom screen five strips ending/copyright00..04
/// (on sub BG2/BG3 alternately) placed at y = 192 + 256·k, each moving up 0.5 px per frame (0x0215FEC0)
/// and visible only while −256 &lt; y &lt; 192; the part ends when no strip is visible any more (root task
/// 0x0215FE4C, which runs before the strips each frame).
///
/// Stand-ins: parts 0 (EndingPiece, ~55 KB of decompiled code: series pieces, sakuhin_chr, illust_00..13)
/// and 1 (EndingStaffRoll: ending/StaffRoll.bin pages of up to 7 lines on both screens, 180-frame pages,
/// staff_back00.. backgrounds moved with the 'D2' interpolator, which is not read yet) are not
/// translated: they show their name and end with A (or the skip). FUN_02041F7C(DAT_020a0f64, 1/0)
/// around the scene is not identified.
/// </summary>
public sealed class EndingScene : ISceneTask
{
    private enum Step { FadeIn, Running, FadeOut }

    private readonly JusGame _game;
    private readonly ResourceManager _res;
    private Step _step = Step.FadeIn;
    private bool _changing;                  // +0x18
    private int _next;                       // +0x1A
    private bool _skipActive;
    private CopyrightPart? _copyright;

    /// <summary>+0x19: the current part (0 Piece, 1 StaffRoll, 2 Copyright).</summary>
    public int Part { get; private set; }
    public bool Finished { get; private set; }
    public CopyrightPart? Copyright => _copyright;

    public EndingScene(JusGame game)
    {
        _game = game;
        _res = new ResourceManager(game.Platform.Assets);
        _res.Mount("ending/ending.aar");
        Create(0);
        game.PlayMusic(1, 0);
        game.Fade.Start(FadeKind.FromBlack, 1);
    }

    public void Update()
    {
        if (Finished) return;
        bool fadeDone = _game.Fade.Step();
        switch (_step)
        {
            case Step.FadeIn:
                if (!fadeDone) break;
                if (Part == 2) _copyright!.Start();                         // FUN_0215FDA0
                _changing = false;
                _skipActive = Part < 2;
                _step = Step.Running;
                break;
            case Step.Running:
                var input = _game.Platform.Input;
                if (_skipActive && (_game.Globals.Save.ProgressFlags & 8) != 0 && (input.Trigger == PadButtons.Start || input.TouchTrigger))
                {
                    Request(2);                                              // 0x0214EA34
                    _changing = true;
                }
                else if (Part < 2 && (input.Trigger & PadButtons.A) != 0) Request(Part + 1);   // stand-in end of parts 0/1
                else if (Part == 2 && _copyright!.Update()) Request(3);
                break;
            case Step.FadeOut:
                if (!fadeDone) break;                                        // task 0x0214EAC0
                Part = _next;
                if (Part == 3)
                {
                    _game.Platform.Sound.FadeOutMusic(0);                    // FUN_020735e4
                    Finished = true;
                    return;
                }
                Create(Part);
                _game.Fade.Start(FadeKind.FromBlack, 1);
                _step = Step.FadeIn;
                break;
        }
        Draw();
    }

    /// <summary>FUN_0214EC4C(this, next).</summary>
    private void Request(int next)
    {
        if (_changing) return;
        _game.Fade.Start(FadeKind.ToBlack, 1);
        _next = next;
        _step = Step.FadeOut;
        _skipActive = false;
    }

    private void Create(int part)
    {
        if (part == 2) _copyright = new CopyrightPart(_res);                 // ALNodeImp::Create 0x0215F6E4
        else _game.Platform.Log($"Ending: part {part} ({(part == 0 ? "EndingPiece" : "EndingStaffRoll")}) is not translated (stand-in)");
    }

    private void Draw()
    {
        var top = _game.Platform.TopScreen;
        var bottom = _game.Platform.BottomScreen;
        if (Part == 2 && _copyright is not null)
        {
            _copyright.Draw(top, bottom);
            return;
        }
        top.Clear(0xFF000000);
        bottom.Clear(0xFF000000);
        top.DrawText(8, 8, Part == 0 ? "EndingPiece (not translated)" : "EndingStaffRoll (not translated)");
        bottom.DrawText(8, 8, "A: next part (stand-in)");
    }

    /// <summary>EndingCopyright (EndingCopyright.cpp; work 0x24: +0 root, +4 hyouki_bg, +8 hyouki_galaxy,
    /// +0xC..+0x1C the five strips, +0x20 the owner).</summary>
    public sealed class CopyrightPart
    {
        private readonly TileBackground _bg, _galaxy;
        private readonly TileBackground[] _strips = new TileBackground[5];
        private readonly int[] _y = new int[5];                              // 20.12
        private readonly bool[] _visible = [true, true, true, true, true];
        private bool _started;

        public CopyrightPart(ResourceManager res)
        {
            _bg = new TileBackground(DsigImage.Load(res, "ending/hyouki_bg.dig"), AltmMap.Load(res, "ending/hyouki_bg.atm")) { Visible = false };
            _galaxy = new TileBackground(DsigImage.Load(res, "ending/hyouki_galaxy.dig"), AltmMap.Load(res, "ending/hyouki_galaxy.atm")) { Visible = false };
            for (int k = 0; k < 5; k++)
            {
                _strips[k] = new TileBackground(DsigImage.Load(res, $"ending/copyright0{k}.dig"), AltmMap.Load(res, $"ending/copyright0{k}.atm"));
                _y[k] = (k * 0x100 + 0xC0) << 12;
            }
        }

        public int StripY(int k) => _y[k];
        public bool StripVisible(int k) => _visible[k];

        /// <summary>FUN_0215FDA0: resume the tasks, show the top screen's layers.</summary>
        public void Start()
        {
            _started = true;
            _bg.Visible = _galaxy.Visible = true;
        }

        /// <summary>One frame: the root check 0x0215FE4C, then each strip's task 0x0215FEC0. True when the
        /// part has ended.</summary>
        public bool Update()
        {
            if (!_started) return false;
            if (!_visible.Contains(true)) return true;
            for (int k = 0; k < 5; k++)
            {
                _y[k] -= 0x800;
                _visible[k] = !(_y[k] < -0xFFFFF || _y[k] > 0xBFFFF);
            }
            return false;
        }

        public void Draw(IScreen top, IScreen bottom)
        {
            top.Clear(0xFF000000);
            if (_galaxy.Visible) _galaxy.DrawAt(top, 0, 0);
            if (_bg.Visible) _bg.DrawAt(top, 0, 0);
            bottom.Clear(0xFF000000);
            if (!_started) return;
            foreach (int k in new[] { 1, 3, 0, 2, 4 })                       // sub BG3 (01, 03) behind BG2 (00, 02, 04)
                if (_visible[k]) _strips[k].DrawAt(bottom, 0, _y[k] >> 12);
        }
    }
}
