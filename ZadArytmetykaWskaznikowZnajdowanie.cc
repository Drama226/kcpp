#include <iostream>
using namespace std;

int* maxElement(int* array, int n) {    //Funkcja przyjmuje wskaźnik na pierwszy element tablicy  
    int* max = array;                   //Max jest typu int* bo przyjmuje wskaźnik array
    for (int i = 0; i < n; i++) {       // Iterujemy po ilości elementów
        if (*(array+i) > *max) {            //Jeśli wartość pod obecnym wskaźnikiem jest większa niż zapisana pod wskaźnikiem Max
            max = array+i;                //zamień wskaźnik
        }
    }
    return max;
}

int main() {
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(a) / sizeof(a[0]);  //liczba elementów = rozmiar tablicy / rozmiar pojedynczego elementu
    int* result = maxElement(a, n);
    cout << "Maksimum: " << *result << endl;
    return 0;
}