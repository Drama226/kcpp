#include <iostream>
using namespace std;

int main() {
    static int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int rozmiar = 10;
    int suma = 0;
    int max = *a;
    int* p = a;
    while(p < a+10){
        suma += *p;
        p++;
    };
    cout << "Suma elementów tablicy: " << suma << endl;
    p = a;
    while(p < a+rozmiar){
        if(*p > max){
            max = *p;
        };
        p++;
    };
    cout << "Maksymalny element w tablicy: " << max << endl;
    cout << "Tablica przed obróceniem: ";
    p = a;
    while(p < a+rozmiar){
        cout << *p << ", ";
        p++;
    };
    p = a;
    for(int i = 0; i < rozmiar/2; i++){
        int temp = *(a+9-i);
        *(a+9-i) = *p;
        *p = temp;
        p++;

    };
    cout << endl << "Tablica po obróceniu: ";
    p = a;
    while(p < a+rozmiar){
        cout << *p << ", ";
        p++;
    }

}