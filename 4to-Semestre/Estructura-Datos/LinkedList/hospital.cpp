// Realiza la siguiente lista enlazada simple:
// Realizar un sistema sobre registro de pacientes de un Hospital  que permita:
// ● Registrar al paciente (nombre, apellido, edad, enfermedad) y devolver el codigo de paciente.
// ● Eliminar registro de paciente dado su codigo.
// ● Actualizar datos de pacientes (nombre, apellido, edad, enfermedad) dado su codigo.
// ● Mostrar el listado de todos los pacientes.

#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

struct paciente{
    string nombre;
    string apellido;
    int edad;
    string enfermedad;
    int codigo;
    paciente *siguiente;
};

void menu();
void registrarPaciente(paciente *&, paciente *&, int &);
void eliminarPaciente(paciente *&, paciente *&, int &);
void actualizarPaciente(paciente *&, paciente *&, int &);
void mostrarPacientes(paciente *&, paciente *&, int &);

int main(){
    paciente *inicio = NULL;
    paciente *fin = NULL;
    int codigo = 0;
    int opcion = 0;
    do{
        menu();
        cin >> opcion;
        switch(opcion){
            case 1:
                registrarPaciente(inicio, fin, codigo);
                break;
            case 2:
                eliminarPaciente(inicio, fin, codigo);
                break;
            case 3:
                actualizarPaciente(inicio, fin, codigo);
                break;
            case 4:
                mostrarPacientes(inicio, fin, codigo);
                break;
            case 5:
                cout << "\nSaliendo del sistema..." << endl;
                break;
            default:
                cout << "\nOpcion no valida" << endl;
                break;
        }
    }while(opcion != 5);
    return 0;
}

void menu(){
    cout << "\n------- MENU HOSPITAL -------" << endl;
    cout << "1. Registrar paciente" << endl;
    cout << "2. Eliminar paciente" << endl;
    cout << "3. Actualizar paciente" << endl;
    cout << "4. Mostrar pacientes" << endl;
    cout << "5. Salir" << endl;
    cout << "Ingrese una opcion: ";
}

void registrarPaciente(paciente *&inicio, paciente *&fin, int &codigo){

    // Crear un nuevo nodo
    paciente *nuevo = new paciente();

    // Pedir datos
    cout << "\nIngrese el nombre del paciente: ";
    cin >> nuevo->nombre;
    cout << "Ingrese el apellido del paciente: ";
    cin >> nuevo->apellido;
    cout << "Ingrese la edad del paciente: ";
    cin >> nuevo->edad;
    cout << "Ingrese la enfermedad del paciente: ";
    cin >> nuevo->enfermedad;
    // Asignar codigo
    codigo++;
    // Asignar codigo al nuevo nodo
    nuevo->codigo = codigo;
    // Asignar el siguiente nodo
    nuevo->siguiente = NULL;
    // Verificar si la lista esta vacia
    if(inicio == NULL){
        // Asignar el inicio y el fin
        inicio = nuevo;
    }else{
        // Si no esta vacia, agregar al final
        fin->siguiente = nuevo;
    }
    // Asignar el nuevo nodo como el ultimo
    fin = nuevo;

    cout << "\nPaciente registrado con exito" << endl;
    cout << "Codigo del paciente: " << codigo << endl;
    
}

void eliminarPaciente(paciente *&inicio, paciente *&fin, int &codigo){
    // Verificar si la lista esta vacia
    if(inicio == NULL){
        cout << "\nNo hay pacientes registrados" << endl;
    }else{
        // Pedir codigo
        int codigoPaciente;
        cout << "\nIngrese el codigo del paciente: ";
        cin >> codigoPaciente;
        // Verificar si el codigo existe
        paciente *aux = inicio;
        while(aux != NULL && aux->codigo != codigoPaciente){
            aux = aux->siguiente;
        }
        if(aux == NULL){
            cout << "\nEl codigo no existe" << endl;
        }else{
            // Eliminar el nodo
            // Verificar si es el primer nodo
            if(aux == inicio){
                inicio = inicio->siguiente;
            }else{
                // Buscar el nodo anterior
                paciente *anterior = inicio;
                while(anterior->siguiente != aux){
                    anterior = anterior->siguiente;
                }
                // Asignar el siguiente nodo
                anterior->siguiente = aux->siguiente;
                // Verificar si es el ultimo nodo
                if(aux == fin){
                    fin = anterior;
                }
            }
            // Eliminar el nodo
            delete aux;
            cout << "\nPaciente eliminado con exito" << endl;
        }
    }
}

void actualizarPaciente(paciente *&inicio, paciente *&fin, int &codigo){
    // Verificar si la lista esta vacia
    if(inicio == NULL){
        cout << "\nNo hay pacientes registrados" << endl;
    }else{
        // Pedir codigo
        int codigoPaciente;
        cout << "\nIngrese el codigo del paciente: ";
        cin >> codigoPaciente;
        // Verificar si el codigo existe
        paciente *aux = inicio;
        while(aux != NULL && aux->codigo != codigoPaciente){
            aux = aux->siguiente;
        }
        if(aux == NULL){
            cout << "\nEl codigo no existe" << endl;
        }else{
            // Mostrar datos del paciente
            cout << "\nNombre: " << aux->nombre << endl;
            cout << "Apellido: " << aux->apellido << endl;
            cout << "Edad: " << aux->edad << endl;
            cout << "Enfermedad: " << aux->enfermedad << endl;

            // Pedir nuevos datos
            cout << "\nActualice los datos del paciente: ";

            // Actualizar el nodo
            cout << "\nIngrese el nombre del paciente: ";
            cin >> aux->nombre;
            cout << "Ingrese el apellido del paciente: ";
            cin >> aux->apellido;
            cout << "Ingrese la edad del paciente: ";
            cin >> aux->edad;
            cout << "Ingrese la enfermedad del paciente: ";
            cin >> aux->enfermedad;
            cout << "Paciente actualizado con exito" << endl;
        }
    }
}

void mostrarPacientes(paciente *&inicio, paciente *&fin, int &codigo){
    // Verificar si la lista esta vacia
    if(inicio == NULL){
        cout << "\nNo hay pacientes registrados" << endl;
    }else{
        // Mostrar los pacientes
        cout << "\n------- LISTA DE PACIENTES -------" << endl;
        paciente *aux = inicio;
        while(aux != NULL){
            cout << "Codigo: " << aux->codigo << endl;
            cout << "Nombre: " << aux->nombre << endl;
            cout << "Apellido: " << aux->apellido << endl;
            cout << "Edad: " << aux->edad << endl;
            cout << "Enfermedad: " << aux->enfermedad << endl;
            cout << "----------------------------------" << endl;
            aux = aux->siguiente;
        }
    }
}










