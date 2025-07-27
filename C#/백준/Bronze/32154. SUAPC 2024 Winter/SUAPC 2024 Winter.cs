namespace BACKJOON
{
    class Program
    {
        public static void Main(string[] args)
        {
            int rankNum = int.Parse(Console.ReadLine());
            Sol(rankNum);
        }

        public static void Sol(int rankNum)
        {
            Dictionary<int, Tuple<int, string[]>> answer = new Dictionary<int, Tuple<int, string[]>>
            {
                {1, Tuple.Create(11, new string[] {"A", "B", "C", "D", "E", "F", "G", "H", "J", "L", "M"})},
                {2, Tuple.Create(9, new string[] {"A", "C", "E", "F", "G", "H", "I", "L", "M"})},
                {3, Tuple.Create(9, new string[] {"A", "C", "E", "F", "G", "H", "I", "L", "M"})},
                {4, Tuple.Create(9, new string[] {"A", "B", "C", "E", "F", "G", "H", "L", "M"})},
                {5, Tuple.Create(8, new string[] {"A", "C", "E", "F", "G", "H", "L", "M"})},
                {6, Tuple.Create(8, new string[] {"A", "C", "E", "F", "G", "H", "L", "M"})},
                {7, Tuple.Create(8, new string[] {"A", "C", "E", "F", "G", "H", "L", "M"})},
                {8, Tuple.Create(8, new string[] {"A", "C", "E", "F", "G", "H", "L", "M"})},
                {9, Tuple.Create(8, new string[] {"A", "C", "E", "F", "G", "H", "L", "M"})},
                {10, Tuple.Create(8, new string[] {"A", "B", "C", "F", "G", "H", "L", "M"})}
            };

            Console.WriteLine(answer[rankNum].Item1);
            Console.WriteLine(string.Join(" ", answer[rankNum].Item2));
        }
    }
}