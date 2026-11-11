using Jus.Game.Assets;
using Jus.Game.Engine;

namespace Jus.Game.Scenes.Ov04;

/// <summary>
/// Native ov04 J Quiz controller. The scene wrappers at 0x0214CE1C/34/4C pass
/// (mode, initial dispatch, arg) = (0,1,0)/(1,5,0)/(2,9,0).
/// The 10-entry dispatch array at 0x0216038C and controller 0x0214CF9C
/// dispatch subscenes; index zero finishes with controller +0xC exit code.
///
/// Translated: archive-backed questions (0x0214EFB0, 0x0214F638, 0x02153B58),
/// session flag at 0x020AFE40 (+0xE, 0x0214EFB0), top menu selection
/// (0x02151FF8/0x02151F0C), answer mixing/checking (0x021532F4,
/// 0x02153340), timer (0x0215A070), outcome sound/score (0x02159AB8),
/// next-question logic (0x02159D78), story-mode exit (0x02159ED0),
/// fades and BGM (0x0214FC10/78, 0x021597BC).
///
/// Explicit stand-ins: the original scene's dynamic widget actors, quiz
/// character sprites, and network battle logic are not yet translated.
/// No invented quiz questions or graphics are used. Keyboard/touch hit boxes,
/// temporary status text, deterministic layout offsets and local RNG are
/// *inferred* port controls, not asserted to be original ARM behavior.
/// </summary>
public sealed class JQuizScene : ISceneTask
{
    private enum Screen { Top, Rules, Start, Question, Result }
    private enum Phase { FadeIn, Active, FadeOut, Exiting }

    public const int QuestionFrames = 600;                      // FUN_021592B0, FUN_0215A034
    public const int StoryQuestionCount = 10;                    // JQuizJGalaxyMode 0x0215A128
    private const int AnswerRevealFrames = 30;                  // inferred: animations not translated
    private const int StartStandInFrames = 30;                   // inferred: StartCore widget wait

    private readonly JusGame _game;
    private readonly int _mode;
    private readonly JQuizData _data;
    private readonly AlftFont _quizFont;
    private readonly ResourceManager _resources;
    private readonly Random _random;
    private readonly List<JQuizData.Question> _round = [];
    private readonly TextCanvas[] _questionText = new TextCanvas[4];
    private readonly TextCanvas[] _answerText = new TextCanvas[4];
    private readonly int[] _answerOrder = [0, 1, 2, 3];
    private TileBackground? _topBackground, _bottomBackground;
    private JQuizImage? _illustration;
    private readonly List<SpriteActor> _nativeActors = [];
    private bool _nativeActorsOnBottom;
    private Screen _screen;
    private Screen _nextScreen;
    private Phase _phase = Phase.FadeIn;
    private int _frames;
    private int _cursor;
    private int _questionIndex;
    private int _timeLeft = QuestionFrames;
    private int _revealLeft = -1;
    private int _exitCode;
    private int _selectedCount = StoryQuestionCount;
    private bool _paused;
    private bool _lastCorrect;
    private bool _battleUnsupportedLogged;

    public JQuizScene(JusGame game, SceneId scene, int? randomSeed = null)
    {
        if (scene is not (SceneId.JQuiz18 or SceneId.JQuiz31 or SceneId.JQuiz40))
            throw new ArgumentOutOfRangeException(nameof(scene));
        _game = game;
        _mode = scene == SceneId.JQuiz31 ? 0 : scene == SceneId.JQuiz40 ? 1 : 2;
        _resources = new ResourceManager(game.Platform.Assets);
        _resources.Mount("jquiz/jquiz_pack.aar");
        _data = new JQuizData(_resources.Read("jquiz/jquiz.bin"));
        _quizFont = AlftFont.Load(game.Platform.Assets, "font/jskfont_q.aft");
        _random = randomSeed is { } seed ? new Random(seed) : Random.Shared;
        SecretEnabled = game.Globals.Session.Unk00 != 0;         // FUN_02070D54 / 0x0214EFB0
        if (_mode == 2) SelectQuestions(StoryQuestionCount);     // JGalaxy state 9
        SetScreen(_mode switch { 0 => Screen.Top, 1 => Screen.Rules, _ => Screen.Question });
        game.Fade.Start(FadeKind.FromBlack, 1);                 // FUN_02073EBC(2,1)
    }

    public bool SecretEnabled { get; }
    public bool Finished { get; private set; }
    public int Mode => _mode;
    public int InitialDispatch => _mode switch { 0 => 1, 1 => 5, _ => 9 };
    public int QuestionCount => _round.Count;
    public int QuestionIndex => _questionIndex;
    public int CorrectAnswers { get; private set; }
    public int Score => CorrectAnswers * 5;                    // FUN_0214F9F0
    public int TimeLeft => _timeLeft;
    public bool Paused => _paused;
    public string ScreenName => _screen.ToString();
    public JQuizData.Question? CurrentQuestion => _questionIndex < _round.Count ? _round[_questionIndex] : null;
    public int[] AnswerPermutation => (int[])_answerOrder.Clone();

    public void Update()
    {
        if (Finished) return;
        switch (_phase)
        {
            case Phase.FadeIn:
                if (_game.Fade.Step()) { _phase = Phase.Active; _frames = 0; }
                break;
            case Phase.FadeOut:
                if (_game.Fade.Step())
                {
                    SetScreen(_nextScreen);
                    _game.Fade.Start(FadeKind.FromBlack, 1);
                    _phase = Phase.FadeIn;
                }
                break;
            case Phase.Exiting:
                if (_game.Fade.Step())
                {
                    _game.Platform.Sound.FadeOutMusic(0);         // 0x0214FB48
                    _game.Globals.Director.ExitCode = _exitCode;
                    Finished = true;
                }
                break;
            case Phase.Active:
                _frames++;
                switch (_screen)
                {
                    case Screen.Top: UpdateTop(); break;
                    case Screen.Rules: UpdateRules(); break;
                    case Screen.Start:
                        if (_frames >= StartStandInFrames) ChangeScreen(Screen.Question);
                        break;
                    case Screen.Question: UpdateQuestion(); break;
                    case Screen.Result: UpdateResult(); break;
                }
                break;
        }
        foreach (var actor in _nativeActors) actor.Update();
        Draw();
    }

    private void SetScreen(Screen screen)
    {
        _screen = screen;
        _frames = 0;
        _topBackground = null;
        _bottomBackground = null;
        _nativeActors.Clear();
        _nativeActorsOnBottom = screen is Screen.Top or Screen.Rules;
        string image = screen switch
        {
            Screen.Top => "top00",
            Screen.Rules => "com_rule00",
            Screen.Question or Screen.Start => "quiz00",
            Screen.Result => "result00",
            _ => throw new ArgumentOutOfRangeException(nameof(screen))
        };
        // 0x0214D208 swaps main engine to bottom for Top/Rule; 0x0214DCD4
        // restores main engine to top for quiz (0x021592B0).
        var bg = new TileBackground(
            DsigImage.Load(_resources, $"jquiz/{image}.dig"),
            AltmMap.Load(_resources, $"jquiz/{image}.atm"));
        if (screen is Screen.Top or Screen.Rules)
            _bottomBackground = bg;
        else
            _topBackground = bg;
        if (screen == Screen.Question || screen == Screen.Start)
        {
            // FUN_021592B0: sub engine BG2 uses quiz00_b.
            _bottomBackground = new TileBackground(
                DsigImage.Load(_resources, "jquiz/quiz00_b.dig"),
                AltmMap.Load(_resources, "jquiz/quiz00_b.atm"));
            if (screen == Screen.Question && _round.Count > 0) PrepareQuestion();
            if (screen == Screen.Question) _game.PlayMusic(7, 0); // FUN_0214FC78
        }
        if (screen == Screen.Top)
        {
            // JQuizTop_Add 0x02150FF0: three button actors, resource group
            // 0x810000 indices 2..4, at (48+80*i, 97), native ALMT animation.
            AddNativeActors("jquiz/top_obj_3d.aar", 0x810000,
                [(0x810002, 48, 97), (0x810003, 128, 97), (0x810004, 208, 97)]);
        }
        if (screen == Screen.Question)
        {
            // JQuizMainSinglePlay_Add 0x021592B0: native main overlay actor.
            AddNativeActors("jquiz/quiz_obj_a_3d.aar", 0x810000,
                [(0x81003B, 24, 168)]);
        }
        if (screen == Screen.Top || screen == Screen.Rules)
            _game.PlayMusic(2, 0);                              // FUN_0214FC10
        if (screen == Screen.Result)
            _game.PlayMusic(CorrectAnswers > 0 ? 0x30 : 0x31, 0); // FUN_0214FC34
    }

    private void AddNativeActors(string archivePath, int group,
        IReadOnlyList<(int Id, int X, int Y)> placements)
    {
        // Each nested archive uses the same 0x810000 group, so resolve its
        // ALAR bank locally instead of polluting ResourceManager lookup scope.
        var archive = new AlarArchive(_resources.Read(archivePath));
        var texture = archive.Find(group, (byte)'@') ??
            throw new InvalidDataException($"Missing quiz sprite group 0x{group:X6}");
        var animation = archive.Find(group, (byte)'A') ??
            throw new InvalidDataException($"Missing quiz animation group 0x{group:X6}");
        var bank = new DstxBank(archive.Read(texture));
        var motions = new AlmtMotionSet(archive.Read(animation));
        foreach (var (id, x, y) in placements)
            _nativeActors.Add(new SpriteActor(bank, motions, id) { X = x, Y = y });
    }

    private void ChangeScreen(Screen next)
    {
        _nextScreen = next;
        _game.Fade.Start(FadeKind.ToBlack, 1);                  // 0x02152110 / 0x021597BC
        _phase = Phase.FadeOut;
    }

    private void Exit(int code)
    {
        _exitCode = code;
        _game.Fade.Start(FadeKind.ToBlack, 1);
        _phase = Phase.Exiting;
    }

    private void UpdateTop()
    {
        var input = _game.Platform.Input;
        if (input.Trigger.HasFlag(PadButtons.Left)) _cursor = (_cursor + 2) % 3;
        if (input.Trigger.HasFlag(PadButtons.Right)) _cursor = (_cursor + 1) % 3;
        if (input.TouchTrigger && input.TouchY is >= 70 and <= 140)
        {
            _cursor = Math.Clamp((input.TouchX - 24) / 80, 0, 2);
            StartFromTop();
        }
        if (input.Trigger.HasFlag(PadButtons.A)) StartFromTop();
        else if (input.Trigger.HasFlag(PadButtons.B))
        {
            _game.Platform.Sound.PlayEffect(0x78, 1);          // FUN_02151F0C
            Exit(0);
        }
    }

    private void StartFromTop()
    {
        _game.Platform.Sound.PlayEffect(0x78, 0);             // FUN_02151FF8
        // FUN_02151FF8 selects a count from the overlay's 0x021603E4
        // literal table. Per agent_brief.md, ROM/overlay tables cannot be
        // copied into source. Until that table is externalized, only the
        // code-immediate ten-question JGalaxy limit is available as a stand-in.
        // No claim is made that alternate top-menu counts behave natively.
        if (_cursor != 0)
            _game.Platform.Log("ov04 top quiz: non-default question-count table is embedded in native overlay; using 10-question stand-in");
        _selectedCount = StoryQuestionCount;
        SelectQuestions(_selectedCount);
        ChangeScreen(Screen.Start);                            // dispatcher 2, 0x02153120
    }

    private void UpdateRules()
    {
        var input = _game.Platform.Input;
        if (input.Trigger.HasFlag(PadButtons.B))
        {
            _game.Platform.Sound.PlayEffect(0x78, 1);         // FUN_0215E308
            Exit(0);                                         // disconnection path stand-in
        }
        else if (input.Trigger.HasFlag(PadButtons.A) && !_battleUnsupportedLogged)
        {
            _game.Platform.Sound.PlayEffect(0x78, 0);         // FUN_0215E36C
            _battleUnsupportedLogged = true;
            _game.Platform.Log("ov04: battle mode requires untranslated wireless communication; network session not simulated");
        }
    }

    private void SelectQuestions(int count)
    {
        // FUN_0214F310 applies progress unlock and difficulty gates.
        // FUN_0214F380 shuffles an eligible pool. The original RNG and the
        // story-mode category-selection table (0x02160520) are still unported;
        // this data-driven selection is an explicitly inferred stand-in.
        var candidates = _data.Eligible(_game.Globals.Save.Image.Data).ToList();
        _round.Clear();
        for (int i = 0; i < count && candidates.Count > 0; i++)
        {
            int k = _random.Next(candidates.Count);
            _round.Add(candidates[k]);
            candidates[k] = candidates[^1];
            candidates.RemoveAt(candidates.Count - 1);
        }
        if (_round.Count == 0)
            throw new InvalidDataException("No questions unlocked in jquiz/jquiz.bin");
        CorrectAnswers = 0;
        _questionIndex = 0;
        _paused = false;
    }

    private void PrepareQuestion()
    {
        _timeLeft = QuestionFrames;
        _revealLeft = -1;
        _lastCorrect = false;
        for (int i = 0; i < _answerOrder.Length; i++) _answerOrder[i] = i;
        for (int i = 3; i > 0; i--)
        {
            int j = _random.Next(i + 1);
            (_answerOrder[j], _answerOrder[i]) = (_answerOrder[i], _answerOrder[j]);
        }
        var question = _round[_questionIndex];
        _illustration = JQuizImage.Load(_resources, question.Image); // 0x021537A4
        for (int i = 0; i < 4; i++)
        {
            var q = new TextCanvas(_quizFont, 224, 16) { PaletteIndex = 6 };
            q.Print(question.Lines[i]);
            _questionText[i] = q;
            var a = new TextCanvas(_quizFont, 224, 32) { PaletteIndex = 6 };
            a.Print(question.Answers[_answerOrder[i]]);
            _answerText[i] = a;
        }
    }

    private void UpdateQuestion()
    {
        var input = _game.Platform.Input;
        if (_paused)
        {
            // FUN_02159F7C: pause selection 0 SKIPS the question (does not
            // resume it); 1 RESTARTS from a new shuffled pool; 2 returns to
            // controller state 1 (top screen), not to the Director's exit.
            // The portable A/B/X/Y-to-option mapping below is INFERRED;
            // the native pause menu and its widget navigation remain unported.
            if (input.Trigger.HasFlag(PadButtons.A) || input.Trigger.HasFlag(PadButtons.B))
            {
                _paused = false;
                _game.Platform.Sound.PlayEffect(0x78, input.Trigger.HasFlag(PadButtons.B) ? 1 : 0);
                AdvanceQuestion();                            // native selection 0
                _game.PlayMusic(7, 0);
            }
            else if (input.Trigger.HasFlag(PadButtons.X))
            {
                _paused = false;
                SelectQuestions(_selectedCount);               // native selection 1
                PrepareQuestion();
            }
            else if (input.Trigger.HasFlag(PadButtons.Y))
            {
                _paused = false;
                ChangeScreen(Screen.Top);                     // native selection 2
            }
            return;
        }
        if (_revealLeft >= 0)
        {
            if (_revealLeft-- == 0) AdvanceQuestion();
            return;
        }
        if (input.Trigger.HasFlag(PadButtons.B) || input.Trigger.HasFlag(PadButtons.Start))
        {
            _paused = true;
            return;
        }
        int choice = -1;
        if (input.Trigger.HasFlag(PadButtons.Up)) _cursor = (_cursor + 3) % 4;
        if (input.Trigger.HasFlag(PadButtons.Down)) _cursor = (_cursor + 1) % 4;
        if (input.TouchTrigger)
        {
            // 0x02153BFC: four touch boxes, x=5..250, each y=5+48i..42+48i.
            int row = input.TouchY / 48;
            if (row is >= 0 and < 4 && input.TouchX is >= 5 and <= 250 &&
                input.TouchY >= 5 + 48 * row && input.TouchY <= 42 + 48 * row)
                choice = row;
        }
        if (input.Trigger.HasFlag(PadButtons.A)) choice = _cursor;
        if (choice >= 0)
        {
            _cursor = choice;
            ResolveAnswer(choice);
            return;
        }
        // FUN_0215A070: story mode's last question timer is held.
        if (_mode == 2 && _questionIndex == _round.Count - 1) return;
        if (--_timeLeft <= 0) ResolveAnswer(-1);
        else if (_timeLeft / 60 < 5 && _timeLeft % 60 == 0)   // FUN_0215A070: t/60 < 5, remainder 0
            _game.Platform.Sound.PlayEffect(0x7C, 4);
    }

    private void ResolveAnswer(int choice)
    {
        // FUN_02153340: a shuffled choice is correct iff its source index == 0.
        _lastCorrect = choice >= 0 && _answerOrder[choice] == 0;
        if (_lastCorrect)
        {
            CorrectAnswers++;                                  // FUN_0214F79C(1)
            _game.Platform.Sound.PlayEffect(0x7C, 2);          // 0x02159AB8
        }
        else
        {
            _game.Platform.Sound.PlayEffect(0x7C, choice < 0 ? 5 : 3);
        }
        _revealLeft = AnswerRevealFrames;
    }

    private void AdvanceQuestion()
    {
        _questionIndex++;                                      // FUN_02159D78, FUN_0214F65C
        if (_questionIndex < _round.Count) { PrepareQuestion(); return; }
        if (_mode == 2)
        {
            // FUN_02159ED0: zero answers -> exit 3; otherwise exit 2.
            Exit(CorrectAnswers == 0 ? 3 : 2);
        }
        else
        {
            ChangeScreen(Screen.Result);                       // dispatcher state 4
        }
    }

    private void UpdateResult()
    {
        if (!_game.Platform.Input.Trigger.HasFlag(PadButtons.A) &&
            !_game.Platform.Input.Trigger.HasFlag(PadButtons.B) &&
            !_game.Platform.Input.TouchTrigger) return;
        _game.Platform.Sound.PlayEffect(0x78, 0);
        Exit(0);                                               // result selection stand-in
    }

    private void Draw()
    {
        var top = _game.Platform.TopScreen;
        var bottom = _game.Platform.BottomScreen;
        top.Clear(0xFF000000);
        bottom.Clear(0xFF000000);
        _topBackground?.Draw(top);
        _bottomBackground?.Draw(bottom);
        foreach (var actor in _nativeActors)
            actor.Draw(_nativeActorsOnBottom ? bottom : top);
        if (_screen == Screen.Top)
        {
            // Three native ALMT buttons are drawn above. Their additional
            // number labels and animated focus widget are untranslated.
            // No ROM-resident menu-number table is duplicated in C#.
        }
        else if (_screen == Screen.Rules)
        {
            // Native com_rule00 background; network widgets are stand-ins.
            bottom.DrawText(16, 168, _battleUnsupportedLogged ? "Network unavailable in port" : "A: connect   B: back");
        }
        else if (_screen == Screen.Question && CurrentQuestion is not null)
        {
            top.DrawText(8, 8, $"{_questionIndex + 1}/{_round.Count}  {Math.Max(0, _timeLeft / 60)}s");
            _illustration?.Draw(top); // native DTX at (8,50), 0x021537A4
            for (int i = 0; i < 4; i++)
            {
                _questionText[i]?.Draw(top, _illustration is null ? 16 : 112, 64 + 16 * i);
                _answerText[i]?.Draw(bottom, 24, 16 + 48 * i);
                // Inferred marker; answer text positions from 0x021533A0.
                if (_cursor == i) bottom.DrawText(2, 16 + 48 * i, ">");
            }
            if (_paused) bottom.DrawText(8, 174, "Pause: A skip / X restart / Y menu");
            else if (_revealLeft >= 0)
                bottom.DrawText(8, 176, _lastCorrect ? "Correct" : "Incorrect");
        }
        else if (_screen == Screen.Result)
        {
            top.DrawText(16, 120, $"{CorrectAnswers}/{_round.Count}   {Score}");
            bottom.DrawText(16, 168, "A: continue");
        }
    }
}
