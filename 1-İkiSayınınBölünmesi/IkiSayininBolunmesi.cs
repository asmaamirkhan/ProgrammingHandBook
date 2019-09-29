using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace IkiSayininBolunmesi
{
    class Program
    {
        static void Main(string[] args)
        {
            int a, b, c;
            Console.Write("a=");
            a = Convert.ToInt32(Console.ReadLine());
            Console.Write("b=");
            b = Convert.ToInt32(Console.ReadLine());
            if (a < b)
            {

                c = a;
                a = b;
                b = c;
            }
            if (a % b == 0)
                Console.WriteLine("bolunebilir");
		    else Console.WriteLine("bolunmez");
            Console.ReadLine();
        }
    }
}
