using System;
namespace BACKJOON
{
    class Program
    {
        static void Main(string[] args)
        {
            string str = null;
            int count;
            while (true)
            {
                count = 0;
                str = Console.ReadLine();
                if (str == "*")
                    break;
                if (str.Length < 26)
                {
                    Console.WriteLine("N");
                    continue;
                }
                for (int i = 0; i < 26; i++)
                {
                    if (str.Contains((char)('A' + i)) || str.Contains((char)('a' + i)))
                        count++;
                }
                if(count >= 26)
                    Console.WriteLine("Y");
                else
                    Console.WriteLine("N");
            }
        }
    }
}