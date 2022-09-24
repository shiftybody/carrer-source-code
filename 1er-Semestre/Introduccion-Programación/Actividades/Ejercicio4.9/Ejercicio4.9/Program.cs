using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Ejercicio4._9
{
    class Program
    {
        static void Main(string[] args)
        {
            /*Algoritmo que determina N cantidad de números
             *de la sucesión de Fibonacci */

            Console.Write("Ingrese la cantidad de números de la sucesión: ");
            int N = int.Parse(Console.ReadLine());

            int A = 0;
            int B = 1;

            Console.Write(A + " " + B);

            int M = 1;

            do
            {

                int C = A + B;
                Console.Write(" " + C);
                A = B;
                B = C;
                M++;

            } while (M <= (N - 2));  

                Console.ReadKey(true);
        }
    }
}
