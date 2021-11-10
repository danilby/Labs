#include "windows.h"
#include <iostream>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int number1, x, i, sum, count, number2, n;
    int mas[20];
   /* while (true)
    {
        n = 1;
        sum = 0;
        count = 0;
        number2 = 0;
        cout << "Введите число ->";
        cin >> number1;
        while (number1 != 0) {
            sum += number1 % 10;
            number2 = number2 * 10 + number1 % 10;
            number1 /= 10;
            count++;
        }
        if (count > 1 && number2 / 10 == 0)
            count = 1;

        cout << "Число наоборот: " << number2 << endl;
        cout << "Сумма цифр: " << sum << endl;
        cout << "Кол-во цифр: " << count << endl << endl;
    }*/

 
    while (true)
    {
        count = 0;
        sum = 0;
        number2 = 0;
        i = 0;
        n = 1;
        cout << "Введите число ->";
        cin >> number1;
        do
        {
            sum += number1 % 10;
            mas[i] = number1 % 10;
            number1 = number1 / 10;
            i++;
            count++;
        } while (number1 != 0);
        for (int i = 0; i < count-1; i++)
        {
            n *= 10;
        }
        for (int i = 0; i < count; i++,n/=10)
        {
            number2 += mas[i] * n;
        }
        if (count > 1 && number2 / 10 == 0)
                count = 1;
        cout << "Число наоборот: " << number2 << endl << "Кол-во цифр: " << count << endl << "Сумма цифр: " << sum << endl << endl;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}













    