using System;

namespace BACKJOON
{
    internal class Program
    {
        static void Main(string[] args)
        {
            for (int i = 0; i < 3; i++)
            {
                int[] arr = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
                int n = 0;
                for (int j = 0; j < 4; j++)
                {
                    n += arr[j];
                }
                switch (n)
                {
                    case 3:
                        Console.WriteLine("A");
                        break;
                    case 2:
                        Console.WriteLine("B");
                        break;
                    case 1:
                        Console.WriteLine("C");
                        break;
                    case 4:
                        Console.WriteLine("E");
                        break;
                    case 0:
                        Console.WriteLine("D");
                        break;
                }
            }
        }
    }
}