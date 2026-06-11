#include <iostream>
using namespace std;

void zamien(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;
    zamien(&x, &y);
    cout << x << " " << y << endl;
    return 0;
}

