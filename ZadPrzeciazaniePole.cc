#include <iostream>
using namespace std;

int pole(int x) {

    return x * x;
}
double pole(double a, double b) {
    return a * b;
}
double pole(double r) {
    return 3.14159 * r * r;
}

int main() {
    int a = 5;
    double a2 = 5.0;
    double b = 10.1;
    double r = 3.0;

    cout << "Pole kwadratu o boku " << a << " wynosi: " << pole(a) << endl;
    cout << "Pole prostokąta o bokach " << a << " i " << b << " wynosi: " << pole(a2, b) << endl;
    cout << "Pole okręgu o promieniu " << r << " wynosi: " << pole(r) << endl;

    return 0;
}