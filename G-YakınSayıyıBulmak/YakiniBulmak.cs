using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace YakiniBulmak
{
    class Program
    {
        static void Main(string[] args)
        {
            
            int x, sayi, yakinlik, enyakin, i, enyakin2 = -1, yakinlik2 = -1;
            sayi = Convert.ToInt32(Console.ReadLine()); 
            x = Convert.ToInt32(Console.ReadLine());
            enyakin = x;
            yakinlik = Math.Abs(x - sayi);
            for (i = 0; i < 9; i++)
            {
                x = Convert.ToInt32(Console.ReadLine());
                if (Math.Abs(x - sayi) < yakinlik)
                {
                    yakinlik = Math.Abs(x - sayi);
                    enyakin = x;
                }
                else if (Math.Abs(x - sayi) == yakinlik)
                {
                    if (x != enyakin)
                    {
                        yakinlik2 = yakinlik;
                        enyakin2 = x;
                    }

                }
            }
            if (yakinlik2 == yakinlik)
                Console.WriteLine(enyakin2);
            Console.WriteLine(enyakin);
            Console.ReadLine();
        }
    }
}
