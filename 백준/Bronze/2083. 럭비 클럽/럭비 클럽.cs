using System;

namespace BACKJOON
{
    internal class Program
    {
        static void Main(string[] args)
        {
            while (true)
            {
                string[] a = Console.ReadLine().Split();
                if (a[0] == "#" && a[1] == "0" && a[2] == "0")
                    break;

                if (int.Parse(a[1]) > 17 || int.Parse(a[2]) >= 80)
                    Console.WriteLine($"{a[0]} Senior");
                else
                    Console.WriteLine($"{a[0]} Junior");
            }
        }
    }
}