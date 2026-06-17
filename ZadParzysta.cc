#include <iostream>

using namespace std;

bool parzystaBit(int x)
{
    // x = 6  ,  110 (binarnie)
    // x & 1  ,  110 & 001 = 000
    // jeśli wynik = 0, liczba parzysta

    return (x & 1) == 0;
}

bool parzystaModulo(int x)
{
    return x % 2 == 0;
}

bool parzystaTernary(int x)
{
    return (x % 2 == 0) ? true : false;
}

int main()
{
    int liczba;

    cout << "Podaj liczbe: ";
    cin >> liczba;

    if (parzystaBit(liczba))
        cout << "Bitowo: parzysta" << endl;
    else
        cout << "Bitowo: nieparzysta" << endl;

    if (parzystaModulo(liczba))
        cout << "Modulo: parzysta" << endl;
    else
        cout << "Modulo: nieparzysta" << endl;

    cout << (parzystaTernary(liczba) ? "Ternary: parzysta"
                                     : "Ternary: nieparzysta")
         << endl;

    return 0;
}