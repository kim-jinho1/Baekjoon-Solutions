using System;

namespace BACKJOON
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());

            int[] arr = Array.ConvertAll(Console.ReadLine().Split(),int.Parse);
            int a = 0;
            int b = 0;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] > 0)
                {
                    a += (arr[i] / 30 + 1) * 10;
                    b += (arr[i] / 60 + 1) * 15;
                }
            }

            if(a == b)
                Console.WriteLine("Y M " + a);
            else if (a > b)
                Console.WriteLine("M " + b);
            else
                Console.WriteLine("Y " + a);

        }
    }
}