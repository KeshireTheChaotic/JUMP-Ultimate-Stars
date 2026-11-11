using System.Buffers.Binary;
using Jus.Game.Assets;

namespace Jus.Game.Scenes.Ov04;

/// <summary>
/// Native jquiz/jquiz.bin records loaded from jquiz/jquiz_pack.aar.
/// JQuizCommonWork_Create (ov04 0x0214EFB0) obtains the record count and pointer;
/// FUN_0214F638 indexes +0x28 records, FUN_02153B58 resolves each relative
/// string pointer as the address of its own field plus the signed displacement.
/// No quiz questions, categories or image names are embedded in this assembly.
/// </summary>
public sealed class JQuizData
{
    public sealed record Question(
        int Index, byte Category, byte Difficulty, short Number,
        string? Image, IReadOnlyList<string> Lines, IReadOnlyList<string> Answers)
    {
        public string Prompt => string.Concat(Lines);
    }

    public IReadOnlyList<Question> Questions { get; }

    public JQuizData(ReadOnlySpan<byte> raw)
    {
        if (raw.Length < 4) throw new InvalidDataException("jquiz.bin lacks its count");
        uint count = BinaryPrimitives.ReadUInt32LittleEndian(raw);
        if (count > (raw.Length - 4) / 0x28)
            throw new InvalidDataException("jquiz.bin record table extends beyond the file");

        var entries = new Question[(int)count];
        for (int i = 0; i < entries.Length; i++)
        {
            int offset = checked(4 + i * 0x28);
            var lines = new string[4];
            var answers = new string[4];
            for (int j = 0; j < 4; j++)
            {
                lines[j] = ReadRelativeString(raw, offset + 8 + j * 4) ?? "";
                answers[j] = ReadRelativeString(raw, offset + 0x18 + j * 4) ?? "";
            }
            entries[i] = new Question(i, raw[offset], raw[offset + 1],
                BinaryPrimitives.ReadInt16LittleEndian(raw.Slice(offset + 2, 2)),
                ReadRelativeString(raw, offset + 4), lines, answers);
        }

        Questions = entries;
    }

    public static JQuizData Load(IAssetSource source)
    {
        var resources = new ResourceManager(source);
        resources.Mount("jquiz/jquiz_pack.aar");
        return new JQuizData(resources.Read("jquiz/jquiz.bin"));
    }

    private static string? ReadRelativeString(ReadOnlySpan<byte> raw, int field)
    {
        int displacement = BinaryPrimitives.ReadInt32LittleEndian(raw.Slice(field, 4));
        if (displacement == 0) return null;
        long start = (long)field + displacement;
        if (start < 0 || start >= raw.Length)
            throw new InvalidDataException($"Invalid quiz text offset at 0x{field:X}");
        var tail = raw[(int)start..];
        int length = tail.IndexOf((byte)0);
        if (length < 0)
            throw new InvalidDataException($"Unterminated quiz text at 0x{start:X}");
        return ShiftJis.Decode(tail[..length]);
    }

    /// <summary>
    /// FUN_0214F310 (ov04 0x0214F310): category zero is always eligible, FF never is;
    /// other categories require the save's unlocked bit (+0x8E4), with difficulty
    /// levels 1–2 allowed only by the expanded bitset (+0xA68).
    /// </summary>
    public IReadOnlyList<Question> Eligible(ReadOnlySpan<byte> save)
    {
        var eligible = new List<Question>();
        foreach (var question in Questions)
        {
            int category = question.Category;
            if (category == 0) { eligible.Add(question); continue; }
            if (category == 0xFF) continue;
            int wordOffset = (category >> 5) * 4;
            if (save.Length < 0xA68 + wordOffset + 4) continue;
            uint bit = 1u << (category & 31);
            if ((BinaryPrimitives.ReadUInt32LittleEndian(save.Slice(0x8E4 + wordOffset, 4)) & bit) == 0)
                continue;
            bool expanded = (BinaryPrimitives.ReadUInt32LittleEndian(save.Slice(0xA68 + wordOffset, 4)) & bit) != 0;
            if (question.Difficulty <= (expanded ? 2 : 0)) eligible.Add(question);
        }
        return eligible;
    }
}
