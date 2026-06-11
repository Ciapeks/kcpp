#include <iostream>
using namespace std;

void OperatoryArytmetyczne() {
    int a = 10, b = 3;
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << a % b << endl;
}

void OperatoryPrzypisania() {
    int a = 10;
    a += 5;
    a -= 2;
    a *= 2;
    a /= 2;
    a %= 3;
    cout << a << endl;
}

int main () {
    OperatoryArytmetyczne();
    OperatoryPrzypisania();
    return 0;
}