#include <iomanip>
#include <iostream>
#include "windows.h"
using namespace std;
void Function(int a,int count) {
    if (a < 10) {
        cout << count << " число: " << a << endl;
    }
    else {
        Function(a / 10, count - 1);
        cout <<count<<" число: "<< a % 10 << endl;
    }
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a,b, count;
    while (true) {
        count = 0;
        cout << "Введите число -> ";
        cin >> a;
        b = a;
        while (b != 0) {
            count++;
            b /= 10;
        }
        Function(a, count);
    }
   
}