#include <iostream>
using namespace std;

void Funkcja1() {
    int arr[] = {10, 20, 30, 40};
    int* p = arr;
    p++; cout << *p << endl;
    ++p; cout << *p << endl;
    ++*p; cout << *p << endl;
    ++(*p); cout << *p << endl;
    ++*(p); cout << *p << endl;
    *p++; cout << *p << endl;
    (*p)++; cout << *p << endl;
    *(p)++; cout << *p << endl;
    *++p; cout << *p << endl;
    *(++p); cout << *p << endl;
}

void Funkcja2() {
    int a = 0, b = 0, c = 0;
    cout << "1. A, B, C: " << a << " " << b << " " << c << endl;
    b = 10;
    cout << "2.  A, B, C: " << a << "  " << b << "  " << c << endl;
    c = 20;
    cout << "3.  A, B, C: " << a << "  " << b << "  " << c << endl;
    b = 30;
    cout << "4.  A, B, C: " << a << "  " << b << "  " << c << endl;
    a = 40;
    cout << "5.  A, B, C: " << a << "  " << b << "  " << c << endl;
    b = 50;
    cout << "6.  A, B, C: " << a << "  " << b << "  " << c << endl;
    c = 60;
    cout << "7.  A, B, C: " << a << "  " << b << "  " << c << endl;
    b = 70;
    cout << "8.  A, B, C: " << a << "  " << b << "  " << c << endl;
    a = 80;
    cout << "9.  A, B, C: " << a << "  " << b << "  " << c << endl;
    b = 90;
    cout << "10. A, B, C: " << a << "  " << b << "  " << c << endl;
}

int main() {
    Funkcja1();
    Funkcja2();
    return 0;
}