using System;

namespace BACKJOON
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int a = int.Parse(Console.ReadLine());
            for (int i = 0; i < a; i++)
            {
                int[] arr =  Array.ConvertAll(Console.ReadLine().Split(','), int.Parse);
                Console.WriteLine(arr[0] + arr[1]);
            }
        }
    }
}