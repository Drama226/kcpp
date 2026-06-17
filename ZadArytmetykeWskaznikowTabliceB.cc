#include <iostream>
using namespace std;

int main(){
    float a[5] = {};
    float b[5] = {};
    float c[5] = {};

    float* pa = a;
    float* pb = b;
    float* pc = c;
    const int rozmiar = 5;

    cout << "Podaj 5 liczb zmiennoprzecinkowych: ";
    for(int i = 0; i<rozmiar; i++){
        cin >> *(a+i);
    };

    while(pb < b + rozmiar){
        *pb = (*pa*2);
        pb++;
        pa++;
    };

    pa = a;
    pb = b;
    while(pc < c+rozmiar){
        *pc = *pa+*pb;
        pa++;
        pb++;
        pc++;
        
    }
    pa = a;
    pb = b;
    pc = c;

    while(pa < a+rozmiar){
        cout << *pa << " ";
        pa++;
    };
    cout << endl;
    while(pb < b+rozmiar){
        cout << *pb << " ";
        pb++;
    };    
    cout << endl;
    while(pc < c+rozmiar){
        cout << *pc << " ";
        pc++;
    };
    
    return 0;
}
