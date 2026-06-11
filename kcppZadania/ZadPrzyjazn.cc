#include <iostream>

using namespace std;

class KlasaA {
private:
    int tajneA = 100;

    friend class KlasaB;
};

class KlasaB {
private:
    int tajneB = 200;
public:
    void pokazTajne(KlasaA& obiektA) {
        cout << "Klasa B ma dostep do tajneA: " << obiektA.tajneA << endl;
    }
};

/*
Po odkomentowaniu, program sie nie skompiluje. Klasa A nie ma dostepu do tajneB z Klasy B.

void testPrzyjazni(KlasaB& obiektB) {
    cout << obiektB.tajneB;
}

*/

int main() {
    KlasaA objA;
    KlasaB objB;

    objB.pokazTajne(objA);
    cout << "Klasa A nie widzi prywatnych pol Klasy B." << endl;

    return 0;
}
