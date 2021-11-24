#include <iomanip>
#include <iostream>
#include "windows.h"
using namespace std;
char Function(int num1, int num2) {
    if (num1 > num2)
        return '>';
    else if (num1 < num2)
        return '<';
    else
        return '=';
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int num1, num2;
    while (true)
    {
        cout << "Введите первое число -> ";
        cin >> num1;
        cout << "Введите второе число -> ";
        cin >> num2;
        cout << num1 << Function(num1, num2) << num2 << endl;
    }
}
