using System;

namespace BACKJOON
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string a = Console.ReadLine();

            switch (a)
            {
                case "SONGDO":
                    Console.WriteLine("HIGHSCHOOL");
                    break;
                case "CODE":
                    Console.WriteLine("MASTER");
                    break;
                case "2023":
                    Console.WriteLine("0611");
                    break;
                case "ALGORITHM":
                    Console.WriteLine("CONTEST");
                    break;
            }
        }
    }
}