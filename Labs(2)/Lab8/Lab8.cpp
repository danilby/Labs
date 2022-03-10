#include "Windows.h"
#include <iostream>
#include "F_firms.h"
#include "S_firms.h"
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(0));
	Firms* begin = nullptr;
	short a;
	short b;
	while (1) {
		cout << "\n 1 - Создать список\n 2 - Напечатать список\n 3 - Найти запись\n 4 - Добавить фирму \n 5 - Удалить фирму \n 6 - Сортировать \n 7 - Сохранить список \n 8 - Загрузить список \n 9 - Очистить список \n 0 - Выход \n -->";
		cin >> a;
		switch (a) {
		case 1:
			ClearList(&begin);
			system("cls");
			cout << "\n 1 - Заполнить с консоли\n 2 - Заполнить случайно\n -->";
			cin >> b;
			if (b == 1) {
				begin = CreateListByHand();
			}
			else if (b == 2) {
				begin = CreateListByRandom();
			}
			else {
				cout << "ERROR 403" << endl;
			}
			system("cls");
			cout << endl << "Список успешно создан" << endl;
			break;
		case 2:
			system("cls");
			if (!isNull(begin)) break;
			PrintList(begin);
			break;
		case 3:
			system("cls");
			if (!isNull(begin)) break;
			cout << "\n 1 - поиск по названию фирмы\n 2 - поиск по кол-во продуктов/услуг\n 3 - поиск по объему продаж\n 4 - поиск по рынку\n -->";
			cin >> b;
			system("cls");
			switch (b)
			{
			case 1:
				SearchListByFirm(begin);
				break;
			case 2:
				SearchListByNop(begin);
				break;
			case 3:
				SearchListByVolume(begin);
				break;
			case 4:
				SearchListByPart(begin);
				break;
			default:
				cout << "ERROR 402" << endl;
				break;
			}
			break;
		case 4:
			system("cls");
			if (!isNull(begin)) break;
			cout << "\n 1 - Добавить фирму в начало\n 2 - Добавить фирму в конец\n 3 - Добавить по ключу\n 4 - В меню\n -->";
			cin >> b;
			if (b == 1) {
				AddFirmBegin(&begin);
				system("cls");
				cout << "Фирма успешно добавлена" << endl;
			}
			else if (b == 2) {
				AddFirmEnd(begin);
				system("cls");
				cout << "Фирма успешно добавлена" << endl;
			}
			else if (b == 3) {
				AddFirmByKey(begin);
			}
			else {
				system("cls");
			}
			break;
		case 5:
			system("cls");
			if (!isNull(begin)) break;
			cout << "\n 1 - Удалить первую фирму\n 2 - Удалить последнюю фирму\n 3 - Удалить фирму по ключу\n 4 - В меню\n -->";
			cin >> b;
			if (b == 1) {
				DeleteFirmBegin(&begin);
				system("cls");
				cout << "Фирма успешно удалена" << endl;
			}
			else if (b == 2) {
				DeleteFirmEnd(&begin);
				system("cls");
				cout << "Фирма успешно удалена" << endl;
			}
			else if (b == 3) {
				DeleteFirmByKey(&begin);
			}
			else {
				system("cls");
				break;
			}
			break;
		case 6:
			system("cls");
			if (!isNull(begin)) break;
			SortFirm(begin);
			cout << "Список отсортирован" << endl;
			break;
		case 7:
			system("cls");
			if (!isNull(begin)) break;
			SaveFile(begin);
			break;
		case 8:
			system("cls");
			ClearList(&begin);
			begin = LoadFile();
			break;
		case 9:
			system("cls");
			if (!isNull(begin)) break;
			ClearList(&begin);
			break;
		case 0:
			system("cls");
			ClearList(&begin);
			exit(0);
			break;
		default:
			system("cls");
			cout << "ERROR " << endl;
			break;
		}
	}
}
