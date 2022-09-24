using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Ejercicio4._10
{
    class Program
    {
        static void Main(string[] args)
        {
            /*Algoritmo que determina el sueldo y horas totales trabajadas 
             * de un empleado dado el pago por hora y las horas trabajadas por día */

            int SH = 0;

            Console.Write("Ingrese el pago por hora: ");
            double PH = double.Parse(Console.ReadLine());

            int D = 1;

            do
            {
                Console.Write("Ingrese las horas trabajadas el día " + D + ": "); 
                int HT = int.Parse(Console.ReadLine());
                SH = SH + HT;
                D = D + 1;
            } while (D <= 6); 

            double SU = SH * PH;
            Console.WriteLine("Las horas laboradas son: " + SH);
            Console.WriteLine("El sueldo es: " + SU);

            Console.ReadKey(true);
        }


    }
}
