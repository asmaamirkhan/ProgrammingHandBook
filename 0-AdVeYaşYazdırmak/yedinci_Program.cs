using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AdVeYasYazdirmak
{
    class Program
    {
        static void Main(string[] args)
        {
            String isim;
            int yil, yas, buyil = 2017;
            Console.WriteLine("Isminizi giriniz: ");
            isim = Console.ReadLine();
            Console.WriteLine("Dogum yilinizi giriniz: ");
            yil = Convert.ToInt32(Console.ReadLine());
            yas = buyil - yil;
            Console.WriteLine("Isminiz: " + isim);
            Console.WriteLine("Yasiniz: " + yas);
            Console.ReadLine();
        }
    }
}
