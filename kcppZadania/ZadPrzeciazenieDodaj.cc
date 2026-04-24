#include <iostream>
#include <string>

using namespace std;

int dodaj(int a, int b) {
    return a + b;
}

double dodaj(double a, double b) {
    return a + b;
}

string dodaj(string a, string b) {
    return a + b;
}

int main() {
    cout << dodaj(5, 10) <<  endl;
    cout << dodaj(2.5, 3.9) << endl;
    cout << dodaj(string("Hello "), string("World")) << endl;

    return 0;
}