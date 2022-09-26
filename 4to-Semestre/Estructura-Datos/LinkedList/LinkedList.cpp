#include <iostream>
using namespace std;

struct Nodo
{
    int dato;
    Nodo *siguiente;
};

// insertar elemento en la lista enlazada

void insertarLista(Nodo *&lista, int n)
{
    // 1. Crear un nuevo nodo
    Nodo *nuevo_nodo = new Nodo();

    // 2. Asignar el dato al nuevo nodo
    nuevo_nodo->dato = n;

    // 3. Asignar el puntero siguiente del nuevo nodo
    // (crear dos nodos auxiliares y asignar lista al primero de ellos)
    Nodo *aux1 = lista;
    Nodo *aux2;

    // 4. Insertar el elemento a la lista
    while (aux1 != NULL && aux1->dato < n)
    {
        aux2 = aux1;
        aux1 = aux1->siguiente;
    }

    if (lista == aux1)
    {
        lista = nuevo_nodo;
    }
    else
    {
        aux2->siguiente = nuevo_nodo;
    }

    nuevo_nodo->siguiente = aux1;
}

// funcion que pregunta si quiere volver a ingresar elementos a la lista
void pregunta(Nodo *&lista, int &n)
{
    char respuesta;
    cout << "Desea ingresar otro elemento a la lista? (s/n): ";
    cin >> respuesta;
    if (respuesta == 's' || respuesta == 'S')
    {
        cout << "Ingrese un numero: ";
        cin >> n;
        insertarLista(lista, n);
        pregunta(lista, n);
    }
}

// mostrar lista enlazada
void mostrarLista(Nodo *lista)
{

    // 1. Crear un nuevo nodo(actual).
    Nodo *actual = new Nodo();

    // 2. Igualar ese nuevo nodo(actual) a lista.
    actual = lista;

    cout << endl;

    // 3. Recorrer la lista de inicio a fin.
    while (actual != NULL)
    {
        cout << actual->dato << " -> ";
        actual = actual->siguiente;
    }

    cout << endl;

}

// buscar elemento en la lista
void buscarLista(Nodo *lista, int n){

    // bandera que 
    bool band = false;

    // 1. crear un nuevo nodo actual
    Nodo *actual = new Nodo();

    // 2. igualar ese nuevo nodo(actual) a la lista;
    actual = lista;

    // 3. Recorrer la lista de inicio a fin
    while((actual != NULL) && (actual -> dato <= n)){
        // 4. Determinar si el elemento existe o no no en la lista
        if(actual -> dato == n){
            band = true;
        }
        actual = actual -> siguiente;
    }

    // 4. Mostrar el resultado de la busqueda 
    if(band == true){
            cout << "\nEl elemento " << n << " si se encuentra en la lista" << endl;
    }
    else{
        cout << "\nEl elemento " << n << " no se encuentra en la lista" << endl;
    }
}

void eliminarNodo(Nodo *&lista, int n){
    

    // 1. Preguntar si la lista no esta vacía
    if(lista != NULL){
        // 2  crear un *aux_borrar y *anterior = NULL
        Nodo *aux_borrar;
        Nodo *anterior;
        // 3. igualar aux_borrar a la lista. 
        aux_borrar = lista;

        // 4. Recorrer la lista
        while((aux_borrar != NULL) && (aux_borrar -> dato != n)){
            anterior = aux_borrar;
            aux_borrar = aux_borrar -> siguiente;
        }

        if(aux_borrar == NULL){
            cout << "\nEl elemento no existe" << endl;
        }

        // 5. Eliminar elemento
        else if(anterior == NULL){
            lista = lista -> siguiente;
            delete aux_borrar;
            cout << "\nElemento eliminado exitosamente" << endl;
        }
        else {
            anterior -> siguiente = aux_borrar -> siguiente;
            delete aux_borrar;
            cout << "\nElemento eliminado exitosamente" << endl;
        }
    }
}

int main()
{
    Nodo *lista = NULL;
    int option;
    int n;

    cout << "\n--- Bienvenido al Menu --- \n" << endl;

    while (true)
    {
        cout << "1. Insertar elemento" << endl;
        cout << "2. Mostrar elementos" << endl;
        cout << "3. Buscar elemento" << endl;
        cout << "4. Eliminar elementos" << endl;
        cout << "5. Salir" << endl;
        cout << "\nOpcion -> ";
        cin >> option;
        switch (option)
        {
        case 1:
            cout << "Ingrese un numero: ";
            cin >> n;
            insertarLista(lista, n);
            pregunta(lista, n);
            break;
        case 2:
            mostrarLista(lista);
            break;
        case 3: 
            cout << "Ingrese el elemento a buscar: ";
            cin >> n;
            buscarLista(lista, n);
            break;
        case 4:
            cout << "Ingrese el elemento a eliminar: ";
            cin >> n;
            eliminarNodo(lista, n);
            break;
        case 5:
            goto end;
        }
        cout << endl;
    }
    end:;
    return 0;
}
