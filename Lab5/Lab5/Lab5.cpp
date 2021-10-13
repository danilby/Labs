#include <iostream>
#include <conio.h>
#include "windows.h"
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double x, y;
    while (1) {
        printf("\nВведите x >");
        scanf_s("%lf", &x);
        printf("Введите y >");
        scanf_s("%lf", &y);
        printf("\n x = %.3lf y = %.3lf", x, y);
        if ((x * x + y * y <= 1 && y >= 0 && x <= 0) || (x * x + y * y <= 1 && x >= 0 && y <= 0))
            printf("\nТочка попадает в область\n");
        else
            printf("\nТочка не попадает в область\n");
    }
}