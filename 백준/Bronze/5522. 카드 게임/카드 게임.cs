using System;

namespace BACKJOON
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int n = 0;
            for (int i = 0; i < 5; i++)
            {
                int a = int.Parse(Console.ReadLine());
                n += a;
            }

            Console.WriteLine(n);
        }
    }
}