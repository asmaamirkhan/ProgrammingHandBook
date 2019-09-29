using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TamKare
{
    class Program
    {
        static void Main(string[] args)
        {
            int i, x, t = 0;
            x = Convert.ToInt32(Console.ReadLine());
            for (i = 0; i <= x / 2 + 1; i++)
            {
                if (x == i * i)
                {
                    t = 1;
                    break;
                }
            }
            if (t == 1)
                Console.WriteLine("tam kare");
		else
			Console.WriteLine("tam kare degil");
            Console.ReadLine();
        }
    }
}
