#include <iostream>

using namespace std;

class ZadClass {
private:
    int zmiennaPrivate;
protected:
    int zmiennaProtected;
public:
    int zmiennaPublic;

    void ustawPrivate(int wartosc) {
        zmiennaPrivate = wartosc;
    }

    inline int pobierzPrivate() {
        return zmiennaPrivate;
    }

    void ustawProtected(int wartosc);
    void wyswietlWszystko();
};

void ZadClass::ustawProtected(int wartosc) {
    zmiennaProtected = wartosc;
}

void ZadClass::wyswietlWszystko() {
    cout << "Private: " << zmiennaPrivate << endl;
    cout << "Protected: " << zmiennaProtected << endl;
    cout << "Public: " << zmiennaPublic << endl;
}

int main() {
    ZadClass obiekt;

    obiekt.zmiennaPublic = 10;
    obiekt.ustawPrivate(20);
    obiekt.ustawProtected(30);

    obiekt.wyswietlWszystko();
    cout << "Odczyt pojedynczy (inline): " << obiekt.pobierzPrivate() << endl;

    return 0;
}