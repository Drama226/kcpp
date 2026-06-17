#include <iostream>
using namespace std;
void KopiujTablice(int* source, int* destination, int size) {
    int* p = source + size - 1;         //Ktoś stwierdził że można dać wskaźnik do 1 elementu tablicy
    while (p >= source) {               //I stwierdził również, że skoro tak to można to traktować jako index
        *(destination + size - 1) = *p; // Kopiowanie elementu z tablicy źródłowej do docelowej
        destination--;                 
        p--;                            
    }
}

int main() {
    int a[10] = {5, 40, 15, 20, 25, 30, 35, 45, 50, 55}; //Tworzymy tablicę elementów
    int n = sizeof(a) / sizeof(a[0]);               //liczba elementów = rozmiar tablicy / rozmiar pojedynczego elementu
    int b[10]; // Tworzymy drugą tablicę docelową
        cout << "Tablica źródłowa: ";
    for (int i = 0; i < n; ++i) {
        cout << *(a+i) << " "; // Wyświetlamy elementy tablicy źródłowej
    }
    cout << endl;

    cout << "Tablica docelowa: ";
    for (int i = 0; i < n; ++i) {
        cout << *(b+i) << " "; // Wyświetlamy elementy tablicy docelowej
    }
    cout << endl;
    
    KopiujTablice(a, b, n); // Wywołujemy funkcję kopiującą tablicę a do b

    cout << "Tablica źródłowa: ";
    for (int i = 0; i < n; ++i) {
        cout << *(a+i) << " "; // Wyświetlamy elementy tablicy źródłowej
    }
    cout << endl;

    cout << "Tablica docelowa: ";
    for (int i = 0; i < n; ++i) {
        cout << *(b+i) << " "; // Wyświetlamy elementy tablicy docelowej
    }
    cout << endl;

    return 0;
}