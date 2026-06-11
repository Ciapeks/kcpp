#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double v1 = 12.345, t1 = 1.234;
    double v2 = 1.2345, t2 = 12.34567;
    double v3 = 1.2345, t3 = 12.345678;
    double a_v = 12.3456, a_t = 12.345678;

    cout << setfill('=') << setw(50) << "=" << endl;
    cout << setfill(' ');
    cout << "Wynik naszego dzialania: x.xxxxx jest niepoprawny ale: " << endl;
    cout << "   output: " << setw(6) << fixed << setprecision(3) << v1 <<  "   T: " << setw(6) << setprecision(3) << t1 << " " << endl;
    cout << "   output1: " << setw(7) << fixed << setprecision(4) << v2 << "   T: " << setw(8) << setprecision(5) << t2 << endl;
    cout << "   output2: " << setw(7) << fixed << setprecision(4) << v3 << "   T: " << setw(9) << setprecision(6) << t3 << endl;
    cout << "   " << setfill('-') << setw(33) << "-" << endl;
    cout << setfill(' ');
    cout << "   avarage: " << setw(8) << fixed << setprecision(4) << a_v << "   T: " << setw(9) << setprecision(6) << a_t << endl;
    cout << setfill('-') << setw(50) << "=" << endl;
    return 0;
}