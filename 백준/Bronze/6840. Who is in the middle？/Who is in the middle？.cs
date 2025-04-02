using System;
using System.Collections.Generic;

namespace BACKJOON
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int a = int.Parse(Console.ReadLine());
            int b = int.Parse(Console.ReadLine());
            int c = int.Parse(Console.ReadLine());

            List<int> list = new List<int>();
            list.Add(a);
            list.Add(b);
            list.Add(c);
            list.Sort();
            Console.WriteLine(list[1]);
        }
    }
}