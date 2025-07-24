using System;

public class BACKJOON
{
    public static void Main(string[] args)
    {
        int treeAmpere = int.Parse(Console.ReadLine());

        string[] adapterInput = Console.ReadLine().Split(' ');
        int adapterWatt = int.Parse(adapterInput[0]);
        int adapterVolt = int.Parse(adapterInput[1]);

        int adapterAmpere = adapterWatt / adapterVolt;

        if (adapterAmpere >= treeAmpere)
            Console.WriteLine(1);
        else
            Console.WriteLine(0);
    }
}