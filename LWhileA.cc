<<<<<<< HEAD
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
=======
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
>>>>>>> b9a64a71f9f8d086e0227ce74564a32a4c14bb71
}