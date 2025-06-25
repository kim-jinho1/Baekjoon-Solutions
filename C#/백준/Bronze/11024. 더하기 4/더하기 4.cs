namespace BACKJOON
{
    class Program
    {
        static void Main(string[] args)
        {
            int a = int.Parse(Console.ReadLine());
            for (int i = 0; i < a; i++)
            {
                string[] input = Console.ReadLine().Split();
                int b = 0;
                for (int j = 0; j < input.Length; j++)
                {
                    b += int.Parse(input[j]);
                }
                Console.WriteLine(b);
            }
        }
    }
}