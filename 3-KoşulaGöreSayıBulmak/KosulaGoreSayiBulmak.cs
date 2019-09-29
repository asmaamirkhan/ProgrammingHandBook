using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace KosulaGoreSayiBulmak
{
    class Program
    {
        static void Main(string[] args)
        {
            int i, adet = 0;
            for (i = 2; i < 100; i++)
                if ((i * 2 + 1) % 5 == 0)
                    adet++;
            Console.WriteLine("Adet= " + adet);
            Console.ReadLine();
        }
    }
}
