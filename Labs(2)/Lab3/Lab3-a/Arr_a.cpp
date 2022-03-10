#include <iostream>
#include "Arr_a.h"
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
void Function(int* arr, int size, int* sum, int* count) {
	for (int i = 0; i < size; i++)
	{
		if (*arr < 0) {
			*sum += *arr;
			(*count)++;
		}
		arr++;
	}
}