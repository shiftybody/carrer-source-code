using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Ejercicio4._5
{
    class Program
    {
        static void Main(string[] args)
        {
            /*Algoritmo que calcula la estatura promedio de un 
             * grupo de personas cuya cantidad es desconocida */

            double SU = 0;

            Console.Write("Ingrese una estatura: ");
            double ES = double.Parse(Console.ReadLine());

            int C = 0;

            while (ES > 0)
            {
                SU = SU + ES;
                Console.Write("Ingrese otra estatura: ");
                ES = double.Parse(Console.ReadLine());
                C++;
            }

            double PR = 0; 

            if (C == 0)
            {
                Console.WriteLine("No hay estaturas");
            }
            else
            {
                PR = SU / C;               
            }

            Console.WriteLine("El promedio de las estaturas ingresadas es: " + PR);

            Console.ReadKey(true);
        }

    }
}
