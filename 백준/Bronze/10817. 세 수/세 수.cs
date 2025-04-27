using System;
using System.Collections.Generic;

namespace BACKJOON
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int[] arr = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);

            List<int> list = new List<int>();
            list.Add(arr[0]);
            list.Add(arr[1]);
            list.Add(arr[2]);
            list.Sort();
            Console.WriteLine(list[1]);
        }
    }
}