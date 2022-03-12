#include "Windows.h"
#include <iostream>
#include "F_firms.h"
#include "S_firms.h"
Firms* head = nullptr;
Firms* tail = nullptr;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(0));
	short a;
	short b;
	while (1) {
		cout << "\n 1 - Создать список\n 2 - Напечатать список\n 3 - Найти запись\n 4 - Добавить фирму \n 5 - Удалить фирму \n 6 - Сортировать \n 7 - Сохранить список \n 8 - Загрузить список \n 9 - Очистить список \n 0 - Выход \n -->";
		cin >> a;
		switch (a) {
		case 1:
			ClearList();
			system("cls");
			cout << "\n 1 - Заполнить с консоли\n 2 - Заполнить случайно\n -->";
			cin >> b;
			if (b == 1) {
				CreateListByHand();
			}
			else if (b == 2) {
				CreateListByRandom();
			}
			else {
				cout << "ERROR 403" << endl;
			}
			system("cls");
			cout << endl << "Список успешно создан" << endl;
			break;
		case 2:
			system("cls");
			if (!isNull()) break;
			cout << "\n 1 - с начала\n 2 - с конца\n 3 - в меню\n -->";
			cin >> b;
			system("cls");
			if (b == 1)PrintList();
			else if (b == 2)PrintListReverse();
			break;
		case 3:
			system("cls");
			if (!isNull()) break;
			cout << "\n 1 - Поиск с начала списка \n 2 - Поиск с конца списка\n";
			cin >> b;
			if (b == 1) {
				cout << "\n 1 - поиск по названию фирмы\n 2 - поиск по кол-во продуктов/услуг\n 3 - поиск по объему продаж\n 4 - поиск по рынку\n -->";
				cin >> b;
				system("cls");
				switch (b)
				{
				case 1:
					SearchListByFirm(head);
					break;
				case 2:
					SearchListByNop(head);
					break;
				case 3:
					SearchListByVolume(head);
					break;
				case 4:
					SearchListByPart(head);
					break;
				default:
					cout << "ERROR 402" << endl;
					break;
				}
			}
			else {
				cout << "\n 1 - поиск по названию фирмы\n 2 - поиск по кол-во продуктов/услуг\n 3 - поиск по объему продаж\n 4 - поиск по рынку\n -->";
				cin >> b;
				system("cls");
				switch (b)
				{
				case 1:
					SearchListByFirm(tail);
					break;
				case 2:
					SearchListByNop(tail);
					break;
				case 3:
					SearchListByVolume(tail);
					break;
				case 4:
					SearchListByPart(tail);
					break;
				default:
					cout << "ERROR 402" << endl;
					break;
				}
			}
			break; 
		case 4:
			system("cls");
			if (!isNull()) break;
			cout << "\n 1 - Добавить фирму в начало\n 2 - Добавить фирму в конец\n 3 - Добавить по ключу\n 4 - В меню\n -->";
			cin >> b;
			if (b == 1) {
				AddFirmBegin();
				system("cls");
				cout << "Фирма успешно добавлена" << endl;
			}
			else if (b == 2) {
				AddFirmEnd();
				system("cls");
				cout << "Фирма успешно добавлена" << endl;
			}
			else if (b == 3) {
				AddFirmByKey();
			}
			else {
				system("cls");
			}
			break;
		case 5:
			system("cls");
			if (!isNull()) break;
			cout << "\n 1 - Удалить первую фирму\n 2 - Удалить последнюю фирму\n 3 - Удалить фирму по ключу\n 4 - В меню\n -->";
			cin >> b;
			if (b == 1) {
				DeleteFirmBegin();
				system("cls");
				cout << "Фирма успешно удалена" << endl;
			}
			else if (b == 2) {
				DeleteFirmEnd();
				system("cls");
				cout << "Фирма успешно удалена" << endl;
			}
			else if (b == 3) {
				DeleteFirmByKey();
			}
			else {
				system("cls");
				break;
			}
			break;
		case 6:
			system("cls");
			if (!isNull()) break;
			SortFirm();
			cout << "Список отсортирован" << endl;
			break;
		case 7:
			system("cls");
			if (!isNull()) break;
			SaveFile();
			break;
		case 8:
			system("cls");
			ClearList();
			LoadFile();
			break;
		case 9:
			system("cls");
			if (!isNull()) break;
			ClearList();
			break;
		case 0:
			system("cls");
			ClearList();
			exit(0);
			break;
		default:
			system("cls");
			cout << "ERROR " << endl;
			break;
		}
	}
}
