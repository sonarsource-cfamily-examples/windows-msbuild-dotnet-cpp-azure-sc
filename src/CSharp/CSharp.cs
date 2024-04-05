
namespace CSharp
{
    public class CSharp
    {
        static int value;

        public static void Main(string[] args)
        {
            System.Console.WriteLine("Hello from C#!");
            value = 42;
            if (value <= int.MaxValue)
            {
                Native.hello(42, "called from C#");
            }
        }
    }
}

