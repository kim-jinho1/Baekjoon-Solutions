using System;

namespace BACKJOON
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int a = int.Parse(Console.ReadLine());
            string name1 = "";
            string name2 = "";
            int year1 = int.MaxValue;
            int month1 = int.MaxValue;
            int day1 = int.MaxValue;
            int year2 = int.MinValue;
            int month2 = int.MinValue;
            int day2 = int.MinValue;
            string[,] arr = new string[a, 4];
            for (int i = 0; i < a; i++)
            {
                string[] input = Console.ReadLine().Split();
                for (int j = 0; j < 4; j++)
                    arr[i, j] = input[j];
            }

            for (int i = 0; i < a; i++)
            {
                int day = int.Parse(arr[i, 1]);
                int month = int.Parse(arr[i, 2]);
                int year = int.Parse(arr[i, 3]);

                if (year > year2 || (year == year2 && month > month2) || (year == year2 && month == month2 && day > day2))
                {
                    name2 = arr[i, 0];
                    year2 = year;
                    month2 = month;
                    day2 = day;
                }
                if (year < year1 || (year == year1 && month < month1) || (year == year1 && month == month1 && day < day1))
                {
                    name1 = arr[i, 0];
                    year1 = year;
                    month1 = month;
                    day1 = day;
                }
            }
            Console.WriteLine(name2);
            Console.WriteLine(name1);
        }
    }
}