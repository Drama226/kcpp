<<<<<<< HEAD
#include <iostream>
#include <string>

using namespace std;

int kodSlowa(string s)
{
    if (s == "bitowo") return 1;
    if (s == "modulo") return 2;
    if (s == "warunkowo") return 3;

    return 0; 
}


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
    string wybor;

    cout << "Podaj liczbe: ";
    cin >> liczba;

    cout << "Wybierz metode (bitowo / modulo / warunkowo): ";
    cin >> wybor;

    switch (kodSlowa(wybor))
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
            cout << "Nieznana opcja!" << endl;
            break;
    }

    return 0;
=======
#include <iostream>
#include <string>

using namespace std;

int kodSlowa(string s)
{
    if (s == "bitowo") return 1;
    if (s == "modulo") return 2;
    if (s == "warunkowo") return 3;

    return 0; 
}


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
    string wybor;

    cout << "Podaj liczbe: ";
    cin >> liczba;

    cout << "Wybierz metode (bitowo / modulo / warunkowo): ";
    cin >> wybor;

    switch (kodSlowa(wybor))
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
            cout << "Nieznana opcja!" << endl;
            break;
    }

    return 0;
>>>>>>> b9a64a71f9f8d086e0227ce74564a32a4c14bb71
}