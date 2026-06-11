#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    cout << left << setw(17) << "| Nazwa" << setw(10) << "| Cena " << "| Ilosc |" << endl;
    cout << "|----------------|---------|-------|" << endl;
    cout << "| " << left << setw(15) << "Chleb" << "|  " << right << setw(4) << fixed << setprecision(2) << 4.99 << "   |    " << left << setw(3) << 5 << "|" << endl;
    cout << "| " << left << setw(15) << "Mleko" << "|  " << right << setw(4) << fixed << setprecision(2) << 3.20 << "   |   " << left << setw(4) << 10 << "|" << endl;
    cout << "| " << left << setw(15) << "Jajka (10 szt)" << "|  " << right << setw(4) << fixed << setprecision(2) << 8.50 << "   |    " << left << setw(3) << 3 << "|" << endl;
    return 0;
}