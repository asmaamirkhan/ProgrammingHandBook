using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NufusSayimi
{
    class Program
    {
        static void Main(string[] args)
        {
            int yil = 0, sa_nu = 500000, ga_nu = 900000;
            while (sa_nu < ga_nu)
            {
                sa_nu = (int)(sa_nu + (sa_nu * 2.5 / 100));
                ga_nu = (int)(ga_nu + (ga_nu * 1.4 / 100));
                yil++;
            }
            Console.WriteLine(yil);
            Console.WriteLine(sa_nu);
            Console.ReadLine();
        }
    }
}
