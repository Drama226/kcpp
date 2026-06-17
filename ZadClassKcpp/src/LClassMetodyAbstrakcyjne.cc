#include <iostream>
#include <cmath>

using namespace std;

#include "LClassMetodyAbstrakcyjne.h"

// ===== KLASY FIGUR =====

class Figura {
public:
    virtual double pole() const = 0;
    virtual double obwod() const = 0;
    virtual ~Figura() {}
};

class Kwadrat : public Figura {
    double a;
public:
    Kwadrat(double bok) : a(bok) {}

    double pole() const override { return a * a; }
    double obwod() const override { return 4 * a; }
};

class Prostokat : public Figura {
    double a, b;
public:
    Prostokat(double bokA, double bokB) : a(bokA), b(bokB) {}

    double pole() const override { return a * b; }
    double obwod() const override { return 2 * (a + b); }
};

class Trojkat : public Figura {
    double a;
public:
    Trojkat(double bok) : a(bok) {}

    double pole() const override {
        return (a * a * sqrt(3)) / 4;
    }

    double obwod() const override {
        return 3 * a;
    }
};

class Kolo : public Figura {
    double r;
public:
    Kolo(double promien) : r(promien) {}

    double pole() const override { return M_PI * r * r; }
    double obwod() const override { return 2 * M_PI * r; }

    double Dystans(double X) const {
        return sqrt(X / M_PI);
    }
};

// ===== ZADANIE =====

void LClassMetodyAbstrakcyjne::uruchom() {

    Kwadrat k(4);
    Prostokat p(3, 5);
    Trojkat t(6);
    Kolo c(10);

    cout << "=== KWADRAT ===\n";
    cout << "Pole: " << k.pole() << "\n";
    cout << "Obwod: " << k.obwod() << "\n\n";

    cout << "=== PROSTOKAT ===\n";
    cout << "Pole: " << p.pole() << "\n";
    cout << "Obwod: " << p.obwod() << "\n\n";

    cout << "=== TROJKAT ===\n";
    cout << "Pole: " << t.pole() << "\n";
    cout << "Obwod: " << t.obwod() << "\n\n";

    cout << "=== KOLO ===\n";
    cout << "Pole: " << c.pole() << "\n";
    cout << "Obwod: " << c.obwod() << "\n";

    cout << "Dystans: " << c.Dystans(2.0) << endl;
}