#include <iostream>
using namespace std;

int main() {
    static int tab[10];
    for (int i = 0; i < 10; ++i) *(tab + i) = i + 1;

    int suma = 0;
    for (int i = 0; i < 10; ++i) suma += *(tab + i);
    cout << suma << endl;

    int* maxPtr = tab;
    for (int i = 1; i < 10; ++i) {
        if (*(tab + i) > *maxPtr) maxPtr = tab + 1;
    }
    cout << *maxPtr << endl;

    int* left = tab;
    int* right = tab + 9;
    while (left < right) {
        int temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }

    for (int i = 0; i < 10; ++i) cout << *(tab + i) << " ";
    cout << endl;
    return 0;
}