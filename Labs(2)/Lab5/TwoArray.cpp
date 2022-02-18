#include <iostream>
#include "TwoArray.h"
#include <iomanip>
using namespace std;

void FillArray(int* const arr, const int size) {
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            *(arr + i * size + j) = rand() % 100;
        }
    }
}
void PrintArray(const int* const arr, const int size) {
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << setw(4) << *(arr + i * size + j);
        }
        cout << endl;
    }
}
void EditArray(int* const arr, const int size) {
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i < j) {
                temp = *(arr + i * size + j);
                *(arr + i * size + j) = *(arr + size * j + i);
                *(arr + size * j + i) = temp;
            }
        }
    }
}

void FillArray(int** const arr, const int size) {
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            *(*(arr + i) + j) = rand() % 100;
        }
    }
}
void PrintArray(int** const arr, const int size) {
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << setw(4) << *(*(arr + i) + j);
        }
        cout << endl;
    }
}
void EditArray(int** arr, const int size) {
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i > j) {
                temp = *(*(arr + i) + j);
                *(*(arr + i) + j) = *(*(arr + j) + i);
                *(*(arr + j) + i) = temp;
            }
        }
    }
}