#include <iostream>
using namespace std;

void Przesun(int* array, int n) {     
    int temp = *(array + n - 1); // Przechowuje wartość ostatniego elementu tablicy.
    for (int i = n-1; i > 0; i--) {// Ponieważ przesuwamy elementy w prawo, i przy przesunięciu przedostatniego elementu, ostatni element zostanie nadpisany, więc musimy go przechować w zmiennej tymczasowej.
        *(array+i) = *(array+i-1); //Bo gdy chcemy go wpisać na podstawie zapisanego wcześniej wskaźnika, to wartość ostatniego elementu pod zapisanym wskaźnikiem ulega zmianie..
    }
    *array = temp;
}

int main() {
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(a) / sizeof(a[0]);  //liczba elementów = rozmiar tablicy / rozmiar pojedynczego elementu
    cout << "Tablica przed przesunięciem: "<< endl;
    for (int i = 0; i < n; i++) {
        cout << *(a+i)  << " ";
    }
    cout << endl;
    Przesun(a, n);                                  //Funkcja przesuwa elementy w prawo wewnątrz podanej tablicy wskaźników.
    cout << "Tablica po przesunięciu: "<< endl;
    for (int i = 0; i < n; i++) {
        cout << *(a+i) << " ";
    }
    cout << endl;
    return 0;
}