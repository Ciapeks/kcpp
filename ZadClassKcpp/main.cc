#include <iostream>
#include <iomanip>
#include "include/ZadKcpp.h"
#include "include/Zad2_1.h"
#include "include/Zad2_2.h"
#include "include/Zad3_1.h"
#include "include/Zad3_5.h"
#include "include/Zad4_2.h"
#include "include/Zad4_7.h"
#include "include/Zad4_9.h"
#include "include/Zad4_12.h"
#include "include/Zad5_3.h"
#include "include/Zad5_6.h"

using namespace std;

int main() {
    int wybor = 0;
    ZadKcpp* aktualneZadanie = nullptr;

    while (wybor != 11) {
        cout << "\n===============================================================================" << endl;
        cout << "           MENU GLOWNE ZADAN        " << endl;
        cout << "           Wiktor Markiewicz        " << endl;
        cout << "===============================================================================" << endl;
        cout << "--- Sekjca 2 (Funkcje) ---" << endl;
        cout << right << setw(4) << "1. " << left << setw(14) << "Zadanie 2_1"
             << " - Zwracanie przez wartosc, referencje, wskaznik i tablice" << endl;
        cout << right << setw(4) << "2. " << left << setw(14) << "Zadanie 2_2"
             << " - Przeciazenie funkcji (rozne argumenty, ta sama nazwa)" << endl;
        cout << "\n--- Sekcja 3 (Wskazniki) ---" << endl;
        cout << right << setw(4) << "3. " << left << setw(14) << "Zadanie 3_1"
             << " - Zamiana wartosci dwoch zmiennych za pomoca wskaznikow" << endl;
        cout << right << setw(4) << "4. " << left << setw(14) << "Zadanie 3_5"
             << " - Arytmetyka wskaznikow i obliczenie odleglosci w tablicy" << endl;
        cout << "\n--- Sekcja 4 (Instrukcje sterujace) ---" << endl;
        cout << right << setw(4) << "5. " << left << setw(14) << "Zadanie 4_2"
             << " - Obsluga standardowego wyjscia (cout) i bledow (cerr)" << endl;
        cout << right << setw(4) << "6. " << left << setw(14) << "Zadanie 4_7"
             << " - Operatory bitowe i weryfikacja parzystosci liczb" << endl;
        cout << right << setw(4) << "7. " << left << setw(14) << "Zadanie 4_9"
             << " - Zastosowanie petli for do filtrowania i wypisywania liczb" << endl;
        cout << right << setw(4) << "8. " << left << setw(14) << "Zadanie 4_12"
             << " - Obliczanie silni oraz sumy silni (z walidacja danych)" << endl;
        cout << "\n--- Sekcja 5 (Klasy i Struktury) ---" << endl;
        cout << right << setw(4) << "9. " << left << setw(14) << "Zadanie 5_3"
             << " - Prezentacja dzialania unii i wspoldzielenia pamieci" << endl;
        cout << right << setw(4) << "10. " << left << setw(14) << "Zadanie 5_6"
             << " - Klasy abstrakcyjne, dziedziczenie figur i metody wirtualne" << endl;
        cout << "===============================================================================" << endl;
        cout << right << setw(4) << "11. " << "Zakoncz program" << endl;
        cout << "===============================================================================" << endl;
        cout << "Wybierz zadanie do wywolania: ";
        
        cin >> wybor;

        if (aktualneZadanie != nullptr) {
            delete aktualneZadanie;
            aktualneZadanie = nullptr;
        }

        switch (wybor) {
            case 1: aktualneZadanie = new Zad2_1(); break;
            case 2: aktualneZadanie = new Zad2_2(); break;
            case 3: aktualneZadanie = new Zad3_1(); break;
            case 4: aktualneZadanie = new Zad3_5(); break;
            case 5: aktualneZadanie = new Zad4_2(); break;
            case 6: aktualneZadanie = new Zad4_7(); break;
            case 7: aktualneZadanie = new Zad4_9(); break;
            case 8: aktualneZadanie = new Zad4_12(); break;
            case 9: aktualneZadanie = new Zad5_3(); break;
            case 10: aktualneZadanie = new Zad5_6(); break;
            case 11: cout << "Koniec programu. Dziekuje za skorzystanie z programu."; break;
            default: cout << "Niepoprawny wybor!" << endl; break;
        }

        if (aktualneZadanie != nullptr) {
            cout << "\n>>> WYNIK DZIALANIA WYBRANEGO ZADANIA: <<<" << endl;
            aktualneZadanie->wykonajZadanie();
            cout << "-------------------------------------------" << endl;
        }
    }

    return 0;
}
