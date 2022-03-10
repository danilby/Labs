#pragma once
#ifndef _SORT_
#define _SORT_
void FeelArray(int*, int);
void PrintArray(int*, int);
void BubbleSort(int* arr, int size);
void heapify(int* arr, int n, int i);
void HeapSort(int* arr, int size);
void SelectionSort(int* arr,int size);
void ChoseSort(int*, int, void(*)(int*,int));
#endif // !_SORT_
