#include <iostream>
using namespace std;
const int MAX = 50;

// un struct si lo relacionamos a los conceptos abordados en 
// programación orientado a objetos, representa un objeto con 
// sus atributos o propiedades (pero sin sus comportamientos)

// sin embargo un struct en realidad es una estructura de datos que permite
// almacenar variables que NO son del mismo tipo a diferencia de los Arrays.

struct articulo
{
    char codigo[9];
    char producto[MAX];
    float precio;

};

void setProduct(int n, struct articulo x[])
{
    // usamos notación de punto para acceder (Asignar y Modificar)
    // a las propiedades del struct. Este tipo de sintaxis se conoce
    // como sintaxis de acceso a datos. 

    int i;
    for (i = 0; i < n; i++)
    {
        cout << "Codigo    :";
        cin >> x[i].codigo;
        cout << "Producto  :";
        cin >> x[i].producto;
        cout << "Precio    :";
        cin >> x[i].precio;
        cout << endl;
    }
    
}

void SortPrices(int n, struct articulo x[])
{
    
    int i, j;
    struct articulo temp;
    for (i = 1; i < n; i++)
        for (j = n - 1; j >= i; j--)
            if ((x[j - 1].precio, x[j].precio) < 0)
            {
                temp = x[j - 1];
                x[j - 1] = x[j];
                x[j] = temp;
            }
}

void printProducts(int n, struct articulo x[])
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << i+1 << ". ";
        cout << x[i].codigo << " t " << x[i].producto << " t " << x[i].precio << endl;
    }
}

int main()
{
    int n;

    //definimos un array de structs
    struct articulo art[MAX];

    cout << "Ingresar cantidad de producto a registrar:";
    cin >> n;
    leerproducto(n, art);
    cout << "Los productos ordenados por su precio son:";
    ordenarprecio(n, art);
    cout << endl;
    mostrar(n, art);

    return 0;
}



