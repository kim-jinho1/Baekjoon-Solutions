namespace BACKJOON
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            double revolutions = n / 4.0;
            Console.WriteLine($"{revolutions:0.00}");
        }
    }
}