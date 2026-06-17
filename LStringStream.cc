<<<<<<< HEAD
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
=======
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
>>>>>>> b9a64a71f9f8d086e0227ce74564a32a4c14bb71
}