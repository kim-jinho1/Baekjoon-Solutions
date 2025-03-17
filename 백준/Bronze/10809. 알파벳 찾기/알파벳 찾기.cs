using System;
using System.Linq;

class Program
{
    static void Main()
    {
        string input = Console.ReadLine();

        for (int i = 97; i < 123; i++)
        {
            if (input.Contains(Convert.ToChar(i)))
            {
                Console.Write(input.IndexOf(Convert.ToChar(i)));
                Console.Write(" ");
            }
            else
                Console.Write("-1 ");
        }
    }
}