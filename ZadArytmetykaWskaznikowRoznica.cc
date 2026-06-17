#include <iostream>
#include <cassert>
using namespace std;


int main() {
    int a[10] = {5, 40, 15, 20, 25, 30, 35, 45, 50, 55}; //Tworzymy tablicę elementów
    int n = sizeof(a) / sizeof(a[0]);               //liczba elementów = rozmiar tablicy / rozmiar pojedynczego elementu
    int resultwsk = &a[0] - &a[n-1];   //Różnica wskaźnika do pierwszego elementu i ostatniego elementu tablicy
    int resultwart = a[0] - a[n-1]; //Różnica wartości pierwszego elementu i ostatniego elementu tablicy
    cout << "Różnica wskaźników: " << resultwsk << endl;
    cout << "Różnica wartości: " << resultwart << endl;
    return 0;
}