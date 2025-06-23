namespace BACKJOON
{
    class Program
    {
        static void Main(string[] args)
        {
            int a = int.Parse(Console.ReadLine());
            int cnt = 0;
            while (a >= 0)
            {
                if (a % 5 == 0)
                {
                    cnt += a / 5;
                    Console.WriteLine(cnt);
                    return;
                }
                a -= 3;
                cnt++;
            }
            Console.WriteLine(-1);
        }
    }
}