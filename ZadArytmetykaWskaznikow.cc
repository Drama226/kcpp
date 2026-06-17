#include <iostream>
using namespace std;
void Funkcja1(int* tabp, int rozmiar){
    cout << "p++: ";
    int* end = tabp + rozmiar;
    while(tabp<end){
        cout << tabp++ << " ";
    }
    cout << endl;
    cout << "++p: ";
    tabp -= rozmiar;
    while(tabp<end){
        cout << ++tabp << " ";
    }
    cout << endl;
    cout << "++*p: ";
    tabp -= rozmiar;
    while(tabp<end){
        cout << ++*tabp << " ";
        tabp++;
    }
    cout << endl;
    cout << "++(*p): ";
    tabp -= rozmiar;
    while(tabp<end){
        cout << ++(*tabp) << " ";
        tabp++;
    }
    cout << endl;
    cout << "++*(p): ";
    tabp -= rozmiar;
    while(tabp<end){
        cout << ++*(tabp) << " ";
        tabp++;
    }
        cout << endl;
    cout << "*p++: ";
    tabp -= rozmiar;
    while(tabp<end){
        cout << *tabp++ << " ";
    }
    cout << endl;
    cout << "(*p)++: ";
    tabp -= rozmiar;
    while(tabp<end){
        cout << (*tabp)++ << " ";
        tabp++;
    }
    cout << endl;
    cout << "*(p)++: ";
    tabp -= rozmiar;
    while(tabp<end){
        cout << *(tabp)++ << " ";
    }
    cout << endl;
    cout << "*++p: ";
    tabp -= rozmiar;
    while(tabp<end){
        cout << *++tabp << " ";     //Pętla wychodzi poza tabicę, najpierw inkrementuje index potem wypisuje wartość za wskaźnikiem
    }
    cout << endl;
    cout << "*(++p): ";
    tabp -= rozmiar;
    while(tabp<end){
        cout << *(++tabp) << " ";   //Pętla wychodzi poza tabicę, najpierw inkrementuje index potem wypisuje wartość za wskaźnikiem
    }
    cout << endl;
}

void Funkcja2(int a, int b, int c)
{   //Jest to zrobione troche inaczej niz na zajeciach bo z jakiegos powodu nie moglem trafic w adres &b gdy robilem (a+1)
    //A gdy robilem a+2 to juz trafialem, ale w adres C. wiec jest jak jest, dziaa nie ruszaj.
    int* p;
    cout << "1. A, B, C: "
         << a << "\t" << b << "\t" << c << endl;
    p = &b;
    *p = 10;
    cout << "2. A, B, C: "
         << a << "\t" << b << "\t" << c << endl;

    p = &c;
    *p = 20;
    cout << "3. A, B, C: "
         << a << "\t" << b << "\t" << c << endl;

    p = &b;
    *p = 30;
    cout << "4. A, B, C: "
         << a << "\t" << b << "\t" << c << endl;

    p = &a;
    *p = 40;
    cout << "5. A, B, C: "
         << a << "\t" << b << "\t" << c << endl;

    p = &b;
    *p = 50;
    cout << "6. A, B, C: "
         << a << "\t" << b << "\t" << c << endl;

    p = &c;
    *p = 60;
    cout << "7. A, B, C: "
         << a << "\t" << b << "\t" << c << endl;

    p = &b;
    *p = 70;
    cout << "8. A, B, C: "
         << a << "\t" << b << "\t" << c << endl;

    p = &a;
    *p = 80;
    cout << "9. A, B, C: "
         << a << "\t" << b << "\t" << c << endl;

    p = &b;
    *p = 90;
    cout << "10. A, B, C: "
         << a << "\t" << b << "\t" << c << endl;
}


int main(){
    int A = 0;
    int B = 0;
    int C = 0;
    int tab[10] = {10, 20, 30, 40, 50, 60, 70, 80,  90, 100};
    int* p = tab;
    Funkcja1(p, 10);
    Funkcja2(A, B, C);
    return 0;
}