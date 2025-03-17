using System;

class Program
{
    static void Main()
    {
        int cntCase = int.Parse(Console.ReadLine()!);

        for (int c = 0; c < cntCase; c++)
        {
            string[] input = Console.ReadLine()!.Split(' ');
            int h = int.Parse(input[0]);
            int w = int.Parse(input[1]);
            int n = int.Parse(input[2]);

            int floor = n % h;
            int numRoom = n / h + 1;

            if (n % h == 0)
            {
                floor = h;
                numRoom--;
            }

            Console.Write(floor);
            if (numRoom < 10)
                Console.Write("0");
            Console.WriteLine(numRoom);
        }
    }
}