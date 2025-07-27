using System;
using System.Numerics; // Required for BigInteger

public class MainClass
{
    public static void Main(string[] args)
    {
        BigInteger a = BigInteger.Parse(Console.ReadLine());
        BigInteger b = BigInteger.Parse(Console.ReadLine());
        BigInteger c = BigInteger.Parse(Console.ReadLine());
        BigInteger result = (b - c) / a;
        Console.WriteLine(result);
    }
}