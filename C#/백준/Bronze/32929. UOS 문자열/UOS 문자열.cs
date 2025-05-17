using System;

namespace BACKJOON
{
    class Program
    {
        static void Main(string[] args)
        {
            int a = int.Parse(Console.ReadLine());

            if (a % 3 == 0)
                Console.WriteLine("S");
            else if (a % 3 == 1)
                Console.WriteLine("U");
            else if (a % 3 == 2)
                Console.WriteLine("O");
        }
    }
}
