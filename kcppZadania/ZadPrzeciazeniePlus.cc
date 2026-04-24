#include <iostream>

using namespace std;

class Punkt {
    public:
        int x, y;

        Punkt(int x = 0, int y = 0) {
            this->x = x;
            this->y = y;
        }

        Punkt operator+(const Punkt& inny) {
            return Punkt(this->x + inny.x, this->y + inny.y);
        }
};

int main() {
    Punkt p1(2, 3);
    Punkt p2(4, 5);
    Punkt p3 = p1 + p2;

    cout << p3.x << " " << p3.y << endl;

    return 0;
}