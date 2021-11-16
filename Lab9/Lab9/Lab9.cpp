#include "windows.h";
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int size = 9;
    int t;
    int arr[size][size] = {};
    srand(time(0));
   // int c = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            arr[i][j] = rand() % 100;
        }
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i >= j) {
                arr[i][j] = arr[j][i];
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << setw(4) << arr[i][j];
        }
        cout << endl;
    }
}
