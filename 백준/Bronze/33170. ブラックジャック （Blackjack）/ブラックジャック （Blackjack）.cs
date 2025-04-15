using System;

namespace BACKJOON
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int a = int.Parse(Console.ReadLine());
            int b = int.Parse(Console.ReadLine());
            int c = int.Parse(Console.ReadLine());

            if(a + b + c <= 21)
                Console.WriteLine("1");
            else
                Console.WriteLine("0");
        }
    }
}