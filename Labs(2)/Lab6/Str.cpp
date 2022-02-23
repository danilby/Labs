#include "Windows.h"
#include <iostream>
#include "Str.h"
using namespace std;
void Func(char* S1, char* S2,const int max_len) {
    int count = 0;
    while (*S1 != 0 && count < max_len) {
        count++;
        S1++;
    }
    while (*S2 != 0 && count < max_len) {
        count++;
        *S1 = *S2;
        S1++, S2++;
    }
    *S1 = '\0';
}