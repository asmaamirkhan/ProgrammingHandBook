using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Yirminici_Program
{
    class Program
    {
        static void Main(string[] args)
        {
            int x, s = 0, i = 1;
            x = Convert.ToInt32(Console.ReadLine());
            while (x > 0)
            {
                s = s + ((x % 2) * i);
                x = x / 2;
                i = i * 10;
            }
            Console.WriteLine(s);
            Console.ReadLine();
        }
    }
}
