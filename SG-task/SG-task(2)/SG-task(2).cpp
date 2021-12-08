#include <iomanip>
#include <iostream>
#include "windows.h"
#include <chrono>
#define size 45
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
//void heapify(int arr[], int n, int i)
//{
//    int largest = i;
//    int l = 2 * i + 1;
//    int r = 2 * i + 2;
//    if (l < n && arr[l] > arr[largest])
//        largest = l;
//    if (r < n && arr[r] > arr[largest])
//        largest = r;
//    if (largest != i)
//    {
//        int temp = arr[i];
//        arr[i] = arr[largest];
//        arr[largest] = temp;
//        heapify(arr, n, largest);
//    }
//}
//void HeapSortArray(int arr[])
//{
//    for (int i = size / 2 - 1; i >= 0; i--)
//        heapify(arr, size, i);
//    for (int i = size - 1; i >= 0; i--)
//    {
//        int temp = arr[0];
//        arr[0] = arr[i];
//        arr[i] = temp;
//        heapify(arr, i, 0);
//    }
//}
void HeapSortArray(int arr[]) {
    int temp;
    int sh = 0; //смещение
    bool b = false;
    for (;;)
    {
        b = false;
        for (int i = 0; i < size; i++)
        {
            if (i * 2 + 2 + sh < size)
            {
                if ((arr[i + sh] > arr[i * 2 + 1 + sh]) || (arr[i + sh] > arr[i * 2 + 2 + sh]))
                {
                    if (arr[i * 2 + 1 + sh] < arr[i * 2 + 2 + sh])
                    {
                        temp = arr[i * 2 + 1 + sh];
                        arr[i * 2 + 1 + sh] = arr[i + sh];
                        arr[i + sh] = temp;
                        b = true;
                    }
                    else if (arr[i * 2 + 2 + sh] < arr[i * 2 + 1 + sh])
                    {
                        temp = arr[i * 2 + 2 + sh];
                        arr[i * 2 + 2 + sh] = arr[i + sh];
                        arr[i + sh] = temp;
                        b = true;
                    }
                }
                //дополнительная проверка для последних двух элементов
                if (arr[i * 2 + 2 + sh] < arr[i * 2 + 1 + sh])
                {
                    temp = arr[i * 2 + 1 + sh];
                    arr[i * 2 + 1 + sh] = arr[i * 2 + 2 + sh];
                    arr[i * 2 + 2 + sh] = temp;
                    b = true;
                }
            }
            else if (i * 2 + 1 + sh < size)
            {
                if (arr[i + sh] > arr[i * 2 + 1 + sh])
                {
                    temp = arr[i * 2 + 1 + sh];
                    arr[i * 2 + 1 + sh] = arr[i + sh];
                    arr[i + sh] = temp;
                    b = true;
                }
            }
        }
        if (!b) sh++; //смещение увеличивается, когда на текущем этапе
                  //сортировать больше нечего
        if (sh + 2 == size) break;
    } 
}
void DurationSortArray(double arr[]) {
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
    double dur_arr[M];
    int arr[size];
    int sub_arr[size];
    cout << "Пирамидальная сортировка(Heapsort):" << endl;
    // Время упорядоченного массива
    cout << "Упорядоченный массив: " << endl;
    FillArrayOrderly(arr);
    for (int i = 0; i < M; i++)
    {
        auto start = chrono::high_resolution_clock::now();
        HeapSortArray(arr);
        auto end = chrono::high_resolution_clock::now();
        chrono::duration<double> duration = end - start;
        dur_arr[i] = duration.count();
    }
    cout << "Начальный масив:" << endl;
    FillArrayOrderly(arr);
    PrintArray(arr);
    cout << "Отсортированный:" << endl;
    HeapSortArray(arr);
    PrintArray(arr);
    DurationSortArray(dur_arr);
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
        HeapSortArray(arr);
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
    HeapSortArray(arr);
    PrintArray(arr);
    DurationSortArray(dur_arr);
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
        HeapSortArray(arr);
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
    HeapSortArray(arr);
    PrintArray(arr);
    DurationSortArray(dur_arr);
    printf("Среднее значение: %.8lf\n\n", AverageDuration(dur_arr));
}
