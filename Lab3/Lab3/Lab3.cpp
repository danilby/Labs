#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <math.h>
#include "windows.h";
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const double pi = 3.14159;
    double x, y; // вводятся с клавиатуры
    double a = 12.3, b = 7.2, c = 1.2, d = 9.7; //задаются в программе
    int n = 4;
    //(c!= 0, a!=0, n!=1,y!=0, ax!= pi/2) - так как знаменатель не равен 0
    // ((ax+b) && (yx+d))>0 - так как логарифм не может быть отрицательным
    // (ax > -b) && (yx > -d)
    double t1, t2;
    printf("Если заданные числа в программе (+) введите x > %lf\n", -b / a);
   // printf("Если заданные числа в программе (-) введите x < %lf\n", -b / a);
    printf("Введите x >>");
    scanf("%lf", &x);
    printf("Если заданные числа в программе (+) введите y > %lf\n", -d / x);
   // printf("Если заданные числа в программе (-) введите y < %lf\n", -d / x);
    printf("Введите y >>");
    scanf("%lf", &y);
    printf("\n\n");
    double ax = a * x;
    double axr = ax * (pi / 180);
    t1 = (1 / c) * log(pow(ax + b, b / a) * pow(x * y + d, d / y));
    t2 = pow(a*(n-1),-1) * sin(axr) / pow(cos(axr), n - 1);
    //t2 = 1 / (a * (n - 1)) * sin(axr) / pow(cos(axr), n - 1);

    printf("t1 = %.2lf\n", t1);
    printf("t2 = %lf", t2);






    printf("\n\n\n\n");
    return 0;
}
