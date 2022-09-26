#include <iostream>
using namespace std;
const int MAX = 20;

struct articulo
{
    char codigo[9];
    char producto[MAX];
    float precio;
};

void inputArticulo(int n, struct articulo art[])
{

    for (int i = 0; i < n; i++)
    {
        cout << "Codigo: ";
        cin >> art[i].codigo;

        cout << "Producto: ";
        cin >> art[i].producto;

        cout << "Precio: ";
        cin >> art[i].precio;

        cout << endl;
    }
}

void bubbleSort(int n, struct articulo art[])
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (art[j].precio > art[j + 1].precio)
            {
                swap(art[j], art[j + 1]);
            }
        }
    }
}

void selectionSort(int n, struct articulo art[])
{
    for (int i = 0; i < n; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (art[j].precio < art[min].precio)
            {
                min = j;
            }
        }
        swap(art[i], art[min]);
    }
}

void insertionSort(int n, struct articulo art[])
{
    for (int i = 1; i < n; i++)
    {
        int posActual = i;
        for (int j = i; j >= 0; j--)
        {
            if (art[j].precio > art[posActual].precio)
            {
                swap(art[j], art[posActual]);
                posActual = j;
            }
        }
    }
}

void printArticulos(int n, struct articulo art[])
{
    for (int i = 0; i < n; i++)
    {
        cout << "Codigo: " << art[i].codigo << " ";
        cout << "Producto: " << art[i].producto << " ";
        cout << "Precio: " << art[i].precio << " " << endl;
    }
}

void selectSortAlgorithm(int n, struct articulo art[])
{

    cout << "elige el método de ordenamiento \n";
    cout << "1. Bubble Sort";
    cout << "2. Selection Sort";
    cout << "3. Insertion Sort \n";
    cout << "tu seleccion: " ;

    int choice;
    cin >> choice;

    switch (choice)
    {
    case 1:
        bubbleSort(n, art);
        printArticulos(n, art);
    case 2:
        insertionSort(n, art);
        printArticulos(n, art);
    case 3:
        selectionSort(n, art);
        printArticulos(n, art);
    default:
        cout << "Opcion fuera del rango" << endl;
    }
}


int main()
{

    int n;
    cout << "Ingrese el numero de articulos a ingresar: ";
    cin >> n;

    struct articulo art[n];

    inputArticulo(n, art);

    selectSortAlgorithm(n, art);
}
