#include <iostream>
using namespace std;

int* maxElement(int* tab, int rozmiar) {
    int* maxPtr = tab;
    for (int i = 1; i < rozmiar; ++i) {
        if (*(tab + i) > *maxPtr) {
            maxPtr = (tab + i);
        }
    }
    return maxPtr;
}

int main() {
    int t[] = {1, 7, 3, 9, 2};
    cout << *maxElement(t, 5) <<  endl;
    return 0;
}