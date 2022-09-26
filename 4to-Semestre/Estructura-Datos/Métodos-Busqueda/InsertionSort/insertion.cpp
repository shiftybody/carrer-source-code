#include <time.h>
#include <stdio.h>
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

void insertionSort(int a[], int size)
{

    clock_t comienzo;

    comienzo = clock();
    for (int i = 0; i <= size; i++)
    {
        int pos = i;
        int aux = a[i];

        while ((pos > 0) && a[pos - 1] > aux)
        {
            a[pos] = a[pos - 1];
            pos--;
        }
        a[pos] = aux;
    }
    // impresion de tiempo de ejecución del ordenamiento 
    printf("tiempo de ejecucion: %f s\n", (clock() - comienzo) / (double)CLOCKS_PER_SEC);
    
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

    // Convert the pointer array to an array
    int InputArray[sizeofArr];
    for (int i = 0; i <= sizeofArr; i++)
    {
        InputArray[i] = *arr[i];
    }

    insertionSort(InputArray, sizeofArr);
    printArray(InputArray, sizeofArr);
    cout << "" << endl;

    return 0;

}

