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
    int k, b = 0, c = 1, d = 2;
    srand(time(0));
    int asize, bsize = 0, csize = 0, dsize = 0;
    cout << "Введите размер массива(до 20) -> ";
    cin >> asize;
    int A[size];
    int B[size];
    int C[size];
    int D[size];
    if (asize < 1 || asize > size) cout << "Ошибка ", exit(0);
    cout << "Массив A: " << endl;
    FeelArray(A, asize);
    PrintArray(A, asize);
    cout << "Массив B: ";
    bsize = get_size_b(A, asize);
    GetElement_B(A, B, asize);
    if (bsize == 0) cout << "нет отрицательных чисел ";
    cout << endl;
    PrintArray(B, bsize);
    cout << "Массив C: ";
    csize = get_size_c(A, asize);
    GetElement_C(A, C, asize);
    if (csize == 0) cout << "нет положительных чисел ";
    cout << endl;
    PrintArray(C, csize);
    cout << "Массив D: ";
    dsize = get_size_d(A, asize);
    GetElement_D(A, D, asize);
    if (dsize == 0) cout << "нет 0 ";
    cout << endl;
    PrintArray(D, dsize);
    int startsize = 0;
    EditArray(A, D, dsize, &startsize);
    EditArray(A, B, bsize, &startsize);
    EditArray(A, C, csize, &startsize);
    cout << "Массив A: " << endl;
    PrintArray(A, asize);
    cout << endl << endl;
}
