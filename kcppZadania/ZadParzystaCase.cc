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
    int wybor;
    cout << "Wybierz funkcje do wykonania [1 - sprawdzBitowo, 2 - sprawdzModulo, 3 - sprawdzWarunkowy]: ";
    cin >> wybor;
    int liczba;
    cout << "Podaj liczbe ktora bedzie argumentem funkcji: ";
    cin >> liczba;
    switch ((int)wybor)
    {
    case 1:
        sprawdzBitowo((int)liczba);
        break;
    case 2:
        sprawdzModulo((int)liczba);
        break;
    case 3:
        sprawdzWarunkowy((int)liczba);
    default:
        break;
    }
    return 0;
}