#include "Windows.h"
#include <iostream>
#include "F_firms.h"
#include "S_firms.h"
const int s = 10;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Firms firm[s];
    InputFirm(firm);
    PrintFirm(firm);
    cout << endl << endl;
    SortFirm(firm);
    PrintFirm(firm);
    
}

