using System;
using System.Text;

public class BACKJOON
{
    public static void Main(string[] args)
    {
        int dataSetCount = int.Parse(Console.ReadLine());
        for (int i = 0; i < dataSetCount; i++)
        {
            string inputString = Console.ReadLine();
            StringBuilder result = new StringBuilder();

            if (!string.IsNullOrEmpty(inputString))
            {
                result.Append(inputString[0]);

                for (int j = 1; j < inputString.Length; j++)
                {
                    if (inputString[j] != inputString[j - 1])
                        result.Append(inputString[j]);
                }
            }
            Console.WriteLine(result.ToString());
        }
    }
}