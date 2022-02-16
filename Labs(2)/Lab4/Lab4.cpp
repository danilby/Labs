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
	int a;
	if (size < 1 || size > 30) cout << "Ошибка" << endl, exit(0);
	cout << "Начальный массив: " << endl;
	FeelArray(arr1, size);
	PrintArray(arr1, size);
	nsize = get_size(arr1, size);
	int* arr2 = new int[nsize];
	while (true) {
		cout << "1 - Напечатать массив \n2 - Отсортировать массив\n3 - Напечатать второй массив\n0 - Выйти\n -->";
		cin >> a;
		switch (a) {
		case 1:
			system("cls");
			cout << "Начальный массив: " << endl;
			PrintArray(arr1, size);
			break;
		case 2:
			system("cls");
			cout << "Отсортированный массив: " << endl;
			SortArray(arr1, size);
			PrintArray(arr1, size);
			break;
		case 3:
			system("cls");
			if (nsize < 1) { cout << "Нет положительных элементов "; break; }
			second_Array(arr1, arr2, size);
			cout << "Второй массив: " << endl;
			PrintArray(arr2, nsize);
		case 0:
			break;
		default:
			system("cls");
			cout << "Error";
			break;
		}
		if (a == 0)break;
	}
	delete[] arr1;
	delete[] arr2;
}