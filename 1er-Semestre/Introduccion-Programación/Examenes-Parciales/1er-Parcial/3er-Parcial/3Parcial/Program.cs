using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _3Parcial
{
    class Program
    {
        static void Main(string[] args)
        {
            /* Algoritmo que determina el cobro por entrega de un paquete 
             * o el rechazo dado la zona de entrega y el peso
             */

            Console.WriteLine("-------=-------ZONAS---------------");
            Console.WriteLine("1      America del Norte    $11.00");
            Console.WriteLine("2       America Central     $10.00");
            Console.WriteLine("3       America del Sur     $12.00");
            Console.WriteLine("4           Europa          $24.00");
            Console.WriteLine("5            Asia           $27.00");

            Console.Write("Ingrese el numero de zona a entregar: ");
            int ZN = int.Parse(Console.ReadLine());

            Console.Write("Ingrese el peso del paquete en gramos: ");
            int PG = int.Parse(Console.ReadLine());


            double Costo = 0;

            if (PG > 5000) {
                Console.WriteLine("El paquete no puede ser transportado");
                
            }
            else
            {
                switch (ZN)
                {
                    case 1:
                        Costo = PG * 11;
                        break;
                    case 2:
                        Costo = PG * 10;
                        break;
                    case 3:
                        Costo = PG * 12;
                        break;
                    case 4:
                        Costo = PG * 24;
                        break;
                    case 5:
                        Costo = PG * 27;
                        break;
                    default:
                        Console.WriteLine("La zona ingresada no es valida");
                        break;
                }

                Console.WriteLine("El costo del envio es de: " + Costo);

            }

            Console.ReadKey(true);

        }
    }
}
