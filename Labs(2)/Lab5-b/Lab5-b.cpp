#include<Windows.h>
#include <iostream>
#include <iomanip>
#include "Ptr_b.h"
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
	srand(time(0));
	int size, a;
	cout << "Введите размер N * N(до 5)--> ";
	cin >> size;
	if (size < 1 || size > 5) cout << "ERROR 404 ", exit(0);
	int** arr = new int* [size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = new int[size];
	}
	FeelArray(arr, size);
	PrintArray(arr, size);
	int (*fun_ptr)(int**, int);
	while (true) {
		cout << "\n\n1 - Напечатать сумму(+)\n2 - Напечатать произведение(-)\n0 - Выйти\n--> ";
		cin >> a;
		switch (a) {
		case 1:
			system("cls");
			PrintArray(arr, size);
			fun_ptr = Sum;
			cout << endl << "Sum:\t" << fun_ptr(arr, size);
			break;
		case 2:
			system("cls");
			PrintArray(arr, size);
			fun_ptr = Mult;
			if (fun_ptr(arr, size) == 0) cout << endl << "Нет отрицательных чисел";
			else cout << endl << "Mult:\t" << fun_ptr(arr, size);
			break;
		case 0:
			exit(0);
		default:
			system("cls");
			cout << "ERROR 404" << endl;
			break;
		}
	}
	for (int i = 0; i < size; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}

