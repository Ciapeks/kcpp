#include "../include/Zad4_2.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void Zad4_2::wykonajZadanie() {
    cout << "[Zadanie 4_2]" << endl;
    cout << "Wiadomosc standardowa" << endl;
    cerr << "Wiadomosc bledu" << endl;

    ofstream plikZapis("testowy.txt");
    if (plikZapis.is_open()) {
        plikZapis << "To jest linijka zapisana do pliku." << endl;
        plikZapis.close();
    }

    ifstream plikOdczyt("testowy.txt");
    string linia;
    if (plikOdczyt.is_open()) {
        while (getline(plikOdczyt, linia)) {
            cout << linia << endl;
        }
        plikOdczyt.close();
    } 
}