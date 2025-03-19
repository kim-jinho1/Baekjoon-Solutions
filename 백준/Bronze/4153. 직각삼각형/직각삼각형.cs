using System;

class Program
{
    static void Main()
    {
        while (true)
        {
            long[] inputs = Array.ConvertAll(Console.ReadLine().Split(' '), long.Parse);
            Array.Sort(inputs);
            long a = inputs[0];
            long b = inputs[1];
            long c = inputs[2];
            if (a == 0 && b == 0 && c == 0)
                break;
            if (a * a + b * b == c * c)
                Console.WriteLine("right");
            else
                Console.WriteLine("wrong");
        }
    }
}