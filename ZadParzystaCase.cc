#include <iostream>

using namespace std;

bool parzystaBit(int x)
{
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
    int wybor;

    cout << "Podaj liczbe: ";
    cin >> liczba;

    cout << "\nWybierz metode sprawdzania:\n";
    cout << "1 - bitowo (&)\n";
    cout << "2 - modulo (%)\n";
    cout << "3 - operator warunkowy (if)\n";
    cout << "Twoj wybor: ";
    cin >> wybor;

    switch (wybor)
    {
        case 1:
            cout << (parzystaBit(liczba) ? "Parzysta (bitowo)" : "Nieparzysta (bitowo)") << endl;
            break;

        case 2:
            cout << (parzystaModulo(liczba) ? "Parzysta (modulo)" : "Nieparzysta (modulo)") << endl;
            break;

        case 3:
            cout << (parzystaTernary(liczba) ? "Parzysta (ternary)" : "Nieparzysta (ternary)") << endl;
            break;

        default:
            cout << "Nieprawidlowy wybor!" << endl;
            break;
    }

    return 0;
}