using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AreaCircunferencia
{
    class Program
    {
        static void Main(string[] args)
        {
            /*Prgrama que calcula el Area de una circunferencia 
             * dada la medida de su radio con PI = 3.1416 
            */

            Console.Write("Ingrese la media del radio: ");
            double R = double.Parse(Console.ReadLine());

            double PI = 3.1416;
            double Area = PI * R * R;  

            Console.WriteLine("El area de la circunferencia es: " + Area);

            Console.ReadKey(true);

        }
    }
}
