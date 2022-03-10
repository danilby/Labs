#include <iostream>
#include "Arr_b.h"
using namespace std;
void FeelArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		*(arr + i) = rand() % 21 - 10;
	}
}
void PrintArray(int* arr, int size) {
	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i) << "   ";
	}
	cout << endl;
}
void CopyArray(int* arr, int* newarr, int size) {
	for (int i = 0; i < size; i++)
	{
		*newarr = *arr;
		newarr++, arr++;
	}
}
int get_size_b(int* arr, int size)
{
	int newsize = 0;
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) < 0)
			newsize++;
	}
	return newsize;
}
int get_size_c(int* arr, int size)
{
	int newsize = 0;
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) > 0)
			newsize++;
	}
	return newsize;
}
int get_size_d(int* arr, int size)
{
	int newsize = 0;
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) == 0)
			newsize++;
	}
	return newsize;
}
void GetElement_B(int* A, int* arr, int size) {
	for (int i = 0, j = 0; i < size; i++)
	{
		if (*(A + i) < 0) *(arr + j) = *(A + i), j++;
	}
}
void GetElement_C(int* A, int* arr, int size) {
	for (int i = 0, j = 0; i < size; i++)
	{
		if (*(A + i) > 0) *(arr + j) = *(A + i), j++;
	}
}
void GetElement_D(int* A, int* arr, int size) {
	for (int i = 0, j = 0; i < size; i++)
	{
		if (*(A + i) == 0) *(arr + j) = *(A + i), j++;
	}
}
void EditArray(int* A, int* arr, int size, int* ssize) {
	int i;
	for (i = 0; i < size; i++)
	{
		*(A + i + *ssize) = *(arr + i);
	}
	*ssize += i;
}
