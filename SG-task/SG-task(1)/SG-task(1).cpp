#include <iomanip>
#include <iostream>
#include "windows.h"
#include <chrono>
#define size 5
#define M 1000
using namespace std;
void FillArrayOrderly(int arr[]) {
    for (int i = 0; i < size; i++)
    {
        arr[i] = i;
    }
}
void FillArrayReverse(int arr[]) {
    int t = 100;
    for (int i = 0; i < size; i++)
    {
        arr[i] = t;
        t--;
    }
}
void FillArrayRandom(int arr[]) {
    srand(time(0));
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
    }
}
void SortArray(int arr[]) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void SortArray(double arr[]) {
    double temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
double AverageDuration(double dur_arr[]) {
    int c = 0;
    double aver_dur = 0;
    for (int i = 100; i < M - 100; i++)
    {
        // cout << i + 1 << ". Время работы: " << dur_arr[i] << endl;    
        aver_dur += dur_arr[i];
        c++;
    }
    return aver_dur / c;
}
void PrintArray(int arr[]) {
    for (int i = 0; i < size; i++)
    {
        cout << setw(4) << arr[i];
    }
    cout << endl;
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
   // const int M = 1000;
    double dur_arr[M];
    //const int size = 5;
    int arr[size];
    int sub_arr[size];
    cout << "Сортировка пузырьком(Bubble sort):" << endl;
    // Время упорядоченного массива
    cout << "Упорядоченный массив: " << endl;
    FillArrayOrderly(arr);
    for (int i = 0; i < M; i++)
    {
        auto start = chrono::high_resolution_clock::now();
        SortArray(arr);
        auto end = chrono::high_resolution_clock::now();
        chrono::duration<double> duration = end - start;
        dur_arr[i] = duration.count();
    }
    cout << "Начальный масив:" << endl;
    FillArrayOrderly(arr);
    PrintArray(arr);
    cout << "Отсортированный:" << endl;
    SortArray(arr);
    PrintArray(arr);
    SortArray(dur_arr);
    printf("Среднее значение: %.8lf\n\n", AverageDuration(dur_arr));
    // Время упорядоченного массива в обратном порядке
    cout << "Упорядоченный массив в обратном порядке: " << endl;
    
    FillArrayReverse(arr);
    for (int i = 0; i < size; i++)
    {
        sub_arr[i] = arr[i];
    }
    for (int i = 0; i < M; i++)
    {
        auto start = chrono::high_resolution_clock::now();
        SortArray(arr);
        auto end = chrono::high_resolution_clock::now();
        chrono::duration<double> duration = end - start;
        dur_arr[i] = duration.count();
        for (int i = 0; i < size; i++)
        {
            arr[i] = sub_arr[i];
        }       
    }
    cout << "Начальный масив:" << endl;
    FillArrayReverse(arr);
    PrintArray(arr);
    cout << "Отсортированный:" << endl;
    SortArray(arr);
    PrintArray(arr);
    SortArray(dur_arr);
    printf("Среднее значение: %.8lf\n\n", AverageDuration(dur_arr));
    //Время массива со случайными значениями
    cout << "Массив со случайными значениями" << endl;
    FillArrayRandom(arr);
    for (int i = 0; i < size; i++)
    {
        sub_arr[i] = arr[i];
    }
    for (int i = 0; i < M; i++)
    {
        auto start = chrono::high_resolution_clock::now();
        SortArray(arr);
        auto end = chrono::high_resolution_clock::now();
        chrono::duration<double> duration = end - start;
        dur_arr[i] = duration.count();
        for (int i = 0; i < size; i++)
        {
            arr[i] = sub_arr[i];
        }
    }
    cout << "Начальный масив:" << endl;
    FillArrayRandom(arr);
    PrintArray(arr);
    cout << "Отсортированный:" << endl;
    SortArray(arr);
    PrintArray(arr);
    SortArray(dur_arr);
    printf("Среднее значение: %.8lf\n\n", AverageDuration(dur_arr));
}