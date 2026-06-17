#include <iostream>
using namespace std;

#include "ZadPrzeciazaniePole.h"

// przeciążenia jako metody pomocnicze
int pole(int x) {
    return x * x;
}

double pole(double a, double b) {
    return a * b;
}

double pole(double r) {
    return 3.14159 * r * r;
}

void ZadPrzeciazaniePole::uruchom() {

    int a = 5;
    double a2 = 5.0;
    double b = 10.1;
    double r = 3.0;

    cout << "Kwadrat: " << pole(a) << endl;
    cout << "Prostokat: " << pole(a2, b) << endl;
    cout << "Kolo: " << pole(r) << endl;
}