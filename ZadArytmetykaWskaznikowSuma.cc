#include <iostream>
using namespace std;

int suma(int* array[], int n) {     //Funkcja otrzymuje tablicę wskaźników do intów oraz liczbę elementów w tablicy.
    int suma = 0;                   
    for (int i = 0; i < n; i++) {
        suma += *array[i];
    }
    return suma;                    //Zwraca sumę wartości wskazywanych przez te wskaźniki.
}

int main() {
    int x = 5, y = 10, z = 45, x1 = 20, y1 = 25;
    static int* a[5] = {&x, &y, &z, &x1, &y1};
    int n = sizeof(a) / sizeof(a[0]);
    int result = suma(a, n);
    cout << "Suma: " << result << endl;
    return 0;
}