<<<<<<< HEAD
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct Student {
    string imie;
    string nazwisko;
    int indeks;
};

bool czyIstniejeIndeks(const vector<Student>& studenci, int indeks) {
    for (const auto& s : studenci) {
        if (s.indeks == indeks) {
            return true;
        }
    }
    return false;
}

void dodajStudenta(vector<Student>& studenci) {
    Student s;

    cout << "Imie: ";
    cin >> s.imie;

    cout << "Nazwisko: ";
    cin >> s.nazwisko;

    if (s.imie.empty() || s.nazwisko.empty()) {
        cout << "Imie i nazwisko nie moga byc puste!" << endl;
        return;
    }

    cout << "Numer indeksu: ";
    cin >> s.indeks;

    if (czyIstniejeIndeks(studenci, s.indeks)) {
        cout << "Student o takim numerze indeksu juz istnieje!" << endl;
        return;
    }

    studenci.push_back(s);
    cout << "Student dodany." << endl;
}

void usunStudenta(vector<Student>& studenci) {
    int indeks;

    cout << "Podaj numer indeksu studenta do usuniecia: ";
    cin >> indeks;

    for (auto it = studenci.begin(); it != studenci.end(); ++it) {
        if (it->indeks == indeks) {
            studenci.erase(it);
            cout << "Student usuniety." << endl;
            return;
        }
    }

    cout << "Nie znaleziono studenta." << endl;
}

void wyswietlListe(const vector<Student>& studenci) {
    if (studenci.empty()) {
        cout << "Lista jest pusta." << endl;
        return;
    }

    cout << "\nLista studentow:\n";

    for (const auto& s : studenci) {
        cout << s.imie << " "
             << s.nazwisko << " | indeks: "
             << s.indeks << endl;
    }
}

void sortujListe(vector<Student>& studenci) {
    sort(studenci.begin(), studenci.end(),
         [](const Student& a, const Student& b) {
             if (a.nazwisko == b.nazwisko)
                 return a.imie < b.imie;
             return a.nazwisko < b.nazwisko;
         });

    cout << "Lista posortowana." << endl;
}

void sprawdzStudenta(const vector<Student>& studenci) {
    int indeks;

    cout << "Podaj numer indeksu: ";
    cin >> indeks;

    for (const auto& s : studenci) {
        if (s.indeks == indeks) {
            cout << "Student istnieje: "
                 << s.imie << " "
                 << s.nazwisko << endl;
            return;
        }
    }

    cout << "Student nie istnieje." << endl;
}

int main() {
    vector<Student> studenci;
    int wybor;

    do {
        cout << "\n=== MENU ===" << endl;
        cout << "1. Dodaj studenta" << endl;
        cout << "2. Usun studenta" << endl;
        cout << "3. Wyswietl liste" << endl;
        cout << "4. Sortuj liste" << endl;
        cout << "5. Sprawdz, czy student istnieje" << endl;
        cout << "0. Koniec" << endl;
        cout << "Wybor: ";

        cin >> wybor;

        switch (wybor) {
            case 1:
                dodajStudenta(studenci);
                break;
            case 2:
                usunStudenta(studenci);
                break;
            case 3:
                wyswietlListe(studenci);
                break;
            case 4:
                sortujListe(studenci);
                break;
            case 5:
                sprawdzStudenta(studenci);
                break;
            case 0:
                cout << "Koniec programu." << endl;
                break;
            default:
                cout << "Niepoprawna opcja!" << endl;
        }

    } while (wybor != 0);

    return 0;
=======
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct Student {
    string imie;
    string nazwisko;
    int indeks;
};

bool czyIstniejeIndeks(const vector<Student>& studenci, int indeks) {
    for (const auto& s : studenci) {
        if (s.indeks == indeks) {
            return true;
        }
    }
    return false;
}

void dodajStudenta(vector<Student>& studenci) {
    Student s;

    cout << "Imie: ";
    cin >> s.imie;

    cout << "Nazwisko: ";
    cin >> s.nazwisko;

    if (s.imie.empty() || s.nazwisko.empty()) {
        cout << "Imie i nazwisko nie moga byc puste!" << endl;
        return;
    }

    cout << "Numer indeksu: ";
    cin >> s.indeks;

    if (czyIstniejeIndeks(studenci, s.indeks)) {
        cout << "Student o takim numerze indeksu juz istnieje!" << endl;
        return;
    }

    studenci.push_back(s);
    cout << "Student dodany." << endl;
}

void usunStudenta(vector<Student>& studenci) {
    int indeks;

    cout << "Podaj numer indeksu studenta do usuniecia: ";
    cin >> indeks;

    for (auto it = studenci.begin(); it != studenci.end(); ++it) {
        if (it->indeks == indeks) {
            studenci.erase(it);
            cout << "Student usuniety." << endl;
            return;
        }
    }

    cout << "Nie znaleziono studenta." << endl;
}

void wyswietlListe(const vector<Student>& studenci) {
    if (studenci.empty()) {
        cout << "Lista jest pusta." << endl;
        return;
    }

    cout << "\nLista studentow:\n";

    for (const auto& s : studenci) {
        cout << s.imie << " "
             << s.nazwisko << " | indeks: "
             << s.indeks << endl;
    }
}

void sortujListe(vector<Student>& studenci) {
    sort(studenci.begin(), studenci.end(),
         [](const Student& a, const Student& b) {
             if (a.nazwisko == b.nazwisko)
                 return a.imie < b.imie;
             return a.nazwisko < b.nazwisko;
         });

    cout << "Lista posortowana." << endl;
}

void sprawdzStudenta(const vector<Student>& studenci) {
    int indeks;

    cout << "Podaj numer indeksu: ";
    cin >> indeks;

    for (const auto& s : studenci) {
        if (s.indeks == indeks) {
            cout << "Student istnieje: "
                 << s.imie << " "
                 << s.nazwisko << endl;
            return;
        }
    }

    cout << "Student nie istnieje." << endl;
}

int main() {
    vector<Student> studenci;
    int wybor;

    do {
        cout << "\n=== MENU ===" << endl;
        cout << "1. Dodaj studenta" << endl;
        cout << "2. Usun studenta" << endl;
        cout << "3. Wyswietl liste" << endl;
        cout << "4. Sortuj liste" << endl;
        cout << "5. Sprawdz, czy student istnieje" << endl;
        cout << "0. Koniec" << endl;
        cout << "Wybor: ";

        cin >> wybor;

        switch (wybor) {
            case 1:
                dodajStudenta(studenci);
                break;
            case 2:
                usunStudenta(studenci);
                break;
            case 3:
                wyswietlListe(studenci);
                break;
            case 4:
                sortujListe(studenci);
                break;
            case 5:
                sprawdzStudenta(studenci);
                break;
            case 0:
                cout << "Koniec programu." << endl;
                break;
            default:
                cout << "Niepoprawna opcja!" << endl;
        }

    } while (wybor != 0);

    return 0;
>>>>>>> b9a64a71f9f8d086e0227ce74564a32a4c14bb71
}