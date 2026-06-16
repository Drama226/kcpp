#include <iostream>
using namespace std;

int main() {
    int liczba, suma = 0, licznik = 0;

    cout << "Wprowadzaj liczby (0 konczy program):" << endl;
    cin >> liczba;

    while (liczba != 0) {
        if (liczba > 0) {
            suma += liczba;
            licznik++;
        } else {
            cout << "Podana liczba nie jest dodatnia!" << endl;
        }

        cin >> liczba;
    }

    cout << "Suma wprowadzonych liczb dodatnich: " << suma << endl;
    cout << "Liczba wprowadzonych liczb dodatnich: " << licznik << endl;

    return 0;
}