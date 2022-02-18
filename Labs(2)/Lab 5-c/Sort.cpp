#include "Windows.h"
#include <iostream>
#include <iomanip>
#include "Sort.h"
using namespace std;
void FeelArray(int* arr, int size) {
    for (int i = 0; i < size; i++)
    {
        *(arr + i) = rand() % 100;
    }
}
void PrintArray(int* arr, int size) {
    for (int i = 0; i < size; i++)
    {
        cout << setw(4) << *(arr + i);
    }
    cout << endl;
}
void BubbleSort(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                swap(*(arr + j), *(arr + j + 1));
            }
        }
    }
}
void heapify(int* arr, int n, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < n && *(arr + l) > *(arr + largest))
        largest = l;
    if (r < n && *(arr + r) > *(arr + largest))
        largest = r;
    if (largest != i)
    {
        swap(*(arr + i), *(arr + largest));
        heapify(arr, n, largest);
    }
}
void HeapSort(int* arr, int size)
{
    for (int i = size / 2 - 1; i >= 0; i--)
        heapify(arr, size, i);
    for (int i = size - 1; i >= 0; i--)
    {
        swap(*arr, *(arr + i));
        heapify(arr, i, 0);
    }
}
void SelectionSort(int* arr, int size) {
    int m;
    for (int i = 0; i < size; i++)
    {
        m = i;
        for (int j = i + 1; j < size; j++)
        {
            if (*(arr + m) > *(arr + j))
                m = j;
        }
        swap(*(arr + i), *(arr + m));
    }
}
void ChoseSort(int* arr, int size, void(*ch_sort)(int*, int)) {
    ch_sort(arr, size);
}