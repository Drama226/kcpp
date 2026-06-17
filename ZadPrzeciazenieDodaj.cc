#include <iostream>
using namespace std;

int dodaj(int a, int b) {
    return a + b;
}
double dodaj(double a, double b) {
    return a + b;
}
string dodaj(string a, string b) {
    return a + b;
}

int main() {
    int x = 5, y = 10;
    double a = 3.5, b = 4.5;
    string str1 = "Hello, ", str2 = "world!";

    cout << "Suma int: " << dodaj(x, y) << endl;
    cout << "Suma double: " << dodaj(a, b) << endl;
    cout << "Suma string: " << dodaj(str1, str2) << endl;

    return 0;
}