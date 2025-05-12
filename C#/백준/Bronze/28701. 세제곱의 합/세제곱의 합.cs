namespace BACKJOON
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine()!);
            int a = n * (n + 1) / 2;
            int b = a * a;

            int c = 0;
            for (int i = 1; i <= n; i++)
                c += (int)Math.Pow(i, 3);

            Console.WriteLine(a);
            Console.WriteLine(b);
            Console.WriteLine(c);
        }
    }
}