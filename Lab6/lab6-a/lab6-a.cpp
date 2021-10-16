
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "windows.h"
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int x, y;
    int n = 1;
    printf("Добрый день, поиграем в игру!\n");
    printf("Я загадываю число от 1 до 100 ваша задача угадать\n");
    srand(time(0));
    x = rand() % 100 + 1; // случайное число от m до n-1 + m где  n = 100 m = 1
    printf("Я загадал, поехали >");
    do
    {
        scanf_s("%d", &y);
        if (y == x) {
            break;
        }
        if (y > x) {
            printf("Меньше >");
            n++;
        }
        else {
            printf("Больше >");
            n++;
        }
    } while (y != x);
    printf("Поздравляю вы угадали!\n");
    printf("Всего попыток было: %d\n\n\n", n);
    
}
