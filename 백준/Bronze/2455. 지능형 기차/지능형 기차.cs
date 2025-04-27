using System;

namespace BACKJOON
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int n = 0;
            int max = int.MinValue;
            for (int i = 0; i < 4; i++)
            {
                string[] input = Console.ReadLine().Split();
                n -= int.Parse(input[0]);
                n += int.Parse(input[1]);
                if (n > max)
                    max = n;
            }
            Console.WriteLine(max);
        }
    }
}