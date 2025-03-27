using System;
using System.Numerics;

class Program
{
    static void Main()
    {
        string[] n = Console.ReadLine().Split();
        BigInteger a = BigInteger.Parse(n[0]);
        BigInteger b = BigInteger.Parse(n[1]);

        Console.WriteLine(a + b);

    }
}