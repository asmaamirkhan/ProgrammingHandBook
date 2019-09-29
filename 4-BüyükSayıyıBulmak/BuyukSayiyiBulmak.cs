using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BuyukSayiyiBulmak
{
    class Program
    {
        static void Main(string[] args)
        { 
            int sayi, i, buyuk;
            Console.WriteLine("10 Sayi giriniz:");
            sayi = Convert.ToInt32(Console.ReadLine());
            buyuk = sayi;
            for (i = 0; i < 9; i++)
            {
                sayi = Convert.ToInt32(Console.ReadLine());
                if (sayi > buyuk)
                    buyuk = sayi;
            }
            Console.WriteLine(buyuk);
            Console.ReadLine();
        }
    }
}
