#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double pi = 3.14159, e = 2.71828, gold = 1.61803;
    cout << left << setw(15) << "Stala" << setw(20) << "Wartosc (domyslnie)" << setw(20) << "Notacja stala" << "Notacja naukowa" << endl;
    cout << left << setw(15) << "--------" << setw(20) << "-----------------" << setw(20) << "-------------" << "--------------" << endl;

    cout << left << setw(15) << "Pi" << defaultfloat << setprecision(6) << setw(20) << pi
         << fixed << setprecision(6) << setw(20) << pi << scientific << setprecision(6) << pi << endl;
    
    cout << left << setw(15) << "e" << defaultfloat << setprecision(6) << setw(20) << e
         << fixed << setprecision(6) << setw(20) << e << scientific << setprecision(6) << e << endl;

    cout << left << setw(15) << "Zloty podzial" << defaultfloat << setprecision(6) << setw(20) << gold
         << fixed << setprecision(6) << setw(20) << gold << scientific << setprecision(6) << gold << endl;

    return 0;
}