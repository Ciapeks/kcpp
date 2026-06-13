#include "../include/Zad2_1.h"
#include <iostream>
using namespace std;

int zwrocWartosc() {
    return 10;
}

int& zwrocReferencje(int& zmienna) {
    return zmienna;
}

int* zwrocWskaznik(int* zmienna) {
    return zmienna;
}

int* zwrocTablice() {
    static int tablica[5] = {1, 2, 3, 4, 5};
    return tablica;
}

void Zad2_1::wykonajZadanie() {
    cout << "[Zadanie 2_1]" << endl;
    int a = 5;

    cout << zwrocWartosc() << endl;
    cout << zwrocReferencje(a) << endl;
    cout << *zwrocWskaznik(&a) << endl;
    cout << zwrocTablice()[0] << endl;
}