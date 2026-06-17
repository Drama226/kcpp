#include <iostream>
using namespace std;

string tabtostring(int* tab){
    string liczbabin = "";
    int* end = tab + 8;
    while(tab < end){
        liczbabin += to_string(*tab);
        tab++;
    };
    return liczbabin;
}
int strtonum(string lbin){
    int liczba = stoi(lbin, nullptr, 2);
    return liczba;
}

int main(){
    int tab[8] = {};
    cout << "Podaj 8 cyfr 0 lub 1";
    for(int i =0; i < 8; i++){
        cin >> tab[i];
        if(tab[i] != 0 and tab[i] != 1){
            throw invalid_argument("Podane liczby muszą być 0 lub 1");
            return 1;
        }
    };
    string liczbabin = tabtostring(tab);
    cout << liczbabin << endl;
    int liczba = strtonum(liczbabin);
    cout << liczba;
    return 0;
}