#include <iostream>
using namespace std;

int main() {
    int liczba, suma = 0, licznik = 0;

    cout << "Wprowadzaj liczby (0 konczy program):" << endl;
    cin >> liczba;

    while (liczba != 0) {
        licznik++;
        if (liczba < 0) {
            cout << "Podana liczba nie jest dodatnia!" << endl;
        }

        suma += liczba;
        cin >> liczba;
    }

    cout << "Suma wprowadzonych liczb: " << suma << endl;
    cout << "Liczba wprowadzonych wartosci: " << licznik << endl;
}