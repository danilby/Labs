#define _CRT_SECURE_NO_WARNINGS
#include "S_firms.h"
#include "F_firms.h"
#include <iostream>
using namespace std;
void InputFirmByHand(char* fname,short fb) {
	Firms firm;
	Firms temp;
	int n;
	FILE* ft;
	FILE* f;
	fopen_s(&f, fname, "r+t");
	if (!f) {
		fopen_s(&f, fname, "w+");
		fb = 2;
	}
	else if (getc(f) == EOF)
		fb = 2;
	if (fb != 1) {
		fseek(f, 0, SEEK_END);
		for (n = 0; n < 10; n++)
		{
			cout << n + 1 << ") Введите: название фирмы, количество продуктов, годовой объем продажи($), часть рынка(%) (введите stop для окончания) -> ";
			cin >> firm.name;
			if (strcmp(firm.name, "stop") == 0) break;
			fprintf(f, "\n%-12s   ", firm.name);
			cin >> firm.number_of_products >> firm.volume >> firm.part;
			fprintf(f, "%20c   %23lld   ", firm.number_of_products, firm.volume);
			fprintf(f, "%13.1f", firm.part);
		}
	}
	if (fb == 1) {
		fopen_s(&ft, "Temp.txt", "w+");
		for (n = 0; n < 10; n++)
		{
			cout << n + 1 << ") Введите: название фирмы, количество продуктов, годовой объем продажи($), часть рынка(%) (введите stop для окончания) -> ";
			cin >> firm.name;
			if (strcmp(firm.name, "stop") == 0) break;
			fprintf(ft, "\n%-12s   ", firm.name);
			cin >> firm.number_of_products >> firm.volume >> firm.part;
			fprintf(ft, "%20c   %23lld   ", firm.number_of_products, firm.volume);
			fprintf(ft, "%13.1f", firm.part);
		}
		fseek(f, 0, SEEK_SET);
		while (!feof(f)) {
			fscanf(f,"%s   %c   %lld   %f", &temp.name, &temp.number_of_products, &temp.volume, &temp.part);
			fprintf(ft, "\n%-12s   %20c   %23lld   %13.1f", temp.name, temp.number_of_products, temp.volume, temp.part);
		}
		fclose(f);
		fclose(ft);
		remove(fname);
		rename("Temp.txt", fname);
	}
	fclose(f);
} 
void InputFirmRandom(char* fname, short fb) {
	Firms firm;
	Firms temp;
	FILE* f;
	FILE* ft;
	fopen_s(&f, fname, "r+");
	if (!f) {
		fopen_s(&f, fname, "w+");
		fb = 2;
	}
	else if (getc(f) == EOF)
		fb = 2;
	int n, i, m;
	const int s = 11;
	char ch[s] = { 'F','i','r','m','-',' ',' ',' ',' ',' ' };
	cout << "Сколько фирм хотите внести в список ->";
	if (fb != 1) {
		fseek(f, 0, SEEK_END);
		cin >> n;
		if (n > 10) n = 10;
		else if (n < 0) n = 0;
		for (i = 0; i < n; i++)
		{
			m = rand() % 3 + 8;
			ch[5] = rand() % 26 + 65;
			for (int j = 6; j < m; j++)
			{
				ch[j] = rand() % 26 + 97;
			}
			strcpy_s(firm.name, ch);
			fprintf(f, "\n%-12s   ", firm.name);
			firm.number_of_products = rand() % 10 + 48;
			fprintf(f, "%20c   ", firm.number_of_products);
			firm.volume = rand() % RAND_MAX + 10000000;
			fprintf(f, "%23lld   ", firm.volume);
			firm.part = (float)rand() / RAND_MAX * 67.7 + 10.2;
			fprintf(f, "%13.1f", firm.part);
			for (int i = 5; i < 10; i++)
			{
				ch[i] = ' ';
			}
		}
	}
	if (fb == 1) {
		fopen_s(&ft, "Temp.txt", "w+");
		cin >> n;
		if (n > 10) n = 10;
		else if (n < 0) n = 0;
		for (i = 0; i < n; i++)
		{
			m = rand() % 3 + 8;
			ch[5] = rand() % 26 + 65;
			for (int j = 6; j < m; j++)
			{
				ch[j] = rand() % 26 + 97;
			}
			strcpy_s(firm.name, ch);
			fprintf(ft, "\n%-12s   ", firm.name);
			firm.number_of_products = rand() % 10 + 48;
			fprintf(ft, "%20c   ", firm.number_of_products);
			firm.volume = rand() % RAND_MAX + 10000000;
			fprintf(ft, "%23lld   ", firm.volume);
			firm.part = (float)rand() / RAND_MAX * 67.7 + 10.2;
			fprintf(ft, "%13.1f", firm.part);
			for (int i = 5; i < 10; i++)
			{
				ch[i] = ' ';
			}
		}
		fseek(f, 0, SEEK_SET);
		while (!feof(f)) {
			fscanf(f, "%s   %c   %lld   %f", &temp.name, &temp.number_of_products, &temp.volume, &temp.part);
			fprintf(ft, "\n%-12s   %20c   %23lld   %13.1f", temp.name, temp.number_of_products, temp.volume, temp.part);
		}
		fclose(f);
		fclose(ft);
		remove(fname);
		rename("Temp.txt", fname);
	}
	fclose(f);
}
void PrintFirm(char *fname,short fb) {
	Firms firm;
	FILE* f;
	short n = 0;
	fopen_s(&f, fname, "rt");
	if (!f) {cout << endl << "Файла не существует " << endl; return; }
	else if (getc(f) == EOF) {cout << endl << "Файл пуст" << endl; return; }
	if (fb != 1) {
		cout << "Выберите номер --> ";
		cin >> n;
		system("cls");
	}
	cout << "------------------------------------------------------------------------------" << endl;
	cout << "|                        Фирмы - производители СКБД                          |" << endl;
	cout << "|----------------------------------------------------------------------------|" << endl;
	cout << "|      Фирма      |Количество продуктов| Годовой объем продажи | Часть рынка |" << endl;
	cout << "|                 |                    |          ($)          |     (%)     |" << endl;
	cout << "|-----------------|--------------------|-----------------------|-------------|" << endl;
	if (fb == 1) {
		while (!feof(f)) {
			++n;
			fscanf(f, "%s %c %lld %f", &firm.name, &firm.number_of_products, &firm.volume, &firm.part);
			printf("|%3d. %-12s|%20c|%23lld|%13.1f|\n",n, firm.name, firm.number_of_products, firm.volume, firm.part);
		}
	}
	else {
		if (n < 1) { system("cls");cout << "Такой записи не существует" << endl; fclose(f); return; }
		fseek(f, 0, SEEK_SET);
		while (n > 0) {
			if (fgetc(f) == EOF) {
				system("cls"); cout << "Такой записи не существует" << endl; fclose(f); return;
			}
			fscanf(f, "%s %c %lld %f", &firm.name, &firm.number_of_products, &firm.volume, &firm.part);
			n--;
		}
		printf("|%-17s|%20c|%23lld|%13.1f|\n", firm.name, firm.number_of_products, firm.volume, firm.part);
	}

	cout << "------------------------------------------------------------------------------" << endl;
	fclose(f);
}
void ClearData(char* fname)
{
	remove(fname);
}
