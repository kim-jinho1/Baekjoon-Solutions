namespace BACKJOON
{
    class Program
    {
        static void Main(string[] args)
        {
            int a = int.Parse(Console.ReadLine());
            if(a >=1 && a <= 9)
                Console.WriteLine("1");
            else
            {
                bool isTrue = false;
                for (int i = 2; i <= 9; i++)
                {
                    for (int j = 1; j <= 9; j++)
                    {
                        if (i == a || j * i == a)
                        {
                            isTrue = true;
                            break;
                        }

                    }
                    if (isTrue)
                        break;
                }
                Console.WriteLine(isTrue ? "1" : "0");
            }
           
        }
    }
}