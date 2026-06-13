#include "../include/Zad3_5.h"
#include <iostream>

using namespace std;

void Zad3_5::wykonajZadanie() {
    cout << "[Zadanie 3_5]" << endl;
    int tab[10] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90};
    int* ptr1 = &tab[2];
    int* ptr2 = &tab[7];
    cout << ptr2 - ptr1 << endl;
}