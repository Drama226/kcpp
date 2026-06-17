#include <iostream>
using namespace std;

class B;

class A {
private:
    int tajneA;

public:
    A() : tajneA(10) {}

    friend class B;
};

class B {
private:
    int tajneB;

public:
    B() : tajneB(20) {}

    void pokazA(A& a) {
        cout << "B widzi tajneA = " << a.tajneA << endl;
    }

    void pokazB() {
        cout << "tajneB = " << tajneB << endl;
    }

    void probujDostepDoA(A& a) {
        cout << "Proba dostepu do A z B: " << a.tajneA << endl;
    }
};

int main() {

    A a;
    B b;

    cout << "=== Dostep B do A (friend) ===" << endl;
    b.pokazA(a);

    cout << endl;

    cout << "=== Dostep B do swoich danych ===" << endl;
    b.pokazB();

    cout << endl;

    cout << "=== Wniosek ===" << endl;
    cout << "A NIE ma dostepu do B (brak friend w druga strone)" << endl;

    return 0;
}