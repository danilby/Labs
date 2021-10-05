﻿
#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h";
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char name1[10] = "Oracle", name2[10] = "IBM", name3[10] = "Microsoft";
	char amn1 = '1', amn2 = '3', amn3 = '2';
	long long vol1 = 2488000000, vol2 = 2392000000, vol3 = 1048000000;
	float per1 = 31.1, per2 = 29.9, per3 = 13.1;
	// Ввод данных
	printf("1. Введите: название фирмы, количество продуктов, годовой объем продажи($), часть рынка(%%) >");
	scanf("%s %c %lld %f", name1, &amn1, &vol1, &per1);
	printf("2. Введите: название фирмы, количество продуктов, годовой объем продажи($), часть рынка(%%) >");
	scanf("%s %c %lld %f", name2, &amn2, &vol2, &per2);
	printf("3. Введите: название фирмы, количество продуктов, годовой объем продажи($), часть рынка(%%) >");
	scanf("%s %c %lld %f", name3, &amn3, &vol3, &per3);


	printf("\n");
	printf("\n");
	printf("\n");


	// Вывод таблицы 
	printf("-------------------------------------------------------------------------\n");
	printf("|                        Фирмы - производители СКБД                     |\n");
	printf("|-----------------------------------------------------------------------|\n");
	printf("|    Фирма   |Количество продуктов| Годовой объем продажи | Часть рынка |\n");
	printf("|            |                    |          ($)          |     (%%)     |\n");
	printf("|------------|--------------------|-----------------------|-------------|\n");
	// Вывод строк данных 
	printf("|%12s|%20c|%23lld|%-13.1f|\n", name1, amn1, vol1, per1);
	printf("|%12s|%20c|%23lld|%-13.1f|\n", name2, amn2, vol2, per2);
	printf("|%12s|%20c|%23lld|%-13.1f|\n", name3, amn3, vol3, per3);
	// Вывод примечаний
	printf("|-----------------------------------------------------------------------|\n");
	printf("| Примечание: по данным Gartner Group за 1999г                          |\n");
	printf("-------------------------------------------------------------------------\n");




	printf("\n");
	printf("\n");
	printf("\n");
	return 0;
}

