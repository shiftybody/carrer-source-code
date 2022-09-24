// Operacion cerradura positiva
// considere que se tienen como entrada al algoritmo los siguientes dos datos: un alfabeto E 
// y un valor de n que representa la longitud de una palabra.
// como salida del programa se debera generar los siguientes lenguajes:

// a) el lenguaje Epositivo con la palabras de longitud 0 hasta n generadas a partir del alfabeto E.
// b) El lenguaje de todas las palabras w hasta una longitud n, que tengan una cantidad par de los simbolos del alfabeto Epositivo 
// que se utilizan para formar la palabra w.


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

//funcion que pregunta la longitud de la palabra
int longitudPalabra(){
    int longitud;
    cout << "Ingrese la longitud de la palabra: ";
    cin >> longitud;
    return longitud;
}

//funcion que genera n cantidad de palabras dada la longitud recursivamente
void generarPalabras(vector<char> alfabeto, int longitud, vector<string> &palabras, string palabra){
    if(longitud == 0){
        palabras.push_back(palabra);
    }
    else{
        for(int i = 0; i < alfabeto.size(); i++){
            // se concatena la palabra con el simbolo del alfabeto
            palabra.push_back(alfabeto[i]);
            // se llama a la funcion recursivamente
            generarPalabras(alfabeto, longitud-1, palabras, palabra);
            // se elimina el ultimo simbolo de la palabra
            palabra.pop_back();
        }
    }
}



//funcion que muestra las palabras
void mostrarPalabras(vector<string> palabras){
    for(int i = 0; i < palabras.size(); i++){
        cout << palabras[i] << endl;
    }
}

//funcion que pregunta si desea generar otras palabras
bool generarOtrasPalabras(){
    char respuesta;
    cout << "Desea generar otras palabras? (s/n): ";
    cin >> respuesta;
    if(respuesta == 's'){
        return true;
    }else{
        return false;
    }
}

bool esPalindrome(string palabra){
    int longitud = palabra.length();
    for(int i = 0; i < longitud/2; i++){    
        if(palabra[i] != palabra[longitud-i-1]){
            return false;
        }
    }
    return true;
}


int main(){
    int longitud, longitudP;
    vector<char> alfabeto;
    vector<string> palabras;
    string palabra;
    bool continuar = true;
    while(continuar){
        longitud = longitudAlfabeto();
        alfabeto = simbolosAlfabeto(longitud);
        longitudP = longitudPalabra();
        // se genera el lenguaje Epositivo
        cout << "Lenguaje de palabras Epositivo: " << endl;
        for(int i = 1; i <= longitudP; i++){
            generarPalabras(alfabeto, i, palabras, palabra);
        }
        mostrarPalabras(palabras);

        // se genera el lenguaje de palabras que tengan una cantidad par de los simbolos dentro del alfabeto Epositivo
        // ejemplo aa, bb, cc para abc con longitud 3
        // ab no es valido porque tiene una cantidad impar de simbolos
        cout << "Lenguaje de palabras Epositivo par: " << endl;

        for(int i = 0; i < palabras.size(); i++){
            int contador = 0;
            for(int j = 0; j < palabras[i].size(); j++){
                for(int k = 0; k < alfabeto.size(); k++){
                    if(palabras[i][j] == alfabeto[k]){
                        contador++;
                    }
                }
            }
            if(contador % 2 == 0){
                if (esPalindrome(palabras[i])){
                    cout << palabras[i] << endl;
                }
            }


        }

        palabras.clear();
        alfabeto.clear();

        continuar = generarOtrasPalabras();
    }
    return 0;
}




