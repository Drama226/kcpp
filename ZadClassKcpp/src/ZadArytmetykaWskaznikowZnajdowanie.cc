#include <iostream>
using namespace std;

#include "ZadArytmetykaWskaznikowZnajdowanie.h"

int* maxElement(int* array, int n) {
    int* max = array;

    for (int i = 0; i < n; i++) {
        if (*(array + i) > *max) {
            max = array + i;
        }
    }

    return max;
}

void ZadArytmetykaWskaznikowZnajdowanie::uruchom() {

    int a[10] = {1,2,3,4,5,6,7,8,9,10};

    int n = sizeof(a) / sizeof(a[0]);

    int* result = maxElement(a, n);

    cout << "Maksimum: " << *result << endl;
}