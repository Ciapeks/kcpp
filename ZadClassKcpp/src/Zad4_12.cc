#include "../include/Zad4_12.h"
#include <iostream>
using namespace std;

void Zad4_12::wykonajZadanie() {
    cout << "[Zadanie 4_12]" << endl;
    int liczba;
    long long silnia = 1;
    long long sumaSilni = 0;

    cout << "Podaj liczbe do obliczenia silni: ";
    cin >> liczba;

    if (liczba < 0) {
        cout << "Silnia jest zdefiniowana tylko dla liczb nieujemnych!" << endl;
        return;
    }

    for (int i = 1; i <= liczba; i++) {
        silnia *= i;
        sumaSilni += silnia;
    }

    cout << "Silnia z " << liczba << " wynosi: " << silnia << endl;
    cout << "Suma silni od 1 do " << liczba << " wynosi: " << sumaSilni << endl;
}