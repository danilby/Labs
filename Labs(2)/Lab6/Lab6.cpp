#define _CRT_NO_WARNINGS_
#include "Windows.h"
#include <iostream>
#include <string>
#include "Str.h"
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int max_len = 160;
    char S1[max_len], S2[max_len];
    int a;
    while (true) {
        system("cls");
        cout << "Введите первую строку: ";
        gets_s(S1);
        if (strlen(S1) < 1) {
            cout << "Строка должна состоять, хотя бы из одного символа" << endl;
            system("pause");
            continue;
        }
        cout << "Введите вторую строку: ";
        gets_s(S2);
        if (strlen(S2) < 1) {
            cout << "Строка должна состоять, хотя бы из одного символа" << endl;
            system("pause");
            continue;
        }
        cout << "\n1 - дописать первую строку во вторую\n2 - дописать вторую строку в первую\n3 - Выход\n--> ";
        cin >> a;
        cin.clear();
        cin.ignore();
        switch (a) {
        case 1:
            Func(S2, S1, max_len);
            puts(S2);
            system("pause");
            break;
        case 2:
            Func(S1, S2, max_len);
            puts(S1);
            system("pause");
            break;
        case 3:
            exit(0);
        default:
            cout << endl << "ERROR 404" << endl;
        }
    }
}
