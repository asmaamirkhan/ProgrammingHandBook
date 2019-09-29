using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Istatistik2
{
    class Program
    {
        static void Main(string[] args)
        {
            int adet = 20, x, buyuk, kucuk, i, p = 0, j = 0;
            float ort = 0, p_ort = 0;
            x = Convert.ToInt32(Console.ReadLine());
            buyuk = x;
            kucuk = x;
            if (x > 0)
            {
                p_ort = p_ort + x;
                p++;
            }
            if (x > 100 && x < 200)
                j++;
            ort = ort + x;

            for (i = 0; i < adet - 1; i++)
            {
                x = Convert.ToInt32(Console.ReadLine());
                if (x > 0)
                {
                    p_ort = p_ort + x;
                    p++;
                }
                if (x > 100 && x < 200)
                    j++;

                if (x > buyuk)
                    buyuk = x;
                if (x < kucuk)
                    kucuk = x;
                ort = ort + x;

            }
            ort = ort / adet;
            p_ort = p_ort / p;
            Console.WriteLine(ort);
            Console.WriteLine(buyuk);
            Console.WriteLine(kucuk);
            Console.WriteLine(p_ort);
            Console.WriteLine(j);
            Console.ReadLine();
        }
    }
}
