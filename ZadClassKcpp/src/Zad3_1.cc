#include "../include/Zad3_1.h"
#include <iostream>

using namespace std;

void zamien(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Zad3_1::wykonajZadanie() {
    cout << "[Zadanie 3_1]" << endl;
    int x = 10, y = 20;
    zamien(&x, &y);
    cout << x << " " << y << endl;
}