#include <iostream>
using namespace std;

enum Miesiace {
    Styczen = 1,
    Luty,
    Marzec,
    Kwiecien,
    Maj,
    Czerwiec,
    Lipiec,
    Sierpien,
    Wrzesien,
    Pazdziernik,
    Listopad,
    Grudzien
    };
//enum zima { Grudzien, Styczen, Luty };  //Jako że Miesiace i zima są unscoped, więc ich enumeratory są w tej samej przestrzeni nazw.
enum class Miesiace2 {
    Styczen = 1,
    Luty,
    Marzec,
    Kwiecien,
    Maj,
    Czerwiec,
    Lipiec,
    Sierpien,
    Wrzesien,
    Pazdziernik,
    Listopad,
    Grudzien
};

int main() {
    Miesiace miesiac = Marzec;
    cout << "Miesiac: " << miesiac << endl; // Wypisze 3, bo Marzec jest trzecim elementem
    Miesiace2 miesiac2 = Miesiace2::Lipiec; // Scoped Enum wymaga zapowiedzenia swojego źródła, tu: Miesiace2
    cout << "Pora roku: " << static_cast<int>(miesiac2) << endl; // Scoped Enum nie ma dynamicznego rzutowania, więc wymagany jest static cast

    return 0;
}