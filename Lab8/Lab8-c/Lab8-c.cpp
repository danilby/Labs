#include "windows.h"
#include <iostream>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int number, x, i , sum , count;
    int mas[20];
    while (true)
    {
        count = 0;
        sum = 0;
        i = 0;
        cout << "Введите число ->";
        cin >> number;
        do
        {
            mas[i] = number % 10;
            number = number / 10;
            i++;
            count++;
        } while (number != 0);
        cout << "Наоборот: ";
        for (int i = 0; i < count; i++)
        {
            sum += mas[i];
            cout << mas[i];
        }
        cout << endl << "Кол-во цифр: " << count << endl << "Сумма цифр: " << sum << endl << endl;
    }
}
