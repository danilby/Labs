#include <iostream>
#include <math.h>
#include "windows.h"
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double a, b, c, z;
    double d, x1, x2;

    printf("ax^2 + bx + c = z\n");
    while (1) {
        printf("\nВведите а >");
        scanf_s("%lf", &a);
        printf("Введите b >");
        scanf_s("%lf", &b);
        printf("Введите c >");
        scanf_s("%lf", &c);
        printf("Введите z >");
        scanf_s("%lf", &z);
        c -= z;
        d = b * b - 4 * a * c;
        if (d >= 0) {
            x1 = (-b + sqrt(d)) / (2 * a);
            x2 = (-b - sqrt(d)) / (2 * a);
            if (x1 == x2)
                printf("\nx = %.2lf\n", x1);
            else
                printf("\nx1 = %.2lf x2 = %.2lf\n", x1, x2);
        }
        else
            printf("\nУравнение не имеет корней\n");
    }
}
