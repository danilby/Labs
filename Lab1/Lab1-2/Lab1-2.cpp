#include <iostream>

int main()
{
    int a, b, c;
    float p;
    float s;
    a = 10;//Ввод переменных для вычисления 
    b = 12;
    c = 10;
    p = (a + b + c) / 2; // Вычисление полупериметра
    s = sqrt(p * (p - a) * (p - b) * (p - c)); // Вычисление площади

}