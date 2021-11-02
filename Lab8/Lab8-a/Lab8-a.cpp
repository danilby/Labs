
#include <iostream>
#include "windows.h"
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int const size = 10;
    int mas[size] = {};
    int x;
    int q;
    int count = 0;
    int sum;
    cout << "Здравствуйте я программа авиадиспетчер!" << endl;
    cout << "Мы всегда за удобства для наших клиентов!" << endl;
    cout << "Приступим к бронированию мест!" << endl;
    while (true)
    {
        sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum += mas[i];
            if (sum == 10) {
                cout << "Все места заняты, cпасибо за то, что используете нашу программу!" << endl << endl;
                exit(0);
            }
        }
        cout << "Вы курите?" << endl;
        cout << "1 - Да" << endl << "2 - Нет" << endl << "3 - Проверить свободные места" << endl << "0 - Выйти" << endl << "->";
        cin >> x;
        count = 0;
        switch (x)
        {
        case 1:
            system("cls");
            for (int i = 0; i < size / 2; i++)
            {
                if (mas[i] == 0)
                    count++;
            }
            if (count == 0) {
                cout << "Мест нет" << endl;
                break;
            }
            else {
                cout << "Всего мест доступно: " << count << endl;
                cout << "Сколько мест бронируете?" << endl << "-> ";
                while (true)
                {
                    cin >> q;
                    if (q <= count) {
                        for (int i = 0; i < size / 2; i++)
                        {
                            if (mas[i] == 0 && q != 0) {
                                mas[i] = 1;
                                q--;
                            }
                            else
                                continue;
                        }
                        system("cls");
                        cout << "Готово ваши места забронированы!" << endl;
                        break;
                    }
                    else {
                        system("cls");
                        cout << "Извините, но мест всего: " << count << endl;
                        cout << "Выбирите меньше -> ";
                    }
                }
                break;
            }
        case 2:
            system("cls");
            for (int i = size / 2; i < size; i++)
            {
                if (mas[i] == 0)
                    count++;
            }
            if (count == 0) {
                cout << "Мест нет" << endl;
                break;
            }
            else {
                cout << "Всего мест доступно: " << count << endl;
                cout << "Сколько мест бронируете?" << endl << "-> ";
                while (true)
                {
                    cin >> q;
                    if (q <= count) {
                        for (int i = size / 2; i < size; i++)
                        {
                            if (mas[i] == 0 && q != 0) {
                                mas[i] = 1;
                                q--;
                            }
                            else
                                continue;
                        }
                        system("cls");
                        cout << "Готово ваши места забронированы!" << endl;
                        break;
                    }
                    else {
                        system("cls");
                        cout << "Извините, но мест всего: " << count << endl;
                        cout << "Выбирите меньше ->";
                    }
                }
                break;
            }
        case 0:
            exit(0);
            break;
        case 3:
            system("cls");
            for (int i = 0; i < size / 2; i++)
            {
                if (mas[i] == 0)
                    count++;
            }
            if (count == 0)
                cout << "Для курящих все места заняты" << endl;
            else {
                cout << "Cвободные места для курящих под номером: ";
                for (int i = 0; i < size / 2; i++)
                {
                    if (mas[i] == 0)
                        if (i == size / 2 - 1)
                            printf("%d.\n", i + 1);
                        else
                            printf("%d, ", i + 1);
                }
            }
            for (int i = size / 2; i < size; i++)
            {
                if (mas[i] == 0)
                    count++;
            }
            if (count == 0)
                cout << "Для некурящих все места заняты" << endl;
            else {
                cout << "Cвободные места для некурящих под номером: ";
                for (int i = size / 2; i < size; i++)
                {
                    if (mas[i] == 0)
                        if (i == size-1)
                            printf("%d.\n", i + 1);
                        else
                            printf("%d, ", i + 1);
                }
                break;
        default:
            system("cls");
            cout << "Ошибка!" << endl;
            break;
            }
        }
    }
}
