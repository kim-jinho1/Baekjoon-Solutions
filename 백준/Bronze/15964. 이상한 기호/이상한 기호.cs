using System;
using System.Numerics;

namespace BACKJOON
{
    internal class Program
    {
        static void Main(string[] args)
        {
            BigInteger[] arr = Array.ConvertAll(Console.ReadLine().Split(' '), BigInteger.Parse);

            Console.WriteLine((arr[0] + arr[1])*(arr[0] - arr[1]));
        }   
    }
}