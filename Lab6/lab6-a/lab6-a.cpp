
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "windows.h"
int main()   
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int x, a1, a2, y;
    a1 = 1;
    a2 = 100;
    int n = 1;
    printf("Добрый день, поиграем в игру!\n");
    printf("Я загадываю число от 1 до 100 ваша задача угадать\n");
    srand(time(0));
    x = rand() % a2 + a1; // случайное число от m до n-1 + m где  n = 100 m = 1
    printf("Я загадал, поехали >");
    do
    {
        scanf_s("%d", &y);
        if (y == x) {
            break;
        }
        if (y > x) {
            printf("Меньше > ");
            n++;
        }
        else {
            printf("Больше > ");
            n++;
        }
    } while (y != x);
    printf("Поздравляю вы угадали!\n");
    printf("Всего попыток было: %d\n\n\n", n);
    
   
    
    
    
    
    
    
    
    
    
    
    //int L = 1;
    //int R = 100;
    //int mid;
    //int k,x;
    //int n = 1;
    //printf("Добрый день, поиграем в игру!\n");
    //printf("Я загадываю число от 1 до 100 ваша задача угадать\n");
    //srand(time(0));
    //x = rand() % R + L; // случайное число от m до n-1 + m где  n = 100 m = 1
    //printf("Я загадал, поехали >");
    //do {
    //    scanf_s("%d", &k);
    //    L = 1, R = 100;
    //    while (L <= R)
    //    {
    //        mid = (L + R) / 2;
    //        if (mid == k) break;
    //        if (mid > k) R = mid - 1;
    //        else L = mid + 1;
    //    }
    //    if (mid == x) break;
    //    if (mid > x) printf("Меньше > "), n++;
    //    else printf("Больше > "), n++;

    //} while (x != mid);
    //printf("Поздравляю вы угадали!\n");
    //printf("Всего попыток было: %d\n\n\n", n);
    
}
