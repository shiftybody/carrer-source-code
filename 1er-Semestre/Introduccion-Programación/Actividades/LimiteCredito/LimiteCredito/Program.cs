using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LimiteCredito
{
    class Program
    {
        static void Main(string[] args)
        {
            /*
              * Algoritmo que asigna un nuevo limite de credito, 
              * dado el tipo de tarjeta y el limite actual
              * y devuelve el nuevo credito al usuario
              */

            Console.Write("Ingrese el tipo de tarjeta ");
            int TT = int.Parse(Console.ReadLine());

            Console.Write("Ingrese el limite actual del credito ");
            double LA = double.Parse(Console.ReadLine());

            double AC = 0;

            switch (TT)
            {
                case 1:
                    {
                        AC = LA * .25;
                        break;
                    }
                case 2:
                    {
                        AC = LA * .35;
                        break;
                    }
                case 3:
                    {
                        AC = LA * .40;
                        break;
                    }
                default:
                    {
                        AC = LA * .5;
                        break;
                    }
            }

            double NC = LA + AC;

            Console.WriteLine("El aumento de credito es: " + AC);
            Console.WriteLine("El nuevo limite de credito es: " + NC);

            Console.ReadKey(true);
        }
    }
}
