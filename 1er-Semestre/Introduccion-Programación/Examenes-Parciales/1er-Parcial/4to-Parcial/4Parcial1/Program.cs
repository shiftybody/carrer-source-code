using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _4Parcial1
{
    class Program
    {
        static void Main(string[] args)
        {
            /*Algoritmo que calcula la estatura promedio de un 
               *grupo de personas cuya cantidad se desconocida */

            double Suma = 0;

            Console.Write("Ingrese una estatura: ");
            double Estatura = double.Parse(Console.ReadLine());

            int C = 0;

            while (Estatura > 0)
            {
                Suma = Suma + Estatura;
                Console.Write("Ingrese otra estatura: ");
                Estatura = double.Parse(Console.ReadLine());
                C++;
            }

            double Promedio = 0;

            if (C == 0)
            {
                Console.WriteLine("No hay estaturas");
            }
            else
            {
                Promedio = Suma / C;
            }

            Console.WriteLine("El promedio de las estaturas ingresadas es de: " + Promedio);

            Console.ReadKey(true);
        }
    }
}
