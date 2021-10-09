
#include <iostream>
#include "windows.h"
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    short c, e, i, p, k;
    unsigned int rez;
    
    printf("Введите маску каналов (0 - 15) >");
    scanf_s("%hd", &c);
    printf("Введите маску внешнего прерывания (0 - 1) >");
    scanf_s("%hd", &e);
    printf("Введите маску внутреннего прерывания (0 - 1) >");
    scanf_s("%hd", &i);
    printf("Введите маску программного прерывания (0 - 1) >");
    scanf_s("%hd", &p);
    printf("Введите ключ защиты памяти (0 - 7) >");
    scanf_s("%hd", &k);
    
    rez = (c & 0xf) << 12;
    rez |= (e & 1) << 11;
    rez |= (i & 1) << 10;
    rez |= (p & 1) << 9;
    rez |= (k & 0x7) << 3;

    printf("\nCлово состояние программы = %04x\n\n", rez);

    printf("Введите слово состояние программы (0 - ffff) >");
    scanf_s("%x", &rez);
    c = (rez >> 12) & 0xf;
    e = (rez >> 11) & 1;
    i = (rez >> 10) & 1;
    p = (rez >> 9) & 1;
    k = (rez >> 3) & 0x7;
    printf("\n");
    printf("Маска каналов                 = %d;\n", c);
    printf("Маска внутреннего прерывания  = %d;\n", e);
    printf("Маска внешнего прерывания     = %d;\n", i);
    printf("Маска программного прерывания = %d;\n", p);
    printf("Ключ защиты памяти            = %d;\n", k);


    
}



