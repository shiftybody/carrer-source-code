using System;


namespace AreaRectangulo
{
    class Program
    {
        static void Main(string[] args)
        {
            /* Programa que lee la base y la altura de un triangulo
             * y da como salida su area. 
             * considerando entradas decimales.
             */

            Console.Write("Ingrese el valor de la altura: ");
            float A = float.Parse(Console.ReadLine());

            Console.Write("Ingrese el valor de la base: ");
            float B = float.Parse(Console.ReadLine());
            float Area = A * B;

            Console.Write("El area del triangulo es: " + Area); 
       

            Console.ReadKey(true);

        }
    }
}
