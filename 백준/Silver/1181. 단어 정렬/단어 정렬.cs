using System;
using System.Linq;

namespace BACKJOON
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int a = int.Parse(Console.ReadLine());
            var words = new string[a];
            for (int i = 0; i < a; i++)
                words[i] = Console.ReadLine();

            words = words
            .Distinct()
            .OrderBy(w => w.Length)
            .ThenBy(w => w)
            .ToArray();

            foreach (var word in words)
                Console.WriteLine(word);
        }
    }
}