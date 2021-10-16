#include <iostream>
#include <cstdlib>
#include <ctime>
#include "windows.h"
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int x, y, z;
    int n = 0;
    printf("Сегодня, сдаем тест на знание таблицы умножения\n");
    printf("Всего будет 10 примеров\n");
    printf("Оценивается по 10-бальной шкале, и так, начнем\n");
    srand(time(0));
    for (int i = 0; i < 10;i++)
    {
        x = rand() % 9 + 1;
        y = rand() % 9 + 1;
        printf("%d) %d * %d = ", (i + 1), x, y);
        scanf_s("%d", &z);
        if (x * y == z)
            n++;
    }
    printf("Всего правильных ответов: %d\n", n);
    if (n <= 5) {
        if (n == 5)
            printf("Можно и лучше\n\n\n");
        else
            printf("На пересдачу\n\n\n");
    }
    if (n > 5) {
        if (n == 10)
            printf("Отлично\n\n\n");
        else
            printf("Хороший результат\n\n\n");
    }
}
