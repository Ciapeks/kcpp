/**
 * Plik: ZadClassExample.cc
 * Auto: Wiktor Markiewicz
 * Data: 10.04.2026
 */

#include <iostream>
#include <string>

using namespace std;

class MyFruit {
    private:
        string name;
        string color;
        int percentEaten;
    
    public:
        MyFruit(string fruitName, string fruitColor) {
            name = fruitName;
            color = fruitColor;
            percentEaten = 0;
            cout << "Utworzono nowy owoc: " << color << " " << name << endl;
        }

        ~MyFruit() {
            cout << "Usunieto owoc" << endl;
        }

        void Eat(int percent);
        void Rot();
        void PrintInfo();
};

void MyFruit::Eat(int percent){
    if (percentEaten >= 100) {
        cout << "Ten owoc został już zjedzony!" << endl;
        return;
    }

    percentEaten += percent;
    if (percentEaten > 100) {
        percentEaten = 100;
    }

    cout << "Odgryzasz " << percent << "%. Zjedzono juz lacznie " << percentEaten << "% owocu." << endl;
}

void MyFruit::Rot() {
    color = "brazowy (zgnily)";
    cout << "Niestety, " << name << " lezal za dlugo i zepsul sie." << endl;
}

void MyFruit::PrintInfo(){
    cout << "\n--- DANE OWOCU ---" << endl;
    cout << "Nazwa: " << name <<  endl;
    cout << "Kolor: " << color << endl;
    cout << "Zjedzono: " << percentEaten << "%" << endl;
    cout << "----------------------\n" << endl;
}

int main() {
    cout << "--- START PROGRAMU ---\n" << endl;
    
    MyFruit myApple("Jablko", "zielone");

    myApple.Eat(25);
    myApple.Eat(40);

    myApple.PrintInfo();

    myApple.Rot();
    
    myApple.PrintInfo();

    cout << "--- KONIEC PROGRAMU ---" << endl;

    return 0;
}