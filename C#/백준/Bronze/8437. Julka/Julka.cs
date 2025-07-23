using System;
using System.Numerics;

public class BACKJOON
{
    public static void Main(string[] args)
    {
        BigInteger totalApples = BigInteger.Parse(Console.ReadLine());
        BigInteger difference = BigInteger.Parse(Console.ReadLine());
        BigInteger klaudiaApples = (totalApples + difference) / 2;
        BigInteger nataliaApples = totalApples - klaudiaApples;
        Console.WriteLine(klaudiaApples);
        Console.WriteLine(nataliaApples);
    }
}