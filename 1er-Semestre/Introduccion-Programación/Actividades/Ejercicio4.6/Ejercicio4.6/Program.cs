using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Ejercicio4._6
{
    class Program
    {
        static void Main(string[] args)
        {
            /*Algoritmo que determina cuanto ahorrara una persona
             * en un año y cuanto lleva ahorrado cada mes dada 
             * una cantidad mensual*/

            double AH= 0;
            int M = 1; 

            while (M <= 12)
            {
                Console.Write("Ingrese la cantidad a guardar: ");
                int CA = int.Parse(Console.ReadLine());

                AH = AH + CA;

                Console.WriteLine("El ahorro al final del mes: " + M + " es " + AH ); // Sugeriria: "El ahorro al finalizar el mes: "

                M++; 

            }
            Console.WriteLine("El ahorro final es: " + AH);
            Console.ReadKey(true);
        }
    }
}
