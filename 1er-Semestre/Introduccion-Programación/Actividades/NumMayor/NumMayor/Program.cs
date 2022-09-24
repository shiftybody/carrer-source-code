using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NumMayor
{
    class Program
    {
        static void Main(string[] args)
        {
            /*Algoritmo que calcula, de dos numeros ingresados, cual es el mayor*/

            Console.Write("Ingrese el primer numero: ");
            int A = int.Parse(Console.ReadLine());

            Console.Write("Ingrese el segundo numero: ");
            int B = int.Parse(Console.ReadLine());

            int M = 0;

            if (A > B)
            {
                M = A;
            }
            else
            {
                M = B;
            }

            Console.WriteLine("El mayor es: " + M);
            Console.ReadKey(true);
        }
    }
}
