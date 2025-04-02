using System;
using System.Numerics;

namespace BACKJOON
{
    internal class Program
    {
        static void Main(string[] args)
        {
            BigInteger arr1 = BigInteger.Parse(Console.ReadLine());
            BigInteger arr2 = BigInteger.Parse(Console.ReadLine());

            Console.WriteLine(arr1 + arr2);
        }
    }
}