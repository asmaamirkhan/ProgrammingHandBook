using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace RakamSayisi
{
    class Program
    {
        static void Main(string[] args)
        {
            int x, i;
            x = Convert.ToInt32(Console.ReadLine());
            for (i = 0; i < 3; i++)
            {
                Console.WriteLine(x % 10);
                x = x / 10;
            }
            Console.ReadLine();
        }
    }
}
