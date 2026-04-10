#include <iostream>
#include <string>

using namespace std;

int main(){
    string text = "Hello, i'am under the water please help me.";
    string text_b = "I'am no longer under the water.";

    cout << "--- START ---" << endl;
    cout << "Napis glowny (text): " << text << endl;

    cout << "1. empty(): Czy napis jest pusty? "
         << (text.empty() ? "Tak" : "Nie") << endl;

    cout << "2. size() i length(): Dlugosc napisu to  "
         << text.size() << "znakow." << endl;
    
    cout << "3. at(): Znak na pozycji 6 to: '"
         << text.at(6) << "'" << endl;

    cout << "8. substr(6, 7): Wyciety podciag to: '"
         << text.substr(6, 7) << "'" << endl;

    size_t pos = text.find("water");
    cout << "6. find('water'): Slowo zaczyna sie na indeksie: "
         << pos << endl;
    
    text.append(" Uczymy sie!");
    cout << "9. append(...): Napis po doklejeniu: '"
         << text << "'" << endl;

    text.erase(0, 6);
    cout << "5. erase(0, 6): Napis po usunieciu poczatku: '" 
         << text << "'" << endl;
    
    cout << "\n--- Przed swap() ---" << endl;
    cout << "text: '" << text << "'" << endl;
    cout << "text_b: '" << text_b << "'" << endl;

    text.swap(text_b);

    cout << "7. swap(...): Po zamianie:" << endl;
    cout << "text:   '" << text << "'" << endl;
    cout << "text_b: '" << text_b << "'" << endl;

    text.clear();
    cout << "\n4. clear(): Napis 'text' zostal wyczyszczony." << endl;
    cout << "Sprawdzamy ponownie empty(): Czy napis jest pusty? " 
         << (text.empty() ? "Tak" : "Nie") << endl;

    return 0;
}