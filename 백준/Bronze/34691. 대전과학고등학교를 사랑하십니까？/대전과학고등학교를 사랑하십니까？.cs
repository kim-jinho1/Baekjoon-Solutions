using System;

namespace BACKJOON
{
    class Program
    {
        static void Main(string[] args)
        {
            string str = null;
            while (true)
            {
                str = Console.ReadLine();
                if (str == "end")
                    break;
                else if (str == "animal")
                    Console.WriteLine("Panthera tigris");
                else if (str == "flower")
                    Console.WriteLine("Forsythia koreana");
                else if (str == "tree")
                    Console.WriteLine("Pinus densiflora");
            }
        }
    }
}