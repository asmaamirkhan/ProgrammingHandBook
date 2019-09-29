using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Faktoryel
{
    class Program
    {
        static void Main(string[] args)
        {
            int i, x, f = 1;
            Console.WriteLine("n=");
            x = Convert.ToInt32(Console.ReadLine());
            for (i = 2; i <= x; i++)
                f = f * i;
            Console.WriteLine("n!=" + f);
            Console.ReadLine();
        }
    }
}
