using System;
using System.Text;

class Program
{
    static void Main()
    {
        string input = Console.ReadLine();
        StringBuilder output = new StringBuilder();
        StringBuilder word = new StringBuilder();
        bool inTag = false;

        foreach (char c in input)
        {
            if (c == '<')
            {
                if (word.Length > 0)
                {
                    ReverseAppend(word, output);
                    word.Clear();
                }
                inTag = true;
                output.Append(c);
            }
            else if (c == '>')
            {
                inTag = false;
                output.Append(c);
            }
            else if (inTag)
            {
                output.Append(c);
            }
            else
            {
                if (c == ' ')
                {
                    ReverseAppend(word, output);
                    word.Clear();
                    output.Append(c);
                }
                else
                {
                    word.Append(c);
                }
            }
        }

        if (word.Length > 0)
        {
            ReverseAppend(word, output);
        }

        Console.WriteLine(output.ToString());
    }

    static void ReverseAppend(StringBuilder word, StringBuilder output)
    {
        for (int i = word.Length - 1; i >= 0; i--)
        {
            output.Append(word[i]);
        }
    }
}
