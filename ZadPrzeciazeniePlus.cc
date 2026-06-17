#include <iostream>
#include "../include/Punkt.h"
using namespace std;

int main() {
    Punkt p1(3.0, 4.0);
    Punkt p2(1.0, 2.0);
    Punkt p3 = p1 + p2;
    cout << "Punkt p1: (" << p1.getX() << ", " << p1.getY() << ")" << endl;
    cout << "Punkt p2: (" << p2.getX() << ", " << p2.getY() << ")" << endl;
    cout << "Punkt p3 (p1 + p2): (" << p3.getX() << ", " << p3.getY() << ")" << endl;

    return 0;
}