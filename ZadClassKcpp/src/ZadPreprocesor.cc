#include <iostream>
using namespace std;

#include "ZadPreprocesor.h"

// ===== #define =====
#define KWADRAT(x) ((x) * (x))
#define NAPIS(x) #x
#define POLACZ(a,b) a##b
#define TRYB_TESTOWY

void ZadPreprocesor::uruchom() {

    cout << "=== #ifdef / #else ===" << endl;

#ifdef TRYB_TESTOWY
    cout << "Program uruchomiony w trybie testowym." << endl;
#else
    cout << "Program uruchomiony w trybie normalnym." << endl;
#endif

    cout << endl;

    cout << "=== Makro (#define) ===" << endl;

    int a = 5;
    cout << KWADRAT(a) << endl;

    cout << NAPIS(Tekst) << endl;

    int liczba1 = 100;
    cout << POLACZ(liczba,1) << endl;
}