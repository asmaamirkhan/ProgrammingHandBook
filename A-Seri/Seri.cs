using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Seri
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = 10, i;
            float toplam = 0;
            for (i = 1; i <= 10; i++)
            {
                toplam = toplam + (i + (n - i) / faktoryel(i));
            }
            Console.WriteLine(toplam);
            Console.ReadLine();
        }
        public static float faktoryel(int a)
        {
            int f = 1, i;
            for (i = 2; i <= a; i++)
                f = f * i;
            return f;
        }
 
    }
}
