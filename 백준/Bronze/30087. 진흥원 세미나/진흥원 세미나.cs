using System;
using System.Collections.Generic;

namespace BACKJOON
{
    internal class Program
    {
        static void Main(string[] args)
        {
        string[] seminarNames = { "Algorithm", "DataAnalysis", "ArtificialIntelligence", "CyberSecurity", "Network", "Startup", "TestStrategy" };
        string[] seminarRooms = { "204", "207", "302", "B101", "303", "501", "105" };

        int N = int.Parse(Console.ReadLine());

        for (int i = 0; i < N; i++)
        {
            string seminar = Console.ReadLine().Trim();

            for (int j = 0; j < seminarNames.Length; j++)
            {
                if (seminarNames[j] == seminar)
                {
                    Console.WriteLine(seminarRooms[j]);
                    break;
                }
            }
        }
        }
    }
}