#include <iostream>
using namespace std;

void przesun(int* tab, int rozmiar) {
    if (rozmiar <= 1) return;
    int ostatni = *(tab + rozmiar - 1);
    for (int i = rozmiar - 1; i > 0; --i) {
        *(tab + i) = *(tab + i - 1);
    }
    *tab = ostatni;
}

int main() {
    int t[] = {1, 2, 3, 4, 5};
    przesun(t, 5);
    for (int i = 0; i < 5; ++i) cout << t[i] << " ";
    cout << endl;
    return 0;
}