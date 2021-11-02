#include <ctime>
#include <iostream>
#include "windows.h"
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    srand(time(0));
    int const size = 200;
    int max = 50;
    int min = -50;
    int mas[size];
    int count = 0;
    int x;
    cout << "Элементы массива: " << endl;
    for (int i = 0; i < size; i++)
    {
        x = rand() % (max - min + 1) + min;
        mas[i] = x;
        cout << mas[i] << " ";
    }
    for (int i = 0; i < size; i++)
    {
        if (mas[i] == mas[i + 1]) {
            count++;
            cout << endl << "Соседние элементы с одинаковыми значениями находяться на индексах: " << i << " - " << i + 1 << endl;
            cout << "Значение данной пары: " << mas[i] << endl << endl;
            i++;
        }
    }
    cout << "Всего таких пар: " << count << endl << endl;
}

