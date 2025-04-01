using System;

namespace BACKJOON
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int[] a = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);

            int[,] arr1 = new int[a[0], a[1]];
            int[,] arr2 = new int[a[0], a[1]];

            for (int i = 0; i < a[0]; i++)
            {
                string[] s = Console.ReadLine().Split();
                for (int j = 0; j < a[1]; j++)
                    arr1[i, j] = int.Parse(s[j]);
            }

            for (int i = 0; i < a[0]; i++)
            {
                string[] s = Console.ReadLine().Split();
                for (int j = 0; j < a[1]; j++)
                    arr2[i, j] = int.Parse(s[j]);
            }

            for (int i = 0; i < a[0]; i++)
            {
                for (int j = 0; j < a[1]; j++)
                    Console.Write($"{arr1[i, j] + arr2[i, j]} ");
                Console.WriteLine();
            }
        }
    }
}