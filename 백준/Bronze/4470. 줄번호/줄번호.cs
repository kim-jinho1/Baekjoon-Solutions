using System;

namespace BACKJOON
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            string[] arr = new string[n];
            for (int i = 0; i < n; i++)
                arr[i] =Console.ReadLine();

            for (int i = 0; i < n; i++)
                Console.WriteLine($"{i + 1}. {arr[i]}");
        }
    }
}