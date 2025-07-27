using System.Numerics;

namespace BACKJOON
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            Console.Write(F(1, n));
        }

        private static BigInteger F(int n, int m)
        {
            if (n < m)
            {
                int p = (n + m) / 2;
                BigInteger r = F(n, p) * F(p + 1, m);
                return r;
            }
            return n;
        }
    }
}