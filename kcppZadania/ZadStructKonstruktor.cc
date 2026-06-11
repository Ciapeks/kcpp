#include <iostream>

using namespace std;

struct PunktS{
    int x;
    int y;

    PunktS() {
        x = 0;
        y = 0;
        cout << "[Struktura] Wywolano konstruktor domyslny." << endl;
    }

    PunktS(int wspX, int wspY) {
        x = wspX;
        y = wspY;
        cout << "[Struktura] Wywolano konstruktor z parametrami (standardowa inicjalizacja)." << endl;
    }

    ~PunktS() {
        cout << "[Struktura] Wywolano domyslny destruktor." << endl;
    }
};

int main() {
    PunktS p1;
    PunktS p2(5, 15);
    return 0;
}
