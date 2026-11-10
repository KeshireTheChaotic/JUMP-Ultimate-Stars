// SPDX-License-Identifier: LGPL-2.1-or-later
// Container reader for Actimagine VX (.vx) files. See COPYING.LGPL.md.
using System.Buffers.Binary;

namespace Jus.Video.Vx;

/// <summary>"VXDS" container, as found in JUS (opening/opening.vx):
/// +0x04 frames, +0x08 width, +0x0C height, +0x10 frame rate (16.16), +0x14 quantizer,
/// +0x18 audio sample rate, +0x1C audio streams, +0x20 max frame size, +0x24 audio codebook offset
/// (3124 bytes), +0x28 seek table offset, +0x2C seek entries; frame blocks from 0x30:
/// [u16 size][u16 audio frames][size-2 bytes: video bitstream, then 16-bit aligned audio].
/// (The MultimediaWiki lists the frame-rate and quantizer fields the other way round; this
/// layout is the one that decodes this file: quantizer 35, 30 fps.)</summary>
public sealed class VxFile
{
    private readonly byte[] _data;
    private readonly int[] _blocks;

    public VxFile(byte[] data)
    {
        if (data.Length < 0x30 || data[0] != 'V' || data[1] != 'X' || data[2] != 'D' || data[3] != 'S')
            throw new InvalidDataException("not a VXDS file");
        _data = data;
        FrameCount = I32(0x04);
        Width = I32(0x08);
        Height = I32(0x0C);
        FrameRate = I32(0x10) / 65536.0;
        Quantizer = I32(0x14);
        SampleRate = I32(0x18);
        AudioStreams = I32(0x1C);
        AudioCodebookOffset = I32(0x24);
        _blocks = new int[FrameCount];
        int o = 0x30;
        for (int i = 0; i < FrameCount; i++)
        {
            _blocks[i] = o;
            o += BinaryPrimitives.ReadUInt16LittleEndian(data.AsSpan(o)) + 2;
            if (o > data.Length) throw new InvalidDataException($"frame block {i} runs past the end of the file");
        }
    }

    private int I32(int o) => BinaryPrimitives.ReadInt32LittleEndian(_data.AsSpan(o));

    public int FrameCount { get; }
    public int Width { get; }
    public int Height { get; }
    public double FrameRate { get; }
    public int Quantizer { get; }
    public int SampleRate { get; }
    public int AudioStreams { get; }
    public int AudioCodebookOffset { get; }

    /// <summary>Number of 128-sample audio frames stored with video frame <paramref name="i"/>.</summary>
    public int AudioFrames(int i) => BinaryPrimitives.ReadUInt16LittleEndian(_data.AsSpan(_blocks[i] + 2));

    /// <summary>Video bitstream followed by audio data of frame <paramref name="i"/>.</summary>
    public ReadOnlySpan<byte> Packet(int i) =>
        _data.AsSpan(_blocks[i] + 4, BinaryPrimitives.ReadUInt16LittleEndian(_data.AsSpan(_blocks[i])) - 2);

    public VxDecoder CreateDecoder() => new(Width, Height, Quantizer);

    /// <summary>The audio codebook (3,124 = 0xC34 bytes at +0x24's offset).</summary>
    public ReadOnlySpan<byte> AudioCodebook => _data.AsSpan(AudioCodebookOffset, VxAudioDecoder.CodebookSize);

    public VxAudioDecoder CreateAudioDecoder() => new(AudioCodebook);
}
