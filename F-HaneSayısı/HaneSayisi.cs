using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HaneSayisi
{
    class Program
    {
        static void Main(string[] args)
        {
            
            int ondalik_h = 0, tam_h = 0, t_sayi;
            double sayi, sayi1;
            sayi = Convert.ToDouble(Console.ReadLine());
            sayi1 = sayi;
            t_sayi = (int)sayi;
            while (t_sayi != 0)
            {
                t_sayi = t_sayi / 10;
                tam_h++;
            }

            while (sayi % 10 != 0)
            {
                sayi = sayi * 10;
                ondalik_h++;
            }
            Console.WriteLine("Tam kisminin hane sayisi= " + tam_h);
            if (sayi1 % 10 != 0)
                Console.WriteLine("Ondalik kisminin hane sayisi= " + (ondalik_h - 1));	
		else
			Console.WriteLine("Ondalik kisminin hane sayisi= " + (ondalik_h));
            Console.ReadLine();
        }
    }
}
