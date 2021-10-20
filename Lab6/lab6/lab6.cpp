
#include <iostream>
#include <math.h>
#include "windows.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const double eps = 0.000001;
    double dbln;
    double num = 0;
    double sum = 0;
    int k = 1;
    for (int n = 0; ;n++, k = -k)
    {
        dbln = n;
        num = k * (dbln + 1) / (dbln * dbln * dbln + 2);
        if (fabs(num) >= eps) {
             sum += num;          
        }
        else break;
        if (n == 9)
            printf("Сумма 10 членов ряда = %lf\n", sum);
    }
    printf("Полная сумма ряда = %lf\n\n\n", sum);
}
