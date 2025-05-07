using System;
using System.Numerics;

namespace BACKJOON
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            BigInteger a = 1;
            int b = 0;
            for (int i = 1; i <= n; i++)
                a *= i;

            while (true)
            {
                if (a == 0 || a % 10 != 0)
                    break;
                b++;
                a /= 10;
            }

            Console.WriteLine(b);
        }
    }
}