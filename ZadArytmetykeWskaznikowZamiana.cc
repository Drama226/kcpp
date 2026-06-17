#include <iostream>
using namespace std;

void zamiana(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;
    int* WskX = &x;
    int* WskY = &y;
    cout << "Przed zamianą: x = " << x << ", y = " << y << endl;

    zamiana(WskX, WskY);

    cout << "Po zamianie: x = " << x << ", y = " << y << endl;
    return 0;
}