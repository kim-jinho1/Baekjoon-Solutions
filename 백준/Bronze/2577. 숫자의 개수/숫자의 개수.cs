using System;

class Program
{
    static void Main()
    {
       int a = int.Parse(Console.ReadLine());
       int b = int.Parse(Console.ReadLine());
       int c = int.Parse(Console.ReadLine());

        string result = (a * b * c).ToString();

        int[] count = new int[10];

        for (int i = 0; i < result.Length; i++)
            count[result[i] - '0']++;

        for (int i = 0; i < 10; i++)
            Console.WriteLine(count[i]);
    }
}