
#include <iostream>
#include "windows.h"
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int k;
    int flag;
    while (1) {
        flag = 0;
        printf("Введите натуральное k >");
        scanf_s("%d", &k);
        if (k >= 11 && k <= 19)
            printf("У меня %d грибов\n", k), flag = 1;
        if ((k - 1) % 10 == 0 && flag == 0)
            printf("У меня %d гриб\n", k), flag = 1;
        if (((k - 2) % 10 == 0 || (k - 4) % 10 == 0 || (k - 3) % 10 == 0) && (flag == 0))
            printf("У меня %d гриба\n", k), flag = 1;
        if (flag == 0)
            printf("У меня %d грибов\n", k);
    }
}

