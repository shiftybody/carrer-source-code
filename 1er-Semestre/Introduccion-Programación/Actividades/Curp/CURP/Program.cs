using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CURP
{
    class Program
    {
        static void Main(string[] args)
        {
            /*Aplicación de consola qe permita generar una CURP
    - Ingresar su nombre completo independiente > nombres, apellido paterno y apellido materno
    - Fecha de nacimiento
    - Entidad de origen (nacimiento)
    - Sexo biologico > H/M    */

            String nombres, aPaterno, aMaterno;  // = null para evitar "inconvenientes"
            String curp = null;
            Console.Write("Ingresa tu nombre > ");
            nombres = Console.ReadLine().ToUpper();

            Console.Write("Ingresa tu apellido Paterno > ");
            aPaterno = Console.ReadLine().ToUpper();

            Console.Write("Ingresa tu apellido Materno > ");
            aMaterno = Console.ReadLine().ToUpper();

            curp = curp + aPaterno.Substring(0, 1);  //Substring nos permite extraer de una cadena de texto 

            for (int x = 1; x < aPaterno.Length; x++)  // Length me dice las dimensiones de un string
            {
                if (aPaterno[x].Equals('A') || aPaterno[x].Equals('E') || aPaterno[x].Equals('I') || aPaterno[x].Equals('O') || aPaterno[x].Equals('U'))
                {
                    curp = curp + aPaterno[x];
                    break;
                }
            }

            curp = curp + aMaterno.Substring(0, 1);

            curp = curp + nombres.Substring(0, 1);


            Console.Write("Ingresa tu fecha de nacimiento  DD/MM/AA > ");
            String fecha = Console.ReadLine().ToUpper();

            /* for (int x = 0; x < fecha.Length; x++)
             {
                 string[] elementos = fecha.Split('/');
             } */

            curp = curp + fecha.Substring(6, 2);
            curp = curp + fecha.Substring(3, 2);
            curp = curp + fecha.Substring(0, 2);

            Console.Write("Ingresa el sexo hombre/mujer > ");
            String sexo = Console.ReadLine().ToUpper();

            curp = curp + sexo.Substring(0, 1);

            Console.Write("Ingresa la entidad de origen  > ");
            string entidad = Console.ReadLine().ToUpper();

            curp = curp + entidad.Substring(0, 2);

            string elementos = null;

            for (int x = 0; x < aPaterno.Length; x++)  //siguiente consonante del primer apellido
            {
                if (aPaterno[x].Equals('A') || aPaterno[x].Equals('E') || aPaterno[x].Equals('I') || aPaterno[x].Equals('O') || aPaterno[x].Equals('U'))
                {
                    //he intentado utilizar los operadores != pero no conseguí que trabajaran junto con el tipo de dato char. 
                }
                else  //Así que opte por añadir la acción dentro de esta otra sección 
                {
                    elementos = elementos + aPaterno[x];  //almaceno todas las consonantes en una variable

                }
            }
            curp = curp + elementos.Substring(1, 1); //agrego la segunda consonante
            elementos = null; //reinicio la variable que almacena las consonantes

            for (int x = 0; x < aMaterno.Length; x++) //siguiente consonante del segundo apellido
            {
                if (aMaterno[x].Equals('A') || aMaterno[x].Equals('E') || aMaterno[x].Equals('I') || aMaterno[x].Equals('O') || aMaterno[x].Equals('U'))
                {

                }
                else
                {
                    elementos = elementos + aMaterno[x];

                }
            }
            curp = curp + elementos.Substring(1, 1);
            elementos = null;

            for (int x = 0; x < nombres.Length; x++) //siguiente consonante del primer nombre
            {
                if (nombres[x].Equals('A') || nombres[x].Equals('E') || nombres[x].Equals('I') || nombres[x].Equals('O') || nombres[x].Equals('U'))
                {

                }
                else
                {
                    elementos = elementos + nombres[x];

                }
            }
            curp = curp + elementos.Substring(1, 1); //agrego la segunda consonante


            //homoclave
            Console.Write("Ingresa los dos digitos de la homoclave unica > ");
            string homo = Console.ReadLine().ToUpper();

            curp = curp + homo;


            Console.WriteLine(curp);
            Console.ReadKey(true);

        }
    }
}
