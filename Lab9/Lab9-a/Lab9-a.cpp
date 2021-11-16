#include "windows.h";
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int Row = 4;
    const int Col = 5;
    int arr1[Row][Col] = {
        12, 34, 65, 23, 43,
        64, 9, 7, 5, 1,
        23, 46, 24, 32, 44,
        22, 31, 15, 69, 82
    };
    int max, min;
    cout << "Начальный массив:" << endl;
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            cout << setw(3) << arr1[i][j];
        }
        cout << endl;
    }
    cout << " ---------------" << endl;
    cout << "a)" << endl;
    int jmax;
    for (int i = 0; i < Row; i++)
    {
        jmax = 0;
        max = arr1[i][0];
        for (int j = 1; j < Col; j++)
        {
            if (arr1[i][j] > max) {
                max = arr1[i][j];
                jmax = j;
            }
        }
        arr1[i][jmax] = arr1[i][0];
        arr1[i][0] = max;
    }
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            cout << setw(3) << arr1[i][j];
        }
        cout << endl;
    }
    cout << " ---------------" << endl;
    cout << "б)" << endl;
    int arr2[Row][Col] = {
        12, 34, 65, 23, 43,
        64, 9, 7, 5, 1,
        23, 46, 24, 32, 44,
        22, 31, 15, 69, 82
    };
    int imin;
    for (int j = 0; j < Col; j++)
    {
        imin = 0;
        min = arr2[0][j];
        for (int i = 0; i < Row; i++)
        {
            if (arr2[i][j] < min) {
                min = arr2[i][j];
                imin = i;
            }
        }
        arr2[imin][j] = arr2[Row - 1][j];
        arr2[Row - 1][j] = min;
    }
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            cout << setw(3) << arr2[i][j];
        }
        cout << endl;
    }
}
