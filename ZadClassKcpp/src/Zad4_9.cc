#include "../include/Zad4_9.h"
#include <iostream>
using namespace std;

void petlaWhile() {
    int i = 0;
    while (i < 5) {
        if (i == 2) { i++; continue; }
        cout << ++i << endl;
    }
}

void petlaDoWhile() {
    int i = 0;
    do {
        if (i == 4) break;
        cout << i++ << endl;
    } while (i < 5);
}

void petlaFor() {
    for (int i = 0; i < 5; i++)
    {
        if (i == 3) return;
        cout << i << endl;
    }
}

void Zad4_9::wykonajZadanie() {
    cout << "[Zadanie 4_9]" << endl;
    petlaWhile();
    petlaDoWhile();
    petlaFor();
}