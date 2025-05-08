using System;

namespace 조건문
{
    class Program
    {
        static void Main(string[] args)
        {

            int i = int.Parse(Console.ReadLine());
            if(i >= 90)
            {
                Console.WriteLine("A");
            } 
            else if( i<= 89 && i >= 80)
            {
                Console.WriteLine("B");
            }
            else if (i <= 79 && i >= 70)
            {
                Console.WriteLine("C");
            }
            else if (i <= 69 && i >= 60)
            {
                Console.WriteLine("D");
            }
            else
            {
                Console.WriteLine("F");
            }
        }
    }
}