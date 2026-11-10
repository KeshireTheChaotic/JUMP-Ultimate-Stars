using System.Runtime.InteropServices;
using Jus.Game;

namespace Jus.Host;

/// <summary>
/// Vulkan presenter (vulkan-1.dll directly, no bindings): a 256x384 staging buffer is copied into a source
/// image, the swap-chain image is cleared and the source is blitted into the layout rectangle with nearest
/// filtering (vkCmdBlitImage, so no shaders are needed), then presented. Present mode: mailbox, else
/// immediate, else FIFO (the game paces itself at 59.83 Hz). The swap chain is rebuilt on resize.
/// </summary>
internal sealed unsafe class VulkanPresenter : IPresenter
{
    private const int W = IScreen.Width, H = IScreen.Height * 2;
    private readonly nint _hwnd, _instance, _phys, _device, _queue, _cmd;
    private readonly ulong _surface, _pool, _staging, _stagingMem, _src, _srcMem, _readback, _readbackMem;
    private readonly ulong _imageReady, _renderDone, _fence;
    private readonly uint _family;
    private readonly uint* _mapped, _readbackMapped;
    private ulong _swapchain;
    private ulong[] _images = [];
    private int _sw, _sh;
    private bool _srcInitialised;
    private string? _capture;

    public string Name { get; }

    public VulkanPresenter(nint hwnd)
    {
        _hwnd = hwnd;
        // instance with the Win32 surface extensions
        using (var app = new Utf8("JUS"))
        using (var e1 = new Utf8("VK_KHR_surface"))
        using (var e2 = new Utf8("VK_KHR_win32_surface"))
        {
            var appInfo = new VkApplicationInfo { sType = 0, pApplicationName = app.Ptr, pEngineName = app.Ptr, apiVersion = 1u << 22 };
            byte** exts = stackalloc byte*[2] { e1.Ptr, e2.Ptr };
            var ci = new VkInstanceCreateInfo { sType = 1, pApplicationInfo = &appInfo, enabledExtensionCount = 2, ppEnabledExtensionNames = exts };
            Check(vkCreateInstance(&ci, null, out _instance), "vkCreateInstance");
        }
        var sci = new VkWin32SurfaceCreateInfoKHR { sType = 1000009000, hinstance = Win32.GetModuleHandle(0), hwnd = hwnd };
        var createSurface = (delegate* unmanaged<nint, VkWin32SurfaceCreateInfoKHR*, void*, ulong*, int>)Proc(_instance, "vkCreateWin32SurfaceKHR");
        ulong surface;
        Check(createSurface(_instance, &sci, null, &surface), "vkCreateWin32SurfaceKHR");
        _surface = surface;

        // a device with a queue that does both transfer/graphics and present
        uint n = 0;
        vkEnumeratePhysicalDevices(_instance, &n, null);
        if (n == 0) throw new InvalidOperationException("no Vulkan device");
        var devs = new nint[n];
        fixed (nint* pd = devs) vkEnumeratePhysicalDevices(_instance, &n, pd);
        nint chosen = 0; uint family = 0; string devName = "";
        foreach (var d in devs.OrderBy(d => DeviceType(d) == 2 ? 0 : 1))   // discrete GPU first
        {
            uint qn = 0;
            vkGetPhysicalDeviceQueueFamilyProperties(d, &qn, null);
            var q = new VkQueueFamilyProperties[qn];
            fixed (VkQueueFamilyProperties* pq = q) vkGetPhysicalDeviceQueueFamilyProperties(d, &qn, pq);
            for (uint i = 0; i < qn; i++)
            {
                uint present = 0;
                vkGetPhysicalDeviceSurfaceSupportKHR(d, i, _surface, &present);
                if ((q[i].queueFlags & 1) != 0 && present != 0) { chosen = d; family = i; break; }
            }
            if (chosen != 0) { devName = DeviceName(d); break; }
        }
        if (chosen == 0) throw new InvalidOperationException("no Vulkan queue can present to the window");
        _phys = chosen; _family = family;
        float prio = 1f;
        var qci = new VkDeviceQueueCreateInfo { sType = 2, queueFamilyIndex = family, queueCount = 1, pQueuePriorities = &prio };
        using (var sw = new Utf8("VK_KHR_swapchain"))
        {
            byte** dexts = stackalloc byte*[1] { sw.Ptr };
            var dci = new VkDeviceCreateInfo { sType = 3, queueCreateInfoCount = 1, pQueueCreateInfos = &qci, enabledExtensionCount = 1, ppEnabledExtensionNames = dexts };
            Check(vkCreateDevice(_phys, &dci, null, out _device), "vkCreateDevice");
        }
        vkGetDeviceQueue(_device, family, 0, out _queue);
        Name = $"Vulkan ({devName})";

        var pci = new VkCommandPoolCreateInfo { sType = 39, flags = 2, queueFamilyIndex = family };
        Check(vkCreateCommandPool(_device, &pci, null, out _pool), "vkCreateCommandPool");
        var cai = new VkCommandBufferAllocateInfo { sType = 40, commandPool = _pool, level = 0, commandBufferCount = 1 };
        nint cmd;
        Check(vkAllocateCommandBuffers(_device, &cai, &cmd), "vkAllocateCommandBuffers");
        _cmd = cmd;

        (_staging, _stagingMem, nint mapped) = HostBuffer(W * H * 4);
        _mapped = (uint*)mapped;
        (_src, _srcMem) = DeviceImage(W, H);
        var semi = new VkSemaphoreCreateInfo { sType = 9 };
        Check(vkCreateSemaphore(_device, &semi, null, out _imageReady), "vkCreateSemaphore");
        Check(vkCreateSemaphore(_device, &semi, null, out _renderDone), "vkCreateSemaphore");
        var fci = new VkFenceCreateInfo { sType = 8, flags = 1 };
        Check(vkCreateFence(_device, &fci, null, out _fence), "vkCreateFence");
        (_readback, _readbackMem, nint rbMapped) = HostBuffer(4096 * 4096 * 4 / 16);   // up to ~2048x2048 captures
        _readbackMapped = (uint*)rbMapped;
        CreateSwapchain();
    }

    public void CaptureNext(string path) => _capture = path;

    public void Present(ReadOnlySpan<uint> top, ReadOnlySpan<uint> bottom)
    {
        Win32.GetClientRect(_hwnd, out var rc);
        if (rc.right <= 0 || rc.bottom <= 0) return;                               // minimised
        if (rc.right != _sw || rc.bottom != _sh) CreateSwapchain();
        if (_swapchain == 0) return;

        ulong fence = _fence;
        vkWaitForFences(_device, 1, &fence, 1, ulong.MaxValue);
        PresenterFactory.Stack(top, bottom, new Span<uint>(_mapped, W * H));

        uint index;
        int r = vkAcquireNextImageKHR(_device, _swapchain, ulong.MaxValue, _imageReady, 0, &index);
        if (r == -1000001004 || r == 1000001003) { CreateSwapchain(); return; }    // out of date / suboptimal
        Check(r, "vkAcquireNextImageKHR");
        vkResetFences(_device, 1, &fence);
        ulong dst = _images[index];
        int sw = _sw, sh = _sh;
        var (x, y, w, h) = PresenterFactory.Layout(sw, sh);
        string? capture = _capture;
        bool canCapture = capture is not null && (long)_sw * _sh * 4 <= 4096L * 4096 * 4 / 16;

        vkResetCommandBuffer(_cmd, 0);
        var begin = new VkCommandBufferBeginInfo { sType = 42, flags = 1 };
        vkBeginCommandBuffer(_cmd, &begin);
        // staging buffer → source image
        Barrier(_src, _srcInitialised ? 6 : 0, 7, 0x1000, 0x1000);
        var copy = new VkBufferImageCopy { imageSubresource = Color(), imageExtent = new(W, H, 1) };
        vkCmdCopyBufferToImage(_cmd, _staging, _src, 7, 1, &copy);
        Barrier(_src, 7, 6, 0x1000, 0x1000);
        _srcInitialised = true;
        // clear the swap-chain image, blit the screens into the layout rectangle
        Barrier(dst, 0, 7, 0x1, 0x1000);
        var black = new VkClearColorValue();
        var range = new VkImageSubresourceRange { aspectMask = 1, levelCount = 1, layerCount = 1 };
        vkCmdClearColorImage(_cmd, dst, 7, &black, 1, &range);
        Barrier(dst, 7, 7, 0x1000, 0x1000);
        var blit = new VkImageBlit
        {
            srcSubresource = Color(), src0 = new(0, 0, 0), src1 = new(W, H, 1),
            dstSubresource = Color(), dst0 = new(x, y, 0), dst1 = new(x + w, y + 2 * h, 1),
        };
        vkCmdBlitImage(_cmd, _src, 6, dst, 7, 1, &blit, 0 /* nearest */);
        if (canCapture)
        {
            Barrier(dst, 7, 6, 0x1000, 0x1000);
            var back = new VkBufferImageCopy { imageSubresource = Color(), imageExtent = new((uint)sw, (uint)sh, 1) };
            vkCmdCopyImageToBuffer(_cmd, dst, 6, _readback, 1, &back);
            Barrier(dst, 6, 1000001002, 0x1000, 0);
        }
        else Barrier(dst, 7, 1000001002, 0x1000, 0);
        vkEndCommandBuffer(_cmd);

        ulong wait = _imageReady, signal = _renderDone;
        uint stage = 0x1000;
        nint cmd = _cmd;
        var submit = new VkSubmitInfo { sType = 4, waitSemaphoreCount = 1, pWaitSemaphores = &wait, pWaitDstStageMask = &stage,
            commandBufferCount = 1, pCommandBuffers = &cmd, signalSemaphoreCount = 1, pSignalSemaphores = &signal };
        Check(vkQueueSubmit(_queue, 1, &submit, _fence), "vkQueueSubmit");
        ulong swapchain = _swapchain;
        var present = new VkPresentInfoKHR { sType = 1000001001, waitSemaphoreCount = 1, pWaitSemaphores = &signal,
            swapchainCount = 1, pSwapchains = &swapchain, pImageIndices = &index };
        r = vkQueuePresentKHR(_queue, &present);
        if (r == -1000001004 || r == 1000001003) _sw = -1;                         // rebuild next frame
        if (canCapture)
        {
            vkWaitForFences(_device, 1, &fence, 1, ulong.MaxValue);
            Bmp.Write(capture!, new ReadOnlySpan<uint>(_readbackMapped, sw * sh), sw, sh);
            _capture = null;
        }
    }

    private void CreateSwapchain()
    {
        vkDeviceWaitIdle(_device);
        Win32.GetClientRect(_hwnd, out var rc);
        VkSurfaceCapabilitiesKHR caps;
        Check(vkGetPhysicalDeviceSurfaceCapabilitiesKHR(_phys, _surface, &caps), "surface caps");
        uint w = caps.currentExtent.width == uint.MaxValue ? (uint)Math.Max(1, rc.right) : caps.currentExtent.width;
        uint h = caps.currentExtent.height == uint.MaxValue ? (uint)Math.Max(1, rc.bottom) : caps.currentExtent.height;
        if (w == 0 || h == 0) { _swapchain = 0; return; }
        uint fn = 0;
        vkGetPhysicalDeviceSurfaceFormatsKHR(_phys, _surface, &fn, null);
        var formats = new VkSurfaceFormatKHR[fn];
        fixed (VkSurfaceFormatKHR* pf = formats) vkGetPhysicalDeviceSurfaceFormatsKHR(_phys, _surface, &fn, pf);
        var format = formats.FirstOrDefault(f => f.format == 44, formats[0]);       // B8G8R8A8_UNORM
        uint pn = 0;
        vkGetPhysicalDeviceSurfacePresentModesKHR(_phys, _surface, &pn, null);
        var modes = new int[pn];
        fixed (int* pm = modes) vkGetPhysicalDeviceSurfacePresentModesKHR(_phys, _surface, &pn, pm);
        int mode = modes.Contains(1) ? 1 : modes.Contains(0) ? 0 : 2;              // mailbox, immediate, FIFO
        uint count = Math.Max(caps.minImageCount, 2);
        if (caps.maxImageCount != 0) count = Math.Min(count + 1, caps.maxImageCount);
        ulong old = _swapchain;
        var ci = new VkSwapchainCreateInfoKHR
        {
            sType = 1000001000, surface = _surface, minImageCount = count, imageFormat = format.format,
            imageColorSpace = format.colorSpace, imageExtent = new(w, h), imageArrayLayers = 1,
            imageUsage = 0x2 | 0x1 /* transfer dst + src (capture) */, preTransform = caps.currentTransform,
            compositeAlpha = 1, presentMode = mode, clipped = 1, oldSwapchain = old,
        };
        ulong sc;
        Check(vkCreateSwapchainKHR(_device, &ci, null, &sc), "vkCreateSwapchainKHR");
        if (old != 0) vkDestroySwapchainKHR(_device, old, null);
        _swapchain = sc;
        uint ic = 0;
        vkGetSwapchainImagesKHR(_device, sc, &ic, null);
        _images = new ulong[ic];
        fixed (ulong* pi = _images) vkGetSwapchainImagesKHR(_device, sc, &ic, pi);
        _sw = (int)w; _sh = (int)h;
    }

    private void Barrier(ulong image, int oldLayout, int newLayout, uint srcAccess, uint dstAccess)
    {
        var b = new VkImageMemoryBarrier
        {
            sType = 45, srcAccessMask = srcAccess, dstAccessMask = dstAccess, oldLayout = oldLayout, newLayout = newLayout,
            srcQueueFamilyIndex = uint.MaxValue, dstQueueFamilyIndex = uint.MaxValue, image = image,
            subresourceRange = new VkImageSubresourceRange { aspectMask = 1, levelCount = 1, layerCount = 1 },
        };
        vkCmdPipelineBarrier(_cmd, 0x1000 | 0x1, 0x1000 | 0x2000, 0, 0, null, 0, null, 1, &b);
    }

    private static VkImageSubresourceLayers Color() => new() { aspectMask = 1, layerCount = 1 };

    private (ulong, ulong, nint) HostBuffer(long size)
    {
        var bci = new VkBufferCreateInfo { sType = 12, size = (ulong)size, usage = 0x1 | 0x2 };
        Check(vkCreateBuffer(_device, &bci, null, out ulong buffer), "vkCreateBuffer");
        VkMemoryRequirements req;
        vkGetBufferMemoryRequirements(_device, buffer, &req);
        ulong mem = Allocate(req, 0x2 | 0x4);
        vkBindBufferMemory(_device, buffer, mem, 0);
        void* p;
        Check(vkMapMemory(_device, mem, 0, (ulong)size, 0, &p), "vkMapMemory");
        return (buffer, mem, (nint)p);
    }

    private (ulong, ulong) DeviceImage(int w, int h)
    {
        var ici = new VkImageCreateInfo
        {
            sType = 14, imageType = 1, format = 44, extent = new((uint)w, (uint)h, 1), mipLevels = 1, arrayLayers = 1,
            samples = 1, tiling = 0, usage = 0x1 | 0x2,
        };
        Check(vkCreateImage(_device, &ici, null, out ulong image), "vkCreateImage");
        VkMemoryRequirements req;
        vkGetImageMemoryRequirements(_device, image, &req);
        ulong mem = Allocate(req, 0x1);
        vkBindImageMemory(_device, image, mem, 0);
        return (image, mem);
    }

    private ulong Allocate(VkMemoryRequirements req, uint wanted)
    {
        var props = new VkPhysicalDeviceMemoryProperties();
        vkGetPhysicalDeviceMemoryProperties(_phys, &props);
        uint* types = (uint*)props.memoryTypes;                 // {propertyFlags, heapIndex} pairs
        for (uint i = 0; i < props.memoryTypeCount; i++)
            if ((req.memoryTypeBits & (1u << (int)i)) != 0 && (types[2 * i] & wanted) == wanted)
            {
                var ai = new VkMemoryAllocateInfo { sType = 5, allocationSize = req.size, memoryTypeIndex = i };
                Check(vkAllocateMemory(_device, &ai, null, out ulong mem), "vkAllocateMemory");
                return mem;
            }
        throw new InvalidOperationException("no suitable Vulkan memory type");
    }

    private static int DeviceType(nint d)
    {
        var p = new VkPhysicalDeviceProperties();
        vkGetPhysicalDeviceProperties(d, &p);
        return p.deviceType;
    }

    private static string DeviceName(nint d)
    {
        var p = new VkPhysicalDeviceProperties();
        vkGetPhysicalDeviceProperties(d, &p);
        return Marshal.PtrToStringUTF8((nint)p.deviceName) ?? "?";
    }

    private static nint Proc(nint instance, string name)
    {
        using var n = new Utf8(name);
        nint f = vkGetInstanceProcAddr(instance, n.Ptr);
        return f != 0 ? f : throw new InvalidOperationException($"{name} not found");
    }

    private static void Check(int r, string what)
    {
        if (r < 0) throw new InvalidOperationException($"{what} failed ({r})");
    }

    public void Dispose()
    {
        if (_device == 0) return;
        vkDeviceWaitIdle(_device);
        vkDestroyFence(_device, _fence, null);
        vkDestroySemaphore(_device, _imageReady, null);
        vkDestroySemaphore(_device, _renderDone, null);
        if (_swapchain != 0) vkDestroySwapchainKHR(_device, _swapchain, null);
        foreach (var b in new[] { _staging, _readback }) vkDestroyBuffer(_device, b, null);
        vkDestroyImage(_device, _src, null);
        foreach (var m in new[] { _stagingMem, _readbackMem, _srcMem }) vkFreeMemory(_device, m, null);
        vkDestroyCommandPool(_device, _pool, null);
        vkDestroyDevice(_device, null);
        vkDestroySurfaceKHR(_instance, _surface, null);
        vkDestroyInstance(_instance, null);
    }

    private readonly struct Utf8 : IDisposable
    {
        public readonly byte* Ptr;
        public Utf8(string s) => Ptr = (byte*)Marshal.StringToCoTaskMemUTF8(s);
        public void Dispose() => Marshal.FreeCoTaskMem((nint)Ptr);
    }

    // ---- Vulkan 1.0 + WSI structures (x64) ----
    [StructLayout(LayoutKind.Sequential)] private struct VkApplicationInfo { public int sType; public void* pNext; public byte* pApplicationName; public uint applicationVersion; public byte* pEngineName; public uint engineVersion; public uint apiVersion; }
    [StructLayout(LayoutKind.Sequential)] private struct VkInstanceCreateInfo { public int sType; public void* pNext; public uint flags; public VkApplicationInfo* pApplicationInfo; public uint enabledLayerCount; public byte** ppEnabledLayerNames; public uint enabledExtensionCount; public byte** ppEnabledExtensionNames; }
    [StructLayout(LayoutKind.Sequential)] private struct VkWin32SurfaceCreateInfoKHR { public int sType; public void* pNext; public uint flags; public nint hinstance; public nint hwnd; }
    [StructLayout(LayoutKind.Sequential)] private struct VkQueueFamilyProperties { public uint queueFlags, queueCount, timestampValidBits; public VkExtent3D minImageTransferGranularity; }
    [StructLayout(LayoutKind.Sequential)] private struct VkDeviceQueueCreateInfo { public int sType; public void* pNext; public uint flags, queueFamilyIndex, queueCount; public float* pQueuePriorities; }
    [StructLayout(LayoutKind.Sequential)] private struct VkDeviceCreateInfo { public int sType; public void* pNext; public uint flags, queueCreateInfoCount; public VkDeviceQueueCreateInfo* pQueueCreateInfos; public uint enabledLayerCount; public byte** ppEnabledLayerNames; public uint enabledExtensionCount; public byte** ppEnabledExtensionNames; public void* pEnabledFeatures; }
    [StructLayout(LayoutKind.Sequential)] private struct VkExtent2D(uint w, uint h) { public uint width = w, height = h; }
    [StructLayout(LayoutKind.Sequential)] private struct VkExtent3D(uint w, uint h, uint d) { public uint width = w, height = h, depth = d; }
    [StructLayout(LayoutKind.Sequential)] private struct VkOffset3D(int x, int y, int z) { public int x = x, y = y, z = z; }
    [StructLayout(LayoutKind.Sequential)] private struct VkSurfaceCapabilitiesKHR { public uint minImageCount, maxImageCount; public VkExtent2D currentExtent, minImageExtent, maxImageExtent; public uint maxImageArrayLayers, supportedTransforms, currentTransform, supportedCompositeAlpha, supportedUsageFlags; }
    [StructLayout(LayoutKind.Sequential)] private struct VkSurfaceFormatKHR { public int format, colorSpace; }
    [StructLayout(LayoutKind.Sequential)] private struct VkSwapchainCreateInfoKHR { public int sType; public void* pNext; public uint flags; public ulong surface; public uint minImageCount; public int imageFormat, imageColorSpace; public VkExtent2D imageExtent; public uint imageArrayLayers, imageUsage; public int imageSharingMode; public uint queueFamilyIndexCount; public uint* pQueueFamilyIndices; public uint preTransform, compositeAlpha; public int presentMode; public uint clipped; public ulong oldSwapchain; }
    [StructLayout(LayoutKind.Sequential)] private struct VkCommandPoolCreateInfo { public int sType; public void* pNext; public uint flags, queueFamilyIndex; }
    [StructLayout(LayoutKind.Sequential)] private struct VkCommandBufferAllocateInfo { public int sType; public void* pNext; public ulong commandPool; public int level; public uint commandBufferCount; }
    [StructLayout(LayoutKind.Sequential)] private struct VkCommandBufferBeginInfo { public int sType; public void* pNext; public uint flags; public void* pInheritanceInfo; }
    [StructLayout(LayoutKind.Sequential)] private struct VkBufferCreateInfo { public int sType; public void* pNext; public uint flags; public ulong size; public uint usage; public int sharingMode; public uint queueFamilyIndexCount; public uint* pQueueFamilyIndices; }
    [StructLayout(LayoutKind.Sequential)] private struct VkImageCreateInfo { public int sType; public void* pNext; public uint flags; public int imageType, format; public VkExtent3D extent; public uint mipLevels, arrayLayers; public int samples, tiling; public uint usage; public int sharingMode; public uint queueFamilyIndexCount; public uint* pQueueFamilyIndices; public int initialLayout; }
    [StructLayout(LayoutKind.Sequential)] private struct VkMemoryRequirements { public ulong size, alignment; public uint memoryTypeBits; }
    [StructLayout(LayoutKind.Sequential)] private struct VkPhysicalDeviceMemoryProperties { public uint memoryTypeCount; public fixed uint memoryTypes[64]; public uint memoryHeapCount; public fixed ulong memoryHeaps[32]; }
    [StructLayout(LayoutKind.Sequential)] private struct VkMemoryAllocateInfo { public int sType; public void* pNext; public ulong allocationSize; public uint memoryTypeIndex; }
    [StructLayout(LayoutKind.Sequential)] private struct VkSemaphoreCreateInfo { public int sType; public void* pNext; public uint flags; }
    [StructLayout(LayoutKind.Sequential)] private struct VkFenceCreateInfo { public int sType; public void* pNext; public uint flags; }
    [StructLayout(LayoutKind.Sequential)] private struct VkImageSubresourceRange { public uint aspectMask, baseMipLevel, levelCount, baseArrayLayer, layerCount; }
    [StructLayout(LayoutKind.Sequential)] private struct VkImageSubresourceLayers { public uint aspectMask, mipLevel, baseArrayLayer, layerCount; }
    [StructLayout(LayoutKind.Sequential)] private struct VkImageMemoryBarrier { public int sType; public void* pNext; public uint srcAccessMask, dstAccessMask; public int oldLayout, newLayout; public uint srcQueueFamilyIndex, dstQueueFamilyIndex; public ulong image; public VkImageSubresourceRange subresourceRange; }
    [StructLayout(LayoutKind.Sequential)] private struct VkBufferImageCopy { public ulong bufferOffset; public uint bufferRowLength, bufferImageHeight; public VkImageSubresourceLayers imageSubresource; public VkOffset3D imageOffset; public VkExtent3D imageExtent; }
    [StructLayout(LayoutKind.Sequential)] private struct VkClearColorValue { public fixed float rgba[4]; }
    [StructLayout(LayoutKind.Sequential)] private struct VkImageBlit { public VkImageSubresourceLayers srcSubresource; public VkOffset3D src0, src1; public VkImageSubresourceLayers dstSubresource; public VkOffset3D dst0, dst1; }
    [StructLayout(LayoutKind.Sequential)] private struct VkSubmitInfo { public int sType; public void* pNext; public uint waitSemaphoreCount; public ulong* pWaitSemaphores; public uint* pWaitDstStageMask; public uint commandBufferCount; public nint* pCommandBuffers; public uint signalSemaphoreCount; public ulong* pSignalSemaphores; }
    [StructLayout(LayoutKind.Sequential)] private struct VkPresentInfoKHR { public int sType; public void* pNext; public uint waitSemaphoreCount; public ulong* pWaitSemaphores; public uint swapchainCount; public ulong* pSwapchains; public uint* pImageIndices; public int* pResults; }
    // VkPhysicalDeviceProperties: apiVersion, driverVersion, vendorID, deviceID, deviceType, deviceName[256], uuid[16], limits (504), sparse (20)
    [StructLayout(LayoutKind.Sequential, Size = 824)] private struct VkPhysicalDeviceProperties { public uint apiVersion, driverVersion, vendorID, deviceID; public int deviceType; public fixed byte deviceName[256]; }

    private const string Lib = "vulkan-1";
    [DllImport(Lib)] private static extern int vkCreateInstance(VkInstanceCreateInfo* ci, void* alloc, out nint instance);
    [DllImport(Lib)] private static extern void vkDestroyInstance(nint instance, void* alloc);
    [DllImport(Lib)] private static extern nint vkGetInstanceProcAddr(nint instance, byte* name);
    [DllImport(Lib)] private static extern int vkEnumeratePhysicalDevices(nint instance, uint* count, nint* devices);
    [DllImport(Lib)] private static extern void vkGetPhysicalDeviceProperties(nint d, VkPhysicalDeviceProperties* p);
    [DllImport(Lib)] private static extern void vkGetPhysicalDeviceQueueFamilyProperties(nint d, uint* count, VkQueueFamilyProperties* p);
    [DllImport(Lib)] private static extern void vkGetPhysicalDeviceMemoryProperties(nint d, VkPhysicalDeviceMemoryProperties* p);
    [DllImport(Lib)] private static extern int vkGetPhysicalDeviceSurfaceSupportKHR(nint d, uint family, ulong surface, uint* supported);
    [DllImport(Lib)] private static extern int vkGetPhysicalDeviceSurfaceCapabilitiesKHR(nint d, ulong surface, VkSurfaceCapabilitiesKHR* caps);
    [DllImport(Lib)] private static extern int vkGetPhysicalDeviceSurfaceFormatsKHR(nint d, ulong surface, uint* count, VkSurfaceFormatKHR* formats);
    [DllImport(Lib)] private static extern int vkGetPhysicalDeviceSurfacePresentModesKHR(nint d, ulong surface, uint* count, int* modes);
    [DllImport(Lib)] private static extern void vkDestroySurfaceKHR(nint instance, ulong surface, void* alloc);
    [DllImport(Lib)] private static extern int vkCreateDevice(nint phys, VkDeviceCreateInfo* ci, void* alloc, out nint device);
    [DllImport(Lib)] private static extern void vkDestroyDevice(nint device, void* alloc);
    [DllImport(Lib)] private static extern void vkGetDeviceQueue(nint device, uint family, uint index, out nint queue);
    [DllImport(Lib)] private static extern int vkDeviceWaitIdle(nint device);
    [DllImport(Lib)] private static extern int vkCreateSwapchainKHR(nint device, VkSwapchainCreateInfoKHR* ci, void* alloc, ulong* swapchain);
    [DllImport(Lib)] private static extern void vkDestroySwapchainKHR(nint device, ulong swapchain, void* alloc);
    [DllImport(Lib)] private static extern int vkGetSwapchainImagesKHR(nint device, ulong swapchain, uint* count, ulong* images);
    [DllImport(Lib)] private static extern int vkAcquireNextImageKHR(nint device, ulong swapchain, ulong timeout, ulong semaphore, ulong fence, uint* index);
    [DllImport(Lib)] private static extern int vkQueuePresentKHR(nint queue, VkPresentInfoKHR* info);
    [DllImport(Lib)] private static extern int vkCreateCommandPool(nint device, VkCommandPoolCreateInfo* ci, void* alloc, out ulong pool);
    [DllImport(Lib)] private static extern void vkDestroyCommandPool(nint device, ulong pool, void* alloc);
    [DllImport(Lib)] private static extern int vkAllocateCommandBuffers(nint device, VkCommandBufferAllocateInfo* ai, nint* cmd);
    [DllImport(Lib)] private static extern int vkResetCommandBuffer(nint cmd, uint flags);
    [DllImport(Lib)] private static extern int vkBeginCommandBuffer(nint cmd, VkCommandBufferBeginInfo* bi);
    [DllImport(Lib)] private static extern int vkEndCommandBuffer(nint cmd);
    [DllImport(Lib)] private static extern int vkCreateBuffer(nint device, VkBufferCreateInfo* ci, void* alloc, out ulong buffer);
    [DllImport(Lib)] private static extern void vkDestroyBuffer(nint device, ulong buffer, void* alloc);
    [DllImport(Lib)] private static extern void vkGetBufferMemoryRequirements(nint device, ulong buffer, VkMemoryRequirements* req);
    [DllImport(Lib)] private static extern int vkCreateImage(nint device, VkImageCreateInfo* ci, void* alloc, out ulong image);
    [DllImport(Lib)] private static extern void vkDestroyImage(nint device, ulong image, void* alloc);
    [DllImport(Lib)] private static extern void vkGetImageMemoryRequirements(nint device, ulong image, VkMemoryRequirements* req);
    [DllImport(Lib)] private static extern int vkAllocateMemory(nint device, VkMemoryAllocateInfo* ai, void* alloc, out ulong memory);
    [DllImport(Lib)] private static extern void vkFreeMemory(nint device, ulong memory, void* alloc);
    [DllImport(Lib)] private static extern int vkBindBufferMemory(nint device, ulong buffer, ulong memory, ulong offset);
    [DllImport(Lib)] private static extern int vkBindImageMemory(nint device, ulong image, ulong memory, ulong offset);
    [DllImport(Lib)] private static extern int vkMapMemory(nint device, ulong memory, ulong offset, ulong size, uint flags, void** data);
    [DllImport(Lib)] private static extern int vkCreateSemaphore(nint device, VkSemaphoreCreateInfo* ci, void* alloc, out ulong semaphore);
    [DllImport(Lib)] private static extern void vkDestroySemaphore(nint device, ulong semaphore, void* alloc);
    [DllImport(Lib)] private static extern int vkCreateFence(nint device, VkFenceCreateInfo* ci, void* alloc, out ulong fence);
    [DllImport(Lib)] private static extern void vkDestroyFence(nint device, ulong fence, void* alloc);
    [DllImport(Lib)] private static extern int vkWaitForFences(nint device, uint count, ulong* fences, uint waitAll, ulong timeout);
    [DllImport(Lib)] private static extern int vkResetFences(nint device, uint count, ulong* fences);
    [DllImport(Lib)] private static extern int vkQueueSubmit(nint queue, uint count, VkSubmitInfo* submits, ulong fence);
    [DllImport(Lib)] private static extern void vkCmdPipelineBarrier(nint cmd, uint srcStage, uint dstStage, uint dep, uint memCount, void* mem, uint bufCount, void* buf, uint imgCount, VkImageMemoryBarrier* img);
    [DllImport(Lib)] private static extern void vkCmdCopyBufferToImage(nint cmd, ulong buffer, ulong image, int layout, uint count, VkBufferImageCopy* regions);
    [DllImport(Lib)] private static extern void vkCmdCopyImageToBuffer(nint cmd, ulong image, int layout, ulong buffer, uint count, VkBufferImageCopy* regions);
    [DllImport(Lib)] private static extern void vkCmdClearColorImage(nint cmd, ulong image, int layout, VkClearColorValue* color, uint count, VkImageSubresourceRange* ranges);
    [DllImport(Lib)] private static extern void vkCmdBlitImage(nint cmd, ulong src, int srcLayout, ulong dst, int dstLayout, uint count, VkImageBlit* regions, int filter);
}
