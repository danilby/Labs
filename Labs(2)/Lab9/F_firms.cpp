#define _CRT_SECURE_NO_WARNINGS
#include "S_firms.h"
#include "F_firms.h"
#include <iostream>
#include <conio.h>
#include "Windows.h"
#include <cmath>
using namespace std;

extern Firms* head, * tail;

void CreateListByHand() {
	Firms* current, * previous;
	head = previous = current = new Firms;
	short n = 0;
	cout << ++n << ") Введите: название фирмы, количество продуктов, годовой объем продажи($), часть рынка(%)\n --> ";
	current->prev = nullptr;
	cin >> current->name;
	cin >> current->number_of_products >> current->volume >> current->part;
	char c = 'y';
	while (n < 10 && c == 'y')
	{
		current = new Firms;
		cout << ++n << ") Введите: название фирмы, количество продуктов, годовой объем продажи($), часть рынка(%)\n --> ";
		cin >> current->name;
		if (strcmp(current->name, "stop") == 0) break;
		cin >> current->number_of_products >> current->volume >> current->part;
		previous->next = current;
		current->prev = previous;
		previous = current;
		cout << "Продолжить (y/any)\n";
		c = _getch();
	}
	tail = current;
	previous->next = nullptr;
}
void CreateListByRandom() {
	Firms* current, * previous;
	head = previous = current = new Firms;
	short n, m;
	char ch[11] = { 'F','i','r','m','-' };
	cout << "Введите кол-во фирм ->";
	cin >> n;
	if (n < 1)n = 1;
	if (n > 10)n = 10;
	m = rand() % 3 + 8;
	ch[5] = rand() % 26 + 65;
	for (int j = 6; j < m; j++)
	{
		ch[j] = rand() % 26 + 97;
	}
	strcpy(current->name, ch);
	for (int i = 5; i < 10; i++)
	{
		ch[i] = '\0';
	}
	current->number_of_products = rand() % 10 + 48;
	current->volume = rand() % RAND_MAX + 10000000;
	current->part = (float)rand() / RAND_MAX * 67.7 + 10.2;
	current->prev = nullptr;
	for (int i = 1; i < n; i++)
	{
		current = new Firms;
		m = rand() % 3 + 8;
		ch[5] = rand() % 26 + 65;
		for (int j = 6; j < m; j++)
		{
			ch[j] = rand() % 26 + 97;
		}
		strcpy(current->name, ch);
		for (int i = 5; i < 10; i++)
		{
			ch[i] = '\0';
		}
		current->number_of_products = rand() % 10 + 48;
		current->volume = rand() % RAND_MAX + 10000000;
		current->part = (float)rand() / RAND_MAX * 67.7 + 10.2;
		previous->next = current;
		current->prev = previous;
		previous = current;
	}
	tail = current;
	previous->next = nullptr;
}
bool isNull() {
	if (head == nullptr) {
		cout << "Список пуст";
		return 0;
	}
	return 1;
}
void PrintList() {
	Firms* current;
	cout << "------------------------------------------------------------------------------" << endl;
	cout << "|                        Фирмы - производители СКБД                          |" << endl;
	cout << "|----------------------------------------------------------------------------|" << endl;
	cout << "|      Фирма      |Количество продуктов| Годовой объем продажи | Часть рынка |" << endl;
	cout << "|                 |                    |          ($)          |     (%)     |" << endl;
	cout << "|-----------------|--------------------|-----------------------|-------------|" << endl;
	current = head;
	while (current) {
		printf("|%-17s|%20c|%23lld|%13.1f|\n", current->name, current->number_of_products, current->volume, current->part);
		current = current->next;
	}
	cout << "------------------------------------------------------------------------------" << endl;
}
void PrintListReverse() {
	Firms* current;
	cout << "------------------------------------------------------------------------------" << endl;
	cout << "|                        Фирмы - производители СКБД                          |" << endl;
	cout << "|----------------------------------------------------------------------------|" << endl;
	cout << "|      Фирма      |Количество продуктов| Годовой объем продажи | Часть рынка |" << endl;
	cout << "|                 |                    |          ($)          |     (%)     |" << endl;
	cout << "|-----------------|--------------------|-----------------------|-------------|" << endl;
	current = tail;
	while (current) {
		printf("|%-17s|%20c|%23lld|%13.1f|\n", current->name, current->number_of_products, current->volume, current->part);
		current = current->prev;
	}
	cout << "------------------------------------------------------------------------------" << endl;
}
void SearchListByFirm(Firms* p) {
	Firms* current = p;
	char Firmkey[11];
	short count = 0;
	cout << "Введите название фирмы: ";
	cin >> Firmkey;
	cout << "|----------------------------------------------------------------------------|" << endl;
	cout << "|      Фирма      |Количество продуктов| Годовой объем продажи | Часть рынка |" << endl;
	cout << "|                 |                    |          ($)          |     (%)     |" << endl;
	cout << "|-----------------|--------------------|-----------------------|-------------|" << endl;
	if (current == head) 
		while (current) {
			if (strcmp(current->name, Firmkey) == 0) {
				printf("|%-17s|%20c|%23lld|%13.1f|\n", current->name, current->number_of_products, current->volume, current->part);
				count++;
			}
			current = current->next;
		}
	else
		while (current) {
			if (strcmp(current->name, Firmkey) == 0) {
				printf("|%-17s|%20c|%23lld|%13.1f|\n", current->name, current->number_of_products, current->volume, current->part);
				count++;
			}
			current = current->prev;
		}
	cout << "------------------------------------------------------------------------------" << endl;
	if (count > 0)
		cout << "Всего найдено: " << count << endl;
	else {
		system("cls");
		cout << endl << "Не найдено" << endl;
	}
}
void SearchListByNop(Firms * p) {
	Firms* current = p;
	char nop_key;
	short count = 0;
	cout << "Введите кол-во продуктов/услуг: ";
	cin >> nop_key;
	cout << "|----------------------------------------------------------------------------|" << endl;
	cout << "|      Фирма      |Количество продуктов| Годовой объем продажи | Часть рынка |" << endl;
	cout << "|                 |                    |          ($)          |     (%)     |" << endl;
	cout << "|-----------------|--------------------|-----------------------|-------------|" << endl;
	if (current == head) 
		while (current) {
			if (current->number_of_products == nop_key) {
				printf("|%-17s|%20c|%23lld|%13.1f|\n", current->name, current->number_of_products, current->volume, current->part);
				count++;
			}
			current = current->next;
		}
	else
		while (current) {
			if (current->number_of_products == nop_key) {
				printf("|%-17s|%20c|%23lld|%13.1f|\n", current->name, current->number_of_products, current->volume, current->part);
				count++;
			}
			current = current->prev;
		}
	cout << "------------------------------------------------------------------------------" << endl;
	if (count > 0)
		cout << "Всего найдено: " << count << endl;
	else {
		system("cls");
		cout << endl << "Не найдено" << endl;
	}
}
void SearchListByVolume(Firms* p) {
	Firms* current = p;
	long long volume_key;
	short count = 0;
	cout << "Введите годовой объем продаж: ";
	cin >> volume_key;
	cout << "|----------------------------------------------------------------------------|" << endl;
	cout << "|      Фирма      |Количество продуктов| Годовой объем продажи | Часть рынка |" << endl;
	cout << "|                 |                    |          ($)          |     (%)     |" << endl;
	cout << "|-----------------|--------------------|-----------------------|-------------|" << endl;
	if (current == head) 
		while (current) {
			if (current->volume == volume_key) {
				printf("|%-17s|%20c|%23lld|%13.1f|\n", current->name, current->number_of_products, current->volume, current->part);
				count++;
			}
			current = current->next;
		}
	else
		while (current) {
			if (current->volume == volume_key) {
				printf("|%-17s|%20c|%23lld|%13.1f|\n", current->name, current->number_of_products, current->volume, current->part);
				count++;
			}
			current = current->prev;
		}
	cout << "------------------------------------------------------------------------------" << endl;
	if (count > 0)
		cout << "Всего найдено: " << count << endl;
	else {
		system("cls");
		cout << endl << "Не найдено" << endl;
	}
}
void SearchListByPart(Firms* p) {
	Firms* current = p;
	float part_key;
	short count = 0;
	cout << "Введите часть рынка: ";
	cin >> part_key;
	cout << "|----------------------------------------------------------------------------|" << endl;
	cout << "|      Фирма      |Количество продуктов| Годовой объем продажи | Часть рынка |" << endl;
	cout << "|                 |                    |          ($)          |     (%)     |" << endl;
	cout << "|-----------------|--------------------|-----------------------|-------------|" << endl;
	if (current == head) 
		while (current) {
			if (round(current->part * 10) / 10 == part_key) {
				printf("|%-17s|%20c|%23lld|%13.1f|\n", current->name, current->number_of_products, current->volume, current->part);
				count++;
			}
			current = current->next;
		}
	else
		while (current) {
			if (round(current->part * 10) / 10 == part_key) {
				printf("|%-17s|%20c|%23lld|%13.1f|\n", current->name, current->number_of_products, current->volume, current->part);
				count++;
			}
			current = current->prev;
		}
	cout << "------------------------------------------------------------------------------" << endl;
	if (count > 0)
		cout << "Всего найдено: " << count << endl;
	else {
		system("cls");
		cout << endl << "Не найдено" << endl;
	}
}
void AddFirmBegin() {
	Firms* current = new Firms;
	cout << "Введите: название фирмы, количество продуктов, годовой объем продажи($), часть рынка(%)\n --> ";
	cin >> current->name;
	cin >> current->number_of_products >> current->volume >> current->part;
	current->prev = nullptr;
	current->next = head;
	head->prev = current;
	head = current;
}
void AddFirmEnd() {
	Firms* current = head, * prev = nullptr;
	while (current)
	{
		prev = current;
		current = current->next;
	}
	current = new Firms;
	cout << "Введите: название фирмы, количество продуктов, годовой объем продажи($), часть рынка(%)\n --> ";
	cin >> current->name;
	cin >> current->number_of_products >> current->volume >> current->part;
	prev->next = current;
	current->prev = prev;
	current->next = nullptr;
	tail = current;
}
void AddFirmByKey() {
	Firms* current = head, * prev = current;
	char firm_key[11];
	cout << "Введите фирму(после фирмы будет добавлена ваша) --> ";
	cin >> firm_key;
	while (current) {
		if (strcmp(prev->name, firm_key) == 0) {
			current = new Firms;
			current->next = prev->next;
			prev->next->prev = current;
			current->prev = prev;
			prev->next = current;
			cout << "Введите: название фирмы, количество продуктов, годовой объем продажи($), часть рынка(%)\n --> ";
			cin >> current->name;
			cin >> current->number_of_products >> current->volume >> current->part;
			system("cls");
			cout << "Фирма успешно добавлена" << endl;
			return;
		}
		prev = current;
		current = current->next;
	}
	if (strcmp(prev->name, firm_key) == 0) {
		current = new Firms;
		cout << "Введите: название фирмы, количество продуктов, годовой объем продажи($), часть рынка(%)\n --> ";
		cin >> current->name;
		cin >> current->number_of_products >> current->volume >> current->part;
		prev->next = current;
		current->prev = prev;
		current->next = nullptr;
		tail = current;
		return;
	}
	system("cls");
	cout << "\n Ошибка \n";
}
void DeleteFirmBegin() {
	Firms* current = head;
	head = current->next;
	if (head == nullptr) {
		delete current;
		return;
	}
	head->prev = nullptr;
	delete current;
}
void DeleteFirmEnd() {
	Firms* current = head, * prev = nullptr;
	while (current->next) {
		prev = current;
		current = current->next;
	}
	if (prev == nullptr) {
		DeleteFirmBegin();
		return;
	}
	prev->next = nullptr;
	tail = prev;
	delete current;
}
void DeleteFirmByKey() {
	Firms* current = head, * prev = nullptr;
	char firm_key[11];
	cout << "Введите фирму: ";
	cin >> firm_key;
	if (strcmp(current->name, firm_key) == 0) {
		DeleteFirmBegin();
		system("cls");
		cout << "Фирма успешно удалена" << endl;
		return;
	}
	while (current) {
		if (strcmp(current->name, firm_key) == 0) {
			if (current->next == nullptr) {
				prev->next = nullptr;
				tail = prev;
				delete current;
				system("cls");
				cout << "Фирма успешно удалена" << endl;
				return;
			}
			current->next->prev = current->prev;
			current->prev->next = current->next;
			delete current;
			system("cls");
			cout << "Фирма успешно удалена" << endl;
			return;
		}
		else {
			prev = current;
			current = current->next;
		}
	}
	system("cls");
	cout << "\n ERROR\n " << endl;
}
void SortFirm()
{
	Firms* left = head;
	Firms* right = head->next;
	Firms* temp = new Firms;
	while (left->next) {
		while (right) {
			if ((strcmp(left->name, right->name) > 0)) {
				strcpy(temp->name, left->name);
				strcpy(left->name, right->name);
				strcpy(right->name, temp->name);
				temp->number_of_products = left->number_of_products;
				left->number_of_products = right->number_of_products;
				right->number_of_products = temp->number_of_products;
				temp->volume = left->volume;
				left->volume = right->volume;
				right->volume = temp->volume;
				temp->part = left->part;
				left->part = right->part;
				right->part = temp->part;
			}
			right = right->next;
		}
		left = left->next;
		right = left->next;
	}
}
void SaveFile() {
	Firms* current = head;
	FILE* f;
	fopen_s(&f, "Save.txt", "wt");
	if (!f) {
		cout << "Ошибка сохранения" << endl;
	}
	while (current)
	{
		fprintf(f, "\n%-12s   %20c   %23lld   %13.1f", current->name, current->number_of_products, current->volume, current->part);
		current = current->next;
	}
	cout << "Файл сохранен " << endl;
	fclose(f);
}
void LoadFile() {
	Firms* current, * prev;
	prev = current = head = new Firms;
	head->prev = nullptr;
	FILE* f;
	fopen_s(&f, "Save.txt", "rt");
	if (!f) {
		cout << "Ошибка открытия файла";
		delete current;
		head = nullptr;
		return;
	}
	if (fgetc(f) == EOF) {
		cout << "Файл пуст";
		delete current;
		head = nullptr;
		return;
	}
	fscanf(f, " %s %c %lld %f", &current->name, &current->number_of_products, &current->volume, &current->part);
	while (!feof(f)) {
		current = new Firms;
		fscanf(f, " %s %c %lld %f", &current->name, &current->number_of_products, &current->volume, &current->part);
		prev->next = current;
		current->prev = prev;
		prev = current;
	}
	current->next = nullptr;
	tail = current;
	cout << "Файл успешно загружен" << endl;
	fclose(f);
}
void ClearList() {
	Firms* current = head;
	while (current)
	{
		head = head->next;
		delete current;
		current = head;
	}
}