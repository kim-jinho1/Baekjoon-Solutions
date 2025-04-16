using System;

namespace BACKJOON
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int a = int.Parse(Console.ReadLine());
            while (true)
            {
                char b = char.Parse(Console.ReadLine());

                if (b == '=')
                {
                    break;
                }

                int c = int.Parse(Console.ReadLine());
                switch (b)
                {
                    case '+':
                        a += c;
                        break;
                    case '-':
                        a -= c;
                        break;
                    case '*':
                        a *= c;
                        break;
                    case '/':
                        a /= c;
                        break;
                    case '%':
                        a %= c;
                        break;
                }
            }

            Console.WriteLine(a);
        }
    }
}