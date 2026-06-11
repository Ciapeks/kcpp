#include <iostream>
using namespace std;

void kopiujTablice(int* zrodlo, int* cel, int rozmiar) {
    for (int i = 0; i < rozmiar; ++i) {
        *(cel + i) = *(zrodlo + i);
    }
}

int main() {
    int t1[3] = {5, 6, 7};
    int t2[3] = {0, 0, 0};
    kopiujTablice(t1, t2, 3);
    for (int i = 0; i < 3; ++i) cout << t2[i] << " ";
    cout << endl;
    return 0;
}