using System.Runtime.InteropServices;
using System.Text;
using Jus.Game;

namespace Jus.Host;

/// <summary>
/// Direct3D 12 presenter (d3d12.dll / dxgi.dll / d3dcompiler_47.dll through raw COM vtables, no bindings).
/// The stacked 256x384 screens are uploaded into a texture each frame and drawn on the GPU with a
/// fullscreen-triangle shader (point sampling) into a viewport set to the layout rectangle; the rest of
/// the flip-discard back buffer is cleared to black. The shaders are compiled at start-up with D3DCompile.
/// One frame in flight.
/// </summary>
internal sealed unsafe class D3D12Presenter : IPresenter
{
    private const int Frames = 2, SrcW = IScreen.Width, SrcH = IScreen.Height * 2, SrcPitch = SrcW * 4;
    private readonly nint _hwnd, _factory, _device, _queue, _alloc, _list, _fence, _event;
    private readonly nint _rootSig, _pso, _srvHeap, _rtvHeap, _texture, _upload;
    private readonly uint _rtvStep;
    private readonly ulong _srvGpu;
    private nint _swap, _readback;
    private readonly nint[] _back = new nint[Frames];
    private ulong _fenceValue;
    private int _w, _h, _readPitch, _index;
    private readonly byte* _uploadPtr;
    private string? _capture;
    public string Name { get; }

    private const string Shader = """
        Texture2D t : register(t0);
        SamplerState s : register(s0);
        struct V { float4 p : SV_Position; float2 uv : TEXCOORD0; };
        V vs(uint id : SV_VertexID)
        {
            V o;
            float2 uv = float2((id << 1) & 2, id & 2);
            o.uv = uv;
            o.p = float4(uv * float2(2, -2) + float2(-1, 1), 0, 1);
            return o;
        }
        float4 ps(V i) : SV_Target { return float4(t.Sample(s, i.uv).rgb, 1); }
        """;

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

        _rootSig = CreateRootSignature();
        _pso = CreatePipeline();
        _srvHeap = DescriptorHeap(0 /* CBV/SRV/UAV */, 1, 1 /* shader visible */);
        _rtvHeap = DescriptorHeap(2 /* RTV */, Frames, 0);
        _rtvStep = ((delegate* unmanaged<nint, int, uint>)V(_device, 15))(_device, 2);
        _texture = Texture();
        ((delegate* unmanaged<nint, nint, void*, ulong, void>)V(_device, 18))(_device, _texture, null, HeapStart(_srvHeap, false));
        _srvGpu = HeapStart(_srvHeap, true);
        _upload = Buffer(2 /* upload */, (ulong)(SrcPitch * SrcH), 0xAC3 /* generic read */);
        void* p;
        var range = new Range();
        Check(((delegate* unmanaged<nint, uint, Range*, void**, int>)V(_upload, 8))(_upload, 0, &range, &p), "Map");
        _uploadPtr = (byte*)p;
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
        PresenterFactory.Stack(top, bottom, new Span<uint>(_uploadPtr, SrcW * SrcH));

        nint back = _back[_index];
        ulong rtv = HeapStart(_rtvHeap, false) + (ulong)(_index * _rtvStep);
        string? capture = _capture;
        Call(_alloc, 8);                                                  // allocator Reset
        ((delegate* unmanaged<nint, nint, nint, int>)V(_list, 10))(_list, _alloc, _pso);

        // upload → texture
        Transition(_texture, 0x80 /* pixel shader resource */, 0x400 /* copy dest */);
        var dst = new CopyLocation { Resource = _texture, Type = 0 };
        var src = new CopyLocation { Resource = _upload, Type = 1, Footprint = new Footprint { Format = 87, Width = SrcW, Height = SrcH, Depth = 1, RowPitch = SrcPitch } };
        ((delegate* unmanaged<nint, CopyLocation*, uint, uint, uint, CopyLocation*, void*, void>)V(_list, 16))(_list, &dst, 0, 0, 0, &src, null);
        Transition(_texture, 0x400, 0x80);

        // draw into the layout rectangle
        Transition(back, 0 /* present */, 4 /* render target */);
        float* black = stackalloc float[4] { 0, 0, 0, 1 };
        ((delegate* unmanaged<nint, ulong, float*, uint, void*, void>)V(_list, 48))(_list, rtv, black, 0, null);
        ((delegate* unmanaged<nint, uint, ulong*, int, void*, void>)V(_list, 46))(_list, 1, &rtv, 0, null);
        ((delegate* unmanaged<nint, nint, void>)V(_list, 30))(_list, _rootSig);
        nint heap = _srvHeap;
        ((delegate* unmanaged<nint, uint, nint*, void>)V(_list, 28))(_list, 1, &heap);
        ((delegate* unmanaged<nint, uint, ulong, void>)V(_list, 32))(_list, 0, _srvGpu);
        var (x, y, w, h) = PresenterFactory.Layout(_w, _h);
        var vp = new Viewport { X = x, Y = y, Width = w, Height = 2 * h, MaxDepth = 1 };
        ((delegate* unmanaged<nint, uint, Viewport*, void>)V(_list, 21))(_list, 1, &vp);
        var scissor = new Win32.RECT { left = x, top = y, right = x + w, bottom = y + 2 * h };
        ((delegate* unmanaged<nint, uint, Win32.RECT*, void>)V(_list, 22))(_list, 1, &scissor);
        ((delegate* unmanaged<nint, int, void>)V(_list, 20))(_list, 4 /* triangle list */);
        ((delegate* unmanaged<nint, uint, uint, uint, uint, void>)V(_list, 12))(_list, 3, 1, 0, 0);

        if (capture is not null)
        {
            Transition(back, 4, 0x800 /* copy source */);
            var rb = new CopyLocation { Resource = _readback, Type = 1, Footprint = new Footprint { Format = 87, Width = (uint)_w, Height = (uint)_h, Depth = 1, RowPitch = (uint)_readPitch } };
            var bb = new CopyLocation { Resource = back, Type = 0 };
            ((delegate* unmanaged<nint, CopyLocation*, uint, uint, uint, CopyLocation*, void*, void>)V(_list, 16))(_list, &rb, 0, 0, 0, &bb, null);
            Transition(back, 0x800, 0);
        }
        else Transition(back, 4, 0);
        Check(Call(_list, 9), "Close");
        nint list = _list;
        ((delegate* unmanaged<nint, uint, nint*, void>)V(_queue, 10))(_queue, 1, &list);
        ((delegate* unmanaged<nint, uint, uint, int>)V(_swap, 8))(_swap, 0, 0);   // Present(sync 0): the game paces itself
        _index = (_index + 1) % Frames;
        if (capture is not null)
        {
            WaitIdle();
            void* p;
            var range = new Range { Begin = 0, End = (nuint)(_readPitch * _h) };
            ((delegate* unmanaged<nint, uint, Range*, void**, int>)V(_readback, 8))(_readback, 0, &range, &p);
            var pixels = new uint[_w * _h];
            for (int row = 0; row < _h; row++) new ReadOnlySpan<uint>((byte*)p + (long)row * _readPitch, _w).CopyTo(pixels.AsSpan(row * _w));
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
        ulong rtv = HeapStart(_rtvHeap, false);
        for (uint i = 0; i < Frames; i++)
        {
            nint b;
            Check(((delegate* unmanaged<nint, uint, Guid*, nint*, int>)V(_swap, 9))(_swap, i, Ptr(IID_ID3D12Resource), &b), "GetBuffer");
            _back[i] = b;
            ((delegate* unmanaged<nint, nint, void*, ulong, void>)V(_device, 20))(_device, b, null, rtv + i * _rtvStep);
        }
        _index = 0;
        _readPitch = (_w * 4 + 255) & ~255;
        if (_readback != 0) Release(_readback);
        _readback = Buffer(3 /* readback */, (ulong)(_readPitch * _h), 0x400 /* copy dest */);
    }

    private nint CreateRootSignature()
    {
        // one descriptor table with t0 (pixel shader) + a static point/clamp sampler at s0
        var range = new DescriptorRange { RangeType = 0 /* SRV */, NumDescriptors = 1 };
        var param = new RootParameter { ParameterType = 0 /* table */, NumDescriptorRanges = 1, DescriptorRanges = &range, ShaderVisibility = 5 /* pixel */ };
        var sampler = new StaticSampler { Filter = 0, AddressU = 3, AddressV = 3, AddressW = 3, ComparisonFunc = 1, MaxLOD = float.MaxValue, ShaderVisibility = 5 };
        var desc = new RootSignatureDesc { NumParameters = 1, Parameters = &param, NumStaticSamplers = 1, StaticSamplers = &sampler };
        Check(D3D12SerializeRootSignature(&desc, 1, out nint blob, out nint err), "D3D12SerializeRootSignature" + BlobText(err));
        nint rs;
        Check(((delegate* unmanaged<nint, uint, void*, nuint, Guid*, nint*, int>)V(_device, 16))(_device, 0, BlobPtr(blob), BlobSize(blob), Ptr(IID_ID3D12RootSignature), &rs), "CreateRootSignature");
        Release(blob);
        return rs;
    }

    private nint CreatePipeline()
    {
        nint vs = Compile("vs", "vs_5_0"), ps = Compile("ps", "ps_5_0");
        // D3D12_GRAPHICS_PIPELINE_STATE_DESC (x64, 656 bytes), filled at its field offsets
        byte* d = stackalloc byte[656];
        new Span<byte>(d, 656).Clear();
        *(nint*)(d + 0) = _rootSig;
        *(void**)(d + 8) = BlobPtr(vs); *(nuint*)(d + 16) = BlobSize(vs);
        *(void**)(d + 24) = BlobPtr(ps); *(nuint*)(d + 32) = BlobSize(ps);
        // blend: render target 0 at +128 (after AlphaToCoverage, IndependentBlend at +120): ONE/ZERO/ADD, NOOP, write all
        int* rt = (int*)(d + 128);
        rt[2] = 2; rt[3] = 1; rt[4] = 1; rt[5] = 2; rt[6] = 1; rt[7] = 1; rt[8] = 4; d[164] = 0xF;
        *(uint*)(d + 448) = 0xFFFFFFFF;                                   // SampleMask
        *(int*)(d + 452) = 3; *(int*)(d + 456) = 1; *(int*)(d + 476) = 1; // solid, no culling, depth clip
        *(int*)(d + 504) = 8;                                             // depth func ALWAYS (depth off)
        int* face = (int*)(d + 512);
        face[0] = face[1] = face[2] = 1; face[3] = 8; face[4] = face[5] = face[6] = 1; face[7] = 8;
        *(int*)(d + 572) = 3;                                             // triangle topology
        *(int*)(d + 576) = 1; *(int*)(d + 580) = 87;                      // one B8G8R8A8 target
        *(int*)(d + 616) = 1;                                             // sample count
        nint pso;
        Check(((delegate* unmanaged<nint, byte*, Guid*, nint*, int>)V(_device, 10))(_device, d, Ptr(IID_ID3D12PipelineState), &pso), "CreateGraphicsPipelineState");
        Release(vs); Release(ps);
        return pso;
    }

    private static nint Compile(string entry, string target)
    {
        byte[] src = Encoding.ASCII.GetBytes(Shader);
        fixed (byte* s = src)
        {
            nint e = Marshal.StringToHGlobalAnsi(entry), t = Marshal.StringToHGlobalAnsi(target);
            try
            {
                int hr = D3DCompile(s, (nuint)src.Length, 0, 0, 0, e, t, 0, 0, out nint code, out nint err);
                Check(hr, $"D3DCompile {entry}" + BlobText(err));
                return code;
            }
            finally { Marshal.FreeHGlobal(e); Marshal.FreeHGlobal(t); }
        }
    }

    private nint DescriptorHeap(int type, int count, int flags)
    {
        var desc = new HeapDesc { Type = type, NumDescriptors = (uint)count, Flags = flags };
        nint h;
        Check(((delegate* unmanaged<nint, HeapDesc*, Guid*, nint*, int>)V(_device, 14))(_device, &desc, Ptr(IID_ID3D12DescriptorHeap), &h), "CreateDescriptorHeap");
        return h;
    }

    /// <summary>GetCPU/GPUDescriptorHandleForHeapStart (slots 9/10) return their struct through a hidden pointer.</summary>
    private static ulong HeapStart(nint heap, bool gpu)
    {
        ulong handle;
        ((delegate* unmanaged<nint, ulong*, ulong*>)V(heap, gpu ? 10 : 9))(heap, &handle);
        return handle;
    }

    private nint Texture()
    {
        var heap = new HeapProperties { Type = 1 /* default */, CreationNodeMask = 1, VisibleNodeMask = 1 };
        var desc = new ResourceDesc { Dimension = 3, Width = SrcW, Height = SrcH, DepthOrArraySize = 1, MipLevels = 1, Format = 87, SampleCount = 1, Layout = 0 };
        nint r;
        Check(((delegate* unmanaged<nint, HeapProperties*, int, ResourceDesc*, int, void*, Guid*, nint*, int>)V(_device, 27))(_device, &heap, 0, &desc, 0x80, null, Ptr(IID_ID3D12Resource), &r), "CreateCommittedResource (texture)");
        return r;
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
        foreach (var o in new[] { _upload, _readback, _texture, _srvHeap, _rtvHeap, _pso, _rootSig, _swap, _list, _alloc, _fence, _queue, _device, _factory })
            if (o != 0) Release(o);
        CloseHandle(_event);
    }

    private static void* V(nint obj, int slot) => (*(void***)obj)[slot];
    private static int Call(nint obj, int slot) => ((delegate* unmanaged<nint, int>)V(obj, slot))(obj);
    private static void Release(nint obj) => ((delegate* unmanaged<nint, uint>)V(obj, 2))(obj);
    private static void* BlobPtr(nint blob) => ((delegate* unmanaged<nint, void*>)V(blob, 3))(blob);
    private static nuint BlobSize(nint blob) => ((delegate* unmanaged<nint, nuint>)V(blob, 4))(blob);
    private static string BlobText(nint blob)
    {
        if (blob == 0) return "";
        string s = ": " + Marshal.PtrToStringAnsi((nint)BlobPtr(blob), (int)BlobSize(blob)).TrimEnd('\0');
        Release(blob);
        return s;
    }
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
    private static readonly Guid IID_ID3D12RootSignature = new("c54a6b66-72df-4ee8-8be5-a946a1429214");
    private static readonly Guid IID_ID3D12PipelineState = new("765a30f3-f624-4c6f-a828-ace948622445");
    private static readonly Guid IID_ID3D12DescriptorHeap = new("8efb471d-616c-4f49-90f7-127bb763fa51");
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
    [StructLayout(LayoutKind.Sequential)] private struct HeapDesc { public int Type; public uint NumDescriptors; public int Flags; public uint NodeMask; }
    [StructLayout(LayoutKind.Sequential)] private struct Viewport { public float X, Y, Width, Height, MinDepth, MaxDepth; }
    [StructLayout(LayoutKind.Sequential)] private struct DescriptorRange { public int RangeType; public uint NumDescriptors, BaseShaderRegister, RegisterSpace, OffsetInDescriptorsFromTableStart; }
    [StructLayout(LayoutKind.Explicit, Size = 32)] private struct RootParameter
    {
        [FieldOffset(0)] public int ParameterType;
        [FieldOffset(8)] public uint NumDescriptorRanges;
        [FieldOffset(16)] public DescriptorRange* DescriptorRanges;
        [FieldOffset(24)] public int ShaderVisibility;
    }
    [StructLayout(LayoutKind.Sequential)] private struct StaticSampler { public int Filter, AddressU, AddressV, AddressW; public float MipLODBias; public uint MaxAnisotropy; public int ComparisonFunc, BorderColor; public float MinLOD, MaxLOD; public uint ShaderRegister, RegisterSpace; public int ShaderVisibility; }
    [StructLayout(LayoutKind.Sequential)] private struct RootSignatureDesc { public uint NumParameters; public RootParameter* Parameters; public uint NumStaticSamplers; public StaticSampler* StaticSamplers; public int Flags; }

    [DllImport("dxgi.dll")] private static extern int CreateDXGIFactory2(uint flags, in Guid riid, out nint factory);
    [DllImport("d3d12.dll")] private static extern int D3D12CreateDevice(nint adapter, int featureLevel, in Guid riid, out nint device);
    [DllImport("d3d12.dll")] private static extern int D3D12SerializeRootSignature(RootSignatureDesc* desc, int version, out nint blob, out nint error);
    [DllImport("d3dcompiler_47.dll")] private static extern int D3DCompile(void* src, nuint size, nint name, nint defines, nint include, nint entry, nint target, uint flags1, uint flags2, out nint code, out nint errors);
    [DllImport("kernel32.dll")] private static extern nint CreateEventW(nint attrs, int manualReset, int initialState, nint name);
    [DllImport("kernel32.dll")] private static extern uint WaitForSingleObject(nint handle, uint ms);
    [DllImport("kernel32.dll")] private static extern int CloseHandle(nint handle);
}
