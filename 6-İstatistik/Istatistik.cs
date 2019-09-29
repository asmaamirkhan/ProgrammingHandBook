using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Istatistik
{
    class Program
    {
        static void Main(string[] args)
        {
            int i, t_adet = 0, c_adet = 0;
            float t_toplam = 0, t_ort, c_toplam = 0, c_ort;
            for (i = 2; i < 100; i++)
            {
                if (i % 2 == 1)
                {
                    t_adet++;
                    t_toplam = t_toplam + i;
                }
                else
                {
                    c_adet++;
                    c_toplam = c_toplam + i;
                }
            }
            t_ort = t_toplam / t_adet;
            c_ort = c_toplam / c_adet;
            Console.WriteLine(t_toplam);
            Console.WriteLine(t_ort);
            Console.WriteLine(c_toplam);
            Console.WriteLine(c_ort);
            Console.ReadLine();
        }
    }
}
