#include <iostream>
#include <cstdlib>
#include <ctime>
#include "windows.h"
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int x, y, z, i, flag;
    int n = 0;
    printf("Сегодня, сдаем тест на знание таблицы умножения\n");
    printf("Всего будет 10 примеров\n");
    printf("Оценивается по 10-бальной шкале, и так, начнем\n");
    srand(time(0));
    for (i = 0; i < 10;i++)
    {
        x = rand() % 9 + 1;
        y = rand() % 9 + 1;
        printf("%d) %d * %d = ", (i + 1), x, y);
        scanf_s("%d", &z);
        if (x * y == z)
            n++;
    }
    printf("Всего правильных ответов: %d\n", n);
    if (i % 2 != 0)
        flag = 1;
    else
        flag = 0;
    if ((flag == 0 && n <= i / 2) || (flag == 1 && n <= (i + 1) / 2)) {
        if ((flag == 0 && n == i / 2) || (flag == 1 && n == (i + 1) / 2))
            printf("Можно и лучше\n\n\n");
        else
            printf("На пересдачу\n\n\n");
    }
    if ((flag == 0 && n > i / 2) || (flag == 1 && n > (i + 1) / 2)) {
        if (n == i)
            printf("Отлично\n\n\n");
        else
            printf("Хороший результат\n\n\n");
    }
}
