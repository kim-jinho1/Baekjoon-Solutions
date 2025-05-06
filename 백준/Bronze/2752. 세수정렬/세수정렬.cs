using System;

namespace BACKJOON
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int[] arr = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            Array.Sort(arr);
            foreach (int i in arr)
                Console.Write($"{i} ");
        }
    }
}