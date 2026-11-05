// SPDX-License-Identifier: LGPL-2.1-or-later
// Port of FFmpeg's 8-bit H.264 4x4 intra prediction (h264pred_template.c) and
// ff_h264_idct_add (h264idct_template.c) as used by the Actimagine VX decoder. See COPYING.LGPL.md.
namespace Jus.Video.Vx;

internal static class Intra4x4
{
    /// <summary>VX predict4 modes: 0 vertical, 1 horizontal, 2 dc (edge-dependent variant),
    /// 3 diagonal-down-left, 4 diagonal-down-right, 5 vertical-right, 6 horizontal-down,
    /// 7 vertical-left, 8 horizontal-up.</summary>
    public static void Predict(Plane p, int x, int y, int mode)
    {
        int T(int i) => p[x + i, y - 1];          // top row; i = 4..7 is the top-right (as FFmpeg reads it)
        int L(int i) => p[x - 1, y + i];
        int LT() => p[x - 1, y - 1];
        void S(int px, int py, int v) => p[x + px, y + py] = (byte)v;

        switch (mode)
        {
            case 0:
                for (int j = 0; j < 4; j++) for (int i = 0; i < 4; i++) S(i, j, T(i));
                break;
            case 1:
                for (int j = 0; j < 4; j++) { int l = L(j); for (int i = 0; i < 4; i++) S(i, j, l); }
                break;
            case 2:
            {
                int dc;
                if (x == 0 && y == 0) dc = 128;                                              // DC_128_PRED
                else if (x == 0) dc = (T(0) + T(1) + T(2) + T(3) + 2) >> 2;                 // TOP_DC_PRED
                else if (y == 0) dc = (L(0) + L(1) + L(2) + L(3) + 2) >> 2;                 // LEFT_DC_PRED
                else dc = (T(0) + T(1) + T(2) + T(3) + L(0) + L(1) + L(2) + L(3) + 4) >> 3;  // DC_PRED
                for (int j = 0; j < 4; j++) for (int i = 0; i < 4; i++) S(i, j, dc);
                break;
            }
            case 3:
            {
                int t0 = T(0), t1 = T(1), t2 = T(2), t3 = T(3), t4 = T(4), t5 = T(5), t6 = T(6), t7 = T(7);
                S(0, 0, (t0 + 2 * t1 + t2 + 2) >> 2);
                int v = (t1 + 2 * t2 + t3 + 2) >> 2; S(1, 0, v); S(0, 1, v);
                v = (t2 + 2 * t3 + t4 + 2) >> 2; S(2, 0, v); S(1, 1, v); S(0, 2, v);
                v = (t3 + 2 * t4 + t5 + 2) >> 2; S(3, 0, v); S(2, 1, v); S(1, 2, v); S(0, 3, v);
                v = (t4 + 2 * t5 + t6 + 2) >> 2; S(3, 1, v); S(2, 2, v); S(1, 3, v);
                v = (t5 + 2 * t6 + t7 + 2) >> 2; S(3, 2, v); S(2, 3, v);
                S(3, 3, (t6 + 3 * t7 + 2) >> 2);
                break;
            }
            case 4:
            {
                int lt = LT(), l0 = L(0), l1 = L(1), l2 = L(2), l3 = L(3), t0 = T(0), t1 = T(1), t2 = T(2), t3 = T(3);
                S(0, 3, (l3 + 2 * l2 + l1 + 2) >> 2);
                int v = (l2 + 2 * l1 + l0 + 2) >> 2; S(0, 2, v); S(1, 3, v);
                v = (l1 + 2 * l0 + lt + 2) >> 2; S(0, 1, v); S(1, 2, v); S(2, 3, v);
                v = (l0 + 2 * lt + t0 + 2) >> 2; S(0, 0, v); S(1, 1, v); S(2, 2, v); S(3, 3, v);
                v = (lt + 2 * t0 + t1 + 2) >> 2; S(1, 0, v); S(2, 1, v); S(3, 2, v);
                v = (t0 + 2 * t1 + t2 + 2) >> 2; S(2, 0, v); S(3, 1, v);
                S(3, 0, (t1 + 2 * t2 + t3 + 2) >> 2);
                break;
            }
            case 5:
            {
                int lt = LT(), l0 = L(0), l1 = L(1), l2 = L(2), t0 = T(0), t1 = T(1), t2 = T(2), t3 = T(3);
                int v = (lt + t0 + 1) >> 1; S(0, 0, v); S(1, 2, v);
                v = (t0 + t1 + 1) >> 1; S(1, 0, v); S(2, 2, v);
                v = (t1 + t2 + 1) >> 1; S(2, 0, v); S(3, 2, v);
                S(3, 0, (t2 + t3 + 1) >> 1);
                v = (l0 + 2 * lt + t0 + 2) >> 2; S(0, 1, v); S(1, 3, v);
                v = (lt + 2 * t0 + t1 + 2) >> 2; S(1, 1, v); S(2, 3, v);
                v = (t0 + 2 * t1 + t2 + 2) >> 2; S(2, 1, v); S(3, 3, v);
                S(3, 1, (t1 + 2 * t2 + t3 + 2) >> 2);
                S(0, 2, (lt + 2 * l0 + l1 + 2) >> 2);
                S(0, 3, (l0 + 2 * l1 + l2 + 2) >> 2);
                break;
            }
            case 6:
            {
                int lt = LT(), l0 = L(0), l1 = L(1), l2 = L(2), l3 = L(3), t0 = T(0), t1 = T(1), t2 = T(2);
                int v = (lt + l0 + 1) >> 1; S(0, 0, v); S(2, 1, v);
                v = (l0 + 2 * lt + t0 + 2) >> 2; S(1, 0, v); S(3, 1, v);
                S(2, 0, (lt + 2 * t0 + t1 + 2) >> 2);
                S(3, 0, (t0 + 2 * t1 + t2 + 2) >> 2);
                v = (l0 + l1 + 1) >> 1; S(0, 1, v); S(2, 2, v);
                v = (lt + 2 * l0 + l1 + 2) >> 2; S(1, 1, v); S(3, 2, v);
                v = (l1 + l2 + 1) >> 1; S(0, 2, v); S(2, 3, v);
                v = (l0 + 2 * l1 + l2 + 2) >> 2; S(1, 2, v); S(3, 3, v);
                S(0, 3, (l2 + l3 + 1) >> 1);
                S(1, 3, (l1 + 2 * l2 + l3 + 2) >> 2);
                break;
            }
            case 7:
            {
                int t0 = T(0), t1 = T(1), t2 = T(2), t3 = T(3), t4 = T(4), t5 = T(5), t6 = T(6);
                S(0, 0, (t0 + t1 + 1) >> 1);
                int v = (t1 + t2 + 1) >> 1; S(1, 0, v); S(0, 2, v);
                v = (t2 + t3 + 1) >> 1; S(2, 0, v); S(1, 2, v);
                v = (t3 + t4 + 1) >> 1; S(3, 0, v); S(2, 2, v);
                S(3, 2, (t4 + t5 + 1) >> 1);
                S(0, 1, (t0 + 2 * t1 + t2 + 2) >> 2);
                v = (t1 + 2 * t2 + t3 + 2) >> 2; S(1, 1, v); S(0, 3, v);
                v = (t2 + 2 * t3 + t4 + 2) >> 2; S(2, 1, v); S(1, 3, v);
                v = (t3 + 2 * t4 + t5 + 2) >> 2; S(3, 1, v); S(2, 3, v);
                S(3, 3, (t4 + 2 * t5 + t6 + 2) >> 2);
                break;
            }
            case 8:
            {
                int l0 = L(0), l1 = L(1), l2 = L(2), l3 = L(3);
                S(0, 0, (l0 + l1 + 1) >> 1);
                S(1, 0, (l0 + 2 * l1 + l2 + 2) >> 2);
                int v = (l1 + l2 + 1) >> 1; S(2, 0, v); S(0, 1, v);
                v = (l1 + 2 * l2 + l3 + 2) >> 2; S(3, 0, v); S(1, 1, v);
                v = (l2 + l3 + 1) >> 1; S(2, 1, v); S(0, 2, v);
                v = (l2 + 3 * l3 + 2) >> 2; S(3, 1, v); S(1, 2, v);
                S(3, 2, l3); S(1, 3, l3); S(0, 3, l3); S(2, 2, l3); S(2, 3, l3); S(3, 3, l3);
                break;
            }
            default:
                throw new InvalidDataException("invalid predict4 mode");
        }
    }

    /// <summary>ff_h264_idct_add_8: 4x4 inverse transform of <paramref name="block"/> (values kept
    /// as int16 like FFmpeg) added to the plane at (x, y) with clipping.</summary>
    public static void IdctAdd(Plane p, int x, int y, Span<int> block)
    {
        block[0] = (short)(block[0] + (1 << 5));
        for (int i = 0; i < 4; i++)
        {
            int z0 = block[i] + block[i + 8], z1 = block[i] - block[i + 8];
            int z2 = (block[i + 4] >> 1) - block[i + 12], z3 = block[i + 4] + (block[i + 12] >> 1);
            block[i] = (short)(z0 + z3);
            block[i + 4] = (short)(z1 + z2);
            block[i + 8] = (short)(z1 - z2);
            block[i + 12] = (short)(z0 - z3);
        }
        for (int i = 0; i < 4; i++)
        {
            int z0 = block[4 * i] + block[2 + 4 * i], z1 = block[4 * i] - block[2 + 4 * i];
            int z2 = (block[1 + 4 * i] >> 1) - block[3 + 4 * i], z3 = block[1 + 4 * i] + (block[3 + 4 * i] >> 1);
            Add(p, x + i, y + 0, (z0 + z3) >> 6);
            Add(p, x + i, y + 1, (z1 + z2) >> 6);
            Add(p, x + i, y + 2, (z1 - z2) >> 6);
            Add(p, x + i, y + 3, (z0 - z3) >> 6);
        }
    }

    private static void Add(Plane p, int x, int y, int d) => p[x, y] = (byte)Math.Clamp(p[x, y] + d, 0, 255);
}
