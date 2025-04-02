using System;

namespace BACKJOON
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int a = int.Parse(Console.ReadLine());
            long c = 1;
            for (int i = 1; i <= a; i++)
                c *= i;

            Console.WriteLine(c);
        }
    }
}