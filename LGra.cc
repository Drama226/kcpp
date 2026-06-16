#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int poziom, maxLiczba;

    cout << "Wybierz poziom trudnosci:" << endl;
    cout << "1 - latwy (1-50)" << endl;
    cout << "2 - sredni (1-100)" << endl;
    cout << "3 - trudny (1-200)" << endl;
    cin >> poziom;

    if (poziom == 1)
        maxLiczba = 50;
    else if (poziom == 3)
        maxLiczba = 200;
    else
        maxLiczba = 100;

    int wylosowana = rand() % maxLiczba + 1;
    int proba;
    int licznik = 0;

    cout << "Zgadnij liczbe (1-" << maxLiczba << ")." << endl;
    cout << "Masz 10 prob." << endl;

    while (licznik < 10) {
        cin >> proba;
        licznik++;

        if (proba < wylosowana) {
            cout << "Za malo!" << endl;
        }
        else if (proba > wylosowana) {
            cout << "Za duzo!" << endl;
        }
        else {
            cout << "Brawo! Zgadles w "
                 << licznik << " probach." << endl;
            return 0;
        }
    }

    cout << "Niestety, wykorzystales wszystkie proby." << endl;
    cout << "Prawidlowa liczba to: " << wylosowana << endl;

    return 0;
}