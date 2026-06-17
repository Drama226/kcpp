#include <iostream>
#include "../include/ZadClassExample.h"
using namespace std;

Napoje ZwracanieWartosc() {
    Napoje Monster;
    Monster.Napoj = "Monster Energy";
    Monster.cena = 5.50;
    Monster.litraz = 0.5;
    return Monster;
}
Napoje& ZwracanieReferencja() {
    static Napoje MtnDew;           //Obiekt tworzony musi być static, w innym wypadku jest niszczony po wyjściu z funkcji 
    MtnDew.Napoj = "Mountain Dew";  //a my zwracamy referencję do nieistniejącego już obiektu
    MtnDew.cena = 5.00;
    MtnDew.litraz = 0.5;
    return MtnDew;
}
Napoje* ZwracanieWskaznik() {
    static Napoje Redbull;           //Obiekt tworzony musi być static, w innym wypadku jest niszczony po wyjściu z funkcji 
    Redbull.Napoj = "Red Bull";  //a my zwracamy wskaźnik nieistniejącego już obiektu
    Redbull.cena = 5.00;
    Redbull.litraz = 0.25;
    return &Redbull;
}
Napoje* ZwracanieTablica() {
    static Napoje Mix[] = {ZwracanieWartosc(), ZwracanieReferencja(), *ZwracanieWskaznik()}; //Obiekt tworzony musi być static, w innym wypadku jest niszczony po wyjściu z funkcji
    //Zwracanie Wskaźnika należy zderefencjonować, aby uzyskać obiekt, a nie wskaźnik do obiektu - bez tego program się nie skompiluje.

    return Mix;    //Tablica przechowuje kopie utworzonych obiektów, a funkcja zwraca wskaźnik do pierwszego elementu tablicy (Napoje*).
}
//Można również zwrócić tablicę samą w sobie, ale wymaga importowania biblioteki <array>.

int main() {
    Napoje Monster = ZwracanieWartosc();
    Napoje& MtnDewRef = ZwracanieReferencja();
    Napoje* RedbullWsk = ZwracanieWskaznik();
    Napoje* MixTab = ZwracanieTablica();
    cout << "Zwracanie wartosc: ";
    Monster.opis();
    cout << "Zwracanie referencja: ";
    MtnDewRef.opis();
    cout << "Zwracanie wskaznik: ";
    RedbullWsk->opis();
    cout << "Zwracanie tablica: ";
    for(int i = 0; i < 3; i++) {
        MixTab[i].opis();
    }

    return 0;
}