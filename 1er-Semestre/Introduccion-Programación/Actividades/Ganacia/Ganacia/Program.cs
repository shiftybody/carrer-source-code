using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Ganacia
{
    class Program
    {
        static void Main(string[] args)
        {
            /*Algoritmo que calcula la ganacia por litros de leche de un vendedor 
             */

            Console.WriteLine("Ingrese la cantidad de litros:  ");
            double L = double.Parse(Console.ReadLine());

            Console.WriteLine("Ingrese la cantidad a pagar por galón: ");
            double PG = double.Parse(Console.ReadLine());
            double TG = (L / 3.785);
            double GA = PG * TG;
            Console.WriteLine("La ganancia por la leche es " + GA);

            Console.ReadKey(true);
        }
    }
}
