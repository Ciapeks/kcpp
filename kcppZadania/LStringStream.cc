#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    stringstream ss;
    ss << 100 << " " << 200.5;
    int a;
    double b;
    ss >> a >> b;
    cout << a << " " << b <<  endl;
    return 0;
}