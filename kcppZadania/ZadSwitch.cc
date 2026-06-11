#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Bezposrednie uzycie std::string w switch w C++ jest niemozliwe. Nalezy uzyc drabinki if-else, mapowania (np. srd::map) lub funkcji hashujacej." << endl;

    string opcja = "start";

    if(opcja == "start") {
        cout << "Rozpoczeto" << endl;
    } else if (opcja == "stop") {
        cout << "Zatrzymano" << endl;
    } else {
        cout << "Nieznana opcja" << endl;
    }
    return 0;
}
