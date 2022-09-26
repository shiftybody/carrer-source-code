// ## SelectionSort

// Con complejidad (size^2) para ordenar una lista de size elementos

// 1. buscar el minimo elemento de la lista.
// 2. intercambiar con el primer elemento.
// 3. buscar el minimo del resto de la lista
// 4. intercambiar con el segundo.
// 5. y asi sucesivamente

// Esto requiere de swap o de una variable aux.

#include <iostream>
using namespace std;
void printArray(int a[], int size)
{
    // increment
    cout << "\nIncrement array sort: \n";
    for (int i = 0; i <= size; i++)
    {
        cout << a[i] << " ";
    }
    // decrement
    cout << "\nDecrement array sort: \n";
    for (int i = size; i >= 0; i--)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void selectionSort(int a[], int size)
{
    for (int i = 0; i <= size; i++)
    {
        int min = i;
        for (int j = i + 1; j <= size; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        swap(a[i], a[min]);
    }
}

int main()
{
    cout << "Input the array with elements separated by space" << endl;
    int *arr[1000], i = 0, sizeofArr = 0;
    while (true)
    {
        arr[i] = new int;
        cin >> *arr[i];
        if (cin.get() == '\n')
        {
            break;
        }
        i++;
        sizeofArr++;
    }

    // Convert the pointer array to an array whit the length of the array
    int InputArray[sizeofArr];
    for (int i = 0; i <= sizeofArr; i++)
    {
        InputArray[i] = *arr[i];
    }

    selectionSort(InputArray, sizeofArr);
    printArray(InputArray, sizeofArr);
    cout << "" << endl;
    return 0;
}
