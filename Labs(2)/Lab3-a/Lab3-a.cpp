#include "windows.h"
#include <iostream>
#include "Arr_a.h"
#define SIZE 20
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(0));
	int size;
	int sum = 0, count = 0;
	cout << "Введите размер массива(до 20) -> ";
	cin >> size;
	if (size < 1 || size > 20) "Ошибка ", exit(0);
	int* arr = new int[size];
	int* start_arr = arr;
	cout << "Начальный массив: " << endl;
	FeelArray(arr, size);
	PrintArray(arr, size);
	// Относительный адрес
	cout << endl << "Относительный адрес" << endl;
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) < 0)
			sum += *(arr + i), count++;
	}
	cout << "Сумма отрицательных элементов: " << sum << endl;
	cout << "Кол-во отрицательных элементов: " << count << endl;
	// Абсолютный адрес
	cout << endl << "Абсолютный адрес" << endl;
	sum = 0, count = 0;
	for (int i = 0; i < size; i++)
	{
		if (*arr < 0)
			sum += *arr, count++;
		arr++;
	}
	cout << "Сумма отрицательных элементов: " << sum << endl;
	cout << "Кол-во отрицательных элементов: " << count << endl;
	// Без использования адресации
	cout << endl << "Без использования адресации: " << endl;
	sum = 0, count = 0;
	for (arr = start_arr; arr < start_arr + size; arr++)
	{
		if (*arr < 0)
			sum += *arr, count++;
	}
	cout << "Сумма отрицательных элементов: " << sum << endl;
	cout << "Кол-во отрицательных элементов: " << count << endl;
	// Массив указателей
	cout << endl << "Через массив указателей: " << endl;
	sum = 0, count = 0;
	int* p_arr[SIZE];
	arr = start_arr;
	for (int i = 0; i < size; i++)
	{
		p_arr[i] = &arr[i];
	}
	for (int i = 0; i < size; i++)
	{
		if (*p_arr[i] < 0)
			sum += (*p_arr[i]), count++;
	}
	cout << "Сумма отрицательных элементов: " << sum << endl;
	cout << "Кол-во отрицательных элементов: " << count << endl;
	//Указатель на указатель
	cout << endl << "Указатель на указатель" << endl;
	sum = 0, count = 0;
	arr = start_arr;
	int** pp;
	for (int i = 0; i < size; i++)
	{
		pp = &arr;
		if (**pp < 0)
			sum += **pp, count++;
		arr++;
	}
	cout << "Сумма отрицательных элементов: " << sum << endl;
	cout << "Кол-во отрицательных элементов: " << count << endl;
	//В виде функции с параметрами указателями
	cout << endl << "В виде функции с параметрами указателями" << endl;
	sum = 0, count = 0;
	arr = start_arr;
	Function(arr, size, &sum, &count);
	cout << "Сумма отрицательных элементов: " << sum << endl;
	cout << "Кол-во отрицательных элементов: " << count << endl;
	arr = start_arr;
	delete[] arr;
}
