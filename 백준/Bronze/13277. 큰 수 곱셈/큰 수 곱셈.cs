using System;
using System.Numerics;

class Program
{
    static void Main()
    {
        string[] arr = Console.ReadLine().Split(' ');
            BigInteger a = BigInteger.Parse(arr[0]);
            BigInteger b = BigInteger.Parse(arr[1]);

        Console.WriteLine(a * b);

    }
}