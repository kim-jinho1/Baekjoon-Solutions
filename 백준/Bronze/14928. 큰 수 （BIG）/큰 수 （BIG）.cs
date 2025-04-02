using System;
using System.Numerics;

namespace BACKJOON
{
    internal class Program
    {
        static void Main(string[] args)
        {
            BigInteger arr = BigInteger.Parse(Console.ReadLine());

            Console.WriteLine(arr % 20000303);
        }
    }
}