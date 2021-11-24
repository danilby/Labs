#include <iomanip>
#include <iostream>
#include "windows.h"
using namespace std;

int Array(int arr[],int M,int N) {
    int darr[10][10];
    int temp;
    cout << endl << "Двумерный из одномерного:" << endl;
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            darr[i][j] = arr[i * N + j];
            cout << setw(3) << darr[i][j];
        }
        cout << endl;
    }
    cout <<"Умножаем каждый эл. строки на эл. гд своей строки: "<< endl;
    for (int i = 0; i < M; i++)
    {
        temp = darr[i][i];
        for (int j = 0; j < N; j++)
        {
            darr[i][j] *= temp;
            cout << setw(3) << darr[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            arr[i * N + j] = darr[i][j];
        }
    }
    return M;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int arr[100];
    srand(time(0));
    int M;
    int N;
    cout << "Введите кол-во строк -> ";
    cin >> M;
    cout << "Введите кол-во столбцов ->";
    cin >> N;
    do {
        if ((M < 0 || N < 0) || (M != N)) {
            cout << "Матрица должна быть квадратная и размеры больше 0" << endl;
            cout << "Введите кол-во строк -> ";
            cin >> M;
            cout << "Введите кол-во столбцов ->";
            cin >> N;
        }
        else
            break;
    } while (true);
    cout << "Начальный массив:" << endl;
    for (int i = 0; i < M * N; i++)
    {
        arr[i] = rand() % 10;
        cout << setw(3) << arr[i];
    }
    int x = Array(arr, M, N);
    cout <<"Преобразовываем в одномерный:"<< endl;
    for (int i = 0; i < M*N; i++)
    {
        cout << setw(3) << arr[i];
    }
    cout << endl;
    cout << "Количество строк в матрице: " << x << endl << endl;
}
