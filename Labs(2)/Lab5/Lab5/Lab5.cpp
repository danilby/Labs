#include <iostream>
#include "windows.h"
#include "TwoArray.h"
//#define ONE_DIMENSION_MATRIX
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(0));
    system("color A");
    int N;
    cout << "Введите N * N-> ";
    cin >> N;
    if (N > 20) cout << "Слишком большая размерность", exit(0);
    else if (N < 1) cout << "Введите число больше 0", exit(0);
#ifdef ONE_DIMENSION_MATRIX
    int* arr = new int[N * N];
    FillArray(arr, N);
    PrintArray(arr, N);
    cout << endl;
    cout << "Отредактированная матрица: " << endl;
    EditArray(arr, N);
    cout << endl;
    PrintArray(arr, N);
    delete[] arr, arr = nullptr;
#else
    int** arr = new int* [N];
    for (int i = 0; i < N; i++)
    {
        arr[i] = new int[N];
    }
    FillArray(arr, N);
    PrintArray(arr, N);
    cout << endl;
    cout << "Отредактировання матрица: " << endl;
    EditArray(arr, N);
    cout << endl;
    PrintArray(arr, N);
    for (int i = 0; i < N; i++)
    {
        delete[] arr[i];
    }
    delete[] arr, arr = nullptr;
#endif // ONE_DIMENSION_MATRIX

}
