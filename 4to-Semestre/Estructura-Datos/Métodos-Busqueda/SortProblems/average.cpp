#include <iostream>
using namespace std;

struct materia
{
    char materia[20];
    float calificacion;
};

main()
{

    int n;
    cout << "Digite el numero de materias a ingresar: ";
    cin >> n;

    struct materia materias[n];

    // inputData
    for (int i = 0; i < n; i++)
    {
        cout << "Materia: ";
        cin >> materias[i].materia;
        cout << "Calificacion: ";
        cin >> materias[i].calificacion;
        cout << endl;
    }

    // InsertionSort
    for (int i = 1; i < n; i++)
    {
        int posActual = i;
        for (int j = i; j >= 0; j--)
        {
            if (materias[j].calificacion > materias[posActual].calificacion)
            {
                swap(materias[j], materias[posActual]);
                posActual = j;
            }
        }
    }

    // ascendent

    cout << "   Orden Ascendente" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << materias[i].materia << " ";
        cout << materias[i].calificacion << endl;
    }

    cout << endl;

    // descendent
    cout << "   Orden Descendiente" << endl;
    for (int i = n-1; i >= 0; i--)
    {
        cout << materias[i].materia << " ";
        cout << materias[i].calificacion << endl;
    }
}