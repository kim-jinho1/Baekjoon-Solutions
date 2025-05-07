using System;
using System.Linq;

namespace BACKJOON
{
    internal class Program
    {
        static void Main(string[] args)
        {
            while (true)
            {
                string a = Console.ReadLine();
                if (a == "0")
                    break;
                string b = new string(a.Reverse().ToArray());
                if (a == b)
                    Console.WriteLine("yes");
                else
                    Console.WriteLine("no");
            }
        }
    }
}