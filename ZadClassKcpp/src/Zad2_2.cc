#include "../include/Zad2_2.h"
#include <iostream>

using namespace std;

int pole(int bok) {
    return bok * bok;
}

int pole(int bokA, int bokB) {
    return bokA * bokB;
}

double pole(double promien) {
    return 3.14159 * promien * promien;
}

void Zad2_2::wykonajZadanie() {
    cout << "[Zadanie 2_2]" << endl;
    cout << pole(4) << endl;
    cout << pole(4, 5) << endl;
    cout << pole(3.0) << endl;
}