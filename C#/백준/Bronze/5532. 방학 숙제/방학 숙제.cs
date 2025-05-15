namespace BACKJOON
{
    class Program
    {
        static void Main(string[] args)
        {
            int l = int.Parse(Console.ReadLine());
            int a = int.Parse(Console.ReadLine());
            int b = int.Parse(Console.ReadLine());
            int c = int.Parse(Console.ReadLine());
            int d = int.Parse(Console.ReadLine());
            int sum = 0;
            int sum1 = 0;
            if (a % c == 0) sum = a / c;
            else sum = a / c + 1;
            if (b % d == 0) sum1 = b / d;
            else sum1 = b / d + 1;
            Console.Write(Math.Min(l - sum, l - sum1));
        }
    }
}