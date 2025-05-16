namespace BACKJOON
{
    class Program
    {
        static void Main(string[] args)
        {
            while (true)
            {
                int n = int.Parse(Console.ReadLine()!);

                if (n == 0) break;

                int c = n * (n + 1) / 2;
                Console.WriteLine(c);
            }
        }
    }
}