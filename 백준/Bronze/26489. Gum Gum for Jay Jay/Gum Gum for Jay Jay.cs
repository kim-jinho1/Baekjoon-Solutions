using System;

namespace BACKJOON
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string a; 
            int b = 0;
            while ((a = Console.ReadLine()) != null)
                b++;

            Console.WriteLine(b);
        }
    }
}