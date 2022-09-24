using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace GananciaUva
{
    class Program
    {
        static void Main(string[] args)
        {
            /*algoritmo que calcula la ganancia de la uva, segun su tipo
             * tamaño, precio inicial y kilos de la misma
             */

            Console.Write("Ingrese el tipo de uva: ");
            char TI = char.Parse(Console.ReadLine());

            Console.Write("Ingrese el tama;o de la uva: ");
            int TA = int.Parse(Console.ReadLine());

            Console.Write("Ingrese el precio de la uva: ");
            double P = double.Parse(Console.ReadLine());

            Console.Write("Ingrese los kilos de uva: ");
            int K = int.Parse(Console.ReadLine());


            if (TI == 'A')
            {
                if (TA == 1)
                {
                    P = P + .2;
                }
                else
                {
                    P = P + .3;
                }
            }
            else
            {
                if (TA == 1)
                {
                    P = P - .3;
                }
                else
                {
                    P = P - .5;
                }
            }

            double GA = P * K;

            Console.WriteLine("la ganancia es: " + GA);
            Console.ReadKey(true);
        }
    }
}
