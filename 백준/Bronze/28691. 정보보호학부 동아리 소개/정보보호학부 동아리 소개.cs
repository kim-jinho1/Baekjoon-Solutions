using System;

namespace BACKJOON
{
    internal class Program
    {
        static void Main(string[] args)
        {
            char a = char.Parse(Console.ReadLine());

            switch (a)
            {
                case 'M':
                    Console.WriteLine("MatKor");
                    break;
                case 'W':
                    Console.WriteLine("WiCys");
                    break;
                case 'C':
                    Console.WriteLine("CyKor");
                    break;
                case 'A':
                    Console.WriteLine("AlKor");
                    break;
                case '$':
                    Console.WriteLine("$clear");
                    break;
            }
        }
    }
}