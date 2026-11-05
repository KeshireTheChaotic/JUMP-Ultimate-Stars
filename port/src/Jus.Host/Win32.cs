using System.Runtime.InteropServices;

namespace Jus.Host;

/// <summary>The few Win32 entry points the host needs (user32/gdi32/winmm/kernel32).</summary>
internal static partial class Win32
{
    public const uint WS_OVERLAPPEDWINDOW = 0x00CF0000, WS_VISIBLE = 0x10000000;
    public const int CW_USEDEFAULT = unchecked((int)0x80000000);
    public const uint WM_DESTROY = 0x0002, WM_SIZE = 0x0005, WM_PAINT = 0x000F, WM_CLOSE = 0x0010,
        WM_KEYDOWN = 0x0100, WM_KEYUP = 0x0101, WM_SYSKEYDOWN = 0x0104, WM_SYSKEYUP = 0x0105,
        WM_MOUSEMOVE = 0x0200, WM_LBUTTONDOWN = 0x0201, WM_LBUTTONUP = 0x0202, WM_KILLFOCUS = 0x0008,
        WM_QUIT = 0x0012;
    public const uint PM_REMOVE = 1;
    public const uint DIB_RGB_COLORS = 0, SRCCOPY = 0x00CC0020;
    public const int COLORONCOLOR = 3, TRANSPARENT = 1;
    public const int IDC_ARROW = 32512;

    public delegate nint WndProc(nint hwnd, uint msg, nint wParam, nint lParam);

    [StructLayout(LayoutKind.Sequential, CharSet = CharSet.Unicode)]
    public struct WNDCLASSEXW
    {
        public uint cbSize, style;
        public nint lpfnWndProc;
        public int cbClsExtra, cbWndExtra;
        public nint hInstance, hIcon, hCursor, hbrBackground;
        public nint lpszMenuName, lpszClassName, hIconSm;
    }

    [StructLayout(LayoutKind.Sequential)]
    public struct MSG { public nint hwnd; public uint message; public nint wParam, lParam; public uint time; public int x, y; }

    [StructLayout(LayoutKind.Sequential)]
    public struct RECT { public int left, top, right, bottom; }

    [StructLayout(LayoutKind.Sequential)]
    public struct PAINTSTRUCT
    {
        public nint hdc; public int fErase; public RECT rcPaint; public int fRestore, fIncUpdate;
        public long r0, r1, r2, r3;
    }

    [StructLayout(LayoutKind.Sequential)]
    public struct BITMAPINFOHEADER
    {
        public uint biSize; public int biWidth, biHeight; public ushort biPlanes, biBitCount;
        public uint biCompression, biSizeImage; public int biXPelsPerMeter, biYPelsPerMeter;
        public uint biClrUsed, biClrImportant;
    }

    [LibraryImport("user32.dll", EntryPoint = "RegisterClassExW", SetLastError = true)]
    public static partial ushort RegisterClassEx(in WNDCLASSEXW wc);

    [LibraryImport("user32.dll", EntryPoint = "CreateWindowExW", SetLastError = true, StringMarshalling = StringMarshalling.Utf16)]
    public static partial nint CreateWindowEx(uint exStyle, string className, string title, uint style,
        int x, int y, int w, int h, nint parent, nint menu, nint instance, nint param);

    [LibraryImport("user32.dll", EntryPoint = "DefWindowProcW")]
    public static partial nint DefWindowProc(nint hwnd, uint msg, nint wParam, nint lParam);

    [LibraryImport("user32.dll", EntryPoint = "PeekMessageW")]
    [return: MarshalAs(UnmanagedType.Bool)]
    public static partial bool PeekMessage(out MSG msg, nint hwnd, uint min, uint max, uint remove);

    [LibraryImport("user32.dll")]
    [return: MarshalAs(UnmanagedType.Bool)]
    public static partial bool TranslateMessage(in MSG msg);

    [LibraryImport("user32.dll", EntryPoint = "DispatchMessageW")]
    public static partial nint DispatchMessage(in MSG msg);

    [LibraryImport("user32.dll")]
    public static partial void PostQuitMessage(int code);

    [LibraryImport("user32.dll")]
    [return: MarshalAs(UnmanagedType.Bool)]
    public static partial bool DestroyWindow(nint hwnd);

    [LibraryImport("user32.dll")]
    [return: MarshalAs(UnmanagedType.Bool)]
    public static partial bool GetClientRect(nint hwnd, out RECT rect);

    [LibraryImport("user32.dll")]
    [return: MarshalAs(UnmanagedType.Bool)]
    public static partial bool AdjustWindowRect(ref RECT rect, uint style, [MarshalAs(UnmanagedType.Bool)] bool menu);

    [LibraryImport("user32.dll")]
    public static partial nint GetDC(nint hwnd);

    [LibraryImport("user32.dll")]
    public static partial int ReleaseDC(nint hwnd, nint hdc);

    [LibraryImport("user32.dll")]
    public static partial nint BeginPaint(nint hwnd, out PAINTSTRUCT ps);

    [LibraryImport("user32.dll")]
    [return: MarshalAs(UnmanagedType.Bool)]
    public static partial bool EndPaint(nint hwnd, in PAINTSTRUCT ps);

    [LibraryImport("user32.dll", EntryPoint = "LoadCursorW")]
    public static partial nint LoadCursor(nint instance, nint name);

    [LibraryImport("user32.dll", EntryPoint = "SetWindowTextW", StringMarshalling = StringMarshalling.Utf16)]
    [return: MarshalAs(UnmanagedType.Bool)]
    public static partial bool SetWindowText(nint hwnd, string text);

    [LibraryImport("gdi32.dll")]
    public static partial nint CreateCompatibleDC(nint hdc);

    [LibraryImport("gdi32.dll")]
    [return: MarshalAs(UnmanagedType.Bool)]
    public static partial bool DeleteDC(nint hdc);

    [LibraryImport("gdi32.dll")]
    public static partial nint SelectObject(nint hdc, nint obj);

    [LibraryImport("gdi32.dll")]
    [return: MarshalAs(UnmanagedType.Bool)]
    public static partial bool DeleteObject(nint obj);

    [LibraryImport("gdi32.dll")]
    public static partial nint CreateDIBSection(nint hdc, in BITMAPINFOHEADER bmi, uint usage, out nint bits, nint section, uint offset);

    [LibraryImport("gdi32.dll")]
    [return: MarshalAs(UnmanagedType.Bool)]
    public static partial bool StretchBlt(nint dst, int x, int y, int w, int h, nint src, int sx, int sy, int sw, int sh, uint rop);

    [LibraryImport("gdi32.dll")]
    public static partial int SetStretchBltMode(nint hdc, int mode);

    [LibraryImport("gdi32.dll")]
    public static partial int SetBkMode(nint hdc, int mode);

    [LibraryImport("gdi32.dll")]
    public static partial uint SetTextColor(nint hdc, uint color);

    [LibraryImport("gdi32.dll", EntryPoint = "TextOutW", StringMarshalling = StringMarshalling.Utf16)]
    [return: MarshalAs(UnmanagedType.Bool)]
    public static partial bool TextOut(nint hdc, int x, int y, string text, int length);

    [LibraryImport("gdi32.dll")]
    public static partial nint GetStockObject(int obj);

    [LibraryImport("gdi32.dll")]
    public static partial nint CreateSolidBrush(uint color);

    [LibraryImport("user32.dll")]
    public static partial int FillRect(nint hdc, in RECT rect, nint brush);

    [LibraryImport("winmm.dll")]
    public static partial uint timeBeginPeriod(uint period);

    [LibraryImport("winmm.dll")]
    public static partial uint timeEndPeriod(uint period);

    [LibraryImport("kernel32.dll", EntryPoint = "GetModuleHandleW")]
    public static partial nint GetModuleHandle(nint name);

    [LibraryImport("user32.dll", EntryPoint = "PostMessageW")]
    [return: MarshalAs(UnmanagedType.Bool)]
    public static partial bool PostMessage(nint hwnd, uint msg, nint wParam, nint lParam);

    public static void SendClose(nint hwnd) => PostMessage(hwnd, WM_CLOSE, 0, 0);

    public static int LoWord(nint v) => (short)((long)v & 0xFFFF);
    public static int HiWord(nint v) => (short)(((long)v >> 16) & 0xFFFF);
}
