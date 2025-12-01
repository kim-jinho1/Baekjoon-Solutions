using System.Numerics;

namespace BACKJOON
{
    class Program
    {
        static void Main(string[] args)
        {
            BigInteger n, a = 0, b = 1, c = 1;
            n = int.Parse(Console.ReadLine());
            for (BigInteger i = 2; i < n; i++)
            {
                a = b + c;
                c = b;
                b = a;
            }
            if (n == 0)
                Console.WriteLine(0);
            else if (n == 1 || n == 2)
                Console.WriteLine(1);
            else
                Console.WriteLine(a);
        }
    }
}