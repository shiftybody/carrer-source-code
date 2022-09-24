using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NumPositivoNegativo
{
    class Program
    {
        static void Main(string[] args)
        {
            /*Algoritmo que determina si un numero es positivo o negativo*/

            Console.Write("Ingrese un numero: ");
            double NUM = double.Parse(Console.ReadLine());

            String R;

            if (NUM >= 0)
            {
                R = "POSITIVO";
            }
            else
            {
                R = "NEGATIVO";
            }

            Console.WriteLine("El numero es: " + R);
            Console.ReadKey(true);
        }
    }
}
