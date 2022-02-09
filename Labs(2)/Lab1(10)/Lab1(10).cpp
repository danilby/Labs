#include <string>
#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;
const int s = 10;
struct Firms {
	char name[20];
	char number_of_products;
	long long volume;
	float part;
};
void InputFirmByHand(Firms firm[]) {
	int n;
	for (n = 0; n < 10; n++) {
		cout << n + 1 << ") Введите: название фирмы, количество продуктов, годовой объем продажи($), часть рынка(%) (введите stop для окончания) -> ";
		cin >> firm[n].name;
		if (strcmp(firm[n].name, "stop") == 0) break;
		cin >> firm[n].number_of_products >> firm[n].volume >> firm[n].part;
	}
}
void InputFirmRandom(Firms firm[]) {
	srand(time(0));
	int n, i, m;
	const int s = 11;
	char ch[s] = { 'F','i','r','m',' ',' ',' ',' ',' ',' ' };
	cout << "Сколько фирм хотите внести в список ->";
	cin >> n;
	if (n > 10) n = 10;
	for (i = 0; i < n; i++)
	{
		m = rand() % 3 + 8;
		ch[5] = rand() % 26 + 65;
		for (int j = 6; j < m; j++)
		{
			ch[j] = rand() % 26 + 97;	
		}
		strcpy_s(firm[i].name, ch);
		firm[i].number_of_products = rand() % 10 + 48;
		firm[i].part = (float)rand() / RAND_MAX * 67.7 + 10.2;
		firm[i].volume = rand() % RAND_MAX + 10000000;
		for (int i = 5; i < 10; i++)
		{
			ch[i] = ' ';
		}
	}
if(n!=10) strcpy_s(firm[i].name, "stop");
}
void SortFirm(Firms firm[]) {
		Firms x;
		int m, n = 0;
		for (int i = 0; i < 10; i++)
		{
			if (strcmp(firm[i].name, "stop") == 0)
				break;
			n++;
		}
		for (int i = 0; i < n - 1; i++) {
			m = i;
			for (int j = i + 1; j < n; j++)
				if (strcmp(firm[j].name, firm[m].name) < 0) m = j;
			strcpy_s(x.name, firm[i].name); x.number_of_products = firm[i].number_of_products;
			x.volume = firm[i].volume; x.part = firm[i].part;
			strcpy_s(firm[i].name, firm[m].name); firm[i].number_of_products = firm[m].number_of_products;
			firm[i].volume = firm[m].volume; firm[i].part = firm[m].part;
			strcpy_s(firm[m].name, x.name); firm[m].number_of_products = x.number_of_products;
			firm[m].volume = x.volume; firm[m].part = x.part;
		}
	}	
void PrintFirm(Firms firm[]) {

		cout << "-------------------------------------------------------------------------" << endl;
		cout << "|                        Фирмы - производители СКБД                     |" << endl;
		cout << "|-----------------------------------------------------------------------|" << endl;
		cout << "|    Фирма   |Количество продуктов| Годовой объем продажи | Часть рынка |" << endl;
		cout << "|            |                    |          ($)          |     (%)     |" << endl;
		cout << "|------------|--------------------|-----------------------|-------------|" << endl;
		for (int i = 0;i < 10; i++) {
			if (strcmp(firm[i].name, "stop") == 0) break;
			printf("|%12s|%20c|%23lld|%13.1f|\n", firm[i].name, firm[i].number_of_products, firm[i].volume, firm[i].part);
		}
		cout << "-------------------------------------------------------------------------" << endl;
}
	int main() {
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);
		Firms firm[s];
		int a;
		bool f = false;
		while (true) {
			cout << " 1 - Заполнить самостоятельно\n 2 - Заполнить случайно\n 3 - Сортировать\n 4 - Напечатать\n 0 - Выйти\n";
			cout << "-> ";
			cin >> a;
			switch (a) {
			case 1:
				system("cls");
				InputFirmByHand(firm);
				cout << endl;
				PrintFirm(firm);
				f = true;
				break;
			case 2:
				system("cls");
				InputFirmRandom(firm);
				cout << endl;
				PrintFirm(firm);
				f = true;
				break;
			case 3:
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
			case 4:
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