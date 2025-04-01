using System;

namespace BACKJOON
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int[] arr = Array.ConvertAll(Console.ReadLine().Split('/'), int.Parse);
            if (arr[0] + arr[2] < arr[1] || arr[1] == 0)
                Console.WriteLine("hasu");
            else
                Console.WriteLine("gosu");
        }
    }
}