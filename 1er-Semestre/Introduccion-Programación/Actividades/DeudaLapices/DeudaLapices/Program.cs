using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DeudaLapices
{
    class Program
    {
        static void Main(string[] args)
        {
            /*algoritmo para determina cuánto se debe pagar por     X
             * cantidad de lápices considerando que si son 1000 o más el 
             * costo es de 85¢; de lo contrario, el precio es de 90¢*/

            Console.Write("Ingrese cantidad de lapices a pagar: ");
            int X = int.Parse(Console.ReadLine());

            double PAGO = 0;

            if (X >= 1000)
            {
                PAGO = X * .85;
            }
            else
            {
                PAGO = X * .9;
            }

            Console.WriteLine("El pago es: " + PAGO);
            Console.ReadKey(true);

        }
    }
}
