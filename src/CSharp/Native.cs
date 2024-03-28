using System;
using System.Runtime.InteropServices;

namespace CSharp
{
    internal static class Native
    {
        [DllImport(nameof(Native), ExactSpelling = true, CharSet = CharSet.Ansi)]
        public static extern int hello(int param);
    }
}
