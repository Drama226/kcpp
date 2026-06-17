<<<<<<< HEAD
#include <iostream>
#include <string>

using namespace std;

struct Student {
    string imie;
    int wiek;


    Student(string i = "Brak", int w = 0)
        : imie(i), wiek(w) {}  
};

int main() {

    Student s1;

    s1.imie = "Jan";
    s1.wiek = 20;


    cout << "Student 1:" << endl;
    cout << "Imie: " << s1.imie << endl;
    cout << "Wiek: " << s1.wiek << endl;

    cout << endl;

    Student s2("Anna", 22);

    cout << "Student 2:" << endl;
    cout << "Imie: " << s2.imie << endl;
    cout << "Wiek: " << s2.wiek << endl;

    return 0;
=======
#include <iostream>
#include <string>

using namespace std;

struct Student {
    string imie;
    int wiek;


    Student(string i = "Brak", int w = 0)
        : imie(i), wiek(w) {}  
};

int main() {

    Student s1;

    s1.imie = "Jan";
    s1.wiek = 20;


    cout << "Student 1:" << endl;
    cout << "Imie: " << s1.imie << endl;
    cout << "Wiek: " << s1.wiek << endl;

    cout << endl;

    Student s2("Anna", 22);

    cout << "Student 2:" << endl;
    cout << "Imie: " << s2.imie << endl;
    cout << "Wiek: " << s2.wiek << endl;

    return 0;
>>>>>>> b9a64a71f9f8d086e0227ce74564a32a4c14bb71
}