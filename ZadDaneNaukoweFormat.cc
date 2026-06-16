#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    const double pi   = M_PI;      
    const double e    = M_E;         
    const double phi  = (1 + sqrt(5)) / 2; 

    cout << fixed << setprecision(6);

    int space[4] = {15,25,20,25};
    cout << setw(15) << left << "Stala"
         << setw(25) << "Wartosc domyslna"
         << setw(20) << "Notacja stala"
         << setw(25) << "Notacja naukowa" << endl;

    cout << string(85, '-') << endl;

    cout << setw(space[0]) << left << "Pi"
         << setw(space[1]) << M_PI
         << setw(space[2]) << M_PI
         << scientific << setw(space[3]) << M_PI
         << endl;

    cout << fixed;

    cout << setw(space[0]) << left << "e"
         << setw(space[1]) << M_E
         << setw(space[2]) << M_E
         << scientific << setw(space[4]) << M_E
         << endl;

    cout << fixed;

    cout << setw(space[0]) << left << "Zloty podzial"
         << setw(space[1]) << phi
         << setw(space[2]) << phi
         << scientific << setw(space[4]) << phi
         << endl;

    return 0;
}