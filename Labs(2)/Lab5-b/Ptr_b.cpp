#include <iomanip>
#include <iostream>
#include "Ptr_b.h"
using namespace std;

void FeelArray(int** arr, const int size) {
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			*(*(arr + i) + j) = rand() % 21 - 10;
		}
	}
}
void PrintArray(int** arr, const int size) {
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << setw(4) << *(*(arr + i) + j);
		}
		cout << endl;
	}
	cout << endl;
}
int Sum(int** arr, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (*(*(arr + i) + j) > 0)
				sum += *(*(arr + i) + j);
		}
	}
	return sum;
}
int Mult(int** arr, int size) {
	int mult = 1, count = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (*(*(arr + i) + j) < 0)
				mult *= *(*(arr + i) + j), count++;
		}
	}
	if (count == 0) return 0;
	return mult;
}