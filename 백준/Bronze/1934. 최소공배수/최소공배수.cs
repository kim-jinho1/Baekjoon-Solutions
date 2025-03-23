using System;

class Program
{
    static void Main()
    {
        int n = int.Parse(Console.ReadLine());
        for (int i = 0; i < n; i++)
        {
            string[] s = Console.ReadLine().Split(' ');
            int a = int.Parse(s[0]);
            int b = int.Parse(s[1]);
            Console.WriteLine(LeastCommonMultiple(a, b));
        }
    }

    static int LeastCommonMultiple(int a, int b)
    {
        int c, d = 0, n;
        c = a;
        d = b;
        while (true)
        {
            if (a == b)
            {
                n = a;
                break;
            }
            else if (a < b)
                a = a + c;
            else if (a > b)
                b = b + d;
        }

        return n;
    }
}