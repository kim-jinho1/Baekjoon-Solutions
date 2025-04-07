using System;

namespace BACKJOON
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            for (int i = 0; i < n; i++)
            {
                string[] input = Console.ReadLine().Split();
                input[0] = "god";
                for (int j = 0; j < input.Length; j++)
                    Console.Write(input[j]);
                Console.WriteLine();
            }
        }
    }
}