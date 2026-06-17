#include <iostream>
using namespace std;

void OperatoryArytmetyczne(int a, int b){
    cout << "Zmienne a i b przed operacjami: " << a << " " << b << endl;
    cout << "Dodawanie a + b: " << a+b << endl;
    cout << "Zmienne a i b po operacji: " << a << " " << b << endl;
    cout << "Odejmowanie a - b: " << a-b << endl;
    cout << "Zmienne a i b po operacji: " << a << " " << b << endl;
    cout << "Mnożenie a * b: " << a*b << endl;
    cout << "Zmienne a i b po operacji: " << a << " " << b << endl;
    cout << "Dzielenie a / b: " << a/b << endl;
    cout << "Zmienne a i b po operacjach: " << a << " " << b << endl;
}

void OperatoryPrzypisania(int a, int b){
    cout << "Zmienne a i b przed operacjami: " << a << " " << b << endl;
    cout << "Dodawanie a += b: " << (a+=b) << endl;
    cout << "Zmienne a i b po operacji: " << a << " " << b << endl;
    cout << "Odejmowanie a -= b: " << (a-=b) << endl;
    cout << "Zmienne a i b po operacji: " << a << " " << b << endl;
    cout << "Mnożenie a *= b: " << (a*=b) << endl;
    cout << "Zmienne a i b po operacji: " << a << " " << b << endl;
    cout << "Dzielenie a /= b: " << (a/=b) << endl;
    cout << "Zmienne a i b po operacjach: " << a << " " << b << endl;

}


int main(){
    int a = 25;
    int b = 5;
    OperatoryArytmetyczne(a, b);
    cout << "----------------------------------" << endl;
    OperatoryPrzypisania(a, b);
    return 0;
}