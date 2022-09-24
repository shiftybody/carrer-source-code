using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;

namespace LecturaRápida
{
    class Program
    {
        static void Main(string[] args)
        {
                string ruta = @"C:\Users\david\Desktop\murakami.txt";
                Console.BackgroundColor = ConsoleColor.White;
                Console.Clear();
                StreamReader lectura = File.OpenText(ruta); 
                string contenido = lectura.ReadToEnd();
                lectura.Close();
                string[] elementos = contenido.Split(' ', '\n', ',', ':', '.');
                Console.ForegroundColor = ConsoleColor.Red;

                int alto = Console.WindowHeight;
                int ancho = Console.WindowWidth;
            

                Console.WriteLine(alto+" "+ancho);
                Console.SetCursorPosition((ancho / 2)-17, alto / 2);
                Console.Write("Presiona una tecla para comenzar...");
                Console.ReadKey();
                Console.Clear();



            for (int x = 0; x < elementos.Length; x++)
                {
                
                    if (elementos[x].Length > 0)
                    {
                        if (elementos[x].Length % 2 == 0)
                        {
                            Console.SetCursorPosition(ancho / 2 - (elementos[x].Length/2), alto / 2); // para que la letra en rojo que justo en el centro de la ventana
                            Console.Write(elementos[x].Substring(0, (elementos[x].Length / 2) - 1));
                            Console.ForegroundColor = ConsoleColor.Red;
                            Console.Write(elementos[x].Substring((elementos[x].Length / 2) - 1, 2));
                            Console.ForegroundColor = ConsoleColor.Black;
                            Console.WriteLine(elementos[x].Substring((elementos[x].Length / 2) + 1));
                        }
                        else
                        {
                            Console.SetCursorPosition(ancho / 2 - ((elementos[x].Length / 2)+1), alto / 2); 
                            Console.Write(elementos[x].Substring(0, (elementos[x].Length / 2)));
                            Console.ForegroundColor = ConsoleColor.Red;
                            Console.Write(elementos[x].Substring((elementos[x].Length / 2), 1));
                            Console.ForegroundColor = ConsoleColor.Black;
                            Console.WriteLine(elementos[x].Substring((elementos[x].Length / 2) + 1));

                        }

                    System.Threading.Thread.Sleep(800);
                    Console.Clear();

                    

                    }


                }

            }
        }
}
