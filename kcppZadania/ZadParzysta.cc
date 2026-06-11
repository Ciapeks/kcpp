#include <iostream>
using namespace std;

void sprawdzBitowo(int a) {
    cout << "Sprawdzenie bitowe: " << a << " & 1 = " << (a & 1) << " -> " << ((a &1) ? "Nieparzysta" : "Parzysta") << endl;
}

void sprawdzModulo(int a) {
    if (a % 2 == 0) cout  << "Parzysta" << endl;
    else cout << "Nieparzysta" << endl;
}

void sprawdzWarunkowy(int a) {
    cout  << ((a % 2 == 0) ? "Parzysta" : "Nieparzysta") << endl;
}

int main() {
    sprawdzBitowo(4);
    sprawdzModulo(5);
    sprawdzWarunkowy(5);
    return 0;
}