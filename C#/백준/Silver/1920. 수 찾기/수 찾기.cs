namespace BACKJOON
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            HashSet<int> set = new HashSet<int>(Array.ConvertAll(Console.ReadLine().Split(), int.Parse));

            int m = int.Parse(Console.ReadLine());
            int[] arr2 = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);

            for (int i = 0; i < m; i++)
            {
                if (set.Contains(arr2[i]))
                    Console.WriteLine("1");
                else
                    Console.WriteLine("0");
            }
        }
    }
}