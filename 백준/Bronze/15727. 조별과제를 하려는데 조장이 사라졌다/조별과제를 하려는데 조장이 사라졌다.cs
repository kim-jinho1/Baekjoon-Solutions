using System;

namespace BACKJOON
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int a = int.Parse(Console.ReadLine());
            int b = 0;
            while(a > 0)
            {
                a -= 5;
                b++;
            }
            Console.WriteLine(b);
        }
    }
}