#include <iostream>

using namespace std;

class PunktK {
private:
    int x;
    int y;
public:
    PunktK() {
        x = 0;
        y = 0;
        cout << "[Klasa] Wywolano konstruktor domyslny." << endl;
    }

    PunktK(int wspX, int wspY) : x(wspX), y(wspY) {
        cout << "[Klasa] Wywolano konstruktor z parametrami (standardowa inicjalizacja)." << endl;
    }

    ~PunktK() {
        cout << "[Klasa] Wywolano domyslny destruktor." << endl;
    }
};

int main() {
    PunktK p1;
    PunktK p2(10, 20);
    return 0;
}