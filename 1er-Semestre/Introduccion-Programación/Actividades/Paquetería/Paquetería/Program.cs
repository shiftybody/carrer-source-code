using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Paquetería
{
    class Program
    {
        static void Main(string[] args)
        {
            /*algoritmo que determina el cobro de un paquete (o rechazo)
                         *          segun la zona y peso del paquete
                         *          
                         *Zona      Ubicacion                 Costo/gramo
                         *  1     America del Norte         $11
                         *  2     America Central           $10
                         *  3     America del Sur           $12
                         *  4     Europa                    $24
                         *  5     Asia                      $27
                         */

            Console.Write("Ingrese la zona a donde se dirige el paquete: ");
            int ZN = int.Parse(Console.ReadLine());

            Console.Write("Ingrese el peso del paquete en gramos: ");
            int PE = int.Parse(Console.ReadLine());

            if (PE > 5000)
            {
                Console.WriteLine("No se puede dar el servicio");
                Console.ReadKey(true);
            }
            else
            {
                double CO = 0;
                switch (ZN)
                {
                    case 1:
                        {
                            CO = PE * 11;
                            break;
                        }
                    case 2:
                        {
                            CO = PE * 10;
                            break;
                        }
                    case 3:
                        {
                            CO = PE * 12;
                            break;
                        }
                    case 4:
                        {
                            CO = PE * 24;
                            break;
                        }
                    case 5:
                        {
                            CO = PE * 27;
                            break;
                        }
                    default:
                        {
                            Console.WriteLine("la zona ingresada no es valida");
                            break;
                        }
                }

                Console.WriteLine("El costo del servicio es: " + CO);
                Console.ReadKey(true);

            }
        }
    }
}
