#include "windows.h"
#include <iostream>
#include "Arr_b.h"
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(0));
    const int size = 20;
    int a;
    int startsize = 0;
    srand(time(0));
    int asize, bsize = 0, csize = 0, dsize = 0;
    cout << "Введите размер массива(до 20) -> ";
    cin >> asize;
    int A[size];
    int A2[size];
    int B[size];
    int C[size];
    int D[size];
    if (asize < 1 || asize > size) cout << "Ошибка ", exit(0);
    cout << "Массив A: " << endl;
    FeelArray(A, asize);
    CopyArray(A, A2, asize);
    PrintArray(A, asize);
    bsize = get_size_b(A, asize);
    GetElement_B(A, B, asize);
    csize = get_size_c(A, asize);
    GetElement_C(A, C, asize);
    dsize = get_size_d(A, asize);
    GetElement_D(A, D, asize);
    EditArray(A, D, dsize, &startsize);
    EditArray(A, B, bsize, &startsize);
    EditArray(A, C, csize, &startsize);
    while (true) {
        cout << "0 - Напечатать A\n1 - Напечатать B\n2 - Напечатать C\n3 - Напечатать D\n4 - Напечатать отредактированный массив A\n5 - Напечатать все\n9 - Выход\n -->";
        cin >> a;
        switch (a) {
        case 0:
            system("cls");
            cout << endl;
            cout << "Массив A: ";
            PrintArray(A2, asize);
            break;
        case 1:
            system("cls");
            if (bsize == 0) cout << "нет отрицательных чисел ";
            cout << endl;
            cout << "Массив B: ";
            PrintArray(B, bsize);
            break;
        case 2:
            system("cls");
            if (csize == 0) cout << "нет положительных чисел ";
            cout << endl;
            cout << "Массив C: ";
            PrintArray(C, csize);
            break;
        case 3:
            system("cls");
            if (dsize == 0) cout << "нет 0 ";
            cout << endl;
            cout << "Массив D: ";
            PrintArray(D, dsize);
            break;
        case 4:
            system("cls");
            cout << "Массив A: " << endl;
            PrintArray(A, asize);
            break;
        case 5:
            system("cls");
            cout << "Начальный A: ";
            cout << endl;
            PrintArray(A2, asize);
            cout << "Массив B: ";
            cout << endl;
            PrintArray(B, bsize);
            cout << "Массив C: ";
            cout << endl;
            PrintArray(C, csize);
            cout << "Массив D: ";
            cout << endl;
            PrintArray(D, dsize);
            cout << "Массив A: ";
            cout << endl;
            PrintArray(A, asize);
            break;
        case 9:
            exit(0);
        default:
            cout << endl << "Ошибка", exit(0);
        }
    }
    cout << endl << endl;
}
