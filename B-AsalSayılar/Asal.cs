using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Asal
{
    class Program
    {
        static void Main(string[] args)
        {
            int i, x, j;
            for (i = 11; i < 100; i++)
            {
                x = 2; j = 0;
                while (x != (int)(Math.Sqrt(i)) + 1)
                {
                    if (i % x == 0)
                    {
                        j = 1;
                        break;
                    }
                    else x++;
                }
                if (j == 0)
                    Console.WriteLine(i);
            }
            Console.ReadLine();
        }
    }
}
