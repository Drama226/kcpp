<<<<<<< HEAD
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
=======
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
>>>>>>> b9a64a71f9f8d086e0227ce74564a32a4c14bb71
}