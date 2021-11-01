#include "windows.h"
#include <iostream>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    srand(time(0));
    int min = -50;
    int max = 50;
    const int size = 200;
    int mas[size];
    int x;
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        x = rand() % (max - min + 1) + min;
        mas[i] = x;
    }
    for (int i = 0; i < size ; i++)
    {
        if (mas[i] == mas[i + 1]) {
            count++;        
            cout << "Пара с одинаковым значением находяться на индексах: " << i << " - " << i + 1 << endl;
            cout << "Значение элементов: " << mas[i] << endl << endl;
            i++;
        }
    }
    if (count == 0)
        cout << "Увы, таких пар нет..." << endl << endl;
    else
        cout << "Всего таких пар: " << count << endl << endl;
    

}

