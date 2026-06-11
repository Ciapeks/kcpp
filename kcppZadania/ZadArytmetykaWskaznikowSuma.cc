#include <iostream>
using namespace std;

int suma(int* tab, int rozmiar) {
    int s = 0;
    for (int i = 0; i < rozmiar; ++i) {
        s += *(tab + i);
    }

    return s;
}

int main() {
    int t[] = {1, 2, 3, 4, 5};
    cout << suma(t, 5) << endl;
    return 0;
}