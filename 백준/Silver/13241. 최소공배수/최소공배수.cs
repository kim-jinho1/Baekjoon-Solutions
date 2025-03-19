using System;

class Program
{
    static void Main()
    {
        string[] input = Console.ReadLine().Split(' ');
        long a = int.Parse(input[0]);
        long b = int.Parse(input[1]);

        long a1 = a;
        long b1 = b;

        while (true)
        {
            if (a == b)
            {
                Console.WriteLine(a);
                break;
            }
            else if (a > b)
                b += b1;
            else
                a += a1;
        }
    }
}