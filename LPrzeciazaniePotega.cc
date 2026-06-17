#include <iostream>
#include <cmath>
using namespace std;

double potega(int x, int n) {
    if (n < 0) {
    double wynik = 1;
    for (int i = 0; i > n; --i) {
        wynik = wynik/x;
    }
    return wynik; 
    }
    if (n == 0) {
        return 1;
    }
    double  wynik = 1;
    for (int i = 0; i < n; ++i) {
        wynik *= x;
    }
    return wynik;
}
double potega(double x, int n) {
    if (n < 0) {
    double wynik = 1;
    for (int i = 0; i > n; --i) {
        wynik = wynik/x;
    }
    return wynik; 
    }
    if (n == 0) {
        return 1;
    }
    double wynik = 1;
    for (int i = 0; i < n; ++i) {
        wynik *= x;
    }
    return wynik;
}

double potega(double x, double n) {
    return pow(x, n);
}

int main() {
    int x = 2;
    double x2 = 2.3;
    int n = -2;
    double n2 = 3.6;

    cout << x << " do potęgi " << n << " wynosi: " << potega(x, n) << endl;
    cout << x2 << " do potęgi " << n << " wynosi: " << potega(x2, n) << endl;
    cout << x2 << " do potęgi " << n2 << " wynosi: " << potega(x2, n2) << endl;

    return 0;
}
