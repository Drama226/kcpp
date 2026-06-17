#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    string imie;     


    void przedstawSie() {
        cout << "Mam na imie: " << imie << endl;
    }

    
    inline int pobierzWiek() {
        return wiek;
    }

    
    void ustawDane(string i, int w, double s);
    void wyswietlDane();

private:
    int wiek;         

protected:
    double srednia;   
};


void Student::ustawDane(string i, int w, double s) {
    imie = i;
    wiek = w;
    srednia = s;
}


void Student::wyswietlDane() {
    cout << "Imie: " << imie << endl;
    cout << "Wiek: " << wiek << endl;        
    cout << "Srednia: " << srednia << endl;  
}

int main() {
    Student s;

    s.ustawDane("Jan", 20, 4.5);

    s.przedstawSie();

    cout << "Wiek: "
         << s.pobierzWiek() << endl;

    s.wyswietlDane();

    return 0;
}