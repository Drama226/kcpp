#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string imie;
    int wiek;

public:
    Student() {
        imie = "Brak";
        wiek = 0;
        cout << "Wywolano konstruktor domyslny" << endl;
    }

    Student(string i, int w)
        : imie(i), wiek(w) {
        cout << "Wywolano konstruktor z argumentami" << endl;
    }

    void wyswietl() {
        cout << "Imie: " << imie
             << ", wiek: " << wiek << endl;
    }

    ~Student() {
        cout << "Wywolano destruktor" << endl;
    }
};

int main() {

    Student s1;          

    cout << endl;

    Student s2("Jan", 20);   

    cout << endl;

    s1.wyswietl();
    s2.wyswietl();

    return 0;
}