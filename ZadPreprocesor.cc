#include <iostream>
using namespace std;

// ===== #define - zwykłe makro =====
#define KWADRAT(x) ((x) * (x))

// ===== operator # =====
#define NAPIS(x) #x

// ===== operator ## =====
#define POLACZ(a,b) a##b

// ===== #ifdef =====
#define TRYB_TESTOWY

int main() {

    cout << "=== #ifdef / #else ===" << endl;

#ifdef TRYB_TESTOWY
    cout << "Program uruchomiony w trybie testowym." << endl;
#else
    cout << "Program uruchomiony w trybie normalnym." << endl;
#endif

    cout << endl;

    cout << "=== #ifndef ===" << endl;

#ifndef WERSJA
    cout << "Makro WERSJA nie zostalo zdefiniowane." << endl;
#endif

    cout << endl;

    cout << "=== Makro (#define) ===" << endl;

    int a = 5;
    cout << "KWADRAT(" << a << ") = "
         << KWADRAT(a) << endl;

    cout << "Bez makra: "
         << (a * a) << endl;

    cout << endl;

    cout << "=== Operator # ===" << endl;

    cout << NAPIS(Tekst)
         << endl;

    cout << "To jest tekst zamieniony na napis"
         << endl;

    cout << endl;

    cout << "=== Operator ## ===" << endl;

    int liczba1 = 100;

    cout << POLACZ(liczba,1) << endl;

    cout << liczba1 << endl;

    return 0;
}