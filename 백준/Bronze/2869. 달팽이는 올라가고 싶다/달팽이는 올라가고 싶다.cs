using System;

namespace BACKJOON
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int[] arr = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
            int a = arr[0];
            int b = arr[1];
            int c = arr[2];
            int d = 0, e = 0;

            e = (c - b + (a - b - 1)) / (a - b);
            Console.WriteLine(e);
        }
    }
}