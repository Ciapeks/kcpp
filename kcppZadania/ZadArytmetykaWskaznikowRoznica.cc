#include <iostream>
using namespace std;

int main() {
    int tab[10] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90};
    int* ptr1 = &tab[2];
    int* ptr2 = &tab[7];
    cout << ptr2 - ptr1 << endl;
    return 0;
}