using System;
using System.Collections.Generic;
using System.Linq;

class Program
{
    static void Main()
    {
        int n = int.Parse(Console.ReadLine());
        List<int> list = new List<int>();
        int[] x;
        for (int i = 0; i < n; i++)
        {
            x = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
            list = x.ToList();
            list.Sort();
            Console.WriteLine(list[7]);
        }
    }
}