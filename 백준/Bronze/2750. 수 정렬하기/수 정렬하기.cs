using System;
using System.Collections.Generic;

namespace BACKJOON
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            List<int> list = new List<int>();
            for (int i = 0; i < n; i++)
            {
                int num = int.Parse(Console.ReadLine());
                list.Add(num);
            }
            list.Sort();
            foreach (int num in list)
                Console.WriteLine(num);
        }
    }
}