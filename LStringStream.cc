#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    string dane = "Jan 25 180.5";

    stringstream ss(dane);

    string imie;
    int wiek;
    double wzrost;

    ss >> imie >> wiek >> wzrost;

    cout << "Imie: " << imie << endl;
    cout << "Wiek: " << wiek << endl;
    cout << "Wzrost: " << wzrost << endl;

    return 0;
}