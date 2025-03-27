using System;
using System.Numerics;

class Program
{
    static void Main()
    {
        BigInteger n = BigInteger.Parse(Console.ReadLine());
        for (int i = 0; i < n; i++)
        {
            BigInteger m = BigInteger.Parse(Console.ReadLine());
            if (m % 2 == 0)
                Console.WriteLine("even");
            else
                Console.WriteLine("odd");
        }
    }
}