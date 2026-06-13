#include "../include/Zad5_3.h"
#include <iostream>

using namespace std;

union BazaDanych {
    int numer;
    float waga;
    char znak;
};

void Zad5_3::wykonajZadanie() {
    cout << "[Zadanie 5_3]" << endl;
    BazaDanych unia;

    unia.numer = 65;
    cout << "Zapisano numer. Znak odczytany z tej samej pamieci to: " << unia.znak << endl;

    unia.waga = 3.14f;
    cout << "Zapisano wage: " << unia.waga << endl;

    cout << "Proga odczytu numeru po zapisaniu wagi (BLAD / SMIECI): " << unia.numer << endl;
}