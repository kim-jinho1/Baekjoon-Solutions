using System;

class Program
{
    static void Main()
    {
        string str = Console.ReadLine();
        string result = "";
        int cnt = 0;

        for (int i = 0; i <= str.Length; i++)
        {
            if (i < str.Length && str[i] == 'X')
            {
                cnt++;
            }
            else
            {
                if (cnt % 2 == 1)
                {
                    Console.WriteLine("-1");
                    return;
                }
                
                result += new string('A', cnt / 4 * 4) + new string('B', cnt % 4);
                cnt = 0;

                if (i < str.Length)
                    result += ".";
            }
        }

        Console.WriteLine(result);
    }
}
