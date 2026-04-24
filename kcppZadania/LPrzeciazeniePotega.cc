#include <iostream>
#include <cmath>

using namespace std;

int potega(int podstawa, int wykladnik) {
    int wynik = 1;
    for (int i = 0; i < wykladnik; ++i){
        wynik *= podstawa;
    }
    return wynik;
}

double potega(double podstawa, double wykladnik) {
    return pow(podstawa, wykladnik);
}

int main() {
    cout << potega(2, 3) << endl;
    cout << potega(2.5, 3.9) << endl;

    return 0;
}