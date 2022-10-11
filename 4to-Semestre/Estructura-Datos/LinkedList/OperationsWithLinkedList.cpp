// operaciones con listas enlazadas

#include <iostream>
#include <string>
using namespace std;

// Estructura de un nodo simplemente enlazado
struct Node {
    int data;
    // puntero al siguiente nodo en la lista
    Node *next;
};

// prototipos de funciones

void insert(Node *&, int);
void showList(Node *);

int main() {
    // crear una lista simplemente enlazada
    Node *lista = NULL;
    // insertar elementos en la lista
    insert(lista, 5);
    insert(lista, 3);
    insert(lista, 7);

    // mostrar la lista
    traversal(lista);

    return 0;
}


// Insertar un nodo 
// objetivo: insertar un nuevo nodo de manera ordenada
// 1. Crear un nuevo nodo
// 2. Asignar a nuevo nodo el elemento a insertar en la lista
// nuevo_nodo->dato = x;
// 3. Crear dos nodos auxiliares para recorrer la lista y 
//   encontrar la posicion correcta para insertar el nuevo nodo
// 5. Insertar nodo en la lista

// recibe un puntero por referencia a la lista y el elemento a insertar 
void insert(Node *&list, int n) {
    // reservar memoria para el nuevo nodo
    Node *newNode = new Node();
    // asignar el valor al nuevo nodo
    newNode->data = n;
    // crear dos nodos auxiliares
    Node *aux1 = list;
    Node *aux2;

    // El algoritmo que vamos a utilizar va a permitir insertar 
    // un elemento en una lista ordenada de menor a mayor.


    // existen 3 casos de listas:
    // 1. la lista esta vacia
    // lista -> NULL
    // basta con asignar el nuevo nodo como el primer nodo de la lista

    // 2. ya tenemos un nodo en la lista
    // lista -> nuevo_nodo -> NULL

    // 3. tenemos mas de un nodo en la lista
    // lista -> nodo1 -> nodo2 -> ... -> NULL


    // existe 2 casos de insercion:
    // 1. insertar al principio de la lista (caso 2 y 3)
    // 2. insertar en el medio o al final de la  lista (caso 3)


    // 3. insertar en el medio o al final de la lista
    while ((aux1 != NULL) && (aux1->data < n)) {
        aux2 = aux1;
        // 
        aux1 = aux1->next;
    }

    if(list == aux1) {
        // insertar al principio de la lista
        list = newNode;
    } else {
        // insertar en el medio o al final de la lista
        // aux2 apunta al nodo anterior al que queremos insertar
        aux2->next = newNode;
    }

    // asignar el siguiente nodo del nuevo nodo
    newNode->next = aux1;
}

// mostrar la lista
// objetivo: mostrar los elementos de la lista
// 1. Crear un nuevo nodo actual
// 2. Igualar el nodo actual a la lista
// 3. Mientras el nodo actual no sea NULL, mostrar el dato del nodo actual
// (recorrer la lista)

void showList(Node *list) {
    Node *actual = new Node();
    actual = list;

    while(actual != NULL) {
        cout << actual->data << " -> ";
        actual = actual->next;
    }
}

// buscar un elemento en la lista
// objetivo: buscar un elemento en la lista
// 1. Crear un nuevo nodo actual
// 2. Igualar el nodo actual a la lista
// 3. Mientras el nodo actual no sea NULL, mostrar el dato del nodo actual
// (recorrer la lista)
// 4. Determinar si el elemento buscado esta en la lista
void search(Node *list, int n) {
    Node *actual = new Node();
    actual = list;
    bool found = false;

    while((actual != NULL) && (actual->data <= n)) {
        if(actual->data == n) {
            found = true;
        }
        actual = actual->next;
    }

    if(found == true) {
        cout << "El elemento " << n << " si esta en la lista" << endl;
    } else {
        cout << "El elemento " << n << " no esta en la lista" << endl;
    }
}

// eliminar un elemento de la lista
// objetivo: eliminar un elemento de la lista
// 1. Pregunto si la lista esta vacia
// 2. Crear dos nodos auxiliares para recorrer la lista
// *aux_borrar: nodo que quiero borrar y 
// *anterior: nodo anterior al nodo que quiero borrar
// 3. Igualar el nodo aux_borrar al inicio de la lista
// 4. Recorrer la lista hasta encontrar el nodo que quiero borrar
// 5. Eliminar el nodo de la lista

void deleteNode(Node *&list, int n) {
    if(list != NULL) {
        Node *aux_borrar;
        Node *anterior = NULL;
        aux_borrar = list;

        while((aux_borrar != NULL) && (aux_borrar->data != n)) {
            anterior = aux_borrar;
            aux_borrar = aux_borrar->next;
        }

        if(aux_borrar == NULL) {
            cout << "El elemento " << n << " no esta en la lista" << endl;
        } else if(anterior == NULL) {
            list = list->next;
            delete aux_borrar;
        } else {
            anterior->next = aux_borrar->next;
            delete aux_borrar;
        }
    }
}
