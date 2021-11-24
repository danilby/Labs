#include <iomanip>
#include <iostream>
#include "windows.h"
using namespace std;
void FillArray(int arr[10][10], int M, int N) {
    srand(time(0));
    int max, min;
    min = -9;
    max = 9;
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            arr[i][j] = rand() % (max - min + 1) + min;
        }
    }
}
void PrintArray(int arr[10][10], int M, int N) {
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << setw(3) << arr[i][j];
        }
        cout << endl;
    }
}
int CountArr(int arr[10][10], int M, int N,int i) {
    int j = 0;
    int count = 0;
    while (j < N) {
        if (arr[i][j] >= 0)
            count++;
        j++;
    }
    return count;
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int M;
    int N;
    int i;
    int arr[10][10];
    do {
        cout << "Введите кол-во строк ->";
        cin >> M;
        cout << "Введите кол-во столбцов ->";
        cin >> N;
        if (M < 0 || N < 0)
            cout << "Введите числа больше 0" << endl;
        else
            break;
    } while (M < 0 || N < 0);
    FillArray(arr, M, N);
    PrintArray(arr, M, N);
    for (int i = 0; i < M; i++)
    {
        cout << "Кол-во положительных эл. в строке " << i + 1 << ": " << CountArr(arr, M, N, i) << endl;
    }
    cout << endl << endl;
}
