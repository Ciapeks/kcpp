#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "Celsjiusz  Fahrenheit" << endl;
    cout << "--------   ---------" << endl;
    for (int c = -10; c <= 10; c += 5)
    {
        double f = c * 9.0 / 5.0 + 32.0;
        cout << right << setw(4) << c << "      " << right << setw(7) << fixed << setprecision(2) << f << endl;
    }
    return 0;
}