#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

#include "ZadDaneNaukoweFormat.h"

void ZadDaneNaukoweFormat::uruchom() {

    const double pi  = M_PI;
    const double e   = M_E;
    const double phi = (1 + sqrt(5)) / 2;

    cout << fixed << setprecision(6);

    int space[4] = {15,25,20,25};

    cout << setw(15) << left << "Stala"
         << setw(25) << "Wartosc domyslna"
         << setw(20) << "Notacja stala"
         << setw(25) << "Notacja naukowa" << endl;

    cout << string(85, '-') << endl;

    cout << setw(space[0]) << left << "Pi"
         << setw(space[1]) << pi
         << setw(space[2]) << pi
         << scientific << setw(space[3]) << pi
         << endl;

    cout << fixed;

    cout << setw(space[0]) << left << "e"
         << setw(space[1]) << e
         << setw(space[2]) << e
         << scientific << setw(space[3]) << e
         << endl;

    cout << fixed;

    cout << setw(space[0]) << left << "Zloty podzial"
         << setw(space[1]) << phi
         << setw(space[2]) << phi
         << scientific << setw(space[3]) << phi
         << endl;
}