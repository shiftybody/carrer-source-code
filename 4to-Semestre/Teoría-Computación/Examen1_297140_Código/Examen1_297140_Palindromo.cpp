// validacion de un palindrome
// considere que se tienen como entrada al algoritmo los siguientes datos:
// 1. un alfabeto y 
// 2. una palabra w. 
// como salida del programa debera de verificar dos caracteristicas.
// si w es un palindrome construido con los elementos del alfabeto.
// si la palabra w pertenece al alfabeto con vacio.


#include <iostream>
#include <string>
#include <vector>
using namespace std;

//funcion que pregunta la longitud inicial de un alfabeto
int longitudAlfabeto(){
    int longitud;
    cout << "Ingrese la longitud del alfabeto: ";
    cin >> longitud;
    return longitud;
}

//funcion que solicita los simbolos del alfabeto
vector<char> simbolosAlfabeto(int longitud){
    vector<char> alfabeto;
    char simbolo;
    for(int i = 0; i < longitud; i++){
        cout << "Ingrese el simbolo " << i+1 << ": ";
        cin >> simbolo;
        alfabeto.push_back(simbolo);
    }
    return alfabeto;
}

//funcion que solicita una palabra para verificar si es un palindrome
string palabra(){
    string palabra;
    cout << "Ingrese la palabra a verificar: ";
    cin >> palabra;
    return palabra;
}

//funcion que verifica si la palabra es un palindrome
// funcionamiento: se compara la primera letra con la ultima, la segunda con la penultima, etc.
// si todas las letras coinciden, la palabra es un palindrome.

bool esPalindrome(string palabra){
    int longitud = palabra.length();
    for(int i = 0; i < longitud/2; i++){
        // solo para verificar el recorrido. 
        cout << palabra[i] << " " << i << " " << palabra[longitud-i-1] << " " << longitud-i-1 << endl;
        if(palabra[i] != palabra[longitud-i-1]){
            return false;
        }
    }
    return true;
}

//funcion que verifica si la palabra pertenece al alfabeto con vacio
// funcionamiento: se compara cada letra de la palabra con cada letra del alfabeto
// si todas las letras coinciden, la palabra pertenece al alfabeto con vacio
// si alguna letra no coincide, la palabra no pertenece al alfabeto con vacio

bool perteneceAlfabeto(string palabra, vector<char> alfabeto){
    // se agrega el simbolo vacio al alfabeto
    alfabeto.push_back(' ');
    int longitudPalabra = palabra.length();
    int longitudAlfabeto = alfabeto.size();
    for(int i = 0; i < longitudPalabra; i++){
        for(int j = 0; j < longitudAlfabeto; j++){
            if(palabra[i] == alfabeto[j]){
                break;
            }
            if(j == longitudAlfabeto-1){
                return false;
            }
        }
    }
    return true;
}


int main(){
    int longitud = longitudAlfabeto();
    vector<char> alfabeto = simbolosAlfabeto(longitud);
    string palabraVerificar = palabra();


    if(esPalindrome(palabraVerificar)){
        cout << "La palabra " << palabraVerificar << " es un palindrome" << endl;
    }else{
        cout << "La palabra " << palabraVerificar << " no es un palindrome" << endl;
    }
    if(perteneceAlfabeto(palabraVerificar, alfabeto)){
        cout << "La palabra " << palabraVerificar << " pertenece al alfabeto con vacio" << endl;
    }else{
        cout << "La palabra " << palabraVerificar << " no pertenece al alfabeto (con el conjunto vacio)" << endl;
    }
    return 0;
}

















