using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace YuzlerIslemleri
{
    class Program
    {
        static void Main(string[] args)
        {
            int tam_sayi, kalan = 0;
            double sayi;
            sayi = Convert.ToDouble(Console.ReadLine());
            tam_sayi = (int)sayi;

            tam_sayi = tam_sayi / 100;
            kalan = tam_sayi % 10;

            if (kalan % 2 == 0)
            {
                kalan = kalan * kalan * kalan;
                is_tam_kare(kalan);
            }
            else
                Console.WriteLine("yok xD");
            Console.ReadLine();
        }
        private static void is_tam_kare(int x)
        {
            int i, t = 0;
            for (i = 0; i <= x; i++)
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
        }
    }
}
