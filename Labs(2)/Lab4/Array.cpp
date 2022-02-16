#include <iostream>
#include "Array.h"
using namespace std;
void FeelArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		*(arr + i) = rand() % 201 - 100;
	}
}
void PrintArray(int* arr, int size) {
	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i) << "   ";
	}
	cout << endl;
}
void SortArray(int* arr, int size) {
	int temp;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (*(arr + j) > *(arr + j + 1)) {
				temp = *(arr + j);
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = temp;
			}
		}
	}
}

int get_size(int* arr, int size)
{
	int newsize = 0;
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) > 0)
			newsize++;
	}
	return newsize;
}

void second_Array(int* arr, int* arr2, int size)
{
	for (int i = 0, j = 0; i < size; i++)
	{
		if (*(arr + i) > 0)  *(arr2 + j) = *(arr + i), j++;
	}
}
