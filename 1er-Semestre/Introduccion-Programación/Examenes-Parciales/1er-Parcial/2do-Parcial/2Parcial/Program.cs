using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _2Parcial
{
    class Program
    {
        static void Main(string[] args)
        {
            /* Algoritmo que determina el punto de encuentro 
             * de dos personas conociendo el Kilometro en el que se encuentran
             */

            int kZacatecas = 70 ;
            int kAguascalientes = 150;

            int distancia = kAguascalientes - kZacatecas;

            int kencuentro = kZacatecas + (distancia / 2);


            Console.WriteLine("El punto de encuentro sera en el kilometro: " + kencuentro);

            Console.ReadKey(true);

        }
    }
}
