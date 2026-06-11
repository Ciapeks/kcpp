#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.1415926535;

class Figura {
public:
    virtual double obwod() = 0;
    virtual double pole() = 0;
    virtual ~Figura() {}
};

class Kwadrat : public Figura {
private:
    double a;
public:
    Kwadrat(double bok) : a(bok) {}
    double obwod() override { return 4 * a; }
    double pole() override { return a * a; }
};

class Prostokat : public Figura {
private:
    double a, b;
public:
    Prostokat(double bokA, double bokB) : a(bokA), b(bokB) {}
    double obwod() override { return 2 * (a + b); }
    double pole() override { return a * b; }
};

class Trojkat : public Figura {
private:
    double a, b, c;
public:
    Trojkat(double bokA, double bokB, double bokC) : a(bokA), b(bokB), c(bokC) {}
    double obwod() override { return a + b + c; }
    double pole() override {
        double p = obwod() / 2.0;
        return sqrt(p * (p - a) * (p - b) * (p - c));
    }
};

class Kolo : public Figura {
private:
    double r;
public:
    Kolo(double promien) : r(promien) {}
    double obwod() override { return 2 * PI * r; }
    double pole() override { return PI * r * r; }

    double Dystans(double xMetrowKwadratowych) {
        return sqrt(xMetrowKwadratowych / PI);
    }
};

int main() {
    Kwadrat k(5);
    Prostokat p(4, 6);
    Trojkat t(3, 4, 5);
    Kolo kolo(3);

    cout << "Kwadrat obwod: " << k.obwod() << ", pole: " << k.pole() << endl;
    cout << "Prostokat obwod: "<< p.obwod() << ", pole: " << p.pole() << endl;
    cout << "Trojkat obwod: " << t.obwod() << ", pole: " << t.pole() << endl;
    cout << "Kolo obwod: " << kolo.obwod() << ", pole: " << kolo.pole() << endl;

    double wymaganaPowierzchnia = 10.0;
    cout << "Zalecany dystans dla " << wymaganaPowierzchnia << " m^2 na osobe wynosi: "
         << kolo.Dystans(wymaganaPowierzchnia) << " m." << endl;

    return 0;
}