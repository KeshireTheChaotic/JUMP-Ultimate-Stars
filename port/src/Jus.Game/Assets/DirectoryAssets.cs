namespace Jus.Game.Assets;

/// <summary>Read game files from an extracted data tree, preserving archive bytes.</summary>
public sealed class DirectoryAssets : IAssetSource
{
    public string Root { get; }

    public DirectoryAssets(string root)
    {
        Root = Path.GetFullPath(root);
        if (!Directory.Exists(Root))
            throw new DirectoryNotFoundException($"Game data directory not found: {Root}");
    }

    public byte[] Read(string path)
    {
        // Asset names are relative game paths, never host paths or parent traversal.
        string[] parts = path.Replace('\\', '/').Split('/');
        if (parts.Any(p => p.Length == 0 || p is "." or ".." || p.Contains(':')) ||
            Path.IsPathRooted(path))
            throw new ArgumentException($"Expected a relative game asset path: {path}", nameof(path));
        string file = Path.Combine(Root, Path.Combine(parts));
        try { return File.ReadAllBytes(file); }
        catch (FileNotFoundException ex)
        {
            throw new FileNotFoundException($"Game asset '{path}' not found under '{Root}'.", file, ex);
        }
        catch (DirectoryNotFoundException ex)
        {
            throw new FileNotFoundException($"Game asset '{path}' not found under '{Root}'.", file, ex);
        }
    }
}
