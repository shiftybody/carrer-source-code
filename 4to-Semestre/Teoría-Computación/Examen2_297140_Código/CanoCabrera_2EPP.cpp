// autor: Cano Cabrera, David Emmanuel
// fecha: 2017-10-10

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// funcion que determina si un caracter es un simbolo del alfabeto
bool esSimbolo(char c, string alfabeto[])
{
    for (int i = 0; i < alfabeto->length(); i++)
    {
        if (c == alfabeto[i][0])
        {
            return true;
        }
    }
    return false;
}

// funcion que determina si un estado es un estado del AFD
bool esEstado(string estado, string estados[])
{
    for (int i = 0; i < 4; i++)
    {
        if (estado == estados[i])
        {
            return true;
        }
    }
    return false;
}

// funcion que determina si un estado es un estado final del AFD
bool esEstadoFinal(string estado, string estadosFinales[])
{
    for (int i = 0; i < 2; i++)
    {
        if (estado == estadosFinales[i])
        {
            return true;
        }
    }
    return false;
}

bool estadoSiguiente(string estadoActual, string cadena, string estados[], string alfabeto[], string estadosFinales[], string tabla[][3])
{

    if (esEstadoFinal(estadoActual, estadosFinales) && cadena.length() == 0)
    {
        return true;
        cout << "Cadena aceptada" << endl;
    }

    // para cada simbolo de la cadena
    for (int i = 0; i < 4; i++)
    {
        // si el estado actual es igual al estado de la tabla
        if (estadoActual == estados[i])
        {

            // para cada simbolo del alfabeto
            for (int j = 0; j < 3; j++)
            {

                // si el simbolo de la cadena es igual al simbolo de la tabla

                if (cadena[0] == alfabeto[j][0])
                {

                    // si el estado siguiente es un estado del AFD
                    if (esEstado(tabla[i][j], estados))
                    {

                        cout << "    "  <<estadoActual << "                  " << cadena[0] << "                  " << tabla[i][j + 1] << endl;

                        cout << endl;
                        // si la cadena es aceptada
                        if (estadoSiguiente(tabla[i][j + 1], cadena.substr(1), estados, alfabeto, estadosFinales, tabla))
                        {
                            return true;
                        }
                    }
                }
            }
        }
    }

    return false;
}

int main()
{
    string estados[4];
    string alfabeto[2];
    string estadoInicial;
    string estadosFinales[2];
    string estadosSiguientes[4][3];
    string cadena;
    string estadoActual;

    bool aceptada = false;

    ifstream archivo;
    archivo.open("AFD.txt");
    if (archivo.is_open())
    {
        // lee los estados del AFD
        for (int i = 0; i < 4; i++)
        {
            archivo >> estados[i];
        }
        // imprime los estados del AFD
        cout << "Estados del AFD: ";
        for (int i = 0; i < 4; i++)
        {
            cout << estados[i] << " ";
        }

        // lee el alfabeto del AFD
        for (int i = 0; i < 2; i++)
        {
            archivo >> alfabeto[i];
        }

        // imprime el alfabeto del AFD
        cout << endl
             << "Alfabeto del AFD: ";
        for (int i = 0; i < 2; i++)
        {
            cout << alfabeto[i] << " ";
        }

        // lee el estado inicial del AFD
        archivo >> estadoInicial;

        // imprime el estado inicial del AFD
        cout << endl
             << "Estado inicial del AFD: " << estadoInicial << endl;

        // lee los estados finales del AFD
        for (int i = 0; i < 1; i++)
        {
            archivo >> estadosFinales[i];
        }

        // imprime los estados finales del AFD
        cout << "Estados finales del AFD: ";
        for (int i = 0; i < 2; i++)
        {
            cout << estadosFinales[i] << " ";
        }

        // lee la tabla de transiciones del AFD
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                archivo >> estadosSiguientes[i][j];
            }
        }

        // imprime la tabla de transiciones del AFD
        cout << endl
             << "Tabla de transiciones del AFD: " << endl;
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << estadosSiguientes[i][j] << " ";
            }
            cout << endl;
        }

        archivo.close();
    }

    cout << "Palabra w = ";
    cin >> cadena;
    estadoActual = estadoInicial;

    cout << "\nEstado actual     Caracter leido    Estado siguiente" << endl;
    // funcion recursiva que determina si la cadena es aceptada o no por el AFD
    aceptada = estadoSiguiente(estadoActual, cadena, estados, alfabeto, estadosFinales, estadosSiguientes);

    if (aceptada)
    {
        cout << "\n        Palabra w = "  << cadena << " ACEPTADA" <<endl;
    }
    else
    {
        cout << "\n        Palabra w = "  << cadena << " NO ACEPTADA" <<endl;
    }

    // wait for user to press any key
   
    system("pause"); 



    return 0;
}
