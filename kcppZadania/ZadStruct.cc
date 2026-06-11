#include <iostream>
#include <string>

using namespace std;

struct Pracownik {
    string imie;
    int wiek;
    double pensja;

    Pracownik() {
        imie = "Nieznane";
        wiek = 0;
        pensja = 0.0;
    }

    Pracownik(string i, int w, double p) : imie(i), wiek(w), pensja(p) {}
};

int main() {
    Pracownik p1;
    Pracownik p2("Jan", 30, 4500.50);

    p1.imie = "Anna";
    p1.wiek = 25;
    p1.pensja = 5000.00;

    cout << p1.imie << " ma " << p1.wiek << " lat i zarabia " << p1.pensja << endl;
    cout << p2.imie << " ma " << p2.wiek << " lat i zarabia " << p2.pensja << endl;

    return 0;
}