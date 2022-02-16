#include "windows.h"
#include <iostream>
#include "Array.h"
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(0));
	int size, nsize;
	cout << "Введите размер массива (до 30-ти элементов) -> ";
	cin >> size;
	int* arr1 = new int[size];
	if (size < 1 || size > 30) cout << "Ошибка" << endl, exit(0);
	cout << "Начальный массив: " << endl;
	FeelArray(arr1, size);
	PrintArray(arr1, size);
	SortArray(arr1, size);
	cout << "Отсортированный массив: " << endl;
	PrintArray(arr1, size);
	nsize = get_size(arr1, size);
	if (nsize < 1) cout << "Нет положительных элементов ", exit(0);
	int* arr2 = new int[nsize];
	second_Array(arr1, arr2, size);
	cout << "Второй массив: " << endl;
	PrintArray(arr2, nsize);
	cout << endl << endl;
	delete[] arr1;
	delete[] arr2;
}