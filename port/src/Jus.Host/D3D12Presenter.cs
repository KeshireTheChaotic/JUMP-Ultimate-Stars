using System.Runtime.InteropServices;
using Jus.Game;

namespace Jus.Host;

/// <summary>
/// Direct3D 12 presenter (d3d12.dll / dxgi.dll through raw COM vtables, no bindings): a flip-discard swap
/// chain the size of the client area; each frame the two screens are scaled (nearest) into an upload buffer
/// laid out as the back buffer's footprint, and the GPU copies it into the back buffer
/// (CopyTextureRegion). GPU-side scaling with a pipeline state comes with the 3D work. One frame in flight.
/// </summary>
internal sealed unsafe class D3D12Presenter : IPresenter
{
    private const int Frames = 2, SrcW = IScreen.Width, SrcH = IScreen.Height * 2;
    private readonly nint _hwnd, _factory, _device, _queue, _alloc, _list, _fence, _event;
    private nint _swap, _upload, _readback;
    private readonly nint[] _back = new nint[Frames];
    private ulong _fenceValue;
    private int _w, _h, _pitch, _index;
    private byte* _uploadPtr;
    private string? _capture;
    public string Name { get; }

    public D3D12Presenter(nint hwnd)
    {
        _hwnd = hwnd;
        Check(CreateDXGIFactory2(0, IID_IDXGIFactory4, out _factory), "CreateDXGIFactory2");
        Check(D3D12CreateDevice(0, 0xB000 /* 11_0 */, IID_ID3D12Device, out _device), "D3D12CreateDevice");
        var qd = new QueueDesc();
        nint q, a, l, f;
        Check(((delegate* unmanaged<nint, QueueDesc*, Guid*, nint*, int>)V(_device, 8))(_device, &qd, Ptr(IID_ID3D12CommandQueue), &q), "CreateCommandQueue");
        _queue = q;
        Check(((delegate* unmanaged<nint, int, Guid*, nint*, int>)V(_device, 9))(_device, 0, Ptr(IID_ID3D12CommandAllocator), &a), "CreateCommandAllocator");
        _alloc = a;
        Check(((delegate* unmanaged<nint, uint, int, nint, nint, Guid*, nint*, int>)V(_device, 12))(_device, 0, 0, _alloc, 0, Ptr(IID_ID3D12GraphicsCommandList), &l), "CreateCommandList");
        _list = l;
        Call(_list, 9);                                                   // Close: Reset() reopens it per frame
        Check(((delegate* unmanaged<nint, ulong, int, Guid*, nint*, int>)V(_device, 36))(_device, 0, 0, Ptr(IID_ID3D12Fence), &f), "CreateFence");
        _fence = f;
        _event = CreateEventW(0, 0, 0, 0);
        ((delegate* unmanaged<nint, nint, uint, int>)V(_factory, 8))(_factory, hwnd, 2);   // MakeWindowAssociation: no Alt+Enter
        Name = "Direct3D 12";
        Resize();
    }

    public void CaptureNext(string path) => _capture = path;

    public void Present(ReadOnlySpan<uint> top, ReadOnlySpan<uint> bottom)
    {
        Win32.GetClientRect(_hwnd, out var rc);
        if (rc.right <= 0 || rc.bottom <= 0) return;
        if (rc.right != _w || rc.bottom != _h) Resize();
        WaitIdle();

        // scale both screens into the footprint (black around the layout rectangle)
        var (x, y, w, h) = PresenterFactory.Layout(_w, _h);
        for (int row = 0; row < _h; row++)
        {
            var line = new Span<uint>(_uploadPtr + (long)row * _pitch, _w);
            line.Clear();
            int sy = (row - y) * SrcH / (2 * h);
            if (row < y || sy < 0 || sy >= SrcH) continue;
            var src = sy < IScreen.Height ? top.Slice(sy * SrcW, SrcW) : bottom.Slice((sy - IScreen.Height) * SrcW, SrcW);
            for (int col = Math.Max(0, x); col < Math.Min(_w, x + w); col++) line[col] = src[(col - x) * SrcW / w];
        }

        nint back = _back[_index];
        string? capture = _capture;
        Call(_alloc, 8);                                                  // allocator Reset
        ((delegate* unmanaged<nint, nint, nint, int>)V(_list, 10))(_list, _alloc, 0);
        Transition(back, 0 /* present */, 0x400 /* copy dest */);
        var dst = new CopyLocation { Resource = back, Type = 0 };
        var srcLoc = new CopyLocation { Resource = _upload, Type = 1, Footprint = new Footprint { Format = 87, Width = (uint)_w, Height = (uint)_h, Depth = 1, RowPitch = (uint)_pitch } };
        ((delegate* unmanaged<nint, CopyLocation*, uint, uint, uint, CopyLocation*, void*, void>)V(_list, 16))(_list, &dst, 0, 0, 0, &srcLoc, null);
        if (capture is not null)
        {
            Transition(back, 0x400, 0x800 /* copy source */);
            var rb = new CopyLocation { Resource = _readback, Type = 1, Footprint = srcLoc.Footprint };
            var bb = new CopyLocation { Resource = back, Type = 0 };
            ((delegate* unmanaged<nint, CopyLocation*, uint, uint, uint, CopyLocation*, void*, void>)V(_list, 16))(_list, &rb, 0, 0, 0, &bb, null);
            Transition(back, 0x800, 0);
        }
        else Transition(back, 0x400, 0);
        Check(Call(_list, 9), "Close");
        nint list = _list;
        ((delegate* unmanaged<nint, uint, nint*, void>)V(_queue, 10))(_queue, 1, &list);
        ((delegate* unmanaged<nint, uint, uint, int>)V(_swap, 8))(_swap, 0, 0);   // Present(sync 0): the game paces itself
        _index = (_index + 1) % Frames;
        if (capture is not null)
        {
            WaitIdle();
            void* p;
            var range = new Range { Begin = 0, End = (nuint)(_pitch * _h) };
            ((delegate* unmanaged<nint, uint, Range*, void**, int>)V(_readback, 8))(_readback, 0, &range, &p);
            var pixels = new uint[_w * _h];
            for (int row = 0; row < _h; row++) new ReadOnlySpan<uint>((byte*)p + (long)row * _pitch, _w).CopyTo(pixels.AsSpan(row * _w));
            var none = new Range();
            ((delegate* unmanaged<nint, uint, Range*, void>)V(_readback, 9))(_readback, 0, &none);
            Bmp.Write(capture, pixels, _w, _h);
            _capture = null;
        }
    }

    private void Resize()
    {
        WaitIdle();
        Win32.GetClientRect(_hwnd, out var rc);
        _w = Math.Max(1, rc.right); _h = Math.Max(1, rc.bottom);
        foreach (var b in _back) if (b != 0) Release(b);
        Array.Clear(_back);
        if (_swap == 0)
        {
            var desc = new SwapChainDesc1 { Width = (uint)_w, Height = (uint)_h, Format = 87, SampleCount = 1, BufferUsage = 0x20, BufferCount = Frames, Scaling = 0, SwapEffect = 4 };
            nint sc;
            Check(((delegate* unmanaged<nint, nint, nint, SwapChainDesc1*, void*, nint, nint*, int>)V(_factory, 15))(_factory, _queue, _hwnd, &desc, null, 0, &sc), "CreateSwapChainForHwnd");
            _swap = sc;
        }
        else Check(((delegate* unmanaged<nint, uint, uint, uint, int, uint, int>)V(_swap, 13))(_swap, Frames, (uint)_w, (uint)_h, 87, 0), "ResizeBuffers");
        for (uint i = 0; i < Frames; i++)
        {
            nint b;
            Check(((delegate* unmanaged<nint, uint, Guid*, nint*, int>)V(_swap, 9))(_swap, i, Ptr(IID_ID3D12Resource), &b), "GetBuffer");
            _back[i] = b;
        }
        _index = 0;
        _pitch = (_w * 4 + 255) & ~255;
        if (_upload != 0) Release(_upload);
        if (_readback != 0) Release(_readback);
        _upload = Buffer(2 /* upload */, (ulong)(_pitch * _h), 0xAC3 /* generic read */);
        _readback = Buffer(3 /* readback */, (ulong)(_pitch * _h), 0x400 /* copy dest */);
        void* p;
        var range = new Range();
        Check(((delegate* unmanaged<nint, uint, Range*, void**, int>)V(_upload, 8))(_upload, 0, &range, &p), "Map");
        _uploadPtr = (byte*)p;
    }

    private nint Buffer(int heapType, ulong size, int state)
    {
        var heap = new HeapProperties { Type = heapType, CreationNodeMask = 1, VisibleNodeMask = 1 };
        var desc = new ResourceDesc { Dimension = 1, Width = size, Height = 1, DepthOrArraySize = 1, MipLevels = 1, SampleCount = 1, Layout = 1 };
        nint r;
        Check(((delegate* unmanaged<nint, HeapProperties*, int, ResourceDesc*, int, void*, Guid*, nint*, int>)V(_device, 27))(_device, &heap, 0, &desc, state, null, Ptr(IID_ID3D12Resource), &r), "CreateCommittedResource");
        return r;
    }

    private void Transition(nint resource, int before, int after)
    {
        var b = new Barrier { Type = 0, Resource = resource, Subresource = 0xFFFFFFFF, Before = before, After = after };
        ((delegate* unmanaged<nint, uint, Barrier*, void>)V(_list, 26))(_list, 1, &b);
    }

    private void WaitIdle()
    {
        ulong v = ++_fenceValue;
        ((delegate* unmanaged<nint, nint, ulong, int>)V(_queue, 14))(_queue, _fence, v);
        if (((delegate* unmanaged<nint, ulong>)V(_fence, 8))(_fence) < v)
        {
            ((delegate* unmanaged<nint, ulong, nint, int>)V(_fence, 9))(_fence, v, _event);
            WaitForSingleObject(_event, 0xFFFFFFFF);
        }
    }

    public void Dispose()
    {
        if (_device == 0) return;
        WaitIdle();
        foreach (var b in _back) if (b != 0) Release(b);
        foreach (var o in new[] { _upload, _readback, _swap, _list, _alloc, _fence, _queue, _device, _factory }) if (o != 0) Release(o);
        CloseHandle(_event);
    }

    private static void* V(nint obj, int slot) => (*(void***)obj)[slot];
    private static int Call(nint obj, int slot) => ((delegate* unmanaged<nint, int>)V(obj, slot))(obj);
    private static void Release(nint obj) => ((delegate* unmanaged<nint, uint>)V(obj, 2))(obj);
    private static void Check(int hr, string what)
    {
        if (hr < 0) throw new InvalidOperationException($"{what} failed (0x{hr:X8})");
    }

    private static readonly Guid IID_IDXGIFactory4 = new("1bc6ea02-ef36-464f-bf0c-21ca39e5168a");
    private static readonly Guid IID_ID3D12Device = new("189819f1-1db6-4b57-be54-1821339b85f7");
    private static readonly Guid IID_ID3D12CommandQueue = new("0ec870a6-5d7e-4c22-8cfc-5baae07616ed");
    private static readonly Guid IID_ID3D12CommandAllocator = new("6102dee4-af59-4b09-b999-b44d73f09b24");
    private static readonly Guid IID_ID3D12GraphicsCommandList = new("5b160d0f-ac1b-4185-8ba8-b3ae42a5a455");
    private static readonly Guid IID_ID3D12Resource = new("696442be-a72e-4059-bc79-5b5c98040fad");
    private static readonly Guid IID_ID3D12Fence = new("0a753dcf-c4d8-4b91-adf6-be5a60d95a76");
    private static readonly Dictionary<Guid, nint> Pinned = [];
    private static Guid* Ptr(Guid g)
    {
        lock (Pinned)
        {
            if (!Pinned.TryGetValue(g, out var p)) { p = Marshal.AllocHGlobal(16); *(Guid*)p = g; Pinned[g] = p; }
            return (Guid*)p;
        }
    }

    [StructLayout(LayoutKind.Sequential)] private struct QueueDesc { public int Type, Priority, Flags; public uint NodeMask; }
    [StructLayout(LayoutKind.Sequential)] private struct SwapChainDesc1 { public uint Width, Height; public int Format, Stereo; public uint SampleCount, SampleQuality, BufferUsage, BufferCount; public int Scaling, SwapEffect, AlphaMode; public uint Flags; }
    [StructLayout(LayoutKind.Sequential)] private struct HeapProperties { public int Type, CPUPageProperty, MemoryPoolPreference; public uint CreationNodeMask, VisibleNodeMask; }
    [StructLayout(LayoutKind.Sequential)] private struct ResourceDesc { public int Dimension; public ulong Alignment, Width; public uint Height; public ushort DepthOrArraySize, MipLevels; public int Format; public uint SampleCount, SampleQuality; public int Layout, Flags; }
    [StructLayout(LayoutKind.Sequential)] private struct Barrier { public int Type, Flags; public nint Resource; public uint Subresource; public int Before, After; }
    [StructLayout(LayoutKind.Sequential)] private struct Footprint { public int Format; public uint Width, Height, Depth, RowPitch; }
    [StructLayout(LayoutKind.Explicit)] private struct CopyLocation
    {
        [FieldOffset(0)] public nint Resource;
        [FieldOffset(8)] public int Type;
        [FieldOffset(16)] public uint SubresourceIndex;
        [FieldOffset(16)] public ulong Offset;
        [FieldOffset(24)] public Footprint Footprint;
    }
    [StructLayout(LayoutKind.Sequential)] private struct Range { public nuint Begin, End; }

    [DllImport("dxgi.dll")] private static extern int CreateDXGIFactory2(uint flags, in Guid riid, out nint factory);
    [DllImport("d3d12.dll")] private static extern int D3D12CreateDevice(nint adapter, int featureLevel, in Guid riid, out nint device);
    [DllImport("kernel32.dll")] private static extern nint CreateEventW(nint attrs, int manualReset, int initialState, nint name);
    [DllImport("kernel32.dll")] private static extern uint WaitForSingleObject(nint handle, uint ms);
    [DllImport("kernel32.dll")] private static extern int CloseHandle(nint handle);
}
