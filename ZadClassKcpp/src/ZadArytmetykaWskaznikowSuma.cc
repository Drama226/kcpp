#include <iostream>
using namespace std;

#include "ZadArytmetykaWskaznikowSuma.h"

int suma(int* array[], int n) {
    int suma = 0;

    for (int i = 0; i < n; i++) {
        suma += *array[i];
    }

    return suma;
}

void ZadArytmetykaWskaznikowSuma::uruchom() {

    int x = 5, y = 10, z = 45, x1 = 20, y1 = 25;

    static int* a[5] = {&x, &y, &z, &x1, &y1};

    int n = sizeof(a) / sizeof(a[0]);

    int result = suma(a, n);

    cout << "Suma: " << result << endl;
}