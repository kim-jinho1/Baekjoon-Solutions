using System;

namespace BACKJOON
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            string a = Console.ReadLine();
            int b = 0;
            for (int i = 0; i < n; i++)
                b += a[i] - 64;
            Console.WriteLine(b);
        }
    }
}