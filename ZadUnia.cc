#include <iostream>

using namespace std;

union Dane {
    int liczba;
    float rzeczywista;
    char znak;
};

int main() {
    Dane d;

    d.liczba = 100;
    cout << "liczba = " << d.liczba << endl;

    d.rzeczywista = 3.14f;
    cout << "rzeczywista = " << d.rzeczywista << endl;

    // UWAGA!
    // Po zapisaniu floata wartość inta została nadpisana.
    cout << "liczba po nadpisaniu = "
         << d.liczba << endl;

    d.znak = 'A';
    cout << "znak = " << d.znak << endl;

    // Ponownie odczytujemy inne pole niż ostatnio zapisane
    cout << "rzeczywista po nadpisaniu = "
         << d.rzeczywista << endl;

    return 0;
}