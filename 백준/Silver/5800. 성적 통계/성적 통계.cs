using System;
using System.Collections.Generic;
using System.Linq;

namespace BACKJOON
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            int w = 0;
            for (int i = 0; i < n; i++)
            {
                int[] arr = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
                List<int> list = new List<int>(arr);
                list.RemoveAt(0);
                list.Sort();
                for (int j = list.Count-1; j > 0; j--)
                {
                    if (list[j] - list[j - 1] > w)
                        w = list[j] - list[j - 1];
                }
                Console.WriteLine($"Class {i + 1}");
                Console.WriteLine($"Max {list.Max()}, Min {list.Min()}, Largest gap {w}");
                w = 0;
            }
        }
    }
}