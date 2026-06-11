#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string bin;
    cin >> bin;
    int dec = 0;
    for (size_t i = 0; i < bin.length(); i++) {
        if (bin[bin.length() - 1 - i] == '1') {
            dec += pow(2, i);
        }
    }
    cout << dec << endl;
    return 0;
}