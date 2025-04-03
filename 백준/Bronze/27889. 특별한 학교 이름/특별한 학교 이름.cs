using System;

namespace BACKJOON
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string arr = Console.ReadLine();

            if(arr == "NLCS")
                Console.WriteLine("North London Collegiate School");
            else if (arr == "BHA")
                Console.WriteLine("Branksome Hall Asia");
            else if (arr == "KIS")
                Console.WriteLine("Korea International School");
            else if (arr == "SJA")
                Console.WriteLine("St. Johnsbury Academy");
        }
    }
}