#include <iostream>
#include <string>

using namespace std;

#define DEBUG_MODE

#ifndef WERSJA_PROGRAMU
#define WERSJA_PROGRAMU 1
#endif

#define MAKRO_KWADRAT(x) ((x) * (x))

#define MAKRO_STRINGIFY(x) #x

#define MAKRO_CONCAT(a, b) a ## b

inline int funkcjaKwadrat(int x) {
    return x * x;
}

string funkcjaStringify(const string& tekst) {
    return tekst;
}

int main() {
    cout << "--- DYREKTYWY WARUNKOWE ---" << endl;

#ifdef DEBUG_MODE
    cout << "[Preprocesor] Tryb debugowania jest WLACZONY." << endl;
#else
    cout << "[Preprocesor] Tryb debugowania jest WYLACZONY." << endl;
#endif

    cout << "[Preprocesor] Wersja programu: " << WERSJA_PROGRAMU << endl;
    int liczba = 5;

    cout << "Z uzyciem makra:       " << MAKRO_KWADRAT(liczba) << endl;
    cout << "Bez dyrektywy (C++):   " << funkcjaKwadrat(liczba) << endl;

    cout << "\n--- (b) OPERATOR # (STRINGIFICATION) ---" << endl;
    int testowaZmienna = 99;

    cout << "Z uzyciem '#':         " << MAKRO_STRINGIFY(testowaZmienna) << " ma wartosc " << testowaZmienna << endl;
    cout << "Bez dyrektywy (C++):   " << funkcjaStringify("testowaZmienna") << " ma wartosc " << testowaZmienna << endl;

    cout << "\n--- (b) OPERATOR ## (TOKEN PASTING) ---" << endl;
    int zmienna123 = 500;

    cout << "Z uzyciem '##':        " << MAKRO_CONCAT(zmienna, 123) << endl;
    cout << "Bez dyrektywy (C++):   " << zmienna123 << endl;

    return 0;
}