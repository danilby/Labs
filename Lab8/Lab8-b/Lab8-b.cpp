#include "windows.h"
#include <iostream>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int x, index, l, q, j, k, kc, pr;
    int mas1[50] = { 5, 12, 10, 43, 9, 1, 2, 98, 4, 11 };
    int size = 10;
    int mas2[100];
    bool f;
    for (int i = 0; i < size; i++)
    {
        cout << mas1[i] << " ";
    }
    while (true)
    {
        q = 0;
        pr = 0;
        cout << endl << "1 - Вставить k элемент в массив" << endl << "2 - Удалить k элемент в массиве" << endl << "0 - Выйти" << endl << "->";
        cin >> x;
        switch (x)
        {
        case 1:
            system("cls");
            for (int i = 0; i < size; i++)
            {
                cout << mas1[i] << " ";
            }
            l = 0;
            cout << endl << "Сколько хотите вставить чисел -> ";
            cin >> q;
            if (q < 50 && q>0) {

                j = size;
                size += q;
                cout << "Введите числа -> ";
                for (int i = 0; i < q; i++)
                {
                    cin >> mas2[i];
                }
                cout << "Введите индекс ->";
                cin >> index;
                if (index < size&& index >= 0) {
                    for (int i = size; i > index; i--)
                    {
                        mas1[i] = mas1[i - q];
                    }
                    for (int i = index; i < index + q; i++)
                    {
                        mas1[i] = mas2[i - index];
                    }
                    for (int i = 0; i < size; i++)
                    {
                        cout << mas1[i] << " ";
                    }
                }
                else
                    cout << "Индекс не входит в размер массива" << endl;
            }
            else
                cout << "Введите натуральное число меньше 50" << endl;
            break;
        case 2:
            system("cls");
            for (int i = 0; i < size; i++)
            {
                cout << mas1[i] << " ";
            }
            cout << endl << "Сколько хотите удалить чисел -> ";
            cin >> k;
            q = k;
            if (k>0 && k<=size) {
                size -= q;
                cout << "Введите индексы которые будут удалены -> ";
                for (int i = 0; i < k; i++)
                {
                    cin >> mas2[i];
                    if (mas2[i] > size+q) {
                        pr = 3;
                        break;
                    }
                }
                if (pr == 3) {
                    cout << "Индекс не входит в массив" << endl;
                    break;
                }
                for (int i = 0; i < k; i++)
                {
                    if (mas2[i] + 1 == mas2[i + 1])
                        pr = 1;
                }
                if (pr == 1) {
                    for (int i = 0, j = 0; i < size; i++)
                    {
                        if (i == mas2[j]) {
                            j++;
                            mas1[i] = mas1[i + k];
                        }
                        else if (i > mas2[j])
                            mas1[i] = mas1[i + k];
                    }
                }
                else {
                    kc = 0;
                    f = false;
                    for (int i = 0, j = 0; i < size; i++)
                    {
                        if ((i == mas2[j]) || ((i + kc == mas2[j]) && f == true)) {
                            j++;
                            kc++;
                            f = true;
                            mas1[i] = mas1[i + kc];
                        }
                        else if (f == true)
                            mas1[i] = mas1[i + kc];
                    }
                }
            }
            else {
                cout << "Это число больше чем количество элементов в массиве или число меньше либо равно 0"<<endl;
            }
            for (int i = 0; i < size; i++)
            {
                cout << mas1[i] << " ";
            }
            break;
        case 0:
            exit(0);
            break;
        default:
            system("cls");
            cout << "Ошибка";
            break;
        }
    }
}

