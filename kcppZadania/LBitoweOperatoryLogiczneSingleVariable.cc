#include <iostream>
using namespace std;

int konwertuj(int tab[8]) {
    int wynik = 0;
    for (int i = 0; i < 8; i++)
    {
        if (tab[i] == 1) {
            wynik |= (1 << (7 - i));
        }
    }
    return wynik;
}

int main() {
    int tab[8] = {1, 0, 1, 0, 0, 0, 1, 1};
    cout << konwertuj(tab) << endl;
    return 0;
}