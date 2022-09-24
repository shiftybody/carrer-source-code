using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _1Parcial
{
    class Program
    {
        static void Main(string[] args)
        {
            /* 
             * Algoritmo que calcula el sueldo semanal de un trabajador dado 
             * el pago por hora y las horas trabajadas
             */

            Console.Write("Ingrese el pago por hora: ");
            double pagoHora = double.Parse(Console.ReadLine());

            int horasSemana = 0;
           

            for (int dia = 1; dia <= 6; dia++)
            {
                Console.Write("Ingrese las horas trabajadas en el día " + dia + " : ");
                int horasDia = int.Parse(Console.ReadLine());

                horasSemana = horasSemana + horasDia;

            }

            double sueldo = horasSemana * pagoHora;

            Console.WriteLine("El sueldo semanal. por: " + horasSemana + "  horas trabajadas, es: " + sueldo);
            Console.ReadKey(true);
        }
    }
}
