#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int dec;
    cin >> dec;
    string bin = "";
    if (dec == 0) bin = "0";
    while (dec > 0) {
        bin += (dec % 2 == 0 ? "0" : "1");
        dec /= 2;
    }
    reverse(bin.begin(), bin.end());
    cout << bin << endl;
    return 0;
}