#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Student {
    string imie;
    string nazwisko;
    int numerIndeksu;
};

bool czyIndeksIstnieje(const vector<Student>& baza, int indeks) {
    for (int i = 0; i < baza.size(); i++) {
        if (baza[i].numerIndeksu == indeks) {
            return true;
        }
    }
    return false;
}

void dodajStudenta(vector<Student>& baza) {
    Student nowy;
    cout << "\nPodaj imie: ";
    cin >> nowy.imie;

    cout << "Podaj nazwisko: ";
    cin >> nowy.nazwisko;

    if (nowy.imie.empty() || nowy.nazwisko.empty()) {
        cout << "[Blad] Imie i nazwisko nie moga byc puste!" << endl;
        return;
    }

    cout << "Podaj numer indeksu (tylko cyfry): ";
    cin >> nowy.numerIndeksu;

    if (czyIndeksIstnieje(baza, nowy.numerIndeksu)) {
        cout << "[Blad] Student z indeksem " << nowy.numerIndeksu << " juz istnieje w bazie!" << endl;
    } else {
        baza.push_back(nowy);
        cout << "[Sukces] Dodano studenta do bazy." << endl;
    }
}

void usunStudenta(vector<Student>& baza) {
    int indeksDoUsuniecia;
    cout << "\nPodaj numer indeksu studenta do usuniecia: ";
    cin >> indeksDoUsuniecia;

    for (int i = 0; i < baza.size(); i++) {
        if (baza[i].numerIndeksu == indeksDoUsuniecia) {
            baza.erase(baza.begin() + i);
            cout << "[Sukces] Usunieto studenta." << endl;
            return;
        }
    }
    cout << "[Blad] Nie znaleziono studenta o takim indeksie." << endl;
}

void wyswietlBaze(const vector<Student>& baza) {
    cout << "\n--- BAZA STUDENTOW ---" << endl;
    if (baza.empty()) {
        cout << "Baza jest pusta." << endl;
        return;
    }

    for (int i = 0; i < baza.size(); i++) {
        cout << i + 1 << ". " << baza[i].nazwisko << " " << baza[i].imie
             << " (Indeks: " << baza[i].numerIndeksu << ")" << endl;
    }
}

void sortujBaze(vector<Student>& baza) {
    if (baza.empty()) {
        cout << "\n[Info] Brak studentow do posortowania." << endl;
        return;
    }

    sort(baza.begin(), baza.end(), [](const Student& a, const Student& b) {
        if (a.nazwisko == b.nazwisko) {
            return a.imie < b.imie;
        }
        return a.nazwisko < b.nazwisko;
    });

    cout << "\n[Sukces] Baza zostala posortowana alfabetycznie." << endl;
}

void sprawdzStudenta(const vector<Student>& baza) {
    int szukanyIndeks;
    cout << "\nPodaj numer indeksu do sprawdzenia: ";
    cin >> szukanyIndeks;

    if (czyIndeksIstnieje(baza, szukanyIndeks)) {
        cout << "[Info] Student o indeksie " << szukanyIndeks << " znajduje się w bazie." << endl;
    } else {
        cout << "[Info] Brak studenta o podanym indeksie." << endl;
    }
}

int main() {
    vector<Student> bazaStudentow;
    int wybor = 0;

    while (wybor != 6) {
        cout << "\n==================" << endl;
        cout << "1. Dodaj studenta" << endl;
        cout << "2. Usun studenta" << endl;
        cout << "3. Wyswietl liste" << endl;
        cout << "4. Sortuj liste" << endl;
        cout << "5. Sprawdz czy istnieje" << endl;
        cout << "6. Wyjscie" << endl;
        cout << "==================" << endl;
        cout << "Wybierz opcje: ";
        cin >> wybor;

        switch (wybor)
        {
        case 1:
            dodajStudenta(bazaStudentow);
            break;
        case 2:
            usunStudenta(bazaStudentow);
            break;
        case 3:
            wyswietlBaze(bazaStudentow);
            break;
        case 4:
            sortujBaze(bazaStudentow);
            break;
        case 5:
            sprawdzStudenta(bazaStudentow);
            break;
        case 6:
            cout << "Koniec programu." << endl;
            break;
        default:
            cout << "[Blad] Niepoprawny wybor." << endl;
            break;
        }
    }

    return 0;
}