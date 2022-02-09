#include "Windows.h"
#include <iostream>
#include "F_firms.h"
#include "S_firms.h"
const int s = 10;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Firms firm[s];
	int a;
	bool f = false;
	while (true) {
		cout << " 1 - Заполнить \n 2 - Сортировать\n 3 - Напечатать\n 0 - Выйти\n";
		cout << "-> ";
		cin >> a;
		switch (a) {
		case 1:
			system("cls");
			InputFirm(firm);
			cout << endl;
			PrintFirm(firm);
			f = true;
			break;
		case 2:
			system("cls");
			if (f == false) {
				cout << "Таблицы не существует" << endl;
				break;
			}
			PrintFirm(firm);
			cout << endl;
			cout << "Отсортированная таблица: ";
			SortFirm(firm);
			cout << endl;
			PrintFirm(firm);
			break;
		case 3:
			system("cls");
			if (f == false) {
				cout << "Таблицы не существует" << endl;
				break;
			}
			PrintFirm(firm);
			cout << endl;
			break;
		case 0:
			exit(0);
			break;
		default:
			system("cls");
			cout << "Ошибка" << endl;
			break;
		}
	}
}

