#include <iostream>
using namespace std;

enum miesiace {
    Styczen,
    Luty,
    Marzec,
    Kwiecien,
    Maj,
    Czerwiec,
    Lipiec,
    Sierpien,
    Wrzesien,
    Pazdziernik,
    Listopad,
    Grudzien
};

int main() {
    miesiace moje_m = Listopad;

    cout <<"Twoj miesiac: " << moje_m + 1 << endl;
    cout <<"Kolejny miesiac po wybranym przez ciebie to: " << moje_m + 2 << endl;


  return 0;
}
