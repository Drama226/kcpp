#include <iostream>
#include <cmath>

using namespace std;


class Figura {
public:
    virtual double pole() const = 0;
    virtual double obwod() const = 0;
    virtual ~Figura() {}
};


class Kwadrat : public Figura {
private:
    double a;

public:
    Kwadrat(double bok) : a(bok) {}

    double pole() const override {
        return a * a;
    }

    double obwod() const override {
        return 4 * a;
    }
};


class Prostokat : public Figura {
private:
    double a, b;

public:
    Prostokat(double bokA, double bokB) : a(bokA), b(bokB) {}

    double pole() const override {
        return a * b;
    }

    double obwod() const override {
        return 2 * (a + b);
    }
};


class Trojkat : public Figura {
private:
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
private:
    double r;

public:
    Kolo(double promien) : r(promien) {}

    double pole() const override {
        return M_PI * r * r;
    }

    double obwod() const override {
        return 2 * M_PI * r;
    }


    double Dystans(double X) const {
        return sqrt(X / M_PI);
    }
};

// ===================== MAIN =====================
int main() {

    Kwadrat k(4);
    Prostokat p(3, 5);
    Trojkat t(6);
    Kolo c(10);

    cout << "=== KWADRAT ===" << endl;
    cout << "Pole: " << k.pole() << endl;
    cout << "Obwod: " << k.obwod() << endl;

    cout << endl;

    cout << "=== PROSTOKAT ===" << endl;
    cout << "Pole: " << p.pole() << endl;
    cout << "Obwod: " << p.obwod() << endl;

    cout << endl;

    cout << "=== TROJKAT ===" << endl;
    cout << "Pole: " << t.pole() << endl;
    cout << "Obwod: " << t.obwod() << endl;

    cout << endl;

    cout << "=== KOLO ===" << endl;
    cout << "Pole: " << c.pole() << endl;
    cout << "Obwod: " << c.obwod() << endl;

    double X = 2.0;
    cout << "Dystans (promien dla " << X
         << " m2/os): " << c.Dystans(X) << endl;

    return 0;
}