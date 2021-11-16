#include "windows.h"
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int Row = 10;
    const int Col = 10;
    int R1, C1, R2, C2 ;
    int arr1[Row][Col];
    int arr2[Row][Col];
    int arr3[Row][Col] = {};
    while (true) {
        cout << "Введите кол-во строк в первой матрице -> ";
        cin >> R1;
        cout << "Введите кол-во столбцов в первой матрице -> ";
        cin >> C1;
        cout << "Введите кол-во строк во второй матрице -> ";
        cin >> R2;
        cout << "Введите кол-во cтолбцов во второй матрице -> ";
        cin >> C2;
        if ((C1 != R2) && (C1 != 10 && R1 != 10 && C2 != 10 && R2 != 10)) {
            system("cls");
            cout << "Эти матрицы не могут умножиться" << endl;
        }
        else {
            cout << "Первая матрица: " << endl;
            cout << "Введите " << C1 << " числа" << endl;
            for (int i = 0; i < R1; i++)
            {
                cout << "Строка " << i + 1<<": ";
                for (int j = 0; j < C1; j++)
                {
                    cin >> arr1[i][j];
                }
            }
            cout << "Вторая матрица: " << endl;
            cout << "Введите " << C2 << " числа" << endl;
            for (int i = 0; i < R2; i++)
            {
                cout << "Строка " << i + 1 << ": ";
                for (int j = 0; j < C2; j++)
                {
                    cin >> arr2[i][j];
                }
            }
            for (int i = 0; i < R1; i++)
            {
                for (int j = 0; j < C1; j++)
                {
                    cout << setw(3) << arr1[i][j];
                }
                cout << endl;
            }
            cout<< " * " << endl;
            for (int i = 0; i < R2; i++)
            {
                for (int j = 0; j < C2; j++)
                {
                    cout << setw(3) << arr2[i][j];
                }
                cout << endl;
            }
            for (int i = 0; i < R1; i++)
            {
                for (int j = 0; j < C2; j++)
                {
                    for (int k = 0; k < C1; k++)
                    {
                        arr3[i][j] += arr1[i][k] * arr2[k][j];
                    }
                }
            }
            cout << "=" << endl;
            for (int i = 0; i < R1; i++)
            {
                for (int j = 0; j < C2; j++)
                {
                    cout << setw(3) << arr3[i][j];
                }
                cout << endl;
            }
            break;
        }
    }

}
