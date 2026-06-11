#include <iostream>
using namespace std;

int main() {
    float t1[5], t2[5], t3[5];

    for (int i = 0; i < 5; ++i) {
        cin >> *(t1 + i);
        *(t2 + i) = *(t1 + i) * 2;
        *(t3 + i) = *(t1 + i) + *(t2 + i);
    }

    for (int i = 0; i < 5; ++i) cout << *(t1 + i) << " ";
    cout << endl;
    for (int i = 0; i < 5; ++i) cout << *(t2 + i) << " ";
    cout << endl;
    for (int i = 0; i < 5; ++i) cout << *(t3 + i) << " ";
    cout << endl;
    return 0;
}