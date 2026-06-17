#include <iostream>
#include <string>

using namespace std;

struct Pracownik {
    string imie;
    double pensja;

    Pracownik() {
        imie = "Nieznany";
        pensja = 0.0;
        cout << "Konstruktor domyslny struktury" << endl;
    }

    Pracownik(string i, double p)
        : imie(i), pensja(p) {
        cout << "Konstruktor z argumentami struktury" << endl;
    }

    void wyswietl() {
        cout << "Imie: " << imie
             << ", pensja: " << pensja << endl;
    }

    ~Pracownik() {
        cout << "Destruktor struktury" << endl;
    }
};

int main() {

    Pracownik p1;                 

    cout << endl;

    Pracownik p2("Anna", 5500);  

    cout << endl;

    p1.wyswietl();
    p2.wyswietl();

    return 0;
}