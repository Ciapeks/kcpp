#include <iostream>
#include <cstdlib>  // dla rand()
#include <ctime>    // dla time()
using namespace std;

int main() {
    srand(time(0));
    int zakresLosowania;
    int proba, licznik = 0;
    int maxLiczbaProb = 10;
    int poziomTrudnosci;

    cout << "Witaj w grze! Na poczatek wybierz poziom trudnosic (1 - latwy, 2 - trudny): " << endl;
    cin >> poziomTrudnosci;
    if (poziomTrudnosci == 1) {
        zakresLosowania = 50;
    } else if (poziomTrudnosci == 2) {
        zakresLosowania = 200;
    } else {
        return 0;
    }
    int wylosowana = rand() % zakresLosowania + 1;
    cout << "Zgadnij liczbe (1-" << zakresLosowania << "):" << endl;

    while (licznik < maxLiczbaProb) {
        cin >> proba;
        licznik++;

        if (proba < wylosowana) {
            cout << "Za malo! Probuj dalej." << endl;
        } else if (proba > wylosowana) {
            cout << "Za duzo! Probuj dalej." << endl;
        } else {
            cout << "Brawo! Zgadles w " << licznik << " probach." << endl;
            break;
        }
    }

    if (licznik >= maxLiczbaProb) {
        cout << "Niestety nie udalo ci sie odgadnac liczby w " << maxLiczbaProb << ". :<" << endl;
        cout << "Prawidlowa liczba to " << wylosowana << endl;
    }

    return 0;
}
