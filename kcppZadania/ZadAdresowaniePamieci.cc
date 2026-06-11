#include <iostream>
using namespace std;

int main() {
    int a = 1;
    int b = 2;
    int c = 3;
    cout << "Adres a: " << &a << endl;
    cout << "Adres b: " << &b << endl;
    cout << "adres c: " << &c << endl;
    cout << "Kierunek adresowania (stos) zazwyczaj maleje w pamieci, wiec adresy moga byc coraz mniejsze." << endl;
    return 0;
}