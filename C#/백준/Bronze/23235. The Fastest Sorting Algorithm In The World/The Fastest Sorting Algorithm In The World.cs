using System;
using System.Linq;

namespace BACKJOON
{
    public class Program
{
    public static void Main(string[] args)
    {
        int caseNumber = 1;
        string line;

        while ((line = Console.ReadLine()) != null)
        {
            string[] parts = line.Split(' ');
            int n = int.Parse(parts[0]);

            if (n == 0)
                break;
            Console.WriteLine($"Case {caseNumber}: Sorting... done!");
            caseNumber++;
        }
    }
}
}
