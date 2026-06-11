#include <iostream>
using namespace std;

int main(){
    int liczba;
    long long silnia = 1;
    long long sumaSilni = 0;

    cout << "Podaj liczbe do obliczenia silni: ";
    cin >> liczba;

    if (liczba < 0) {
        cout << "Silnia jest zdefiniowana tylko dla liczb nieujemnych!" << endl;
        return 1;
    }

    for (int i = 1; i <= liczba; i++) {
        silnia *= i;
        sumaSilni += silnia;
    }

    cout << "Silnia z " << liczba << " wynosi: " << silnia << endl;
    cout << "Suma silni od 1 do " << liczba << " wynosi: " << sumaSilni << endl;

    return 0;
}