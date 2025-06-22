namespace BACKJOON
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            int[] dp = new int[1001];
            dp[1] = 1;
            dp[2] = 2;

            for (int i = 3; i <= n; i++)
            {
                dp[i] = (dp[i - 2] + dp[i - 1]) % 10007;
            }

            Console.WriteLine(dp[n]);
        }
    }
}