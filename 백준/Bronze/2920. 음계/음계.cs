using System;

class Program
{
    static void Main()
    {
        string[] input = Console.ReadLine().Split(' ');
        bool isAscending = true;
        bool isDescending = true;

        for (int i = 0; i < input.Length; i++)
        {
            if (input[i] != (i + 1).ToString())
                isAscending = false;
            if (input[i] != (8 - i).ToString())
                isDescending = false;
        }

        if (isAscending)
            Console.WriteLine("ascending");
        else if (isDescending)
            Console.WriteLine("descending");
        else
            Console.WriteLine("mixed");
    }
}
