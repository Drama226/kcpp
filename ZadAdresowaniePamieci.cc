#include <stdio.h>
#include <iostream>
#include <sstream>
#include <string>
#include <cstdint>
using namespace std;
int main() {
    int a;
    float b;
    double c;
    

    uintptr_t p1 = reinterpret_cast<uintptr_t>(&a);
    cout << "Adres zmiennej A: " << &a << "\t dec: " << p1 << endl;
    uintptr_t p2 = reinterpret_cast<uintptr_t>(&b);
    cout << "Adres zmiennej B: " << &b << "\t dec: " << p2 << endl;
    uintptr_t p3 = reinterpret_cast<uintptr_t>(&c);
    cout << "Adres zmiennej C: " << &c << "\t dec: " << p3 << endl;
    //Program wypisuje adresy zmiennych a, b i c. Adresy te są w formacie szesnastkowym.
    //Adresowanie zmiennych (w moim przypadku) odbywa się w sposób malejący (od najwyższych adresów do najniższych).
    //Zmienna a ma najwyższy adres, zmienna c najnizszy.
    //Różne typy danych zajmują różne ilości pamięci - Int 4 bajty, float 4 bajty, double 8 bajtów.
    //Kolejność adresowania zmiennych jest zależna od implementacji kompilatora i systemu operacyjnego.
}