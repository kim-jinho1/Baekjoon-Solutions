using System;
using System.Linq;

class Program
{
    static void Main()
    {
        string[] input = Console.ReadLine().Split();
        int N = int.Parse(input[0]);
        int M = int.Parse(input[1]);

        int[] baskets = Enumerable.Range(1, N).ToArray();

        for (int k = 0; k < M; k++)
        {
            string[] swapInput = Console.ReadLine().Split();
            int i = int.Parse(swapInput[0]) - 1; 
            int j = int.Parse(swapInput[1]) - 1; 

            (baskets[i], baskets[j]) = (baskets[j], baskets[i]);
        }

        Console.WriteLine(string.Join(" ", baskets));
    }
}
